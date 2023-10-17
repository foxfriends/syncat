use std::env;
use std::fs::{read_dir, File};
use std::io::Write;
use std::path::Path;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let out_dir = env::var("OUT_DIR")?;
    let out_path = Path::new(&out_dir).join("targets.rs");
    let mut output = File::create(&out_path)?;
    writeln!(output, "const HOST: &str = {:?};", env::var("HOST")?)?;
    writeln!(output, "const TARGET: &str = {:?};", env::var("TARGET")?)?;

    let out_path = Path::new(&out_dir).join("config.tar");
    let mut output = File::create(&out_path)?;
    let mut ar = tar::Builder::new(&mut output);

    let manifest_dir = env::var("CARGO_MANIFEST_DIR")?;
    let config_dir = Path::new(&manifest_dir).join("config");

    println!(
        "cargo:rerun-if-changed={}",
        config_dir.join("languages.toml").display()
    );
    println!(
        "cargo:rerun-if-changed={}",
        config_dir.join("style/colours.syncat").display(),
    );

    ar.append_path_with_name(config_dir.join("languages.toml"), "languages.toml")?;
    ar.append_path_with_name(
        config_dir.join("style/colours.syncat"),
        "style/colours.syncat",
    )?;
    for entry in read_dir(config_dir.join("style/active"))? {
        let entry = entry?;
        println!("cargo:rerun-if-changed={}", entry.path().display(),);
        ar.append_path_with_name(
            entry.path(),
            Path::new("style/active").join(entry.file_name()),
        )?;
    }
    ar.into_inner()?;

    Ok(())
}
