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
}

impl StylesheetScope {
    fn resolve(&self, context: &Context, scopes: &[&str], token: Option<&str>) -> StyleBuilder {
        use StylesheetScope::*;
        match self {
            Child(stylesheet) => stylesheet.resolve(context, scopes, token),
            DirectChild(stylesheet) => {
                let mut style = stylesheet.style;

                if scopes.len() == 1 {
                    let token_style = token
                        .map(|token| SelectorSegment::Token(token.to_string()))
                        .and_then(|scope| stylesheet.scopes.get(&scope))
                        .map(|scoped| scoped.get().style);
                    if let Some(token_style) = token_style {
                        style = style.merge_with(token_style);
                    }
                }

                let substyle = scopes.first()
                    .map(|scope| SelectorSegment::Kind(scope.to_string()))
                    .or(token.map(|token| SelectorSegment::Token(token.to_string())))
                    .and_then(|scope| stylesheet.scopes.get(&scope))
                    .map(|subsheet| subsheet.resolve(context, &scopes[1..], token));
                if let Some(substyle) = substyle {
                    style.merge_with(substyle)
                } else {
                    style
                }
            },
            BranchCheck(branches) => {
                unimplemented!();
            },
        }
    }
}

impl Stylesheet {
    pub fn resolve(&self, context: &Context, scopes: &[&str], token: Option<&str>) -> StyleBuilder {
        let mut style = self.style;

        let token_style = token
            .map(|token| SelectorSegment::Token(token.to_string()))
            .and_then(|scope| self.scopes.get(&scope))
            .map(|scoped| scoped.get().style);

        if let Some(token_style) = token_style {
            style = style.merge_with(token_style);
        }

        (0..scopes.len())
            .rev()
            .fold(style, |style, i| {
                if let Some(subscope) = self.scopes.get(&SelectorSegment::Kind(scopes[i].to_string())) {
                    style.merge_with(subscope.resolve(context, &scopes[i+1..], token))
                } else {
                    style
                }
            })
    }
}

