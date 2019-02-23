use tree_sitter::{Tree, Node};

use crate::stylesheet::Stylesheet;

fn colorize_node<'a>(
    source: &'a str,
    node: Node,
    stylesheet: &Stylesheet,
    pos: &mut usize,
    scope: &mut Vec<&'a str>,
    output: &mut String,
) -> Result<(), Box<dyn std::error::Error>> {
    // put any leading whitespace into the result text
    output.push_str(&source[*pos..node.start_byte()]);
    *pos = node.start_byte();

    if node.child_count() == 0 {
        // print a child node
        let token = &source[node.start_byte()..node.end_byte()];
        scope.push(node.kind());
        let style = stylesheet.resolve(scope, Some(token)).build();
        scope.pop();
        output.push_str(&format!("{}", style.paint(token)));
        *pos = node.end_byte();
    } else {
        // recurse for a middle node
        scope.push(node.kind());
        for child in node.children() {
            colorize_node(source, child, stylesheet, pos, scope, output)?;
        }
        scope.pop();
    }
    Ok(())
}

pub fn source<I: AsRef<str>>(source: I, tree: Tree, stylesheet: &Stylesheet) -> Result<String, Box<dyn std::error::Error>> {
    let source = source.as_ref();
    let node = tree.root_node();
    let mut output = String::new();
    let mut pos = 0;
    colorize_node(source, node, stylesheet, &mut pos, &mut vec![], &mut output)?;
    output.push_str(&source[pos..]);
    Ok(output)
}

fn colorize_node_sexp<'a>(
    source: &'a str,
    node: Node,
    stylesheet: &Stylesheet,
    pos: &mut usize,
    scope: &mut Vec<&'a str>,
    output: &mut String,
) -> Result<(), Box<dyn std::error::Error>> {
    if node.child_count() == 0 {
        // print a child node
        let token = &source[node.start_byte()..node.end_byte()];
        scope.push(node.kind());
        let style = stylesheet.resolve(scope, Some(token)).build();
        scope.pop();
        output.push_str(&format!("({})", style.paint(token)));
        *pos = node.end_byte();
    } else {
        // recurse for a middle node
        scope.push(node.kind());
        let style = stylesheet.resolve(scope, None).build();
        output.push_str(&format!("({}", style.paint(node.kind())));
        for child in node.children() {
            output.push(' ');
            colorize_node_sexp(source, child, stylesheet, pos, scope, output)?;
        }
        output.push(')');
        scope.pop();
    }
    Ok(())
}

pub fn tree<I: AsRef<str>>(source: I, tree: Tree, stylesheet: &Stylesheet) -> Result<String, Box<dyn std::error::Error>> { 
    let source = source.as_ref();
    let node = tree.root_node();
    let mut output = String::new();
    let mut pos = 0;
    colorize_node_sexp(source, node, stylesheet, &mut pos, &mut vec![], &mut output)?;
    output.push_str(&source[pos..]);
    Ok(output)
}
