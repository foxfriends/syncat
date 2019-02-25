use std::path::PathBuf;
use std::fs;
use std::io::{self, Read};

use structopt::StructOpt;
use tree_sitter::Parser;

mod colorize;
mod language;
mod dirs;
mod error;
mod style;
mod stylesheet;

use self::language::Lang;

/// Syntax aware cat utility.
#[derive(StructOpt, Debug)]
#[structopt(name = "syncat")]
struct Opts {
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

fn print<E: std::error::Error, I: Iterator<Item = (Option<String>, Result<String, E>)>>(Opts { dev, syntax, .. }: Opts, sources: I) {
    sources
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
