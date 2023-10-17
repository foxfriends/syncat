use regex::Captures;
use std::collections::BTreeMap;

#[derive(Default, Debug)]
pub(crate) struct Matches<'k, 's> {
    matches: BTreeMap<&'k str, &'s str>,
    captures: Vec<Captures<'s>>,
}

impl<'k, 's> Matches<'k, 's> {
    pub(crate) fn get(&self, key: &str) -> Option<&str> {
        self.matches.get(key).copied()
    }

    pub(crate) fn capture(&self, index: usize) -> Option<&str> {
        self.captures
            .iter()
            .flat_map(|captures| captures.iter())
            .nth(index)
            .flatten()
            .map(|m| m.as_str())
    }

    pub(crate) fn insert(&mut self, key: &'k str, value: &'s str) {
        self.matches.insert(key, value);
    }

    pub(crate) fn push(&mut self, captures: Captures<'s>) {
        self.captures.push(captures);
    }

    pub(crate) fn merge(&mut self, mut other: Self) {
        self.matches.append(&mut other.matches);
        self.captures.append(&mut other.captures);
    }
}
