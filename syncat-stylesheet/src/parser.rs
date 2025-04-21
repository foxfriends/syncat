use std::cell::RefCell;
use tree_sitter::{Parser, Tree};

thread_local! {
    static PARSER: RefCell<Parser> = RefCell::new({
        let mut parser = Parser::new();
        parser.set_language(&unsafe { crate::tree_sitter_syncat_stylesheet() }).unwrap();
        parser
    });
}

pub(crate) fn parse(source: impl AsRef<[u8]>) -> Option<Tree> {
    PARSER.with(|parser| parser.borrow_mut().parse(source, None))
}
