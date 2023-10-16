use std::path::Path;

pub trait Resolver {
    type Error: std::error::Error + 'static;

    fn read_to_string<P: AsRef<Path>>(&self, path: P) -> Result<String, Self::Error>;
}

pub struct FsResolver;

impl Resolver for FsResolver {
    type Error = std::io::Error;

    fn read_to_string<P: AsRef<Path>>(&self, path: P) -> Result<String, Self::Error> {
        std::fs::read_to_string(path)
    }
}
