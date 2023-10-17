use super::helper::*;
use hex::FromHex;
use std::str::FromStr;
use tree_sitter::TreeCursor;

#[derive(Copy, Clone, Eq, PartialEq, Ord, PartialOrd, Hash, Debug)]
pub enum Color {
    Red,
    Green,
    Blue,
    Yellow,
    Purple,
    Cyan,
    White,
    Black,
    BrRed,
    BrGreen,
    BrBlue,
    BrYellow,
    BrPurple,
    BrCyan,
    BrWhite,
    BrBlack,
    Hex(u32),
}

impl FromStr for Color {
    type Err = crate::Error;

    fn from_str(string: &str) -> Result<Self, Self::Err> {
        let color = match string {
            "red" => Self::Red,
            "green" => Self::Green,
            "blue" => Self::Blue,
            "yellow" => Self::Yellow,
            "purple" => Self::Purple,
            "cyan" => Self::Cyan,
            "white" => Self::White,
            "black" => Self::Black,
            "brred" => Self::BrRed,
            "brgreen" => Self::BrGreen,
            "brblue" => Self::BrBlue,
            "bryellow" => Self::BrYellow,
            "brpurple" => Self::BrPurple,
            "brcyan" => Self::BrCyan,
            "brwhite" => Self::BrWhite,
            "brblack" => Self::BrBlack,
            other if other.starts_with('#') => {
                let bytes = <[u8; 3]>::from_hex(&other[1..])?;
                let bytes_4 = [0, bytes[0], bytes[1], bytes[2]];
                Color::Hex(u32::from_be_bytes(bytes_4))
            }
            _ => return Err(crate::Error::color_format()),
        };
        Ok(color)
    }
}

impl FromSource for Color {
    fn from_source(tree: &mut TreeCursor, source: &[u8]) -> crate::Result<Self> {
        children!(tree, "color");
        let color = tree.node().utf8_text(source)?.parse()?;
        tree.goto_parent();
        Ok(color)
    }
}
