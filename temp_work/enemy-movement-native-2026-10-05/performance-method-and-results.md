# Final focused enemy movement validation

All assertions passed in the original comparable fixture and in both supplemental authored-edge contact runs. No JavaScript page errors were recorded. Existing baseline/intermediate/final artifacts remain separate. No runtime source or existing tests were modified by these measurements. After the capture-start hashes were recorded, the parent added legacy-save restore migration to `src/gameplay.js`; the parent confirmed this affects old saved orbit/pursuit state and not these fresh-level fixtures. All other captured runtime hashes still match. Capture-end hashes are retained separately.

## Final behavior

- The original `dknopa` script activates `zombie3`; the zombie exits its grave and moves more than 70 units from its original position. All original activation, movement and trace-budget assertions passed. Final patrol changes alter parts of its trajectory, so final positions are not byte-for-byte equivalent to baseline beyond the approach.
- In the grounded authored-edge supplement, RedCat stands at `[1144,312.05,-700]`, directly beneath the midpoint of the original explicit `GrobberPathPoint63 -> GrobberPathPoint60` bat edge. `MovingEnemy16` retains its original spawn `[1219,364,-754]`. Waypoints, original BSP collisions and player hull collisions remain active. No movement mode or random-state override is applied.
- The grounded supplement records **5 physical contact attacks and 5 health-damage events**, first at **5.483 seconds**. Minimum center distance is **35.06 units**. There are **zero player-body overlaps and zero world-solid embeddings** across 600 frames. RedCat remains exactly at the target floor with `noClip=false`. All approach/contact/body/work-budget assertions pass.
- An earlier supplementary run retained `noClip=true` to hold the player and consequently tested contact callbacks without health damage. That run passed too and remains preserved. The grounded result is the stronger contact validation.

## CPU-side update durations

Times include synchronous world update plus audio update. Rendering submission is measured separately. These are not displayed FPS or GPU-completion times. These local-machine figures do not prove low-end-hardware performance. One run per version is descriptive, not a statistical speedup claim. The off-route bat CPU figures rise slightly while trace count drops; single-run variation and changed movement semantics prevent claiming an FPS gain.

| Scene | Frames | Median baseline/final ms | p95 baseline/final ms | p99 baseline/final ms | Peak baseline/final ms | Peak BSP traces/frame baseline/final |
|---|---:|---:|---:|---:|---:|---:|
| approach | 18 | 6.6 / 7.1 | 22.5 / 25.1 | 22.5 / 25.1 | 22.5 / 25.1 | 52 / 44 |
| activation | 300 | 6.2 / 6.4 | 7.7 / 8.1 | 10.5 / 9.1 | 12.8 / 13.2 | 86 / 81 |
| chase0 | 360 | 6.1 / 6.0 | 7.5 / 7.2 | 9.6 / 8.2 | 11.0 / 10.1 | 71 / 58 |
| blocked-chase | 360 | 6.4 / 6.3 | 8.0 / 8.4 | 10.0 / 9.2 | 11.8 / 9.5 | 86 / 71 |
| original-castle-blocked-green-bat | 600 | 4.4 / 4.6 | 5.2 / 5.6 | 6.4 / 6.8 | 7.5 / 9.3 | 23 / 15 |

The separate grounded authored-edge contact run measures **4.1 / 5.0 / 6.0 / 13.6 ms** (median/p95/p99/peak) over 600 frames. Its maximum is 6 BSP traces per bat update and 19 total per frame.

The parent reported a 2.5-second focused unit test concurrent with part of the final comparable capture. Absolute frame timestamps were not recorded, so exact affected frames cannot be identified. **All samples, peaks and tails are retained; no outliers were removed.** The grounded supplemental run followed after that unit test ended.

## Reliable work bounds

CPU timing can vary with host activity. Collision work bounds are the stronger regression guard here:

- Original comparable harness enforces at most 18 BSP traces inside each zombie pursuit call and at most 48 global search traces per simulation frame. Final actual maxima are 17 and 16, matching baseline.
- Grounded contact harness enforces at most 48 global search traces/frame and at most 32 traces for a complete single bat update. Actual maxima are 0 search and 6 bat traces.
- Original off-route bat peak falls from 13 to 3 enemy-update traces. Total world peak falls from 23 to 15. The behavioral trajectory differs, so this is not an equivalent-behavior speedup claim.

## Off-route fixture interpretation

The original blocked target `[1069.33547,312.05,-854.00264]` has clear point LOS but a blocked body sweep (fraction 0.2151). Baseline direct-homing movement approached within 20.81 units. Final authored-waypoint movement approaches within 135.524 units.

`native-bat-fixture-reachability.json` computes the nearest inspected authored edge (`GrobberPathPoint61 -> GrobberPathPoint64`) at **135.521 units** from that target, essentially matching the observed final distance. The native implementation copies actor position from its waypoint cursor each frame rather than directly homing to RedCat. The preserved off-route result therefore documents the fidelity change; it must not be represented as equivalent reachability. Physical contact is established independently by the grounded authored-edge supplement above.

## Resources

Across final graveyard stages, actors remain **383**. Scene children peak at **1514** during the original explosion and return to **1500**. Resource cache peak is **1428**, final **1425**; sound-cache peak/final **34** (baseline 33); shader programs peak/final **17**. Projectiles remain zero; pursuit jobs peak at one; debris peaks at 14 and clears.

For the off-route castle and grounded contact scenes, actors remain **291** and scene children **966**, resources warm from **1040 to 1048**, particles peak at **1404**, and projectiles/pursuit jobs remain zero. The grounded scene warms 11 to 13 sounds and 0 to 9 shader programs; the off-route scene warms 11 to 12 sounds and 11 to 12 programs. Contact damage accounts for the extra grounded sound. These are finite bounds in the measured duration, not a long-duration leak proof. Final-120-frame collection ranges and highest update frames are retained in `perf-final-comparison.json`.

## Method and artifacts

All runs use isolated headless `/usr/bin/google-chrome`, Playwright, `--use-angle=gl`, 1280 by 720, actual original assets, and manual simulation steps of 1/60 second. The user's running game is untouched.

The comparable graveyard fixture retains original enemies, models, effects and audio. It disables unrelated triggers and follows the original zombie-hitch approach/activation/chase path. During blocked combat chase, a zero-damage hit every 60 frames refreshes alertness. The off-route castle fixture isolates the original green bat and refreshes player memory every 60 frames. The grounded contact fixture applies no memory refresh or movement-state override.

- `perf-baseline.json`, `perf-after.json`, `perf-final.json`: complete comparable frame samples; corresponding logs and source hashes.
- `perf-final-comparison.json`: final-versus-baseline timings, bounds, resource tails, and highest update frames.
- `perf-authored-bat-contact-final.json`: original held-player supplementary run.
- `perf-authored-bat-contact-final-grounded.json`: grounded contact/damage run, including full mode/patrol trajectory.
- `performance-final-summary.json`: concise machine-readable final summary.
- `focused-performance.mjs`, `authored-bat-contact.mjs`, `authored-bat-contact-grounded.mjs`: reproducible isolated harnesses.

Run from the port root with `login:false`, setting `TMPDIR=temp_work/enemy-movement-native-2026-10-05/perf-tmp` and XDG cache/config directories beneath the same path. Set `PERF_PHASE` to a new unique label to preserve existing captures. All outputs and browser profiles/temp/cache remain beneath this work directory.
