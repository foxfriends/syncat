use super::{helper::*, Value};
use tree_sitter::TreeCursor;

#[derive(Clone, Debug)]
pub(crate) struct Style {
    pub(crate) name: String,
    pub(crate) value: Value,
}

impl FromSource for Style {
    fn from_source(tree: &mut TreeCursor, source: &[u8]) -> crate::Result<Self> {
        children!(tree, "style");
        extras!(tree);
        let name = text!(tree, source, "name")?.to_string();
        tree.goto_next_sibling();
        let value = Value::from_source(tree, source)?;
        tree.goto_parent();
        Ok(Style { name, value })
    }
}
