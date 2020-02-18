use crate::meta_stylesheet::MetaStylesheet;
use console::{self, AnsiCodeIterator};

#[derive(Copy, Clone, Debug)]
pub enum LineChange {
    Unchanged,
    Added,
    RemovedAbove,
    RemovedBelow,
    Modified,
}

impl Default for LineChange {
    fn default() -> Self {
        LineChange::Unchanged
    }
}

#[derive(Clone, Default, Debug)]
pub struct Line {
    pub source: String,
    pub margin: bool,
    pub number: Option<Option<usize>>,
    pub git_status: Option<LineChange>,
    pub line_ending: bool,
    pub no_newline: bool,
}

impl Line {
    pub fn new(source: String) -> Self {
        Self {
            source,
            ..Self::default()
        }
    }

    pub fn with_status(mut self, status: LineChange) -> Self {
        self.git_status = Some(status);
        self.with_margin()
    }

    pub fn with_margin(mut self) -> Self {
        self.margin = true;
        self
    }

    pub fn with_number(mut self, number: usize) -> Self {
        self.number = Some(Some(number));
        self.with_margin()
    }

    pub fn with_no_number(mut self) -> Self {
        self.number = Some(None);
        self.with_margin()
    }

    pub fn with_line_ending(mut self) -> Self {
        self.line_ending = true;
        self
    }

    pub fn is_empty(&self) -> bool {
        self.source.is_empty()
    }

    pub fn to_string(
        &self,
        meta_style: &MetaStylesheet,
        wrap: Option<usize>,
    ) -> String {
        let (indent, source) = extract_indent(&self.source);
        let mut last_line_length = 0;
        let indent_width = indent.chars().count();
        let mut lines = wrap
            .map(|width| wrap_ansi_str(source, width.checked_sub(indent_width).unwrap_or(width)))
            .unwrap_or_else(|| source.to_string())
            .lines()
            .map(|line| line.to_string())
            .collect::<Vec<_>>();
        if lines.is_empty() {
            lines.push("".to_string());
        }
        let mut output = lines
            .into_iter()
            .map(|mut line| {
                if wrap.is_none() || wrap.unwrap() > indent_width {
                    line = format!("{}{}", indent, line);
                }
                last_line_length = console::measure_text_width(&line);
                line
            })
            .enumerate()
            .map(|(i, mut output)| {
                if self.margin {
                    output = format!("{}{}", meta_style.margin().left(), output);
                }
                if let Some(number) = self.number {
                    if i == 0 {
                        if let Some(number) = number {
                            output = format!("{}{}", meta_style.line_number().paint(format!("{: >6}", number)), output);
                        } else {
                            output = format!("      {}", output);
                        }
                    } else {
                        output = format!("      {}", output);
                    }
                }
                if let Some(status) = self.git_status {
                    use LineChange::*;
                    if i != 0 {
                        output = format!("  {}", output);
                    } else {
                        output = match status {
                            Unchanged => format!("  {}", output),
                            Added => format!("{} {}", meta_style.added(), output),
                            Modified => format!("{} {}", meta_style.modified(), output),
                            RemovedAbove => format!("{} {}", meta_style.removed_above(), output),
                            RemovedBelow => format!("{} {}", meta_style.removed_below(), output),
                        };
                    }
                }
                output
            })
            .collect::<Vec<_>>()
            .join("\n");
        if self.line_ending && !self.no_newline {
            output = format!("{}{}", output, meta_style.line_ending());
        }
        if !self.no_newline {
            output = format!("{}\n", output);
        }
        output
    }
}

fn extract_indent<'a>(source: &'a str) -> (&'a str, &'a str) {
    let bytes = source
        .chars()
        .take_while(|ch| ch.is_whitespace())
        .map(char::len_utf8)
        .sum();
    source.split_at(bytes)
}

/// Wraps a string stupidly (ignoring valid word break locations)
///
/// This is good enough for now, but it might be nice to try and break at valid locations in
/// future.
fn wrap_ansi_str(s: &str, width: usize) -> String {
    let mut iter = AnsiCodeIterator::new(s);
    let mut length = 0;
    let mut rv = String::new();
    let mut style: &str = "";

    while let Some(item) = iter.next() {
        match item {
            (s, false) => {
                for ch in s.chars() {
                    if ch == '\n' || length == width {
                        rv.push('\n');
                        rv.push_str(style);
                        length = 0;
                        if ch == '\n' {
                            continue;
                        }
                    }
                    length += 1;
                    rv.push(ch);
                }
            }
            (s, true) => {
                style = s;
                rv.push_str(s);
            }
        }
    }
    rv
}
