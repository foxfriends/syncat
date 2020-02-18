use std::fmt::{self, Display, Debug, Formatter};
use tree_sitter::Tree;
use syncat_stylesheet::Stylesheet;

// mod source;
mod sexp;

pub(super) struct Colorizer<'a> {
    pub(super) source: &'a str,
    pub(super) tree: Tree,
    pub(super) stylesheet: Stylesheet,
}

impl Display for Colorizer<'_> {
    fn fmt(&self, f: &mut Formatter) -> fmt::Result {
        // print_source(self.source, self.tree, self.stylesheet, f)
        Ok(())
    }
}

impl Debug for Colorizer<'_> {
    fn fmt(&self, f: &mut Formatter) -> fmt::Result {
        sexp::write(f, self.source, &self.tree, &self.stylesheet)
    }
}
