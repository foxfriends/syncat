use super::{helper::*, Color, Variable};
use tree_sitter::TreeCursor;
use enquote::unquote;

#[derive(Clone, Eq, PartialEq, Hash, Debug)]
pub(crate) enum Value {
    Color(Color),
    Number(u32),
    String(String),
    Boolean(bool),
    Variable(Variable),
    Capture(Variable, u32),
}

impl FromSource for Value {
    fn from_source(tree: &mut TreeCursor, source: &[u8]) -> crate::Result<Self> {
        children!(tree, "value");
        extras!(tree);
        let value = match tree.node().kind() {
            "color" => Value::Color(Color::from_source(tree, source)?),
            "number" => Value::Number(text!(tree, source, "number")?.parse()?),
            "string" => Value::String(unquote(text!(tree, source, "string")?)?),
            "boolean" => Value::Boolean(text!(tree, source, "boolean")?.parse()?),
            "variable" => Value::Variable(Variable::from_source(tree, source)?),
            "capture" => {
                let variable = Variable::from_source(tree, source)?;
                tree.goto_next_sibling();
                Value::Capture(variable, text!(tree, source, "number")?.parse()?)
            }
            _ => return Err(crate::Error::invalid()),
        };

        tree.goto_parent();
        Ok(value)
    }
}
