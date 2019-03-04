mod squeeze_blank_lines;
mod line_numbers;
mod line_endings;
mod margin;
mod git;
mod frame;

pub use self::squeeze_blank_lines::squeeze_blank_lines;
pub use self::line_numbers::line_numbers;
pub use self::line_endings::line_endings;
pub use self::margin::margin;
pub use self::git::git;
pub use self::frame::{frame_header, frame_footer};
