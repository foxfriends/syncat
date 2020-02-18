use std::collections::BTreeMap;
#[cfg(feature = "ansi_term")] use ansi_term::Style as ANSIStyle;
use std::convert::TryFrom;

mod value;
pub use value::{FromValueError, Value};

#[derive(Clone, Debug, Default)]
pub struct Style<'s>(BTreeMap<&'s str, Value>);

impl<'s> Style<'s> {
    pub fn get(&self, key: &str) -> Option<&Value> {
        self.0.get(key)
    }

    pub fn try_get<T: TryFrom<Value>>(&self, key: &str) -> Result<Option<T>, T::Error> {
        self.0.get(key)
            .map_or(Ok(None), |value| Ok(Some(T::try_from(value.clone())?)))
    }

    pub(crate) fn insert(&mut self, key: &'s str, value: Value) {
        self.0.insert(key, value);
    }
    
    pub(crate) fn merge(mut self, mut other: Self) -> Self {
        other.0.append(&mut self.0);
        other
    }
}

#[cfg(feature = "ansi_term")]
impl TryFrom<Style<'_>> for ANSIStyle {
    type Error = FromValueError;

    fn try_from(style: Style) -> Result<Self, Self::Error> {
        let mut ansi_style = ANSIStyle::new();
        if let Some(true) = style.try_get("bold")? {
            ansi_style = ansi_style.bold();
        }
        if let Some(true) = style.try_get("italic")? {
            ansi_style = ansi_style.italic()
        }
        if let Some(true) = style.try_get("dim")? {
            ansi_style = ansi_style.dimmed()
        }
        if let Some(true) = style.try_get("underline")? {
            ansi_style = ansi_style.underline()
        }
        if let Some(true) = style.try_get("strikethrough")? {
            ansi_style = ansi_style.strikethrough()
        }
        if let Some(true) = style.try_get("blink")? {
            ansi_style = ansi_style.blink()
        }
        if let Some(true) = style.try_get("reverse")? {
            ansi_style = ansi_style.reverse()
        }
        if let Some(true) = style.try_get("hidden")? {
            ansi_style = ansi_style.hidden()
        }
        if let Some(color) = style.try_get("color")? {
            ansi_style = ansi_style.fg(color)
        }
        if let Some(color) = style.try_get("background-color")? {
            ansi_style = ansi_style.on(color)
        }
        Ok(ansi_style)
    }
}
