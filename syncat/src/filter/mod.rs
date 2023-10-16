mod frame;
mod git;
mod line_endings;
mod line_numbers;
mod squeeze_blank_lines;

pub use self::frame::{frame_footer, frame_header};
pub use self::git::git;
pub use self::line_endings::line_endings;
pub use self::line_numbers::line_numbers;
pub use self::squeeze_blank_lines::squeeze_blank_lines;
