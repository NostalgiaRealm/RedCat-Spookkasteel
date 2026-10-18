# Patrol and boss behavior evidence

The September 2026 changes were checked against the installed Dutch executable,
`RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Addresses below are virtual addresses in that executable, not file offsets.
Original level entities, difficulty INIs and actor motion data are also used.
This is a record of recovered behavior and the implementation limits; it does
not establish complete native AI parity.

## Implemented behavior

`src/enemy-navigation.js` builds a graph from `GrobberPathPoint` entities. Enemies
start at their authored `StartPoint`, respect `SubSystemId`, follow explicit
`WayPoint1`–`WayPoint4` connections and otherwise use nearby walkable points.
The graph permits eight connections per point and uses the original defaults
`MaxConnectionDistance=300`, `MaxWayPointHeight=50`, `DistanceToWalls=15`.
Explicit connections can exceed the automatic height/distance restrictions:
these are necessary for authored climbs and enemies leaving graves.
`UnlinkStartPoint` prevents a departed start from being chosen again.

The native graph setup reads the four explicit links at `0x59e990`–`0x59ea94`
and links them through `0x598c80`. Automatic linking is at `0x59d120`, with an
eight-link bound at `0x59d2ad`–`0x59d309`. Candidate checks at `0x59db40` include
subsystem, distance, wall clearance and height. The remake's graph is generated
from static BSP geometry so opening a door does not permanently alter its
topology according to whichever enemy first requested a route. Movement still
collides with moving models and doors.

Automatic candidates now also follow three recovered native pruning checks;
the explicit authored edges bypass them:

- `0x59ddbb` and `0x59ddcc` call `0x5980d0` at both candidate endpoints.
  That routine normalizes the proposed and existing link directions in 3D,
  and rejects their dot product when it exceeds
  `cos(MaxDegreesBetweenLinks * pi / 180)` (`0x598287`–`0x5982a7`). The setting
  is 30 degrees. This prevents redundant links that point almost the same way.
- `0x59eeb0` checks all third waypoints using the finite 3D point-to-segment
  distance routine at `0x59edc0`. It rejects a distance strictly below
  `MinPointToLineDistance`, 30 units (`0x59ef74`–`0x59ef81`). The check includes
  points from other subsystems, while actual connections stay in one subsystem.
- `0x59ebb0` iterates existing directed edges and calls `0x59eb10` in both
  directions. That helper uses XZ side products, rejecting a strict crossing;
  shared endpoints and collinear edges are not crossings. The existing edge
  is considered when its iterated endpoint is within `MaxWayPointHeight` of
  either proposed endpoint (`0x59ec2d`–`0x59ecaf`). Since both directions are
  visited, either existing endpoint can satisfy that height gate. Routes on
  sufficiently separated floors therefore remain independent.

The nearest passing candidate is selected at `0x59defc`–`0x59df24`. The remake
keeps nearest-first construction and preserves authored order for ties. The
later [native follow-up](native-completion-followup.md) implements minimum-hop
pursuit routing, and [enemy waypoint movement](enemy-waypoint-movement.md)
recovers touching-enemy selectors, random patrol and shared reservations.
Ordinary authored pursuit now uses adjacent-node closer/retreat selection;
it does not choose arbitrary global endpoints. The bounded arbitrary-position
endpoint search is retained only for off-graph collision recovery. See
[pursuit and hit interruptions](enemy-pursuit-interruptions-native.md).
Spider retreat uses its recovered explicit start waypoint, as detailed below.

Enemies now use their configured sensing distance, visual range, view angle,
rotation speed and remembered last-seen position. Unaware moving enemies patrol
the graph. Ranged enemies use salvo counts/waits and `ChanceToMoveAfterSalvo` to
choose a new reachable patrol point; `MinPlayerDistance` controls retreat and
relocation candidates. The per-enemy random state, route, last observation,
salvo/animation state and pending projectile timing persist through saves.
Cutscene/freeze handling pauses movement and animation deadlines.

## Committed stationary shots and spider return destinations

The 14 October 2026 follow-up recovered two narrower differences without
replacing the performance-bounded navigation system.

- Plant and gargoyle shooting uses the standing-shooter child state. Its parent
  updates the child first (`0x40a200`) and checks perception after the child
  finishes (`0x40a32d`, `0x40a382`). The child releases ammunition when the motion
  reaches `DrawMotionPart` (`0x40a649`–`0x40a682`). The release routine
  (`0x42b620`–`0x42b880`) gets RedCat's current position and the muzzle position;
  it does not retest line of sight or attack range. An already committed shot
  now fires when RedCat ducks behind cover or moves away. Projectile collision
  still prevents it passing through the intervening wall.
- A started plant/gargoyle salvo completes before perception can prevent a
  new salvo. The child repeats its shooting motion immediately after completion
  (`0x40a5ee`–`0x40a631`); `WaitTimeBetweenShots` does not apply to this state.
  Gargoyles already had this cadence, but plants incorrectly added that delay.
  Both now wait only after their completed salvo. Plant's subclass constructor
  `0x406c40` calls `0x40a1d0` and retains the shared update/shoot methods, while
  overriding the post-salvo idle wait at `0x406c60`.
- A retreating spider supplies its own start waypoint ID to the native move
  controller (`0x40931f`, `0x40993f`). The getter chain `0x414180` → `0x4283d0`
  → `0x595480` retrieves the actor's stored start waypoint. The port now keeps
  this exact terminal instead of substituting a nearer point when routing back
  around geometry. All 46 authored spiders have a `StartPoint` and none unlink
  it. Safe direct movement and collision-tested route reacquisition remain.

This change adds no full-graph scan to an ordinary movement update. Pending
searches still share the existing 16 checks per enemy / 48 checks per update
budget; changing a destination does not replenish that allowance. Route-search
jobs and cached routes identify their exact destination so a previous chase
route cannot be reused for a retreat.

This initial change covered stationary committed shots. The later
[pursuit/hit recovery](enemy-pursuit-interruptions-native.md) and
[boss follow-up](boss-interruptions-native.md) extend committed release and
recovered interruption handling to the moving shooters and bosses. Knight
strikes still use their actual contact window and range; selected hurt and
death cancel unreleased attacks. Authored pursuit now uses recovered adjacent
nodes. The reconstructed endpoint policy applies only to off-graph recovery;
`CRcMoveMoveToStart` first-link selection (`0x406550`) is not evidence for a
global nearest-node chase policy.

Evidence is retained under `temp_work/enemy-pursuit-attacks-2026-10-14/`.
Focused verification: six committed-attack checks, five endpoint/budget-sharing
checks and six pursuit-budget checks passed. These include target loss during
wind-up, loss of gargoyle alert memory, full salvo completion, damage/death,
knight range, save/freeze continuity, exact return destination and fair bounded
search. No package build or unrelated test suite was run.

```sh
node --test tests/enemy-committed-attacks.test.mjs tests/enemy-route-endpoints.test.mjs tests/enemy-pursuit-budget.test.mjs
```

## Graveyard frog corner recovery

The graveyard frogs are `MovingEnemy41/42/43` (`frog01/02/03`), with original
start waypoints 269, 265 and 267. They were already active when RedCat was far
away. A longer reproduction found a separate defect: frogs 02 and 03 eventually
stopped at `[2672.05,528.05,-291.9]` while following point 265 to point 124. They
moved again during player pursuit because it supplied a different destination.

Point 265 is `[2716,528,-396]`; point 124 is `[2640,528,-208]`. The complete
edge clears the frog's collision hull. The former five-unit arrival radius
could select that edge from x=2712 instead, cutting inside the stone corner.
The first blocked trace then discarded the remaining tangential movement.

The native `CAdamWayPointCursor` updater computes speed times elapsed seconds
at `0x59c049–0x59c058` and compares that travel with the remaining distance.
When the step reaches the destination, `0x59c070–0x59c08a` copies the destination
coordinates and sets the at-waypoint flag. The shorter-step branch interpolates
at `0x59c091–0x59c0a9` and leaves that flag false. Grounded patrols now reach the
waypoint before choosing another edge, allowing only 0.1 unit for the portable
BSP sweep's 0.05-unit separation margin. The existing flying-enemy tolerance
has not been changed in this bounded repair.

Grounded movement against a wall also retains its collision-tested tangent,
as flight already did. This repairs frogs already saved at the blocked corner
without teleporting them, changing their route or narrowing their body. This
slide response is a portable collision refinement, not a claim of recovered
native actor collision parity. Direct movement into the wall still stops.

Focused tests use the actual graveyard BSP and waypoint network: all three
frogs patrol for 100 simulated seconds with a distant player, and a saved frog
at the former stall resumes through point 124. A source-browser scene exercises
40 seconds with the loaded actor hulls and prop collisions, then reloads the
stuck frog through the production save loader. Artifacts are
`artifacts/graveyard-frog-patrol-scenes.json` and
`artifacts/graveyard-frog-patrol.png`.

```sh
node --test tests/graveyard-frog-patrol.test.mjs tests/patrol-boss.test.mjs tests/enemy-behavior.test.mjs tests/enemy-ambush-flight.test.mjs
node tests/graveyard-frog-patrol-scenes.mjs
```

The older behavior fixtures now explicitly specify clock-face orientation 6,
because they place their player south of the enemy. Their previously omitted
orientation means north in the recovered native convention, which made seven
unrelated expectations fail before this patrol change. No gameplay orientation
was changed to accommodate those fixtures. No package build was run.

## Boss ammunition

The generic native factory at `0x44d570` uses one-based enums. The old remake
incorrectly routed most bosses through the generic enemy shot.

| Enemy | Recovered ammunition | Evidence |
| --- | --- | --- |
| Mushroom Brutus | enum 6, `RcMushRoom` | Fire method `0x41fc10`, enum push `0x41fc38` |
| Bone Brutus | enum 1, `RcBone`; enum 10, `RcSkull` | `0x4199c0`, enum pushes `0x4199f2` / `0x419a47` |
| Dungeon Max | enum 5, `RcMagma` | `0x41afc0`, enum push `0x41afe8` |
| Jester Max | enum 4, `RcJesterBall` | `0x41e670`, enum push `0x41e698` |
| Witch | `RcMagicBall`, separate creation path | `0x420770` calls `0x446cd0` |

The remake selects these original projectile settings for damage, initial
speed, life and gravity. Normal Mushroom Brutus throws mushrooms at speed 250
with damage 2; Bone Brutus uses bone speed 500/damage 2 and skull speed 400/damage
3. Native shooting perturbs each normalized XYZ direction component by an
independent value in `[-BulletDeviation,+BulletDeviation]`, then normalizes again
(`0x42b7b9`, `0x42b7f2`, `0x42b827`, `0x42b82f`). The remake now follows that rule
without accidentally modifying configured projectile speed.

Mushroom sprite setup is at `0x448b70`–`0x448e67`. Its table at
`0x64cec4`–`0x64cee0` references `msh0.bmp`/`msh0a.bmp` through
`msh3.bmp`/`msh3a.bmp`. The float at `0x64ceec` is 0.05 seconds; `0x448e47`
converts this to milliseconds for the animation duration setter at `0x4041b0`.
The four-frame sprite uses a 50 ms timer with strict expiry and a separate
rearm update, as recovered in [native-projectile-animation.md](native-projectile-animation.md).
Normal `Size` is 0.3. The mushroom constructor sets a colored dynamic light;
that color is not a tint for the underlying sprite. Although `mshTrail.bmp`
and `mshTrailA.bmp` pointers exist at `0x64cee4` / `0x64cee8`, live setup loads
`STrail.bmp` and `STrail_a.bmp`; see [mushroom-trail-native.md](mushroom-trail-native.md).

## Bone Brutus charge phase

`RcBoneBrutusAttackState` update `0x401160` waits for its shooting child state to
finish at `0x4011e1`–`0x401209`. It then enters state 2 through `0x401440` and
calls the owner's vtable slot `+0xc8`, which resolves to the ammunition toggler
at `0x419a90`. Alternating bone and skull salvos is therefore native behavior.

`0x401440` calls `0x419b70`, whose motion table points to `charge`. The playback
rate is `0.9 + (rand % 10000) * 0.00002` (constants at `0x64a2c8` / `0x64a2cc`).
After the charge finishes, state 2 at `0x401236` checks
`ChanceToMoveAfterSalvo`; it either relocates through `0x4014b0` or starts another
shoot state through `0x4013d0`. The remake plays the imported charge clip with
that playback-rate range and preserves the charge phase across saves.

The shoot child at `0x40170d` checks completion of the current shoot animation.
When there are remaining shots it enters the wait state at `0x40172e`–`0x40173c`;
after the last shot it directly completes at `0x401754`–`0x40175b`. The remake
therefore uses the charge phase after the last shot rather than adding the
generic post-salvo pause before another shot.

## Remaining fidelity limits

- Native minimum-hop pursuit routing and sampled per-enemy salvo properties
  are now implemented; see [native follow-up](native-completion-followup.md).
  Native touching-enemy selectors and random patrol are also implemented; see
  [waypoint movement](enemy-waypoint-movement.md). Off-graph recovery endpoints,
  body clearance and saved per-enemy RNG can still differ from the original
  path cursor and global CRT random stream.
- Generic attacks schedule release on a simulation update using actor clip
  duration and the configured draw fraction. The [15 October boss follow-up](boss-interruptions-native.md)
  connects Max/Witch hurt completion and sampled motion rates, committed salvos,
  first-check wait clocks and Bone Brutus charge/ammunition sequencing. Native
  global RNG and whole-engine dispatcher order remain validation boundaries.
  [Projectile origins](enemy-projectile-origins-native.md) now use the animated
  native attachments, with a fallback only when actor data is unavailable.
- Mushroom Brutus leaves the original flight-path ribbon; the earlier floor
  trail and ribbon damage were incorrect. [Ribbon recovery](mushroom-trail-native.md)
  establishes that it is visual only. [Subclass impact dispatch](projectile-impacts-native.md)
  is recovered: the installed enemy ammunition retires on contact without a
  bounce or secondary explosion. Portable collision tolerances remain a boundary.
- Dungeon Max's machine/rise/look cycle, Jester's teleport/invisibility, and
  the Witch's takeoff/flight/attack/defeat phases are implemented and documented
  with their remaining limits in [boss phases](boss-phases-native.md). Guardians
  use the recovered shared touching-enemy movement and one-second contact
  damage cooldown. The investigation found no separate guardian shield or boss phase.

## Validation

`tests/patrol-boss.test.mjs` covers graph restrictions, explicit climbs,
angle/point/crossing pruning, unlinked grave starts, patrol/save/freeze behavior, visual memory, Brutus's
mushroom settings and relocation, all recovered boss ammunition classes,
Bone Brutus charge/ammunition transitions across save/load, deterministic spread
and the separate forest-arena/frog path networks. Run with:

```sh
node --test tests/patrol-boss.test.mjs tests/enemy-behavior.test.mjs
```

These deterministic checks verify the implementation. They do not replace a
side-by-side playthrough against the original game.
