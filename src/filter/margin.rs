use crate::Opts;
use crate::line::Line;

pub fn margin<E>(
    &Opts { show_git, number_lines_nonblank, number_lines, .. }: &Opts,
    source: Result<Vec<Line>, E>,
) -> Result<Vec<Line>, E> {
    if show_git || number_lines_nonblank || number_lines {
        Ok(source?.into_iter().map(Line::with_margin).collect())
    } else {
        source
    }
}

