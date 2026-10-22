# Forest lantern camera-turn comparison

19 October 2026. Exact copied local save, isolated Chrome profiles, real game main loop. No release builds or changes to the real user profile.

The copied WAL save (sequence 3331) is Forest `lvl00a`, player `[-1082.354830558774,-159.95,3533.9617514477736]`. Both runs make the same two camera-only left sweeps and returns over 420 frames. The injected input changes only camera yaw; it does not teleport RedCat or manually alter doors/scripts. Normal game and script clocks continue through the real main loop.

| Observation | Before | Final implementation |
|---|---:|---:|
| Held simulation updates | 12 (two sets of six) | 0 |
| Frames ending with an incomplete required view | 14 | 0 |
| Audio mixer pauses / resumes | 2 / 2 | 0 / 0 |
| World chunk request calls during probe | 98 | 93 |
| New network image requests during probe | 1 | 2 |
| Maximum observed CPU time per main-loop callback | 25.6 ms | 5.6 ms |
| 95th percentile observed CPU time | 3.3 ms | 3.8 ms |
| Maximum staged preparation jobs in a frame | Not captured | 3 |
| Maximum texture upload calls in a frame | Not captured | 1 |
| Peak resident world vertices | Not captured | 14,295 / 52,260 |
| Final resident world vertices / chunks | Not captured | 14,256 / 192 of 703 |
| Final loaded world textures | Not captured | 7 |

CPU values are browser measurements on this machine, not an i3 performance guarantee. The baseline maximum is an observed outlier; the functional result is removal of both six-frame holds. Background preparation adds a small amount of work on other frames, reflected by the 95th-percentile values. Baseline residency was not instrumented in the earlier run and is deliberately not inferred. A chunk request is a controller request call, not an independent file fetch or a GPU draw.

The final buffered Forest music source starts asynchronously on probe frame 7 and keeps the same source identity through frame 419, including a complete native WAV loop boundary. Its cursor advances continuously and the mixer never pauses or resumes during either sweep. This checks playback scheduling, not an externally recorded audio waveform.

The original stalls occurred when camera leaf 357 admitted area 4 again after a brief portal-mask change had evicted it. Seventeen required chunks then arrived at once. The final implementation starts preparing the area on frame 45, before its required-view transition at frame 68. At frame 50 exact allowed/view areas remain `[1,2]`; the separate preparation mask is `[1,2,3,4]`. No extra room is admitted to drawing by this preparation history. World frustum and native per-face PVS drawing tests still apply. Unit checks separately cover strict eligibility.

The preparation history lasts up to 12 seconds while the same room remains selected and an open connection still exists. This deliberately holds some recently useful graphics longer to avoid repeated decode/upload work when the camera turns back. Moving to another room or closing/disabling the connecting path immediately invalidates this history. It never floods the graph with rooms that were not previously admitted. The distant Forest Brutus actor was never resident in the final probe.

The final peak raw `bufferData` count is 23 calls per frame. This includes ordinary animated geometry uploads and must not be described as 23 streaming jobs. The shared streaming-work queue remains capped at three jobs per frame.

No browser errors occurred in the final run. All isolated browser/server sessions were stopped. The original Electron profile was copied read-only; only the retained copies and isolated browser storage were written.

Evidence:

- Baseline: `before-turn-1792418667754/report.json`.
- Intermediate audio-only/current-room-preparation result: `after-turn-1792418782230/report.json`.
- Final: `after-turn-1792419248518/report.json`.
- Compact verification: `camera-turn-verification.json`.
- Harness: `lantern-turn.mjs`; `--before` serves the retained source-before files.

The final report includes SHA-256 hashes of every served JavaScript source. At final comparison time all hashes still matched the current files. The changed streaming sources were:

| Source | Verified final SHA-256 |
|---|---|
| `src/main.js` | `f54440f7ea5301d49a34fbd407d543f950420a4255266d626438ac0d4d926255` |
| `src/world.js` | `8e3f217a81067edabbe66fd455433c8e77147769c2404112241837f60a72e4f6` |
| `src/world-streaming.js` | `90326622441c07b4a0b33108772d3592b0080ef878ceecb5fe3ad76487651db0` |
| `src/actor-render-residency.js` | `e2923f9651ff5f3628fc86bf15c401a6df690e2ecbdb57cc3ac6d5319aaf693e` |
| `src/actor-texture-stream.js` | `01793fdcf641516f32dc34f0cb332a47c48cc6a6be9db84d5c562c664708501e` |
| `src/room-visibility.js` | `f8086dc3833babb114df7c232301dbf7e466b57b7623319c5e2069ad56e3e679` |
| `src/streaming-work.js` | `b7071df16af63d6898880212ee31b112f05352417a125c5263832f7af95d2758` |
