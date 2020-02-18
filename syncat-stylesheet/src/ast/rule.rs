use std::collections::BTreeMap;
use tree_sitter::TreeCursor;
use super::{helper::*, Selector, Style, Value};
use crate::{Query, Matches};

#[derive(Clone, Debug)]
pub(crate) struct Rule {
    pub(crate) selectors: Vec<Selector>,
    pub(crate) styles: Vec<Style>,
}

impl Rule {
    fn matches<'k, 's, 'a: 's>(&'k self, query: &'a Query<'s>) -> Option<Matches<'k, 's>> {
        self.selectors
            .iter()
            .find_map(|selector| selector.matches(query))
    }

    pub(crate) fn styles<'a>(&self, query: &'a Query<'a>, variables: &BTreeMap<String, Value>) -> Option<crate::Style> {
        let matches = self.matches(query)?;
        let mut style = crate::Style::default();
        for Style { name, value } in &self.styles {
            if let Some(value) = value.resolve(variables, &matches) {
                style.insert(name.as_str(), value);
            }
        }
        Some(style)
    }
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
