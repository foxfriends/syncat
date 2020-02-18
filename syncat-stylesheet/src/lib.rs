use tree_sitter::Language;

mod parser;
mod error;
mod ast;
mod style;
mod stylesheet;

pub use error::{Error, Result};
pub use stylesheet::{Query, Stylesheet};
pub use style::{Style, Value};
pub use ast::Color;
use stylesheet::{QuerySlice, Matches};

extern "C" {
    fn tree_sitter_syncat_stylesheet() -> Language;
}
