use super::*;
use std::sync::RwLock;
use std::collections::BTreeMap;
use lazy_static::lazy_static;

#[derive(Debug)]
enum ContextNode<'a> {
    Node(&'a str, Context<'a>),
    Leaf(&'a str),
}

lazy_static! {
    static ref REGEX: RwLock<BTreeMap<String, Regex>> = RwLock::default();
}

fn regex(name: &str) -> Regex {
    if let Some(regex) = REGEX.read().unwrap().get(name) {
        return regex.clone();
    }
    REGEX.write().unwrap().entry(name.to_string())
        .or_insert_with(move || Regex::new(name).unwrap())
        .clone()
}

impl<'a> ContextNode<'a> {
    fn satisfies_selector(&self, selector: &[SelectorSegment]) -> Option<Vec<Option<&str>>> {
        match &selector[0] {
            SelectorSegment::Any => match self {
                ContextNode::Node(.., context) => context.satisfies_selector(&selector[1..]).or_else(|| context.satisfies_selector(selector)),
                _ => Some(vec![]),
            }
            SelectorSegment::Kind(name) => match self {
                ContextNode::Node(kind, context) if kind == name => context.satisfies_selector(&selector[1..]).or_else(|| context.satisfies_selector(selector)),
                ContextNode::Node(.., context) => context.satisfies_selector(selector),
                _ => None,
            }
            SelectorSegment::Token(name) => match self {
                ContextNode::Node(.., context) => context.satisfies_selector(selector),
                ContextNode::Leaf(token) => if token == name { Some(vec![]) } else { None },
            }
            SelectorSegment::TokenPattern(pattern) => {
                match self {
                    ContextNode::Node(.., context) => context.satisfies_selector(selector),
                    ContextNode::Leaf(token) => {
                        let pattern = regex(pattern);
                        let captures = pattern.captures(token)?;
                        Some(captures
                            .iter()
                            .map(|m| m.map(|m| m.as_str()))
                            .collect())
                    }
                }
            }
            SelectorSegment::NoChildren(..) => unimplemented!(". cannot be used in a branch check"),
            SelectorSegment::DirectChild(child) => match child.as_ref() {
                SelectorSegment::Any => match self {
                    ContextNode::Node(.., context) => context.satisfies_selector(&selector[1..]),
                    _ => Some(vec![]),
                }
                SelectorSegment::Kind(name) => match self {
                    ContextNode::Node(kind, context) if kind == name => context.satisfies_selector(&selector[1..]),
                    _ => None,
                }
                SelectorSegment::Token(name) => match self {
                    ContextNode::Node(..) => None,
                    ContextNode::Leaf(token) => if token == name { Some(vec![]) } else { None },
                }
                SelectorSegment::TokenPattern(pattern) => {
                    match self {
                        ContextNode::Node(..) => None,
                        ContextNode::Leaf(token) => {
                            let pattern = regex(pattern);
                            let captures = pattern.captures(token)?;
                            Some(captures
                                 .iter()
                                 .map(|m| m.map(|m| m.as_str()))
                                 .collect())
                        }
                    }
                }
                SelectorSegment::NoChildren(..) => unimplemented!(". cannot be used in a branch check"),
                SelectorSegment::BranchCheck(..) => unimplemented!("Consider using `[> selector]` instead of `> [selector]` for the same effect"),
                SelectorSegment::DirectChild(..) => unreachable!(),
            }
            SelectorSegment::BranchCheck(..) => unreachable!("This should be handled at the Context level"),
        }
    }

    fn add_child(&mut self, scope: &[(usize, &'a str)], token: &'a str) {
        match self {
            ContextNode::Node(.., child_context) => child_context.add_child(scope, token),
            ContextNode::Leaf(..) => unreachable!(),
        }
    }

    fn from_scope(scope: &[(usize, &'a str)], token: &'a str) -> Self {
        match scope.first() {
            Some((.., name)) => ContextNode::Node(name, Context::with_child(ContextNode::from_scope(&scope[1..], token))),
            None => ContextNode::Leaf(token),
        }
    }
}

/// The Context tracks the state of the nodes previously parsed, which enables branch checking and
/// regular expression match interpolation.
#[derive(Debug, Default)]
pub struct Context<'a> {
    children: Vec<ContextNode<'a>>,
}

impl<'a> Context<'a> {
    fn with_child(child: ContextNode<'a>) -> Self {
        Context {
            children: vec![child],
        }
    }

    /// Adds a node to the context
    pub fn add_child(&mut self, scope: &[(usize, &'a str)], token: &'a str) {
        match scope.first() {
            Some((index, ..)) if *index < self.children.len() => self.children[*index].add_child(&scope[1..], token),
            Some(..) => self.children.push(ContextNode::from_scope(scope, token)),
            None => self.children.push(ContextNode::Leaf(token)),
        }
    }

    fn satisfies_selector_from_child(&self, selector: &[SelectorSegment], min_child: usize) -> Option<(usize, Vec<Option<&str>>)> {
        if selector.is_empty() { return Some((min_child, vec![])); }
        match &selector[0] {
            SelectorSegment::BranchCheck(sub_selector) => self.satisfies_selector_from_child(&sub_selector, min_child)
                .and_then(|(child, mut matches)| {
                    let (end_child, mut later) = self.satisfies_selector_from_child(&selector[1..], child + 1)?;
                    matches.append(&mut later);
                    Some((end_child, matches))
                }),
            _ => self.children
                .iter()
                .enumerate()
                .skip(min_child)
                .find_map(|(index, node)| node.satisfies_selector(selector).map(|result| (index, result))),
        }
    }

    fn satisfies_selector(&self, selector: &[SelectorSegment]) -> Option<Vec<Option<&str>>> {
        self.satisfies_selector_from_child(selector, 0).map(|(_, result)| result)
    }

    fn child(&self, depth: usize) -> Option<&Self> {
        if depth == 0 {
            Some(self)
        } else {
            match self.children.last() {
                Some(ContextNode::Node(.., context)) => context.child(depth - 1),
                _ => None,
            }
        }
    }
}

impl Stylesheet {
    /// Resolves a style without context or indexed scopes
    pub fn resolve_basic(&self, scopes: &[&str], token: Option<&str>) -> StyleBuilder {
        self.resolve(&Context::default(), &scopes.into_iter().map(|s| (0, *s)).collect::<Vec<_>>()[..], token)
    }

    /// Resolves a style, using the provided Context, and indexed scopes. The index is the index of
    /// the node within its parent.
    pub fn resolve(&self, context: &Context, scopes: &[(usize, &str)], token: Option<&str>) -> StyleBuilder {
        self.resolve_with_matches(context, scopes, token, &[])
    }

    fn resolve_with_matches<'a>(&self, context: &'a Context, scopes: &[(usize, &str)], token: Option<&str>, matches: &[Option<&'a str>]) -> StyleBuilder {
        self.scopes.iter()
            .fold(self.style.interpolate(matches), move |style, (selector_segment, stylesheet)| match selector_segment {
                SelectorSegment::Any => (0..scopes.len()).rev()
                    .fold(style, |style, i| {
                        style.merge_with(&stylesheet.resolve_with_matches(context.child(i+1).unwrap_or(&Context::default()), &scopes[i+1..], token, matches))
                    }),
                SelectorSegment::Kind(name) => (0..scopes.len()).rev()
                    .fold(style, |style, i| {
                        if scopes[i].1 == name {
                            style.merge_with(&stylesheet.resolve_with_matches(context.child(i+1).unwrap_or(&Context::default()), &scopes[i+1..], token, matches))
                        } else {
                            style
                        }
                    }),
                SelectorSegment::Token(name) => {
                    if token == Some(name) {
                        style.merge_with(&stylesheet.style.interpolate(matches))
                    } else {
                        style
                    }
                }
                SelectorSegment::TokenPattern(name) => {
                    if let Some(mut sub_matches) = token.and_then(|token| Some(regex(name).captures(token)?.iter().map(|m| m.map(|m| m.as_str())).collect())) {
                        let mut matches = matches.to_vec();
                        matches.append(&mut sub_matches);
                        style.merge_with(&stylesheet.style.interpolate(&matches))
                    } else {
                        style
                    }
                }
                SelectorSegment::BranchCheck(selector) => {
                    if token.map(|s| s.len()).unwrap_or(0) > 15 {
                        if let Some(mut sub_matches) = context.satisfies_selector(&selector) {
                            let mut matches = matches.to_vec();
                            matches.append(&mut sub_matches);
                            style.merge_with(&stylesheet.resolve_with_matches(context, scopes, token, &matches))
                        } else {
                            style
                        }
                    } else {
                        style
                    }
                }
                SelectorSegment::NoChildren(segment) => match segment.as_ref() {
                    SelectorSegment::Kind(name) => {
                        if scopes.last().map(|x| x.1) == Some(name) {
                            style.merge_with(&stylesheet.style.interpolate(matches))
                        } else {
                            style
                        }
                    }
                    SelectorSegment::Any => style.merge_with(&stylesheet.style.interpolate(matches)),
                    SelectorSegment::Token(..) => unreachable!(),
                    SelectorSegment::TokenPattern(..) => unreachable!(),
                    SelectorSegment::NoChildren(..) => unreachable!(),
                    SelectorSegment::BranchCheck(..) => unreachable!(),
                    SelectorSegment::DirectChild(..) => unreachable!(),
                }
                SelectorSegment::DirectChild(segment) => match segment.as_ref() {
                    SelectorSegment::Any => style
                        .merge_with(&stylesheet.resolve_with_matches(context.child(1).unwrap_or(&Context::default()), &scopes[1..], token, matches)),
                    SelectorSegment::Kind(name) => {
                        if scopes.first().map(|x| x.1) == Some(name) {
                            style.merge_with(&stylesheet.resolve_with_matches(context.child(1).unwrap_or(&Context::default()), &scopes[1..], token, matches))
                        } else {
                            style
                        }
                    }
                    SelectorSegment::Token(name) => {
                        if scopes.is_empty() && token == Some(name) {
                            style.merge_with(&stylesheet.style.interpolate(matches))
                        } else {
                            style
                        }
                    }
                    SelectorSegment::TokenPattern(name) => {
                        if let Some(mut sub_matches) = token.and_then(|token| Some(regex(name).captures(token)?.iter().map(|m| m.map(|m| m.as_str())).collect())) {
                            let mut matches = matches.to_vec();
                            matches.append(&mut sub_matches);
                            style.merge_with(&stylesheet.style.interpolate(&matches))
                        } else {
                            style
                        }
                    }
                    SelectorSegment::NoChildren(segment) => match segment.as_ref() {
                        SelectorSegment::Kind(name) => {
                            if scopes.len() == 1 && scopes[0].1 == name {
                                style.merge_with(&stylesheet.style.interpolate(matches))
                            } else {
                                style
                            }
                        }
                        SelectorSegment::Any => style.merge_with(&stylesheet.style.interpolate(matches)),
                        SelectorSegment::Token(..) => unreachable!(),
                        SelectorSegment::TokenPattern(..) => unreachable!(),
                        SelectorSegment::NoChildren(..) => unreachable!(),
                        SelectorSegment::BranchCheck(..) => unreachable!(),
                        SelectorSegment::DirectChild(..) => unreachable!(),
                    }
                    SelectorSegment::BranchCheck(..) => unimplemented!("Consider using `[> selector]` instead of `> [selector]` for the same effect"),
                    SelectorSegment::DirectChild(..) => unreachable!(),
                }
            })
    }
}
