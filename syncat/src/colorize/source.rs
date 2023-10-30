use crate::language::LangMap;
use ansi_term::Style;
use std::convert::TryInto;
use std::fmt::{self, Formatter};
use syncat_stylesheet::{Query, Stylesheet};
use tree_sitter::{Parser, Tree, TreeCursor};

fn write_token(f: &mut Formatter, token: &str, style: Style) -> fmt::Result {
    let mut line_count = token.lines().count();
    if !token.ends_with('\n') {
        line_count = line_count.saturating_sub(1);
    }
    for (index, line) in token.lines().enumerate() {
        write!(f, "{}", style.paint(line))?;
        if index != line_count {
            writeln!(f)?;
        }
    }
    Ok(())
}

fn write_node<'s>(
    f: &mut Formatter,
    query: &mut Query<'s>,
    index: &mut Vec<usize>,
    tree: &mut TreeCursor,
    source: &'s str,
    stylesheet: &Stylesheet,
    lang_map: &LangMap,
) -> fmt::Result {
    let style = stylesheet.style(query).unwrap_or_default();
    let language = style
        .try_get::<String>("language")
        .map_err(|_| fmt::Error)?
        .as_ref()
        .and_then(|language| lang_map.get(language));
    let style: Style = style.try_into().map_err(|_| fmt::Error)?;
    let start_byte = tree.node().start_byte();
    let end_byte = tree.node().end_byte();

    if let Some(language) = language {
        // this node should be printed in another language
        if let Some(langparser) = language.parser().map_err(|_| fmt::Error)? {
            let mut parser = Parser::new();
            parser.set_language(langparser).map_err(|_| fmt::Error)?;
            let token = tree.node().utf8_text(source.as_ref()).unwrap();
            let subtree = parser.parse(token, None).unwrap();
            write(
                f,
                token,
                &subtree,
                &language.style().map_err(|_| fmt::Error)?,
                lang_map,
            )?;
            return Ok(());
        }
    }

    if tree.node().child_count() == 0 {
        // leaf node
        let token = tree.node().utf8_text(source.as_ref()).unwrap();
        write_token(f, token, style)?;
    } else {
        // inner node
        tree.goto_first_child();
        let mut previous_end_byte = start_byte;
        let mut i = 0;
        while {
            // fill gaps between nodes
            let child_start_byte = tree.node().start_byte();
            if child_start_byte != previous_end_byte {
                let token = &source[previous_end_byte..child_start_byte];
                write_token(f, token, style)?;
            }
            previous_end_byte = tree.node().end_byte();

            query[&index[..]].add_child((&tree.node(), source));
            index.push(i);
            write_node(f, query, index, tree, source, stylesheet, lang_map)?;
            index.pop();
            tree.goto_next_sibling()
        } {
            i += 1;
        }
        if previous_end_byte != end_byte {
            let token = &source[previous_end_byte..end_byte];
            write_token(f, token, style)?;
        }
        tree.goto_parent();
    }

    Ok(())
}

pub(super) fn write(
    f: &mut Formatter,
    source: &str,
    tree: &Tree,
    stylesheet: &Stylesheet,
    lang_map: &LangMap,
) -> fmt::Result {
    let mut tree = tree.walk();
    let mut query = Query::from((&tree.node(), source));
    write_node(
        f,
        &mut query,
        &mut vec![],
        &mut tree,
        source,
        stylesheet,
        lang_map,
    )
}
