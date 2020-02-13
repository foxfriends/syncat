use super::*;

fn colorize_node<'a>(
    source: &'a str,
    (index, node): (usize, Node),
    stylesheet: &Stylesheet,
    pos: &mut usize,
    context: &mut Context<'a>,
    scope: &mut Vec<(usize, &'a str)>,
    output: &mut String,
) -> Result<(), crate::BoxedError> {
    // put any leading characters into the result text
    let outer_style = stylesheet.resolve(context, scope, None);

    output.push_str(&format!("{}", outer_style.build().paint(&source[*pos..node.start_byte()])));
    *pos = node.start_byte();

    if node.child_count() == 0 {
        // print a child node
        let token = &source[node.start_byte()..node.end_byte()];
        let mut line_count = token.lines().count();
        if !token.ends_with('\n') {
            line_count -= 1;
        }
        if node.is_named() {
            scope.push((index, node.kind()));
        }
        let style = stylesheet.resolve(context, scope, Some(token));
        if let Some(language) = style.language().and_then(|lang| lang.parse::<Lang>().ok()) {
            let mut parser = Parser::new();
            parser.set_language(language.parser()).unwrap();
            let tree = parser.parse(token, None).unwrap();
            output.push_str(&print_source(token, tree, &language.style()?)?);
        } else {
            for (index, line) in token.lines().enumerate() {
                output.push_str(&format!("{}", style.build().paint(line)));
                if index != line_count {
                    output.push('\n');
                }
            }
        }
        *pos = node.end_byte();
        context.add_child(&scope, token);
        if node.is_named() {
            scope.pop();
        }

    } else {
        // recurse for a middle node
        scope.push((index, node.kind()));
        // put any leading characters into the result text
        let style = stylesheet.resolve(context, scope, None);

        if let Some(language) = style.language().and_then(|lang| lang.parse::<Lang>().ok()) {
            let token = &source[node.start_byte()..node.end_byte()];
            *pos = node.end_byte();
            let mut parser = Parser::new();
            parser.set_language(language.parser()).unwrap();
            let tree = parser.parse(token, None).unwrap();
            output.push_str(&print_source(token, tree, &language.style()?)?);
            scope.pop();
            return Ok(())
        }

        for child in node.children().enumerate() {
            colorize_node(
                source,
                child,
                stylesheet,
                pos,
                context,
                scope,
                output,
            )?;
        }
        scope.pop();
    }
    Ok(())
}

pub fn print_source<I: AsRef<str>>(source: I, tree: Tree, stylesheet: &Stylesheet) -> Result<String, crate::BoxedError> {
    let source = source.as_ref();
    let node = tree.root_node();
    let mut output = String::new();
    let mut pos = 0;
    colorize_node(
        source,
        (0, node),
        stylesheet,
        &mut pos,
        &mut Context::default(),
        &mut vec![],
        &mut output,
    )?;
    output.push_str(&source[pos..]);
    Ok(output)
}
