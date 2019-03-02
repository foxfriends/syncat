use crate::Opts;
use crate::line::Line;

pub fn line_endings<E>(&Opts { show_line_endings, .. }: &Opts, source: Result<Vec<Line>, E>) -> Result<Vec<Line>, E> {
    if show_line_endings {
        Ok(source?
           .into_iter()
           .map(Line::with_line_ending)
           .collect())
    } else {
        source
    }
}
