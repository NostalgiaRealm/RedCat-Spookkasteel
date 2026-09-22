# Cave rolling stones: repeat state after loading a save

The corridor in `The Caves Rolling Balls suddenly stopped.png` is the earth
corridor of `lvl03a`: eight `rol_rots.act` actors (`rots01` through `rots08`)
mounted on `earth_rock01` through `earth_rock08`. They use the original
`rolling_stones` controller group. The observed stationary pair can be
reproduced by loading a save made before entering that corridor: the eight
tracks ran once and stopped together at their return positions.

## Original data and executable evidence

Sources are `data/levels/lvl03a/level.json`, `data/motions/lvl03a.json`, the
compiled `data/davi/lvl03a.json`, and the installed `RcHcGame.dat` with SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.

All eight ModelControllers specify `RepeatMode=1`, `PlayerCollision=1`, and
initially disabled. Their paths run from 0 to 7 seconds, with no motion events.
Their `InitialPosition` values are absolute seconds: `0, 1, 2, 3, 4, 6, 3, 4`.
The visible roll is followed by an underground return path; the path endpoint
returns close to the two spawn positions on either side of the upper door.

The native `CAdamModelController::FrameCall` at `0x4d23d0` handles repeat mode
1 at `0x4d2548–0x4d25de`: process events up to the path end, subtract that
portion of elapsed time, reset to the path start, and continue with remaining
time. The native InitialPosition setter is at `0x4d07e0`. This is continuous
seven-second repetition, not a one-shot animation or a proximity restart.

Authored activation remains unchanged:

| Original action | Command |
| --- | --- |
| Open either `door_*_to_earthlab` leaf at the lower entrance | `rolling_stones.enable` |
| Cross `trigger_frame_sluis02` at the upper entrance, model 268 | `rolling_stones.enable` |
| Open either `door_*_to_earth` leaf outside the section | `rolling_stones.disable` |
| Cross `trigger_frame_sluis04` outside the upper section, model 270 | `rolling_stones.disable` |

The upper trigger boxes are narrow but deliberate. Their Z extents are
`-1256..-1244` and `-1576..-1564`, with X `-1322..-1208` and Y `74..138`.
Disabling a controller pauses its timeline and retains its visible actor and
solid model. The native collision-aware motion setter at `0x4d0a90` can also
reject a model move if RedCat cannot be displaced; its failure branch starts
at `0x4d0fd6`. Neither legitimate pause should be replaced with an unconditional
timer reset or automatic enable.

## Portable repair and save compatibility

The previous snapshot omitted `object.motionStarted`. Restore then marked
every motion as started, including untouched, disabled controllers. Their
MotionPlayers still held constructor defaults (`loop=false`). The next Enable
resumed those defaults instead of configuring the authored RepeatMode. After
one pass, normal one-shot completion disabled each rock at `t=7`, leaving four
overlapping actors at each of the two return positions.

Snapshots now preserve an explicit `started` flag. A never-started controller
uses the normal first-start path after loading, preserving its initial phase
and authored loop. Legacy saves without that flag recover repeat mode only
for repeating controllers whose stored non-looping range matches the old
constructor range (path start through full playback end). Existing portable
`startMotion`, including MoveTo, already configures the authored repeat mode;
this migration does not redefine target motion behavior.

A legacy save taken during the erroneous first lap retains its current time
and continues looping. An already-stalled save remains disabled until an
original entrance door or re-entry trigger enables the group. At that point,
the impossible completed-loop state restarts each track at its own authored
InitialPosition, retaining the original staggering. Saving and loading again
before re-entry preserves this recovery. This avoids incorrectly turning on
stones that were subsequently disabled by an intentional outside-section
command. For an already-stalled saved game, leave and re-enter the section.

No paths, speeds, models, textures, actor attachment rules, collision rejection
rules, or original enable/disable commands were changed.

## Focused verification

`node --test tests/rolling-stones.test.mjs`: seven tests passed, covering new
and legacy saves before activation, an old active first lap, already-stalled
saves and repeat loading, intentional disable/resume, and the two original
threshold crossings at 20, 60, and 120 Hz.

The two existing save/restore cases selected by
`node --test --test-name-pattern='save/load retains|restoring paused motions' tests/script-host.test.mjs`
also passed, checking puzzle state and paused event-marker preservation.

`node tests/rolling-stones-scenes.mjs` passed the focused live BSP/browser check:
restore a pre-activation legacy save, activate the original corridor door with
E, physically walk into the corridor, and verify all eight tracks continue
through at least three actual wraps, without browser or HTTP errors. It retains
ordinary model/player collision, including the rocks pushing RedCat back down
the slope. The rendered corridor was checked against the user's screenshot.
Results and
corridor screenshots are written to `artifacts/rolling-stones-scenes.json`
and `artifacts/rolling-stones-*.png`.
