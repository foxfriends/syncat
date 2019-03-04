use crate::Opts;
use crate::line::Line;

pub fn margin<E>(
    &Opts { git, numbered_nonblank, numbered, .. }: &Opts,
    source: Result<Vec<Line>, E>,
) -> Result<Vec<Line>, E> {
    if git || numbered_nonblank || numbered {
        Ok(source?.into_iter().map(Line::with_margin).collect())
    } else {
        source
    }
}

