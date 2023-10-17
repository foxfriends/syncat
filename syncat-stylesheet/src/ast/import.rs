use super::helper::*;
use enquote::unquote;
use std::path::{Path, PathBuf};
use tree_sitter::TreeCursor;

#[derive(Clone, Debug)]
pub(crate) struct Import {
    pub(crate) path: PathBuf,
}

impl AsRef<Path> for Import {
    fn as_ref(&self) -> &Path {
        self.path.as_ref()
    }
}

impl FromSource for Import {
    fn from_source(tree: &mut TreeCursor, source: &[u8]) -> crate::Result<Self> {
        children!(tree, "import");
        let path = unquote(text!(tree, source, "string")?)?.into();
        tree.goto_parent();
        Ok(Import { path })
    }
}
