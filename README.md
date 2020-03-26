[Tree-sitter]: https://github.com/tree-sitter/tree-sitter
[Syncat]: https://github.com/foxfriends/syncat
[syncat.kak]: https://github.com/foxfriends/config/blob/kak/autoload/filetype/syncat.kak

# Syncat Themes

Stylesheets and themes for [Syncat][] syntax aware cat tool. See the Syncat documentation for more
information on how to install and use Syncat.

Note that depending on the settings and features of your terminal program, certain features may not
appear how you expect them to.

## Installing stylesheets

Syncat stylesheets are installed by placing them in the relevant configuration directory for your
operating system:

*   Linux: `$HOME/.config/syncat/style/active`
*   Mac: `$HOME/Library/Preferences/com.cameldridge.syncat/style/active`
*   Windows: Not officially supported

In particular, to install these stylesheets, clone this repository to the `syncat/style` directory.

```
cd ~/.config/syncat
git clone https://github.com/foxfriends/syncat-themes style
```

## Selecting a theme

The themes in this repository implemented in two parts. In the `base` directory are the actual
filetype stylesheets, each of which requires the file `../colours.syncat` to exist, defining the
colours which are used. These `colours.syncat` files are defined in each of the other directories,
listing the relevant colours definitions for that theme, so one must be symlinked to the right
location for the themes to work, for example, if you like `onedark`:

```bash
ln -s ./base ./active
ln -s ./onedark/colours.syncat ./colours.syncat
```

Please note that at this time, not every filetype has been implemented, and not all the existing
stylesheets are perfect. If anyone would take the time to improve any aspect of these themes, please
feel free to submit a pull request with your improvements.

# Creating themes

Syncat supports the `--dev` option, which will print an s-expression describing the syntax tree,
rather than printing the actual contents of the file. By creating files demonstrating the syntax
you would like to highlight and then printing the syntax tree, you can figure out how to describe
a stylesheet for those files, which are written in a `.syncat` "syncat stylesheet".

## `.syncat` Stylesheets

A `.syncat` stylesheet looks, feels, and works very similarly to a CSS file.

Syncat files can, of course, be highlighted by using Syncat, which can be useful for debugging.
There is also a highlighter defined for the `Kakoune` text editor [here][syncat.kak].

These files correspond to one language each, identified by the file name. The supported file names
are:

*   Agda: `agda.syncat`
*   C: `c.syncat`
*   C++: `cpp.syncat`
*   C#: `cs.syncat`
*   Rust: `rs.syncat`
*   Ruby: `rb.syncat`
*   EJS/ERB: `template.syncat`
*   TypeScript: `ts.syncat`
*   JavaScript: `js.syncat`
*   JSON: `json.syncat`
*   Elm: `elm.syncat`
*   Bash: `sh.syncat`
*   Python: `py.syncat`
*   Go: `go.syncat`
*   PHP: `php.syncat`
*   OCaml: `ml.syncat`
*   HTML: `html.syncat`
*   CSS: `css.syncat`
*   Markdown: `md.syncat`
*   TeX: `tex.syncat`
*   Java: `java.syncat`
*   Scala: `scala.syncat`
*   Clojure: `clj.syncat`
*   Haskell: `hs.syncat`
*   Regex: `regex.syncat`
*   Syncat: `syncat.syncat`
*   Lua: `lua.syncat`
*   OCaml: `ml.syncat`
*   Eno: `eno.syncat`
*   TOML: `toml.syncat`
*   YAML: `yaml.syncat`
*   Syncat Stylesheet: `syncat.syncat`
*   Tree sitter corpus tests: `corpus.syncat`
*   SystemRDL: `systemrdl.syncat`
*   Verilog: `verilog.syncat`

The languages supported are limited by the languages available as [Tree-sitter][] grammars.
If a language you would like to use is not supported by Syncat, consider building a new grammar
and adding support for it.

## Syntax

A `.syncat` file consists three kinds of items:

```
// imports
import <string>;

// variable declarations
<variable>: <value>;

// rules
<selector> {
    <style>: <value>;
    // ...
}
```

### Rules

Rules consist of a selector (or multiple selectors), followed by a block of style descriptions.
If multiple rules match the same subtree, all the styles will be applied. Currently the precedence 
of rules is simply based on the order they are defined in. Styles set by rules near the top of the 
file will take priority over styles set by rules at the bottom of the file. All imported rules are 
considered lower priority to the ones defined in the parent file.

### Selectors

Selectors are the most complex part of the stylesheet. They correspond to paths into the syntax
tree, similar to a selector works in HTML. You can view the syntax tree by passing the `--dev`
option when running syncat.

Here's an example syntax tree for a trivial piece of code. You can see that they very quickly get
very complex. The output from the `--dev` view is not even pretty-printed, but it does include
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

#### Kinds

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

#### Direct Child Modifier

Unfortunately, the above selector will still match any identifiers at any depth, including those in the
method body. To get around this, we can use the direct child modifier `>`, similar to the equivalent CSS
selector, to indicate to only match nodes that are direct children of the specified parent.

```syncat
function > identifier {
  color: blue;
}
```

There are times when you would rather not apply a style to all children. One common instance of
this is for template strings: you don't want to highlight the interpolated text the same colour as
the string. You can end a rule with the `>` to ensure that this style does not get applied to any
child nodes, only the one matched directly by this selector.

```syncat
template_string > {
  color: green;
}
```

#### Tokens

To match specific tokens (the quoted parts in the token tree above), you can use strings in your
selector. Though it makes most sense to match tokens directly, you can actually use a string to
match against the source text of any node in the tree, even though that text is not visible in the
printed s-expression. When this would be useful I don't know, but it maybe worth noting.

For example, to turn the function keyword purple, you could do the following:

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

Regular expressions are supported to match a pattern against the token contents. To get all
identifiers that start with `say`, we could try something like the following:

```syncat
/^say[\w+]$/ {
  color: cyan;
}
```

#### Also modifier

Sometimes you would want to highlight a node only if it matches two selectors, typically to match
a node with a specific kind and token. To do this, use the also modifier `&`. This is most useful
with a regular expression to get across the intention more clearly.

This is probably a more correct way to try and highlight all identifiers that start with say.

```syncat
identifier & /^say/ {
  color: cyan;
}
```

#### Sibling modifiers

Sometimes it is useful to highlight based on siblings, which is supported by either the `+`
or `~` modifier. These modifiers work similarly to their CSS counterparts:
*   `~` will match a node which is a sibling of the previous node
*   `+` will match a node which immediately follows the previous node

For example, to match the unreachable `throw` statement in the snippet above, you could try
the following:

```syncat
return_statement + throw_statement {
  background-color: red;
}
```

#### "Any" node

The last type of selector not mentioned is the "any" selector `*`, which will match any single
node.

This would be a better way of describing "unreachable" statements.

```syncat
return_statement ~ * {
  background-color: red;
}
```

#### Grouping

Typically when describing siblings, it can be useful to match more complex siblings than a single
node. A group can be used to match an entire sub-selector. For example, to match the arguments
to the `Error` constructor, but not other functions, you could do this:

```syncat
new_expression (identifier & "Error") + arguments * {
  background-color: red;
}
```

### Styles

As you may have gathered from above, a style just takes the form `<name>: <value>;`. Any name
and value can be supplied together, and will be resolved correctly, it is up to the program that
is using the stylesheet to determine how those styles are interpreted. In particular, for Syncat,
the supported styles are as follows:

*   `color: <color>`: The colour of the text
*   `background-color: <color>`: The colour of the background
*   `reverse: <boolean>`: Reverse the foreground/background colours
*   `italic: <boolean>`: Use italics
*   `bold: <boolean>`: Use bold
*   `underline: <boolean>`: Use underline
*   `strikethrough: <boolean>`: Use strikethrough
*   `dim: <boolean>`: Dim the text
*   `hidden: <boolean>`: Hide the text
*   `blink: <boolean>`: Have the text blinking
*   `language: <string>`: Reparse tokens as another language. The value should be one of the
    supported syntax file names (above).

Unlike CSS, the final semicolon is not optional.

### Values

There are 6 kinds of values:

*   `color` values can take one of three forms:
    *   A color name literal, corresponding to the 16 standard terminal colours (`red`, `green`,
        `blue`, `cyan`, `yellow`, `purple`, `black`, `white`, `brred`, `brgreen`, `brblue`,
        `brcyan`, `bryellow`, `brpurple`, `brblack`, `brwhite`)
    *   A hex colour code, such as `#93df41`. Only the full 6-digit colour codes are supported.
*   `boolean` values can be either `true` or `false`, and will always default to `false`.
*   `string` values can be left unquoted if they only contain letters, numbers, _ and -, but must be
    quoted otherwise. Only double quotes are supported.
*   `number` values, which are unsigned 32-bit integers. Number values are not used by syncat, but are
    included anyway.
*   `variable` values, of the form `$<name>`, which will be resolved to the variable's actual
    value at runtime.
*   `capture` values, of the form `$<number>`, which will resolve to the numbered regex
    capture group at runtime. This is a bit complicated, as you could in theory supply multiple
    regular expressions in your selector. In the end, all the capture groups of each regular
    expression in the selector are appended together in the order they appear in the selector.

### Variable declarations

There are two ways to define a new variable. The first is the obvious way. This line will assign
the value `blue` to the variable `$function`:

```syncat
$function: blue;
```

You could then use that variable to set all function names to blue:

```syncat
function > identifier { color: $blue; }
```

Variable values are all computed dynamically (i.e., there is no scope) so the below will
have all function names coloured purple, despite the value being set after the rule.

```syncat
$color: blue;
function > identifier { color: $color; }

$color: purple;
"function", "return" { color: $color; }
```

Similar to rules, variables defined in the current file will override any variables set in the
imported files. However, unlike rules, variables defined earlier in the file will be overridden
by variables defined later. It is just not recommended to define a variable more than once in the
same file.

### Named groups

The second way to define a variable is to use a named group. These variables are set dynamically,
based on the text that was matched by some part of a selector. This is most useful for determining
certain facts about the sub-tree based on the tree itself.

A named group is a a group that looks like `(<name> selector)`. A variable is defined with the name
specified and the value is the text of the matching subtree.

A snippet from the Markdown highlighting shows how this can be used:

```syncat
fenced_code_block (info_string (<language> text)) + code_fence_content {
    language: $language;
}
```

### Imports

Imports are typically used to help reuse certain parts of a stylesheet. Most languages define
comments the same way, so it would probably be possible to support comments generically, though
this has not been done. The imports used by the default themes are used only for importing 
variables, but if you make your own themes you can try using them for whatever you like!

An import statement looks like the following:

```
import "../path/to/file.syncat";
```

The path is resolved relative to the path of the file that it is written in. Imports are resolved
recursively, but there is currently no mechanism to avoid loading an import twice, so be careful
not to create cycles. This will need to be fixed in future. They are also all resolved after every
rule and declaration in the current file, so it does not really matter where you put the import
statements.

The variables and rules defined in an imported file are given lower priority to rules and variables
defined in the current file. Additionally, imports are resolved in order, so if there are conflicting 
declarations in two imported files, the file whose import statement appears first will take priority.

If you made a tree of all the imports, they would be resolved in a depth-first, top-to-bottom sort of
order.

## The "Meta" stylesheet

In addition to the `[language].syncat` files which style the source code of each language, you can
include the `.syncat` file (with no name portion) to configure some of the extra features of Syncat.

There are only a few, specific selectors which are supported. Each accepts any of the regular style
options as above (though `language` will have no effect), and some have extra options documented
below:

*   `line_number`: The styling for line numbers (pass `-n` option)
*   `line_ending`: The styling for the end of line marker (pass `-E` option)
    *   `content: [string]`: Use the provided string as the end of line marker
*   `margin`: The frame drawing characters, between line numbers and the code, and between the
    files when using `-f` flags
    *   `content: [string]`: Valid values are "ascii" (uses `-|+` characters) or "unicode" (unicode box drawing characters)
*   `title`: The file name when drawn in the title frame (`-ff` flag)
*   `vcs_addition`: Additions detected by Git
    *   `content: [string]`: Use the provided string as the indicator. It is recommended to use only 1
        character
*   `vcs_modification`: Modifications detected by Git
    *   `content: [string]`: Use the provided string as the indicator. It is recommended to use only 1
        character
*   `vcs_deletion_above`: Deletions above the current line detected by Git
    *   `content: [string]`: Use the provided string as the indicator. It is recommended to use only 1
        character
*   `vcs_deletion_below`: Deletions below the current line detected by Git
    *   `content: [string]`: Use the provided string as the indicator. It is recommended to use only 1
        character
