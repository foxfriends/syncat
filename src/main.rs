use std::path::PathBuf;
use std::fs;
use std::io::{self, Read};

use structopt::StructOpt;
use tree_sitter::Parser;

mod colorize;
mod filter;
mod language;
mod dirs;
mod error;
mod meta;
mod style;
mod stylesheet;

use self::language::Lang;
use self::meta::load_meta_stylesheet;

/// Syntax aware cat utility.
#[derive(StructOpt, Debug)]
#[structopt(name = "syncat")]
pub struct Opts {
    /// Use Git to show recent changes
    #[structopt(short="g", long="git")]
    pub show_git: bool,

    /// Squeeze consecutive blank lines into one
    #[structopt(short="s", long="squeeze")]
    pub squeeze_blank_lines: bool,

    /// Show line endings
    #[structopt(short="e", long="endings")]
    pub show_line_endings: bool,

    /// Number non-empty input lines (overrides -n)
    #[structopt(short="b")]
    pub number_lines_nonblank: bool,

    /// Number all input lines
    #[structopt(short="n", long="--numbered")]
    pub number_lines: bool,

    /// Prints a parsed s-expression, for debugging and theme creation
    #[structopt(long="dev")]
    pub dev: bool,

    /// The language to use to parse the files
    #[structopt(short="l", long="language")]
    pub syntax: Option<String>,

    /// Files to parse and print
    #[structopt(name="FILE", parse(from_os_str))]
    pub files: Vec<PathBuf>,
}

fn print<E, I>(opts: &Opts, sources: I)
where E: std::error::Error,
      I: Iterator<Item = (Option<String>, Result<String, E>)>
{
    let meta_style = load_meta_stylesheet();
    sources
        // parse
        .map(|(lang, contents)| -> Result<String, Box<dyn std::error::Error>> {
            let contents: String = contents?;
            opts.syntax.as_ref()
                .or(lang.as_ref())
                .and_then(|lang| lang.parse::<Lang>().ok())
                .and_then(|lang| {
                    let mut parser = Parser::new();
                    parser.set_language(lang.parser()).ok()?;
                    Some((parser.parse(&contents, None)?, lang))
                })
                .map(|(tree, lang)| {
                    if opts.dev {
                        colorize::print_tree(&contents, tree, &lang.style()?)
                    } else {
                        colorize::print_source(&contents, tree, &lang.style()?)
                    }
                })
                .unwrap_or_else(move || Ok(contents))
        })

        // apply filters
        .map(|source| filter::git(opts, &meta_style, source))
        .map(|source| filter::squeeze_blank_lines(opts, source))
        .map(filter::line_numbers(opts, &meta_style))
        .map(|source| filter::line_endings(opts, &meta_style, source))

        // print
        .for_each(|result| {
            match result {
                Ok(text) => print!("{}", text),
                Err(error) => eprint!("syncat: {}", error),
            }
        });
}

fn main() {
    let opts = Opts::from_args();

    if opts.files.is_empty() {
        let mut stdin = io::stdin();
        if opts.syntax.is_some() {
            let mut source = String::new();
            match stdin.read_to_string(&mut source) {
                Ok(..) => {
                    let sources: Vec<(_, Result<_, error::Error>)> = vec![(None, Ok(source))];
                    print(&opts, sources.into_iter());
                },
                Err(error) => eprintln!("{}", error),
            }
        } else {
            // mimic the behaviour of standard cat, printing lines as they come
            loop {
                let mut line = String::new();
                match stdin.read_line(&mut line) {
                    Ok(0) => return,
                    Ok(..) => print!("{}", line),
                    Err(error) => {
                        eprintln!("{}", error);
                        return
                    }
                }
            }
        }
    } else {
        let sources = opts.files.clone()
            .into_iter()
            .map(|path| (
                path.extension()
                    .and_then(|s| s.to_str())
                    .map(|s| s.to_string()),
                fs::read_to_string(&path)
                    .map_err(|error| error::Error(format!("{:?}: {}", path, error))),
            ));
        print(&opts, sources);
    }
}
