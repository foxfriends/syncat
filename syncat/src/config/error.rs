use std::fmt::{self, Display};

#[derive(Debug)]
pub struct ConfigError {
    pub(super) message: &'static str,
    pub(super) source: Option<Box<dyn std::error::Error + Sync + Send>>,
}

impl Display for ConfigError {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match &self.source {
            Some(source) => source.fmt(f),
            None => self.message.fmt(f),
        }
    }
}

impl std::error::Error for ConfigError {
    fn source(&self) -> Option<&(dyn std::error::Error + 'static)> {
        self.source.as_ref().map(|s| &**s as _)
    }
}

impl From<std::io::Error> for ConfigError {
    fn from(value: std::io::Error) -> Self {
        Self {
            message: "IO Error",
            source: Some(Box::new(value)),
        }
    }
}

impl From<syncat_stylesheet::Error> for ConfigError {
    fn from(value: syncat_stylesheet::Error) -> Self {
        Self {
            message: "Stylesheet Error",
            source: Some(Box::new(value)),
        }
    }
}
