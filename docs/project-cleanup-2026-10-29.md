# Project cleanup, 29 October 2026

The project was decluttered at the owner's request: “Clean up old results
like in the artifacts folder. The screenshots are for sure no longer needed,
but check other unneeded files too.” The working tree went from about 52 GB
to 6.5 GB. Only regenerable output was removed. The script and the complete
list of removed paths with their sizes are in
`temp_work/cleanup-2026-10-29/` (`cleanup.py`, `removed.json`).

## Removed

| What | Why it is not needed | Where to get it again |
| --- | --- | --- |
| `artifacts/` (203 screenshots, 87 JSON scene reports) | Old scene results. Scenes now write fresh results to `temp_work/scene-output/artifacts/` (ignored). | Git history: `git show 777afc537:artifacts/<file>`, or `git checkout 777afc537 -- artifacts`. |
| `temp_work/scene-output/` (15.7 GB) | Screenshots, reports, browser profiles and temporary folders written by test runs, including the earlier runs moved there on 28 October. | Rerun the scenes and unit tests. |
| `temp_work/claude-native-parity/baseline/`, `scene-outputs*/`, `venv-import/` | The pre-change comparison tree, old scene outputs and a Pillow environment. | The baseline can be rebuilt as its README describes; `python3 -m venv` recreates the environment. |
| Android staging copies, emulator disk images and screenshots, the generated `.apks` set and build folders in `temp_work/` | Copies of `assets/`/`data/`, emulator state and intermediate build output. | `npm run build:android` and the Android guide recreate them. |
| Test profiles and run folders in `temp_work/` (browser/Electron profiles, `browser-*`, `ui-scenes-*`, `web-cache-tests` runs, `level-selection-menu`, `web-subpath-scenes`) and Python `__pycache__` folders | Disposable test state. | Rerun the tests. |
| Old local packages in `dist/` (unpacked build trees and archives for 1.0.1–1.0.5, older decompilation archives) and `android/app/build/` | Every version is published with its files on GitHub and GitLab. | The GitHub and GitLab release pages, or a rebuild with [the build guide](building.md). |

Three small untracked logs from old test runs went with their run folders
(`browser-harness.log`, `ui-scenes-first-passing.log`,
`ui-scenes-initial-environment-error.log`); no document refers to them.

## Kept

- Source, data, assets, tests, tools and documentation.
- `RC_ORIGINAL_DECOMPILED/`, which every release includes, and the
  `RC_*_TEST` folders that the findings catalog cites.
- The research in `temp_work/`: notes, logs, scripts, data files and the
  original-content extracts (such as the help-menu bitmaps). Documents that
  cite a removed screenshot or `artifacts/` file still describe its result;
  the file itself is in git history.
- Test inputs: the UI-efficiency baseline, the light-clock probe and the seed
  save that tests read.
- The Android JDK (`temp_work/android-initial-2026-10-06/toolchain`), the
  bundletool jar used by `tools/verify-android-release.py`, the signing
  configuration outside the project, and the current 1.0.6 release files in
  `dist/`.

The two Android scenes that used the 1.0.3 staging folder as scratch space
now write to the scene output folder like the other scenes.
