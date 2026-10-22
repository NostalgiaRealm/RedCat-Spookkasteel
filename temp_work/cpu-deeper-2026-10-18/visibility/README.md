# Visibility and residency CPU work, 18 October 2026

This subtask changes `src/world-streaming.js` and `src/actor-render-residency.js` only, plus the targeted `tests/visibility-cpu-work.test.mjs`. Earlier uncommitted bounds caching remains intact. Its baseline is the root task's retained `../before/src/` snapshot.

- Immutable model-zero world meshes compose their local identity matrix once. Moving brush meshes keep automatic transforms. World-matrix propagation remains enabled, including an explicitly changed scene ancestor. The root integration makes the scene's identity local matrix fixed and removes forced world-matrix invalidation during lighting.
- Camera world position reads the matrix already updated by residency instead of asking Three.js to update the same ancestor chain again.
- Shared geometry/texture owner counts change at actor registration/removal. Resident-owner counts change only at an actual residency transition. Rendering/PVS/retention rules and resource-release protection are unchanged.

## Differential evidence

Run from the project root:

```sh
node temp_work/cpu-deeper-2026-10-18/visibility/differential.mjs
node --test tests/world-streaming.test.mjs tests/actor-render-residency.test.mjs tests/world-model-visibility.test.mjs tests/visibility-cpu-work.test.mjs
```

`differential-results.json` records 29 camera positions, four camera turns/FOV variants each, in every shipped level. Inputs include origin points from shipped entities, remote invalid camera positions, moving/hidden brushes and full original PVS metadata. All **396,952 chunk classifications** match the exact pre-edit baseline, including bounds, render layers, resident state, readiness and statistics. Total model-zero local-matrix compositions during those updates fall from **639,378 to zero** after construction.

A separate 400-actor fixture runs **600 updates**, with moving nested actors, abrupt camera turns, hierarchy visibility changes and actors removed/re-added. Classifications, resource counters, dispose events, resource-release deadlines, and all statistics match the baseline on every frame. Shared-resource map reads fall from **469,200 to 2,498**, 99.47% fewer in that fixture. This is a work-count reduction, not an equivalent reduction in game CPU usage.

`focused-tests.log` retains 20 passing targeted checks. No builds, browser performance runs, or user-save access were performed by this subtask. The parent task owns the combined browser measurements.
