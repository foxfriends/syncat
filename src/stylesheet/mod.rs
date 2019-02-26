use std::collections::BTreeMap;
use tree_sitter::{Tree, Node};
use crate::error::Error;
use crate::style::{Colour, StyleBuilder};
use crate::language::Lang;

mod parser;

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

    fn resolve(&self, scopes: &[&str], token: Option<&str>) -> StyleBuilder {
        use StylesheetScope::*;
        match self {
            Child(stylesheet) => stylesheet.resolve(scopes, token),
            DirectChild(stylesheet) => {
                let mut style = stylesheet.style;

                if scopes.len() == 1 {
                    let token_style = token
                        .map(|token| SelectorSegment::Token(token.to_string()))
                        .and_then(|scope| stylesheet.scopes.get(&scope))
                        .map(|scoped| scoped.get().style);
                    if let Some(token_style) = token_style {
                        style = style.merge_with(token_style);
                    }
                }

                let substyle = scopes.first()
                    .map(|scope| SelectorSegment::Kind(scope.to_string()))
                    .or(token.map(|token| SelectorSegment::Token(token.to_string())))
                    .and_then(|scope| stylesheet.scopes.get(&scope))
                    .map(|subsheet| subsheet.resolve(&scopes[1..], token));
                if let Some(substyle) = substyle {
                    style.merge_with(substyle)
                } else {
                    style
                }
            },
            BranchCheck(branches) => {
                unimplemented!();
            },
        }
    }
}

#[derive(Default, Debug)]
pub struct Stylesheet {
    style: StyleBuilder,
    scopes: BTreeMap<SelectorSegment, StylesheetScope>,
}

