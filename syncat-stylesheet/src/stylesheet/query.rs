use crate::ast::{Node, NodeKind, NodeModifier};
use super::Matches;

#[derive(Clone, Debug)]
pub struct Query<'a> {
    kind: String,
    text: &'a str,
    children: Vec<Query<'a>>,
}

impl Query<'_> {
    fn indices(&self) -> Vec<usize> {
        let len = self.children.len();
        if len != 0 {
            let mut indices = self.children.last().unwrap().indices();
            indices.insert(0, len - 1);
            indices
        } else {
            vec![]
        }
    }
}

pub(crate) struct QuerySlice<'a> {
    query: &'a Query<'a>,
    indices: Vec<usize>,
}

impl<'a> QuerySlice<'a> {
    pub(crate) fn new(query: &'a Query<'a>) -> Self {
        QuerySlice {
            query,
            indices: query.indices(),
        }
    }

    pub(crate) fn find(&self, node: &Node) -> Option<(Self, Matches<'a>)> {
        match node.modifier {
            NodeModifier::Child => self.find_child(&node.kind),
            NodeModifier::DirectChild => self.find_direct_child(&node.kind),
            NodeModifier::Sibling => self.find_sibling(&node.kind),
            NodeModifier::DirectSibling => self.find_direct_sibling(&node.kind),
        }
    }

    fn find_child(&self, node: &NodeKind) -> Option<(Self, Matches<'a>)> {
        todo!()
    }

    fn find_direct_child(&self, node: &NodeKind) -> Option<(Self, Matches<'a>)> {
        todo!()
    }

    fn find_sibling(&self, node: &NodeKind) -> Option<(Self, Matches<'a>)> {
        todo!()
    }

    fn find_direct_sibling(&self, node: &NodeKind) -> Option<(Self, Matches<'a>)> {
        todo!()
    }
}
