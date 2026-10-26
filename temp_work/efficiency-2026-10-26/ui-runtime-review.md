# UI and input efficiency review — 26 October 2026

## Scope and inspection

Main game runtime only. Original installation, the standalone actor/coin/shove
labs, Android source changes, save formats, user profiles and release packages
were not modified by this subtask.

Read the existing CPU reports first (`low-end-cpu-performance.md`,
`browser-cpu-performance-followup.md`, `cpu-spatial-query-performance.md`) to
avoid undoing existing invariants or repeating older optimizations.

Reviewed complete UI/input implementations: `hud.js`, `cutscene-skip.js`,
`gamepad-menu.js`, `gamepad-input.js`, `touch-controls.js`, `debriefing.js`,
`loading-screen.js`, `touch-intro-hint.js`, `control-bindings.js`,
`render-quality.js`, `fullscreen-preference.js`, `intro-playback.js`,
`key-settings-menu.js`, `original-menu.js`, `native-help.js`, `quit-menu.js`,
`menu-audio.js`, `save-import-picker.js`, `autosave.js`, `menu-highscores.js`.
Reviewed the relevant `main.js` frame loop, controller scope/polling,
touch context, HUD, skip indicator, loading/resume and settings integration.
Reviewed `player-menu.js` render/selection/confirmation/export/import entry
paths and scanned save/recovery modules for repeated update work. Generated
audio/gameplay configuration was identified as data and left unchanged.

Event-only menu construction, the help index, eight-player list and ten-row
highscore sorting are bounded and do not justify adding caches/lifecycle
complexity. The HUD already avoids unchanged canvas draws while intentionally
checking layout every frame. Gamepad snapshots and touch `readInput()` copies
preserve caller isolation; they were not replaced with mutable shared buffers.
Controller polling timing, all input mappings, native menu actions/audio,
auto-render-scale thresholds and save scheduling remain unchanged.

## Changes

1. `src/gamepad-menu.js`: neutral polls validate only the active focused control,
   including current DOM containment, eligibility, highlight and ancestor
   visibility. Real input, changed focus, hidden/disabled/removed controls and
   new modal scopes still rebuild the current control list. This does not cache
   a stale list or need MutationObserver coordination.
2. `src/touch-controls.js`: unchanged context polls compare three primitive
   flags directly. A real transition still resets pointers and renders the new
   control context. Partial updates and boolean coercion are preserved.
3. `src/debriefing.js`: retain drawn scoreboard pixels until displayed values,
   alpha, canvas/viewport/DPR or artwork change. Resize, context restoration,
   late web-font loading and reopening invalidate them. Failed drawing cannot
   publish a valid cache. Continue timing/focus and fade progression are intact.

## Focused validation

`node --test tests/debriefing-redraw.test.mjs tests/debriefing.test.mjs tests/touch-controls.test.mjs`
passed **16/16** cases. Log: `ui-unit-tests.log` in this folder.

`node tests/ui-efficiency-scenes.mjs` runs only a local UI fixture against the
retained pre-change modules in `ui-baseline/`; it does not start a campaign or
open a real save/profile. The latest successful `ui-scenes-*/report.json` and
screenshots preserve browser results. Initial failed browser startup used an
overlong absolute TMPDIR socket path; switching to a relative path under this
same retained folder fixed the fixture, without a game change.

For **600 neutral controller frames** in a 46-control fixture:

| Work | Before | After |
| --- | ---: | ---: |
| Control-subtree queries | 600 | 0 |
| Computed-style reads | 156,600 | 2,400 |

The same interaction sequence remained identical for opening-confirm safety,
hidden/disabled controls, selects, sliders, checkboxes, external focus,
ancestor visibility changes, removed controls, non-controls, inserted controls,
modal transitions, highlight restoration and detached roots.

For **600 stable scoreboard frames**, at each of 1280×720, 390×844 and 844×390:

| Work | Before | After |
| --- | ---: | ---: |
| Canvas clears | 600 | 0 |
| Text draws | 16,800 | 0 |
| Image draws | 3,000 | 0 |

All **24 before/after canvas images** matched exactly, covering fade stages,
steady pixels and changed summary values. Explicit redraw also retained the
same pixels. No browser page errors occurred.

These are deterministic work-count reductions in the affected UI paths, not a
claim about total game CPU, FPS, native-device performance or campaign parity.
No main gameplay code or save serialization changed. No builds were made.
