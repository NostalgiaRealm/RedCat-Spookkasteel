# Release 1.0.0 notes boundary and sources

Prepared 20 October 2026 from the working source, without staging, committing or publishing.

- Local annotated tag `v0.9.9` peels to the same commit as `HEAD`: `5f9a3f95`, `Release 0.9.9`, dated 18 October 2026 16:38:49 +0200 (`git rev-parse 'v0.9.9^{commit}' HEAD`). The current worktree changes follow that release; no intervening local commits existed at inspection.
- `RELEASE_NOTES_0.9.9` establishes the prior-release scope and English Markdown style. Its first CPU pass, campaign source validation, native animation/combat/explosion/audio work and three asset-test projects are excluded from 1.0.0's new-feature list.
- `PUBLISH_CURRENT_BUILD` was read for the six-platform archive/checksum/release workflow; it contains old path/version examples that root will adapt. This subtask performed no builds or network mutations.
- `docs/browser-cpu-performance-followup.md`: explicit post-0.9.9 scope, hidden-pose/exact-collision deferral, effect upload/culling and paused-world reuse; final 4x-throttled three-scene results 17.5–25.7% lower combined time.
- `docs/cpu-spatial-query-performance.md`: subsequent collision/model/light candidate narrowing, stable transforms/resource counts; final results 5.9–15.0% versus the preceding working baseline. These percentages are intentionally not combined.
- `docs/gpu-effect-buffer-residency.md`: elastic particle/beam draw storage, idle release, 14.9–52.7% sampled live-buffer reductions, pooled prop/knight fragments, scoped live crate FPS and fixed-state parity checks.
- `docs/world-streaming.md`: 576 near / 1152 retention / 2048 draw ranges, lazy actor textures, distant scene parking, exact-query envelopes, no Forest boss-artwork request at spawn.
- `docs/room-aware-streaming.md`: authored room/door eligibility, remote-camera behavior, whole Tower room, saved Castle 10755->3231 world vertices, no script/collision unloading.
- `docs/room-loading-hitches.md`: budgeted pre-upload/compilation, portal-turn retention, audio grace, 12->0 lantern held updates, 6->0 forward holds, unchanged final forward residency, representative five-level probes.
- `docs/native-asset-loading-and-camera-visibility.md`: retained camera-local adaptation and recovered per-face PVS index gate, distinct from original chapter/driver-cache ownership.
- `docs/actors.md`: exact geometry/PNG resource aliases, independent mutable poses/material lighting, 54->38 Castle texture objects, 1350430-byte Graveyard counted typed-array saving, five-level pixel-identical comparisons. Resource sharing is not instancing or draw-call batching.
- `docs/native-refresh-performance.md` and `electron/main.cjs`: uncapped desktop scheduling with REDCAT_VSYNC=1 opt-in; browser/Android unchanged and potentially higher resource use.
- Current `index.html`, `package.json`, `package-lock.json`, `android/app/build.gradle.kts`: menu 1.0, package 1.0.0, Android versionName 1.0/versionCode2.

The notes intentionally report existing retained checks, not newly rerun performance tests or a newly completed campaign. Root owns packaging/release validation and publication.
