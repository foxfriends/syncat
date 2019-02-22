use tree_sitter::Language;

include!(concat!(env!("OUT_DIR"), "/languages.rs"));

pub fn parse<I: AsRef<str>>(name: I) -> Option<Language> {
    let name = name.as_ref();
    unsafe {
        match name.trim().to_lowercase().as_str() {
            "rs" | "rust" => Some(tree_sitter_rust()),
            "js" | "javascript" => Some(tree_sitter_javascript()),
            "sh" | "bash" => Some(tree_sitter_bash()),
            _ => None
        }
    }
}
