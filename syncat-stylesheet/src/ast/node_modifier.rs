use super::helper::*;
use tree_sitter::TreeCursor;

#[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash, Debug)]
pub(crate) enum NodeModifier {
    Child,
    DirectChild,
    DirectSibling,
    Sibling,
    Also,
}

impl Default for NodeModifier {
    fn default() -> Self { Self::Child }
}

impl FromSource for NodeModifier {
    fn from_source(tree: &mut TreeCursor, _source: &[u8]) -> crate::Result<Self> {
        children!(tree, "node_modifier");
        let modifier = match tree.node().kind() {
            "direct" => Self::DirectChild,
            "direct_sibling" => Self::DirectSibling,
            "sibling" => Self::Sibling,
            "also" => Self::Also,
            name => return Err(crate::Error::invalid("node_modifier", name)),
        };
        tree.goto_parent();
        Ok(modifier)
    }
}
