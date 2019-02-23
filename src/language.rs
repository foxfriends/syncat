use tree_sitter::{Language, Parser};
use std::fs;
use crate::stylesheet::Stylesheet;
use crate::dirs::config;
use crate::error::Error;

include!(concat!(env!("OUT_DIR"), "/languages.rs"));

#[derive(Copy, Clone)]
pub enum Lang {
    C,
    Cpp,
    Rust,
    Ruby,
    EmbeddedTemplate,
    TypeScript,
    JavaScript,
    Bash,
    Python,
    Go,
    Php,
    OCaml,
    Html,
    Css,
    Syncat,
}

impl std::str::FromStr for Lang {
    type Err = Box<dyn std::error::Error>;

    fn from_str(name: &str) -> Result<Lang, Self::Err> {
        use Lang::*;
        if name.trim() == "C" {
            // this one case sensitive one...
            return Ok(Cpp);
        }
        match name.trim().to_lowercase().as_str() {
            "rs" | "rust"                       => Ok(Rust),
            "rb" | "ruby"                       => Ok(Ruby),
            "erb" | "ejs"                       => Ok(EmbeddedTemplate),
            "js" | "javascript"                 => Ok(JavaScript),
            "ts" | "typescript"                 => Ok(TypeScript),
            "sh" | "bash"                       => Ok(Bash),
            "py" | "python" | "python3"         => Ok(Python),
            "go"                                => Ok(Go),
            "php"                               => Ok(Php),
            "ml" | "mli" | "ocaml"              => Ok(OCaml),
            "c" | "h"                           => Ok(C),
            "cpp" | "cc" | "hpp" | "hh" | "c++" => Ok(Cpp),
            "html" | "htm"                      => Ok(Html),
            "css"                               => Ok(Css),
            "syncat"                            => Ok(Syncat),
            _                                   => Err(Box::new(Error(format!("Unknown language {}", name)))),
        }
    }
}

impl Lang {
    pub fn parser(&self) -> Language {
        use Lang::*;
        unsafe {
            match *self {
                C                => tree_sitter_c(),
                Cpp              => tree_sitter_cpp(),
                Rust             => tree_sitter_rust(),
                Ruby             => tree_sitter_ruby(),
                EmbeddedTemplate => tree_sitter_embedded_template(),
                TypeScript       => tree_sitter_typescript(),
                JavaScript       => tree_sitter_javascript(),
                Bash             => tree_sitter_bash(),
                Python           => tree_sitter_python(),
                Go               => tree_sitter_go(),
                Php              => tree_sitter_php(),
                OCaml            => tree_sitter_ocaml(),
                Html             => tree_sitter_html(),
                Css              => tree_sitter_css(),
                Syncat           => tree_sitter_syncat_stylesheet(),
            }
        }
    }

    fn ext(&self) -> &'static str {
        use Lang::*;
        match *self {
            C                => "c",
            Cpp              => "cpp",
            Rust             => "rs",
            Ruby             => "rb",
            EmbeddedTemplate => "template",
            TypeScript       => "ts",
            JavaScript       => "js",
            Bash             => "sh",
            Python           => "py",
            Go               => "go",
            Php              => "php",
            OCaml            => "ml",
            Html             => "html",
            Css              => "css",
            Syncat           => "syncat",
        }
    }

    pub fn style(&self) -> Result<Stylesheet, Box<dyn std::error::Error>> {
        let mut parser = Parser::new();
        parser.set_language(Lang::Syncat.parser()).unwrap();
        let style_file = config().join(self.ext()).with_extension("syncat");
        if !style_file.exists() {
            return Err(Box::new(Error(format!("Stylesheet file {:?} does not exist", style_file))));
        }
        let style_def = fs::read_to_string(&style_file).map_err(Box::new)?;
        let tree = parser.parse(&style_def, None).ok_or(Box::new(Error(format!("Could not parse stylesheet at file {:?}", &style_file))))?;
        Stylesheet::parse(&style_def, tree)
    }
}
