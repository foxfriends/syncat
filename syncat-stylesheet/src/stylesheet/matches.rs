use std::collections::BTreeMap;

pub(crate) enum Match<'a> {
    Source(&'a str),
    Regex(regex::Matches<'a, 'a>),
}

pub(crate) type Matches<'a> = BTreeMap<String, Match<'a>>;
