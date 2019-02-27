use std::collections::BTreeMap;
use std::path::Path;
use std::fs::{self, File};
use std::io::Write;
use std::ffi::OsString;
use std::env;

use serde::Deserialize;

/// The nodejs package.json file
#[derive(Deserialize)]
#[serde(rename_all="camelCase")]
struct Package {
    dependencies: BTreeMap<String, String>,
}

fn main() {
    println!("cargo:rerun-if-changed=package.json");
    println!("cargo:rerun-if-changed=package-lock.json");
    println!("cargo:rerun-if-changed=node_modules");
    println!("cargo:rerun-if-changed=tree-sitter-syncat-stylesheet");

    let out_dir = env::var("OUT_DIR").unwrap();
    let languages_path = Path::new(&out_dir).join("languages.rs");

    let manifest_dir = env::var("CARGO_MANIFEST_DIR").unwrap();
    let package_json = Path::new(&manifest_dir).join("package.json");
    let node_modules = Path::new(&manifest_dir).join("node_modules");
    let stylesheet_syntax = Path::new(&manifest_dir).join("tree-sitter-syncat-stylesheet/src");

    let data = fs::read_to_string(&package_json).expect("The package.json cannot be read");
    let package = serde_json::from_str::<Package>(&data).expect("The package.json is invalid.");

    let mut output_list = File::create(&languages_path).unwrap();
    package
        .dependencies
        .into_iter()
        .map(|(package_name, _)| package_name)
        .map(|package_name| (Path::new(&node_modules).join(&format!("{}/src", package_name)), package_name))
        .chain(vec![(stylesheet_syntax, "tree-sitter-syncat-stylesheet".to_string())])
        .for_each(move |(path, package)| {
            writeln!(output_list, "extern \"C\" {{ fn {}() -> Language; }}", package.replace("-", "_")).unwrap();

            for file in fs::read_dir(&path).expect(&format!("Package {} is not found at {:?}", package, path)) {
                // each file is meant to be built individually and linked
                let mut build = cc::Build::new();
                match file {
                    Ok(file) => {
                        if file.path().file_name() == Some(&OsString::from("binding.cc")) {
                            // we don't want the C++ binding
                            continue;
                        }
                        if file.path().extension() == Some(&OsString::from("c")) {
                            build.file(file.path());
                        } else if file.path().extension() == Some(&OsString::from("cc")) {
                            build.cpp(true).file(file.path());
                        }
                        build
                            .include(&path)
                            .compile(&format!("{}-{}", package, file.path().file_stem().unwrap().to_str().unwrap()));
                    }
                    Err(..) => {}
                }
            }
        })
}
