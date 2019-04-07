use std::path::PathBuf;
use terminal_size::terminal_size;
use crate::meta::MetaStylesheet;
use crate::line::Line;
use crate::Opts;

pub fn frame_header(
    (index, _count): (usize, usize),
    &Opts { frame, git, numbered, numbered_nonblank, .. }: &Opts,
    source: Vec<Line>,
    path: Option<&PathBuf>,
    style: &MetaStylesheet,
) -> Vec<Line> {
    let width = terminal_size().map(|x| (x.0).0).unwrap_or(80);
    let margin_start = if git { 2 } else { 0 }
        + if numbered || numbered_nonblank { 6 } else { 0 };
    match frame {
        0 => {}
        1 => {
            // TODO: assumptions being made about the number of characters in each segment should
            // be avoided
            for _ in 0..margin_start {
                print!("{}", style.margin().top());
            }
            if margin_start != 0 {
                if index == 0 {
                    print!("{}", style.margin().top_end());
                } else {
                    print!("{}", style.margin().cross());
                }
            }
            for _ in margin_start + if margin_start != 0 { 3 } else { 0 } ..width {
                print!("{}", style.margin().top());
            }
            println!();
        }
        _ => {
            for _ in 0..margin_start {
                print!("{}", style.margin().top());
            }
            if margin_start != 0 {
                if index == 0 {
                    print!("{}", style.margin().top_end());
                } else {
                    print!("{}", style.margin().cross());
                }
            }
            for _ in margin_start + if margin_start != 0 { 3 } else { 0 } ..width {
                print!("{}", style.margin().top());
            }
            println!();

            for _ in 0..margin_start {
                print!(" ");
            }
            if margin_start != 0 {
                print!("{}", style.margin().left());
            }
            println!("{}", style.title().paint(path.and_then(|path| path.to_str()).unwrap_or("Input")));

            for _ in 0..margin_start {
                print!("{}", style.margin().top());
            }
            if margin_start != 0 {
                print!("{}", style.margin().cross());
            }
            for _ in margin_start + if margin_start != 0 { 3 } else { 0 } ..width {
                print!("{}", style.margin().top());
            }
            println!();

        }
    };
    source
}

pub fn frame_footer(
    (index, count): (usize, usize),
    &Opts { frame, git, numbered, numbered_nonblank, .. }: &Opts,
    source: Vec<Line>,
    _path: Option<&PathBuf>,
    style: &MetaStylesheet,
) -> Vec<Line> {
    let width = terminal_size().map(|x| (x.0).0).unwrap_or(80);
    let margin_start = if git { 2 } else { 0 }
        + if numbered || numbered_nonblank { 6 } else { 0 };
    match frame {
        0 => {}
        _ => {
            if source.last().map(|line| line.no_newline).unwrap_or(false) {
                println!();
            }
            if index == count - 1 {
                // TODO: assumptions being made about the number of characters in each segment should
                // be avoided
                for _ in 0..margin_start {
                    print!("{}", style.margin().bottom());
                }
                if margin_start != 0 {
                    print!("{}", style.margin().bottom_end());
                }
                for _ in margin_start + if margin_start != 0 { 3 } else { 0 } ..width {
                    print!("{}", style.margin().bottom());
                }
                println!();
            }
        }
    };
    source
}
