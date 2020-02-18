use ansi_term::{ANSIGenericString, Style as ANSIStyle, Colour};
use syncat_stylesheet::{Style, Value, Stylesheet, FromValueError};
use std::convert::{TryFrom, TryInto};
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
    style: ANSIStyle,
}

impl TryFrom<Style<'_>> for MetaItem<String> {
    type Error = FromValueError;
    fn try_from(style: Style) -> Result<Self, Self::Error> {
        Ok(Self {
            content: style.get("content").cloned().map_or(Ok(String::default()), String::try_from)?,
            style: style.try_into()?,
        })
    }
}

impl TryFrom<Style<'_>> for MetaItem<()> {
    type Error = FromValueError;
    fn try_from(style: Style) -> Result<Self, Self::Error> {
        Ok(Self {
            content: (),
            style: style.try_into()?,
        })
    }
}

impl TryFrom<Style<'_>> for MetaItem<Margin> {
    type Error = FromValueError;
    fn try_from(style: Style) -> Result<Self, Self::Error> {
        Ok(Self {
            content: match style.get("content") {
                Some(Value::String(string)) if string == "unicode" => Margin::UNICODE,
                Some(Value::String(string)) if string == "ascii" => Margin::ASCII,
                Some(..) => return Err(FromValueError),
                None => Margin::ASCII,
            },
            style: style.try_into()?,
        })
    }
}

impl<T> MetaItem<T> {
    pub fn default(content: T) -> Self {
        MetaItem { content, style: ANSIStyle::default() }
    }

    fn set_style(mut self, style: ANSIStyle) -> Self {
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
            vcs_addition: MetaItem::default("+".to_string()).set_style(ANSIStyle::new().fg(Colour::Green)),
            vcs_modification: MetaItem::default("~".to_string()).set_style(ANSIStyle::new().fg(Colour::Yellow)),
            vcs_deletion_above: MetaItem::default("-".to_string()).set_style(ANSIStyle::new().fg(Colour::Red)),
            vcs_deletion_below: MetaItem::default("_".to_string()).set_style(ANSIStyle::new().fg(Colour::Red)),
            margin: MetaItem::default(Margin::ASCII),
            title: MetaItem::default(()).set_style(ANSIStyle::new().bold()),
        }
    }
}

impl MetaStylesheet {
    pub fn from_file() -> Result<MetaStylesheet, Box<dyn std::error::Error>> {
        let mut meta_stylesheet = MetaStylesheet::default();
        let style_file = active_color().join(".syncat");
        if style_file.exists() {
            let stylesheet = Stylesheet::from_file(style_file)?;
            if let Some(style) = stylesheet.style(&"line_ending".into()) {
                meta_stylesheet.line_ending = style.try_into()?;
            }
            if let Some(style) = stylesheet.style(&"line_number".into()) {
                meta_stylesheet.line_number = style.try_into()?;
            }
            if let Some(style) = stylesheet.style(&"vcs_addition".into()) {
                meta_stylesheet.vcs_addition = style.try_into()?;
            }
            if let Some(style) = stylesheet.style(&"vcs_modification".into()) {
                meta_stylesheet.vcs_modification = style.try_into()?;
            }
            if let Some(style) = stylesheet.style(&"vcs_deletion_above".into()) {
                meta_stylesheet.vcs_deletion_above = style.try_into()?;
            }
            if let Some(style) = stylesheet.style(&"vcs_deletion_below".into()) {
                meta_stylesheet.vcs_deletion_below = style.try_into()?;
            }
            if let Some(style) = stylesheet.style(&"margin".into()) {
                meta_stylesheet.margin = style.try_into()?;
            }
            if let Some(style) = stylesheet.style(&"title".into()) {
                meta_stylesheet.title = style.try_into()?;
            }
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

    pub fn line_number(&self) -> &ANSIStyle {
        &self.line_number.style
    }

    pub fn title(&self) -> &ANSIStyle {
        &self.title.style
    }
}
