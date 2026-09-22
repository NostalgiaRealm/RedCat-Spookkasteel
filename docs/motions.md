# Original brush motions and event timelines

Executable address references are version-specific; see [reference build notes](native-reference-builds.md) before relying on native addresses.

`tools/import_motions.py` consumes the complete `motions.bin` records preserved by
the level importer. It links each numeric model to the original `%Model%` name
and `collision.models[model].origin` pivot. The decoder uses the original
Genesis3D text formats, not guessed movement distances:

- `Genesis_Motion_File v1.0`: world model references.
- `MOTN 0.F0`, `SBLK 0.F0`: motion metadata and named paths.
- `PATH 0.F2`: translation and quaternion channels.
- `Keys`: interpolation, looping, evenly spaced time compression and quaternion
  hinge compression. Quaternion values are exported as X,Y,Z,W.
- `TKEV 0.F0`: timed, case-preserved Davi-Script event labels. All event string
  offsets are checked against the declared string data size.

The format definitions were checked against Genesis3D `World/Gbspfile.c` and
`Actor/motion.c`, `path.c`, `tkevents.c`, `vkframe.c`, and `QKFrame.c` from the
local reference checkout. Unexpected records, truncation, overlapping strings,
invalid model references and non-finite values fail the import.

| World | Motions / paths | Event labels | Keyframes |
| --- | ---: | ---: | ---: |
| lvl00a | 34 | 154 | 136 |
| lvl01a | 83 | 73 | 382 |
| lvl02a | 106 | 185 | 484 |
| lvl03a | 191 | 208 | 1,212 |
| lvl04a | 23 | 186 | 132 |
| Total | 437 | 806 | 2,346 |

Every original brush path uses Hermite translation and quaternion SLERP.
`src/motions.js` also supports linear translation, zero-derivative Hermite
easing, normalized linear quaternion interpolation and SQUAD. Hermite tangent
weights follow Genesis3D's incoming/outgoing chord calculation. The runtime is
plain JavaScript with no Node, browser, Windows or Three.js dependency.

```js
import {MotionPlayer, transformMotionPoint} from './motions.js';

const player = new MotionPlayer(motion, {
  onEvent: ({label, time}, player) => dispatchOriginalMotionCommand(label, time),
  onComplete: player => markControllerFinished(),
});
player.play({
  from: initialPositionInSeconds,
  to: motion.endTime,
  loop: 'pingpong', // false = once; true = wrap; 'pingpong' = reflect
  loopFrom: motion.startTime,
  loopTo: motion.endTime,
});
const pose = player.update(deltaSeconds); // {translation, rotation}
const movedPoint = transformMotionPoint(originalPoint, motion.origin, pose);
player.stop();
player.resume(); // retains paused time, range, and return-trip direction
player.seek(3); // changes time without dispatching events
```

The transform is `origin + rotation * (originalPoint - origin) + translation`.
Mesh vertices and collision geometry are already in original world coordinates;
do not add the pivot twice. `sample(time, pathIndexOrName)` returns the same pose
without advancing playback. The motion's first path is selected by default.

Events dispatch once in playback order when crossed, including a playback
start event on the first update and an endpoint event before completion. A long
frame processes all intervening events and repeat boundaries. Event callbacks
can stop, seek or restart their own player; the superseded update returns
immediately. Reaching the end of a once-only clip sets `finished` and invokes
`onComplete` once. Full campaign behavior still depends on the host dispatching
the original callbacks and implementing the affected objects.

## Graveyard loop endpoints and out-of-range events

The original level contains five puzzle models (`puzstuk1` through `puzstuk5`,
numeric models 141–145 in `lvl02a`) whose path ends at 8.0 seconds, but whose
last event (`paal1e` through `paal5e`) is authored at 8.01 seconds. The importer
preserves the original geometry extents as `startTime`, `endTime`, `duration`
and `pathEndTime`. It separately records `eventEndTime`, `playbackEndTime`
(the later of the path/event endpoint), and `playbackDuration`.

One-shot playback retains `playbackEndTime` so trailing events remain available.
Looping ModelControllers instead use the path's `endTime`, matching the native
engine. Extending the painting-strip loops to 8.01 was a faulty compatibility
repair: it stopped on `paalNe`, marking the picture correct but skipping spider
activation. The original loop wraps at 8.0 and reaches `paalNa` at 0.01 in the
next cycle, including the enable commands for all three ceiling spiders.
Imported event data remains intact. See [the encounter investigation](painting-spider-native.md)
for the exact scripts, native evidence and saved-game repair.

## Native controller evidence

Read-only disassembly of the supplied `RcHcGame.dat` identifies
`CAdamModelController::FrameCall` at virtual address `0x004d23d0` by its
`AdamModelController.cpp` diagnostics and the RTTI-linked vtable. The
controller's repeat modes are:

| Mode | Behavior |
| --- | --- |
| 0 | Advance to end and disable the controller |
| 1 | Wrap to start, preserving unused frame time |
| 2 | Reflect at endpoints, preserving unused frame time |
| 3 | Internal target movement for `MoveTo` / `SetTo` |

Initial positioning at `0x004d07e0` validates `InitialPosition` against the
path's start/end times and sends the value directly to sampling: it is absolute
seconds, not a normalized fraction. Native `SetEnabled` at `0x00501da0` changes
the game object's enabled flag and notifies its scheduler. It does not change
brush geometry visibility; disabled controllers retain their last pose.

The native motion event query helper is `0x004d1740`. Repeat mode 1 at
`0x004d2548–0x004d25de` queries only up to the path end before wrapping and
processing the remainder. The path extents are loaded at
`0x004cfe7e–0x004cfe8f`. This excludes the five out-of-range graveyard labels
from native looping playback.

## Reproduce import and verification

```bash
python3 tools/import_motions.py
python3 -m unittest discover -s tests -p test_import_motions.py
node --test tests/motions.test.mjs
```

The tests compare all generated level files to a fresh decode, check pivot
linking, exercise compressed times and hinge rotations, reject malformed
inputs, sample every original path and replay all 806 original event labels.
They also cover weighted Hermite interpolation, quaternion rotation around a
pivot, reverse ranges, repeated cycles, pause/resume, callback interruption and
event tails. The painting encounter checks native loop extents separately.
They do not substitute for full campaign playthroughs.
