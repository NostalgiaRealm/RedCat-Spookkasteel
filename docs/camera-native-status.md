# Native camera behavior: bounded verification

Executable address references are version-specific; see [reference build notes](native-reference-builds.md) before relying on native addresses.

This note records read-only checks of the supplied `RcHcGame.dat` and the five
imported `level.json` files. Addresses are executable virtual addresses with
image base `0x00400000`. No native game code was executed.

## Camera mode and target precedence

`CRcCameraTriggerModel::ActivateCamera` starts at `0x0045b2f0`. Its diagnostics
name the original class; the jump table at `0x0045ba60` establishes these entity
`CameraMode` values. The internal camera mode numbers differ from entity values.

| Entity mode | Internal mode | Verified activation behavior | Original instances |
| --- | --- | --- | ---: |
| 0 | 5 | Restore normal camera | 8 |
| 1 | 6 | Normal camera with the three `CamOffset` parameters | 16 |
| 2 | 7 | Fixed `CamPos`, looking at fixed `CamTargetPos` | 134 |
| 3 | 8 | Fixed `CamPos`, looking at the player object | 0 |
| 4 | 10 | Ordered `CamScriptPos0..9` positions, looking at the player object | 5 |

Mode 2 copies the `CamPos` vector at `0x0045b416` and the `CamTargetPos` vector
at `0x0045b4e6`, then passes both to the fixed-camera setter at `0x0045b5e6`.
It does **not** select the player merely because `CamTargetPlayer` is true.
Missing camera/target positions produce explicit native diagnostics. Therefore
`CamTargetPos` must take precedence for mode 2.

All 163 authored camera triggers have `CamTargetPlayer=1`. All 134 mode-2
cameras also have `CamTargetPos`; following the player flag first breaks their
authored framing. No authored camera uses a nonempty `CamTargetDaviName`.
The inspected activation function does not consult this field or the target
flag: modes 3 and 4 receive the player object directly at `0x0045b6b1` and
`0x0045b909`. Support for a future edited level using named camera targets
should not be presented as recovered original behavior.

## Time limits and mode 4 movement

`CamTimeInMode` is supplied as a float in milliseconds, converted to an integer
by setters `0x00458ec0`, `0x00458fb0` and `0x004590c0`, and compared to elapsed
frame milliseconds. A portable runtime using seconds should divide by 1,000.

For fixed camera modes 2 and 3, `0x00459b56..0x00459b77` explicitly skips expiry
when the limit is zero. A positive limit returns to normal camera after elapsed
time exceeds the limit. The original data contains 42 mode-2 cameras with a zero
limit; these remain active until another camera command changes the view.
Modes 0 and 1 do not receive a timed limit in their activation setters.

Mode 4 uses a different update function at `0x00459f20`. It advances through
waypoints when the current camera position reaches the current point, rather
than evaluating one spline across the complete lifetime. Intermediate segments
call the movement helper with a constant 150 original units/second
(`0x0045a376..0x0045a388`). The final approach uses a distance lookup with speed
bounds of 150–470 units/second. The limit is a maximum lifetime; it does not
normalize the route to last exactly that duration. The first waypoint is placed
directly on activation (`0x0045a112`); the last position can be held until expiry.

Mode 4 has no zero-limit exception: a zero limit expires on the first positive
frame. All five authored mode-4 cameras have positive durations, so this edge
case does not affect the supplied campaign.

Catmull–Rom interpolation distributed over `CamTimeInMode` is a reconstruction
approximation, not verified native choreography. A closer implementation starts
at the first waypoint, visits the points in order at the recovered speed, looks
at the player, and treats the time as a separate lifetime. The final-approach
lookup is now recovered and implemented (see the current-build details below).
Camera collision adjustment still needs further work before exact camera parity
can be claimed.

## Duplicate model-controller enable commands

The base command dispatcher at `0x00502220` matches `enable` and calls
`SetEnabled(true)` at `0x0050224d`; `disable` calls the same setter with false at
`0x0050227b`. `SetEnabled` compares the requested flag with the stored value at
`0x00501dc0` and immediately returns when unchanged. Duplicate `enable` commands
therefore do **not** rewind or restart a currently enabled `ModelController`.
Disable pauses its scheduled updates, retaining its current pose/time.

`Reset` is a separate inherited model command at `0x004d1794`, invoking the
controller reset override at `0x004d2f80`. That override reloads the original
configuration and initial position. Re-enabling a completed once-only controller
does not itself show a native rewind operation in the inspected command path;
automatic rewind on re-enable should be treated as an explicit compatibility
choice, not assumed native semantics.

This investigation verifies dispatch, field precedence and bounded timing
behavior. It is not a native/portable visual comparison or a campaign
playthrough.

## Recovered final-approach lookup (current installed build)

The installed executable with SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`
places the mode-4 route updater at `0x45a130`, not the earlier build's
`0x459f20`. The route updater compares the current waypoint with the camera
position and selects the next point at `0x45a1cc..0x45a266`. Intermediate points
pass `true` to movement helper `0x45a470`; the final point passes `false`.

That helper contains the following verified rules:

- Intermediate movement uses 150 world units/second (`0x45a586`).
- Final movement starts with the same 150-unit speed. If the remaining distance
  exceeds 50, `0x45a516..0x45a537` truncates `distance - 50`, clamps the index to
  0..99, and reads a float from the table at `0x64d460`.
- `0x45a53e..0x45a57a` clamps the result to 150..470. Consequently the effective
  speed is 150 below distance 59, changes in one-unit bands from 59 through 77,
  and is 470 at distance 78 or greater. The 19 unclamped float values are kept
  exactly in `src/script-camera.js`; this is a lookup, not a generic easing curve.
- Below five units, `0x45a4e4..0x45a4f3` skips the movement overwrite and retains
  the target position. The remake also snaps this final arrival distance.

The portable sampler integrates the piecewise constant distance bands directly
from elapsed route time. This preserves the original speed law without the
original frame-step rounding/overshoot and makes save restoration deterministic
at different render rates. It does not change intermediate waypoints, camera
lifetimes, script handoffs or the input lock during an overview. Collision
correction and native per-frame camera compensation are separate outstanding
details; this recovery does not claim complete camera parity.

Focused verification: `node --test tests/script-camera.test.mjs
tests/camera-control.test.mjs` (10 passing checks), including all five authored
routes, lookup boundaries, final deceleration/arrival, saved elapsed time and
fixed-overview mouse locking. No build or native executable execution is needed.

## Fixed-overview input regression

The remake previously cancelled a non-dialogue fixed/route camera in
`PlayerCameraControl.look`, and cancelled it again on attack in `CastleWorld.update`.
Those manual cancellation paths have been removed. Authored camera lifetime and
script commands now control the return to RedCat. In the caves,
`cam_waterlab01` and `cam_waterlab02` specify `CamTimeInMode=5000`;
`cam_waterlab03` and `cam_waterlab04` specify `8000`. Their camera pitch cannot
be altered by mouse input, and ignored motion cannot accumulate a hidden aiming
angle. Regional player-relative mode 1 remains mouse-adjustable.

Save files already preserve host time and camera start/duration, so a partially
viewed overview resumes with its remaining duration rather than restarting or
becoming immediately cancellable. Fixed cameras with a zero duration still
wait for their original script handoff.

The zero-limit `cam_waterlab05` is an authored sequence rather than a stuck
preview: `wat_trigger03` enables it with `anim_cam03` (motion 198). Its `cam06`
marker at 3 seconds selects `cam_trigger11`, `cam07` at 7.5 seconds selects
`cam_trigger12`, and `back` at 14.99 seconds selects regional `cam_back03`
(mode 1, offset `[1.5,1.5,-20]`). These handoffs remain script-driven. The
currently installed executable's fixed-camera updater at `0x459d40` skips
expiry for a zero limit; elapsed time exceeding a positive limit calls the
normal-camera setter at `0x459d7b`.
