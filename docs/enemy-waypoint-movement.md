# Native enemy waypoint movement and performance

Updated 5 October 2026. Research uses the installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Original assets, scripts and executable were not modified. No build was made.

## Recovered behavior now implemented

Green bats and guardians use the shared touching-enemy movement state. Detection
or remembered detection starts its three-way decision immediately; AttackRange
and body contact do not gate that decision (`0x40311e`, `0x422f30`, `0x40aba0`).
The decision at `0x40ae9c` chooses MoveCloser, AntiClockWise or ClockWise.

- MoveCloser (`0x5997e0`) selects uniformly from valid adjacent waypoints that
  are strictly closer to RedCat in 3D. It does not always choose the nearest.
- Clockwise and counterclockwise (`0x599c80`) select the closest valid adjacent
  waypoint on the requested angular side. Bearing is `atan2(-deltaZ, deltaX)`;
  the signed wrap and authored-order tie breaking follow the native comparisons.
  The requested radius is zero. These are waypoint paths, not continuous orbits.
- Circling lasts 2 seconds from its first update. Native completion is strictly
  after the deadline. The next edge is selected before checking expiry, then
  that frame's advance is skipped. Changing mode preserves an unfinished edge.
- No valid destination starts a 1-second movement wait, then another three-way
  choice. The old implementation incorrectly paused after every hit and reversed
  an invented orbit when blocked. Contact's independent 1-second damage cooldown
  remains in place (`0x42df09`).
- Native random patrol (`0x599b80`) samples all valid neighboring slots, including
  the previous node. Touching-enemy and ordinary patrol selectors share waypoint
  reservations and the strict minimum-player-distance gate (`0x599e10`). A dead
  or disabled actor no longer blocks another actor's destination. Claims update
  immediately when selecting a new node, including during the same frame.
- Flying patrols reach their waypoint before turning, using the same small
  collision tolerance as grounded patrols rather than cutting corners five units
  early. Movement does not spend leftover frame distance on a second edge.

Mode, remaining time, RNG and current destination survive saves and freezes.
Transient reservation/search indexes rebuild after loading. Legacy free-form
orbit saves, including those with stale non-null destinations, reacquire their
waypoint through the bounded collision navigator. Recovery does not teleport
the actor through a wall.

The recovered actor update copies its waypoint cursor position; no additional
player-homing translation was found. Consequently, an off-route RedCat does not
force a green bat to leave its authored flight network. In the retained castle
fixture, the flight edge's theoretical closest approach is 135.521 units; the
revised bat reaches 135.524. The old free pursuit reached 20.8 units there, but
that distance is not the native behavior. A separate fixture places RedCat on
an original flight edge and verifies actual damage, not just flight movement.

## Performance safeguards

The [previous graveyard fixes](graveyard-performance-regression.md) remain intact:
ordinary authored edges never start a full pursuit search, failed searches are
cached, and interrupted jobs resume within a fair shared budget. Bat fallback
searches now use that same scheduler: at most **16 search sweeps per enemy and
48 across enemies per update**. Immediate movement and direct-clearance probes
are separate from that budget and continue every frame.

Bat fallback candidates are scored before sweeping. The first clear candidate
has the same best score as the former exhaustive scan. Large blocked searches
yield between frames; failures retry after half a second, even if RedCat moves.
A newly clear direct route resumes immediately while pending/failed searches
are discarded. An already selected positive detour keeps its existing short
waypoint commitment. These fallback routes remain collision-safety adaptations.

Touch and patrol decisions inspect at most eight linked nodes. Reservations use
an index rebuilt once per simulation update and incrementally maintained after
choices, avoiding repeated full actor scans for every candidate.

Focused headless Chrome checks used the real graveyard button/zombie activation,
blocked chase, original castle bat geometry, actors, audio and rendering. CPU
figures below measure synchronous update plus audio, not displayed FPS:

| Fixture | Baseline median / p95 | Final median / p95 | Search/collision result |
| --- | --- | --- | --- |
| Activated graveyard zombie, blocked chase | 6.4 / 8.0 ms | 6.3 / 8.4 ms | Maximum 17 pursuit sweeps including direct probe; search peak 16 per frame |
| Original castle bat, off-route player | 4.4 / 5.2 ms | 4.6 / 5.6 ms | Maximum bat-update sweeps reduced from 13 to 3 |
| Original castle bat, grounded player on authored edge | New scenario | 4.1 / 5.0 ms | 5 actual damage events; no overlapping or embedded frames in 600 updates |

The original fixture assertions and supplementary contact assertions passed;
no browser errors were reported. Full samples and resource counts are retained.
These are single-machine measurements with ordinary run-to-run variation and a
brief concurrent unit-check caveat, not a claimed FPS improvement or proof on
all low-end hardware. The bounded-work tests are the enforceable protection
against the previous hundreds-of-sweeps hitch regression.

## Verification, evidence and remaining adaptations

Focused tests cover angular wrap/ties, random closer/patrol choices, occupancy,
minimum distance, first-update timer/expiry ordering, mid-edge continuation,
contact cooldown, save/freeze/migration, grounded frog recovery, patrol/relocation,
and mixed ground/bat budget fairness. No unrelated suite or package build ran.

Primary new tests are `enemy-waypoint-steering.test.mjs`,
`enemy-waypoint-reservations.test.mjs`, `bat-flight-budget.test.mjs` and
`enemy-route-endpoints.test.mjs`. Existing affected movement checks were run by
name; old fixtures that expected invented orbits or faced away from the target
were corrected to test the intended contact/perception behavior.

Preserved evidence and reusable browser harnesses are under
`current_work/enemy-movement-native-2026-10-05/`:

- [Native selector/state/actor evidence](../current_work/enemy-movement-native-2026-10-05/native-touch-waypoint-findings.md), including 42 focused disassemblies.
- [Route endpoint findings](../current_work/enemy-movement-native-2026-10-05/route-findings.md).
- [Performance method and captures](../current_work/enemy-movement-native-2026-10-05/performance-method-and-results.md).

This does not claim every original movement instruction is ported. The saved
per-enemy RNG differs from the native global CRT stream. BSP body collision,
step/slide, bat separation, player-overlap prevention and recovery remain
portable safeguards. Off-node bodies approach their saved waypoint safely;
native attachment directly places its separate cursor/actor at StartPoint.
Direct chase outside the touching-enemy state remains reconstructed, including
its pursuit endpoints: native `0x59ca10` was confirmed to receive an explicit
destination waypoint ID, which does not establish a replacement policy for the
port's arbitrary-position endpoint search. Its existing tested policy was kept.
