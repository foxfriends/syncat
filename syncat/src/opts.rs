use clap::{ArgAction, Parser};
use std::path::PathBuf;

/// Syntax aware cat utility.
#[derive(Parser, Debug)]
#[clap(name = "syncat")]
#[clap(rename_all = "kebab-case")]
pub struct Opts {
    /// Level of framing around each file. Repeat for bigger frame
    #[arg(short, long, action=ArgAction::Count)]
    pub frame: u8,

    /// Use Git to show recent changes
    #[arg(short, long)]
    pub git: bool,

    /// Squeeze consecutive blank lines into one
    #[arg(short, long)]
    pub squeeze: bool,

    /// Show line endings
    #[arg(short = 'e', long = "endings")]
    pub show_line_endings: bool,

    /// Number non-empty input lines (overrides -n)
    #[arg(short = 'b', long)]
    pub numbered_nonblank: bool,

    /// Number all input lines
    #[arg(short, long)]
    pub numbered: bool,

    /// Prints a parsed s-expression, for debugging and theme creation
    #[arg(long)]
    pub dev: bool,

    /// The language to use to parse the files
    #[arg(short, long)]
    pub language: Option<String>,

    /// Soft-wrap lines at a fixed width
    #[arg(short, long)]
    pub wrap: Option<usize>,

    /// Files to parse and print
    #[arg(name = "FILE")]
    pub files: Vec<PathBuf>,

    /// Path to configuration directory. Defaults to your operating system's standard
    /// configuration directories.
    #[arg(short = 'c', long)]
    pub config: Option<PathBuf>,

    #[command(subcommand)]
    pub command: Option<Subcommand>,
}

#[derive(Parser, Debug)]
pub enum Subcommand {
    /// Initialize the config directory by filling it with the default configuration.
    ///
    /// If the config directory already exists, it will not be created. An alternative path
    /// may be specified by providing the `--config` parameter.
    Init,
    /// Installs all languages listed in the `languages.toml` file. Previously installed packages
    /// will be updated, if updates are available. This process may take a long time, depending on
    /// how many languages are being installed.
    Install {
        /// If you provide a list of languages, only only those languages will be installed now. They must
        /// be listed in the `languages.toml` file first.
        languages: Vec<String>,
    },
    /// Remove an installed language.
    Remove {
        /// The name of the language to remove.
        language: String,
    },
    /// List all installed languages.
    List,
}
