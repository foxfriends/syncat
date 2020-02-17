use std::collections::BTreeMap;
use std::iter::FromIterator;
use crate::ast::Color;

#[derive(Clone, Debug)]
pub enum Value {
    String(String),
    Boolean(bool),
    Number(u32),
    Color(Color),
}

#[derive(Clone, Debug, Default)]
pub struct Style(BTreeMap<String, Value>);

impl Style {
    fn merge(mut self, other: Self) -> Self {
        for (key, value) in other.0 {
            if !self.0.contains_key(&key) {
                self.0.insert(key, value);
            }
        }
        self
    }
}

impl FromIterator<Style> for Style {
    fn from_iter<I: IntoIterator<Item = Style>>(iter: I) -> Self {
        iter.into_iter()
            .fold(Style::default(), Style::merge)
    }
}
