# Forward-motion loading hitch reproduction and verification

19 October 2026. No new builds. Original Electron profile copied read-only; all runtime writes use isolated browser profiles retained here.

## Exact local-save walking test

Latest copied save: sequence 3336, saved at `2026-10-19T14:26:59.832Z`, Forest `lvl00a`. RedCat starts at `[-2266.0264895298365,-159.95,2886.151141654855]`, yaw `6.212407346410086`, pitch `.128`, no-clip **off**. The harness runs the actual game animation-frame main loop for 420 frames. It presses the actual forward input (`KeyW`) for frames 30–389; no player-position probes, physics bypass, door manipulation or script changes are used in this current-save walking test. RedCat naturally walks to the next wall, ending at about `[-2173,-159.95,2031.05]`.

| Observation | Before | Final source |
|---|---:|---:|
| Held main-loop updates | 6 | 0 |
| Frames ending with an incomplete required view | 13 | 0 |
| Audio mixer pause / resume | 0 / 0 | 0 / 0 |
| World chunk request calls | 15 | 15 |
| New network requests | 13 footstep WAV requests | 13 footstep WAV requests |
| Final resident world vertices | 13,782 | 13,782 |
| Final resident world chunks | 194 / 703 | 194 / 703 |
| Final world textures | 7 | 7 |
| Maximum staged work jobs per frame | 3 | 2 |
| Maximum raw buffer uploads per frame | 46 | 8 |
| Maximum CPU callback time after frame 30 | 4.3 ms | 3.9 ms |
| 95th percentile CPU callback time | 2.8 ms | 3.3 ms |

Raw uploads include ordinary animated geometry; these counts are not numbers of independent streaming jobs. CPU measurements are from this browser/machine, not a low-end-device guarantee. The modest 95th-percentile increase reflects work moved earlier into otherwise normal frames. The functional result is six eliminated one-frame holds. The initial before-run 27.3 ms maximum is frame 0 immediately after loading, before forward movement begins; it is not the walking hitch.

The six prior holds occurred at frames 53, 71, 73, 83, 85 and 89. Each missing object was one world chunk in already-admitted area 8. RedCat remained in area 4 throughout. These chunks were first requested while already in view, at camera distances 2,045–2,048 units: the old preparation limit exactly matched the drawing limit. The shared queue then needed the following frame to activate them. Held callback time was only .4–.7 ms, ruling out a synchronous long CPU task as the cause of these specific holds. There were no missing actors or image network fetches.

The same chunks are now requested at 2,092–2,128 units using the bounded camera-motion prediction. They enter the unchanged 2,048-unit drawing range 17, 23, 24, 24, 24 and 23 frames later. The finite preparation lead therefore removes the holds without changing visible distance or final route residency. `six-former-hold-chunks-lead.json` retains exact positions, request frames and distances. The background Forest music remains on the same buffered source after its initial asynchronous start and no mixer pause/resume occurs. The distant Forest Brutus actor is never resident.

## Five-level doorway graphics probes

`five-level-boundaries.mjs` additionally selects two original BSP doorway models in each level and probes across each doorway in both directions: twenty doorway traversals and 1,094 graphics frames in each version. These are explicit position probes for graphics loading, **not actual walking routes, campaign validation, or evidence that closed doors can be crossed in gameplay**. Simulation is frozen. The authored camera is temporarily neutralized so the ordinary player-room view can be selected; its original object and the player pose are restored afterward. The complete gameplay snapshot matches exactly before/after each level.

| Level | Frames | Incomplete before | Incomplete after | Gameplay snapshot preserved |
|---|---:|---:|---:|---|
| `lvl00a` | 246 | 2 | 0 | Yes |
| `lvl01a` | 216 | 0 | 0 | Yes |
| `lvl02a` | 208 | 0 | 0 | Yes |
| `lvl03a` | 208 | 0 | 0 | Yes |
| `lvl04a` | 216 | 0 | 0 | Yes |

The Forest area-7 chunk that previously caused two incomplete frames is now requested on frame 0 at distance 2,072.96 and first becomes required on frame 11. Other selected doorway views were already complete at the start and remain complete across the boundary; the probe does not claim cold misses where none occurred. All levels retain the maximum three-job preparation budget. There were no browser or script errors.

## Retained evidence

- `save/`: untouched copied LevelDB files, parser and extracted latest save.
- `source-before/`: all seven relevant source modules before this forward-motion fix.
- `before-forward-1792420150652/report.json`: actual walking baseline.
- `after-forward-1792420446926/report.json`: actual walking after fix.
- `before-five-boundaries-1792420350406/report.json`: five-level graphics boundary baseline.
- `after-five-boundaries-1792420542334/report.json`: five-level graphics boundary after fix.
- `verification-summary.json`: assertions and source hashes.
- `forward-walk.mjs`, `five-level-boundaries.mjs`: reproducible isolated harnesses.

Every served source hash in both final reports matched the current files at verification time. All isolated browser and server processes were stopped. The original profile was never written and no release artifacts were generated.
