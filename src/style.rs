pub use ansi_term::{Style, Colour};
use crate::language::Lang;

#[derive(Copy, Clone, Debug)]
pub enum Setting<T> {
    Unset,
    Set(T),
    Important(T),
}

impl<T> Default for Setting<T> {
    fn default() -> Self {
        Setting::Unset
    }
}

impl<T> Setting<T> {
    fn or(self, other: Setting<T>) -> Self {
        use Setting::*;
        match (self, other) {
            (Important(value), ..) => Important(value),
            (.., Important(value)) => Important(value),
            (Set(value), ..) => Set(value),
            (Unset, other) => other,
        }
    }

    fn cloned_or(&self, other: Setting<T>) -> Self 
    where T: Clone {
        use Setting::*;
        match (self, other) {
            (Important(value), ..) => Important(value.clone()),
            (.., Important(value)) => Important(value),
            (Set(value), ..) => Set(value.clone()),
            (Unset, other) => other,
        }
    }

    fn as_ref(&self) -> Setting<&T> {
        use Setting::*;
        match self {
            Unset => Unset,
            Set(value) => Set(value),
            Important(value) => Important(value),
        }
    }

    fn optional(self) -> Option<T> {
        use Setting::*;
        match self {
            Unset => None,
            Set(value) => Some(value),
            Important(value) => Some(value),
        }
    }
}

impl<T: Default> Setting<T> {
    fn unwrap_or_default(self) -> T {
        use Setting::*;
        match self {
            Unset => T::default(),
            Set(value) => value,
            Important(value) => value,
        }
    }
}

#[derive(Clone, Default, Debug)]
pub struct StyleBuilder {
    pub language:         Setting<Lang>,
    pub foreground:       Setting<Colour>,
    pub background:       Setting<Colour>,
    pub is_italic:        Setting<bool>,
    pub is_bold:          Setting<bool>,
    pub is_dimmed:        Setting<bool>,
    pub is_underline:     Setting<bool>,
    pub is_strikethrough: Setting<bool>,
    pub is_blink:         Setting<bool>,
    pub is_hidden:        Setting<bool>,
    pub is_reverse:       Setting<bool>,
    pub content:          Setting<String>,
}

impl StyleBuilder {
    pub fn language(&self) -> Option<Lang> {
        self.language.optional()
    }

    pub fn content(&self) -> Option<&str> {
        self.content.as_ref().optional().map(|string| string.as_str())
    }

    pub fn build(&self) -> Style {
        Style {
            foreground:       self.foreground.optional(),
            background:       self.background.optional(),
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

    pub fn merge_with(mut self, other: &StyleBuilder) -> Self {
        self.language         = other.language.or(self.language);
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
        self.content          = other.content.cloned_or(self.content);
        self
    }
}

pub fn setting<T>(important: bool, value: T) -> Setting<T> {
    if important {
        Setting::Important(value)
    } else {
        Setting::Set(value)
    }
}
