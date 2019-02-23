use std::collections::BTreeMap;
use tree_sitter::{Tree, Node};
use ansi_term::{Style, Colour};
use crate::error::Error;

#[derive(Copy, Clone, Default, Debug)]
pub struct StyleBuilder {
    foreground:       Option<Colour>,
    background:       Option<Colour>,
    is_italic:        Option<bool>,
    is_bold:          Option<bool>,
    is_dimmed:        Option<bool>,
    is_underline:     Option<bool>,
    is_strikethrough: Option<bool>,
    is_blink:         Option<bool>,
    is_hidden:        Option<bool>,
    is_reverse:       Option<bool>,
}

impl StyleBuilder {
    pub fn build(self) -> Style {
        Style { 
            foreground:       self.foreground,
            background:       self.background,
            is_italic:        self.is_italic.unwrap_or_default(),
            is_bold:          self.is_bold.unwrap_or_default(),
            is_dimmed:        self.is_dimmed.unwrap_or_default(),
            is_underline:     self.is_underline.unwrap_or_default(),
            is_strikethrough: self.is_strikethrough.unwrap_or_default(),
            is_blink:         self.is_blink.unwrap_or_default(),
            is_hidden:        self.is_hidden.unwrap_or_default(),
            is_reverse:       self.is_reverse.unwrap_or_default(),
        }
    }

    fn merge_with(&mut self, other: StyleBuilder) {
        self.foreground       = other.foreground.or(self.foreground);
        self.background       = other.background.or(self.background);
        self.is_italic        = other.is_italic.or(self.is_italic);
        self.is_bold          = other.is_bold.or(self.is_bold);
        self.is_dimmed        = other.is_dimmed.or(self.is_dimmed);
        self.is_underline     = other.is_underline.or(self.is_underline);
        self.is_strikethrough = other.is_strikethrough.or(self.is_strikethrough);
        self.is_blink         = other.is_blink.or(self.is_blink);
        self.is_hidden        = other.is_hidden.or(self.is_hidden);
        self.is_reverse       = other.is_reverse.or(self.is_reverse);
    }
}

#[derive(Default, Debug)]
pub struct Stylesheet {
    style: StyleBuilder,
    scopes: BTreeMap<String, Stylesheet>,
}

impl Stylesheet {
    pub fn resolve(&self, scope: &[&str], token: &str) -> StyleBuilder {
        let mut style = self.style;

        if let Some(substyle) = self.scopes.get(&format!("\"{}\"", token)) {
            style.merge_with(substyle.style);
        }

        for i in (0..scope.len()).rev() {
            if let Some(substyle) = self.scopes.get(scope[i]) {
                style.merge_with(substyle.resolve(&scope[i..], token));
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

            ("italic", "true") => { stylesheet.style.is_italic = Some(true); }
            ("italic", "false") => { stylesheet.style.is_italic = Some(false); }

            ("underline", "true") => { stylesheet.style.is_underline = Some(true); }
            ("underline", "false") => { stylesheet.style.is_underline = Some(false); }

            ("strikethrough", "true") => { stylesheet.style.is_strikethrough = Some(true); }
            ("strikethrough", "false") => { stylesheet.style.is_strikethrough = Some(false); }

            ("bold", "true") => { stylesheet.style.is_bold = Some(true); }
            ("bold", "false") => { stylesheet.style.is_bold = Some(false); }

            ("dim", "true") => { stylesheet.style.is_dimmed = Some(true); }
            ("dim", "false") => { stylesheet.style.is_dimmed = Some(false); }

            ("blink", "true") => { stylesheet.style.is_blink = Some(true); }
            ("blink", "false") => { stylesheet.style.is_blink = Some(false); }

            ("reverse", "true") => { stylesheet.style.is_reverse = Some(true); }
            ("reverse", "false") => { stylesheet.style.is_dimmed = Some(false); }

            ("hidden", "true") => { stylesheet.style.is_hidden = Some(true); }
            ("hidden", "false") => { stylesheet.style.is_hidden = Some(false); }

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
            style: StyleBuilder::default(),
            scopes: BTreeMap::default(),
        };
        Stylesheet::parse_node(source, &mut stylesheet, root)?;
        Ok(stylesheet)
    }
}
