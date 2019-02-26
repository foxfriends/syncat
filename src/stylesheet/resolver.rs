use super::*;

#[derive(Default)]
pub struct Context {
    children: BTreeMap<SelectorSegment, Context>,
}

impl Context {
    pub fn at<R, F: FnOnce(&mut Self) -> R>(&mut self, kind: String, token: Option<String>, handler: F) -> R {
        let mut child = self.children
            .entry(SelectorSegment::Kind(kind))
            .or_default();
        if let Some(token) = token {
            child = child.children
                .entry(SelectorSegment::Token(token))
                .or_default();
        }
        handler(child)
    }

    pub fn add(&mut self, kind: String, token: Option<String>) {
        let child = self.children
            .entry(SelectorSegment::Kind(kind))
            .or_default();
        if let Some(token) = token {
            child.children
                .entry(SelectorSegment::Token(token))
                .or_default();
        }
    }

    fn satisfies_selector(&self, selector: &[SelectorSegment]) -> bool {
        false
    }
}

impl Stylesheet {
    pub fn resolve(&self, context: &Context, scopes: &[&str], token: Option<&str>) -> StyleBuilder {
        if scopes.is_empty() { return self.style }
        self.scopes.iter()
            .fold(self.style, |style, (selector_segment, stylesheet)| match selector_segment {
                SelectorSegment::Kind(name) => (0..scopes.len()).rev()
                    .fold(style, |style, i| {
                        if scopes[i] == name {
                            style.merge_with(stylesheet.resolve(context, &scopes[i+1..], token))
                        } else {
                            style
                        }
                    }),
                SelectorSegment::Token(name) => {
                    if token == Some(name) {
                        style.merge_with(stylesheet.style)
                    } else {
                        style
                    }
                }
                SelectorSegment::BranchCheck(selector) => {
                    if context.satisfies_selector(&selector) {
                        style.merge_with(stylesheet.resolve(context, scopes, token))
                    } else {
                        style
                    }
                }
                SelectorSegment::DirectChild(segment) => match segment.as_ref() {
                    SelectorSegment::Kind(name) => {
                        if scopes[0] == name {
                            style.merge_with(stylesheet.resolve(context, &scopes[1..], token))
                        } else {
                            style
                        }
                    }
                    SelectorSegment::Token(name) => {
                        if scopes.len() <= 1 && token == Some(name) {
                            style.merge_with(stylesheet.style)
                        } else {
                            style
                        }
                    }
                    SelectorSegment::BranchCheck(_selector) => unimplemented!(),
                    SelectorSegment::DirectChild(_name) => unreachable!(),
                }
            })
    }
}
