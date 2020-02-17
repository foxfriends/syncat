use super::helper::*;
use tree_sitter::TreeCursor;

#[derive(Clone, Eq, PartialEq, Hash, Debug)]
pub(crate) struct Variable(pub(crate) String);

impl Variable {
    pub(crate) fn name(&self) -> &str {
        &self.0[1..]
    }
}

impl FromSource for Variable {
    fn from_source(tree: &mut TreeCursor, source: &[u8]) -> crate::Result<Self> {
        Ok(Self(text!(tree, source, "variable")?.to_string()))
    }
}
