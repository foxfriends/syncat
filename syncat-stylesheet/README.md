[Tree-sitter]: https://github.com/tree-sitter/tree-sitter
[syncat-themes]: https://github.com/foxfriends/syncat-themes

# Syncat Stylesheets

This documentation consists only of the usage of the `syncat_stylesheet` crate.
For documentation on the syntax and semantics of these stylesheets, see the 
[syncat-themes][] repository.

## Stylesheets

Stylesheets are loaded from files. All imports will be resolved relative to the file
during the loading process.

```syncat
// colours.syncat
$variable: red;
$value: bryellow;

// syncat.syncat
import "./colours.syncat";
declaration variable { color: $variable; }
declaration value { color: $value; }
```

```rust
let stylesheet = Stylesheet::from_file("syncat.syncat");
```

## Queries

Queries take the form of trees, as these stylesheets are typically used to apply 
properties (i.e. styles) to trees (as in parse trees).

Each node of a `Query` has a `kind` and a `token`, which must be provided. These 
nodes may also contain child nodes, which are also just `Query`, which can have 
more subqueries.

When matching against rules, the nodes of the rule are checked with the right-most 
branch of the tree.

For example, with the following source code:

```syncat
$hello: world;
```

You could construct this `Query`:

```rust
let mut query = Query::new("declaration", "$hello: world;");
query.add_child(Query::new("variable", "$hello"));
query.add_child(Query::new("value", "$world"));
```

Which corresponds to a tree like this:

```
(declaration (variable "$hello")
             (value "world"))
```

Which can then be matched against a `Stylesheet` by using the `Stylesheet::style` method.
This will return `Some(style)` if there were matches, or `None` if there were
none. Often this distinction does not matter, so you can unwrap to the default
`Style`.

```rust
let style = stylesheet.style(&query).unwrap_or_default();
```

```syncat
// successfully:
declaration value {} // because the value is on the right-most branch, and has the declaration as a parent
variable + value {} // because the value is on the right-most branch, and a direct sibling of the variable
declaration {} // because the declaration is a parent of the rightmost branch
value & "world" {} // because the value on the right-most branch has token "world"

// unsuccessfully
declaration > variable {} // because the variable is not on the right-most branch
value & "wor" {} // because the token "wor" does not match the token "world"
declaration variable value {} // because the value is not nested within the variable
declaration > {} // because the declaration is not the node directly at the end of the right-most branch
```

## Applications

Once you have a `Style` value, its properties can be extracted using the `Style::get` 
or `Style::try_get` methods. `Style::get` will retrieve the raw value, while `Style::try_get`
will attempt to convert that value to a contextual type.

With the `ansi_term` feature enabled (it is not by default), conversions to
`ansi_term::Style` are provided. Alternatively, you can simply extract whatever
properties you expect from the `Style` and interpret them however you choose.

```rust
let content: String = style.try_get("content")?.unwrap_or_else(|| String::from("hello world"));
let ansi_style: ansi_term::Style = style.try_into()?;
println!("{}", ansi_style.paint(content));
```
