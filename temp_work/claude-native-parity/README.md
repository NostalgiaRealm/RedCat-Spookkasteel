# Native parity review: research and validation files

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
  with the Chromium at `~/.local/share/ms-playwright`. Setting `UNLOCK_PRELOAD`
  to the file URL of `unlock-preload.mjs` seeds unlocked campaign progress.
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
- `tests/support/bare-world.mjs` (in the project) is the shared fixture for
  world tests that need no assets.

No live browser or Electron profile, and no personal save, was used or copied.
