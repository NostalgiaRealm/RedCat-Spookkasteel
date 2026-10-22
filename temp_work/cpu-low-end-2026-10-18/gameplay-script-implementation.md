# Two bounded-work optimizations — 2026-10-18

Only `src/gameplay.js`, `src/script-host.js` and the new focused test `tests/gameplay-update-work.test.mjs` were changed for this implementation. Pre-existing changes in both source files remain intact. No HUD, music, audio, navigation, collision, package or website changes were made by this task.

## Changes

- `Gameplay.update` computes position and distance only inside the pickup branch. The shared object loop, event order, live enabled/health checks, death early exits, pickup support transform and line-of-sight check are unchanged. No cache or invalidation state was added.
- `ScriptHost.update` passes the final pose returned by `MotionPlayer.update` to `applyMotion`. Constructor, restore and other callers retain on-demand sampling through the default argument. The pose is returned after callbacks and accepted/rejected movement handling, so replacement playback and blocked segments retain their actual final transform. No motion event or moving-solid step is skipped.

Exact scoped source diff: [gameplay-script-optimization.diff](gameplay-script-optimization.diff).

## Preserved baseline

Before editing, the current working copies were retained for the parent comparison:

| File | SHA-256 |
| --- | --- |
| [before/src/gameplay.js](before/src/gameplay.js) | `0dfe52b7f40a75a34747e10b65afcd9e6804b350cfacebb855762a0e4053d89e` |
| [before/src/script-host.js](before/src/script-host.js) | `c0e98385c068cce93f69bc2ef00506744e1d1506d8103d1c9a9882bf3787aa50` |

## Focused verification

The four new tests were first run against those unchanged source files. Three failed as expected: the mixed-object fixture recorded 202 unused non-pickup position queries over two updates, and the two brush cases sampled the final pose twice per update. The mounted-pickup behavior test already passed. Output is retained in [new-tests-before.tap](new-tests-before.tap).

After the edits, all **4 new tests passed**:

- Earlier disabled pickups wait until the next frame while later pickups enabled by a trigger are collected immediately; unrelated logic/trigger objects generate zero unused position queries.
- A settled pickup on a translated support retains its real collection position, line-of-sight rays, reward position and unchanged authored anchor.
- Blocked brush segments wait and then resume with each event once and one final sample per host update.
- A callback that replaces playback publishes its replacement pose and completes normally, with one final sample per update.

All **13 selected existing tests passed** across gameplay, motions, script host and moving solids. They cover trigger leave/reentry behavior, pickup caps/occlusion/saves, crossed events, callback stop/replacement, ping-pong playback, rejected solid motion, teleport callback precedence, the original Graveyard pillar loop, partial puzzle saves, paused motion restoration, the shared crypt-door brush, and the original Caves paused-platform touch handler.

Results and exact commands: [focused-checks.json](focused-checks.json), [new-tests-after.tap](new-tests-after.tap), [existing-gameplay-motion-targeted.tap](existing-gameplay-motion-targeted.tap). `git diff --check` passed for the scoped source/test paths.

No browser process, benchmark, broad test suite or build was run. These operation-count reductions establish removed work, not a measured low-end frame-rate improvement; the parent owns performance measurements.
