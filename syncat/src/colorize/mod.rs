use std::fmt::{self, Display, Debug, Formatter};
use tree_sitter::Tree;
use syncat_stylesheet::Stylesheet;

// mod source;
// mod sexp;

pub(super) struct Colorizer<'a> {
    source: &'a str,
    tree: Tree,
    stylesheet: Stylesheet,
}

impl Display for Colorizer {
    fn fmt(&self, f: &mut Formatter) -> fmt::Result {
        // print_source(self.source, self.tree, self.stylesheet, f)
        Ok(())
    }
}

impl Debug for Colorizer {
    fn fmt(&self, f: &mut Formatter) -> fmt::Result {
        // print_sexp(self.source, self.tree, self.stylesheet, f)
        Ok(())
    }
}
