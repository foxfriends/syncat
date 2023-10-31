use std::fmt::{self, Display, Formatter};
use std::path::{Path, PathBuf};

#[derive(Debug)]
pub(crate) struct Error {
    path: Option<PathBuf>,
    message: String,
    source: Option<Box<dyn std::error::Error + Sync + Send>>,
}

impl Error {
    pub(crate) fn new(message: impl Display) -> Self {
        Self {
            path: None,
            message: message.to_string(),
            source: None,
        }
    }

    pub(crate) fn with_source(
        mut self,
        source: impl std::error::Error + Sync + Send + 'static,
    ) -> Self {
        self.source = Some(Box::new(source));
        self
    }

    pub(crate) fn with_path(mut self, path: impl AsRef<Path>) -> Self {
        self.path = Some(path.as_ref().to_owned());
        self
    }
}

impl std::error::Error for Error {
    fn source(&self) -> Option<&(dyn std::error::Error + 'static)> {
        self.source.as_ref().map(|s| &**s as _)
    }
}

impl Display for Error {
    fn fmt(&self, f: &mut Formatter) -> fmt::Result {
        write!(f, "syncat: ")?;
        if let Some(path) = &self.path {
            write!(f, "{}: ", path.display())?;
        }
        write!(f, "{}", self.message)?;
        if let Some(source) = &self.source {
            write!(f, " ({})", source)?;
        }
        Ok(())
    }
}

pub(crate) type Result<T> = std::result::Result<T, Error>;
