# Unchanged HUD redraw avoidance — 2026-10-18

This change is limited to `src/hud.js`, the five counter text assignments in `src/main.js`, and new `tests/hud-redraw.test.mjs`. It preserves the original HUD artwork, placement, health representation and accessible counter contents. No other UI behavior was changed.

`OriginalHud.render` still measures the canvas layout rectangle on every call. It checks the current CSS size, physical canvas dimensions, game view dimensions, device pixel ratio and touch inset before deciding whether to retain its pixels. The cached values include player health/max health, lives, potions, level total, score and the eligible target's computed portrait, health and effective maximum health. A new target object with identical pictured values can reuse the current image; in-place changes to an existing target cannot hide behind object identity.

The loaded manifest identity/dimensions and atlas identity/source also participate in the comparison. The shipped manifest is loaded data and is not mutated by game code. Artwork replacement or an interval with incomplete/missing artwork requires another draw. Canvas size changes invalidate before resizing; context loss/restoration invalidates through canvas events. The cache is cleared before drawing and committed only after success, so an exception after clearing cannot reuse an earlier image signature. `invalidate()` is available for an explicit owner clearing path. The production HUD canvas has no other clear or width/height assignment path outside this renderer.

`renderHud` now compares each accessible counter's current text before writing it. It still invokes the canvas renderer every frame so layout measurement continues. Fractional health and the separate mirror counter retain their exact text behavior.

## Baseline and scoped diff

The pre-change files were retained before editing:

| File | SHA-256 |
| --- | --- |
| [before/src/hud.js](before/src/hud.js) | `a1318bc0dfa120e8348e8ed0c4888c6e102c0475e213bc671ed1a3461a357b61` |
| [before/src/main.js](before/src/main.js) | `694c4d2cfa079be6d4588c9043476052f2ade350dbd965e6b88edbef5e091990` |

[hud-redraw-optimization.diff](hud-redraw-optimization.diff) contains only this task's changes relative to those working copies, preserving earlier edits in the shared tree.

## Focused checks

All **11 tests passed**: seven new fake-canvas/main-counter checks and four existing HUD artwork/layout checks. The new cases establish:

- An initial draw plus 60 unchanged frames performs one clear/draw sequence and 61 layout-rectangle measurements.
- Every pictured player/target value, target eligibility, variant/subtype fallback, CSS size, game viewport, device pixel ratio and bottom inset invalidates the image when changed.
- Artwork replacement/readiness, canvas dimension resets, context events and explicit invalidation redraw otherwise unchanged values.
- A failed draw followed by the prior HUD values redraws the previously cleared pixels.
- Actual `renderHud` counter code writes only changed text while continuing canvas calls.

The existing tests retain full/half/empty hearts, portraits, widescreen anchors, portrait/touch layout and fixed-aspect letterboxing. Exact command/result: [hud-focused-checks.json](hud-focused-checks.json), [hud-focused-after.tap](hud-focused-after.tap). `git diff --check` passed for the affected source/test paths.

An independent read-only review by the Caves agent found no concrete cache-invalidation or visual regression. It checked the signature against `hudCommands`, layout/readiness/context invalidation, other canvas reset owners and the text guard's coercion. That review ran no additional tests or runtime processes.

No browser process, benchmark, broad test suite or build ran. These operation checks prove redraw avoidance and its invalidation boundaries; the parent owns performance measurements and hardware claims.
