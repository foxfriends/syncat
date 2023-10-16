use crate::language::LangMap;
use std::fmt::{self, Debug, Display, Formatter};
use syncat_stylesheet::Stylesheet;
use tree_sitter::Tree;

mod sexp;
mod source;

pub(super) struct Colorizer<'a> {
    pub(super) source: &'a str,
    pub(super) tree: Tree,
    pub(super) stylesheet: Stylesheet,
    pub(super) lang_map: &'a LangMap,
}

impl Display for Colorizer<'_> {
    fn fmt(&self, f: &mut Formatter) -> fmt::Result {
        source::write(f, self.source, &self.tree, &self.stylesheet, self.lang_map)
    }
}

impl Debug for Colorizer<'_> {
    fn fmt(&self, f: &mut Formatter) -> fmt::Result {
        sexp::write(f, self.source, &self.tree, &self.stylesheet, self.lang_map)
    }
}
