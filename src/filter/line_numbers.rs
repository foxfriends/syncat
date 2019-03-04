use crate::Opts;
use crate::line::Line;

pub fn line_numbers<'a, E>(
    &Opts { numbered_nonblank, numbered, .. }: &Opts, 
) -> impl 'a + FnMut(Result<Vec<Line>, E>) -> Result<Vec<Line>, E> {
    let mut line_number = 1usize;
    return move |source| {
        if numbered_nonblank {
            Ok(source?
                .into_iter()
                .map(|line| {
                    if line.is_empty() {
                        line.with_no_number()
                    } else {
                        let line_with_number = line.with_number(line_number);
                        line_number += 1;
                        line_with_number
                    }
                })
                .collect())
        } else if numbered {
            Ok(source?
                .into_iter()
                .map(|line| {
                    let line_with_number = line.with_number(line_number);
                    line_number += 1;
                    line_with_number
                })
                .collect())
        } else {
            source
        }
    }
}
