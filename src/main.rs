use std::path::PathBuf;
use std::fs;
use std::io::{self, Read};

use structopt::StructOpt;
use tree_sitter::Parser;

mod colorize;
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
struct Opts {
    #[structopt(short="u")]
    ignored: bool,

    /// Show line endings
    #[structopt(short="e", long="endings")]
    show_line_endings: bool,

    /// Number non-empty input lines (overrides -n)
    #[structopt(short="b")]
    number_lines_nonblank: bool,

    /// Number all input lines
    #[structopt(short="n", long="--numbered")]
    number_lines: bool,

    /// Prints a parsed s-expression, for debugging and theme creation
    #[structopt(long="dev")]
    dev: bool,
    /// The syntax to use to parse the files
    #[structopt(short="s", long="syntax")]
    syntax: Option<String>,
    /// Files to parse and print
    #[structopt(name="FILE", parse(from_os_str))]
    files: Vec<PathBuf>,
}

fn print<E, I>(Opts { dev, syntax, show_line_endings, number_lines_nonblank, number_lines, .. }: Opts, sources: I)
where E: std::error::Error,
      I: Iterator<Item = (Option<String>, Result<String, E>)>
{
    let mut line_number: usize = 0;
    let meta_style = load_meta_stylesheet();
    sources
        // parse
        .map(|(lang, contents)| -> Result<String, Box<dyn std::error::Error>> {
            let contents: String = contents?;
            syntax.as_ref()
                .or(lang.as_ref())
                .and_then(|lang| lang.parse::<Lang>().ok())
                .and_then(|lang| {
                    let mut parser = Parser::new();
                    parser.set_language(lang.parser()).ok()?;
                    Some((parser.parse(&contents, None)?, lang))
                })
                .map(|(tree, lang)| {
                    if dev {
                        colorize::print_tree(&contents, tree, &lang.style()?)
                    } else {
                        colorize::print_source(&contents, tree, &lang.style()?)
                    }
                })
                .unwrap_or_else(move || Ok(contents))
        })

        // apply filters
        .map(|source| {
            let margin = meta_style.margin
                .build()
                .paint(meta_style.margin.content().unwrap_or("  "));

            if dev {
                source

            } else if number_lines_nonblank {
                Ok(source?.lines()
                    .map(|line| {
                        if line.is_empty() {
                            format!("      {}{}\n", margin, line.to_string())
                        } else {
                            line_number += 1;
                            let line_number_str = format!("{}", meta_style.line_number.build().paint(format!("{: >6}", line_number)));
                            format!("{: >6}{}{}\n", line_number_str, margin, line)
                        }
                    })
                    .collect::<String>())

            } else if number_lines {
                Ok(source?.lines()
                    .map(|line| {
                        line_number += 1;
                        let line_number_str = format!("{}", meta_style.line_number.build().paint(format!("{: >6}", line_number)));
                        format!("{}{}{}\n", line_number_str, margin, line)
                    })
                    .collect::<String>())

            } else {
                source
            }
        })
        .map(|source| {
            let line_ending = meta_style.line_ending
                .build()
                .paint(meta_style.line_ending.content().unwrap_or("$"));

            if dev {
                source
            } else if show_line_endings {
                Ok(source?.lines()
                    .map(|line| format!("{}{}\n", line, line_ending))
                    .collect::<String>())
            } else {
                source
            }
        })

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
                    print(opts, sources.into_iter());
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
        print(opts, sources);
    }
}
