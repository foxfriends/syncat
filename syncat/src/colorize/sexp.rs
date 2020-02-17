fn colorize_node_sexp<'a>(
    source: &'a str,
    stylesheet: &Stylesheet,
    pos: &mut usize,
    scope: &mut Vec<(usize, &'a str)>,
    output: &mut String,
) -> Result<(), crate::BoxedError> {
    if node.child_count() == 0 {
        // print a child node
        let token = &source[node.start_byte()..node.end_byte()];
        if node.is_named() {
            scope.push((index, node.kind()));
        }
        let style = stylesheet.resolve(context, scope, Some(token));
        if let Some(language) = style.language().and_then(|lang| lang.parse::<Lang>().ok()) {
            let mut parser = Parser::new();
            parser.set_language(language.parser()).unwrap();
            let tree = parser.parse(token, None).unwrap();
            output.push_str(&format!("({} [{:?}: ", style.build().paint(node.kind()), language));
            output.push_str(&print_tree(token, tree, &language.style()?)?);
            output.push_str("])");
        } else {
            let style = style.build();
            if node.is_named() {
                output.push_str(&format!("({} \"{}\")", style.paint(node.kind()), style.paint(token)));
            } else {
                output.push_str(&format!("(\"{}\")", style.paint(token)));
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
        let style = stylesheet.resolve(context, scope, None);

        if let Some(language) = style.language().and_then(|lang| lang.parse::<Lang>().ok()) {
            let token = &source[node.start_byte()..node.end_byte()];
            *pos = node.end_byte();
            let mut parser = Parser::new();
            parser.set_language(language.parser()).unwrap();
            let tree = parser.parse(token, None).unwrap();
            output.push_str(&format!("({} [{:?}: ", style.build().paint(node.kind()), language));
            output.push_str(&print_tree(token, tree, &language.style()?)?);
            output.push_str("])");
            scope.pop();
            return Ok(())
        }

        output.push_str(&format!("({}", style.build().paint(node.kind())));
        for child in node.children().enumerate() {
            output.push(' ');
            colorize_node_sexp(
                source,
                child,
                stylesheet,
                pos,
                context,
                scope,
                output,
            )?;
        }
        output.push(')');
        scope.pop();
    }
    Ok(())
}

pub fn print_sexp(source: &str, tree: Tree, stylesheet: Stylesheet, f: &mut Formatter) -> syncat_stylesheet::Result<String> {
    let mut pos = 0;
    colorize_node_sexp(
        source,
        (0, node),
        &stylesheet,
        &mut pos,
        &mut Context::default(),
        &mut vec![],
        &mut output,
    )?;
    output.push_str(&source[pos..]);
    Ok(output)
}
