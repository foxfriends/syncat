use ansi_term::{ANSIGenericString, Style, Colour};
use syncat_stylesheet::Stylesheet;
use crate::dirs::active_color;

pub struct Margin {
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
    const ASCII: Margin = Margin {
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
    };

    const UNICODE: Margin = Margin {
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
    };
}

pub struct MetaItem<T> {
    content: T,
    style: Style,
}

impl<T> MetaItem<T> {
    pub fn default(content: T) -> Self {
        MetaItem { content, style: Style::default() }
    }

    fn set_style(mut self, style: Style) -> Self {
        self.style = style;
        self
    }
}

impl MetaItem<String> {
    fn paint(&self) -> ANSIGenericString<str> {
        self.style.paint(&self.content)
    }
}

macro_rules! component {
    ($name:ident) => {
        #[allow(dead_code)]
        pub fn $name(&self) -> ANSIGenericString<str> {
            self.style.paint(self.content.$name)
        }
    }
}

impl MetaItem<Margin> {
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

pub struct MetaStylesheet {
    line_ending: MetaItem<String>,
    line_number: MetaItem<()>,
    vcs_addition: MetaItem<String>,
    vcs_modification: MetaItem<String>,
    vcs_deletion_above: MetaItem<String>,
    vcs_deletion_below: MetaItem<String>,
    margin: MetaItem<Margin>,
    title: MetaItem<()>,
}

impl Default for MetaStylesheet {
    fn default() -> MetaStylesheet {
        MetaStylesheet {
            line_ending: MetaItem::default("$".to_string()),
            line_number: MetaItem::default(()),
            vcs_addition: MetaItem::default("+".to_string()).set_style(Style::new().fg(Colour::Green)),
            vcs_modification: MetaItem::default("~".to_string()).set_style(Style::new().fg(Colour::Yellow)),
            vcs_deletion_above: MetaItem::default("-".to_string()).set_style(Style::new().fg(Colour::Red)),
            vcs_deletion_below: MetaItem::default("_".to_string()).set_style(Style::new().fg(Colour::Red)),
            margin: MetaItem::default(Margin::ASCII),
            title: MetaItem::default(()).set_style(Style::new().bold()),
        }
    }
}

impl MetaStylesheet {
    pub fn from_file() -> syncat_stylesheet::Result<MetaStylesheet> {
        let mut meta_stylesheet = MetaStylesheet::default();
        let style_file = active_color().join(".syncat");
        if style_file.exists() {
            let stylesheet = Stylesheet::from_file(style_file)?;
            // meta_stylesheet.line_ending = meta_stylesheet.line_ending
            //     .merge_with(&stylesheet.resolve(&Context::default(), &[(0, "line_ending")], None));
            // meta_stylesheet.line_number = meta_stylesheet.line_number
            //     .merge_with(&stylesheet.resolve(&Context::default(), &[(0, "line_number")], None));
            // meta_stylesheet.vcs_addition = meta_stylesheet.vcs_addition
            //     .merge_with(&stylesheet.resolve(&Context::default(), &[(0, "vcs_addition")], None));
            // meta_stylesheet.vcs_modification = meta_stylesheet.vcs_modification
            //     .merge_with(&stylesheet.resolve(&Context::default(), &[(0, "vcs_modification")], None));
            // meta_stylesheet.vcs_deletion_above = meta_stylesheet.vcs_deletion_above
            //     .merge_with(&stylesheet.resolve(&Context::default(), &[(0, "vcs_deletion_above")], None));
            // meta_stylesheet.vcs_deletion_below = meta_stylesheet.vcs_deletion_below
            //     .merge_with(&stylesheet.resolve(&Context::default(), &[(0, "vcs_deletion_below")], None));
            // meta_stylesheet.margin = meta_stylesheet.margin
            //     .merge_with(&stylesheet.resolve(&Context::default(), &[(0, "margin")], None));
            // meta_stylesheet.title = meta_stylesheet.title
            //     .merge_with(&stylesheet.resolve(&Context::default(), &[(0, "title")], None));
        }
        Ok(meta_stylesheet)
    }

    pub fn margin(&self) -> &MetaItem<Margin> {
        &self.margin
    }

    pub fn added(&self) -> ANSIGenericString<str> {
        self.vcs_addition.paint()
    }

    pub fn modified(&self) -> ANSIGenericString<str> {
        self.vcs_modification.paint()
    }

    pub fn removed_above(&self) -> ANSIGenericString<str> {
        self.vcs_deletion_above.paint()
    }

    pub fn removed_below(&self) -> ANSIGenericString<str> {
        self.vcs_deletion_below.paint()
    }

    pub fn line_ending(&self) -> ANSIGenericString<str> {
        self.line_ending.paint()
    }

    pub fn line_number(&self) -> &Style {
        &self.line_number.style
    }

    pub fn title(&self) -> &Style {
        &self.title.style
    }
}
