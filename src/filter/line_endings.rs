use crate::Opts;
use crate::meta::MetaStylesheet;

pub fn line_endings<E>(&Opts { dev, show_line_endings, .. }: &Opts, meta_style: &MetaStylesheet, source: Result<String, E>) -> Result<String, E> {
    let line_ending = meta_style.line_ending
        .build()
        .paint(meta_style.line_ending.content().unwrap_or("$"));
    if dev {
        source
    } else if show_line_endings {
        Ok(source?.lines()
           .map(|line| format!("{}{}\n", line, line_ending))
           .collect())
    } else {
        source
    }
}
