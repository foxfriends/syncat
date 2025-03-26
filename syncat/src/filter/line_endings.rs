use crate::Opts;
use crate::line::Line;

pub fn line_endings(
    &Opts {
        show_line_endings, ..
    }: &Opts,
    source: Vec<Line>,
) -> Vec<Line> {
    if show_line_endings {
        source.into_iter().map(Line::with_line_ending).collect()
    } else {
        source
    }
}
