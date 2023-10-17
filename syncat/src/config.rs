use syncat_stylesheet::Stylesheet;

use crate::dirs::{active_color, config};
use std::fmt::{self, Display};
use std::path::{Component, Path, PathBuf};
use std::{fs, io};

const DEFAULT_CONFIG: &[u8] = include_bytes!(concat!(env!("OUT_DIR"), "/config.tar"));

#[derive(Debug)]
pub struct ConfigError {
    message: &'static str,
    cause: Option<Box<dyn std::error::Error + 'static>>,
}

impl Display for ConfigError {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match &self.cause {
            Some(cause) => cause.fmt(f),
            None => self.message.fmt(f),
        }
    }
}

impl std::error::Error for ConfigError {
    fn source(&self) -> Option<&(dyn std::error::Error + 'static)> {
        self.cause.as_deref()
    }
}

impl From<std::io::Error> for ConfigError {
    fn from(value: std::io::Error) -> Self {
        Self {
            message: "IO Error",
            cause: Some(Box::new(value)),
        }
    }
}

impl From<syncat_stylesheet::Error> for ConfigError {
    fn from(value: syncat_stylesheet::Error) -> Self {
        Self {
            message: "Stylesheet Error",
            cause: Some(Box::new(value)),
        }
    }
}

fn normalize(path: &Path) -> PathBuf {
    let mut components = vec![];
    for component in path.components() {
        match component {
            Component::CurDir => {}
            Component::ParentDir => {
                components.pop();
            }
            Component::Normal(seg) => components.push(seg),
            Component::RootDir => unreachable!("rootdir: should not happen..."),
            Component::Prefix(..) => unreachable!("prefix: should not happen..."),
        }
    }
    components.into_iter().collect()
}

fn read_config<P: AsRef<Path>>(file: P) -> Result<String, ConfigError> {
    let normalized = normalize(file.as_ref());
    let mut config_reader = DEFAULT_CONFIG;
    for entry in tar::Archive::new(&mut config_reader).entries().unwrap() {
        let entry = entry?;
        if entry.path().unwrap().as_ref() == normalized {
            return Ok(io::read_to_string(entry)?);
        }
    }
    Err(ConfigError {
        message: "file not found in default configuration",
        cause: None,
    })
}

fn config_exists<P: AsRef<Path>>(file: P) -> bool {
    let mut config_reader = DEFAULT_CONFIG;
    tar::Archive::new(&mut config_reader)
        .entries()
        .unwrap()
        .any(|res| res.unwrap().path().unwrap().as_ref() == file.as_ref())
}

pub fn read_to_string<P: AsRef<Path>>(file: P) -> Result<String, ConfigError> {
    if config().join(&file).exists() {
        Ok(fs::read_to_string(config().join(file))?)
    } else {
        read_config(file)
    }
}

pub fn load_stylesheet<P: AsRef<Path>>(file: P) -> Result<Option<Stylesheet>, ConfigError> {
    if active_color().join(&file).exists() {
        Ok(Some(Stylesheet::from_file(active_color().join(&file))?))
    } else if !config_exists(Path::new("style/active").join(&file)) {
        Ok(None)
    } else {
        Ok(Some(Stylesheet::from_file_with_resolver(
            Path::new("style/active").join(file),
            &ConstResolver,
        )?))
    }
}

struct ConstResolver;

impl syncat_stylesheet::resolver::Resolver for ConstResolver {
    type Error = ConfigError;

    fn read_to_string<P: AsRef<Path>>(&self, path: P) -> Result<String, Self::Error> {
        read_config(path)
    }
}
