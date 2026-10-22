# Room transition preparation benchmark

This retained harness compares the same copied Castle basement save and eight
doorway/return targets before and after the bounded preparation queue.

```sh
node temp_work/room-hitches-2026-10-19/benchmark.mjs --before --walk
node temp_work/room-hitches-2026-10-19/benchmark.mjs --after --walk
```

Append `--solid-camera` to both commands to use the normal camera collision
resolver. Without it, the copied save's no-clip inspection camera can enter
solid space; that deliberately invokes conservative room readiness. The solid
camera pair is therefore the more representative normal-play comparison.

`--before` serves the six edited source modules from `source-before/` at their
normal module URLs. Other files are served from the checkout. The baseline
therefore remains reproducible after implementation without reverting user
changes. The new queue modules are unreferenced by those baseline modules.
This includes the reconstructed exact original `room-visibility.js`, whose
SHA-256 is
`4668eee4b9e5fc511fc8c360dd3e6db23e14e9fa15f26fadb8599b7bd76d1e5f`,
matching the preceding room-streaming work's retained verification manifest.
Older five-overlay baseline runs used a live modified room selector and are
retained only as intermediate diagnostics. The authoritative pair is linked
from `benchmark-results.md` and `benchmark-comparison.json`.
Each run uses a separate retained Chrome profile and result directory here.
No original player profile or save is written.

The walk route advances 2.8 world units per manual frame, corresponding to
168 units per second at 60 Hz, and pauses for 48 frames at each target. The
older abrupt route, selected by omitting `--walk`, reaches each target in
16 frames. Both use the same target points. These are geometry position probes
bypassing player collision; doors and puzzle state are not modified, and this is not a
physical campaign traversal test.

The real game frame callback is suspended. Each manual frame pumps the shared
queue when present, selects current world and actor residency, updates effects,
and presents only if world geometry and all actor artwork report ready. An
incomplete view retains the last complete frame. Frames yield to asynchronous
fetch/decode callbacks for 8 ms. There is no per-frame `settle()` call; only
initial room preparation is settled before counters start.

The report records synchronous world activations and WebGL buffer/texture
submission calls per manual frame. Actor animation and effects can also issue
`bufferSubData`, so that counter is not solely streaming work. CPU durations
measure this manual streaming/render submission slice, not the complete game's
simulation, actual display frame rate, asynchronous image decoding outside the
slice, or GPU completion time. No `gl.finish()` stall is injected.

Optional `--cpu-throttle=4` uses Chromium's development-tool CPU throttle and
must not be represented as an actual low-end hardware measurement.

Every run asserts zero browser script errors, zero incomplete views presented,
and a ready final view after every doorway target. Retained report directories
contain individual frame measurements and aggregate p95/max values.
