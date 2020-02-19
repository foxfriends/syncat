[Tree-sitter]: https://github.com/tree-sitter/tree-sitter
[syncat-themes]: https://github.com/foxfriends/syncat-themes
[crates.io]: https://crates.io

# Syncat

Syntax aware cat utility. Provides syntax highlighting to files printed on the command line using
[Tree-sitter][] to parse the files, and ANSI escape codes to colour them.

## Installation

Unfortunately, Syncat's compiled binary is too large to be published on [crates.io], so you have
to install from source.

```bash
git clone https://github.com/foxfriends/syncat
cd syncat
cargo install --path syncat
```

You will then also want to set up the stylesheets (otherwise nothing will be highlighted). Feel
free to modify these themes, and make new ones that are more to your taste. Pull requests with
new themes are greatly appreciated! The full documentation on themes is available [here][syncat-themes].

```bash
mkdir ~/.config/syncat
cd ~/.config/syncat
git clone https://github.com/foxfriends/syncat-themes style
```

### Language Support

By default syncat will be installed with all languages enabled. As each language's parser is
statically linked to the resulting executable, this can get quite large and take a very long time.
You can override this by passing a comma separated list of languages to support at compile time via 
the `syncat_languages` environment variable. For example:

```bash
# only enable Rust
syncat_languages=rust cargo install --path .

# enable Rust and JavaScript
syncat_languages=rust,javascript cargo install --path .
```

If in future you would like to add new languages, you will have to reinstall with different language 
list.

These are the languages you can pick from:
*   `agda`
*   `bash`
*   `c`
*   `clojure`
*   `cpp`
*   `c-sharp`
*   `css`
*   `elm`
*   `embedded-template`
*   `eno`
*   `go`
*   `haskell`
*   `html`
*   `java`
*   `javascript`
*   `jsdoc`
*   `json`
*   `julia`
*   `latex`
*   `lua`
*   `markdown`
*   `ocaml`
*   `php`
*   `python`
*   `regex`
*   `ruby`
*   `rust`
*   `scala`
*   `systemrdl`
*   `syncat-stylesheet`
*   `test`
*   `toml`
*   `typescript`
*   `tsx`
*   `verilog`
*   `yaml`

And here is that list as a string you can paste:

```
agda,bash,c,clojure,cpp,c-sharp,css,elm,embedded-template,eno,go,haskell,html,java,javascript,jsdoc,json,julia,latex,lua,markdown,ocaml,php,python,regex,ruby,rust,scala,syncat-stylesheet,systemrdl,test,toml,typescript,tsx,verilog,yaml
```

## Configuration

Syncat looks for configuration in the default configuration locations for your operating system:
*   Linux: `$HOME/.config/syncat/`
*   Mac: `$HOME/Library/Preferences/com.cameldridge.syncat/`
*   Windows: Not officially supported

The supported configurations are:
*   Language Map; and
*   Stylesheets

### Language Map

The language map is a simple TOML file named `languages.toml`, located in the root of the configuration
folder listed above. The keys of this file denote the extension to support, and the value is the
language that files with that extension should be parsed as.

For example, to have `.svelte` files parsed as HTML, you would include this entry:

```toml
svelte = "html"
```

### Stylesheets

In order for Syncat to know what colours to set, you must provide a stylesheet for each language. A
number of pre-made themes are provided in the [syncat-themes][] repository.

Syncat will look for the `.syncat` file corresponding to the language of your source code in the
following directories:

*   Linux: `$HOME/.config/syncat/style/active`
*   Mac: `$HOME/Library/Preferences/com.cameldridge.syncat/style/active`
*   Windows: Not officially supported

For more information on how the provided themes are implemented, and on creating your own themes, 
see the [syncat-themes][] documentation.

## Usage

```bash
# Colours this file based on the extension
syncat src/main.rs

# Uses the bash expansion, colouring each file by its own extension
syncat src/*.rs

# Colours the file using a specific language
syncat -l js src/package.json
```
