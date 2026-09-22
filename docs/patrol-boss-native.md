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
keeps nearest-first construction and preserves authored order for ties. Native
route scoring after graph construction and full pursuit routing remain open.

Enemies now use their configured sensing distance, visual range, view angle,
rotation speed and remembered last-seen position. Unaware moving enemies patrol
the graph. Ranged enemies use salvo counts/waits and `ChanceToMoveAfterSalvo` to
choose a new reachable patrol point; `MinPlayerDistance` controls retreat and
relocation candidates. The per-enemy random state, route, last observation,
salvo/animation state and pending projectile timing persist through saves.
Cutscene/freeze handling pauses movement and animation deadlines.

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
Thus the projectile sprite has four original frames at 20 fps. Normal `Size`
is 0.3. The mushroom constructor sets a colored dynamic light; that color is
not a tint for the underlying sprite. `mshTrail.bmp` and `mshTrailA.bmp` are
referenced separately at `0x64cee4` / `0x64cee8`.

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

- Native route scoring and complete pursuit routing have not been reproduced.
  The current destination choices and local avoidance can differ from the
  original despite the recovered automatic graph-pruning rules.
- Native random-number sequences are not reproduced. A saved deterministic
  per-enemy generator is used. `AverageShotsPerSalvo` is currently used as the
  salvo count. Native shooter-property initialization at `0x426905`–`0x426948`
  stores `trunc(1 + (AverageShotsPerSalvo - 1) * (rand % 10000) * 0.0001)`.
  Constants are `0x64a354 = 1` and `0x64a2c4 = 0.0001`; `0x60ab20` truncates
  toward zero. The relevant property-object lifetime and whether/how other
  states adjust this stored count still need recovery before integrating it.
- Generic attack timing uses actor clip duration and the configured draw
  fraction. Per-enemy timing randomization, interruption transitions and all
  attack states have not been recovered. Muzzle positions and collision radii
  remain approximations.
- Mushroom Brutus now leaves the original flight-path ribbon; the earlier
  floor-trail description was incorrect. Its collision/damage inference and
  confirmed visual behavior are documented in `mushroom-trail-native.md`.
  Other projectile-specific bounce, targeting and lifetime rules remain open.
- Dungeon Max's machine/rise/look cycle, Jester's teleport/invisibility, and
  the Witch's takeoff/flight/attack/defeat phases are implemented and documented
  with their remaining limits in `boss-phases-native.md`. Guardian-specific
  behavior is still incomplete.

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
