use std::collections::BTreeMap;
use tree_sitter::{Tree, Node};
use crate::error::Error;
use crate::style::{Colour, StyleBuilder};

#[derive(Clone, Eq, PartialEq, Ord, PartialOrd, Debug)]
enum SelectorSegment {
    Node(String),
    DirectChild(String),
    Token(String),
}

#[derive(Default, Debug)]
pub struct Stylesheet {
    style: StyleBuilder,
    scopes: BTreeMap<SelectorSegment, Stylesheet>,
}

impl Stylesheet {
    pub fn resolve(&self, scope: &[&str], token: Option<&str>) -> StyleBuilder {
        let mut style = self.style;

        if let Some(substyle) = token.and_then(|token| self.scopes.get(&SelectorSegment::Token(format!("\"{}\"", token)))) {
            style.merge_with(substyle.style);
        }

        for i in (0..scope.len()).rev() {
            if let Some(substyle) = self.scopes.get(&SelectorSegment::Node(scope[i].to_string())) {
                style.merge_with(substyle.resolve(&scope[i..], token));

                let direct_child = scope
                    .get(i + 1)
                    .and_then(|value| substyle.scopes.get(&SelectorSegment::DirectChild(value.to_string())));
                if let Some(subsubstyle) = direct_child {
                    style.merge_with(subsubstyle.resolve(&scope[i+1..], token));
                }
            }
        }

        style
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

    fn parse_style(source: &str, stylebuilder: &mut StyleBuilder, node: Node) -> Result<(), Box<dyn std::error::Error>> {
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
            ("color", color) | ("colour", color) => { stylebuilder.foreground = Some(Stylesheet::parse_color(color)?); }
            ("background-color", color) | ("background-colour", color) => { stylebuilder.background = Some(Stylesheet::parse_color(color)?); }

            ("italic", "true") => { stylebuilder.is_italic = Some(true); }
            ("italic", "false") => { stylebuilder.is_italic = Some(false); }

            ("underline", "true") => { stylebuilder.is_underline = Some(true); }
            ("underline", "false") => { stylebuilder.is_underline = Some(false); }

            ("strikethrough", "true") => { stylebuilder.is_strikethrough = Some(true); }
            ("strikethrough", "false") => { stylebuilder.is_strikethrough = Some(false); }

            ("bold", "true") => { stylebuilder.is_bold = Some(true); }
            ("bold", "false") => { stylebuilder.is_bold = Some(false); }

            ("dim", "true") => { stylebuilder.is_dimmed = Some(true); }
            ("dim", "false") => { stylebuilder.is_dimmed = Some(false); }

            ("blink", "true") => { stylebuilder.is_blink = Some(true); }
            ("blink", "false") => { stylebuilder.is_blink = Some(false); }

            ("reverse", "true") => { stylebuilder.is_reverse = Some(true); }
            ("reverse", "false") => { stylebuilder.is_dimmed = Some(false); }

            ("hidden", "true") => { stylebuilder.is_hidden = Some(true); }
            ("hidden", "false") => { stylebuilder.is_hidden = Some(false); }

            _ => {}
        }

        Ok(())
    }

    fn parse_selector(source: &str, node: Node) -> Result<Vec<SelectorSegment>, Box<dyn std::error::Error>> {
        let mut scope = vec![];
        for child in node.children().filter(Node::is_named) {
            match child.kind() {
                "node_kind" => {
                    let name = &source[child.start_byte()..child.end_byte()];
                    scope.push(SelectorSegment::Node(name.to_string()));
                }
                "token" => {
                    let name = &source[child.start_byte()..child.end_byte()];
                    scope.push(SelectorSegment::Token(name.to_string()));
                }
                "direct_child" => {
                    let named_child = child.named_child(0).ok_or(Box::new(Error(format!("Missing child when parsing direct_child"))))?;
                    let name = &source[named_child.start_byte()..named_child.end_byte()];
                    scope.push(SelectorSegment::DirectChild(name.to_string()));
                }
                kind => return Err(Box::new(Error(format!("Invalid state {} while parsing selector", kind)))),
            }
        }
        Ok(scope)
    }

    fn parse_rule(&mut self, source: &str, node: Node) -> Result<(), Box<dyn std::error::Error>> {
        let mut selectors = vec![];
        let mut stylebuilder = StyleBuilder::default();
        for child in node.children().filter(Node::is_named) {
            match child.kind() {
                "selector" => selectors.push(Stylesheet::parse_selector(source, child)?),
                "style" => Stylesheet::parse_style(source, &mut stylebuilder, child)?,
                kind => return Err(Box::new(Error(format!("Invalid state {} while parsing rule", kind)))),
            }
        }
        for selector in &selectors {
            let mut scoped: &mut Stylesheet = self;
            for segment in selector {
                scoped = scoped.scopes.entry(segment.clone()).or_default();
            }
            scoped.style.merge_with(stylebuilder);
        }
        Ok(())
    }

    fn parse_node(&mut self, source: &str, node: Node) -> Result<(), Box<dyn std::error::Error>> {
        match node.kind() {
            "source_file" => {
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
