use super::{helper::*, NodeKind, NodeModifier};
use tree_sitter::TreeCursor;

#[derive(Clone, Debug)]
pub(crate) struct Node {
    pub(crate) kind: NodeKind,
    pub(crate) modifier: NodeModifier,
}

impl Node {
    pub(crate) fn can_try_again(&self) -> bool {
        match self.modifier {
            NodeModifier::Child => true,
            NodeModifier::DirectChild => false,
            NodeModifier::Sibling => true,
            NodeModifier::DirectSibling => false,
        }
    }
}

impl FromSource for Node {
    fn from_source(tree: &mut TreeCursor, source: &[u8]) -> crate::Result<Self> {
        let kind = NodeKind::from_source(tree, source)?;
        Ok(Node { kind, modifier: NodeModifier::default() })
    }
}
