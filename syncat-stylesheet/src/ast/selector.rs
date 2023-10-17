use super::{helper::*, Node, NodeModifier};
use crate::{Matches, Query, QuerySlice};
use tree_sitter::TreeCursor;

#[derive(Clone, Debug)]
pub(crate) struct Selector {
    pub(crate) nodes: Vec<Node>,
}

impl Selector {
    pub(crate) fn matches<'k, 's, 'a: 's>(
        &'k self,
        query: &'a Query<'s>,
    ) -> Option<Matches<'k, 's>> {
        if self.nodes.is_empty() {
            return Some(Matches::default());
        }
        Self::matches2(
            &self.nodes[..],
            &QuerySlice::new(query, self.nodes.last().unwrap().modifier),
        )
    }

    fn matches2<'k, 's, 'a: 's>(
        nodes: &'k [Node],
        query: &QuerySlice<'a, 's>,
    ) -> Option<Matches<'k, 's>> {
        if nodes.is_empty() {
            return Some(Matches::default());
        }
        let (subquery, new_matches) = query.find(nodes.last().unwrap())?;
        if let Some(mut matches) = Self::matches2(&nodes[..nodes.len() - 1], &subquery) {
            matches.merge(new_matches);
            Some(matches)
        } else if nodes.last().unwrap().can_try_again() {
            Self::matches2(nodes, &subquery)
        } else {
            None
        }
    }
}

impl FromSource for Selector {
    fn from_source(tree: &mut TreeCursor, source: &[u8]) -> crate::Result<Self> {
        children!(tree, "selector");
        let mut nodes = vec![];
        while {
            if tree.node().is_named() && !tree.node().is_extra() {
                match tree.node().kind() {
                    "node" => nodes.push(Node::from_source(tree, source)?),
                    "node_modifier" => {
                        nodes.last_mut().unwrap().modifier =
                            NodeModifier::from_source(tree, source)?
                    }
                    name => return Err(crate::Error::invalid("node/node_modifier", name)),
                }
            }
            tree.goto_next_sibling()
        } {}
        tree.goto_parent();
        Ok(Self { nodes })
    }
}
