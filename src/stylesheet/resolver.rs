use super::*;

#[derive(Debug)]
enum ContextNode<'a> {
    Node(&'a str, Context<'a>),
    Leaf(&'a str),
}

// NOTE: the Regex gets parsed way too many times here, so maybe it should be stored in some random
// cache.
impl<'a> ContextNode<'a> {
    fn satisfies_selector(&self, selector: &[SelectorSegment]) -> bool {
        match &selector[0] {
            SelectorSegment::Kind(name) => match self {
                ContextNode::Node(kind, context) if kind == name => context.satisfies_selector(&selector[1..]) || context.satisfies_selector(selector),
                ContextNode::Node(.., context) => context.satisfies_selector(selector),
                _ => false,
            }
            SelectorSegment::Token(name) => match self {
                ContextNode::Node(.., context) => context.satisfies_selector(selector),
                ContextNode::Leaf(token) => token == name,
            }
            SelectorSegment::TokenPattern(pattern) => {
                let pattern = Regex::new(pattern).unwrap();
                match self {
                    ContextNode::Node(.., context) => context.satisfies_selector(selector),
                    ContextNode::Leaf(token) => pattern.is_match(token),
                }
            }
            SelectorSegment::DirectChild(child) => match child.as_ref() {
                SelectorSegment::Kind(name) => match self {
                    ContextNode::Node(kind, context) if kind == name => context.satisfies_selector(&selector[1..]),
                    _ => false,
                }
                SelectorSegment::Token(name) => match self {
                    ContextNode::Node(..) => false,
                    ContextNode::Leaf(token) => token == name,
                }
                SelectorSegment::TokenPattern(pattern) => {
                    let pattern = Regex::new(pattern).unwrap();
                    match self {
                        ContextNode::Node(..) => false,
                        ContextNode::Leaf(token) => pattern.is_match(token),
                    }
                }
                SelectorSegment::BranchCheck(..) => unimplemented!("Consider using `[> selector]` instead of `> [selector]` for the same effect"),
                SelectorSegment::DirectChild(..) => unreachable!(),
            }
            SelectorSegment::BranchCheck(sub_selector) => self.satisfies_selector(&sub_selector) && self.satisfies_selector(&selector[1..]),
        }
    }

    fn add_child(&mut self, scope: &[(&'a str, usize)], token: &'a str) {
        match self {
            ContextNode::Node(.., child_context) => child_context.add_child(scope, token),
            ContextNode::Leaf(..) => unreachable!(),
        }
    }

    fn from_scope(scope: &[(&'a str, usize)], token: &'a str) -> Self {
        match scope.first() {
            Some((name, ..)) => ContextNode::Node(name, Context::with_child(ContextNode::from_scope(&scope[1..], token))),
            None => ContextNode::Leaf(token),
        }
    }
}

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

    pub fn add_child(&mut self, scope: &[(&'a str, usize)], token: &'a str) {
        match scope.first() {
            Some((.., index)) if *index < self.children.len() => self.children[*index].add_child(&scope[1..], token),
            Some(..) => self.children.push(ContextNode::from_scope(scope, token)),
            None => self.children.push(ContextNode::Leaf(token)),
        }
    }

    fn satisfies_selector(&self, selector: &[SelectorSegment]) -> bool {
        if selector.is_empty() { return true }
        self.children.iter().any(|node| node.satisfies_selector(selector))
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
    pub fn resolve(&self, context: &Context, scopes: &[(&str, usize)], token: Option<&str>) -> StyleBuilder {
        self.scopes.iter()
            .fold(self.style.clone(), |style, (selector_segment, stylesheet)| match selector_segment {
                SelectorSegment::Kind(name) => (0..scopes.len()).rev()
                    .fold(style, |style, i| {
                        if scopes[i].0 == name {
                            style.merge_with(&stylesheet.resolve(context.child(i+1).unwrap_or(&Context::default()), &scopes[i+1..], token))
                        } else {
                            style
                        }
                    }),
                SelectorSegment::Token(name) => {
                    if token == Some(name) {
                        style.merge_with(&stylesheet.style)
                    } else {
                        style
                    }
                }
                SelectorSegment::TokenPattern(name) => {
                    if token.map(|token| Regex::new(name).unwrap().is_match(token)).unwrap_or(false) {
                        style.merge_with(&stylesheet.style)
                    } else {
                        style
                    }
                }
                SelectorSegment::BranchCheck(selector) => {
                    if context.satisfies_selector(&selector) {
                        style.merge_with(&stylesheet.resolve(context, scopes, token))
                    } else {
                        style
                    }
                }
                SelectorSegment::DirectChild(segment) => match segment.as_ref() {
                    SelectorSegment::Kind(name) => {
                        if scopes.first().map(|x| x.0) == Some(&name.as_str()) {
                            style.merge_with(&stylesheet.resolve(context.child(1).unwrap_or(&Context::default()), &scopes[1..], token))
                        } else {
                            style
                        }
                    }
                    SelectorSegment::Token(name) => {
                        if scopes.is_empty() && token == Some(name) {
                            style.merge_with(&stylesheet.style)
                        } else {
                            style
                        }
                    }
                    SelectorSegment::TokenPattern(name) => {
                        if scopes.is_empty() && token.map(|token| Regex::new(name).unwrap().is_match(token)).unwrap_or(false) {
                            style.merge_with(&stylesheet.style)
                        } else {
                            style
                        }
                    }
                    SelectorSegment::BranchCheck(..) => unimplemented!("Consider using `[> selector]` instead of `> [selector]` for the same effect"),
                    SelectorSegment::DirectChild(..) => unreachable!(),
                }
            })
    }
}
