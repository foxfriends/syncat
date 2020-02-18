use std::convert::TryInto;
use std::fmt::{self, Formatter};
use ansi_term::Style;
use tree_sitter::{Tree, TreeCursor, Parser};
use syncat_stylesheet::{Stylesheet, Query};
use crate::Lang;

fn write_node<'s>(f: &mut Formatter, query: &mut Query<'s>, index: &mut Vec<usize>, tree: &mut TreeCursor, source: &'s str, stylesheet: &Stylesheet) -> fmt::Result {
    let style = stylesheet.style(query).unwrap_or_default();
    let language = style.try_get::<Lang>("language").map_err(|_| fmt::Error)?;
    let style: Style = style.try_into().map_err(|_| fmt::Error)?;

    if let Some(language) = language {
        // this node should be printed in another language: (kind [subtree])
        let mut parser = Parser::new();
        parser.set_language(language.parser()).unwrap();
        let token = tree.node().utf8_text(source.as_ref()).unwrap();
        let subtree = parser.parse(&token, None).unwrap();
        write!(f, "({} [", style.paint(tree.node().kind()))?;
        write(f, &token, &subtree, &language.style().map_err(|_| fmt::Error)?)?;
        write!(f, "])")?;
    } else if tree.node().child_count() == 0 {
        // leaf node: (kind "token")
        if tree.node().is_named() {
            write!(f, "({} \"{}\")",
                style.paint(tree.node().kind()),
                style.paint(tree.node().utf8_text(source.as_ref()).unwrap()),
            )?;
        } else {
            write!(f, "(\"{}\")", style.paint(tree.node().utf8_text(source.as_ref()).unwrap()))?;
        }
    } else {
        // inner node: (kind ...children)
        write!(f, "({}", style.paint(tree.node().kind()))?;
        tree.goto_first_child();
        let mut i = 0;
        while {
            write!(f, " ")?;
            query[&index[..]].add_child((&tree.node(), source));
            index.push(i);
            write_node(f, query, index, tree, source, stylesheet)?;
            index.pop();
            tree.goto_next_sibling()
        } { i += 1; }
        tree.goto_parent();
        write!(f, ")")?;
    }

    Ok(())
}

pub(super) fn write(f: &mut Formatter, source: &str, tree: &Tree, stylesheet: &Stylesheet) -> fmt::Result {
    let mut tree = tree.walk();
    let mut query = Query::from((&tree.node(), source));
    write_node(f, &mut query, &mut vec![], &mut tree, source, stylesheet)
}
