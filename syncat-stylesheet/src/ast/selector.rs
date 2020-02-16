use super::{helper::*, Scope, SelectorModifier};
use tree_sitter::TreeCursor;

#[derive(Clone, Debug)]
pub(crate) struct Selector {
    pub(crate) scope: Scope,
    pub(crate) modifiers: Vec<SelectorModifier>,
}

impl FromSource for Selector {
    fn from_source(tree: &mut TreeCursor, source: &[u8]) -> crate::Result<Self> {
        children!(tree, "selector");
        let scope = Scope::from_source(tree, source)?;
        let mut modifiers = vec![];
        while tree.goto_next_sibling() {
            if !tree.node().is_extra() {
                modifiers.push(SelectorModifier::from_source(tree, source)?);
            }
        }
        Ok(Self { scope, modifiers })
    }
}
