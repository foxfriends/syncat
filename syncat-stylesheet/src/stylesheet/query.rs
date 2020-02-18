use std::ops::{Index, IndexMut};
use crate::ast::{Node, NodeKind, NodeModifier};
use super::Matches;

#[derive(Clone, Debug)]
pub struct Query<'s> {
    kind: &'s str,
    text: &'s str,
    children: Vec<Query<'s>>,
}

impl<'s> From<&'s str> for Query<'s> {
    fn from(kind: &'s str) -> Self {
        Self { kind, text: kind, children: vec![] }
    }
}

impl<'s> From<(&tree_sitter::Node<'_>, &'s str)> for Query<'s> {
    fn from((node, source): (&tree_sitter::Node, &'s str)) -> Self {
        Self {
            kind: node.kind(),
            text: node.utf8_text(source.as_ref()).unwrap(),
            children: vec![],
        }
    }
}

impl<'s> Query<'s> {
    pub fn new(kind: &'s str, text: &'s str) -> Self {
        Self { kind, text, children: vec![] }
    }

    pub fn add_child<Q: Into<Self>>(&mut self, child: Q) {
        self.children.push(child.into())
    }

    fn matches<'k, 'a: 's>(&'a self, node: &'k NodeKind) -> Option<Matches<'k, 's>> {
        match node {
            NodeKind::Any => Some(Matches::default()),
            NodeKind::Kind(kind) => {
                if self.kind == kind {
                    Some(Matches::default())
                } else {
                    None
                }
            }
            NodeKind::Token(token) => {
                if self.children.is_empty() && self.text == token {
                    Some(Matches::default())
                } else {
                    None
                }
            }
            NodeKind::TokenPattern(pattern) => {
                if !self.children.is_empty() {
                    return None
                }
                let captures = pattern.captures(self.text)?;
                let mut matches = Matches::default();
                matches.push(captures);
                Some(matches)
            }
            NodeKind::Group(None, selector) => selector.matches(self),
            NodeKind::Group(Some(name), selector) => {
                let mut matches = selector.matches(self)?;
                matches.insert(name, self.text);
                Some(matches)
            }
        }
    }

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

impl<'a> Index<&[usize]> for Query<'a> {
    type Output = Query<'a>;

    fn index(&self, index: &[usize]) -> &Self::Output {
        if index.is_empty() {
            self
        } else {
            &self.children[index[0]][&index[1..]]
        }
    }
}

impl<'a> IndexMut<&[usize]> for Query<'a> {
    fn index_mut(&mut self, index: &[usize]) -> &mut Self::Output {
        if index.is_empty() {
            self
        } else {
            &mut self.children[index[0]][&index[1..]]
        }
    }
}

pub(crate) struct QuerySlice<'s, 'a: 's> {
    query: &'a Query<'s>,
    indices: Vec<usize>,
}

impl<'a, 's> QuerySlice<'s, 'a> {
    pub(crate) fn new(query: &'a Query<'s>, modifier: NodeModifier) -> Self {
        let mut indices = query.indices();
        match modifier {
            NodeModifier::Child | NodeModifier::DirectChild => indices.push(0),
            NodeModifier::Sibling | NodeModifier::DirectSibling => *indices.last_mut().unwrap() += 1,
        }
        Self { query, indices }
    }

    pub(crate) fn find<'k>(&self, node: &'k Node) -> Option<(Self, Matches<'k, 's>)> {
        match node.modifier {
            NodeModifier::Child => self.find_child(&node.kind),
            NodeModifier::DirectChild => self.find_direct_child(&node.kind).ok(),
            NodeModifier::Sibling => self.find_sibling(&node.kind),
            NodeModifier::DirectSibling => self.find_direct_sibling(&node.kind).ok(),
        }
    }

    fn pop(&self) -> Option<Self> {
        let mut indices = self.indices.clone();
        if indices.pop().is_none() {
            return None;
        }
        Some(Self {
            query: self.query,
            indices,
        })
    }

    fn shift(&self) -> Option<Self> {
        let mut indices = self.indices.clone();
        let last = indices.last_mut().unwrap();
        *last = last.checked_sub(1)?;
        Some(Self {
            query: self.query,
            indices,
        })
    }

    fn find_child<'k>(&self, node: &'k NodeKind) -> Option<(Self, Matches<'k, 's>)> {
        match self.find_direct_child(node) {
            Ok(result) => Some(result),
            Err(query) => query?.find_child(node),
        }
    }

    fn find_direct_child<'k>(&self, node: &'k NodeKind) -> Result<(Self, Matches<'k, 's>), Option<Self>> {
        let index = self.pop().ok_or(None)?;
        let query = &self.query[&index.indices];
        if let Some(matches) = query.matches(node) {
            Ok((index, matches))
        } else {
            Err(Some(index))
        }
    }

    fn find_sibling<'k>(&self, node: &'k NodeKind) -> Option<(Self, Matches<'k, 's>)> {
        match self.find_direct_sibling(node) {
            Ok(result) => Some(result),
            Err(query) => query?.find_sibling(node),
        }
    }

    fn find_direct_sibling<'k>(&self, node: &'k NodeKind) -> Result<(Self, Matches<'k, 's>), Option<Self>> {
        let index = self.shift().ok_or(None)?;
        let query = &self.query[&index.indices];
        if let Some(matches) = query.matches(node) {
            Ok((index, matches))
        } else {
            Err(Some(index))
        }
    }
}
