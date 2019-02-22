use tree_sitter::{Tree, Node};

use crate::stylesheet::Stylesheet;

fn colorize_node(source: &str, node: Node, style: &Stylesheet) -> Result<String, Box<dyn std::error::Error>> {
    print!("({} [{}]", node.kind(), node.kind_id());
    for child in node.children() {
        print!(" ");
        colorize_node(source, child, style)?;
    }
    print!(")");

    Ok(String::from(""))
}

pub fn colorize<I: AsRef<str>>(source: I, tree: Tree, style: &Stylesheet) -> Result<String, Box<dyn std::error::Error>> {
    let source = source.as_ref();
    let node = tree.root_node();
    colorize_node(source, node, style)
}
