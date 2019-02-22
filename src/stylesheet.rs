use std::collections::BTreeMap;
use tree_sitter::Tree;
use ansi_term::Style;

pub struct Stylesheet {
    style: Style,
    scopes: BTreeMap<String, Stylesheet>,
}

impl Stylesheet {
    pub fn parse(tree: Tree) -> Result<Stylesheet, Box<dyn std::error::Error>> {
        Ok(Stylesheet {
            style: Style::default(),
            scopes: BTreeMap::default(),
        })
    }
}
