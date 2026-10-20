# CPU work reduction for slower devices

Implemented and checked on 18 October 2026 after high CPU usage was reported on a 2019 Intel Core i3. This pass reduces repeated calculations and drawing; it does not lower animation, enemy, collision, or effect update rates.

A further browser optimization pass after the 0.9.9 release adds deferred hidden-actor poses, on-demand collision triangles, smaller effect uploads, particle culling and paused-frame reuse. See [the follow-up report](browser-cpu-performance-followup.md) for its changes, measurements and checks; the results below describe the first pass only.

## Changes

- **Actor animation:** Gather the exact bounding box during skinning, then compute the bounding sphere from that box's center. This removes two redundant full vertex scans per changed pose. Bounds use the actual rounded Float32 vertex values. Packed rigid actors use this path; other layouts/morph targets retain Three.js bounds calculation. Normal lengths use direct square-root normalization, appropriate for the bounded original normals and rigid bone transforms.
- **Actor lighting:** Read positions from the scene matrices that were already updated. Keep the scene-wide update, floor probes, obstruction checks, lighting limits, and mounted/debris transforms; avoid repeating ancestor matrix updates for each lit mesh.
- **Effects and light selection:** Reuse beam/disc scratch vectors and write directly to existing geometry buffers. Calculate each light's camera distance once before sorting. Preserve beam vertices, UVs, per-vertex colours, player-light priority, stable equal-distance ordering, and the eight-light limit.
- **Gameplay:** Calculate pickup position/distance only for pickups. Keep the original shared update order, current enabled/health checks, mounted pickup positions, line-of-sight checks, and all non-pickup behavior.
- **Moving scenery:** Reuse the final pose returned by a motion update instead of sampling the same pose again. The returned pose is calculated after motion events, blocked steps and callbacks; no event or moving-solid step is skipped.
- **HUD:** Keep the existing canvas drawing while its displayed values are unchanged. Refresh for player/target values, artwork, canvas size, game viewport, display pixel ratio, touch inset, and restored drawing contexts. Continue checking layout every frame so resize and device rotation remain responsive. Avoid rewriting unchanged hidden text counters as well.

The existing navigation budgets, smooth zombie emergence, world streaming, refresh-rate scheduling, resolution settings, audio scheduling and intentional gameplay changes remain in place. Saves require no migration.

## Measured comparison

Measurements use the development machine (Ryzen 9 5950X, Radeon RX 6700 XT), Chrome **155.0.8059.84**, a 960 × 540 viewport and the same seeded inputs/source fixture before and after. The comparison loads retained pre-edit copies through request overrides, without reverting the working source.

Each level receives 120 warmup updates, 360 measured updates at a fixed simulated 1/60-second step, and a separate 240-update CPU profile. The fixture turns/moves RedCat near the level entrance and keeps ordinary enemy/actor updates. Scripted camera/motion players are stopped; triggers and fairy encounters are disabled, damage is suppressed, and audio is paused to make the runs repeatable. It is a performance fixture, **not a campaign playthrough**. Both runs use identical conditions.

These numbers are **CPU time spent updating the world and audio per simulated frame**, excluding the separate renderer submission and HUD. They are not displayed FPS, GPU execution time, or process-wide CPU percentages. The normal frame loop continues to follow display refresh. At a higher achieved frame rate, total CPU usage need not fall by the same percentage as work per frame.

| Scene | Before | After | Less CPU update time |
| --- | ---: | ---: | ---: |
| Het Kerkhof | 5.08 ms | 4.21 ms | 17.1% |
| Het Kasteel | 2.45 ms | 2.25 ms | 8.2% |
| De Grotten | 2.67 ms | 2.41 ms | 9.8% |

A second controlled comparison used Chrome's **4× CPU throttling**:

| Scene | Before | After | Less CPU update time | 95th percentile, before → after |
| --- | ---: | ---: | ---: | ---: |
| Het Kerkhof | 21.71 ms | 18.80 ms | 13.4% | 26.1 → 24.4 ms |
| Het Kasteel | 11.06 ms | 9.54 ms | 13.7% | 14.5 → 13.0 ms |
| De Grotten | 11.11 ms | 9.35 ms | 15.8% | 14.1 → 12.2 ms |

CPU throttling does not emulate a specific i3, its cache/memory system, or integrated graphics. The user's actual device remains the final check. These are short targeted samples; they do not establish minimum FPS across an entire campaign. The first intermediate optimization run is also retained, but the tables use the final normal-CPU comparison and the completed 4× comparison.

A separate real-browser HUD comparison checks desktop, portrait phone and landscape phone layouts. Across 600 unchanged frames per layout, the previous implementation issued **13,800 drawImage calls and 600 clears**; the updated implementation issues **zero** after its initial drawing. This saves additional work outside the update-time tables.

## Correctness checks

- **60 focused tests passed** across the changed animation/bounds, rendering/lighting, gameplay/motion and HUD paths. Unrelated campaign/platform suites were not rerun.
- Compared **41 actor models, 172 clips and 2,752 poses** against the retained pre-edit animator. Float32 vertices/normals, bone transforms, bounds and animation state are identical, including transitions.
- Final Castle, Graveyard and Caves fixture snapshots are identical before/after, and all three screenshots have **zero changed pixels**. World residency and enemy counts also match.
- The real-browser HUD check produced **36 identical image pairs**, including changed health, counters and enemy portraits at three viewport sizes.
- New bounded-work tests check trigger/pickup order, transformed pickups, blocked moving scenery, callback-replaced motion, exact beam data, light order, fresh mounted/debris matrices, and HUD invalidation after resize/context restoration.
- No browser script errors were recorded in the successful scene/HUD comparisons. No release packages were generated, and the user's save/profile was not modified.

## Retained evidence and reproduction

All evidence is in [`temp_work/cpu-low-end-2026-10-18/`](../temp_work/cpu-low-end-2026-10-18/):

- `before/src/`: working-source copies immediately before this pass, including earlier uncommitted fixes.
- `benchmark.mjs`, `comparison.json`, `final-before-1x/`, `final-after-1x/`, `baseline-4x/`, `optimized-4x/`: timing samples, profiles, snapshots and screenshots.
- `animation-pose-differential.mjs` / `.json`: full original-asset pose comparison.
- `scene-pixel-comparison.json`: screenshot comparison.
- `hud-browser.mjs`, `hud-browser/report.json`: actual-canvas pixel and redraw comparisons.
- `animation-tests.log`, `render-tests.log`, `render-integration-tests.log`, `focused-checks.json`, `hud-redraw-implementation.md`: focused test evidence and commands.

From the project root, use fresh result labels to retain earlier runs:

```sh
node temp_work/cpu-low-end-2026-10-18/benchmark.mjs before-recheck 4 before
node temp_work/cpu-low-end-2026-10-18/benchmark.mjs after-recheck 4
```

The benchmark fixes its seeded controls and owns isolated browser profiles. Its relative `TMPDIR` points into the retained work directory; using an absolute path there exceeded Chrome's Unix socket path limit. That failed launch is retained in `hud-browser-long-socket-path.log`; the subsequent relative-path run passed. This is a test-harness path constraint, not a game/runtime change.
