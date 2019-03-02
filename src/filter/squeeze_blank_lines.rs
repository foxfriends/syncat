use crate::Opts;

pub fn squeeze_blank_lines<E>(&Opts { dev, squeeze_blank_lines, .. }: &Opts, source: Result<String, E>) -> Result<String, E> {
    if dev { 
        source
    } else if squeeze_blank_lines {
        Ok(source?.lines()
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
           .filter_map(|x| x)
           .collect::<Vec<_>>()
           .join("\n"))
    } else {
        source
    }
}
