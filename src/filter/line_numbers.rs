use crate::Opts;
use crate::line::Line;

pub fn line_numbers<'a, E>(
    &Opts { number_lines_nonblank, number_lines, .. }: &Opts, 
) -> impl 'a + FnMut(Result<Vec<Line>, E>) -> Result<Vec<Line>, E> {
    let mut line_number = 0usize;
    return move |source| {
        if number_lines_nonblank {
            Ok(source?
               .into_iter()
               .map(|line| {
                   if line.is_empty() {
                       line
                   } else {
                       line_number += 1;
                       line.with_number(line_number)
                   }
               })
               .collect())
        } else if number_lines {
            Ok(source?
               .into_iter()
               .map(|line| {
                   line_number += 1;
                   line.with_number(line_number)
               })
               .collect())
        } else {
            source
        }
    }
}
