use crate::config::Config;
use libloading::{Library, Symbol};
use serde::Deserialize;
use std::borrow::Borrow;
use std::cell::RefCell;
use std::collections::BTreeMap;
use std::fs;
use std::path::{Path, PathBuf};
use syncat_stylesheet::Stylesheet;
use tree_sitter::{Language, Parser};

/// The list of languages, found in `languages.toml` in the config directory.
#[derive(serde::Deserialize, Default)]
#[serde(transparent)]
pub(crate) struct LangMap(BTreeMap<String, Lang>);

impl LangMap {
    pub(crate) fn open(config: &Config) -> crate::Result<Self> {
        match config.read("languages.toml") {
            Ok(string) => Ok(toml::from_str(&string)
                .map_err(|er| crate::Error::new("failed to parse language map").with_source(er))?),
            Err(..) => Ok(LangMap::default()),
        }
    }

    pub(crate) fn get(&self, name: &str) -> Option<&Lang> {
        self.0
            .iter()
            .find(|(key, lang)| *key == name || lang.extensions.iter().any(|i| i == name))
            .map(|(.., lang)| lang)
    }

    pub(crate) fn get_strict<Q>(&self, name: &Q) -> Option<&Lang>
    where
        Q: Eq + Ord,
        String: Borrow<Q>,
    {
        self.0.get(name)
    }
}

impl<'a> IntoIterator for &'a LangMap {
    type Item = <&'a BTreeMap<String, Lang> as IntoIterator>::Item;
    type IntoIter = <&'a BTreeMap<String, Lang> as IntoIterator>::IntoIter;

    fn into_iter(self) -> Self::IntoIter {
        self.0.iter()
    }
}

/// Information about a particular language.
#[derive(Deserialize)]
pub struct Lang {
    /// The URL of the Git repository with the source for this language.
    pub source: String,
    /// Additional arguments to supply to `git clone` when installing this language's repository.
    pub clone_args: Option<Vec<String>>,
    /// Additional arguments to supply to `git clone` when updating this language's repository.
    pub pull_args: Option<Vec<String>>,
    /// The path within the repository to the Tree-Sitter language package.
    pub path: Option<PathBuf>,
    /// The name of the directory that the repository is cloned into.
    ///
    /// This may be a path relative to the languages.toml file, or an absolute
    /// path to any directory.
    pub library: PathBuf,
    /// The name of this language, as will be found in the function within the library.
    /// This can be found by running `nm libsyncat.so`, and is typically the same as the
    /// name found in the `grammar.js` file.
    ///
    /// This is also the name used to locate the stylesheet for this language.
    pub name: String,
    /// The list of file extensions and language tags that should match this language.
    /// Files with these extensions, and `language` entries in stylesheets match against
    /// these.
    pub extensions: Vec<String>,
    /// Additional commands to run before compiling the Tree-Sitter grammar.
    #[serde(default)]
    pub prebuild: Vec<Cmd>,
    #[serde(skip)]
    lib: RefCell<Option<Library>>,
}

#[derive(Deserialize)]
pub struct Cmd {
    /// The command to run
    pub command: String,
    /// Arguments to pass to the command
    #[serde(default)]
    pub args: Vec<String>,
}

impl Lang {
    fn load(&self, config: &Config) -> crate::Result<bool> {
        if self.lib.borrow().is_some() {
            return Ok(true);
        }
        let mut lib_dir = self.library.clone();
        if lib_dir.is_relative() {
            lib_dir = config.libraries().join(lib_dir);
        }
        if let Some(ref path) = self.path {
            lib_dir = lib_dir.join(path);
        }
        if !lib_dir.exists() {
            return Ok(false);
        }
        let lib_name = fs::read_dir(&lib_dir)
            .map_err(|er| {
                crate::Error::new("language directory not found")
                    .with_source(er)
                    .with_path(&lib_dir)
            })?
            .filter_map(|entry| entry.ok())
            .map(|entry| entry.path())
            .find(|path| {
                path.file_stem()
                    .unwrap()
                    .to_str()
                    .filter(|path| path.contains("syncat"))
                    .is_some()
            })
            .ok_or_else(|| crate::Error::new("language is not installed correctly."))?;
        let library = Library::new(lib_name)
            .map_err(|er| crate::Error::new("language could not be loaded").with_source(er))?;
        *self.lib.borrow_mut() = Some(library);
        Ok(true)
    }

    pub(crate) fn parser(&self, config: &Config) -> crate::Result<Option<Parser>> {
        if !self.load(config)? {
            return Ok(None);
        }
        let language = unsafe {
            let borrow = self.lib.borrow();
            let lib = borrow.as_ref().unwrap();
            let get_language: Symbol<unsafe extern "C" fn() -> Language> = lib
                .get(format!("tree_sitter_{}", self.name).as_bytes())
                .map_err(|er| {
                    crate::Error::new(format!(
                        "tree_sitter_{} not found in language library",
                        self.name
                    ))
                    .with_source(er)
                })?;
            get_language()
        };

        let mut parser = Parser::new();
        parser
            .set_language(language)
            .map_err(|er| crate::Error::new("tree sitter").with_source(er))?;
        Ok(Some(parser))
    }

    pub(crate) fn style(&self, config: &Config) -> crate::Result<Stylesheet> {
        config
            .load_stylesheet(Path::new(&self.name).with_extension("syncat"))
            .map(|opt| opt.unwrap_or_default())
    }
}
