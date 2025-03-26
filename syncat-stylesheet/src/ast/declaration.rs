use super::{Value, Variable, helper::*};
use std::collections::BTreeMap;
use std::iter::FromIterator;
use tree_sitter::TreeCursor;

#[derive(Clone, Debug)]
pub(crate) struct Declaration {
    pub(crate) variable: Variable,
    pub(crate) value: Value,
}

impl FromSource for Declaration {
    fn from_source(tree: &mut TreeCursor, source: &[u8]) -> crate::Result<Self> {
        children!(tree, "declaration");

        let variable = Variable::from_source(tree, source)?;
        tree.goto_next_sibling();
        let value = Value::from_source(tree, source)?;

        tree.goto_parent();
        Ok(Declaration { variable, value })
    }
}

impl FromIterator<Declaration> for BTreeMap<String, Value> {
    fn from_iter<I: IntoIterator<Item = Declaration>>(iter: I) -> Self {
        iter.into_iter().fold(
            Self::default(),
            |mut map, Declaration { variable, value }| {
                map.insert(variable.name().to_owned(), value);
                map
            },
        )
    }
}
