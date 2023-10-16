use crate::dirs::config;
use std::path::Path;
use std::{fs, io};

const DEFAULT_CONFIG: &[u8] = include_bytes!(concat!(env!("OUT_DIR"), "/config.tar"));

pub fn read_to_string(file: &str) -> anyhow::Result<String> {
    if config().join(file).exists() {
        Ok(fs::read_to_string(config().join(file))?)
    } else {
        let mut config_reader = DEFAULT_CONFIG;
        for entry in tar::Archive::new(&mut config_reader).entries()? {
            let entry = entry?;
            if entry.path()?.as_ref() == Path::new(file) {
                return Ok(io::read_to_string(entry)?);
            }
        }
        anyhow::bail!("")
    }
}
