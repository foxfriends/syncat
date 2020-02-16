use super::{helper::*, Value, Variable};
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
        Ok(Declaration {
            variable,
            value,
        })
    }
}
