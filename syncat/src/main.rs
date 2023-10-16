use std::fs;
use std::io::{self, Read};
use std::path::{Path, PathBuf};

use clap::{ArgAction, Parser};

mod colorize;
mod config;
mod dirs;
mod error;
mod filter;
mod language;
mod line;
mod meta_stylesheet;
mod package_manager;

use language::LangMap;
use line::Line;
use meta_stylesheet::MetaStylesheet;

use colorize::Colorizer;

/// Syntax aware cat utility.
#[derive(Parser, Debug)]
#[clap(name = "syncat")]
#[clap(rename_all = "kebab-case")]
pub struct Opts {
    /// Level of framing around each file. Repeat for bigger frame
    #[arg(short, long, action=ArgAction::Count)]
    frame: u8,

    /// Use Git to show recent changes
    #[arg(short, long)]
    git: bool,

    /// Squeeze consecutive blank lines into one
    #[arg(short, long)]
    squeeze: bool,

    /// Show line endings
    #[arg(short = 'e', long = "endings")]
    show_line_endings: bool,

    /// Number non-empty input lines (overrides -n)
    #[arg(short = 'b', long)]
    numbered_nonblank: bool,

    /// Number all input lines
    #[arg(short, long)]
    numbered: bool,

    /// Prints a parsed s-expression, for debugging and theme creation
    #[arg(long)]
    dev: bool,

    /// The language to use to parse the files
    #[arg(short, long)]
    language: Option<String>,

    /// Soft-wrap lines at a fixed width
    #[arg(short, long)]
    wrap: Option<usize>,

    /// Files to parse and print
    #[arg(name = "FILE")]
    files: Vec<PathBuf>,

    #[command(subcommand)]
    command: Option<Subcommand>,
}

#[derive(Parser, Debug)]
enum Subcommand {
    /// Installs all languages listed in the `languages.toml` file. Previously installed packages
    /// will be updated, if updates are available. This process may take a long time, depending on
    /// how many languages are being installed.
    Install {
        /// If you provide a list of languages, only only those languages will be installed now. They must
        /// be listed in the `languages.toml` file first.
        languages: Vec<String>,
    },
    /// Remove an installed language.
    Remove {
        /// The name of the language to remove.
        language: String,
    },
    /// List all installed languages.
    List,
}

fn transform(
    opts: &Opts,
    language: Option<&String>,
    source: String,
    path: Option<&Path>,
) -> Result<Vec<Line>, Box<dyn std::error::Error>> {
    let lang_map = LangMap::open()?;

    let language = opts
        .language
        .as_ref()
        .or(language)
        .and_then(|language| lang_map.get(language));

    let source = if let Some(language) = language {
        let mut parser = tree_sitter::Parser::new();
        parser.set_language(language.parser()?).unwrap();
        let tree = parser.parse(&source, None).unwrap();
        let colorizer = Colorizer {
            source: source.as_str(),
            tree,
            stylesheet: language.style()?,
            lang_map: &lang_map,
        };
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

        if !source.ends_with('\n') {
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

fn print<'a>(
    opts: &Opts,
    sources: impl IntoIterator<Item = Source<'a>>,
    count: usize,
) -> Result<(), Box<dyn std::error::Error>> {
    let meta_style = MetaStylesheet::from_file()?;
    let mut line_numbers = filter::line_numbers(opts);
    for (
        index,
        Source {
            language,
            source,
            path,
        },
    ) in sources.into_iter().enumerate()
    {
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
    }
    Ok(())
}

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let opts = Opts::parse();
    match &opts.command {
        Some(subcommand) => package_manager::main(subcommand),
        None if opts.files.is_empty() && opts.language.is_none() => {
            // Mimic the behaviour of standard cat, printing lines as they come.
            // These lines cannot be syntax highlighted, as we do not know what the language is.
            loop {
                let mut line = String::new();
                if io::stdin().read_line(&mut line)? == 0 {
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
            stdin.read_to_string(&mut source)?;
            print(
                &opts,
                std::iter::once(Source {
                    language: None,
                    source: Ok(source),
                    path: None,
                }),
                1,
            )
        }
        None => {
            // Attempt to style each of the supplied files, detecting languages based on extension
            // while respecting the override provided.
            // TODO: Add detection for hashbang/vim modeline/etc.
            let file_count = opts.files.len();
            let sources = opts.files.iter().map(|path| Source {
                language: path
                    .extension()
                    .and_then(|s| s.to_str())
                    .map(|s| s.to_owned()),
                source: fs::read_to_string(path),
                path: Some(path.as_ref()),
            });
            print(&opts, sources, file_count)
        }
    }
}
