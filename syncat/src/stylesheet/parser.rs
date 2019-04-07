use super::*;

impl Stylesheet {
    fn parse_string(string: &str) -> &str {
        if string.starts_with("\"") {
            &string[1..string.len() - 1]
        } else {
            string
        }
    }

    fn parse_color(color: &str) -> Result<Colour, crate::BoxedError> {
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

    fn parse_style(source: &str, stylebuilder: &mut StyleBuilder, node: Node, score: (usize, usize)) -> Result<(), crate::BoxedError> {
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
            ("color", color) | ("colour", color) => { stylebuilder.foreground = Setting::Set(score, Stylesheet::parse_color(color)?); }
            ("background-color", color) | ("background-colour", color) => { stylebuilder.background = Setting::Set(score, Stylesheet::parse_color(color)?); }

            ("italic", "true") => { stylebuilder.is_italic = Setting::Set(score, true); }
            ("italic", "false") => { stylebuilder.is_italic = Setting::Set(score, false); }

            ("underline", "true") => { stylebuilder.is_underline = Setting::Set(score, true); }
            ("underline", "false") => { stylebuilder.is_underline = Setting::Set(score, false); }

            ("strikethrough", "true") => { stylebuilder.is_strikethrough = Setting::Set(score, true); }
            ("strikethrough", "false") => { stylebuilder.is_strikethrough = Setting::Set(score, false); }

            ("bold", "true") => { stylebuilder.is_bold = Setting::Set(score, true); }
            ("bold", "false") => { stylebuilder.is_bold = Setting::Set(score, false); }

            ("dim", "true") => { stylebuilder.is_dimmed = Setting::Set(score, true); }
            ("dim", "false") => { stylebuilder.is_dimmed = Setting::Set(score, false); }

            ("blink", "true") => { stylebuilder.is_blink = Setting::Set(score, true); }
            ("blink", "false") => { stylebuilder.is_blink = Setting::Set(score, false); }

            ("reverse", "true") => { stylebuilder.is_reverse = Setting::Set(score, true); }
            ("reverse", "false") => { stylebuilder.is_dimmed = Setting::Set(score, false); }

            ("hidden", "true") => { stylebuilder.is_hidden = Setting::Set(score, true); }
            ("hidden", "false") => { stylebuilder.is_hidden = Setting::Set(score, false); }

            ("language", lang) => {
                let language = Stylesheet::parse_string(lang).parse::<Lang>()?;
                stylebuilder.language = Setting::Set(score, language);
            }

            ("content", content) => {
                stylebuilder.content = Setting::Set(score, Stylesheet::parse_string(content).to_string());
            }

            _ => {}
        }

        Ok(())
    }

    fn parse_selector_segment(source: &str, node: Node) -> Result<SelectorSegment, crate::BoxedError> {
        use SelectorSegment::*;
        match node.kind() {
            "node_kind" => {
                let name = &source[node.start_byte()..node.end_byte()];
                Ok(Kind(name.to_string()))
            }
            "token" => {
                let name = &source[node.start_byte() + 1..node.end_byte() - 1];
                Ok(Token(name.to_string()))
            }
            "token_pattern" => {
                let pattern = &source[node.start_byte() + 1..node.end_byte() - 1];
                pattern.parse::<Regex>().map_err(Box::new)?;
                Ok(TokenPattern(pattern.to_string()))
            }
            "no_children" => {
                Ok(NoChildren(Box::new(Stylesheet::parse_selector_segment(
                    source, 
                    node.named_child(0).ok_or(Box::new(Error(format!("Missing child when parsing no_children"))))?,
                )?)))
            }
            "direct_child" => {
                Ok(DirectChild(Box::new(Stylesheet::parse_selector_segment(
                    source, 
                    node.named_child(0).ok_or(Box::new(Error(format!("Missing child when parsing direct_child"))))?,
                )?)))
            }
            "branch_check" => {
                let selector_node = node.named_child(0).ok_or(Box::new(Error(format!("Missing child when parsing branch_check"))))?;
                let selector = Stylesheet::parse_selector(source, selector_node)?;
                Ok(BranchCheck(selector))
            }
            kind => return Err(Box::new(Error(format!("Invalid state {} while parsing selector", kind)))),
        }
    }

    fn parse_selector(source: &str, node: Node) -> Result<Vec<SelectorSegment>, crate::BoxedError> {
        let mut selector = vec![];
        for child in node.children().filter(Node::is_named) {
            selector.push(Stylesheet::parse_selector_segment(source, child)?);
        }
        Ok(selector)
    }

    fn handle_selector(&mut self, selector: Vec<SelectorSegment>, mut stylebuilder: StyleBuilder) -> Result<(), crate::BoxedError> {
        let mut scope: &mut Stylesheet = self;
        let selector_score = selector
            .iter()
            .map(SelectorSegment::score)
            .fold((0, 0), |(a, b), (c, d)| (a + c, b + d));
        for segment in selector {
            scope = scope.scopes
                .entry(segment)
                .or_default();
        }
        stylebuilder.set_priorities(selector_score);
        scope.style = stylebuilder;
        Ok(())
    }

    fn parse_styles(source: &str, stylebuilder: &mut StyleBuilder, node: Node, score: (usize, usize)) -> Result<(), crate::BoxedError> {
        for child in node.children().filter(Node::is_named) {
            match child.kind() {
                "style" => Stylesheet::parse_style(source, stylebuilder, child, score)?,
                kind => return Err(Box::new(Error(format!("Invalid state {} while parsing styles", kind)))),
            }
        }
        Ok(())
    }

    fn parse_rule(&mut self, source: &str, node: Node) -> Result<(), crate::BoxedError> {
        let mut selectors = vec![];
        let mut stylebuilder = StyleBuilder::default();
        for child in node.children().filter(Node::is_named) {
            match child.kind() {
                "selector" => selectors.push(Stylesheet::parse_selector(source, child)?),
                "important_styles" => Stylesheet::parse_styles(source, &mut stylebuilder, child, (usize::max_value(), usize::max_value()))?,
                "styles" => Stylesheet::parse_styles(source, &mut stylebuilder, child, (0, 0))?,
                kind => return Err(Box::new(Error(format!("Invalid state {} while parsing rule", kind)))),
            }
        }
        for selector in selectors.into_iter() {
            self.handle_selector(selector, stylebuilder.clone())?;
        }
        Ok(())
    }

    fn parse_node(&mut self, source: &str, node: Node) -> Result<(), crate::BoxedError> {
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

    pub fn parse(source: &str, tree: Tree) -> Result<Self, crate::BoxedError> {
        let root = tree.root_node();
        let mut stylesheet = Stylesheet {
            style: StyleBuilder::default(),
            scopes: BTreeMap::default(),
        };
        stylesheet.parse_node(source, root)?;
        Ok(stylesheet)
    }
}

