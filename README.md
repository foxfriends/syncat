[Tree-sitter]: https://github.com/tree-sitter/tree-sitter
[syncat-themes]: https://github.com/oinkiguana/syncat-themes

# Syncat

Syntax aware cat utility. Provides syntax highlighting to files printed on the command line using
[Tree-sitter][] to parse the files, and ANSI escape codes to colour them.

## Installation

Once development has reached a reasonably complete state, it will be made available via Crates.io.

Until then, if you would like to try the development version, then follow these steps:

```bash
cd <somewhere>
git clone https://github.com/oinkiguana/syncat
cd syncat
cargo install --path .
mkdir ~/.config/syncat
cd ~/.config/syncat
git clone https://github.com/oinkiguana/syncat-themes theme
cd theme
ln -s onedark active
```

## Configuration

In order for Syncat to know what colours to set, you must provide a stylesheet for each language. A
number of pre-made themes are provided in the [syncat-themes][] repository.

To select a theme, you should copy or link the theme folder to the correct configuration folder for
your operating system.

*   Linux: `$HOME/.config/syncat/theme/active`
*   Mac: `$HOME/Library/Preferences/com.cameldridge.syncat/theme/active`
*   Windows: Not officially supported

For more information on creating themes, see the [syncat-themes][] documentation.

## Usage

```bash
# Colours this file based on the extension
syncat src/main.rs

# Uses the bash expansion, colouring each file by its own extension
syncat src/*.rs

# Colours the file using a specific language
syncat -l js src/package.json
```
