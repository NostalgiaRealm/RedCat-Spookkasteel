# Independent review: live prop-fragment save continuity

Reviewed read-only on 2026-10-26: `src/prop-debris-state.js`, the new serialization hooks in `src/destructible-effects.js` / `src/explosion-native.js`, the unchanged integrator and render pool, and focused tests authored by the implementing agent. No additional test run or source edits were made in this review.

## Findings communicated to the implementing agent

1. `restoreNativeExplosions` must check `typeof effect.debrisSnapshot === "function"` before invoking the runtime-only hook. Optional-call syntax only tolerates null/undefined; an imported JSON record containing a non-callable value would otherwise throw on load. Such a field should be ignored, falling back to persisted `debrisState`.
2. A cohort should retain its last integrated timestamp, rather than stamping the current gameplay time when its snapshot callback runs. Normal autosaves run after `World.update` and already match, but the synchronous level-completion callback saves from within `Gameplay.update`, before the effects integrator runs. Persisting the actual integration time allows the load path to advance just that remaining interval, instead of labelling the previous fragment pose as current.

## Reviewed boundaries

- The serialized whitelist includes position, velocity, rotation/orientation, angular velocity, age/life, contact count, settled/fade state, bounds and the physics fields consumed on future updates. Mesh/material/pool references are excluded and arrays are detached.
- New saves restore actual poses and future motion. With the same saved time they do not replay historical collisions; older snapshots catch up only since their state timestamp. Legacy records without integrator state use the existing bounded six-second reconstruction.
- Empty particle arrays are preserved by nullish fallback and do not respawn already expired fragments during the remaining explosion smoke tail.
- Restored first-frame orientation, authored scale and material opacity are applied before drawing. The existing pool handles material ownership; no new draw/material allocation occurs during snapshot capture.
- Snapshot hooks are removed on event retirement and effect disposal; cohort bookkeeping is bounded by retained explosion records. Expired particles may be referenced by their cohort until that record retires, but snapshots filter them and the pool still owns/reuses the render entry.
- State validation bounds particle count to 256, validates finite vectors/quaternions, rejects unknown artwork names and copies only integrator fields. The existing historical-record cap remains 256.

This is source review, not a native-window playthrough or release-package test. The implementing agent owns focused validation and resolution of the two findings above.

## Resolution and final source review

Both findings were corrected by the implementing agent and independently checked in the final diff: runtime snapshot invocation is guarded by `typeof`, and each cohort stores `at`, updated after positive-time integration. A new focused regression covers a synchronous save between gameplay-clock advancement and particle integration, including a non-callable imported hook field. The implementing agent reports 4/4 save tests passed; the retained output is `prop-debris-save-final-tests.txt` beside this review. No further correctness or ownership issue was found in the final diff. Approved for source delivery within the boundaries above; no independent test rerun was performed.
