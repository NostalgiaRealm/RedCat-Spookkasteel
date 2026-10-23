# Browser CPU performance follow-up

Implemented on 18 October 2026, after the 0.9.9 release and a further report of high CPU usage in Linux Chromium on a 2019 Core i3. This extends the [first CPU optimization pass](low-end-cpu-performance.md). These changes were subsequently included in the 1.0.0 and 1.0.1 packages; the measurements below describe the original source comparison, not a new target-hardware benchmark.

A [subsequent query/scene-update pass](cpu-spatial-query-performance.md) adds conservative collision/light spatial lookups and further matrix/resource bookkeeping reductions. Its measurements use this pass's completed working source as their baseline.

## Changes

- **Hidden enemy poses:** Keep animation clocks, selected clips, transitions and saved state current, while deferring bone sampling and vertex/normal skinning for actors outside the rendered view. Reading bone transforms resolves the current skeleton immediately. Collision, explosion bounds and defeat-reward queries resolve the required geometry. After residency updates, newly visible actors are skinned before lighting/render submission in that same frame. Camera turns and cuts therefore do not display an old pose or restart an animation.
- **Prop collision:** Update a conservative transformed pose box immediately, but construct the exact triangle/SAT data only if a relevant sweep reaches that box. Direct reads of exact bounds or triangles also prepare it. Distant animated hands no longer build complete collision meshes on every animation tick. Movement, projectiles, support-model exclusions, visibility and target bounds retain their exact narrow-phase behavior.
- **Effect uploads:** Upload only the live prefix of billboard and beam buffers. Empty batches do not invalidate their buffers. Reserved capacity remains available for busy scenes, and an expanded batch uploads all of its newly used vertices/instances.
- **Particle drawing:** Reject off-camera billboard artwork with conservative sphere tests before filling draw buffers. Bounds account for rotation, diagonal expansion and the native spout's extra corner offsets; large effects crossing the view are retained. Particle integration, births, fading, random state, save state and light/audio scheduling continue normally.
- **Placement and residency:** Reuse the fixed authored/scripted portion of actor rotations, applying current spin/support turns afterward. Reuse residency boxes until an actor mesh's world matrix changes. Moving platforms, turning props and large visible assemblies still update immediately.
- **Paused menus:** Keep the completed world image instead of resubmitting the frozen 3D scene every display frame. Redraw after resize/render-scale changes, no-clip repositioning, WebGL context restoration or pending streaming. Input/controller polling and menu interaction continue normally; playing still renders at the display refresh rate.

No frame cap, reduced gameplay update rate, enemy simplification or automatic graphics downgrade was introduced. Saves need no migration.

## Measured comparison

The retained before source is release commit `5f9a3f95`. Measurements use Chrome 155.0.8059.84 on the development Ryzen 9 5950X/Radeon RX 6700 XT system, with a 960 × 540 viewport and Chrome's **4× CPU throttling**. This is not a physical i3 measurement.

The final comparison warms each scene for 360 fixed 1/60-second updates, measures 600 updates without per-method timer wrappers, and separately profiles another 240 updates. Both variants use the same seeded controls and isolated browser state. As in the first pass, this fixture disables triggers/fairy encounters and damage, stops scripted camera/motion players, and pauses audio for reproducibility. It is a targeted performance fixture, not a campaign playthrough.

| Scene | World/audio update before → after | Render submission before → after | Less combined time |
| --- | ---: | ---: | ---: |
| Het Kerkhof | 19.90 → 14.40 ms | 3.53 → 3.01 ms | 25.7% |
| Het Kasteel | 10.74 → 8.51 ms | 3.25 → 2.90 ms | 18.5% |
| De Grotten | 9.87 → 8.03 ms | 1.45 → 1.31 ms | 17.5% |

These are JavaScript/world-update and renderer-submission timings per simulated frame, not total process CPU percentages, GPU execution time or displayed FPS. Earlier shorter instrumented samples varied, particularly in the Castle. The final table uses the longer warmed comparison consistently for all three scenes; intermediate runs are retained. The result does not promise a corresponding percentage reduction in the user's four-core CPU monitor, especially if the saved work allows more frames to render.

An actual WebGL buffer check drawing one flame billboard and one beam for 60 frames transferred **32,194,560 bytes before**, versus **16,080 bytes after** initialization. This small fixture demonstrates active-range uploads, not the size of every campaign frame.

A separate real-frame-loop check at 800 × 600 observed **46 paused world draws in 750 ms before**, versus **one after**. Controller polling continued on 44–46 frames. Changing render scale to 75% produced one new paused world draw at 600 × 450; resuming produced 16 draws in the following 250 ms. These are short behavior checks rather than sustained CPU benchmarks.

## Correctness and scope

- All three final before/after game snapshots match, and all three screenshots have **zero changed pixels**.
- Compared all **41 animated actor models, 172 clips and 2,752 poses** with the retained pre-edit animator: Float32 positions/normals, bone transforms, bounds, transitions and saved state match exactly.
- Focused checks cover deferred rendering/collision queries, camera re-entry, live bone reads, interrupted blends, moving/rotating prop sweeps, target bounds, masks, effect-buffer growth/shrinking, billboard edge cases, placement, residency, particle/fairy save continuity and lighting. Unrelated campaign suites were not rerun.
- A real-browser Caves fixture confirms shots still hit the loaded Max turret assembly at four heights. Its collision queries isolate that assembly from neighboring level props.
- No browser script errors were recorded in the final scene and paused-menu checks. Syntax and whitespace checks pass. User saves/profiles were not modified.
- Exploratory checks also encountered six failures in older fixtures. The identical failures reproduce using the retained pre-edit source: `actor-collision.test.mjs` has a dormant-animation assertion that ignores the outgoing transition and a turret factory lacking the player/level setup now required by `attachGameplay`; `destructible-threshold.test.mjs` expects saved explosion visuals to be discarded; the jump-feedback fixture in `enemy-animation.test.mjs` lacks the gameplay state now required by the frame update. Those historical fixtures were not changed as part of this performance work; their failures are retained rather than reported as passing. The changed collision paths receive the new differential and actual-browser checks above.

The 22 October documentation audit found these fixture assumptions still in the
current test sources. This remains test-maintenance work, not a newly observed
gameplay regression or a claim that six tests were rerun and failed on 22 October.
The later 1.0.1 release checks cover a separate focused set.

## Retained evidence and reproduction

Evidence is retained in [`temp_work/cpu-browser-followup-2026-10-18/`](../temp_work/cpu-browser-followup-2026-10-18/):

The list below describes the original run layout. The [22 October cleanup](../temp_work/cleanup-2026-10-22/README.md) removed disposable browser profiles, screenshots and full saves, and deduplicated source copies. Measurement reports, CPU profiles and unique evidence remain; use the cleanup's duplicate lookup and recorded Git revision to recover a removed baseline before rerunning a historical harness.

- `before/src/`: complete source snapshot before this pass.
- `benchmark-warm.mjs`, `final-warm-before-4x/`, `final-warm-after-4x/`, `final-comparison.json`: final timings, profiles, snapshots and images.
- `animation-pose-differential.mjs` / `.json`: original-asset pose comparison.
- `upload-check.mjs` / `.json`: actual WebGL upload byte counts.
- `paused-frame-check.mjs` / `.json`: paused redraw, resize, resume/controller and turret-query checks.
- Focused test logs, baseline fixture failures and intermediate experiments, including the discarded local-matrix caching attempt.

From the project root, use fresh labels and run the performance variants sequentially while other benchmark browsers are closed:

```sh
node temp_work/cpu-browser-followup-2026-10-18/benchmark-warm.mjs before-recheck 4 before
node temp_work/cpu-browser-followup-2026-10-18/benchmark-warm.mjs after-recheck 4
node --test tests/cpu-browser-work.test.mjs
```

The harness overrides only the baseline JavaScript files, leaving stylesheets with their proper MIME type. An earlier intermediate route incorrectly served the copied stylesheet as JavaScript; those screenshots/timings were not used in the final comparison. The corrected runs used the same layout and images. Create any fresh temporary browser files under the project's `temp_work/` directory; the original disposable browser files have been removed.
