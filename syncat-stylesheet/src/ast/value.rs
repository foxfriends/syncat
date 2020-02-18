use std::collections::BTreeMap;
use enquote::unquote;
use tree_sitter::TreeCursor;
use super::{helper::*, Color, Variable};
use crate::Matches;

#[derive(Clone, Eq, PartialEq, Hash, Debug)]
pub(crate) enum Value {
    Color(Color),
    Number(u32),
    String(String),
    Boolean(bool),
    Variable(Variable),
    Capture(u32),
}

impl Value {
    pub(crate) fn resolve(&self, variables: &BTreeMap<String, Value>, matches: &Matches) -> Option<crate::Value> {
        match self {
            Value::Color(color) => Some(crate::Value::Color(*color)),
            Value::Number(number) => Some(crate::Value::Number(*number)),
            Value::String(string) => Some(crate::Value::String(string.to_string())),
            Value::Boolean(boolean) => Some(crate::Value::Boolean(*boolean)),
            Value::Variable(variable) => {
                matches.get(variable.name())
                    .map(str::to_string)
                    .map(crate::Value::String)
                    .or_else(|| variables.get(variable.name())?.resolve(variables, matches))
            }
            Value::Capture(index) => Some(crate::Value::String(matches.capture(*index as usize)?.to_string())),
        }
    }
}

impl FromSource for Value {
    fn from_source(tree: &mut TreeCursor, source: &[u8]) -> crate::Result<Self> {
        children!(tree, "value");
        extras!(tree, "value");
        let value = match tree.node().kind() {
            "color" => Value::Color(Color::from_source(tree, source)?),
            "number" => Value::Number(text!(tree, source, "number")?.parse()?),
            "string" => Value::String(unquote(text!(tree, source, "string")?)?),
            "name" => Value::String(text!(tree, source, "name")?.to_string()),
            "boolean" => Value::Boolean(text!(tree, source, "boolean")?.parse()?),
            "variable" => Value::Variable(Variable::from_source(tree, source)?),
            "capture" => Value::Capture(text!(tree, source, "number")?[1..].parse()?),
            name => return Err(crate::Error::invalid("value", name)),
        };

        tree.goto_parent();
        Ok(value)
    }
}
