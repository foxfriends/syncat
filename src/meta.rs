use std::fs;
use tree_sitter::Parser;

use crate::language::Lang;
use crate::dirs::config;
use crate::stylesheet::{Stylesheet, Context};
use crate::style::{setting, StyleBuilder, Colour};

pub struct MetaStylesheet {
    pub line_ending: StyleBuilder,
    pub line_number: StyleBuilder,
    pub vcs_addition: StyleBuilder,
    pub vcs_modification: StyleBuilder,
    pub vcs_deletion_above: StyleBuilder,
    pub vcs_deletion_below: StyleBuilder,
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
            vcs_addition: StyleBuilder {
                foreground: setting(false, Colour::Green),
                content: setting(false, "+".to_string()),
                ..StyleBuilder::default()
            },
            vcs_modification: StyleBuilder {
                foreground: setting(false, Colour::Yellow),
                content: setting(false, "~".to_string()),
                ..StyleBuilder::default()
            },
            vcs_deletion_above: StyleBuilder {
                foreground: setting(false, Colour::Red),
                content: setting(false, "-".to_string()),
                ..StyleBuilder::default()
            },
            vcs_deletion_below: StyleBuilder {
                foreground: setting(false, Colour::Red),
                content: setting(false, "_".to_string()),
                ..StyleBuilder::default()
            },
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
    meta_stylesheet.vcs_addition = meta_stylesheet.vcs_addition
        .merge_with(&stylesheet.resolve(&Context::default(), &[("vcs_addition", 0)], None));
    meta_stylesheet.vcs_modification = meta_stylesheet.vcs_modification
        .merge_with(&stylesheet.resolve(&Context::default(), &[("vcs_modification", 0)], None));
    meta_stylesheet.vcs_deletion_above = meta_stylesheet.vcs_deletion_above
        .merge_with(&stylesheet.resolve(&Context::default(), &[("vcs_deletion_above", 0)], None));
    meta_stylesheet.vcs_deletion_below = meta_stylesheet.vcs_deletion_below
        .merge_with(&stylesheet.resolve(&Context::default(), &[("vcs_deletion_below", 0)], None));
    meta_stylesheet.margin = meta_stylesheet.margin
        .merge_with(&stylesheet.resolve(&Context::default(), &[("margin", 0)], None));
    meta_stylesheet
}
