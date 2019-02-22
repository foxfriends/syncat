use std::path::PathBuf;
use std::fs;

use structopt::StructOpt;
use tree_sitter::Parser;

mod language;
mod colorize;

use self::colorize::colorize;

/// Syntax aware cat utility.
#[derive(StructOpt, Debug)]
#[structopt(name = "syncat")]
struct Opts {
    /// The syntax to use to parse the files
    #[structopt(short="s", long="syntax")]
    syntax: Option<String>,
    /// Files to parse and print
    #[structopt(name="FILE", parse(from_os_str))]
    files: Vec<PathBuf>,
}

fn main() {
    let Opts { syntax, files } = Opts::from_args();

    files
        .into_iter()
        .map(|path| (path.extension().and_then(|s| s.to_str()).map(|s| s.to_string()), fs::read_to_string(path)))
        .map(|(lang, contents)| -> Result<String, Box<dyn std::error::Error>> {
            let contents: String = contents?;
            lang.as_ref()
                .or(syntax.as_ref())
                .and_then(language::parse)
                .and_then(|language| {
                    let mut parser = Parser::new();
                    parser.set_language(language).unwrap();
                    parser.parse(&contents, None)
                })
                .map(|tree| colorize(&contents, tree))
                .unwrap_or_else(move || Ok(contents))
        })
        .for_each(|result| {
            match result {
                Ok(text) => print!("{}", text),
                Err(error) => eprintln!("Error: {:?}", error),
            }
        });
}
