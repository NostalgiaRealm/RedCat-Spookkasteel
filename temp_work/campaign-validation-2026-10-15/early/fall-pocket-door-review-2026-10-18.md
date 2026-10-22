# Fall-pocket review and closed-door correction — 18 October 2026

## Finding and scope

The vertical/downward flood is bounded and conservatively gives up when it sees a lower route, a horizontal exit at64 units, or256 nodes. The higher-history return originally revalidated only the destination. It could therefore return through a newly closed authored door, even though the ordinary local-candidate path correctly rejects closed gates.

A new **synthetic real-BSP** fixture confirmed this: the clear walking route `[0,.05,0] → [46,.05,0] → [46,.05,64]` became closed by a gate atZ48. With valid higher history `[0,100.05,0]`, the old fallback returned to that shelf after254 updates, with a maximum5 recovery traces/update. A second fixture put the blocking door beyond the small local probe but across the segment to higher history. Both failed before the correction. Neither is a newly observed defect in a shipped campaign route.

## Correction

- `CastleWorld.attachGameplay` caches authored DoorModel objects by model index once per level.
- Existing flood sweeps now cancel the higher-history fallback when they hit a door currently commanded closed. Each lookup is O(1), with no extra trace or broad object scan.
- Before returning to a history point, one additional sweep tests only currently closed cached door brushes along that return segment. This also catches doors outside the local probe.
- Invalid history candidates are revalidated at most once per update. Destination body clearance, ground support and hazard predicate still apply.
- The cache retains references to existing gameplay objects, so opening/closing and save restoration are read live without rebuilding it. Gameplay restore mutates these existing objects.

An initial blanket DoorModel veto failed the actual Castle fixture: the warehouse crates themselves are DoorModel54/55/56. The retained normal-earned warehouse save confirms all three were commanded open, even while crates02 was physically stopped partway by RedCat. The final veto therefore uses **current closed state**, not entity class alone. This is a generic state distinction, not a Castle-name exception.

## Verification and performance

Only `tests/movement-recovery.test.mjs` was run after these source changes. Final result: **27/27 passed**. `git diff --check` for the touched source/test files was clean. No builds or broad suite.

The new regressions cover nearby closed gate, a return segment crossing a more distant gate, PlayerController wiring, cached live open-state changes, and recovery when the gate is disabled/open. The actual Castle regression now supplies all authored door brush ids with the captured three crate doors commanded open, and counts the additional door-only sweep in its existing <=12-traces/update assertion; it still returns to the exact verified shelf.

The flood remains capped at256 positions and4 edge attempts per update. Upward search uses the player's normal/SuperSkippie height plus step allowance, rounded up to16-unit levels; downward sweeps do not pass through floors. Finding a reachable drop more than1 unit below the origin cancels recovery instead of exploring a new lower area. This can conservatively decline assistance for some genuine traps. The final return check scans only cached door entries, only when validating a history candidate; it adds no broad per-frame gameplay-object scan.

These are bounded-work checks, not a physical-display FPS measurement. The grid remains a bounded heuristic and does not prove every possible authored topology. The new veto explicitly covers DoorModel objects currently commanded closed; other scripted solids retain the existing geometric protections. Doors commanded open are left to their normal collision/motion behavior. Old already-trapped saves without safe history still require the existing recovery-menu path.

The earlier **279-frame live Castle recovery** was observed before the final downward-route and closed-door guards. Those later guards have focused-regression evidence; the full live campaign recovery was not repeated after this review.

## Evidence

- `fall-pocket-gate-before-2026-10-18.log` — nearby-gate regression fails before fix.
- `fall-pocket-gate-after-2026-10-18.log` — first nearby-gate pass.
- `fall-pocket-distant-gate-before-2026-10-18.log` — destination-segment regression fails before fix.
- `fall-pocket-gates-after-2026-10-18.log` — both initial fixes pass.
- `movement-recovery-door-review-2026-10-18.log` — complete27-test pass after correcting open crate-door semantics.
- `movement-recovery-door-final-2026-10-18.log` — final27-test pass, including live object-reference state and combined trace counting.

The first full-suite attempt with the blanket DoorModel veto was26/27 (actual Castle failed at `assert.ok(result)`). That intermediate failure exposed the crate binding above; the final logs record the corrected implementation.

## Suggested main campaign-report changes (not edited)

1. Castle upgrade: say the **20-potion requirement was met with21 collected**, not a21-potion requirement. Root's Castle completion snapshot records21potions and3secrets; add that Castle optional secrets remain incomplete (3/5). My isolated exploration separately finished20/30potions and3/5secrets, with saved-checkpoint imports/reloads; do not merge its provenance with the earned root run.
2. Replace the obsolete Tower-ascent exclusion. The unchanged carried Tower-entry save from the earlier declared late-Caves encounter was independently followed through spiral stairs, the authored portal, upper hall stairs/checkpoint and Witch doors using normal controls.141 waypoints, HP8/lives3, no deaths/reloads, no source blocker. The final fight was not repeated. Two optional upper bonus portals remain untested. Evidence: `temp_work/tower-ascent-2026-10-18/verified-ascent.md`.
3. Add Earth physical-route evidence: unchanged native Caves chapter-entry fixture, skill11/mirror3; hub/lab doors, rolling ramp, checkpoint, secret switch/life/two potions, crate-wall, all12moving pillars,3rotation+3altarbuttons, beam and unlock_max1, ten potions, actual hub return. Three normal deaths, no reload after initial import; finalHP2/lives1. This is an independent branch, not a combined four-altar campaign. Evidence: `temp_work/caves-earth-2026-10-18/verified-earth-route.md` and `validation-summary.json`.
4. Recovery: update current focused test count25→27. State that the tested corridor/corner/lip/door cases remain protected; avoid presenting the bounded grid as a universal proof. Separate the older live279-frame observation from the newer regression-only guards.
