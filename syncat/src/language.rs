use tree_sitter::Language;
use std::fs::File;
use syncat_stylesheet::Stylesheet;
use crate::dirs::config;
use crate::error::Error;

include!(concat!(env!("OUT_DIR"), "/languages.rs"));

#[derive(Copy, Clone, Debug)]
pub enum Lang {
    #[cfg(any(lang_all, lang_agda))]               Agda,
    #[cfg(any(lang_all, lang_bash))]               Bash,
    #[cfg(any(lang_all, lang_c))]                  C,
    #[cfg(any(lang_all, lang_clojure))]            Clojure,
    #[cfg(any(lang_all, lang_cpp))]                Cpp,
    #[cfg(any(lang_all, lang_c_sharp))]            CSharp,
    #[cfg(any(lang_all, lang_css))]                Css,
    #[cfg(any(lang_all, lang_embedded_template))]  EmbeddedTemplate,
    #[cfg(any(lang_all, lang_fluent))]             Fluent,
    #[cfg(any(lang_all, lang_go))]                 Go,
    #[cfg(any(lang_all, lang_haskell))]            Haskell,
    #[cfg(any(lang_all, lang_html))]               Html,
    #[cfg(any(lang_all, lang_java))]               Java,
    #[cfg(any(lang_all, lang_javascript))]         JavaScript,
    #[cfg(any(lang_all, lang_jsdoc))]              Jsdoc,
    #[cfg(any(lang_all, lang_json))]               Json,
    #[cfg(any(lang_all, lang_julia))]              Julia,
    #[cfg(any(lang_all, lang_lua))]                Lua,
    #[cfg(any(lang_all, lang_ocaml))]              OCaml,
    #[cfg(any(lang_all, lang_php))]                Php,
    #[cfg(any(lang_all, lang_python))]             Python,
    #[cfg(any(lang_all, lang_regex))]              Regex,
    #[cfg(any(lang_all, lang_ruby))]               Ruby,
    #[cfg(any(lang_all, lang_rust))]               Rust,
    #[cfg(any(lang_all, lang_scala))]              Scala,
    #[cfg(any(lang_all, lang_syncat_stylesheet))]  Syncat,
    #[cfg(any(lang_all, lang_latex))]              Tex,
    #[cfg(any(lang_all, lang_test))]               TreeSitterCorpus,
    #[cfg(any(lang_all, lang_typescript))]         TypeScript,
    #[cfg(any(lang_all, lang_verilog))]            Verilog,
}

impl std::str::FromStr for Lang {
    type Err = crate::BoxedError;

    fn from_str(name: &str) -> Result<Lang, Self::Err> {
        use Lang::*;
        #[cfg(any(lang_all, lang_cpp))] {
            if name.trim() == "C" {
                // this one case sensitive one...
                return Ok(Cpp);
            }
        }
        match name.trim().to_lowercase().as_str() {
            #[cfg(any(lang_all, lang_agda))]               "agda"                              => Ok(Agda),
            #[cfg(any(lang_all, lang_bash))]               "sh" | "bash"                       => Ok(Bash),
            #[cfg(any(lang_all, lang_c))]                  "c" | "h"                           => Ok(C),
            #[cfg(any(lang_all, lang_clojure))]            "clj" | "cljs"                      => Ok(Clojure),
            #[cfg(any(lang_all, lang_cpp))]                "cpp" | "cc" | "hpp" | "hh" | "c++" => Ok(Cpp),
            #[cfg(any(lang_all, lang_c_sharp))]            "cs" | "csharp" | "c#"              => Ok(CSharp),
            #[cfg(any(lang_all, lang_css))]                "css"                               => Ok(Css),
            #[cfg(any(lang_all, lang_embedded_template))]  "erb" | "ejs"                       => Ok(EmbeddedTemplate),
            #[cfg(any(lang_all, lang_fluent))]             "ftl" | "fluent"                    => Ok(Fluent),
            #[cfg(any(lang_all, lang_go))]                 "go"                                => Ok(Go),
            #[cfg(any(lang_all, lang_haskell))]            "hs" | "lhs" | "haskell"            => Ok(Haskell),
            #[cfg(any(lang_all, lang_html))]               "html" | "htm"                      => Ok(Html),
            #[cfg(any(lang_all, lang_java))]               "java"                              => Ok(Java),
            #[cfg(any(lang_all, lang_javascript))]         "js" | "jsx" | "javascript"         => Ok(JavaScript),
            #[cfg(any(lang_all, lang_jsdoc))]              "jsdoc"                             => Ok(Jsdoc),
            #[cfg(any(lang_all, lang_json))]               "json"                              => Ok(Json),
            #[cfg(any(lang_all, lang_julia))]              "jl" | "julia"                      => Ok(Julia),
            #[cfg(any(lang_all, lang_lua))]                "lua"                               => Ok(Lua),
            #[cfg(any(lang_all, lang_ocaml))]              "ml" | "mli" | "ocaml"              => Ok(OCaml),
            #[cfg(any(lang_all, lang_php))]                "php"                               => Ok(Php),
            #[cfg(any(lang_all, lang_python))]             "py" | "python" | "python3"         => Ok(Python),
            #[cfg(any(lang_all, lang_regex))]              "regex"                             => Ok(Regex),
            #[cfg(any(lang_all, lang_ruby))]               "rb" | "ruby"                       => Ok(Ruby),
            #[cfg(any(lang_all, lang_rust))]               "rs" | "rust"                       => Ok(Rust),
            #[cfg(any(lang_all, lang_scala))]              "scala"                             => Ok(Scala),
            #[cfg(any(lang_all, lang_syncat_stylesheet))]  "syncat"                            => Ok(Syncat),
            #[cfg(any(lang_all, lang_latex))]              "tex" | "latex" | "xetex"           => Ok(Tex),
            #[cfg(any(lang_all, lang_test))]               "corpus"                            => Ok(TreeSitterCorpus),
            #[cfg(any(lang_all, lang_typescript))]         "ts" | "tsx" | "typescript"         => Ok(TypeScript),
            #[cfg(any(lang_all, lang_verilog))]            "v" | "verilog"                     => Ok(Verilog),
            _ => Err(Box::new(Error(format!("Unknown language {}", name)))),
        }
    }
}

impl Lang {
    pub fn parser(&self) -> Language {
        use Lang::*;
        unsafe {
            match *self {
                #[cfg(any(lang_all, lang_agda))]               Agda             => tree_sitter_agda(),
                #[cfg(any(lang_all, lang_bash))]               Bash             => tree_sitter_bash(),
                #[cfg(any(lang_all, lang_c))]                  C                => tree_sitter_c(),
                #[cfg(any(lang_all, lang_clojure))]            Clojure          => tree_sitter_clojure(),
                #[cfg(any(lang_all, lang_cpp))]                Cpp              => tree_sitter_cpp(),
                #[cfg(any(lang_all, lang_c_sharp))]            CSharp           => tree_sitter_c_sharp(),
                #[cfg(any(lang_all, lang_css))]                Css              => tree_sitter_css(),
                #[cfg(any(lang_all, lang_embedded_template))]  EmbeddedTemplate => tree_sitter_embedded_template(),
                #[cfg(any(lang_all, lang_go))]                 Go               => tree_sitter_go(),
                #[cfg(any(lang_all, lang_fluent))]             Fluent           => tree_sitter_fluent(),
                #[cfg(any(lang_all, lang_haskell))]            Haskell          => tree_sitter_haskell(),
                #[cfg(any(lang_all, lang_html))]               Html             => tree_sitter_html(),
                #[cfg(any(lang_all, lang_java))]               Java             => tree_sitter_java(),
                #[cfg(any(lang_all, lang_javascript))]         JavaScript       => tree_sitter_javascript(),
                #[cfg(any(lang_all, lang_jsdoc))]              Jsdoc            => tree_sitter_jsdoc(),
                #[cfg(any(lang_all, lang_json))]               Json             => tree_sitter_json(),
                #[cfg(any(lang_all, lang_julia))]              Julia            => tree_sitter_julia(),
                #[cfg(any(lang_all, lang_lua))]                Lua              => tree_sitter_lua(),
                #[cfg(any(lang_all, lang_ocaml))]              OCaml            => tree_sitter_ocaml(),
                #[cfg(any(lang_all, lang_php))]                Php              => tree_sitter_php(),
                #[cfg(any(lang_all, lang_python))]             Python           => tree_sitter_python(),
                #[cfg(any(lang_all, lang_regex))]              Regex            => tree_sitter_regex(),
                #[cfg(any(lang_all, lang_ruby))]               Ruby             => tree_sitter_ruby(),
                #[cfg(any(lang_all, lang_rust))]               Rust             => tree_sitter_rust(),
                #[cfg(any(lang_all, lang_scala))]              Scala            => tree_sitter_scala(),
                #[cfg(any(lang_all, lang_syncat_stylesheet))]  Syncat           => tree_sitter_syncat_stylesheet(),
                #[cfg(any(lang_all, lang_latex))]              Tex              => tree_sitter_latex(),
                #[cfg(any(lang_all, lang_test))]               TreeSitterCorpus => tree_sitter_test(),
                #[cfg(any(lang_all, lang_typescript))]         TypeScript       => tree_sitter_typescript(),
                #[cfg(any(lang_all, lang_verilog))]            Verilog          => tree_sitter_verilog(),
            }
        }
    }

    fn ext(&self) -> &'static str {
        use Lang::*;
        match *self {
            #[cfg(any(lang_all, lang_agda))]               Agda             => "agda",
            #[cfg(any(lang_all, lang_bash))]               Bash             => "sh",
            #[cfg(any(lang_all, lang_c))]                  C                => "c",
            #[cfg(any(lang_all, lang_clojure))]            Clojure          => "clj",
            #[cfg(any(lang_all, lang_cpp))]                Cpp              => "cpp",
            #[cfg(any(lang_all, lang_c_sharp))]            CSharp           => "cs",
            #[cfg(any(lang_all, lang_css))]                Css              => "css",
            #[cfg(any(lang_all, lang_embedded_template))]  EmbeddedTemplate => "template",
            #[cfg(any(lang_all, lang_fluent))]             Fluent           => "ftl",
            #[cfg(any(lang_all, lang_go))]                 Go               => "go",
            #[cfg(any(lang_all, lang_haskell))]            Haskell          => "hs",
            #[cfg(any(lang_all, lang_html))]               Html             => "html",
            #[cfg(any(lang_all, lang_java))]               Java             => "java",
            #[cfg(any(lang_all, lang_javascript))]         JavaScript       => "js",
            #[cfg(any(lang_all, lang_jsdoc))]              Jsdoc            => "jsdoc",
            #[cfg(any(lang_all, lang_json))]               Json             => "json",
            #[cfg(any(lang_all, lang_julia))]              Julia            => "julia",
            #[cfg(any(lang_all, lang_lua))]                Lua              => "lua",
            #[cfg(any(lang_all, lang_ocaml))]              OCaml            => "ml",
            #[cfg(any(lang_all, lang_php))]                Php              => "php",
            #[cfg(any(lang_all, lang_python))]             Python           => "py",
            #[cfg(any(lang_all, lang_regex))]              Regex            => "regex",
            #[cfg(any(lang_all, lang_ruby))]               Ruby             => "rb",
            #[cfg(any(lang_all, lang_rust))]               Rust             => "rs",
            #[cfg(any(lang_all, lang_scala))]              Scala            => "scala",
            #[cfg(any(lang_all, lang_syncat_styleseet))]   Syncat           => "syncat",
            #[cfg(any(lang_all, lang_latex))]              Tex              => "tex",
            #[cfg(any(lang_all, lang_test))]               TreeSitterCorpus => "corpus",
            #[cfg(any(lang_all, lang_typescript))]         TypeScript       => "ts",
            #[cfg(any(lang_all, lang_verilog))]            Verilog          => "v",
        }
    }

    pub fn style(&self) -> Result<Stylesheet, crate::BoxedError> {
        let style_file = config().join("style/active").join(self.ext()).with_extension("syncat");
        if !style_file.exists() {
            return Ok(Stylesheet::default());
        }
        let mut file = File::open(&style_file)
            .map_err(|err| Box::new(Error(format!("Could not open file {:?}: {}", style_file, err))))?;
        Ok(
            Stylesheet::from_reader(&mut file)
                .map_err(|err| Box::new(Error(format!("Could not parse stylesheet at file {:?}: {}", &style_file, err))))?
        )
    }
}
