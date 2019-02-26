use std::collections::BTreeMap;
use tree_sitter::{Tree, Node};
use crate::error::Error;
use crate::style::{Colour, StyleBuilder};
use crate::language::Lang;

mod resolver;
mod parser;

pub use resolver::Context;

#[derive(Clone, Eq, PartialEq, Ord, PartialOrd, Debug)]
enum SelectorSegment {
    Kind(String),
    Token(String),
    DirectChild(String),
    BranchCheck(Vec<SelectorSegment>, Box<SelectorSegment>)
}

impl SelectorSegment {
    fn to_basic(self) -> Self {
        use SelectorSegment::*;
        match self {
            DirectChild(name) => Kind(name),
            BranchCheck(.., inner) => inner.to_basic(),
            _ => self,
        }
    }
}

#[derive(Debug)]
enum StylesheetScope {
    Child(Stylesheet),
    DirectChild(Stylesheet),
    BranchCheck(BTreeMap<Vec<SelectorSegment>, Stylesheet>),
}

impl StylesheetScope {
    fn get(&self) -> &Stylesheet {
        use StylesheetScope::*;
        match self {
            Child(inner)       => inner,
            DirectChild(inner) => inner,
            BranchCheck(..) => panic!("This is an invalid operation"),
        }
    }

    fn get_mut(&mut self) -> &mut Stylesheet {
        use StylesheetScope::*;
        match self {
            Child(inner)       => inner,
            DirectChild(inner) => inner,
            BranchCheck(..) => panic!("This is an invalid operation"),
        }
    }
}

#[derive(Default, Debug)]
pub struct Stylesheet {
    style: StyleBuilder,
    scopes: BTreeMap<SelectorSegment, StylesheetScope>,
}
