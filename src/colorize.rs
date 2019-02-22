use tree_sitter::Tree;
use ansi_term::Style;

pub fn colorize<I: AsRef<str>>(source: I, tree: Tree) -> Result<String, Box<dyn std::error::Error>> {
    let source = source.as_ref();
    println!("{:?}", tree);
    Ok(source.to_owned())
}
