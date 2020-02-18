use std::collections::BTreeMap;

mod value;
pub use value::{FromValueError, Value};

#[derive(Clone, Debug, Default)]
pub struct Style<'s>(BTreeMap<&'s str, Value>);

impl<'s> Style<'s> {
    pub fn get(&self, key: &str) -> Option<&Value> {
        self.0.get(key)
    }

    pub(crate) fn insert(&mut self, key: &'s str, value: Value) {
        self.0.insert(key, value);
    }
    
    pub(crate) fn merge(mut self, mut other: Self) -> Self {
        other.0.append(&mut self.0);
        other
    }
}
