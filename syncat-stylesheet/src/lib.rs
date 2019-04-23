use std::collections::BTreeMap;
use std::io::Read;

use tree_sitter::{Parser, Language, Tree, Node};
use regex::Regex;

mod error;
mod parser;
mod resolver;
mod style;

use crate::error::{BoxedError, Error};
pub use crate::style::{Style, Colour, StyleBuilder, Setting};
pub use resolver::Context;

extern "C" { 
    fn tree_sitter_syncat_stylesheet() -> Language;
}

#[derive(Clone, Eq, PartialEq, Ord, PartialOrd, Debug)]
enum SelectorSegment {
    Any,
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
            Any => (0, 0),
            Kind(..) => (0, 1),
            Token(..) => (1, 0),
            TokenPattern(..) => (1, 0),
            DirectChild(child) => child.score(),
            BranchCheck(child) => child.iter().map(SelectorSegment::score).fold((0, 0), |(a, b), (c, d)| (a + c, b + d)),
            NoChildren(..) => (1, 0),
        }
    }
}

/// A Stylesheet
#[derive(Default, Debug)]
pub struct Stylesheet {
    style: StyleBuilder,
    scopes: BTreeMap<SelectorSegment, Stylesheet>,
}

impl Stylesheet {
    /// Creates a new Stylesheet by parsing the provided stream.
    pub fn from_reader<R: Read>(input: &mut R) -> Result<Stylesheet, BoxedError> {
        let mut parser = Parser::new();
        unsafe {
            parser.set_language(tree_sitter_syncat_stylesheet()).unwrap();
        }
        let mut source = String::new();
        input.read_to_string(&mut source).map_err(Box::new)?;
        let tree = parser.parse(&source, None).unwrap();
        Stylesheet::parse(&source, tree)
    }
}

impl std::str::FromStr for Stylesheet {
    type Err = BoxedError;

    fn from_str(input: &str) -> Result<Stylesheet, BoxedError> {
        let mut parser = Parser::new();
        unsafe {
            parser.set_language(tree_sitter_syncat_stylesheet()).unwrap();
        }
        let tree = parser.parse(input, None).unwrap();
        Stylesheet::parse(input, tree)
    }
}
