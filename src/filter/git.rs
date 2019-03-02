use crate::Opts;
use crate::meta::MetaStylesheet;

pub fn git<E>(&Opts { dev, show_git, .. }: &Opts, meta_style: &MetaStylesheet, source: Result<String, E>) -> Result<String, E> {
    if dev {
        source
    } else if show_git {
        source
    } else {
        source
    }
}
