use crate::Opts;
use crate::line::Line;

pub fn line_numbers<'a, E>(
    &Opts { frame, numbered_nonblank, numbered, .. }: &Opts, 
) -> impl 'a + FnMut(Result<Vec<Line>, E>) -> Result<Vec<Line>, E> {
    let mut line_number = 0usize;
    let mut skip_next = false;
    return move |source| {
        if numbered_nonblank {
            Ok(source?
                .into_iter()
                .map(|line| {
                    if skip_next {
                        skip_next = false;
                        line
                    } else if line.is_empty() || skip_next {
                        line.with_no_number()
                    } else {
                        line_number += 1;
                        if line.no_newline {
                            skip_next = frame == 0;
                        }
                        line.with_number(line_number)
                    }
                })
                .collect())
        } else if numbered {
            Ok(source?
                .into_iter()
                .map(|line| {
                    if skip_next {
                        skip_next = false;
                        line
                    } else {
                        line_number += 1;
                        if line.no_newline {
                            skip_next = frame == 0;
                        }
                        line.with_number(line_number)
                    }
                })
                .collect())
        } else {
            source
        }
    }
}
