use super::{helper::*, Node};
use tree_sitter::TreeCursor;

#[derive(Clone, Debug)]
pub(crate) struct Scope(pub(crate) Vec<Node>);

impl FromSource for Scope {
    fn from_source(tree: &mut TreeCursor, source: &[u8]) -> crate::Result<Self> {
        children!(tree, "scope");
        let mut nodes = vec![];
        while {
            if !tree.node().is_extra() {
                nodes.push(Node::from_source(tree, source)?);
            }
            tree.goto_next_sibling()
        } {}
        tree.goto_parent();
        Ok(Scope(nodes))
    }
}
