use enquote::unquote;
use regex::Regex;
use tree_sitter::TreeCursor;
use super::{helper::*, Selector};

#[derive(Clone, Debug)]
pub(crate) enum NodeKind {
    Any,
    Kind(String),
    Token(String),
    TokenPattern(Regex),
    Group(Option<String>, Selector),
}

impl FromSource for NodeKind {
    fn from_source(tree: &mut TreeCursor, source: &[u8]) -> crate::Result<Self> {
        children!(tree, "node");
        extras!(tree);
        let kind = match tree.node().kind() {
            "any" => NodeKind::Any,
            "kind" => {
                children!(tree, "kind");
                let name = text!(tree, source, "name")?.to_string();
                tree.goto_parent();
                NodeKind::Kind(name)
            },
            "token" => {
                children!(tree, "token");
                let node = match tree.node().kind() {
                    "string" => NodeKind::Token(unquote(text!(tree, source, "string")?)?),
                    "regex" => NodeKind::TokenPattern(Regex::new(text!(tree, source, "regex")?)?),
                    name => return Err(crate::Error::invalid("node_kind(token)", name)),
                };
                tree.goto_parent();
                node
            }
            "group" => {
                children!(tree, "group");
                extras!(tree);
                let name = if tree.node().kind() == "group_name" {
                    children!(tree, "group_name");
                    let name = text!(tree, source, "name")?.to_string();
                    tree.goto_parent();
                    tree.goto_next_sibling();
                    extras!(tree);
                    Some(name)
                } else {
                    None
                };
                let selector = Selector::from_source(tree, source)?;
                tree.goto_parent();
                NodeKind::Group(name, selector)
            }
            name => return Err(crate::Error::invalid("node_kind", name)),
        };
        tree.goto_parent();
        Ok(kind)
    }
}
