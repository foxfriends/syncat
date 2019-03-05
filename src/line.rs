use crate::meta::MetaStylesheet;

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
    ) -> String {
        let mut output = self.source.clone();
        if self.margin {
            output = format!("{}{}", meta_style.margin().left(), output);
        }
        if let Some(number) = self.number {
            if let Some(number) = number {
                output = format!("{}{}", meta_style.line_number.build().paint(format!("{: >6}", number)), output);
            } else {
                output = format!("      {}", output);
            }
        }
        if let Some(status) = self.git_status {
            use LineChange::*;
            output = match status {
                Unchanged => format!("  {}", output),
                Added => format!("{} {}", meta_style.added(), output),
                Modified => format!("{} {}", meta_style.modified(), output),
                RemovedAbove => format!("{} {}", meta_style.removed_above(), output),
                RemovedBelow => format!("{} {}", meta_style.removed_below(), output),
            };
        }
        if self.line_ending &&!self.no_newline {
            output = format!("{}{}", output, meta_style.line_ending());
        }
        if !self.no_newline {
            output = format!("{}\n", output);
        }
        output
    }
}
