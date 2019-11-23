use std::fs::File;
use ansi_term::ANSIGenericString;

use crate::dirs::active_color;
use syncat_stylesheet::{Stylesheet, Context};
use syncat_stylesheet::{Setting, StyleBuilder, Colour, Style};

macro_rules! component {
    ($name:ident) => {
        #[allow(dead_code)]
        pub fn $name(&self) -> ANSIGenericString<str> {
            self.style.paint(self.$name)
        }
    }
}

pub struct Margin {
    style: Style,
    left: &'static str,
    right: &'static str,
    bottom: &'static str,
    top: &'static str,
    left_end: &'static str,
    right_end: &'static str,
    top_end: &'static str,
    bottom_end: &'static str,
    bottom_left: &'static str,
    top_left: &'static str,
    bottom_right: &'static str,
    top_right: &'static str,
    cross: &'static str,
}

impl Margin {
    fn ascii(style: Style) -> Margin {
        Margin {
            style,
            left: " | ",
            right: " | ",
            bottom: "-",
            top: "-",
            right_end: "-|",
            left_end: "|-",
            top_end: "---",
            bottom_end: "---",
            bottom_left: "+-",
            top_left: "+-",
            bottom_right: "-+",
            top_right: "-+",
            cross: "-+-",
        }
    }

    fn unicode(style: Style) -> Margin {
        Margin {
            style,
            left: " │ ",
            right: " │ ",
            bottom: "─",
            top: "─",
            right_end: "─┤",
            left_end: "├─",
            top_end: "─┬─",
            bottom_end: "─┴─",
            bottom_left: "└─",
            top_left: "┌─",
            bottom_right: "─┘",
            top_right: "─┐",
            cross: "─┼─",
        }
    }

    component!(left);
    component!(right);
    component!(top);
    component!(bottom);
    component!(left_end);
    component!(right_end);
    component!(top_end);
    component!(bottom_end);
    component!(top_left);
    component!(bottom_left);
    component!(top_right);
    component!(bottom_right);
    component!(cross);
}

#[derive(Debug)]
pub struct MetaStylesheet {
    pub line_ending: StyleBuilder,
    pub line_number: StyleBuilder,
    pub vcs_addition: StyleBuilder,
    pub vcs_modification: StyleBuilder,
    pub vcs_deletion_above: StyleBuilder,
    pub vcs_deletion_below: StyleBuilder,
    pub margin: StyleBuilder,
    pub title: StyleBuilder,
}

impl Default for MetaStylesheet {
    fn default() -> MetaStylesheet {
        let pri = (0, 0, 0);
        MetaStylesheet {
            line_ending: StyleBuilder {
                content: Setting::Set(pri, "$".to_string()),
                ..StyleBuilder::default()
            },
            line_number: StyleBuilder::default(),
            vcs_addition: StyleBuilder {
                foreground: Setting::Set(pri, Colour::Green),
                content: Setting::Set(pri, "+".to_string()),
                ..StyleBuilder::default()
            },
            vcs_modification: StyleBuilder {
                foreground: Setting::Set(pri, Colour::Yellow),
                content: Setting::Set(pri, "~".to_string()),
                ..StyleBuilder::default()
            },
            vcs_deletion_above: StyleBuilder {
                foreground: Setting::Set(pri, Colour::Red),
                content: Setting::Set(pri, "-".to_string()),
                ..StyleBuilder::default()
            },
            vcs_deletion_below: StyleBuilder {
                foreground: Setting::Set(pri, Colour::Red),
                content: Setting::Set(pri, "_".to_string()),
                ..StyleBuilder::default()
            },
            margin: StyleBuilder {
                content: Setting::Set(pri, "ascii".to_string()),
                ..StyleBuilder::default()
            },
            title: StyleBuilder {
                is_bold: Setting::Set(pri, true),
                ..StyleBuilder::default()
            },
        }
    }
}

impl MetaStylesheet {
    pub fn margin(&self) -> Margin {
        let margin_name = self.margin.content().unwrap_or("ascii");
        match margin_name.to_lowercase().as_str() {
            "ascii" => Margin::ascii(self.margin.build()),
            "unicode" => Margin::unicode(self.margin.build()),
            _ => Margin::ascii(self.margin.build()),
        }
    }

    pub fn added(&self) -> ANSIGenericString<str> {
        self.vcs_addition
            .build()
            .paint(self.vcs_addition.content().unwrap_or("+"))
    }

    pub fn modified(&self) -> ANSIGenericString<str> {
        self.vcs_modification
            .build()
            .paint(self.vcs_modification.content().unwrap_or("~"))
    }

    pub fn removed_above(&self) -> ANSIGenericString<str> {
        self.vcs_deletion_above
            .build()
            .paint(self.vcs_deletion_above.content().unwrap_or("-"))
    }

    pub fn removed_below(&self) -> ANSIGenericString<str> {
        self.vcs_deletion_below
            .build()
            .paint(self.vcs_deletion_below.content().unwrap_or("_"))
    }

    pub fn line_ending(&self) -> ANSIGenericString<str> {
        self.line_ending
            .build()
            .paint(self.line_ending.content().unwrap_or("$"))
    }

    pub fn title(&self) -> Style {
        self.title.build()
    }
}

pub fn load_meta_stylesheet() -> MetaStylesheet {
    let stylesheet = {
        let style_file = active_color().join(".syncat");
        if !style_file.exists() {
            Stylesheet::default()
        } else {
            Stylesheet::from_reader(&mut File::open(&style_file).unwrap()).expect(&format!("Meta stylesheet {:?} is invalid", style_file))
        }
    };

    let mut meta_stylesheet = MetaStylesheet::default();
    meta_stylesheet.line_ending = meta_stylesheet.line_ending
        .merge_with(&stylesheet.resolve(&Context::default(), &[(0, "line_ending")], None));
    meta_stylesheet.line_number = meta_stylesheet.line_number
        .merge_with(&stylesheet.resolve(&Context::default(), &[(0, "line_number")], None));
    meta_stylesheet.vcs_addition = meta_stylesheet.vcs_addition
        .merge_with(&stylesheet.resolve(&Context::default(), &[(0, "vcs_addition")], None));
    meta_stylesheet.vcs_modification = meta_stylesheet.vcs_modification
        .merge_with(&stylesheet.resolve(&Context::default(), &[(0, "vcs_modification")], None));
    meta_stylesheet.vcs_deletion_above = meta_stylesheet.vcs_deletion_above
        .merge_with(&stylesheet.resolve(&Context::default(), &[(0, "vcs_deletion_above")], None));
    meta_stylesheet.vcs_deletion_below = meta_stylesheet.vcs_deletion_below
        .merge_with(&stylesheet.resolve(&Context::default(), &[(0, "vcs_deletion_below")], None));
    meta_stylesheet.margin = meta_stylesheet.margin
        .merge_with(&stylesheet.resolve(&Context::default(), &[(0, "margin")], None));
    meta_stylesheet.title = meta_stylesheet.title
        .merge_with(&stylesheet.resolve(&Context::default(), &[(0, "title")], None));
    meta_stylesheet
}
