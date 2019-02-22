use directories::ProjectDirs;
use std::path::PathBuf;

fn directories() -> ProjectDirs {
    ProjectDirs::from("com", "cameldridge", "syncat").unwrap()
}

pub fn config() -> PathBuf {
    directories().config_dir().to_owned()
}
