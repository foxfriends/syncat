use clap::Parser;
use std::fs;
use std::io::{self, Read};
use std::path::Path;

mod colorize;
mod config;
mod error;
mod filter;
mod language;
mod line;
mod meta_stylesheet;
mod opts;
mod package_manager;

use colorize::Colorizer;
use config::Config;
use error::{Error, Result};
use language::LangMap;
use line::Line;
use meta_stylesheet::MetaStylesheet;
use opts::Opts;

struct Source<'a> {
    language: Option<String>,
    source: String,
    path: Option<&'a Path>,
}

/// The syncat instance holds globally loaded configuration to prevent loading
/// it twice.
struct Syncat {
    opts: Opts,
    config: Config,
    meta_style: MetaStylesheet,
    lang_map: LangMap,
}

impl Syncat {
    fn new(opts: Opts) -> error::Result<Self> {
        let config = opts.config.clone().map(Config::new).unwrap_or_default();
        let lang_map = LangMap::open(&config)?;
        let meta_style = MetaStylesheet::from_file(&config)?;
        Ok(Self {
            opts,
            config,
            lang_map,
            meta_style,
        })
    }

    fn colorize(&self, language: Option<&str>, source: String) -> crate::Result<String> {
        let language = self
            .opts
            .language
            .as_deref()
            .or(language)
            .and_then(|language| self.lang_map.get(language));
        let Some(language) = language else {
            // Language unknown, so just print
            return Ok(source);
        };
        let Some(mut parser) = language.parser(&self.config)? else {
            // Language not installed, so also just print
            return Ok(source);
        };
        let tree = parser.parse(&source, None).unwrap();
        let colorizer = Colorizer {
            source: source.as_str(),
            tree,
            config: &self.config,
            stylesheet: language.style(&self.config)?,
            lang_map: &self.lang_map,
        };
        if self.opts.dev {
            Ok(format!("{:?}", colorizer))
        } else {
            Ok(format!("{}", colorizer))
        }
    }

    fn transform(
        &self,
        language: Option<&str>,
        source: String,
        path: Option<&Path>,
    ) -> crate::Result<Vec<Line>> {
        let source = self.colorize(language, source)?;

        if self.opts.dev {
            Ok(vec![Line::new(source)])
        } else {
            let mut lines = source
                .lines()
                .map(|line| Line::new(line.to_owned()))
                .collect::<Vec<_>>();

            if !source.ends_with('\n') {
                if let Some(line) = lines.last_mut() {
                    line.no_newline = true;
                }
            }

            let lines = filter::git(&self.opts, lines, path);
            let lines = filter::squeeze_blank_lines(&self.opts, lines);
            let lines = filter::line_endings(&self.opts, lines);

            Ok(lines)
        }
    }

    fn print<'a>(
        &self,
        sources: impl IntoIterator<Item = Result<Source<'a>>> + ExactSizeIterator,
    ) -> crate::Result<()> {
        let count = sources.len();
        let mut line_numbers = filter::line_numbers(&self.opts);
        for (index, source) in sources.into_iter().enumerate() {
            let Source {
                language,
                source,
                path,
            } = match source {
                Ok(source) => source,
                Err(error) => {
                    eprintln!("{error}");
                    continue;
                }
            };

            match self.transform(language.as_deref(), source, path) {
                Ok(lines) => {
                    let lines = line_numbers(lines);
                    // NOTE: frame is a bit weird, idk why it needs to move in and return the lines...
                    let lines = filter::frame_header(
                        (index, count),
                        &self.opts,
                        lines,
                        path,
                        &self.meta_style,
                    );
                    for line in &lines {
                        print!("{}", line.to_string(&self.meta_style, self.opts.wrap));
                    }
                    let _ = filter::frame_footer(
                        (index, count),
                        &self.opts,
                        lines,
                        path,
                        &self.meta_style,
                    );
                }
                Err(error) => match path {
                    Some(path) => eprintln!("syncat: {}: {error}", path.display()),
                    None => eprintln!("syncat: {error}"),
                },
            }
        }
        Ok(())
    }
}

fn try_main() -> error::Result<()> {
    let opts = Opts::parse();
    match &opts.command {
        Some(subcommand) => package_manager::main(&opts, subcommand),
        None if opts.files.is_empty() && opts.language.is_none() => {
            // Mimic the behaviour of standard cat, printing lines as they come.
            // These lines cannot be syntax highlighted, as we do not know what the language is.
            loop {
                let mut line = String::new();
                if io::stdin()
                    .read_line(&mut line)
                    .map_err(|er| crate::Error::new("could not read stdin").with_source(er))?
                    == 0
                {
                    return Ok(());
                }
                print!("{}", line);
            }
        }
        None if opts.files.is_empty() => {
            // If a language is specified, read in the whole file and then attempt to print that
            // at once using the specified language.
            let mut stdin = io::stdin();
            let mut source = String::new();
            stdin
                .read_to_string(&mut source)
                .map_err(|er| crate::Error::new("could not read stdin").with_source(er))?;
            let syncat = Syncat::new(opts)?;
            syncat.print(std::iter::once(Ok(Source {
                language: None,
                source,
                path: None,
            })))
        }
        None => {
            // Attempt to style each of the supplied files, detecting languages based on extension
            // while respecting the override provided.
            //
            // TODO: Add detection for hashbang/vim modeline/etc.
            let files = opts.files.clone();
            let sources = files.iter().map(|path| {
                Ok(Source {
                    language: path
                        .extension()
                        .and_then(|s| s.to_str())
                        .map(|s| s.to_owned()),
                    source: fs::read_to_string(path).map_err(|err| {
                        Error::new("failed to read file")
                            .with_source(err)
                            .with_path(path)
                    })?,
                    path: Some(path.as_ref()),
                })
            });
            let syncat = Syncat::new(opts)?;
            syncat.print(sources)
        }
    }
}

fn main() {
    if let Err(error) = try_main() {
        eprintln!("{}", error);
        std::process::exit(1);
    }
}
