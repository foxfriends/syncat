use std::fs;
use std::path::Path;
use std::str::FromStr;
use tree_sitter::TreeCursor;
use super::{helper::*, Import, Declaration, Rule};

#[derive(Clone, Debug, Default)]
pub struct Stylesheet {
    pub(crate) imports: Vec<Import>,
    pub(crate) variables: Vec<Declaration>,
    pub(crate) rules: Vec<Rule>,
}

impl Stylesheet {
    pub(crate) fn from_file(path: impl AsRef<Path>) -> crate::Result<Self> {
        let source = fs::read_to_string(path.as_ref())
            .map_err(|e| crate::Error::missing_module(e, path.as_ref()))?;
        Self::from_str(&source)
    }
}

impl FromStr for Stylesheet {
    type Err = crate::Error;

    fn from_str(source: &str) -> Result<Self, Self::Err> {
        let tree = crate::parser::parse(&source).unwrap();
        let mut cursor = tree.walk();
        Self::from_source(&mut cursor, source.as_ref())
    }
}

impl FromSource for Stylesheet {
    fn from_source(tree: &mut TreeCursor, source: &[u8]) -> crate::Result<Self> {
        children!(tree, "stylesheet");
        let mut stylesheet = Self::default();
        while {
            if !tree.node().is_extra() {
                match tree.node().kind() {
                    "import" => stylesheet.imports.push(Import::from_source(tree, source)?),
                    "declaration" => stylesheet.variables.push(Declaration::from_source(tree, source)?),
                    "rule" => stylesheet.rules.push(Rule::from_source(tree, source)?),
                    name => return Err(crate::Error::invalid("stylesheet", name)),
                }
            }
            tree.goto_next_sibling()
        } {}
        tree.goto_parent();
        Ok(stylesheet)
    }
}
