use std::fs;
use std::io::{self, Read};
use std::path::{Path, PathBuf};
use std::collections::BTreeMap;

use structopt::StructOpt;
use tree_sitter::Parser;

mod colorize;
mod dirs;
mod error;
mod filter;
mod language;
mod line;
mod meta_stylesheet;

use language::Lang;
use line::Line;
use meta_stylesheet::MetaStylesheet;

use colorize::Colorizer;
use dirs::config;

/// Syntax aware cat utility.
#[derive(StructOpt, Debug)]
#[structopt(name = "syncat")]
#[structopt(rename_all = "kebab-case")]
#[structopt(setting = structopt::clap::AppSettings::ColoredHelp)]
pub struct Opts {
    /// Level of framing around each file. Repeat for bigger frame
    #[structopt(short, long, parse(from_occurrences))]
    pub frame: usize,

    /// Use Git to show recent changes
    #[structopt(short, long)]
    pub git: bool,

    /// Squeeze consecutive blank lines into one
    #[structopt(short, long)]
    pub squeeze: bool,

    /// Show line endings
    #[structopt(short="e", long="endings")]
    pub show_line_endings: bool,

    /// Number non-empty input lines (overrides -n)
    #[structopt(short="b", long)]
    pub numbered_nonblank: bool,

    /// Number all input lines
    #[structopt(short, long)]
    pub numbered: bool,

    /// Prints a parsed s-expression, for debugging and theme creation
    #[structopt(long)]
    pub dev: bool,

    /// The language to use to parse the files
    #[structopt(short, long)]
    pub language: Option<String>,

    /// Soft-wrap lines at a fixed width
    #[structopt(short, long)]
    pub wrap: Option<usize>,

    /// Files to parse and print
    #[structopt(name="FILE", parse(from_os_str))]
    pub files: Vec<PathBuf>,
}

fn transform(
    opts: &Opts,
    language: Option<&String>,
    source: String,
    path: Option<&Path>,
) -> Result<Vec<Line>, Box<dyn std::error::Error>> {
    let lang_map: BTreeMap<String, String> = match fs::read_to_string(config().join("languages.toml")) {
        Ok(string) => toml::from_str(&string)?,
        Err(..) => BTreeMap::default(),
    };

    let language = opts.language.as_ref()
        .or(language)
        .map(|language| lang_map.get(language).unwrap_or(language))
        .and_then(|language| language.parse::<Lang>().ok());

    let source = if let Some(language) = language {
        let mut parser = Parser::new();
        parser.set_language(language.parser()).unwrap();
        let tree = parser.parse(&source, None).unwrap();
        let colorizer = Colorizer { source: source.as_str(), tree, stylesheet: language.style()? };
        if opts.dev {
            format!("{:?}", colorizer)
        } else {
            format!("{}", colorizer)
        }
    } else {
        source
    };

    if opts.dev {
        Ok(vec![Line::new(source)])
    } else {
        let mut lines = source
            .lines()
            .map(|line| Line::new(line.to_owned()))
            .collect::<Vec<_>>();

        if !source.ends_with("\n") {
            if let Some(line) = lines.last_mut() {
                line.no_newline = true;
            }
        }

        let lines = filter::git(opts, lines, path);
        let lines = filter::squeeze_blank_lines(opts, lines);
        let lines = filter::line_endings(opts, lines);

        Ok(lines)
    }
}

struct Source<'a> {
    language: Option<String>,
    source: std::io::Result<String>,
    path: Option<&'a Path>,
}

fn print<'a>(opts: &Opts, sources: impl IntoIterator<Item = Source<'a>>, count: usize) -> Result<(), Box<dyn std::error::Error>> {
    let meta_style = MetaStylesheet::from_file()?;
    let mut line_numbers = filter::line_numbers(opts);
    sources
        .into_iter()
        .enumerate()
        .for_each(move |(index, Source { language, source, path })| {
            let lines = source
                .map_err(|error| Box::new(error) as Box<dyn std::error::Error>)
                .and_then(|source| transform(opts, language.as_ref(), source, path));
            match lines {
                Ok(lines) => {
                    let lines = line_numbers(lines);
                    let lines = filter::frame_header((index, count), opts, lines, path, &meta_style);
                    for line in &lines {
                        print!("{}", line.to_string(&meta_style, opts.wrap));
                    }
                    let _ = filter::frame_footer((index, count), opts, lines, path, &meta_style);
                }
                Err(error) => {
                    eprint!("syncat: {}", error);
                }
            }
        });
    Ok(())
}

#[paw::main]
fn main(opts: Opts) -> Result<(), Box<dyn std::error::Error>> {
    if opts.files.is_empty() {
        let mut stdin = io::stdin();
        if opts.language.is_some() {
            // If a language is specified, read in the whole file and then attempt to print that
            // at once using the specified language.
            let mut source = String::new();
            stdin.read_to_string(&mut source)?;
            print(&opts, std::iter::once(Source {
                language: None,
                source: Ok(source),
                path: None,
            }), 1)
        } else {
            // Mimic the behaviour of standard cat, printing lines as they come.
            // These lines cannot be syntax highlighted, as we do not know what the language is.
            loop {
                let mut line = String::new();
                if stdin.read_line(&mut line)? == 0 { return Ok(()); }
                print!("{}", line);
            }
        }
    } else {
        // Attempt to style each of the supplied files, detecting languages based on extension
        // while respecting the override provided.
        // TODO: Add detection for hashbang/vim modeline/etc.
        let file_count = opts.files.len();
        let sources = opts.files
            .iter()
            .map(|path| Source {
                language: path.extension()
                    .and_then(|s| s.to_str())
                    .map(|s| s.to_string()),
                source: fs::read_to_string(&path),
                path: Some(path.as_ref()),
            });
        print(&opts, sources, file_count)
    }
}
