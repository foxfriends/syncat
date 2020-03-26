use crate::dirs::{active_color, config, libraries};
use libloading::{Library, Symbol};
use std::borrow::Borrow;
use std::cell::RefCell;
use std::collections::BTreeMap;
use std::fs;
use std::path::PathBuf;
use syncat_stylesheet::Stylesheet;
use tree_sitter::Language;

/// The list of languages, found in `languages.toml` in the config directory.
#[derive(serde::Deserialize, Default)]
#[serde(transparent)]
pub struct LangMap(BTreeMap<String, Lang>);

impl LangMap {
    pub fn open() -> Result<Self, Box<dyn std::error::Error>> {
        match fs::read_to_string(config().join("languages.toml")) {
            Ok(string) => Ok(toml::from_str(&string)?),
            Err(..) => Ok(LangMap::default()),
        }
    }

    pub fn get(&self, name: &str) -> Option<&Lang> {
        self.0
            .iter()
            .find(|(key, lang)| *key == name || lang.extensions.iter().any(|i| i == name))
            .map(|(.., lang)| lang)
    }

    pub fn get_strict<Q>(&self, name: &Q) -> Option<&Lang>
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
        (&self.0).iter()
    }
}

/// Information about a particular language.
#[derive(serde::Deserialize)]
pub struct Lang {
    /// The URL of the Git repository with the source for this language.
    pub source: String,
    /// The path within the repository to the Tree-Sitter language package.
    pub path: Option<PathBuf>,
    /// The name of the directory that the repository is cloned into.
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
    #[serde(skip)]
    lib: RefCell<Option<Library>>,
}

impl Lang {
    fn load(&self) -> Result<(), Box<dyn std::error::Error>> {
        if self.lib.borrow().is_some() {
            return Ok(());
        }
        let mut lib_dir = libraries().join(&self.library);
        if let Some(ref path) = self.path {
            lib_dir = lib_dir.join(path);
        }
        let lib_name = fs::read_dir(&lib_dir)?
            .filter_map(|entry| entry.ok())
            .map(|entry| entry.path())
            .find(|path| {
                path.file_stem()
                    .unwrap()
                    .to_str()
                    .filter(|path| path.contains("syncat"))
                    .is_some()
            })
            .expect("Language is not installed correctly.");
        let library = Library::new(lib_dir.join(lib_name))?;
        *self.lib.borrow_mut() = Some(library);
        Ok(())
    }

    pub fn parser(&self) -> Result<Language, Box<dyn std::error::Error>> {
        self.load()?;
        unsafe {
            let borrow = self.lib.borrow();
            let lib = borrow.as_ref().unwrap();
            let get_parser: Symbol<unsafe extern "C" fn() -> Language> =
                lib.get(format!("tree_sitter_{}", self.name).as_bytes())?;
            Ok(get_parser())
        }
    }

    pub fn style(&self) -> syncat_stylesheet::Result<Stylesheet> {
        let style_file = active_color().join(&self.name).with_extension("syncat");
        if style_file.exists() {
            Ok(Stylesheet::from_file(style_file)?)
        } else {
            Ok(Stylesheet::default())
        }
    }
}
