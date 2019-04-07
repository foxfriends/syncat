use std::fs;
use std::io::{self, Read};
use std::path::PathBuf;
use std::sync::{Arc, Mutex, mpsc::channel};

use structopt::StructOpt;
use tree_sitter::Parser;

mod colorize;
mod dirs;
mod error;
mod filter;
mod language;
mod line;
mod meta;

use self::language::Lang;
use self::line::Line;
use self::meta::load_meta_stylesheet;
use self::error::BoxedError;

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

    /// Soft-wrap lines at a fixed width
    #[structopt(short, long)]
    pub wrap: Option<usize>,

    /// Files to parse and print
    #[structopt(name="FILE", parse(from_os_str))]
    pub files: Vec<PathBuf>,
}

fn transform(
    opts: &Opts,
    lang: Option<&String>, 
    contents: String,
    path: Option<&PathBuf>, 
) -> Result<Vec<Line>, BoxedError> {
    let source: String = opts.language.as_ref()
        .or(lang)
        .and_then(|lang| lang.parse::<Lang>().ok())
        .and_then(|lang| {
            let mut parser = Parser::new();
            parser.set_language(lang.parser()).ok()?;
            Some((parser.parse(contents.as_str(), None)?, lang))
        })
        .map(|(tree, lang)| {
            if opts.dev {
                colorize::print_tree(&contents, tree, &lang.style()?)
            } else {
                colorize::print_source(&contents, tree, &lang.style()?)
            }
        })
        .unwrap_or_else(|| Ok(contents.clone()))?;

    if opts.dev {
        Ok(vec![Line::new(source)])
    } else {
        let mut lines = source
            .lines()
            .map(|line| Line::new(line.to_owned()))
            .collect::<Vec<_>>();
        if !contents.ends_with("\n") {
            lines.last_mut().unwrap().no_newline = true;
        }

        let lines = filter::git(opts, lines, path);
        let lines = filter::squeeze_blank_lines(opts, lines);
        let lines = filter::line_endings(opts, lines);

        Ok(lines)
    }
}

fn print<I>(opts: Opts, sources: I, count: usize)
where 
    I: Iterator<Item = (Option<String>, Result<String, BoxedError>, Option<PathBuf>)>
{
    let opts = Arc::new(opts);
    let meta_style = Arc::new(load_meta_stylesheet());
    let line_numbers = Arc::new(Mutex::new(filter::line_numbers(opts.as_ref())));
    let mut threads = vec![];
    let mut prev_done = None;
    for (i, (lang, contents, path)) in sources.enumerate() {
        let (completed, next_done) = channel();
        let wait_for = prev_done.take();
        prev_done = Some(next_done);
        let opts = opts.clone();
        let meta_style = meta_style.clone();
        let line_numbers = line_numbers.clone();
        threads.push(std::thread::spawn(move || {
            let lines = contents
                .and_then(|source| transform(opts.as_ref(), lang.as_ref(), source, path.as_ref()));
            if let Some(rx) = wait_for {
                rx.recv().unwrap();
            }
            match lines {
                Ok(lines) => {
                    let line_numbers = &mut *line_numbers.lock().unwrap();
                    let lines = line_numbers(lines);
                    let lines = filter::frame_header((i, count), opts.as_ref(), lines, path.as_ref(), &meta_style);
                    for line in &lines {
                        print!("{}", line.to_string(&meta_style, opts.wrap));
                    }
                    let _ = filter::frame_footer((i, count), opts.as_ref(), lines, path.as_ref(), &meta_style);
                }
                Err(error) => {
                    eprint!("syncat: {}", error);
                }
            }
            completed.send(()).unwrap();
        }));
    }
    if let Some(rx) = prev_done {
        rx.recv().unwrap();
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
                    let sources = vec![(None, Ok(source), None)];
                    print(opts, sources.into_iter(), 1);
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
                    .map_err(|error| Box::new(error::Error(format!("{:?}: {}", path, error))) as BoxedError),
                Some(path.clone()),
            ));
        let file_count = opts.files.len();
        print(opts, sources, file_count);
    }
}
