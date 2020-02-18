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
pub struct Style<'s>(BTreeMap<&'s str, Value>);

impl<'s> Style<'s> {
    pub(crate) fn insert(&mut self, key: &'s str, value: Value) {
        self.0.insert(key, value);
    }
    
    fn merge(mut self, mut other: Self) -> Self {
        other.0.append(&mut self.0);
        other
    }
}

impl<'s> FromIterator<Style<'s>> for Style<'s> {
    fn from_iter<I: IntoIterator<Item = Style<'s>>>(iter: I) -> Self {
        iter.into_iter()
            .fold(Style::default(), Style::merge)
    }
}
