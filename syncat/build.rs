use std::env;
use std::fs::File;
use std::io::Write;
use std::path::Path;

fn main() {
    let out_dir = env::var("OUT_DIR").unwrap();
    let out_path = Path::new(&out_dir).join("targets.rs");
    let mut output = File::create(&out_path).unwrap();
    writeln!(output, "const HOST: &str = {:?};", env::var("HOST").unwrap()).unwrap();
    writeln!(output, "const TARGET: &str = {:?};", env::var("TARGET").unwrap()).unwrap();
}
