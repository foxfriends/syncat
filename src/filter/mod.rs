mod squeeze_blank_lines;
mod line_numbers;
mod line_endings;
mod git;

pub use self::squeeze_blank_lines::squeeze_blank_lines;
pub use self::line_numbers::line_numbers;
pub use self::line_endings::line_endings;
pub use self::git::git;
