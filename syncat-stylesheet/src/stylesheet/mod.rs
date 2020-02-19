use std::collections::BTreeMap;
use std::path::Path;
use std::str::FromStr;
use crate::ast::{Stylesheet as Ast, Value, Rule};
use crate::Style;

mod matches;
mod query;
pub use query::Query;
pub(crate) use query::QuerySlice;
pub(crate) use matches::Matches;

#[derive(Clone, Debug, Default)]
pub struct Stylesheet {
    variables: BTreeMap<String, Value>,
    rules: Vec<Rule>,
}

impl FromStr for Stylesheet {
    type Err = crate::Error;

    /// Parses a Stylesheet from a string. Since no initial file path is provided,
    /// imports cannot be resolved so they are just ignored completely.
    fn from_str(source: &str) -> Result<Self, Self::Err> {
        let ast = Ast::from_str(source)?;
        Ok(Self {
            variables: ast.variables.into_iter().collect(),
            rules: ast.rules,
        })
    }
}

impl Stylesheet {
    pub fn from_file(path: impl AsRef<Path>) -> crate::Result<Self> {
        let ast = Ast::from_file(path.as_ref())?;
        let stylesheet = Self {
            variables: ast.variables.into_iter().collect(),
            rules: ast.rules,
        };
        ast.imports
            .into_iter()
            .map(|import| Self::from_file(path.as_ref().parent().unwrap().join(import)))
            .try_fold(stylesheet, |stylesheet, imported| {
                Ok(stylesheet.merge(imported?))
            })
    }

    fn merge(mut self, mut other: Self) -> Self {
        other.variables.append(&mut self.variables);
        self.variables = other.variables;
        self.rules.append(&mut other.rules);
        self
    }

    pub fn style(&self, query: &Query) -> Option<Style> {
        self.rules
            .iter()
            .filter_map(|rule| rule.styles(query, &self.variables))
            .fold(None, |a, b| Some(a.unwrap_or_else(|| Style::default()).merge(b)))
    }
}
