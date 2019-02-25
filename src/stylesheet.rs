use std::collections::BTreeMap;
use tree_sitter::{Tree, Node};
use crate::error::Error;
use crate::style::{Colour, StyleBuilder};
use crate::language::Lang;

#[derive(Clone, Eq, PartialEq, Ord, PartialOrd, Debug)]
enum SelectorSegment {
    Kind(String),
    Token(String),
}

#[derive(Debug)]
enum StylesheetScope {
    Child(Stylesheet),
    DirectChild(Stylesheet),
}

impl StylesheetScope {
    fn get(&self) -> &Stylesheet {
        use StylesheetScope::*;
        match self {
            Child(inner) => inner,
            DirectChild(inner) => inner,
        }
    }

    fn get_mut(&mut self) -> &mut Stylesheet {
        use StylesheetScope::*;
        match self {
            Child(inner) => inner,
            DirectChild(inner) => inner,
        }
    }

    fn resolve(&self, scopes: &[&str], token: Option<&str>) -> StyleBuilder {
        use StylesheetScope::*;
        match self {
            Child(stylesheet) => stylesheet.resolve(scopes, token),
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
                    .map(|subsheet| subsheet.resolve(&scopes[1..], token));
                if let Some(substyle) = substyle {
                    style.merge_with(substyle)
                } else {
                    style
                }
            }
        }
    }
}

#[derive(Default, Debug)]
pub struct Stylesheet {
    style: StyleBuilder,
    scopes: BTreeMap<SelectorSegment, StylesheetScope>,
}

impl Stylesheet {
    pub fn resolve(&self, scopes: &[&str], token: Option<&str>) -> StyleBuilder {
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
                    style.merge_with(subscope.resolve(&scopes[i+1..], token))
                } else {
                    style
                }
            })
    }
}

impl Stylesheet {
    fn parse_color(color: &str) -> Result<Colour, Box<dyn std::error::Error>> {
        match color {
            "red"    => Ok(Colour::Red),
            "blue"   => Ok(Colour::Blue),
            "green"  => Ok(Colour::Green),
            "yellow" => Ok(Colour::Yellow),
            "purple" => Ok(Colour::Purple),
            "cyan"   => Ok(Colour::Cyan),
            "white"  => Ok(Colour::White),
            "black"  => Ok(Colour::Black),
            _        => {
                if let Ok(int) = color.parse::<u8>() {
                    Ok(Colour::Fixed(int))
                } else if color.starts_with("#") && color.len() == 7 {
                    let bytes = hex::decode(&color[1..]).map_err(Box::new)?;
                    Ok(Colour::RGB(bytes[0], bytes[1], bytes[2]))
                } else {
                    Err(Box::new(Error(format!("Unknown colour \"{}\"", color))))
                }
            }
        }
    }

    fn parse_style(source: &str, stylebuilder: &mut StyleBuilder, node: Node, important: bool) -> Result<(), Box<dyn std::error::Error>> {
        use crate::style::setting;
        let mut style = None;
        let mut value = None;
        for child in node.children().filter(Node::is_named) {
            match child.kind() {
                "style_name" => style = Some(&source[child.start_byte()..child.end_byte()]),
                "style_value" => value = Some(&source[child.start_byte()..child.end_byte()]),
                kind => return Err(Box::new(Error(format!("Invalid state {} while parsing style", kind)))),
            }
        }

        if style.is_none() || value.is_none() {
            return Err(Box::new(Error("Style name or style value is missing".to_string())));
        }

        match (style.unwrap().to_lowercase().as_str(), value.unwrap().to_lowercase().as_str()) {
            ("color", color) | ("colour", color) => { stylebuilder.foreground = setting(important, Stylesheet::parse_color(color)?); }
            ("background-color", color) | ("background-colour", color) => { stylebuilder.background = setting(important, Stylesheet::parse_color(color)?); }

            ("italic", "true") => { stylebuilder.is_italic = setting(important, true); }
            ("italic", "false") => { stylebuilder.is_italic = setting(important, false); }

            ("underline", "true") => { stylebuilder.is_underline = setting(important, true); }
            ("underline", "false") => { stylebuilder.is_underline = setting(important, false); }

            ("strikethrough", "true") => { stylebuilder.is_strikethrough = setting(important, true); }
            ("strikethrough", "false") => { stylebuilder.is_strikethrough = setting(important, false); }

            ("bold", "true") => { stylebuilder.is_bold = setting(important, true); }
            ("bold", "false") => { stylebuilder.is_bold = setting(important, false); }

            ("dim", "true") => { stylebuilder.is_dimmed = setting(important, true); }
            ("dim", "false") => { stylebuilder.is_dimmed = setting(important, false); }

            ("blink", "true") => { stylebuilder.is_blink = setting(important, true); }
            ("blink", "false") => { stylebuilder.is_blink = setting(important, false); }

            ("reverse", "true") => { stylebuilder.is_reverse = setting(important, true); }
            ("reverse", "false") => { stylebuilder.is_dimmed = setting(important, false); }

            ("hidden", "true") => { stylebuilder.is_hidden = setting(important, true); }
            ("hidden", "false") => { stylebuilder.is_hidden = setting(important, false); }

            ("language", lang) => {
                let language = lang.parse::<Lang>()?;
                stylebuilder.language = setting(important, language);
            }

            _ => {}
        }

        Ok(())
    }

    fn parse_selector(&mut self, source: &str, node: Node, stylebuilder: StyleBuilder) -> Result<(), Box<dyn std::error::Error>> {
        let mut scope: &mut Stylesheet = self;
        use SelectorSegment::*;
        use StylesheetScope::*;
        for child in node.children().filter(Node::is_named) {
            match child.kind() {
                "node_kind" => {
                    let name = &source[child.start_byte()..child.end_byte()];
                    scope = scope.scopes.entry(Kind(name.to_string())).or_insert_with(|| Child(Stylesheet::default())).get_mut();
                }
                "token" => {
                    let name = &source[child.start_byte() + 1..child.end_byte() - 1];
                    scope = scope.scopes.entry(Token(name.to_string())).or_insert_with(|| Child(Stylesheet::default())).get_mut();
                }
                "direct_child" => {
                    let named_child = child.named_child(0).ok_or(Box::new(Error(format!("Missing child when parsing direct_child"))))?;
                    let name = &source[named_child.start_byte()..named_child.end_byte()];
                    scope = scope.scopes.entry(Kind(name.to_string())).or_insert_with(|| DirectChild(Stylesheet::default())).get_mut();
                }
                kind => return Err(Box::new(Error(format!("Invalid state {} while parsing selector", kind)))),
            }
        }
        scope.style = stylebuilder;
        Ok(())
    }

    fn parse_styles(source: &str, stylebuilder: &mut StyleBuilder, node: Node, important: bool) -> Result<(), Box<dyn std::error::Error>> {
        for child in node.children().filter(Node::is_named) {
            match child.kind() {
                "style" => Stylesheet::parse_style(source, stylebuilder, child, important)?,
                kind => return Err(Box::new(Error(format!("Invalid state {} while parsing styles", kind)))),
            }
        }
        Ok(())
    }

    fn parse_rule(&mut self, source: &str, node: Node) -> Result<(), Box<dyn std::error::Error>> {
        let mut selectors = vec![];
        let mut stylebuilder = StyleBuilder::default();
        for child in node.children().filter(Node::is_named) {
            match child.kind() {
                "selector" => selectors.push(child),
                "important_styles" => Stylesheet::parse_styles(source, &mut stylebuilder, child, true)?,
                "styles" => Stylesheet::parse_styles(source, &mut stylebuilder, child, false)?,
                kind => return Err(Box::new(Error(format!("Invalid state {} while parsing rule", kind)))),
            }
        }
        for node in selectors.into_iter() {
            self.parse_selector(source, node, stylebuilder)?;
        }
        Ok(())
    }

    fn parse_node(&mut self, source: &str, node: Node) -> Result<(), Box<dyn std::error::Error>> {
        match node.kind() {
            "stylesheet" => {
                for child in node.children().filter(Node::is_named) {
                    self.parse_node(source, child)?;
                }
            },
            "rule" => self.parse_rule(source, node)?,
            "comment" => {},
            kind => return Err(Box::new(Error(format!("Invalid state {} while parsing node", kind)))),
        }
        Ok(())
    }

    pub fn parse(source: &str, tree: Tree) -> Result<Self, Box<dyn std::error::Error>> {
        let root = tree.root_node();
        let mut stylesheet = Stylesheet {
            style: StyleBuilder::default(),
            scopes: BTreeMap::default(),
        };
        stylesheet.parse_node(source, root)?;
        Ok(stylesheet)
    }
}
