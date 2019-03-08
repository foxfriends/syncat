pub use ansi_term::{Style, Colour};
use crate::language::Lang;

#[derive(Copy, Clone, Debug)]
pub enum Setting<T, P: Copy + Ord = (usize, usize)> {
    Unset,
    Set(P, T),
}

impl<T, P: Copy + Ord> Default for Setting<T, P> {
    fn default() -> Self {
        Setting::Unset
    }
}

impl<T, P: Copy + Ord> Setting<T, P> {
    fn or(self, other: Self) -> Self {
        use Setting::*;
        match (&self, &other) {
            (Set(x, ..), Set(y, ..)) if x >= y => self,
            (.., Unset) => self,
            _ => other,
        }
    }

    fn cloned_or(&self, other: Self) -> Self
    where T: Clone {
        use Setting::*;
        match (self, other) {
            (Set(x, value), Set(y, ..)) if *x >= y => Set(*x, value.clone()),
            (ours, Unset) => ours.clone(),
            (.., other) => other,
        }
    }

    fn as_ref(&self) -> Setting<&T, P> {
        use Setting::*;
        match self {
            Unset => Unset,
            Set(priority, value) => Set(*priority, value),
        }
    }

    fn optional(self) -> Option<T> {
        use Setting::*;
        match self {
            Unset => None,
            Set(.., value) => Some(value),
        }
    }

    fn set_priority(&mut self, priority: P) {
        if let Setting::Set(my_priority, ..) = self {
            if priority > *my_priority {
                *my_priority = priority;
            }
        }
    }

    fn unwrap_or_default(self) -> T 
    where T: Default {
        use Setting::*;
        match self {
            Unset => T::default(),
            Set(.., value) => value,
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

    pub fn set_priorities(&mut self, priority: (usize, usize)) {
        self.language.set_priority(priority);
        self.foreground.set_priority(priority);
        self.background.set_priority(priority);
        self.is_italic.set_priority(priority);
        self.is_bold.set_priority(priority);
        self.is_dimmed.set_priority(priority);
        self.is_underline.set_priority(priority);
        self.is_strikethrough.set_priority(priority);
        self.is_blink.set_priority(priority);
        self.is_hidden.set_priority(priority);
        self.is_reverse.set_priority(priority);
        self.content.set_priority(priority);
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
