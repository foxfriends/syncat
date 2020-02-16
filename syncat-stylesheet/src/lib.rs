use std::path::Path;
use tree_sitter::Language;

mod parser;
mod error;
mod ast;

pub use error::{Error, Result};

extern "C" {
    fn tree_sitter_syncat_stylesheet() -> Language;
}

#[derive(Clone, Debug)]
pub struct Stylesheet {
    variables: Vec<ast::Declaration>,
    rules: Vec<ast::Rule>,
}

impl Stylesheet {
    pub fn from_file(path: impl AsRef<Path>) -> Result<Self> {
        let stylesheet = ast::Stylesheet::from_file(path)?;
        stylesheet.imports
            .into_iter()
            .map(|path| Stylesheet::from_file(path))
            .try_fold(Stylesheet { variables: stylesheet.variables, rules: stylesheet.rules }, |stylesheet, imported| {
                Ok(stylesheet.merge(imported?))
            })
    }

    fn merge(mut self, mut other: Stylesheet) -> Self {
        self.variables.append(&mut other.variables);
        self.rules.append(&mut other.rules);
        self
    }
}
