use crate::config::stylesheet_existence;
use crate::dirs::libraries;
use crate::language::{Lang, LangMap};
use crate::Subcommand;
use cc::Build;
use std::fs;
use std::process::Command;
use tempdir::TempDir;

include!(concat!(env!("OUT_DIR"), "/targets.rs"));

fn install(name: &str, lang: &Lang) -> Result<(), Box<dyn std::error::Error>> {
    let temp_dir = TempDir::new("syncat")?;
    println!("Installing {}...", name);
    let mut directory = libraries().join(&lang.library);
    if directory.exists() {
        Command::new("git")
            .arg("pull")
            .current_dir(&directory)
            .status()?;
    } else {
        Command::new("git")
            .arg("clone")
            .arg(&lang.source)
            .arg("--recurse") // doubt it's needed, but why not?
            .arg(&lang.library) // make sure we put it in the directory named as expected
            .current_dir(libraries())
            .status()?;
    }
    if let Some(ref path) = lang.path {
        directory = directory.join(path);
    }
    let srcdir = directory.join("src");
    if !srcdir.exists() {
        println!("src directory does not exist... attempting to generate it");
        Command::new("npm")
            .arg("install")
            .current_dir(&directory)
            .status()?;
        Command::new("./node_modules/.bin/tree-sitter")
            .arg("generate")
            .current_dir(&directory)
            .status()?;
    }
    let src_files = fs::read_dir(&srcdir)?
        .filter_map(|entry| entry.ok())
        .map(|entry| entry.path())
        .filter(|path| path.file_stem().unwrap() != "binding") // skip the nodejs binding
        .filter(|path| {
            path.extension()
                // only include C/C++ source files
                .filter(|ext| *ext == "c" || *ext == "cc" || *ext == "cpp")
                .is_some()
        });
    let mut cpp = false;
    for file in src_files {
        Build::new()
            .include(&srcdir)
            .shared_flag(true)
            .pic(true)
            .warnings(false)
            .cpp(if file.extension().unwrap() == "c" {
                false
            } else {
                cpp = true;
                true
            })
            .file(&file)
            // we must manually configure CC because we don't have the scraped ENV variables
            .host(HOST) // these got scraped during the build phase and saved for later.
            .target(TARGET)
            .opt_level(3) // improve the speed of the program
            .out_dir(temp_dir.path())
            .compile("syncat");
    }
    let compiler = Build::new()
        .include(&srcdir)
        .cpp(cpp)
        .shared_flag(true)
        .warnings(false)
        .host(HOST)
        .target(TARGET)
        .opt_level(3)
        .get_compiler();
    if compiler.is_like_gnu() {
        compiler
            .to_command()
            .arg("-o")
            .arg(directory.join("libsyncat.so"))
            .args(
                fs::read_dir(temp_dir.path())?
                    .filter_map(|entry| entry.ok())
                    .map(|entry| entry.path())
                    .filter(|path| path.extension().filter(|ext| *ext == "o").is_some()),
            )
            .status()?;
    } else {
        panic!("This C/C++ compiler is not yet supported");
    }
    Ok(())
}

pub(crate) fn main(opts: &Subcommand) -> anyhow::Result<()> {
    let lang_map = LangMap::open()?;
    if !libraries().exists() {
        fs::create_dir_all(libraries())?;
    }

    match opts {
        Subcommand::Install { languages } => {
            if languages.is_empty() {
                for (name, lang) in &lang_map {
                    if let Err(error) = install(name, lang) {
                        eprintln!("Failed to install {}: {}", name, error);
                    }
                }
            } else {
                for language in languages {
                    match lang_map.get(language) {
                        None => {
                            println!("No language named {} is listed in languages.toml", language);
                        }
                        Some(lang) => {
                            if let Err(error) = install(language, lang) {
                                eprintln!("Failed to install {}: {}", language, error);
                            }
                        }
                    }
                }
            }
        }
        Subcommand::Remove { language } => {
            if let Some(lang) = lang_map.get_strict(language) {
                let directory = libraries().join(&lang.library);
                fs::remove_dir_all(directory)?;
                println!("Language `{}` has been removed", language);
            } else {
                println!("No language `{}` is installed", language);
            }
        }
        Subcommand::List => {
            for (name, lang) in &lang_map {
                let directory = libraries().join(&lang.library);
                let state = if directory.exists() {
                    "installed"
                } else {
                    "not installed"
                };

                use crate::config::Existence::*;
                let (stylesheet, existence) = stylesheet_existence(&lang.name);
                let stylesheet_state = match existence {
                    Configured => " (found)",
                    Builtin => " (default)",
                    None => " (missing)",
                };

                println!("{} ({}):", name, state);
                println!("\t   Source repository: {}", &lang.source);
                println!("\t   Install directory: {}", directory.display());
                println!("\tSupported extensions: {}", lang.extensions.join(", "));
                println!(
                    "\t          Stylesheet: {}{}",
                    stylesheet.display(),
                    stylesheet_state
                );
            }
        }
    }

    Ok(())
}
