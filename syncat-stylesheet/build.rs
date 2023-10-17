use std::env;
use std::ffi::OsString;
use std::fs;
use std::path::Path;

fn main() {
    println!("cargo:rerun-if-changed=./node_modules/tree-sitter-syncat-stylesheet");

    let manifest_dir = env::var("CARGO_MANIFEST_DIR").unwrap();
    let path = Path::new(&manifest_dir).join("./node_modules/tree-sitter-syncat-stylesheet/src");
    let package = "tree-sitter-syncat-stylesheet".to_string();

    for file in fs::read_dir(&path)
        .unwrap_or_else(|_| panic!("Package {} is not found at {:?}", package, path))
    {
        // each file is meant to be built individually and linked
        let mut build = cc::Build::new();
        if let Ok(file) = file {
            if file.path().is_dir() {
                continue;
            }
            if file.path().file_name() == Some(&OsString::from("binding.cc")) {
                // we don't want the C++ binding
                continue;
            }
            if file.path().extension() == Some(&OsString::from("c")) {
                build.file(file.path());
            } else if file.path().extension() == Some(&OsString::from("cc")) {
                build.cpp(true).file(file.path());
            } else {
                continue;
            }
            build.include(&path).warnings(false).compile(&format!(
                "{}-{}",
                package,
                file.path().file_stem().unwrap().to_str().unwrap()
            ));
        }
    }
}
