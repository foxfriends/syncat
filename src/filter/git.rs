use std::path::{Path, PathBuf};
use std::collections::HashMap;
use std::fs;
use git2::{DiffOptions, IntoCString, Repository};
use crate::Opts;
use crate::line::{Line, LineChange};

/// This code is pretty much taken straight from [Bat](https://github.com/sharkdp/bat/blob/master/src/diff.rs)
fn do_git_transform(source: &[Line], repo: Repository, path: &PathBuf) -> Option<Vec<Line>> {
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

    Some(source
        .iter()
        .enumerate()
        .map(move |(i, line)| line.clone().with_status(line_changes.remove(&(i as u32)).unwrap_or_default()))
        .collect())
}

pub fn git<E>(
    &Opts { show_git, .. }: &Opts, 
    source: Result<Vec<Line>, E>,
    filename: Option<&PathBuf>,
) -> Result<Vec<Line>, E> {
    let path = match filename {
        Some(path) => path,
        None => return source,
    };
    if show_git {
        if let Some(repository) = filename.and_then(|path| Repository::discover(path).ok()) {
            let source = source?;
            Ok(do_git_transform(&source, repository, path).unwrap_or(source))
        } else {
            source
        }
    } else {
        source
    }
}
