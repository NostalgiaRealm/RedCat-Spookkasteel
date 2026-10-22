# BSP model-query CPU optimization — 18 October 2026

`collision.before.js` is byte-identical to `../before/src/collision.js`, before any edits in this pass. Existing earlier CPU work is retained.

## Current implementation: tracked poses and refittable bounds

ScriptHost publishes brush poses through `ModelTransformMap`, a Map subclass whose stored origin/translation/rotation vectors are immutable snapshots. Production pose writers use set/delete/clear; no production code mutates those stored arrays. Numeric changes synchronously mark the affected BSP index leaves dirty. The next trace or contents query refits just those current transformed bounds, including immediate intermediate moving-door/platform poses and restores. Repeated numerical poses do not dirty the tree.

Frozen physical-model lists retain their fixed membership and caller order. Queries visit overlapping bounds branches and include unbounded/missing-bound models. Results return to original caller order, including duplicates, before the unchanged trace narrow phase or liquid contents clipping. Invalid poses remain broad-phase unbounded so enabled brushes retain original validation exceptions, while disabled invalid brushes remain ignored. Ordinary Maps retain mutable-pose behavior; high transformed-density ordinary Maps use the full original scan instead of the intermediate slow dynamic overlay.

The main world freezes its physicalModels list after construction; transforms and disabledModels stay mutable. The root agent owns that world.js opt-in.

## Validation completed

- `tracked-final-focused.log`: 69/69 focused collision, broadphase, transform-cache, index, projectile-collision, moving-solids, ScriptHost and pose-snapshot tests passed for the initial tracked-refit variant. `scalar-water-focused.log`: 93/93 passed after scalar leaf normals and contents candidate reuse, including water and water-audio contact suites.
- `scalar-differential-benchmark.mjs` / `.json`: **156,000 sweeps and 26,000 contents queries** match retained before source exactly across all five actual level collision datasets. Cases include point/player hulls, stationary and random rotated/translated models, replacement transform Maps, explicit snapshot updates, delete/reinsert/clear, disabled models, start-solid/zero-length and long-distance sweeps, and content masks 1, 2, 3, 67.
- Permanent tests cover exact order/duplicate/start-solid penetration results, live moving and disabled brushes, disabled invalid poses, mutable list edits, non-finite queries, copied/frozen snapshot ownership, immediate away/back/restore writes and same-value change notifications.

## Final scalar/contents variant: Node microbenchmark

Eight alternating before/after samples per level, 3,600 mixed local/long/zero-length sweeps per sample, after warmup. **Two thirds of brush models have live transforms**, close to the observed campaign proportions; these snapshots do not numerically move inside each timed sweep batch. These are pure BSP trace microbenchmark times, not total game/process CPU usage or browser FPS.

| Level | Models / transformed | Before | After | Less trace time |
| --- | ---: | ---: | ---: | ---: |
| Het Bos | 68 / 45 | 41.91 ms | 19.87 ms | 52.6% |
| Het Kasteel | 99 / 66 | 55.40 ms | 23.19 ms | 58.2% |
| Het Kerkhof | 159 / 106 | 70.64 ms | 15.95 ms | 77.4% |
| De Grotten | 275 / 183 | 121.18 ms | 21.68 ms | 82.1% |
| De Kasteeltoren | 49 / 32 | 32.16 ms | 16.32 ms | 49.2% |

## Superseded intermediate experiment

`collision.static-bvh.js`, `initial-focused.log`, `final-focused.log`, `differential-benchmark.mjs` and its JSON/log describe the first static-tree plus full transformed-model overlay experiment. It passed 54,000 differential sweeps and showed 21.7–54.8% less Node trace time when only about one in nine brushes had a transform. The real browser campaign has far more transformed brushes (106/159 in Graveyard), and the overlay regressed there. Those initial timings are **not the final result**. The tracked-pose/current-bounds refit implementation above supersedes that design. `collision.tracked-before-scalars.js` and `tracked-differential-benchmark.*` preserve the subsequent tracked-refit variant before scalar leaf normals and contents reuse. All experiments and evidence remain available for cross-reference.

## Limits and invariants

No simulation rates, geometry, narrow-phase arithmetic grouping, trace result fields, contents clipping or actor trace ordering change. Leaf planes use scalar normal components with the original leading-zero and left-to-right additions; normal arrays are materialized only for returned hits/penetrations instead of every tested plane. The model index is shared by trace and contents queries, while contents retains its original render-bound rejection and exact branch clipping, including liquid cells without collision sides. The tree assumes loaded BSP geometry/model bounds remain immutable, as existing transform caches already do. Long full-level sweeps offer less pruning. Scripted pose publication adds snapshot/freeze cost when a brush actually receives set(), so the root real-browser benchmark includes that integration cost. The existing generic Map path still permits in-place pose mutation and never assumes immutability.

Source review confirms all production stored-pose writes are ScriptHost.applyMotion/restore and moving-solids temporary pose set/restore/delete. Rendering, effects, lights, beam contacts and liquid volumes read pose arrays only. Snapshots use JSON serialization of [...map], so listener bookkeeping does not enter saved games. Already immutable snapshots (such as moving-solids restoration of the stored previous pose) are reused without copying.
