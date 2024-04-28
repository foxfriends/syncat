use crate::config::Config;
use crate::language::{Lang, LangMap};
use crate::opts::{Opts, Subcommand};
use cc::Build;
use std::fs;
use std::process::Command;
use tempdir::TempDir;

// HOST and TARGET constants were scraped at compile time and injected here:
include!(concat!(env!("OUT_DIR"), "/targets.rs"));

struct Installer<'a> {
    config: &'a Config,
    name: &'a str,
    lang: &'a Lang,
}

const HELP: &str = concat!(
    "Managed installation of languages may require a compatible C/C++ compiler, git, or npm. ",
    "If any required dependency could not be found automatically, install it and try again.",
);

impl Installer<'_> {
    fn try_command(&self, cmd: &mut Command) -> crate::Result<()> {
        let success = cmd
            .status()
            .map_err(|er| self.error().with_source(er).with_hint(HELP))?
            .success();
        if success {
            Ok(())
        } else {
            Err(self.error_msg("subcommand exited with non-zero status code"))
        }
    }

    fn error(&self) -> crate::Error {
        crate::Error::new(format!("failed to install {}", self.name))
    }

    fn error_msg(&self, msg: &str) -> crate::Error {
        crate::Error::new(crate::Error::new(format!(
            "failed to install {}: {}",
            &self.name, msg
        )))
    }

    fn install(&self) -> crate::Result<()> {
        let temp_dir = TempDir::new("syncat").map_err(|er| self.error().with_source(er))?;
        eprintln!("Installing {}...", &self.name);

        let mut directory = self.config.libraries().join(&self.lang.library);
        if directory.is_relative() {
            directory = std::env::current_dir()
                .map_err(|err| {
                    crate::Error::new(format!("could not access current directory: {err}"))
                })?
                .join(directory);
        }
        if directory.exists() {
            self.try_command(Command::new("git").arg("pull").current_dir(&directory))?;
        } else {
            self.try_command(
                Command::new("git")
                    .arg("clone")
                    .arg(&self.lang.source)
                    .arg("--recurse") // doubt it's needed, but why not?
                    .arg(&self.lang.library) // make sure we put it in the directory named as expected
                    .current_dir(self.config.libraries()),
            )?;
        }
        if let Some(ref path) = &self.lang.path {
            directory = directory.join(path);
        }
        let srcdir = directory.join("src");
        if !srcdir.exists() {
            eprintln!("src directory does not exist... attempting to generate it");
            self.try_command(Command::new("npm").arg("install").current_dir(&directory))?;
            self.try_command(
                Command::new("./node_modules/.bin/tree-sitter")
                    .arg("generate")
                    .current_dir(&directory),
            )?;
        }

        for cmd in &self.lang.prebuild {
            self.try_command(
                Command::new(&cmd.command)
                    .args(&cmd.args)
                    .current_dir(&directory),
            )?;
        }

        let src_files = fs::read_dir(&srcdir)
            .map_err(|er| {
                self.error_msg("could not read src directory of cloned repository")
                    .with_source(er)
                    .with_path(&srcdir)
            })?
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
        if compiler.is_like_gnu() || compiler.is_like_clang() {
            self.try_command(
                compiler
                    .to_command()
                    .arg("-o")
                    .arg(directory.join("libsyncat.so"))
                    .args(
                        fs::read_dir(temp_dir.path())
                            .map_err(|er| {
                                self.error_msg("temp directory not found")
                                    .with_path(&temp_dir)
                                    .with_source(er)
                            })?
                            .filter_map(|entry| entry.ok())
                            .map(|entry| entry.path())
                            .filter(|path| path.extension().filter(|ext| *ext == "o").is_some()),
                    ),
            )?;
            Ok(())
        } else {
            Err(self.error_msg("detected C/C++ compiler is not yet supported"))
        }
    }
}

fn install(config: &Config, name: &str, lang: &Lang) -> crate::Result<()> {
    Installer { config, name, lang }.install()
}

pub(crate) fn main(opts: &Opts, command: &Subcommand) -> crate::Result<()> {
    let config = opts.config.clone().map(Config::new).unwrap_or_default();
    let lang_map = LangMap::open(&config)?;

    match command {
        Subcommand::Init => {
            if config.base_path.exists() {
                eprintln!(
                    "syncat: {}: configuration directory already exists, will not overwrite",
                    config.base_path.display()
                );
                std::process::exit(1);
            }
            fs::create_dir_all(&config.base_path).map_err(|er| {
                crate::Error::new("failed to create config directory")
                    .with_source(er)
                    .with_path(&config.base_path)
                    .with_hint("ensure you have adequate permissions to create the new directory and try again")
            })?;
            config.dump(&config.base_path)?;
        }
        Subcommand::Install { languages } => {
            let mut any_errors = false;
            if !config.libraries().exists() {
                // Don't really care about this error, it's a sketchy side effect anyway.
                fs::create_dir_all(config.libraries()).ok();
            }
            if languages.is_empty() {
                for (name, lang) in &lang_map {
                    if let Err(error) = install(&config, name, lang) {
                        any_errors = true;
                        eprintln!("{}", error);
                    }
                }
            } else {
                for language in languages {
                    match lang_map.get(language) {
                        None => {
                            any_errors = true;
                            eprintln!(
                                "syncat: language named {} is not listed in languages.toml",
                                language
                            );
                        }
                        Some(lang) => {
                            if let Err(error) = install(&config, language, lang) {
                                any_errors = true;
                                eprintln!("{}", error);
                            }
                        }
                    }
                }
            }
            if any_errors {
                std::process::exit(1);
            }
        }
        Subcommand::Remove { language } => {
            if let Some(lang) = lang_map.get_strict(language) {
                let directory = config.libraries().join(&lang.library);
                fs::remove_dir_all(&directory).map_err(|er| {
                    crate::Error::new("failed to remove language")
                        .with_source(er)
                        .with_path(&directory)
                })?;
                eprintln!("Language `{}` has been removed", language);
            } else {
                eprintln!("No language `{}` is installed", language);
                std::process::exit(1);
            }
        }
        Subcommand::List => {
            for (name, lang) in &lang_map {
                let directory = config.libraries().join(&lang.library);
                let state = if directory.exists() {
                    "installed"
                } else {
                    "not installed"
                };

                use crate::config::Existence::*;
                let (stylesheet, existence) = config.stylesheet_exists(&lang.name);
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
