# Further CPU query and scene-update improvements

Implemented on 18 October 2026 after a further report of high CPU use in Linux Chromium on a 2019 Core i3. The user confirmed hardware-accelerated WebGL/WebGPU. This extends [the previous browser CPU pass](browser-cpu-performance-followup.md); release packages have not been rebuilt with these source changes.

A subsequent [GPU effect-buffer residency pass](gpu-effect-buffer-residency.md) reduces unused draw-buffer allocations and off-camera beam submissions. Its baseline is the completed CPU source measured here.

## Changes

- **Nearby actor collision candidates:** A bounded spatial grid selects nearby prop records before the existing bounds, visibility, mask and exact triangle/SAT checks. Cached cell memberships retain original actor order. Current moving/animated bounds are published synchronously, including mounted props before player movement and projectile queries. Oversized actors, long sweeps and invalid/unbounded grid ranges use conservative fallbacks. The query cache is limited to 128 entries.
- **Current BSP model bounds:** The fixed physical-model list opts into a conservative bounds tree. `ModelTransformMap` publishes immutable numeric pose snapshots through ordinary `set`/`delete`/`clear` operations; changed poses dirty only their corresponding tree leaves. A query refits those bounds before checking them, including intermediate moving-door/platform poses and restores within the same frame. Candidate order, duplicate model IDs, world-model inclusion, masks and disabled-model validation retain the previous behavior. Ordinary mutable arrays and pose Maps retain their original contracts. Liquid contents still use the exact existing BSP clipping after candidate selection.
- **Collision allocation:** The convex-leaf loop keeps plane normals as scalar values until it returns a hit or penetration. Arithmetic order, the contact skin, side ordering and returned normal components stay unchanged.
- **Lighting:** Authored Suns use conservative local radius cells before their original distance/falloff/visibility scoring. Dynamic lights maintain only the nearest authored maximum with stable ties. Floor/Sun visibility checks compare brush transforms and portal states without allocating fresh snapshots every frame. Lighting colors, obstruction and selection rules are unchanged.
- **Scene updates:** Static model-zero chunks reuse their identity local matrices; scripted brushes still update automatically. Actor-resource ownership counts change on residency transitions instead of being rebuilt every frame. Fixed actor object/root lists retain authored order and live enabled/visibility state without scanning all gameplay waypoints/controllers on each actor update.
- **Lighting matrices:** During the synchronous effects phase, managed actor matrices reuse the residency update immediately before it. RedCat, knight fragments and newly created destructible fragments refresh their own ancestor chains. Direct lighting calls still refresh the scene, and a `finally` block clears preparation even after an effect error.

No frame cap, reduced simulation rate, altered enemy logic, geometry simplification, sound/music scheduling change, or save-format migration is introduced. Gameplay objects remain available to scripts even when their graphics are not rendered.

## Validation and measurements

The retained before source is the working source immediately before this pass, including the previous uncommitted browser CPU optimizations. These measurements therefore describe an additional improvement, rather than comparing all work against the released package.

The browser fixture uses the same seeded input, isolated profiles, 960 × 540 viewport, 360 warmup updates, 600 measured updates and 240 separately profiled updates as the preceding pass. Chrome runs on the development Ryzen 9 5950X/Radeon RX 6700 XT with 4× CPU throttling. Damage and encounter triggers are disabled, scripted camera/motion players stopped and audio paused for repeatability. This is a targeted scene/performance comparison, not a full campaign playthrough or a physical i3 measurement.

| Scene | World/audio update before → after | Renderer submission before → after | Less combined time |
| --- | ---: | ---: | ---: |
| Het Kerkhof | 13.00 → 10.65 ms | 2.62 → 2.62 ms | 15.0% |
| Het Kasteel | 7.86 → 7.18 ms | 2.53 → 2.60 ms | 5.9% |
| De Grotten | 7.20 → 6.68 ms | 1.14 → 1.12 ms | 6.4% |

These are JavaScript/world-update and renderer-submission timings per simulated frame, not whole-process CPU percentages, GPU execution time or displayed FPS. An earlier successful tracked-refit run measured 7.3–18.4% less combined time; the table consistently uses the final source/run, including scalar collision changes, rather than picking the fastest sample from each experiment. Some renderer noise remains. No corresponding percentage reduction in the i3's CPU monitor is promised, especially if saved time lets more frames render.

All three final gameplay snapshots match the baseline exactly, all three screenshots have **zero changed pixels**, and no browser script errors were recorded.

- **156,000** exact BSP trace comparisons and **26,000** contents queries across all five actual level collision datasets match the retained before source. Cases include translated/rotated brushes, immediate pose changes and restores, Map replacement, disabled/invalid models, masks, zero-length traces, start-solid contacts and duplicate/order behavior.
- **23,995** authored-Sun queries match selected values and visibility-callback order; **2,099** dynamic-light cases preserve outputs, including typed-array rounding and ties. One hundred changing-transform frames retain visibility/floor behavior.
- **396,952** world-chunk visibility/bounds/layer classifications match across all five levels, multiple camera directions/FOVs, moved/hidden brushes and out-of-level cameras. A separate 400-actor/600-frame comparison preserves GPU-resource counts and release events.
- Focused tests cover local actor candidates/contact boundaries, moving-solid carrying and collision, tracked pose publication, lighting, resource ownership, current fragment matrices and cleanup after exceptions. Unrelated historical campaign suites were not rerun.

## Retained evidence

[`temp_work/cpu-deeper-2026-10-18/`](../temp_work/cpu-deeper-2026-10-18/) contains the complete `before/src/` source, source hashes, `before-4x/`, `final-after-4x/` and `final-comparison.json`, browser profiles/snapshots/screenshots, focused logs and subsystem differential scripts/results under `collision/`, `lighting/` and `visibility/`.

The initial static-tree experiment passed isolated collision tests but added overhead in the real Graveyard because many stationary mechanisms still retain transforms. Its `after-4x/` results are retained as an intermediate experiment. The current tracked-pose/refit implementation supersedes that design. The subsequent `refit-after-4x/` comparison is also retained; it predates the final scalar collision allocation reduction.

Use fresh labels to retain previous measurements, and run benchmark browsers sequentially:

```sh
node temp_work/cpu-deeper-2026-10-18/benchmark.mjs before-recheck 4 before
node temp_work/cpu-deeper-2026-10-18/benchmark.mjs after-recheck 4
```

The isolated live-audio process probe in `live-process-profile.mjs` confirmed hardware graphics and that renderer work dominated that development-system scene. Its audio-on/off phases occur at different times and are diagnostic only; they are not used to claim an audio optimization or a whole-game CPU percentage.
