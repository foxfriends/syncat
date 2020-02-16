use tree_sitter::Language;

mod parser;
mod error;
mod ast;

pub use error::{Error, Result};
pub use ast::Stylesheet;

extern "C" {
    fn tree_sitter_syncat_stylesheet() -> Language;
}
