use std::path::Path;
use std::io;
use std::fmt::{self, Display, Formatter};
use std::str::{Utf8Error, ParseBoolError};
use std::num::ParseIntError;
use hex::FromHexError;

#[derive(Debug)]
pub enum ErrorKind {
    Invalid,
    Module,
    Format,
}

#[derive(Debug)]
pub struct Error {
    kind: ErrorKind,
    message: String,
    source: Option<Box<dyn std::error::Error>>,
}

impl Error {
    pub(super) fn invalid() -> Self {
        Self {
            kind: ErrorKind::Invalid,
            message: String::from("attempted to interpret an invalid parse tree"),
            source: None,
        }
    }

    pub(super) fn missing_module(error: io::Error, path: &Path) -> Self {
        Self {
            kind: ErrorKind::Module,
            message: format!("could not locate module \"{}\"", path.display()),
            source: Some(Box::new(error)),
        }
    }

    pub(super) fn color_format() -> Self {
        Self {
            kind: ErrorKind::Format,
            message: String::from("named color literal is invalid"),
            source: None,
        }
    }
}

impl Display for Error {
    fn fmt(&self, f: &mut Formatter) -> fmt::Result {
        self.message.fmt(f)
    }
}

impl std::error::Error for Error {
    fn source(&self) -> Option<&(dyn std::error::Error + 'static)> {
        self.source.as_ref().map(|b| &**b)
    }
}

impl From<Utf8Error> for Error {
    fn from(error: Utf8Error) -> Self {
        Self {
            kind: ErrorKind::Format,
            message: String::from("file does not contain valid utf8"),
            source: Some(Box::new(error)),
        }
    }
}

impl From<ParseIntError> for Error {
    fn from(error: ParseIntError) -> Self {
        Self {
            kind: ErrorKind::Format,
            message: String::from("integer literal is invalid"),
            source: Some(Box::new(error)),
        }
    }
}

impl From<ParseBoolError> for Error {
    fn from(error: ParseBoolError) -> Self {
        Self {
            kind: ErrorKind::Format,
            message: String::from("boolean literal is invalid"),
            source: Some(Box::new(error)),
        }
    }
}

impl From<FromHexError> for Error {
    fn from(error: FromHexError) -> Self {
        Self {
            kind: ErrorKind::Format,
            message: String::from("hex color literal is invalid"),
            source: Some(Box::new(error)),
        }
    }
}

impl From<enquote::Error> for Error {
    fn from(error: enquote::Error) -> Self {
        Self {
            kind: ErrorKind::Format,
            message: String::from("string literal is quoted incorrectly"),
            source: Some(Box::new(error)),
        }
    }
}

impl From<regex::Error> for Error {
    fn from(error: regex::Error) -> Self {
        Self {
            kind: ErrorKind::Format,
            message: String::from("regex literal is invalid"),
            source: Some(Box::new(error)),
        }
    }
}

pub type Result<T> = std::result::Result<T, Error>;
