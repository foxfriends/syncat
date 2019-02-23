use std::collections::BTreeMap;
use std::path::Path;
use std::fs::{self, File};
use std::io::Write;
use std::ffi::OsString;
use std::process::Command;
use std::env;

use serde::Deserialize;
use regex::Regex;

#[derive(Deserialize)]
#[serde(rename_all="camelCase")]
struct Package {
    dev_dependencies: BTreeMap<String, String>,
    dependencies: BTreeMap<String, String>,
}

fn main() {
    println!("cargo:rerun-if-changed=package.json");
    println!("cargo:rerun-if-changed=package-lock.json");
    println!("cargo:rerun-if-changed=node_modules");

    let out_dir = env::var("OUT_DIR").unwrap();
    let manifest_dir = env::var("CARGO_MANIFEST_DIR").unwrap();

    let languages_path = Path::new(&out_dir).join("languages.rs");
    let node_modules = Path::new(&manifest_dir).join("node_modules");

    let result = Command::new("npm").arg("install").status().expect("Failed to run `npm install`. Do you have npm installed?");
    if !result.success() {
        panic!("Failed to run npm install");
    }

    let grammar_pattern = Regex::new(r"tree-sitter-(.*)").unwrap();
    let data = fs::read_to_string(Path::new(&manifest_dir).join("package.json")).expect("The package.json cannot be read");
    let package: Package = serde_json::from_str(&data).expect("The package.json is invalid.");
    let mut output_list = File::create(&languages_path).unwrap();
    for (package_name, _version) in package.dependencies.into_iter() {
        if let Some(captures) = grammar_pattern.captures(&package_name) {
            let language = captures.get(1).unwrap().as_str();
            writeln!(output_list, "extern \"C\" {{ fn tree_sitter_{}() -> Language; }}", language.replace("-", "_")).unwrap();

            let node_module = Path::new(&node_modules).join(&format!("tree-sitter-{}/src", language));
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
