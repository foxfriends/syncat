use tree_sitter::{Tree, Node, Parser};
use syncat_stylesheet::{Stylesheet, Context};
use crate::language::Lang;

mod source;
mod tree;

pub use source::print_source;
pub use tree::print_tree;
