[Syncat]: https://github.com/oinkiguana/syncat

# Syncat Themes

Themes for [Syncat][] syntax aware cat tool. See the Syncat documentation for more information on
how to install and use Syncat.

Note that depending on your terminal settings, certain features of some themes may not appear as
you expect them to.

## Creating themes

Syncat supports the `--dev` option, which instead of just printing the contents of the file, will
print the parsed source code as an s-expression including every token. You can use the names of each
node in a stylesheet, as in this repo.

The themes are specified in `.syncat` files, using a syntax similar to CSS.

### `.syncat` Files

Syncat files can, of course, be highlighted by using Syncat, which can be useful for debugging.
A `.syncat` file consists of a list of rules:

```syncat
<selector> {
  <style>: <value>;
}
```

These files correspond to one language each, identified by the file name. The supported file names
are:

*   Agda: `agda`
*   C: `c.syncat`
*   C++: `cpp.syncat`
*   C#: `cs.syncat`
*   Rust: `rs.syncat`
*   Ruby: `rb.syncat`
*   EJS/ERB: `template.syncat`
*   TypeScript: `ts.syncat`
*   JavaScript: `js.syncat`
*   JSON: `json.syncat`
*   Bash: `sh.syncat`
*   Python: `py.syncat`
*   Go: `go.syncat`
*   PHP: `php.syncat`
*   OCaml: `ml.syncat`
*   HTML: `html.syncat`
*   CSS: `css.syncat`
*   Java: `java.syncat`
*   Scala: `scala.syncat`
*   Haskell: `hs.syncat`
*   Regex: `regex.syncat`
*   Syncat: `syncat.syncat`

### Selectors

Selectors are the most complex part of the stylesheet. They correspond to paths into the syntax
tree, similar to a selector works in HTML. You can view the syntax tree by passing the `--dev`
option when running syncat.

Here's an example syntax tree for a trivial piece of code. You can see that they very quickly get
very complex. The output from the `--dev` view is not even as well formatted, but it does include
the applied colours!

```rust
fn main() {
    let hello = vec!["hello", "world"];
    for word in &hello {
        print!("{} ", word);
    }
    println!();
}
```

```
(source_file
  (function_item
    ("fn")
    (identifier "main")
    (parameters ("(") (")"))
    (block ("{")
      (let_declaration
        ("let")
        (identifier "hello")
        ("=")
        (macro_invocation (identifier "vec") ("!")
          (token_tree ("[") (string_literal (""") (""")) (",") (string_literal (""") (""")) ("]")))
        (";"))
      (for_expression
        ("for")
        (identifier "word")
        ("in")
        (reference_expression ("&") (identifier "hello"))
        (block ("{")
          (macro_invocation
            (identifier "print")
            ("!")
            (token_tree ("(") (string_literal (""") (""")) (",") (identifier "word") (")")))
            (";")
            ("}")))
      (macro_invocation
        (identifier "println")
        ("!")
        (token_tree ("(") (")")))
        (";")
      ("}"))))
```

To highlight, for example, the macro invocations in blue, use the most basic type of selector - node kind
selectors. A node kind selector is just the name of the node kind, without quotation marks:

```syncat
macro_invocation {
  color: blue;
}
```

A selector like this will match that node, as well as all of its children. That is, children will
inherit all styles from their parent nodes.

If you only want to match the identifier, and not the other children of the macro invocation, then you can
chain selectors to match children, just like CSS:

```syncat
macro_invocation identifier {
  color: blue
}
```

Unfortunately, the above selector will also match any identifiers, at any depth, including
parameters to the macro invocation. To only match direct children, include the `>` separator:

```syncat
macro_invocation > identifier {
  color: blue;
}
```

To match specific tokens (the quoted parts in the token tree above), you have to use quotes in the
stylesheet. Since a token can only be a leaf node in the tree, a token must be the last segment in
the selector. The snippet below will turn the macro invocation exclamation marks blue.

Note that some tokens are named (often identifiers) while many are not named (often symbols like ";").
You can use the node name of a named token just like any other node.

```syncat
macro_invocation > "!" {
  color: blue;
}
```

Since these two selectors are related, and perform the same styling, they can be combined into one
rule by listing all applicable selectors with commas:

```syncat
macro_invocation > identifier,
macro_invocation > "!" {
  color: blue;
}
```

A regular expression can also be used in place of a plain string to match token values. This can be 
useful at times for matching specific types of identifiers. To make all printing macros come up 
yellow, you could do the following:

```syncat
macro_invocation > identifier /^print/ {
  color: yellow;
}
```

The last feature of the stylesheets is branch checking. A branch check provides a sub-selector,
which must match on the previous nodes in the tree. This can be very complex, but very powerful.
For example, you can use this feature to match the exclamation marks for the print macros and colour
them yellow to match. Note that the `>` separator must come *inside* the brackets if you want to
ensure that the sub-selector is matching directly in the parent scope, and not anywhere in the child
hierarchy.

```
macro_invocation [> identifier /^print/] > "!' {
  color: yellow;
}
```

#### Precedence

Currently, the precedence of the rules in a stylesheet is not well defined. It is certainly planned
that some semantics will eventually be formalized, but while still in heavy development, these
semantics are not yet decided. To get around the rules not always working as you would hope, you can
mark blocks as important, similar to the CSS `!important`, by using `{|` and `|}` to make the
delimiters. Any style defined in an important block like this cannot be overridden. Note that the
precedence of these important blocks is also not defined, so using them extensively will not help
much.

```
"println" {|
  color: purple;
|}
```

### Styles

These are all the available styles. Some may not work depending on your terminal.

*   `color: [color]`: The colour of the text
*   `background-color: [color]`: The colour of the background
*   `reverse: [boolean]`: Reverse the foreground/background colours
*   `italic: [boolean]`: Use italics
*   `bold: [boolean]`: Use bold
*   `underline: [boolean]`: Use underline
*   `strikethrough: [boolean]`: Use strikethrough
*   `dim: [boolean]`: Dim the text
*   `hidden: [boolean]`: Hide the text
*   `blink: [boolean]`: Have the text blinking
*   `language: [string]`: Reparse tokens as another language. The value should be one of the
    supported syntax file names (above).

### Values

There are 3 kinds of values:

*   `color` values can take one of three forms:
    *   A color name literal (`red`, `green`, `blue`, `cyan`, `yellow`, `purple`, `black`, `white`)
    *   A number, corresponding to the index of the 256-color terminal colors
    *   A hex value, such as `#93df41`
*   `boolean` values can be either `true` or `false`, and will always default to `false`
*   `string` values can be left unquoted if they only contain letters, numbers, _ and -, but must be
    quoted otherwise. Only double quotes are supported.
