use tree_sitter::Language;

mod ast;
mod error;
mod parser;
pub mod resolver;
mod style;
mod stylesheet;

pub use ast::Color;
pub use error::{Error, ErrorKind, Result};
pub use style::{FromValueError, Style, Value};
use stylesheet::{Matches, QuerySlice};
pub use stylesheet::{Query, Stylesheet};

unsafe extern "C" {
    fn tree_sitter_syncat_stylesheet() -> Language;
}
