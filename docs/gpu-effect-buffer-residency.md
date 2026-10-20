# GPU effect-buffer residency

Implemented on 18 October 2026 after [the further CPU optimization pass](cpu-spatial-query-performance.md), for the shared desktop/mobile-browser source. No packages were built or published.

## What changes

World chunks and actor resources already release inactive GPU geometry/textures with shared-owner protection. The remaining large avoidable reservation was effect buffers: each first-used billboard artwork allocated space for 8,192 particles, approximately 416 KiB, even if its draw contained only one particle. These buffers remained allocated until leaving the level.

- Billboard storage now starts at 64 instances, beam storage at 32. Accepted submissions grow storage geometrically up to the **unchanged** original maximum or the batch's custom maximum. Coordinates, UVs, colors, animation timing and submission order are preserved.
- After **ten seconds without visible submissions**, the batch disposes its GPU geometry once and shrinks its CPU draw arrays to their initial sizes. Returning effects grow/upload and draw in that same frame. There is no asynchronous resource-loading wait.
- Resizing disposes old GPU attributes before replacing them, reusing the same owned geometry. This also resets Three.js's cached instance limit. The resource registry does not grow on each resize.
- Beam/ribbon/Gargoyle quads now use conservative view-frustum rejection before filling draw buffers. Bounds enclose all six final world-space vertices, plus a Float32 rounding margin. Wide/crossing quads remain visible. Off-camera ongoing effects can consequently become GPU-idle while their simulation continues.

These are graphics allocations only. Script objects, enabled states, particle simulation, random state, audio/music scheduling, collision, buttons, pathways and saved progress are retained. Existing world/actor streaming distances and hysteresis remain unchanged to avoid reintroducing camera-turn/circle-walk hitches. Shared textures, skyboxes and lightmaps are not repeatedly evicted.

## Actual WebGL measurements

Chrome on the development hardware, 960 × 540 game viewport. A wrapper records actual `bufferData` allocation sizes and `deleteBuffer` calls; figures below are **live vertex/index-buffer allocations**, not total GPU memory, textures, driver overhead or GPU utilization percentages.

The five scene fixtures use isolated profiles and deterministic 180-frame input. They pause audio and authored camera/motion timelines, disable encounter triggers/damage, compare game snapshots, turn away long enough to release idle graphics, and return to the original camera. This is scoped graphics validation, not a complete campaign playthrough.

| Sampled view | Before | After | Less buffer memory |
| --- | ---: | ---: | ---: |
| Het Bos | 1,583,196 B | 1,160,540 B | 26.7% |
| Het Kasteel | 2,837,964 B | 2,415,308 B | 14.9% |
| Het Kerkhof | 1,940,374 B | 1,071,766 B | 44.8% |
| De Grotten | 999,462 B | 473,126 B | 52.7% |
| De Kasteeltoren | 1,016,410 B | 593,754 B | 41.6% |

The effect batches' CPU draw-array storage in these scenes falls from **21.3–23.0 MB to 0.25–0.29 MB**. These are temporary drawing arrays, not the native particle simulation/save data.

A separate actual-WebGL billboard/beam fixture verifies the full size range:

- One particle + one beam: **536,668 → 10,332 bytes** of live buffers.
- Maximum 8,192 particles + 512 beams: both variants use **536,668 bytes**, draw the same count and produce identical artwork. The maximum is preserved.
- After the ten-second idle grace: **536,668 → 0 bytes** for those fixture buffers. Repeated empty frames do not repeatedly dispose/allocate.
- Returning with 1,200 particles + 40 beams: **536,668 → 120,412 bytes**, immediately visible in the first returned frame.

## Correctness

- All **five game snapshots match exactly**.
- **Nineteen before/after image pairs have zero changed pixels**, including all five views, all five returns, full-capacity effects, idle/re-entry and WebGL context restoration.
- No page errors or WebGL errors were recorded.
- A retained Float32 differential matches **9,523 billboard submissions and 1,825 beam submissions**, including growth, custom caps, UV/color data, clamping and idle re-entry.
- Six new focused tests cover disposal order, shared geometry ownership, limits, material states, empty-frame hysteresis, restored uploads, all frustum planes, final-vertex/large-quad intersections and exact accepted vertex data. Twelve existing relevant effect/CPU tests also pass. Unrelated campaign tests were not rerun.

This lowers graphics memory reservations and off-camera beam submissions. It does not promise the same percentage reduction in total VRAM or GPU usage on every device. A scene can still need the original maximum buffers during a busy fight.

## Retained evidence

[`temp_work/gpu-residency-2026-10-18/`](../temp_work/gpu-residency-2026-10-18/) contains:

- `before/src/` and source hashes: CPU-optimized source immediately before the GPU changes.
- `browser-memory.mjs`: actual-WebGL ledger, full-capacity/idle/re-entry/context fixture and five-level comparison.
- `before-webgl/`, `after-webgl/`, `comparison.json`: scene/fixture images, snapshots and resource reports.
- `before-context-check/`, `after-context-check/`: isolated context-restoration recheck with correct ledger reset on context loss.
- `effect-buffers-differential.mjs` / `.json`, focused test logs.

The first ledger retained old allocation entries after WebGL context loss, although the browser had automatically freed those buffers without invoking `deleteBuffer`. That fixture accounting error does not affect the ordinary scene/idle numbers or images. The corrected context-only rerun resets the ledger on `webglcontextlost`; initial evidence is retained for comparison.

From the project root, run variants sequentially with new result labels:

```sh
node temp_work/gpu-residency-2026-10-18/browser-memory.mjs before-recheck before
node temp_work/gpu-residency-2026-10-18/browser-memory.mjs after-recheck
node --test tests/effect-buffer-residency.test.mjs
```


## Fragment actors: props and knight armour (19 October 2026)

The subsequent fragment pass applies the same shared renderer/pool to every **existing** 3D breakup path. The campaign contains 49 generic prop sources using 12 fragment artworks, plus 22 knights using nine armour/weapon artworks. This covers crates, grave covers, glass, planks, the destructible gate, explosive rocks and knight breakup. Ordinary enemy fading and purple smoke remain their existing corpse/billboard effects.

- Each piece keeps its original independent native ballistic state, collision retries, spin, settling, lifetime, transparency and lighting. Actual spawning is unrestricted by preparation budgets; fragment counts and artwork are not reduced.
- Transparent double-sided pieces use stable back/front material passes in the original group order, avoiding Three.js material/program invalidation twice per draw. Knight armour retains its original opaque pass until fading starts.
- A per-artwork pool reuses temporary roots, materials and immutable grouped geometry. Loading prepares shaders/textures against the final scene lights. Nearby intact props reserve at most 128 entries in total, creating at most eight per ordinary update; one small shader owner remains per artwork. Unneeded burst overflow expires after ten seconds. Waiting beside an intact stack retains the needed reservation.
- Static fragment child transforms are composed once per acquisition. The moving parent remains dynamic, and lighting explicitly forces the current child world matrix before sampling. Reacquiring a piece also starts a fresh native Sun selection, even if its spawn position equals its previous lifetime's last position.
- Floor/Sun obstruction checks use conservative brush candidates and scalar Boolean BSP traversal, retaining authored order, rotated-brush fallbacks and exact detailed traces where required. Distant blast targets can be rejected using conservative current skeletal bounds before deferred vertex skinning. Nearby radial damage still uses the original posed box and obstruction checks.
- Damage and rendering reuse the same immutable seeded explosion cohort. Consecutive destruction centre/bounds queries reuse an unchanged posed box. Shared chunk materials are inspected once per resource-release query. Quaternion integration retains its original arithmetic while allocating fewer intermediate arrays.

The retained source baseline already contains the preceding CPU/GPU work. No render-scale reduction, physics-rate reduction, sound/music change or package build is part of this pass.

### Fragment validation

Evidence is retained in [`temp_work/crate-performance-2026-10-18/`](../temp_work/crate-performance-2026-10-18/):

- `fragment-source-inventory.json` / `.md` lists every campaign source and original fragment type. All 21 currently used fragment artworks are present and static.
- `debris-material-visual/` compares 152 original-artwork/rotation/opacity cases, including knight opaque/fade variants, with identical pixels.
- `verified-visual-before/` versus `verified-visual-fixed/` uses the actual seven-crate saved scene at nine fixed simulation times. Crate states, fragment positions/velocities/orientations/ages/lifetimes/contacts and draw counts match exactly. Eight images are pixel-identical; one differs by one channel value at two pixels. No script or WebGL errors were recorded. `verified-visual-fixed-comparison.json` contains the per-frame results.
- `floor-lighting/` retains 90,000 before/after floor/Sun queries and 90,000 Boolean BSP comparisons across the five original levels. Quaternion testing compares 100,000 outputs exactly. Focused tests cover pools, bounded preparation, idle cleanup, matrix freshness before rendering, reuse after brush changes, damage, save tails, lighting and shared GPU ownership; the knight-death integration check also passes. Unrelated historical campaign tests were not rerun.

The first snapshot harness attempted to intercept the custom `redcat:` protocol; Electron did not apply that route, so those labelled snapshot runs actually loaded current source. Use the **verified** comparisons above: their retained `before-entry.html` loads `before/src/main.js` explicitly, and reports confirm that the old source has no fragment pool. Earlier runs and the intermediate lighting-regression images remain retained for diagnosis, rather than being used as successful comparison evidence.

An experimental loading-time simulation warmup did not measurably improve the initial burst and was removed. The production path prepares only renderer resources and query plans during loading; it does not run synthetic destruction, advance gameplay clocks or dispatch scripts/audio.


### Saved crate-scene performance

The verified live comparison uses Electron/Wayland on the development Ryzen 9 5950X/Radeon RX 6700 XT, the saved 2560 × 1440 window with **135% rendering scale** (3456 × 1944 actual WebGL buffer) and **4× MSAA**. A real held shooting input destroys the scripted seven-crate stack. Audio code remains active; only the isolated benchmark process is muted. The original profile is not used as the benchmark's writable profile.

| Measure while fragments exist | Retained before source | Final source, after waiting 21 seconds |
| --- | ---: | ---: |
| Average frame rate | 200 FPS | 325 FPS |
| Lowest rolling one-second frame rate | 84 FPS | 215 FPS |
| Lowest rolling quarter-second frame rate | 60 FPS | 176 FPS |
| 95th-percentile frame interval | 11.3 ms | 4.8 ms |
| Largest frame interval | 48.0 ms | 13.8 ms |

These runs retain native time-seeded fragmentation, producing 94 and 86 peak pieces respectively; the authored seven-crate range is 70–105. They are representative live runs, **not an identical-random-seed percentage benchmark**. Exact seed/physics/image equivalence is checked separately with the fixed-time fixture above. The final long wait verifies that nearby preparation remains available beyond the ten-second overflow trim interval.

The scene exceeds 200 FPS in every measured one-second window, but initial individual frames and the shortest windows still fall below that target. This is **not a claim of a strict 200-FPS minimum on every frame**, nor a campaign-wide or low-end-device FPS guarantee. Remaining first-burst work includes synchronous destruction/scripts, fragment creation, lighting and rendering; it was not hidden by changing gameplay timing or dropping particles. No script/WebGL errors occurred in either verified live run.

`verified-performance-comparison.json` summarizes `verified-before-plain/` and `verified-after-idle-plain/`. Run new labels sequentially to retain earlier evidence:

```sh
node temp_work/crate-performance-2026-10-18/benchmark.mjs before-recheck clean plain snapshot
REDCAT_BENCH_IDLE_MS=21000 node temp_work/crate-performance-2026-10-18/benchmark.mjs after-recheck clean plain
```
