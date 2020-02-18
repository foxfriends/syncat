use tree_sitter::TreeCursor;

macro_rules! extras {
    ($tree:ident, $context:literal) => {
        while $tree.node().is_extra() || !$tree.node().is_named() {
            if !$tree.goto_next_sibling() {
                return Err($crate::Error::invalid(concat!("extras(", $context, ")"), "no more children"));
            }
        }
    }
}

#[macro_export]
macro_rules! children {
    ($tree:ident, $name:literal) => {{
        extras!($tree, $name);
        match $tree.node().kind() {
            $name => $tree.goto_first_child(),
            name => return Err($crate::Error::invalid(concat!("children(", $name, ")"), name)),
        }
    }}
}

#[macro_export]
macro_rules! text {
    ($tree:ident, $source:expr, $name:literal) => {{
        extras!($tree, $name);
        match $tree.node().kind() {
            $name => $tree.node().utf8_text($source),
            name => return Err($crate::Error::invalid(concat!("text(", $name, ")"), name)),
        }
    }}
}

pub(super) trait FromSource: Sized {
    fn from_source(tree: &mut TreeCursor, source: &[u8]) -> Result<Self, crate::Error>;
}
