# Native toucher movement: verified findings, 2026-10-05

Read-only source: installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
The script `extract-bat-movement-evidence.py` reproduces focused slices from the
previously retained complete disassembly and reads PE constants, vtables and
RTTI directly from the verified executable. No runtime code or original asset
was edited for this research.

## What the three modes actually do

These are **waypoint selectors**, not continuous geometric orbits. Each works
from the current waypoint's eight ordered link slots. There is no native
70-unit minimum orbit, 45-unit tangential offset, or radial correction in these
selectors.

| Mode | Constructor | Vtable | Completion update | Next-waypoint selection |
| --- | --- | --- | --- | --- |
| `CAdamGMS_MoveClockWise` | `0x597040` | `0x650028` | `0x597170` | `0x597210` → `0x599c80` |
| `CAdamGMS_MoveAntiClockWise` | `0x597260` | `0x650038` | `0x597170` | `0x597390` → `0x599c80` |
| `CAdamGMS_MoveCloser` | `0x5973e0` | `0x650048` | `0x597430` | `0x597480` → `0x5997e0` |

The toucher decision `0x40ae80` calls CRT `rand()` at `0x40ae9c`, takes `%3`,
and maps 0 to Closer, 1 to AntiClockWise, 2 to ClockWise. Closer receives radius
0; the two circling states receive radius 0 and duration 2000 ms.

### Exact clockwise/anticlockwise scoring

Let `T` be the actor target position returned by `0x595cd0`; `P` is the current
waypoint position; `Q` is a candidate linked waypoint. Native bearing
`0x5b1600` subtracts its first point from its second point, then `0x5b15f0`
returns `atan2(-deltaZ, deltaX)`.

```
bearing(T, P) = atan2(-(P.z - T.z), P.x - T.x)
delta = bearing(T, Q) - bearing(T, P)
clockwise = (-pi <= delta && delta < 0) || (pi <= delta && delta < 2*pi)
score = abs(distance3D(Q, T) - requestedRadius)
```

The CW selector passes boolean true, AntiCW false. A candidate must have the
matching boolean. Among valid candidates on that side, select strictly lower
score, starting at float `0x47c34ff3 = 99999.8984375`. Equal scores keep the
first authored slot. For toucher radius 0 this is the closest valid neighbor
to the target on the selected angular side.

The comparison constants really are float `-pi`, `0`, `pi`, `2*pi`, stored at
`0x64d910`, `0x64a450`, `0x64d654`, `0x64b1d8` respectively. Boundaries above
follow the actual `fcom` and carry-bit branches at `0x599d4c`–`0x599d92`.

Imported navigation uses raw `Origin` XYZ (see `EnemyNavigation` parsing), so
apply that bearing formula directly. A renderer's yaw convention does not
require flipping navigation Z.

### Exact Closer scoring

`0x5997e0` counts valid linked neighbors with
`distance3D(Q,T) < distance3D(P,T)`; it then selects `rand()%count + 1` in
authored slot order. It is uniform over closer candidates, **not nearest**.
If there are none, return the invalid waypoint ID (`-1`). CW/AntiCW also return
invalid when no candidate matches.

The Closer completion predicate `0x597430` compares the cursor's current
position to `T` and returns true only for distance strictly below its requested
radius. Radius 0 supplied by toucher code means normal finite distances never
finish this state; exhaustion of closer neighbors supplies the other exit.

## Validity, occupancy and collision cost

Shared candidate validity `0x599e10` does the following:

1. Reject when the waypoint's cursor count `+0x74` is positive, through accessor
   `0x598570`.
2. Convert the waypoint position to world coordinates, get the actual global
   player's position, and reject distance below the cursor's settings `+0x10`
   (`0x59a07a`–`0x59a0d9`). **This field is verified `MinPlayerDistance`.**
   Loader `0x4258a0` loads string `0x68f3fc = MinPlayerDistance`, stores it in
   the fifth float, and copies the five floats at `0x425d06`; constructor
   `0x595280` copies them to `this+0x294`. Accessor `0x5954a0` returns that
   struct, making its fifth float `+0x10`. The preceding fields are orientation,
   SenseRange, VisualRange and ViewAngle. The target used by steering and global
   player used by this minimum-distance gate are distinct sources.
3. Only if the optional obstacle-test flag is true, perform the dynamic query
   at `0x59a112`–`0x59a140`. Flag loader `0x597a00` reads
   `[CursorActor] TestForObstacles` (`0x6a6c98` / `0x6a6c84`). The shipped
   `Settings/Game.ini` lines 377–378 set it to **0**.

Thus the shipped native selection checks a maximum of eight adjacency entries
and normally does not issue dynamic world traces. Existing portable body
clearance and player-overlap protections can be retained as explicit safety
reconstruction choices; they are not evidence for costly all-graph native
reselection or continuous crowd repulsion.

Occupancy is an integer reservation shared across native cursors, not merely a
soft score. `0x59b730` reserves the destination when it differs from the current
point. `0x59b450` releases the current point on departure and invalidates the
current-point ID. `0x59b4f0` places the cursor at a point; it does not add a
second count when the point was already its reserved destination. The native
assertions make the purpose explicit: `currentWayPoint->GetNumberOfCursors()
== 0`, and `cursor can not be at occupied wayPoint`.

`0x59b490` releases a valid, not-yet-reached destination and invalidates that
destination. `0x59bbf0` calls both that function and current-point release.
Enemy cleanup `0x429900` explicitly stops its movement state and invokes
`0x59bbf0` at `0x42992d`, so dead/retired enemies do not retain either claim.
The researched evidence establishes cleanup at actor retirement; it does not
establish the exact earlier moment during every enemy's death animation.

The random patrol mode shares that validity gate: PE RTTI identifies vtable
`0x650078` as `CAdamGMS_MoveRandom`; its selection method `0x5979a0` calls
`0x599b80`. That selector counts the current waypoint's valid neighbor slots,
chooses `rand()%count + 1`, and traverses them again. Both passes call
`0x599e10` (`0x599bc9`, `0x599c22`). Sharing reservations with random patrol is
therefore supported directly by native code, as are its minimum player
distance and configured optional obstacle checks.

## Frame cadence and timer semantics

The manager update `0x596b00`:

1. Runs the actor's virtual update callback.
2. Calls `0x5969b0` to select a next point **only if** cursor `IsAtWayPoint`
   (`+0x34`) is true. An in-flight destination is retained. The assertion at
   `0x6a71ac` says `Cursor can not change destination when not at a wayPoint`.
3. Sets manager `+0x21` to the inverse of destination validity.
4. Calls the state's completion update with the absolute clock; stores its
   result in manager `+0x20`.
5. Advances the cursor only if both completion and invalid-destination flags
   are false.

Cursor advance `0x59be70` uses `step = dt_ms * cursorSpeed * 0.001`. It moves
linearly in 3D, clamps when step reaches the remaining distance, then marks
the endpoint/current-point flags. There is no leftover-step traversal of a
second edge in that call. The next neighbor is selected on a later update.

Timed state `0x597170` starts `deadline = firstUpdateClock + duration` on its
first update. It completes when **clock > deadline**, not at equality. During
the active period it stores `(deadline-clock)/duration` in a progress field;
that value is not used in the waypoint scoring above. Expiry skips cursor
advance on that frame. The touch main then chooses a new mode, but a mid-edge
cursor retains the existing destination and continues it under that mode.
The timer does not force a fresh neighbor from a fictitious current point.

## Correction: the one-second wait is a no-route wait

The older `docs/enemy-ambush-flight.md` labels `0x40ae2b` a contact wait. That
label was not supported by the native control flow. `0x40ae09` calls
`0x596d40`, which returns manager `+0x21`: **no valid movement destination**.
The 1000-ms wait is entered when that flag is true. After selecting a mode,
`0x40afcf` tests the same flag; immediate failure also enters that wait.

`0x40ac30` enters the moving animation and immediately calls the mode chooser
through virtual slot `+0x0c` (`0x40ac53` → `0x40ae70` → `0x40ae80`). There is
no mandatory one-second wait on initial mode selection. After the no-route
wait completes, `0x40adb8` calls the chooser again. After a timed mode finishes,
`0x40ade6` calls the chooser again. A failed direction is not simply reversed;
the next choice again has all three `%3` outcomes.

The separate toucher collision callback at `0x42dd80` enforces its own 1000-ms
damage cooldown at `0x42df09`–`0x42df2a`. It does not install the no-route wait
or force a circle. These two independent one-second periods must not be
conflated.

## Attack-mode activation and shared guardian behavior

The toucher main vtable `0x64aa38` has the common main-state update and
`0x40aba0` in its attack-entry slot `+0x14`. Shared main state 1 enters that
slot at `0x403144` when `0x422f30` returns true. That predicate is current
perception or a still-valid remembered perception timestamp. It contains no
AttackRange check. Separate `0x422f70` adds the AttackRange distance check and
is used by other attack behaviors, not this transition.

The attack state repeats `0x422f30` at `0x40ac85`; once perception memory
expires, it completes and the main state returns to its non-attack state.
Thus touch mode selection starts on detection/remembered detection, not only
after a contact hit.

Guardian constructor `0x40d660` calls toucher base `0x42dc80` at `0x40d739`.
PE RTTI identifies guardian vtable `0x64abc0`; its `+0x84` initializer is
`0x42dd20`, shared with `CRcTouchingEnemy` vtable `0x64c274`. That initializer
constructs toucher main `0x40ab80`. Both tables' collision slot `+0x10` is
`0x42dd80`. Therefore the same three movement selectors apply to guardians.
This is not evidence for an extra guardian shield/phase state machine.

The green castle bat is positively confirmed, including its overridden
initializer: entity Type 2/SubType 1 selects constructor `0x415680`, whose
`0x415759` calls toucher base `0x42dc80`. Vtable `0x64b2c4` RTTI is
`CRcTouchBat`. Its initializer `0x4158f0` constructs `0x404470`, which derives
from the toucher main and installs vtable `0x64a4a4`. Native RTTI names that
table `CRcTouchGhostMainState`; despite the name, the bat constructor uses it.
Its attack entry is still `0x40aba0` and its common update is `0x4030b0`.
Only the main table's `+0x28` differs from base, using `0x404490`.

## Initial placement and physical actor movement

On actor attachment `0x595b30`, the authored starting waypoint ID stored at
cursor actor `+0x2f4` is passed to `0x59b980` at `0x595b9e`. `0x59b980` assigns
both destination and current waypoint and copies that point's position into
the cursor position, marking it already at destination. **The navigation
cursor is initialized directly at the authored start point.**

The following actor step is now also verified. Constructor `0x421fa0` builds
`CRcCursorActor` with vtable `0x64bc08`; slot `+0x84` is `0x595f60`, slot
`+0x4c` is `0x49bb70`. Attachment `0x595ba7` dispatches slot `+0x84` immediately
after initializing the cursor. `0x595f60` gets cursor XYZ through `0x59be50`
and calls the actor's SetPosition slot. `0x49bb70` copies all three coordinates
to the actor transform. Thus **initial attachment copies the complete authored
StartPoint XYZ to the actual actor too**, without a physical approach segment.
This does not imply that every subsequent enable event reattaches the actor.

There is no additional free player-homing motion in the verified per-frame
chain. Cursor actor update `0x422240` calls `0x595c30`, which calls the manager
`0x596b00`; its initial callback `0x596be9` invokes the same `0x595f60` to copy
cursor position to actor before advancing the cursor. The game object's
position getter `0x423670` proxies the cursor actor getter `0x49bbd0`; its
setter `0x423650` similarly proxies the cursor actor's SetPosition.

The apparently separate target-following logic `0x427f10` only changes facing.
With a target it invokes `0x429150` or `0x429350`; with no target it uses the
cursor destination to invoke `0x429350`. Both calculate a bearing, clamp the
turn by `dt * TurnSpeed`, and call orientation method `0x595ec0`. Neither
translates the body toward the player. This is consistent for green bat and
guardian: their frame-update, position-proxy, and orientation methods match.

The previous portable off-graph homing and collision-safe approach are explicit
reconstruction behavior. Retaining swept player/world collision can keep that
safety behavior, but adding homing to make an arbitrary off-graph fixture
reachable would not be a reproduction of this native movement chain.

## Why the earlier blocked-bat fixture does not establish native contact

The retained performance fixture puts RedCat at
`[1069.3354697855416, 312.05, -854.0026419435281]`. In the imported castle data,
the nearest authored waypoint anywhere in the level is `GrobberPathPoint61`
at `[1158,374,-762]`, **141.9988997941169** units away. The next closest is
`GrobberPathPoint64` at `[1098,324,-713]`, 144.382141650103 units away. Their
connecting segment can come closer than either endpoint; the observed revised
trajectory reaches 135.52357242206094 units away along that segment. Its exact
geometric minimum is 135.52120129081857 units, so the observed frame samples
come within 0.00238 units of the segment's best possible approach. This
calculation is reproducible with `analyze-bat-fixture.py`; its retained output
is `native-bat-fixture-reachability.json`.

The old synthetic detour/homing implementation reached about 20.8 units away,
but that success cannot be required of the native waypoint chain for this
fixed player placement. Native contact verification should place RedCat on or
near an authored edge, or move RedCat into the bat's authored flight space.
The original fixture remains useful for CPU, bounded collision-query work,
progress, and lack of overlap, but not as evidence of native free pursuit.
