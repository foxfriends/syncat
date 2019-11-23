use directories::ProjectDirs;
use std::env;
use std::path::PathBuf;

fn directories() -> ProjectDirs {
    ProjectDirs::from("com", "cameldridge", "syncat").unwrap()
}

pub fn config() -> PathBuf {
    directories().config_dir().to_owned()
}

pub fn active_color() -> PathBuf {
    let active_style_name = env::var("syncat_active_style").unwrap_or("active".to_string());
    config().join("style").join(active_style_name)
}
