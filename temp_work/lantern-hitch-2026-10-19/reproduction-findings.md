# Current-save lantern turn hitch reproduction

Research date: 19 October 2026. Read-only copy of the Electron user profile; no real save writes, no native runtime changes, no release builds.

The latest WAL save was sequence 3331 at 2026-10-19T13:47:27.955Z in Forest `lvl00a`, player `[-1082.354830558774, -159.95, 3533.9617514477736]`, yaw `-1.0435926535899498`, pitch `0.194`. The profile copy and extracted save are retained under `save/`.

`lantern-turn.mjs --before` serves the seven retained source-before JavaScript files and the rest of the current source, launches an isolated headless Chrome profile, starts the actual game main loop from the copied save, waits thirty frames, sweeps yaw two radians left in sixty frames, holds for sixty, returns, and repeats. It records main-loop updates, graphics readiness, world requests, audio mixer pause/resume, camera/room selection and music cursor. Camera-only movement does not modify RedCat position, doors or scripts.

Baseline: `before-turn-1792418667754/report.json`. 420 frames; 12 held updates, two audio pauses and two resumes, 98 chunk requests, one new network texture (`textures/012.png`). Each turn causes six consecutive held frames, approximately 100 ms on the headless browser's 60 Hz frame schedule. This is a functional timing repro, not a hardware FPS benchmark.

At the first hold the camera is `[-1071.9627953151837,-75.99611836689745,3673.9370473427603]`, BSP leaf 357, area 1. RedCat also remains in area 1. Areas admitted/required suddenly expand to `[1,2,3,4,8]`. Seventeen newly required world chunks are all in area 4, using texture IDs 0,1,2,3,4,12. No actor is missing. The music is buffered `level 1 - the forest.wav`; its source stops and cursor remains fixed through the wait.

Area 4 is briefly admitted around frames 45-49, evicted immediately at frame 50 when the projected portal mask returns to `[1,2]`, then re-admitted at frame 68. Seventeen required chunks are requested in that same frame, producing holds on frames 69-74. The identical repeat occurs at frame 278 and holds 279-284. This establishes viewpoint-dependent room admission/residency churn, not a player crossing or an audio decoding problem. Preparing only the selected current room cannot by itself eliminate these area-4 requests.

## Final implementation check

`after-turn-1792419248518/report.json` repeats the exact same 420 real-main-loop frames using current source (served source SHA-256 hashes are included). All 420 updates run; there are zero incomplete views, zero audio mixer pauses/resumes, and no browser errors. Once the asynchronous initial music source starts, the same source identity persists through both camera sweeps and the complete native music loop boundary. This demonstrates continuous playback scheduling; it is not an external audio waveform recording.

Maximum observed update/render CPU time was 5.6 ms, maximum staged work was three jobs per frame, and maximum texture uploads was one per frame. Maximum raw `bufferData` calls was 23 per frame; this includes normal animated geometry, so it must not be described as 23 streaming jobs. This is a headless functional/profile check, not a low-end hardware FPS guarantee.

At frame 50 exact visible/allowed areas are `[1,2]`, while the separate preparation mask retains `[1,2,3,4]`. The distant room is therefore prepared early without broadening its drawing eligibility. The area-4 chunks begin background preparation on frame 45 instead of first appearing as seventeen required requests at frame 68. Peak resident world geometry is 14,295 vertices out of 52,260 total. Final residency is 14,256 vertices, 192 out of 703 chunks, seven world textures. The distant Forest Brutus actor is never resident.

The earlier `after-turn-1792418782230` is an intermediate check of audio grace/current-room preparation only: it eliminated the audible source resets but retained twelve held updates. The harness-only retention experiment is retained separately and is not the production implementation.
