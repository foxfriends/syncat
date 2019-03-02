use crate::Opts;
use crate::meta::MetaStylesheet;

pub fn line_numbers<'a, E>(
    &Opts { dev, number_lines_nonblank, number_lines, .. }: &Opts, 
    meta_style: &'a MetaStylesheet,
) -> impl 'a + FnMut(Result<String, E>) -> Result<String, E> {
    let mut line_number = 0usize;
    return move |source| -> Result<String, E> {
        if dev {
            source
        } else if number_lines_nonblank {
            Ok(source?.lines()
               .map(|line| {
                   if line.is_empty() {
                       format!("      {}\n", line.to_string())
                   } else {
                       line_number += 1;
                       let line_number_str = format!("{}", meta_style.line_number.build().paint(format!("{: >6}", line_number)));
                       format!("{: >6}{}\n", line_number_str, line)
                   }
               })
               .collect())
        } else if number_lines {
            Ok(source?.lines()
               .map(|line| {
                   line_number += 1;
                   let line_number_str = format!("{}", meta_style.line_number.build().paint(format!("{: >6}", line_number)));
                   format!("{}{}\n", line_number_str, line)
               })
               .collect())
        } else {
            source
        }
    }
}
