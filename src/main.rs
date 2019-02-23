use std::path::PathBuf;
use std::fs;

use structopt::StructOpt;
use tree_sitter::Parser;

mod colorize;
mod language;
mod dirs;
mod error;
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

fn main() {
    let Opts { dev, syntax, files } = Opts::from_args();

    files
        .into_iter()
        .map(|path| (path.extension().and_then(|s| s.to_str()).map(|s| s.to_string()), fs::read_to_string(path)))
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
                        colorize::tree(&contents, tree, &lang.style()?)
                    } else { 
                        colorize::source(&contents, tree, &lang.style()?)
                    }
                })
                .unwrap_or_else(move || Ok(contents))
        })
        .for_each(|result| {
            match result {
                Ok(text) => print!("{}", text),
                Err(error) => eprintln!("Error: {:?}", error),
            }
        });
}
