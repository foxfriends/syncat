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
*   Lua: `lua.syncat`
*   Clojure: `clj.syncat`
*   TeX: `tex.syncat`
*   Tree sitter corpus tests: `corpus.syncat`

### Selectors

Selectors are the most complex part of the stylesheet. They correspond to paths into the syntax
tree, similar to a selector works in HTML. You can view the syntax tree by passing the `--dev`
option when running syncat.

Here's an example syntax tree for a trivial piece of code. You can see that they very quickly get
very complex. The output from the `--dev` view is not even as well formatted, but it does include
the applied colours!

```javascript
function sayHello(subject) {
  return `Hello ${subject}`;
  throw new Error('Unreachable');
}

console.log(sayHello('world'));
```

```
(program
  (function
    ("function")
    (identifier "sayHello")
    (formal_parameters ("(") (identifier "subject") (")"))
    (statement_block
      ("{")
      (return_statement
        ("return")
          (template_string ("`") (template_substitution ("${") (identifier "subject") ("}")) ("`"))
          (";"))
      (throw_statement 
        ("throw") 
        (new_expression 
          ("new") 
          (identifier "Error") 
          (arguments ("(") (string ("'") ("'")) (")"))) 
        (";"))
      ("}")))
  (expression_statement
    (call_expression
      (member_expression (identifier "console") (".") (property_identifier "log"))
      (arguments
        ("(")
          (call_expression
            (identifier "sayHello")
            (arguments ("(") (string ("'") ("'")) (")")))
        (")")))
    (";")))
```

To highlight, for example, the function name in blue, you might try the following:

```syncat
function {
  color: blue;
}
```

A selector like this will match that node, as well as all of its children. That is, children will
inherit all styles from their parent nodes. Unfortunately, this means that the above rule will turn
the entire function blue! 

If you only want to match the identifier, and not the other children of the function declaration, 
you can chain selectors to match children, just like CSS:

```syncat
function identifier {
  color: blue
}
```

Unfortunately, the above selector will still match any identifiers at any depth, including in the
method body. To get around this, we can use the direct child specifier `>` to indicate to only match
nodes that are direct children of the specified parent.

```syncat
function > identifier {
  color: blue;
}
```

To match specific tokens (the quoted parts in the token tree above), you have to use quotes in the
stylesheet. Since a token can only be a leaf node in the tree, a token must be the last segment in
the selector. The snippet below will turn the macro invocation exclamation marks blue.

Note that some tokens are named (often identifiers) while many are not named (often symbols like ";").
You can use the node name of a named token just like any other node.

To turn the function keyword purple, you could do the following:

```syncat
"function" {
  color: purple;
}
```

There are often many elements you would want to style in the same way, so to make things easier, you
can write a list of selectors separated by commas:

```syncat
"function", "return" {
  color: purple;
}
```

A regular expression can also be used in place of a plain string to match token values. This can be
useful at times for matching specific forms of identifiers. You could turn functions with names that
start with "say" cyan like this:

```syncat
function > identifier /^say/ {
  color: cyan;
}
```

There are times when you would rather not apply a style to all children. One common occurrence of
this is for template strings. You don't want to highlight the interpolated text the same colour as
the string. You can end a rule with a `.` to prevent its styles from being inherited by any
children:

```syncat
template_string. {
  color: green;
}
```

The last feature of the stylesheets is branch checking. A branch check provides a sub-selector,
which must match on the previous nodes in the tree. This can be very complex, but very powerful.
For example, you can use this feature to match the exclamation marks for the print macros and colour
them yellow to match. Note that the `>` separator must come *inside* the brackets if you want to
ensure that the sub-selector is matching directly in the parent scope, and not anywhere in the child
hierarchy.

For example, to highlight the unreachable `throw` after the `return` statement, you could do this:

```
function [return_statement] throw_statement {
  background-color: red;
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
"console" {|
  color: yellow;
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

## Meta

In addition to the `[language].syncat` files which style the source code of each language, you can
include the `.syncat` file (with no name portion) to configure some of the Syncat features.

There are only a few, specific selectors which are supported. Each accepts any of the regular style
options as above (though `language` will have no effect), and some have extra options documented
below:

*   `line_number`: The styling for line numbers (pass `-n` option)
*   `line_ending`: The styling for the end of line marker (pass `-E` option)
    *   `content: [string]`: Use the provided string as the end of line marker
*   `margin`: The separator between the line numbers and the source code
    *   `content: [string]`: Use the provided string as the margin
