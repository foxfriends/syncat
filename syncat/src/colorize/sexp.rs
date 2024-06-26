use crate::config::Config;
use crate::language::LangMap;
use ansi_term::Style;
use std::convert::TryInto;
use std::fmt::{self, Formatter};
use syncat_stylesheet::{Query, Stylesheet};
use tree_sitter::{Tree, TreeCursor};

fn write_node<'s>(
    f: &mut Formatter,
    query: &mut Query<'s>,
    index: &mut Vec<usize>,
    tree: &mut TreeCursor,
    source: &'s str,
    config: &Config,
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

    if let Some(language) = language {
        // this node should be printed in another language: (kind [subtree])
        if let Some(mut parser) = language.parser(config).map_err(|_| fmt::Error)? {
            let token = tree.node().utf8_text(source.as_ref()).unwrap();
            let subtree = parser.parse(token, None).unwrap();
            write!(f, "({} [", style.paint(tree.node().kind()))?;
            write(
                f,
                token,
                &subtree,
                config,
                &language.style(config).map_err(|_| fmt::Error)?,
                lang_map,
            )?;
            write!(f, "])")?;
            return Ok(());
        }
    }
    if tree.node().child_count() == 0 {
        // leaf node: (kind "token")
        if tree.node().is_named() {
            write!(
                f,
                "({} {})",
                style.paint(tree.node().kind()),
                style.paint(format!(
                    "{:?}",
                    tree.node().utf8_text(source.as_ref()).unwrap()
                )),
            )?;
        } else {
            write!(
                f,
                "({})",
                style.paint(format!(
                    "{:?}",
                    tree.node().utf8_text(source.as_ref()).unwrap()
                )),
            )?;
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
            write_node(f, query, index, tree, source, config, stylesheet, lang_map)?;
            index.pop();
            tree.goto_next_sibling()
        } {
            i += 1;
        }
        tree.goto_parent();
        write!(f, ")")?;
    }

    Ok(())
}

pub(super) fn write(
    f: &mut Formatter,
    source: &str,
    tree: &Tree,
    config: &Config,
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
        config,
        stylesheet,
        lang_map,
    )
}
