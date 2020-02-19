use enquote::unquote;
use regex::{Regex, RegexBuilder};
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

fn unquote_regex(string: &str) -> Result<Regex, regex::Error> {
    if !string.starts_with("/") {
        return Err(regex::Error::Syntax(String::from("Regular expression literal missing leading slash")));
    }
    let mut escape = false;
    let mut regex = String::new();
    let mut chars = string.chars().skip(1);
    let mut closed = true;
    for ch in &mut chars {
        if escape && ch == '/' {
            regex.push('/');
            escape = false;
        } else if escape {
            regex.push('\\');
            regex.push(ch);
            escape = false;
        } else if ch == '\\' {
            escape = true;
        } else if ch == '/' {
            closed = true;
            break;
        } else {
            regex.push(ch);
        }
    }
    if !closed {
        return Err(regex::Error::Syntax(String::from("Regular expression literal missing trailing slash")));
    }
    let mut builder = RegexBuilder::new(&regex);
    for ch in chars {
        match ch {
            'i' => builder.case_insensitive(true),
            'm' => builder.multi_line(true),
            's' => builder.dot_matches_new_line(true),
            'U' => builder.swap_greed(true),
            'x' => builder.ignore_whitespace(true),
            'u' => builder.unicode(true),
            other => return Err(regex::Error::Syntax(format!("Unsupported regular expression flag {}", other))),
        };
    }
    builder.build()
}

impl FromSource for NodeKind {
    fn from_source(tree: &mut TreeCursor, source: &[u8]) -> crate::Result<Self> {
        children!(tree, "node");
        extras!(tree, "node");
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
                    "regex" => NodeKind::TokenPattern(unquote_regex(text!(tree, source, "regex")?)?),
                    name => return Err(crate::Error::invalid("node_kind(token)", name)),
                };
                tree.goto_parent();
                node
            }
            "group" => {
                children!(tree, "group");
                extras!(tree, "group");
                let name = if tree.node().kind() == "group_name" {
                    children!(tree, "group_name");
                    let name = text!(tree, source, "name")?.to_string();
                    tree.goto_parent();
                    tree.goto_next_sibling();
                    extras!(tree, "group(2)");
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
