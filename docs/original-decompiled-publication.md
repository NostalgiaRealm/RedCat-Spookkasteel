# Keep the complete original-code research in every release

The complete `RC_ORIGINAL_DECOMPILED/` folder is tracked in this repository,
including original input copies, all recovered functions, scripts, resources,
saved Ghidra projects, verification records and research logs. Its C exports
are inspection pseudocode, not the original buildable source tree. Read the
folder's own `README.md` and `VERIFICATION.md` for the recovery boundaries.

The independent research working folder can remain beside `RCSPOOK_NEW/`.
Before **every** release, synchronize it into this repository and produce a
complete downloadable archive:

```bash
python3 tools/prepare-original-decompiled.py --version 1.0.3
git add -f -- RC_ORIGINAL_DECOMPILED/
git diff --cached --stat
```

Replace the version with the release being prepared. The helper prefers the
sibling folder when present. On a fresh clone, it uses the tracked copy;
`--source /path/to/RC_ORIGINAL_DECOMPILED` selects a different research folder.
It compares every copied and archived file by SHA-256 and fails on stale extra
files rather than silently deleting research. Check the generated manifest.
Use `git add -f` because the global `*.log` exclusion must not omit research logs.

Commit this complete folder together with that release's source **before**
creating the release tag. Push the same commit and tag to GitHub and GitLab.
Their generated source archives will then include the folder automatically.
Also attach these three files to the release on **both** hosts:

```text
dist/original-decompiled/RC_ORIGINAL_DECOMPILED-VERSION.tar.gz
dist/original-decompiled/RC_ORIGINAL_DECOMPILED-VERSION.sha256
dist/original-decompiled/RC_ORIGINAL_DECOMPILED-VERSION.manifest.json
```

For GitHub use `gh release upload vVERSION` with the three paths. For GitLab,
upload them to the project's generic package registry and add each URL to the
release's asset links, following the existing build publication procedure.
Verify uploaded sizes and SHA-256 hashes independently on both hosts.

This research is a source/release supplement. Desktop, browser and Android
runtime packages keep their existing runtime-only file lists; they do not need
to load these analysis databases or recovered code.

For the already published 1.0.3 release, this folder was added after the original
release commit. Its separate attached archive contains the complete research;
the existing 1.0.3 tag and desktop binaries remain at their original commit.
Subsequent release tags must contain the tracked folder too.
