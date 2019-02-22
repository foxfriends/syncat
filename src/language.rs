use tree_sitter::Language;

include!(concat!(env!("OUT_DIR"), "/languages.rs"));

pub fn parse<I: AsRef<str>>(name: I) -> Option<Language> {
    let name = name.as_ref();
    unsafe {
        if name.trim() == "C" {
            // this one case sensitive one...
            return Some(tree_sitter_cpp())
        }
        match name.trim().to_lowercase().as_str() {
            "rs" | "rust" => Some(tree_sitter_rust()),
            "rb" | "ruby" => Some(tree_sitter_ruby()),
            "erb" | "ejs" => Some(tree_sitter_embedded_template()),
            "js" | "javascript" => Some(tree_sitter_javascript()),
            "ts" | "typescript" => Some(tree_sitter_typescript()),
            "sh" | "bash" => Some(tree_sitter_bash()),
            "py" | "python" | "python3" => Some(tree_sitter_python()),
            "go" => Some(tree_sitter_go()),
            "php" => Some(tree_sitter_php()),
            "ml" | "mli" | "ocaml" => Some(tree_sitter_ocaml()),
            "c" | "h" => Some(tree_sitter_c()),
            "cpp" | "cc" | "hpp" | "hh" | "c++" => Some(tree_sitter_cpp()),
            "html" => Some(tree_sitter_html()),
            "css" => Some(tree_sitter_css()),
            _ => None
        }
    }
}
