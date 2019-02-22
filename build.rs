use std::collections::BTreeMap;
use std::path::Path;
use std::fs::{self, File};
use std::io::Write;
use std::ffi::OsString;
use std::env;

use serde::Deserialize;
use regex::Regex;

#[derive(Deserialize)]
#[serde(rename_all="camelCase")]
struct Package {
    dev_dependencies: BTreeMap<String, String>,
}

fn main() {
    let out_dir = env::var("OUT_DIR").unwrap();
    let manifest_dir = env::var("CARGO_MANIFEST_DIR").unwrap();
    let languages_path = Path::new(&out_dir).join("languages.rs");
    let mut output_list = File::create(&languages_path).unwrap();

    let grammar_pattern = Regex::new(r"tree-sitter-(\w+)").unwrap();
    let data = fs::read_to_string("package.json").expect("The package.json cannot be read");
    let package: Package = serde_json::from_str(&data).expect("The package.json is invalid.");
    for (package_name, _version) in package.dev_dependencies.into_iter() {
        if let Some(captures) = grammar_pattern.captures(&package_name) {
            let language = captures.get(1).unwrap().as_str();
            writeln!(output_list, "extern \"C\" {{ fn tree_sitter_{}() -> Language; }}", language).unwrap();

            let node_module = Path::new(&manifest_dir).join(&format!("node_modules/tree-sitter-{}/src", language));
            for file in fs::read_dir(&node_module).expect("Node modules are not installed") {
                let mut build = cc::Build::new();
                match file {
                    Ok(file) => {
                        if file.path().file_name() == Some(&OsString::from("binding.cc")) {
                            continue;
                        }
                        if file.path().extension() == Some(&OsString::from("c")) {
                            build.file(file.path());
                        } else if file.path().extension() == Some(&OsString::from("cc")) {
                            build.cpp(true).file(file.path());
                        }
                        build
                            .include(&node_module)
                            .compile(&format!("{}-{}", language, file.path().file_stem().unwrap().to_str().unwrap()));
                    }
                    Err(..) => continue,
                }
            }
        }
    }
}
