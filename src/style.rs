pub use ansi_term::{Style, Colour};

#[derive(Copy, Clone, Default, Debug)]
pub struct StyleBuilder {
    pub foreground:       Option<Colour>,
    pub background:       Option<Colour>,
    pub is_italic:        Option<bool>,
    pub is_bold:          Option<bool>,
    pub is_dimmed:        Option<bool>,
    pub is_underline:     Option<bool>,
    pub is_strikethrough: Option<bool>,
    pub is_blink:         Option<bool>,
    pub is_hidden:        Option<bool>,
    pub is_reverse:       Option<bool>,
}

impl StyleBuilder {
    pub fn build(self) -> Style {
        Style {
            foreground:       self.foreground,
            background:       self.background,
            is_italic:        self.is_italic.unwrap_or_default(),
            is_bold:          self.is_bold.unwrap_or_default(),
            is_dimmed:        self.is_dimmed.unwrap_or_default(),
            is_underline:     self.is_underline.unwrap_or_default(),
            is_strikethrough: self.is_strikethrough.unwrap_or_default(),
            is_blink:         self.is_blink.unwrap_or_default(),
            is_hidden:        self.is_hidden.unwrap_or_default(),
            is_reverse:       self.is_reverse.unwrap_or_default(),
        }
    }

    pub fn merge_with(&mut self, other: StyleBuilder) {
        self.foreground       = other.foreground.or(self.foreground);
        self.background       = other.background.or(self.background);
        self.is_italic        = other.is_italic.or(self.is_italic);
        self.is_bold          = other.is_bold.or(self.is_bold);
        self.is_dimmed        = other.is_dimmed.or(self.is_dimmed);
        self.is_underline     = other.is_underline.or(self.is_underline);
        self.is_strikethrough = other.is_strikethrough.or(self.is_strikethrough);
        self.is_blink         = other.is_blink.or(self.is_blink);
        self.is_hidden        = other.is_hidden.or(self.is_hidden);
        self.is_reverse       = other.is_reverse.or(self.is_reverse);
    }
}

