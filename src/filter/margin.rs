use crate::Opts;
use crate::meta::MetaStylesheet;

pub fn margin<E>(
    &Opts { dev, show_git, number_lines_nonblank, number_lines, .. }: &Opts,
    meta_style: &MetaStylesheet,
    source: Result<String, E>,
) -> Result<String, E> {
    let margin = meta_style.margin
        .build()
        .paint(meta_style.margin.content().unwrap_or(" | "));
    if dev {
        source
    } else if show_git || number_lines_nonblank || number_lines {
        Ok(source?.lines()
           .map(|line| format!("{}{}\n", margin, line))
           .collect())
    } else {
        source
    }
}

