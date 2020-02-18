use std::fmt::{self, Display, Formatter};

/// A cheap error for this crate...
#[derive(Clone, Debug)]
pub struct Error(pub String);

impl std::error::Error for Error {
    fn description(&self) -> &str {
        &self.0
    }
}

impl Display for Error {
    fn fmt(&self, f: &mut Formatter) -> fmt::Result {
        writeln!(f, "{}", self.0)
    }
}
