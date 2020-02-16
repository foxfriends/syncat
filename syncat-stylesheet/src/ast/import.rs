use std::path::PathBuf;
use super::helper::*;
use tree_sitter::TreeCursor;

#[derive(Clone, Debug)]
pub(crate) struct Import {
    pub(crate) path: PathBuf,
}

impl FromSource for Import {
    fn from_source(tree: &mut TreeCursor, source: &[u8]) -> crate::Result<Self> {
        children!(tree, "import");
        let path = text!(tree, source, "string")?.into();
        tree.goto_parent();
        Ok(Import { path })
    }
}
