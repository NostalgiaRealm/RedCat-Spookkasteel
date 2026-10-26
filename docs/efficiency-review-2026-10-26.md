# Code and documentation efficiency review — 26 October 2026

This pass removes repeated work without changing authored gameplay, intentional
port differences, save formats, player IDs or storage origins. It follows the
[JavaScript bundling work](javascript-bundling.md). The editable source remains
split into modules; no release packages were built or published.

## Runtime work

### Menus, touch controls and scoreboard

- Neutral controller polls validate the current focus instead of scanning every
  menu control and all of their ancestor styles. Actual input, changed/removed
  focus, hidden/disabled controls and modal transitions still inspect the
  current DOM. There is no cached list of stale controls.
- An unchanged touch context compares its three flags directly. Real mode
  changes still release pointers and update the overlays.
- Once the debriefing fade finishes, its canvas keeps the existing pixels.
  Values, layout, artwork, fonts and context restoration invalidate the cache.
  The fade, continue delay and click/touch behavior are unchanged.

In an isolated 46-control menu fixture, 600 neutral polls went from 600 subtree
queries and 156,600 computed-style reads to **zero queries and 2,400 style
reads**. For 600 stable scoreboard frames, 600 clears, 16,800 text draws and
3,000 image draws became **zero**. All 24 before/after image pairs matched at
desktop, portrait and landscape dimensions. These are work-count reductions,
not whole-game CPU or FPS measurements.

See the [UI audit and evidence](../temp_work/efficiency-2026-10-26/ui-runtime-review.md).

### Positional audio

- Each physical door's audio portal is evaluated once per update, instead of
  once for each directed area link. Motion, visibility and material opacity
  are still checked every update. Connectivity caches are invalidated as soon
  as a portal changes.
- Unchanged media volume and stereo gains are no longer sent repeatedly to
  the browser's audio backend. Distance, obstruction and fades are still
  calculated at the same cadence, with the same formulas.
- Checking for unfinished pickup sounds now walks the existing set directly,
  without creating an intermediate array.

For 40 stationary positioned voices over 600 updates, **72,000 redundant gain
assignments were eliminated**. Complete diagnostic audio snapshots and saved
audio states matched the previous implementation. Portal material checks
halved in all five real level graphs. This changes neither hearing distances
nor the intentional music/sound scheduling.

All 35 affected audio checks passed. Four old test expectations were corrected
to match the already implemented, intentionally increased hearing distances;
their failures were reproduced against the pre-change source first. See the
[core runtime audit](../temp_work/efficiency-2026-10-26/core-runtime-audit.md)
and [operation counts](../temp_work/efficiency-2026-10-26/core-audio-benchmark.json).

## Tooling

### Local web server

`npm run serve` now streams files with backpressure instead of buffering each
complete file per request. It supports body-free `HEAD`, single byte ranges for
media seeking, and `304` revalidation for unchanged assets. `Cache-Control:
no-cache` remains: changed source is checked on the next visit. The URL/origin
and normal startup refresh are unchanged, so browser saves remain in place.

Actual intro video, Graveyard music and bundle checks returned precisely the
requested 65,536-byte slice; revalidation and `HEAD` returned no body. The
previous server sent the complete file even for those requests. Aborted media
requests close their stream and file handle. Nginx and Electron keep their own
existing serving implementations.

### Android asset preparation

Preparation now copies and hashes each asset in bounded chunks, and creates
each staging directory once. It no longer holds an entire movie or model in
memory before copying it. Manifest hashes still cover the exact output bytes;
required-file validation, symlink checks, atomic replacement and rollback are
preserved. The existing generated tree remains intact if preparation fails.

The affected server/preparation tests passed 15 cases, including exact binary
bytes, large multi-chunk assets, empty optional files, range boundaries, cache
invalidation, disconnected clients and protected staging paths. No APK/AAB was
produced for this review.

An actual staging pass copied 3,088 runtime files (202,257,545 bytes). A separate
hash comparison confirmed every staged file equals its source and manifest
entry. This validates preparation, not an Android package or physical device.

The streaming APIs follow [Node's file streams](https://nodejs.org/api/fs.html#filehandlecreatereadstreamoptions)
and [pipeline cleanup/backpressure](https://nodejs.org/api/stream.html#streampipelinesource-transforms-destination-callback);
HTTP range and conditional responses follow [RFC 9110](https://www.rfc-editor.org/rfc/rfc9110.html).

## Documentation and audit boundaries

Current platform/build status now has one primary reference:
[platform support and validation](portability.md). README/build guidance links
there instead of repeating version-specific status tables. Obsolete claims
that Android had no APK/AAB and that 1.0.1 was the latest packaged version were
corrected against retained records; historical runtime/device limitations were
preserved. Five links to intentionally removed screenshot/save artifacts were
replaced with retained reports or an explicit description of their removal.
Actionable local paths now use the current checkout and `temp_work/`.

Ten active browser harnesses still navigated removed flat-menu buttons or
settings that had moved into submenus. They now share
[`tests/scene-menu.mjs`](../tests/scene-menu.mjs), which uses the visible original
menu controls, including real touch taps. All ten passed after migration:
campaign settings, unlock-levels, level selection, new-adventure ability reset,
player menu/lifecycle, recovery, replayed introductions, touch and subpath
hosting. The older flat-menu appearance harness is explicitly historical and
points to its current replacements instead of silently timing out. Historical
assertions and research records were retained.

## Combined source verification

- UI unit checks: **16 passed**, plus 24 exact before/after scoreboard image
  comparisons and controller focus/activation comparisons.
- Audio unit checks: **35 passed**, including saved playback state and all five
  original portal graphs.
- Server and Android preparation: **15 passed**, plus actual source/staging
  hashes and media-range checks.
- Ten migrated browser harnesses passed. The hosting run kept all **240**
  requested resource URLs under `/redcatspookkasteel/`, with no browser errors.
- The current generated bundle loaded an older save through the real local
  server. Saved position, health and score matched, and loading did not alter
  the stored save bytes. A separate chapter-load loop then verified each of
  the five distinct level IDs, rendered its world and updated positional audio
  without script/browser errors. Its isolated fixture pre-unlocked chapters;
  this was a loading smoke check, not a cheat-free campaign playthrough.

The first chapter-loop attempt failed to assert that a locked chapter was
actually entered, so it repeated the Forest. That record is superseded by the
[corrected five-level result](../temp_work/efficiency-2026-10-26/browser-1793048522042/report.json),
which requires both a successful load return and the exact requested level ID.
The retained [verification summary](../temp_work/efficiency-2026-10-26/verification-summary.json)
identifies the authoritative records. Browser checks used headless software
WebGL; no low-end-device FPS or CPU improvement is claimed from those runs.

## Review coverage and limits

The final documentation check covered 153 root/docs Markdown files, 776
relative file links, 68 heading links and referenced npm/tool/test commands.
Five standalone test-room documents and their 20 relative links also passed.
The code sweep syntax-checked 720 JavaScript/Python source, tool and test files,
including the standalone test rooms. Focused semantic review covered the main
runtime's UI/input, world/effect/audio/collision/streaming and preparation paths.
Generated bundles, third-party libraries, original decompiled code and retained
historical evidence were not rewritten. Independent test-room snapshots remain
independent; their duplicate code is deliberate.

A scan and focused regression checks cannot establish that every possible
optimization has been found or replace a current full campaign/device test.
Historical research is evidence, not a live TODO list. Verification records and
retained test fixtures are in
[`temp_work/efficiency-2026-10-26/`](../temp_work/efficiency-2026-10-26/).
