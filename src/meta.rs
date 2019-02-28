use std::fs;
use tree_sitter::Parser;

use crate::language::Lang;
use crate::dirs::config;
use crate::stylesheet::{Stylesheet, Context};
use crate::style::{setting, StyleBuilder};

pub struct MetaStylesheet {
    pub line_ending: StyleBuilder,
    pub line_number: StyleBuilder,
    pub margin: StyleBuilder,
}

impl Default for MetaStylesheet {
    fn default() -> MetaStylesheet {
        MetaStylesheet {
            line_ending: StyleBuilder {
                content: setting(false, "$".to_string()),
                ..StyleBuilder::default()
            },
            line_number: StyleBuilder::default(),
            margin: StyleBuilder {
                content: setting(false, " | ".to_string()),
                ..StyleBuilder::default()
            },
        }
    }
}

pub fn load_meta_stylesheet() -> MetaStylesheet {
    let stylesheet = {
        let style_file = config().join("style/active/.syncat");
        if !style_file.exists() {
            Stylesheet::default()
        } else {
            let style_def = fs::read_to_string(&style_file).map_err(Box::new).expect(&format!("Cannot read meta stylesheet {:?}", style_file));
            let mut parser = Parser::new();
            parser.set_language(Lang::Syncat.parser()).unwrap();
            let tree = parser.parse(&style_def, None).expect(&format!("Could not parse stylesheet at file {:?}", &style_file));
            Stylesheet::parse(&style_def, tree).expect(&format!("Meta stylesheet {:?} is invalid", style_file))
        }
    };

    let mut meta_stylesheet = MetaStylesheet::default();
    meta_stylesheet.line_ending = meta_stylesheet.line_ending
        .merge_with(&stylesheet.resolve(&Context::default(), &[("line_ending", 0)], None));

    meta_stylesheet.line_number = meta_stylesheet.line_number
        .merge_with(&stylesheet.resolve(&Context::default(), &[("line_number", 0)], None));

    meta_stylesheet.margin = meta_stylesheet.margin
        .merge_with(&stylesheet.resolve(&Context::default(), &[("margin", 0)], None));
    meta_stylesheet
}
