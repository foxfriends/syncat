[Tree-sitter]: https://github.com/tree-sitter/tree-sitter
[syncat-themes]: https://github.com/foxfriends/syncat-themes
[languages.toml]: https://github.com/foxfriends/config/blob/syncat/languages.toml
[crates.io]: https://crates.io
[Bat]: https://github.com/sharkdp/bat
[`syncat/config`]: ./syncat/config

# Syncat

Syntax aware cat utility. Provides syntax highlighting to files printed on the command line using
[Tree-sitter][] to parse the files, and ANSI escape codes to colour them.

## Features

Syncat aims to provide similar features to the standard `cat` and the similar [Bat][] tool:
1.  Git integration (`-g`)
2.  Show line endings (`-e`)
3.  Line numbering (`-n`)
4.  Multiple levels of framing (`-f` or `-ff`)
5.  File concatenation
6.  Parses any file type accurately using Tree-sitter
7.  Customizable syntax colouring using stylesheets

In particular, the advantage of Syncat over the other options is that the parsing is done using
[Tree-sitter][] instead of with regular expressions, which makes it
* very fast;
* robust enough to provide useful results even in the presence of syntax errors.

Syncat does not support automatic paging, but you can just use `less -r` to handle that.

## Installation

Syncat can be installed from [crates.io][]:

```bash
cargo install syncat
```

## Configuration

By default, Syncat comes bundled with the configuration files as seen in [`syncat/config`][],
providing an unverified list of tree-sitter grammars, and some quickly cobbled together
highlighting for a handful of known file types.

If this basic configuration does not suffice, you may choose to configure Syncat yourself.
Do so by copying the [`syncat/config`][] folder and modifying them. You may also be interested
in instead copying my personal configuration of Syncat, which can be found in the [syncat-themes][]
repository.

To configure on your own, start by creating the appropriate configuration directory, depending on
your operating system, and then continuing to the following sections. The appropriate directories
are:
*   Linux: `$HOME/.config/syncat/`
*   Mac: `$HOME/Library/Preferences/com.cameldridge.syncat/`
*   Windows: Not officially supported

### Stylesheets

The official stylesheets (admittedly somewhat incomplete) are available [here][syncat-themes].

Stylesheets are placed in the configuration directory, under a subdirectory `style`. You can
get the official themes as below, or just create this directory yourself.

```bash
cd ~/.config/syncat # or `cd ~/Library/Preferences/com.cameldridge.syncat` for Mac users
git clone https://github.com/foxfriends/syncat-themes style
```

For full documentation on how these stylesheet customizations work, see the README in
the [syncat-themes][] repository.

### Languages

As Syncat uses Tree-sitter for parsing, you must download and compile Tree-sitter parsers for
Syncat to use. Fortunately, the downloading and compiling can be handled by Syncat, given you
specify what to download.

The language map is a simple TOML file named `languages.toml`, located in the root of the
configuration folder. A good start might be to try [mine][languages.toml].

Each entry in this file describes one language, and is a table of 4
or 5 keys. The example entry below would install a highlighter for Syncat stylesheets.

```toml
[syncat-stylesheet] # The name here is arbitrary
# The URL of the Git repository where the language is defined
source = "https://github.com/foxfriends/syncat"
# Optional: The path within the repository to the tree-sitter package.
# Leave this out if the language is defined in the root of the repository.
path = "tree-sitter-syncat-stylesheet"
# The name of the directory to clone the `source` repository into. Typically
# this is the same name as the source repository, but you must specify it anyway.
library = "syncat"
# The name of this language. This value should be the same as the value listed
# in the `grammar.js` file from the repository.
#
# This name will also be the name of the stylesheet file used when highlighting
# this language.
name = "syncat_stylesheet"
# A list of file extensions which should be parsed using this language.
extensions = ["syncat"]
```

Once you have filled this file to your liking, the command `syncat install` will install all
of those languages. Running `syncat install` again later will update all languages, and install
any new ones.

## Usage

```bash
# Colours this file based on the extension
syncat src/main.rs

# Uses the shell expansion, colouring each file by its own extension
syncat src/*.rs

# Colours the file using a specific language
syncat -l js src/package.json

# Installs (or updates) all languages listed in the `languages.toml` file
syncat install

# Installs only a specific entry in the `languages.toml` file
syncat install rust

# Uninstalls a language. A few points to note:
# *   The language must still be listed in the `languages.toml` file.
# *   This does not remove the file from `languages.toml`, only deletes its installation.
syncat remove rust

# Show information about all languages listed in `languages.toml`
syncat list
```
