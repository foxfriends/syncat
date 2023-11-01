use crate::dirs::{active_color, config};
use std::path::{Component, Path, PathBuf};
use std::{fs, io};
use syncat_stylesheet::Stylesheet;

const DEFAULT_CONFIG: &[u8] = include_bytes!(concat!(env!("OUT_DIR"), "/config.tar"));

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

fn read_config<P: AsRef<Path>>(file: P) -> crate::Result<String> {
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

fn config_exists<P: AsRef<Path>>(file: P) -> bool {
    let mut config_reader = DEFAULT_CONFIG;
    tar::Archive::new(&mut config_reader)
        .entries()
        .unwrap()
        .any(|res| res.unwrap().path().unwrap().as_ref() == file.as_ref())
}

pub(crate) fn dump_config<P: AsRef<Path>>(file: P) -> crate::Result<()> {
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

pub(crate) fn read_to_string<P: AsRef<Path>>(file: P) -> crate::Result<String> {
    let path = config().join(&file);
    if path.exists() {
        Ok(fs::read_to_string(&path).map_err(|er| {
            crate::Error::new("could not read config file")
                .with_source(er)
                .with_path(path)
        })?)
    } else {
        read_config(file)
    }
}

pub(crate) fn load_stylesheet<P: AsRef<Path>>(file: P) -> crate::Result<Option<Stylesheet>> {
    let path = active_color().join(&file);
    if path.exists() {
        Ok(Some(Stylesheet::from_file(&path).map_err(|er| {
            crate::Error::new("could not read stylesheet")
                .with_source(er)
                .with_path(path)
        })?))
    } else if !config_exists(Path::new("style/active").join(&file)) {
        Ok(None)
    } else {
        Ok(Some(
            Stylesheet::from_file_with_resolver(
                Path::new("style/active").join(file),
                &ConstResolver,
            )
            .unwrap(),
        ))
    }
}

#[derive(Eq, PartialEq, Copy, Clone, Debug)]
pub enum Existence {
    Configured,
    Builtin,
    None,
}

pub fn stylesheet_existence<P: AsRef<Path>>(file: P) -> (PathBuf, Existence) {
    let target_path = active_color().join(&file);
    let existence = if target_path.exists() {
        Existence::Configured
    } else if config_exists(Path::new("style/active").join(&file)) {
        Existence::Builtin
    } else {
        Existence::None
    };
    (target_path, existence)
}

struct ConstResolver;

impl syncat_stylesheet::resolver::Resolver for ConstResolver {
    type Error = crate::Error;

    fn read_to_string<P: AsRef<Path>>(&self, path: P) -> Result<String, Self::Error> {
        read_config(path)
    }
}
