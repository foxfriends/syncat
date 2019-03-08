use std::collections::BTreeMap;

use tree_sitter::{Tree, Node};
use regex::Regex;

use crate::error::Error;
use crate::style::{Colour, StyleBuilder, Setting};
use crate::language::Lang;

mod resolver;
mod parser;

pub use resolver::Context;

#[derive(Clone, Eq, PartialEq, Ord, PartialOrd, Debug)]
enum SelectorSegment {
    Kind(String),
    Token(String),
    TokenPattern(String),
    DirectChild(Box<SelectorSegment>),
    BranchCheck(Vec<SelectorSegment>),
    NoChildren(Box<SelectorSegment>),
}

impl SelectorSegment {
    pub fn score(&self) -> (usize, usize) {
        use SelectorSegment::*;
        match self {
            Kind(..) => (0, 1),
            Token(..) => (1, 0),
            TokenPattern(..) => (1, 0),
            DirectChild(child) => child.score(),
            BranchCheck(child) => child.iter().map(SelectorSegment::score).fold((0, 0), |(a, b), (c, d)| (a + c, b + d)),
            NoChildren(..) => (1, 0),
        }
    }
}

#[derive(Default, Debug)]
pub struct Stylesheet {
    style: StyleBuilder,
    scopes: BTreeMap<SelectorSegment, Stylesheet>,
}
