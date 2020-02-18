use std::convert::TryFrom;
use std::error::Error;
use std::fmt::{self, Display, Formatter};
#[cfg(feature = "ansi_term")]
use ansi_term::Color as ANSIColor;
use crate::ast::Color;

#[derive(Clone, Debug)]
pub enum Value {
    String(String),
    Boolean(bool),
    Number(u32),
    Color(Color),
}

#[derive(Debug)]
pub struct FromValueError {
    value: Value,
    target: &'static str,
}

impl FromValueError {
    pub fn new(value: Value, target: &'static str) -> Self {
        Self { value, target }
    }
}

impl Error for FromValueError {}

impl Display for FromValueError {
    fn fmt(&self, f: &mut Formatter) -> fmt::Result {
        write!(f, "failed conversion from stylesheet value {:?} to type {}", self.value, self.target)
    }
}

impl TryFrom<Value> for String {
    type Error = FromValueError;
    fn try_from(value: Value) -> Result<Self, Self::Error> {
        match value {
            Value::String(value) => Ok(value),
            _ => Err(FromValueError::new(value, "String")),
        }
    }
}

impl TryFrom<Value> for u32 {
    type Error = FromValueError;
    fn try_from(value: Value) -> Result<Self, Self::Error> {
        match value {
            Value::Number(value) => Ok(value),
            _ => Err(FromValueError::new(value, "u32")),
        }
    }
}

impl TryFrom<Value> for bool {
    type Error = FromValueError;
    fn try_from(value: Value) -> Result<Self, Self::Error> {
        match value {
            Value::Boolean(value) => Ok(value),
            _ => Err(FromValueError::new(value, "bool")),
        }
    }
}

impl TryFrom<Value> for Color {
    type Error = FromValueError;
    fn try_from(value: Value) -> Result<Self, Self::Error> {
        match value {
            Value::Color(value) => Ok(value),
            _ => Err(FromValueError::new(value, "Color")),
        }
    }
}

#[cfg(feature = "ansi_term")]
impl TryFrom<Value> for ANSIColor {
    type Error = FromValueError;
    fn try_from(value: Value) -> Result<Self, Self::Error> {
        match value {
            Value::Color(Color::Black) => Ok(ANSIColor::Black),
            Value::Color(Color::Red) => Ok(ANSIColor::Red),
            Value::Color(Color::Green) => Ok(ANSIColor::Green),
            Value::Color(Color::Yellow) => Ok(ANSIColor::Yellow),
            Value::Color(Color::Blue) => Ok(ANSIColor::Blue),
            Value::Color(Color::Purple) => Ok(ANSIColor::Purple),
            Value::Color(Color::Cyan) => Ok(ANSIColor::Cyan),
            Value::Color(Color::White) => Ok(ANSIColor::White),
            Value::Color(Color::BrBlack) => Ok(ANSIColor::Fixed(8)),
            Value::Color(Color::BrRed) => Ok(ANSIColor::Fixed(9)),
            Value::Color(Color::BrGreen) => Ok(ANSIColor::Fixed(10)),
            Value::Color(Color::BrYellow) => Ok(ANSIColor::Fixed(11)),
            Value::Color(Color::BrBlue) => Ok(ANSIColor::Fixed(12)),
            Value::Color(Color::BrPurple) => Ok(ANSIColor::Fixed(13)),
            Value::Color(Color::BrCyan) => Ok(ANSIColor::Fixed(14)),
            Value::Color(Color::BrWhite) => Ok(ANSIColor::Fixed(15)),
            Value::Color(Color::Hex(value)) => Ok(ANSIColor::RGB(((value >> 16) & 0xFF) as u8, ((value >> 8) & 0xFF) as u8, (value & 0xFF) as u8)),
            _ => Err(FromValueError::new(value, "ansi_term::Colour")),
        }
    }
}
