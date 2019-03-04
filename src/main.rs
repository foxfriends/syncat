use std::fs;
use std::io::{self, Read};
use std::path::PathBuf;

use structopt::StructOpt;
use tree_sitter::Parser;

mod colorize;
mod dirs;
mod error;
mod filter;
mod language;
mod line;
mod meta;
mod style;
mod stylesheet;

use self::language::Lang;
use self::line::Line;
use self::meta::load_meta_stylesheet;

/// Syntax aware cat utility.
#[derive(StructOpt, Debug)]
#[structopt(name = "syncat")]
#[structopt(rename_all = "kebab-case")]
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

    /// Files to parse and print
    #[structopt(name="FILE", parse(from_os_str))]
    pub files: Vec<PathBuf>,
}

fn print<E, I>(opts: &Opts, sources: I, count: usize)
where 
    E: std::error::Error,
    I: Iterator<Item = (Option<String>, Result<String, E>, Option<PathBuf>)>
{
    let meta_style = load_meta_stylesheet();
    let mut line_numbers = filter::line_numbers(opts);

    let coloured = sources
        // parse
        .map(|(lang, contents, path)| -> (String, Result<String, Box<dyn std::error::Error>>, Option<PathBuf>) {
            let contents: String = match contents {
                Ok(contents) => contents,
                Err(error) => return (String::default(), Err(Box::new(error)), path),
            };
            let source = opts.language.as_ref()
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
                .unwrap_or_else(|| Ok(contents.clone()));
            (contents, source, path)
        });

    if opts.dev {
        coloured
            // print
            .for_each(|(_original, result, _path)| {
                match result {
                    Ok(text) => print!("{}", text),
                    Err(error) => eprint!("syncat: {}", error),
                }
            });
    } else {
        coloured
            .map(|(original, source, path)| {
                let lines = source.map(|source| {
                    let mut lines = source
                        .lines()
                        .map(|line| Line::new(line.to_owned()))
                        .collect::<Vec<_>>();
                    if !original.ends_with("\n") {
                        lines.last_mut().unwrap().no_newline = true;
                    }
                    lines
                 });
                (lines, path)
            })
            // apply filters
            .map(|(source, path)| (filter::margin(opts, source), path))
            .map(|(source, path)| (filter::git(opts, source, path.as_ref()), path))
            .map(|(source, path)| (filter::squeeze_blank_lines(opts, source), path))
            .map(move |(source, path)| (line_numbers(source), path))
            .map(|(source, path)| (filter::line_endings(opts, source), path))

            // print
            .enumerate()
            .for_each(|(i, (source, path))| {
                let result = filter::frame_header((i, count), &opts, source, path.as_ref(), &meta_style);
                match &result {
                    Ok(lines) => lines.iter().for_each(|line| print!("{}", line.to_string(&meta_style))),
                    Err(error) => eprint!("syncat: {}", error),
                }
                let _ = filter::frame_footer((i, count), &opts, result, path.as_ref(), &meta_style);
            });
    }
}

fn main() {
    let opts = Opts::from_args();

    if opts.files.is_empty() {
        let mut stdin = io::stdin();
        if opts.language.is_some() {
            let mut source = String::new();
            match stdin.read_to_string(&mut source) {
                Ok(..) => {
                    let sources: Vec<(_, Result<_, error::Error>, _)> = vec![(None, Ok(source), None)];
                    print(&opts, sources.into_iter(), 1);
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
                Some(path.clone()),
            ));
        print(&opts, sources, opts.files.len());
    }
}
