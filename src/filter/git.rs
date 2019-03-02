use std::path::{Path, PathBuf};
use std::collections::HashMap;
use std::fs;
use git2::{DiffOptions, IntoCString, Repository};
use crate::Opts;
use crate::meta::MetaStylesheet;

#[derive(Copy, Clone, Debug)]
pub enum LineChange {
    Added,
    RemovedAbove,
    RemovedBelow,
    Modified,
}

/// This code is pretty much taken straight from [Bat](https://github.com/sharkdp/bat/blob/master/src/diff.rs)
fn do_git_transform(source: &str, repo: Repository, meta_style: &MetaStylesheet, path: &PathBuf) -> Option<String> {
    let repo_path_absolute = fs::canonicalize(repo.workdir()?).ok()?;
    let filepath_absolute = fs::canonicalize(path).ok()?;
    let filepath_relative_to_repo = filepath_absolute.strip_prefix(&repo_path_absolute).ok()?;

    let mut diff_options = DiffOptions::new();
    let pathspec = filepath_relative_to_repo.into_c_string().ok()?;
    diff_options.pathspec(pathspec);
    diff_options.context_lines(0);

    let diff = repo
        .diff_index_to_workdir(None, Some(&mut diff_options))
        .ok()?;

    let mut line_changes: HashMap<u32, LineChange> = HashMap::new();

    let mark_section =
        |line_changes: &mut HashMap<u32, LineChange>, start: u32, end: i32, change: LineChange| {
            for line in start..=end as u32 {
                line_changes.insert(line, change);
            }
        };

    let _ = diff.foreach(
        &mut |_, _| true,
        None,
        Some(&mut |delta, hunk| {
            let path = delta.new_file().path().unwrap_or_else(|| Path::new(""));
            if filepath_relative_to_repo != path {
                return false;
            }

            let old_lines = hunk.old_lines();
            let new_start = hunk.new_start();
            let new_lines = hunk.new_lines();
            let new_end = (new_start + new_lines) as i32 - 1;

            if old_lines == 0 && new_lines > 0 {
                mark_section(&mut line_changes, new_start, new_end, LineChange::Added);
            } else if new_lines == 0 && old_lines > 0 {
                if new_start == 0 {
                    mark_section(&mut line_changes, 1, 1, LineChange::RemovedAbove);
                } else {
                    mark_section(
                        &mut line_changes,
                        new_start,
                        new_start as i32,
                        LineChange::RemovedBelow,
                    );
                }
            } else {
                mark_section(&mut line_changes, new_start, new_end, LineChange::Modified);
            }

            true
        }),
        None,
    );

    let added = meta_style.vcs_addition
        .build()
        .paint(meta_style.vcs_addition.content().unwrap_or("+"));
    let modified = meta_style.vcs_modification
        .build()
        .paint(meta_style.vcs_modification.content().unwrap_or("~"));
    let removed_above = meta_style.vcs_deletion_above
        .build()
        .paint(meta_style.vcs_deletion_above.content().unwrap_or("-"));
    let removed_below = meta_style.vcs_deletion_below
        .build()
        .paint(meta_style.vcs_deletion_below.content().unwrap_or("_"));
    Some(source
        .lines()
        .enumerate()
        .map(move |(i, line)| {
            match line_changes.get(&(i as u32)) {
                Some(LineChange::Added) => format!(" {}{}", added, line),
                Some(LineChange::RemovedAbove) => format!(" {}{}", removed_above, line),
                Some(LineChange::RemovedBelow) => format!(" {}{}", removed_below, line),
                Some(LineChange::Modified) => format!(" {}{}", modified, line),
                None => format!("  {}", line),
            }
        })
        .collect::<Vec<_>>()
        .join("\n"))
}

pub fn git<E>(
    &Opts { dev, show_git, .. }: &Opts, 
    meta_style: &MetaStylesheet, 
    source: Result<String, E>,
    filename: Option<&PathBuf>,
) -> Result<String, E> {
    let path = match filename {
        Some(path) => path,
        None => return source,
    };
    if dev {
        source
    } else if show_git {
        if let Some(repository) = filename.and_then(|path| Repository::discover(path).ok()) {
            let source = source?;
            Ok(do_git_transform(&source, repository, meta_style, path).unwrap_or(source))
        } else {
            source
        }
    } else {
        source
    }
}
