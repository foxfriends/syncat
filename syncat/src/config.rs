use directories::ProjectDirs;
use std::path::{Component, Path, PathBuf};
use std::{fs, io};
use syncat_stylesheet::Stylesheet;

const DEFAULT_CONFIG: &[u8] = include_bytes!(concat!(env!("OUT_DIR"), "/config.tar"));

#[derive(Eq, PartialEq, Copy, Clone, Debug)]
pub enum Existence {
    Configured,
    Builtin,
    None,
}

fn directories() -> ProjectDirs {
    ProjectDirs::from("com", "cameldridge", "syncat").unwrap()
}

pub struct Config {
    pub base_path: PathBuf,
}

impl Default for Config {
    fn default() -> Self {
        Self {
            base_path: directories().config_dir().to_owned(),
        }
    }
}

impl Config {
    pub fn new(base_path: PathBuf) -> Self {
        Self { base_path }
    }

    pub fn read<P: AsRef<Path>>(&self, file: P) -> crate::Result<String> {
        let path = self.base_path.join(file.as_ref());
        if path.exists() {
            return Ok(fs::read_to_string(&path).map_err(|er| {
                crate::Error::new("could not read config file")
                    .with_source(er)
                    .with_path(path)
            })?);
        }

        let normalized = normalize(file.as_ref());
        let mut config_reader = DEFAULT_CONFIG;
        for entry in tar::Archive::new(&mut config_reader)
            .entries()
            .unwrap()
            .map(Result::unwrap)
        {
            if entry.path().unwrap().as_ref() == normalized {
                return Ok(io::read_to_string(entry).expect("default config should be valid"));
            }
        }
        Err(crate::Error::new("file not found in default configuration"))
    }

    pub fn exists<P: AsRef<Path>>(&self, file: P) -> bool {
        let path = self.base_path.join(file.as_ref());
        if path.exists() {
            return true;
        }

        let mut config_reader = DEFAULT_CONFIG;
        tar::Archive::new(&mut config_reader)
            .entries()
            .unwrap()
            .any(|res| res.unwrap().path().unwrap().as_ref() == file.as_ref())
    }

    pub fn load_stylesheet<P: AsRef<Path>>(&self, file: P) -> crate::Result<Option<Stylesheet>> {
        let active_style = Path::new("style/active").join(&file);
        if self.exists(&active_style) {
            Ok(Some(
                Stylesheet::from_file_with_resolver(&active_style, self).map_err(|er| {
                    crate::Error::new("could not read stylesheet")
                        .with_source(er)
                        .with_path(&active_style)
                })?,
            ))
        } else {
            Ok(None)
        }
    }

    pub fn libraries(&self) -> PathBuf {
        self.base_path.join("languages")
    }

    pub fn stylesheet_exists<P: AsRef<Path>>(&self, file: P) -> (PathBuf, Existence) {
        let active_style = self.base_path.join("style").join("active").join(&file);
        let existence = if active_style.exists() {
            Existence::Configured
        } else if self.exists(Path::new("style/active").join(&file)) {
            Existence::Builtin
        } else {
            Existence::None
        };
        (active_style, existence)
    }

    pub fn dump<P: AsRef<Path>>(&self, file: P) -> crate::Result<()> {
        let mut config_reader = DEFAULT_CONFIG;
        for mut entry in tar::Archive::new(&mut config_reader)
            .entries()
            .unwrap()
            .map(|entry| entry.unwrap())
        {
            let input_path = entry.path().unwrap();
            let output_path = file.as_ref().join(input_path);
            let parent_path = output_path.parent().unwrap();
            if !parent_path.exists() {
                fs::create_dir(parent_path).map_err(|er| {
                    crate::Error::new("failed to unpack directory")
                        .with_source(er)
                        .with_path(parent_path)
                })?;
            }
            let mut file = fs::File::create(&output_path).map_err(|er| {
                crate::Error::new("failed to create file")
                    .with_source(er)
                    .with_path(&output_path)
            })?;
            io::copy(&mut entry, &mut file).map_err(|er| {
                crate::Error::new("failed to write file")
                    .with_source(er)
                    .with_path(&output_path)
            })?;
        }
        Ok(())
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

impl syncat_stylesheet::resolver::Resolver for Config {
    type Error = crate::Error;

    fn read_to_string<P: AsRef<Path>>(&self, path: P) -> Result<String, Self::Error> {
        self.read(path)
    }
}
