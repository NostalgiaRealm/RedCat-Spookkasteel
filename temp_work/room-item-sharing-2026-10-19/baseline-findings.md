# Repeated actor resource baseline

19 October 2026. Source-only isolated runtime inventory; no builds or real-profile writes.

Latest copied save is Castle `lvl01a`, sequence 3344, `2026-10-19T14:42:30.946Z`, player `[-736.7037457614821,-31.95,-741.110806958632]`. The inventory also loads all five ordinary starting views. Simulation/main animation frames are frozen after normal load and graphics settle. Source-before overrides retain the exact implementation measured.

| View | Actor roots | Geometries | Materials | Texture handles | Geometry CPU bytes | Animator typed bytes | Total / actor draws |
|---|---:|---:|---:|---:|---:|---:|---:|
| `lvl01a` current-save | 292 | 84 | 352 | 48 | 541,538 | 927,168 | 82 / 27 |
| `lvl00a` start | 237 | 31 | 275 | 24 | 131,144 | 219,216 | 112 / 27 |
| `lvl01a` start | 292 | 84 | 352 | 48 | 541,538 | 927,168 | 127 / 18 |
| `lvl02a` start | 384 | 127 | 512 | 55 | 717,750 | 1,710,144 | 94 / 19 |
| `lvl03a` start | 282 | 70 | 410 | 33 | 478,898 | 1,132,224 | 16 / 4 |
| `lvl04a` start | 119 | 34 | 179 | 24 | 304,392 | 608,880 | 52 / 27 |

Geometry CPU bytes count unique typed-array backing stores, not one copy per reference. Animator typed bytes include per-instance bone transforms and Hermite tangents; they exclude JavaScript object overhead and the original JSON arrays. GPU buffer estimates in the reports count prepared resident geometry attribute arrays. Texture estimates assume RGBA8 and include generated mipmaps where configured; these are estimates, not driver memory counters.

## What is already shared

`CastleWorld.loadActor` caches one template definition per asset stem. Static actor instances share that geometry, and `ActorTextureStream.texture(url)` caches stable texture handles by URL. For example, all sixty Forest corner trees use one geometry. Static duplication is primarily cloned material/light state and repeated draw submission, not sixty copies of tree vertex arrays. Those per-instance lighting uniforms preserve original floor/Sun/dynamic illumination and cannot simply be merged into one ordinary material.

## Safe sharing opportunities found

- `ActorAnimator` rebuilt the same prepared track wrappers and Hermite tangent arrays per instance. Exact read-only caching by original actor data identity preserves independent clocks, transforms and poses. Tangent-array reduction alone can reach 585,216 bytes in Castle, 1,138,512 in Graveyard, 757,392 in Caves and 329,808 in Tower for these actor populations.
- Every animated geometry clone copied immutable UV/index arrays. Position/normal arrays must remain private. Distinct BufferAttribute wrappers can safely share immutable CPU arrays; the wrappers must remain separate because Three removes GPU attribute storage per geometry during disposal.
- Exact PNG content audit: 174 actor PNG files contain only 93 unique byte sequences. Thirty duplicate groups contain 81 avoidable copies. If every actor image were decoded simultaneously, the duplicate images account for 3,244,032 RGBA8 bytes, or about 4,325,376 GPU bytes with a full mip chain. Actual room residency loads much less, so this is a library-wide ceiling rather than current memory usage. Knight and armour fragments share the same fifteen identical atlas files; Gargoyle and its fragments share seven.
- Exact imported base geometry audit: 165 actor definitions contain 134 unique positions/normals/UV/index/group payloads. Aliasing only those buffers preserves separate actor settings, materials, source names, animations and gameplay identities.
- All three money-bag sizes have byte-equivalent imported geometry and nine PNG files containing just two distinct images. In the current Castle room, eight visible money bags submit 24 material draws. Canonical resource sharing can remove duplicate image fetches/allocations. Reducing those 24 draws further requires an explicit instancing/material/lighting pipeline and is a separate operation.

Retained audits: `actor-texture-duplicates.json`, `actor-geometry-duplicates.json`. Exact source locations were `src/world.js` loadActor/instantiateActor, `src/animation.js` ActorAnimator constructor, `src/actor-texture-stream.js` texture/request, and `src/actor-lighting.js` applyActorLighting.

## Reference validation

The deterministic reference run is `before-inventory-1792421515088/report.json`; it retains screenshots, actor position/normal/UV/index byte fingerprints, geometry groups, per-actor lighting uniforms and gameplay hashes. The initial lightweight count run is retained separately as `before-inventory-1792421236445/report.json`. Two visible animated pairs permit explicit dispose/re-upload checks (Graveyard hand torches and Tower guardians); both reference checks preserve pixels/gameplay and report no WebGL error. This is focused source validation, not a campaign playthrough.
