use std::collections::BTreeMap;
use tree_sitter::{Tree, Node};
use ansi_term::{Style, Colour};
use crate::error::Error;

#[derive(Default, Debug)]
pub struct Stylesheet {
    style: Style,
    scopes: BTreeMap<String, Stylesheet>,
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

    fn parse_style(source: &str, stylesheet: &mut Stylesheet, node: Node) -> Result<(), Box<dyn std::error::Error>> {
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
            ("color", color) | ("colour", color) => { stylesheet.style.foreground = Some(Stylesheet::parse_color(color)?); }
            ("background-color", color) | ("background-colour", color) => { stylesheet.style.background = Some(Stylesheet::parse_color(color)?); }

            ("italic", "true") => { stylesheet.style.is_italic = true; }
            ("italic", "false") => { stylesheet.style.is_italic = false; }

            ("underline", "true") => { stylesheet.style.is_underline = true; }
            ("underline", "false") => { stylesheet.style.is_underline = false; }

            ("strikethrough", "true") => { stylesheet.style.is_strikethrough = true; }
            ("strikethrough", "false") => { stylesheet.style.is_strikethrough = false; }

            ("bold", "true") => { stylesheet.style.is_bold = true; }
            ("bold", "false") => { stylesheet.style.is_bold = false; }

            ("dim", "true") => { stylesheet.style.is_dimmed = true; }
            ("dim", "false") => { stylesheet.style.is_dimmed = false; }

            ("blink", "true") => { stylesheet.style.is_blink = true; }
            ("blink", "false") => { stylesheet.style.is_blink = false; }
    
            ("reverse", "true") => { stylesheet.style.is_reverse = true; }
            ("reverse", "false") => { stylesheet.style.is_dimmed = false; }

            ("hidden", "true") => { stylesheet.style.is_hidden = true; }
            ("hidden", "false") => { stylesheet.style.is_hidden = false; }

            _ => {}
        }

        Ok(())
    }

    fn parse_rule(source: &str, stylesheet: &mut Stylesheet, node: Node) -> Result<(), Box<dyn std::error::Error>> {
        let mut scoped = stylesheet;
        for child in node.children().filter(Node::is_named) {
            match child.kind() {
                "node_kind" => {
                    let name = &source[child.start_byte()..child.end_byte()];
                    scoped = scoped.scopes.entry(name.to_string()).or_default();
                }
                "style" => Stylesheet::parse_style(source, scoped, child)?,
                kind => return Err(Box::new(Error(format!("Invalid state {} while parsing rule", kind)))),
            }
        }
        Ok(())
    }

    fn parse_node(source: &str, stylesheet: &mut Stylesheet, node: Node) -> Result<(), Box<dyn std::error::Error>> {
        match node.kind() {
            "source_file" => {
                for child in node.children().filter(Node::is_named) {
                    Stylesheet::parse_node(source, stylesheet, child)?;
                }
            },
            "rule" => Stylesheet::parse_rule(source, stylesheet, node)?,
            "comment" => {},
            kind => return Err(Box::new(Error(format!("Invalid state {} while parsing node", kind)))),
        }
        Ok(())
    }

    pub fn parse(source: &str, tree: Tree) -> Result<Stylesheet, Box<dyn std::error::Error>> {
        let root = tree.root_node();
        let mut stylesheet = Stylesheet {
            style: Style::default(),
            scopes: BTreeMap::default(),
        };
        Stylesheet::parse_node(source, &mut stylesheet, root)?;
        eprintln!("{:?}", stylesheet);
        Ok(stylesheet)
    }
}
