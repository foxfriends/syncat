use std::convert::identity;
use crate::Opts;
use crate::line::Line;

pub fn squeeze_blank_lines<E>(&Opts { squeeze, .. }: &Opts, source: Result<Vec<Line>, E>) -> Result<Vec<Line>, E> {
    if squeeze {
        Ok(source?.into_iter()
           .scan(false, |was_blank, line| {
               if line.is_empty() {
                   let output = if *was_blank {
                       None
                   } else {
                       Some(line)
                   };
                   *was_blank = true;
                   Some(output)
               } else {
                   *was_blank = false;
                   Some(Some(line))
               }
           })
           .filter_map(identity)
           .collect())
    } else {
        source
    }
}
