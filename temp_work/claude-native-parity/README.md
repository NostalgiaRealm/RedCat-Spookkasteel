# Native parity review: research and validation files

On 29 October 2026 the generated folders described below (`baseline/`,
`scene-outputs*/`, `venv-import/` and `temp_work/scene-output/earlier-runs/`)
were removed in the [project cleanup](../../docs/project-cleanup-2026-10-29.md);
the notes, logs, scripts and research files remain.

This folder holds the material behind
[`docs/claude-native-parity-review.md`](../../docs/claude-native-parity-review.md).

- `proposal-extract.md`: the approved proposal (items 1–17 and D1–D10), as presented on 27 October 2026.
- `baseline/`: the pre-change `source/` rebuilt from the sources embedded in
  `android/app/build/generated/gameAssets/www/src/game.bundle.js.map`
  (2026-10-26 23:39), with copies of `tests/`, `src/` and `index.html` and
  symlinks to the shared assets. It exists only to tell pre-existing test
  failures from regressions.
- `logs/`:
  - `web-refresh*.log`: bundle regeneration.
  - `unit-tests-1..3.log`, `unit-tests-final.log`: the current unit runs.
  - `baseline-*.log`: the same runs on the baseline.
- `diff-failures.py <current.log> <baseline.log>`: lists failures that are new or fixed relative to the baseline.
- `fail-detail.py <log> <pattern>`: prints a failure's assertion.
- `dbg-*.mjs`, `probe-*.mjs`: small reproductions used while triaging.
- `run-scenes.sh <project> <logdir> [scenes…]`: runs scene scripts sequentially
  with the Chromium at `~/.local/share/ms-playwright`. Since 28 October the
  scenes write their outputs to `temp_work/scene-output/` (or
  `REDCAT_SCENE_OUTPUT`) and seed their own unlocked progress, so
  `unlock-preload.mjs` (still honoured through `UNLOCK_PRELOAD`) is no longer
  needed.
- `logs/scenes-*`: per-scene logs and `summary.txt` (exit code, seconds, file).
  `logs/old/` and `*-invalid-symlinks` hold baseline runs that could not load
  their assets, kept for the record.
- `baseline/` now holds real copies of `assets/`, `data/`, `tools/` and
  `node_modules/three`, because the game server refuses files behind symlinks.

- `scene-outputs/`: what the 28 October scene runs wrote into the project,
  moved here so the repository keeps its committed evidence:
  - `artifacts-regenerated/` (123 files listed in `artifacts-regenerated.txt`)
    holds the regenerated copies; `artifacts/` was restored with git. Several
    screenshots are blank because headless WebGL drew nothing in this container.
  - `current_work/` holds per-scene output folders.
  - `icoinl-verification-profile/` is the disposable browser profile that
    `pickup-audio-tail-scenes.mjs` creates. That scene's rewrite of
    `temp_work/icoinl-tail-2026-10-13/verified-browser.json` was reverted.
  Safe to delete once no longer needed.
- `scene-outputs-camera/`: the same kind of outputs from the camera-rebuild
  scene runs (`logs/scenes-camera*`), moved out of the project the same way.
- `scene-outputs-camera-fallback/`, `scene-outputs-direct-look/`: outputs of the
  later camera scene runs, moved out of the project the same way.
- `camera-re/`: assembly dumps (`*.asm`), helper scripts and the recovered
  chase-speed table behind [docs/native-camera.md](../../docs/native-camera.md),
  moved here from a temporary folder on 28 October 2026.
- `tests/support/bare-world.mjs` (in the project) is the shared fixture for
  world tests that need no assets.

No live browser or Electron profile, and no personal save, was used or copied.

Added for the open-issues pass (28 October 2026, review entry L7):

- `research-r1/` (retry screen, sway keys, HUD), `research-r2/` (guardian, D4,
  poison frog, D10, gargoyle gain, chatter) and `research-r3/` (FlashEffect,
  firing stop, D7 APIs, knight pose): notes and scratch scripts from three
  read-only passes over `RcHcGame.dat`.
- `research-d9-multiplyvolume.txt`: every MultiplyVolume call in the shipped
  scripts, with its context.
- `probe-camera-traces.mjs <out.json> [root]`: collision traces per frame for
  the follow camera and wall lift; `logs/camera-traces-before.json` and
  `-after.json` hold the two runs.
- `probe-slope.mjs` with `collision-floor06.js`: shows the sloped-brush test
  fails when the floor limit is moved to 0.6.
- `tools/redirect-scene-outputs.mjs`: the one-off rewrite of scene output paths
  to `sceneOutput()`.
- `tools/move-run-outputs.py`: moved 646 untracked run folders from the
  research folders to `temp_work/scene-output/earlier-runs/`
  (`logs/moved-run-outputs.txt`). Nothing was deleted.
- `venv-import/` (ignored): the Pillow environment used to run
  `tools/import_retry.py`.
- `logs/scenes-harness/`, `logs/scenes-open-issues/`, `logs/unit-tests-open-issues-*.log`:
  the runs of this pass.
- `tools/move-older-run-outputs.py`: the same move for untracked run folders
  of any date (`logs/moved-older-run-outputs.txt`, 58 folders). It skips this
  folder and any run folder a document cites.
- `research-r5/` (retry screen timing): notes and scripts from the follow-up
  pass. The enemy sight-clock pass kept no files; its findings are recorded
  under D10 in the parity review.
