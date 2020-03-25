use crate::{
    dirs::{active_color, libraries},
    language::LangMap,
    Subcommand,
};
use cc::Build;
use std::fs;
use std::process::Command;

include!(concat!(env!("OUT_DIR"), "/targets.rs"));

macro_rules! try_continue {
    ($arg:expr) => {
        match $arg {
            Ok(value) => value,
            Err(err) => {
                eprintln!("Failed to install: {}", err);
                continue;
            }
        }
    };
}

macro_rules! try_continue_cmd {
    ($arg:expr) => {
        match $arg {
            Ok(status) if status.success() => {}
            Ok(status) => {
                if let Some(code) = status.code() {
                    eprintln!("Failed to install: non-zero exit code {}", code);
                } else {
                    eprintln!("Failed to install: process terminated");
                }
                continue;
            }
            Err(err) => {
                eprintln!("Failed to install: {}", err);
                continue;
            }
        }
    };
}

pub(crate) fn main(opts: &Subcommand) -> Result<(), Box<dyn std::error::Error>> {
    let lang_map = LangMap::open()?;
    if !libraries().exists() {
        fs::create_dir_all(libraries())?;
    }

    match opts {
        &Subcommand::Install { recommended } => {
            if recommended {
                println!("TODO: implement the recommended list");
            }
            for (name, lang) in &lang_map {
                println!("Installing {}...", name);
                let directory = libraries().join(&lang.library);
                if directory.exists() {
                    try_continue_cmd!(Command::new("git")
                        .arg("pull")
                        .current_dir(&directory)
                        .status());
                } else {
                    try_continue_cmd!(Command::new("git")
                        .arg("clone")
                        .arg(&lang.source)
                        .arg("--recurse") // doubt it's needed, but why not?
                        .current_dir(libraries())
                        .status());
                }
                let srcdir = directory.join("src");
                let mut build = Build::new();
                build
                    .include(&srcdir)
                    .shared_flag(true)
                    .pic(true)
                    .warnings(false)
                    .files(
                        try_continue!(fs::read_dir(&srcdir))
                            .filter_map(|entry| entry.ok())
                            .map(|entry| entry.path())
                            .filter(|path| path.file_stem().unwrap() != "binding") // skip the nodejs binding
                            .filter(|path| {
                                path.extension()
                                    // only include C/C++ source files
                                    .filter(|ext| *ext == "c" || *ext == "cc")
                                    .is_some()
                            }),
                    )
                    // we must manually configure CC because we don't have the scraped ENV variables
                    .host(HOST) // these got scraped during the build phase and saved for later.
                    .target(TARGET)
                    .opt_level(3) // improve the speed of the program
                    .out_dir(&directory)
                    .compile("syncat");
                let generated_file = try_continue!(fs::read_dir(&directory))
                    .filter_map(|entry| entry.ok())
                    .map(|entry| entry.path())
                    .filter(|path| path.file_stem().is_some())
                    .find(|path| {
                        path.file_stem()
                            .unwrap()
                            .to_str()
                            .filter(|s| s.contains("syncat"))
                            .is_some()
                    });
                let generated_file = match generated_file {
                    Some(file) => file,
                    None => {
                        eprintln!("Failed to install: compilation was not successful");
                        continue;
                    }
                };
                fs::remove_file(generated_file).ok(); // we don't need the .a file
                let compiler = build.get_compiler();
                if compiler.is_like_gnu() {
                    try_continue_cmd!(compiler
                        .to_command()
                        .arg("-o")
                        .arg(directory.join("libsyncat.so"))
                        .args(
                            try_continue!(fs::read_dir(&srcdir))
                                .filter_map(|entry| entry.ok())
                                .map(|entry| entry.path())
                                .filter(|path| path
                                    .extension()
                                    .filter(|ext| *ext == "o")
                                    .is_some()),
                        )
                        .status());
                } else {
                    panic!("This C/C++ compiler is not yet supported");
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
                let stylesheet = active_color().join(&lang.name);
                let state = if directory.exists() {
                    "installed"
                } else {
                    "not installed"
                };
                let stylesheet_state = if !stylesheet.exists() {
                    " (missing)"
                } else {
                    ""
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
