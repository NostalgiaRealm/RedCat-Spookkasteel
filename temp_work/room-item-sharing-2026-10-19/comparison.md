# Shared actor resource verification

19 October 2026. Isolated source/browser validation; no builds or writes to the real Electron profile.

## Results

Six frozen views use identical copied save data, deterministic random initialization, camera/viewport, original main-game loading, and graphics settling. They include the latest local Castle save plus each level’s ordinary start.

| View | Actor typed CPU bytes before | After | Saved | Whole-renderer GPU textures | Draw calls |
|---|---:|---:|---:|---:|---:|
| `lvl01a` current-save | 1,468,706 | 722,368 | 746,338 | 54 → 38 | 82 → 82 |
| `lvl00a` start | 350,360 | 328,888 | 21,472 | 24 → 20 | 112 → 112 |
| `lvl01a` start | 1,468,706 | 722,368 | 746,338 | 39 → 30 | 127 → 127 |
| `lvl02a` start | 2,427,894 | 1,077,464 | 1,350,430 | 45 → 37 | 94 → 94 |
| `lvl03a` start | 1,611,122 | 704,202 | 906,920 | 31 → 25 | 16 → 16 |
| `lvl04a` start | 913,272 | 520,636 | 392,636 | 25 → 24 | 52 → 52 |

These CPU bytes count exact unique backing arrays for actor geometry, bone transforms and Hermite tangent data. They exclude JavaScript objects, original JSON number arrays, texture pixels and driver overhead; they are not whole-process resident-memory measurements. The background material/light state remains independent per actor. The greatest measured reduction is 1,350,430 bytes in Graveyard, about 56% of the measured actor array storage.

In the actual current Castle room, geometry arrays fall from 541,538 to 380,416 bytes and animator arrays from 927,168 to 341,952. Actor texture handles fall from 48 to 36. Estimated loaded actor texture storage including mipmaps falls from 813,888 to 639,104 bytes. The whole renderer holds 54 → 38 GPU texture allocations and 131 → 129 GPU geometries. The two fewer current-room GPU geometries correspond to canonical repeated static artwork.

## Correctness checks

- All six rendered images are bit-identical: **zero changed pixels**. Retained PNGs are in the before/after run directories.
- Every recorded actor has matching position, normal, UV and index array fingerprints, geometry groups and independent lighting-uniform values.
- All gameplay snapshot hashes match, including the restored local save.
- Total draw calls are unchanged; this work shares read-only data and exact image/geometry resources. It does not introduce an instanced rendering pipeline or merge independent actor lighting.
- Two animated-pair disposal/re-upload checks pass: Graveyard hand torches and Tower guardians. Animated positions/normals remain private; UV/index attribute wrappers remain private while their CPU arrays are shared. Disposing/re-uploading one sibling preserves the other, exact pixels and gameplay. Both report WebGL error zero.
- There are no unexpected browser errors. Every served JavaScript hash still matches the final source at verification time; `verification-summary.json` also retains the resource-index hash.

## What changed in resource ownership

Per-actor animation clocks, bone transforms, mutable pose arrays, bounds, materials and lighting state remain independent. Prepared read-only track/tangent definitions are shared per imported actor definition. Immutable UV/index CPU arrays share storage with separate GPU attribute ownership. The generated resource index identifies 31 exact duplicate base-geometry definitions and 81 exact duplicate PNG contents; each canonical image and base-geometry template is allocated once per world instead of once per original filename. Mutable animated pose copies remain separate. Actor settings, source identity, clips, scores, pickup sounds and collision objects are retained.

Repeated actors already shared static template geometry by asset name. The new content aliases additionally share across distinct asset names that contain byte-equivalent artwork, such as money-bag sizes, heart variants and original actor/debris atlases. This lowers image preparation/load passes and GPU image allocations while leaving draw submission and original per-actor illumination unchanged.

The library-wide audit contains 174 PNG files but 93 distinct byte contents, and 165 actor definitions but 134 distinct base-geometry payloads. Full-library duplicate images represent 3,244,032 decoded RGBA8 bytes (about 4,325,376 with mipmaps). That is an audit ceiling; only nearby assets are resident during play. The actual current-room reduction is measured separately above.

## Reproduction and retained evidence

- `actor-sharing-measure.mjs`: run without flags for the retained source-before implementation, or with `--after` for current source. Every run uses a new isolated retained browser profile.
- `before-inventory-1792421515088/report.json`: deterministic baseline, exact fingerprints, screenshots and baseline GPU re-entry checks.
- `after-inventory-1792421746543/report.json`: final implementation with the same probes.
- `comparison.json`: raw per-view before/after differences.
- `verification-summary.json`: assertions, hashes, byte reductions and scope.
- `baseline-findings.md`, `actor-texture-duplicates.json`, `actor-geometry-duplicates.json`: initial analysis and exact content groups.
- `source-before/` and `save/`: retained previous source modules and read-only copied local save.

This is focused resource/visual validation, not a full campaign playthrough or a low-end-device FPS benchmark. All isolated browsers and servers were stopped. No build artifacts were generated.
