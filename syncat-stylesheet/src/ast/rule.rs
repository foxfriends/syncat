use tree_sitter::TreeCursor;
use super::{helper::*, Selector, Style};

#[derive(Clone, Debug)]
pub(crate) struct Rule {
    pub(crate) selectors: Vec<Selector>,
    pub(crate) styles: Vec<Style>,
}

impl FromSource for Rule {
    fn from_source(tree: &mut TreeCursor, source: &[u8]) -> crate::Result<Self> {
        children!(tree, "rule");
        children!(tree, "selectors");
        let mut selectors = vec![];
        while {
            if !tree.node().is_extra() {
                selectors.push(Selector::from_source(tree, source)?);
            }
            tree.goto_next_sibling()
        } {}
        tree.goto_parent();
        children!(tree, "styles");
        let mut styles = vec![];
        while {
            if !tree.node().is_extra() {
                styles.push(Style::from_source(tree, source)?);
            }
            tree.goto_next_sibling()
        } {}
        tree.goto_parent();
        tree.goto_parent();
        Ok(Rule { selectors, styles })
    }
}
