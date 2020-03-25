use crate::dirs::{active_color, config, libraries};
use libloading::{Library, Symbol};
use std::borrow::Borrow;
use std::collections::BTreeMap;
use std::fs;
use syncat_stylesheet::Stylesheet;
use tree_sitter::Language;

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

#[derive(serde::Deserialize)]
pub struct Lang {
    pub source: String,
    pub library: String,
    pub name: String,
    pub extensions: Vec<String>,
}

impl Lang {
    pub fn parser(&self) -> Result<Language, Box<dyn std::error::Error>> {
        let lib_dir = libraries().join(&self.library);
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
        let lib = Library::new(lib_dir.join(lib_name))?;
        println!("tree_sitter_{}", self.name);
        unsafe {
            let get_parser: Symbol<unsafe extern "C" fn() -> Language> =
                lib.get(format!("tree_sitter_{}", self.name).as_bytes())?;
            Ok(get_parser())
        }
    }

    pub fn style(&self) -> syncat_stylesheet::Result<Stylesheet> {
        let style_file = active_color()
            .join(&self.extensions[0])
            .with_extension("syncat");
        if style_file.exists() {
            Ok(Stylesheet::from_file(style_file)?)
        } else {
            Ok(Stylesheet::default())
        }
    }
}
