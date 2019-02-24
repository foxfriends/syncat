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
    CSharp,
    Rust,
    Ruby,
    EmbeddedTemplate,
    TypeScript,
    JavaScript,
    Json,
    Bash,
    Python,
    Go,
    Php,
    OCaml,
    Html,
    Css,
    Java,
    Scala,
    Agda,
    Regex,
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
            "agda"                              => Ok(Agda),
            "rs" | "rust"                       => Ok(Rust),
            "rb" | "ruby"                       => Ok(Ruby),
            "cs" | "csharp" | "c#"              => Ok(CSharp),
            "erb" | "ejs"                       => Ok(EmbeddedTemplate),
            "js" | "javascript"                 => Ok(JavaScript),
            "json"                              => Ok(Json),
            "ts" | "typescript"                 => Ok(TypeScript),
            "sh" | "bash"                       => Ok(Bash),
            "py" | "python" | "python3"         => Ok(Python),
            "go"                                => Ok(Go),
            "php"                               => Ok(Php),
            "ml" | "mli" | "ocaml"              => Ok(OCaml),
            "c" | "h"                           => Ok(C),
            "cpp" | "cc" | "hpp" | "hh" | "c++" => Ok(Cpp),
            "html" | "htm"                      => Ok(Html),
            "java"                              => Ok(Java),
            "scala"                             => Ok(Scala),
            "css"                               => Ok(Css),
            "regex"                             => Ok(Regex),
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
                Agda             => tree_sitter_agda(),
                C                => tree_sitter_c(),
                Cpp              => tree_sitter_cpp(),
                CSharp           => tree_sitter_c_sharp(),
                Rust             => tree_sitter_rust(),
                Ruby             => tree_sitter_ruby(),
                EmbeddedTemplate => tree_sitter_embedded_template(),
                TypeScript       => tree_sitter_typescript(),
                JavaScript       => tree_sitter_javascript(),
                Json             => tree_sitter_json(),
                Bash             => tree_sitter_bash(),
                Python           => tree_sitter_python(),
                Go               => tree_sitter_go(),
                Php              => tree_sitter_php(),
                OCaml            => tree_sitter_ocaml(),
                Html             => tree_sitter_html(),
                Css              => tree_sitter_css(),
                Java             => tree_sitter_java(),
                Scala            => tree_sitter_scala(),
                Regex            => tree_sitter_regex(),
                Syncat           => tree_sitter_syncat_stylesheet(),
            }
        }
    }

    fn ext(&self) -> &'static str {
        use Lang::*;
        match *self {
            Agda             => "agda",
            C                => "c",
            Cpp              => "cpp",
            CSharp           => "cs",
            Rust             => "rs",
            Ruby             => "rb",
            EmbeddedTemplate => "template",
            TypeScript       => "ts",
            JavaScript       => "js",
            Json             => "json",
            Bash             => "sh",
            Python           => "py",
            Go               => "go",
            Php              => "php",
            OCaml            => "ml",
            Html             => "html",
            Css              => "css",
            Java             => "java",
            Scala            => "scala",
            Regex            => "regex",
            Syncat           => "syncat",
        }
    }

    pub fn style(&self) -> Result<Stylesheet, Box<dyn std::error::Error>> {
        let mut parser = Parser::new();
        parser.set_language(Lang::Syncat.parser()).unwrap();
        let style_file = config().join("style/active").join(self.ext()).with_extension("syncat");
        if !style_file.exists() {
            return Ok(Stylesheet::default());
        }
        let style_def = fs::read_to_string(&style_file).map_err(Box::new)?;
        let tree = parser.parse(&style_def, None).ok_or(Box::new(Error(format!("Could not parse stylesheet at file {:?}", &style_file))))?;
        Stylesheet::parse(&style_def, tree)
    }
}
