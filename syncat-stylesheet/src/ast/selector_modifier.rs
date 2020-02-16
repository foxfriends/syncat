use super::helper::*;
use tree_sitter::TreeCursor;

#[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash, Debug)]
pub(crate) enum SelectorModifier {
    Exact,
    NoInherit,
}

impl FromSource for SelectorModifier {
    fn from_source(tree: &mut TreeCursor, _source: &[u8]) -> crate::Result<Self> {
        children!(tree, "selector_modifier");
        extras!(tree);
        let modifier = match tree.node().kind() {
            "exact" => Self::Exact,
            "no_inherit" => Self::NoInherit,
            _ => return Err(crate::Error::invalid()),
        };
        tree.goto_parent();
        Ok(modifier)
    }
}
