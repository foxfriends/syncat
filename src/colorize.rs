use tree_sitter::{Tree, Node, Parser};

use crate::stylesheet::{Stylesheet, Context};

fn colorize_node<'a>(
    source: &'a str,
    node: Node,
    context: &mut Context,
    stylesheet: &Stylesheet,
    pos: &mut usize,
    scope: &mut Vec<&'a str>,
    output: &mut String,
) -> Result<(), Box<dyn std::error::Error>> {
    // put any leading characters into the result text
    let outer_style = stylesheet.resolve(&context, scope, None).build();
    output.push_str(&format!("{}", outer_style.paint(&source[*pos..node.start_byte()])));
    *pos = node.start_byte();

    if node.child_count() == 0 {
        // print a child node
        let token = &source[node.start_byte()..node.end_byte()];
        context.add(node.kind().to_string(), Some(token.to_string()));
        scope.push(node.kind());
        let style = stylesheet.resolve(&context, scope, Some(token));
        scope.pop();
        if let Some(language) = style.language() {
            let mut parser = Parser::new();
            parser.set_language(language.parser()).unwrap();
            let tree = parser.parse(token, None).unwrap();
            output.push_str(&print_source(token, tree, &language.style()?)?);
        } else {
            output.push_str(&format!("{}", style.build().paint(token)));
        }
        *pos = node.end_byte();

    } else {
        // recurse for a middle node
        scope.push(node.kind());
        context.at(node.kind().to_string(), None, |context| -> Result<(), Box<dyn std::error::Error>> {
            for child in node.children() {
                colorize_node(
                    source,
                    child,
                    context,
                    stylesheet,
                    pos,
                    scope,
                    output,
                )?;
            }
            Ok(())
        })?;
        scope.pop();
    }
    Ok(())
}

pub fn print_source<I: AsRef<str>>(source: I, tree: Tree, stylesheet: &Stylesheet) -> Result<String, Box<dyn std::error::Error>> {
    let source = source.as_ref();
    let node = tree.root_node();
    let mut output = String::new();
    let mut pos = 0;
    colorize_node(
        source,
        node,
        &mut Context::default(),
        stylesheet,
        &mut pos,
        &mut vec![],
        &mut output,
    )?;
    output.push_str(&source[pos..]);
    Ok(output)
}

fn colorize_node_sexp<'a>(
    source: &'a str,
    node: Node,
    context: &mut Context,
    stylesheet: &Stylesheet,
    pos: &mut usize,
    scope: &mut Vec<&'a str>,
    output: &mut String,
) -> Result<(), Box<dyn std::error::Error>> {
    if node.child_count() == 0 {
        // print a child node
        let token = &source[node.start_byte()..node.end_byte()];
        context.add(node.kind().to_string(), Some(token.to_string()));
        scope.push(node.kind());
        let style = stylesheet.resolve(&context, scope, Some(token));
        scope.pop();
        if let Some(language) = style.language() {
            let mut parser = Parser::new();
            parser.set_language(language.parser()).unwrap();
            let tree = parser.parse(token, None).unwrap();
            output.push_str(&print_tree(token, tree, &language.style()?)?);
        } else {
            let style = style.build();
            output.push_str(&format!("({} \"{}\")", style.paint(node.kind()), style.paint(token)));
        }
        *pos = node.end_byte();

    } else {
        // recurse for a middle node
        scope.push(node.kind());
        let style = stylesheet.resolve(&context, scope, None).build();
        output.push_str(&format!("({}", style.paint(node.kind())));
        context.at(node.kind().to_string(), None, |context| -> Result<(), Box<dyn std::error::Error>> {
            for child in node.children() {
                output.push(' ');
                colorize_node_sexp(
                    source,
                    child,
                    context,
                    stylesheet,
                    pos,
                    scope,
                    output,
                )?;
            }
            Ok(())
        })?;
        output.push(')');
        scope.pop();
    }
    Ok(())
}

pub fn print_tree<I: AsRef<str>>(source: I, tree: Tree, stylesheet: &Stylesheet) -> Result<String, Box<dyn std::error::Error>> {
    let source = source.as_ref();
    let node = tree.root_node();
    let mut output = String::new();
    let mut pos = 0;
    colorize_node_sexp(
        source,
        node,
        &mut Context::default(),
        stylesheet,
        &mut pos,
        &mut vec![],
        &mut output,
    )?;
    output.push_str(&source[pos..]);
    Ok(output)
}
