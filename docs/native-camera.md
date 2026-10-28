# Native camera and steering

On 28 October 2026 the player camera was rebuilt from the original executable
(`RcHcGame.dat`, SHA-256 `e30781fc…`). The port's earlier camera kept a free
mouse camera, blended presets on its own clock and used a home-made collision
solver. The new camera follows the original logic, and adds two things the
user asked for:

- direct mouse, touch-drag and controller right-stick look, which turns RedCat
  and the camera together without the native smoothing, as in release 1.0.4;
- the existing wall fix, where the camera rises over RedCat instead of
  entering his model.

Code:

- [`source/native-camera.js`](../source/native-camera.js) holds the follow
  camera and the steering.
- [`source/third-person-camera.js`](../source/third-person-camera.js) holds
  the wall lift.
- [`source/camera-control.js`](../source/camera-control.js) routes look input.
- `CastleWorld.updateCamera` and `syncPlayer` in
  [`source/world.js`](../source/world.js) connect them to the game.

Tests: `tests/native-camera.test.mjs`, `tests/third-person-camera.test.mjs` and
`tests/camera-control.test.mjs`.

## What the original does

The camera controller is `CRcDop` (constructed at `0x457e00`). It is created by
the player and updated once per frame at `0x4594a0`. Its modes are:

| Mode | When | Function |
| --- | --- | --- |
| 5 | Normal follow camera | `0x4598e0` |
| 6 | Follow camera with a CameraTrigger `CamOffset` (CameraMode 1) | `0x4598e0` |
| 7 / 8 | Fixed position looking at a point / at RedCat (CameraMode 2 / 3) | `0x459d40` |
| 9 | Lock-on while aiming at a target | `0x459e50` |
| 10 | Waypoint route (CameraMode 4) | `0x45a130` |

Every mode change is a hard cut: the frame after a change skips all smoothing.

### Follow camera (modes 5 and 6)

- **Yaw.** The camera's yaw turns toward RedCat's heading by
  `min(1, dt × rate)` of the remaining angle per frame. The rate is `TurnSpeed`
  2.0 per second, or 1.5 (`TurnSpeed × TurnRatio`) while movement input is
  held. The values come from Game.ini `[RcCamera]`.
- **Pitch.** The camera has no look-at point. It looks along its own yaw with
  the preset pitch, smoothed at the same rate.
- **Preset rows.** The preset is chosen by the motion state. Each row gives
  the height and distance in multiples of RedCat's box height H, measured from
  his feet, and the pitch. The table is in rdata at `0x64d3a8`, and the row
  index is the Weapon1/2/3 distance setting (`0x458e40`):

  | Index | Moving | Backpedal | Idle |
  | --- | --- | --- | --- |
  | 0 | 1.25, 2.5, −6° | 1.6, 2.7, −27° | 1.5, 1.7, −15° |
  | 1 | 1.25, 3.5, −7° | 1.6, 2.7, −27° | 1.5, 2.7, −15° |
  | 2 | 1.75, 3.25, −12° | 2.1, 2.45, −32° | 2.0, 2.5, −18° |

  The backpedal row applies when the rewritten move is backward (move z = +1).
  The port's earlier D5 change wrongly applied it to full *forward* input.
- **Position chase (`0x45a470`).** The camera first moves with RedCat's
  displacement. It then closes the remaining error at 150 units/s, rising to
  470 units/s for larger errors (the table at `0x64d460`, shared with the route
  camera). Within 5 units it snaps.
- **Line of sight (`0x45aa40`), idle only.** If the ray from RedCat to the
  camera is blocked, the camera searches around RedCat at the same radius and
  height. It tries steps of 10°, then 8°, then 6°, on alternating sides, up to
  90°. A clear spot is held, and the camera yaw turns to face RedCat at 4.0/s.
- **Hull collision (`0x45ae30`).** A ±8 unit box is swept from the last camera
  position. When the box also cannot reach the new position from RedCat, the
  camera is placed at the impact point at once. A final ray from RedCat pulls
  it in front of any wall, except while RedCat is actually moving. There is no
  easing back out; the chase handles that.

### Steering (`0x434f20`)

Movement is camera-relative. RedCat turns toward a direction built from the
camera's yaw, and then moves along his own heading:

| Input | RedCat turns toward | Moves |
| --- | --- | --- |
| Forward | camera forward | forward (forward speed) |
| Forward + turn left/right | 45° left/right of camera forward | forward |
| Turn left/right alone | 90° left/right (turns in place, ControlMode 1) | — |
| Back | camera forward (keeps facing away) | backward (other speed) |
| Back + turn left/right | 45° right/left of camera forward | backward |
| Strafe key (MoveLeft/Right) | heading frozen | sideways |

- **Rates.** RedCat turns at 6.1/s while moving and 2.4/s when turning in
  place. Inside π/8 he snaps to the target.
- **Input signs.** Only the sign of each input counts, so analog sticks steer
  like keys.
- **Lock-on.** While locked on, movement input turns RedCat toward the target.
  The raw input then moves him in his own frame. Without input he does not
  turn.
- **Lock-on camera.** It sits 1.2×H up and 1.5×H behind his heading and
  pitches toward the target.

### Input

The original reads the mouse through DirectInput, but the shipped `Look=1`
setting means the mouse does nothing. It has no pitch control, no invert
option and no first-person view.

## Port behaviour and extras

- **Direct look (requested).** Look input from the mouse, touch drag or
  controller right stick turns RedCat himself, as in release 1.0.4, and the
  camera turns with him in the same frame. The camera's stored chase position
  is rotated around him together with the turn, so neither the native yaw lag
  nor the position chase smooths it. Vertical look tilts the shared view/aim
  pitch. It is added directly to the native preset pitch and swings the
  camera around RedCat's chest at once. The native distance and height rows,
  collision and the wall fallbacks still apply. Fixed and route overviews,
  dialogue and target lock still ignore look input.
- **Keyboard (unchanged native).** Without look input, the keyboard and the
  movement sticks use the native steering and the lagged, smoothed follow
  camera described above.
- **Wall lift (requested, kept from release 0.9.7; smoothed 28 October).**
  When RedCat backs into a wall, the native pull-in can leave the camera
  inside his model, or closer than 80 units to his chest. The camera then
  rises along an arc over him, at that 80-unit radius, and the view turns
  down toward him.
  - **Height.** It is the lowest angle with a clear, comfortable view, found by
    a coarse scan and then refined. So it changes continuously and comes back
    down as RedCat gains room.
  - **Easing.** The camera position eases toward that point at 12/s, and back
    to the native position at 6/s, as release 1.0.4 did. Every eased step is
    clipped against the world and never enters RedCat.
  - **Independence.** The lift is applied on top of the native result and is
    never fed back into the native chase.
  - **Look input.** A direct mouse or touch turn rotates the eased position
    with RedCat, so look input stays immediate.
  - **Previous behaviour.** The earlier version picked one of eight fixed arc
    heights each frame, with no easing, and wrote the result back into the
    native chase. That made the camera jitter upward by up to 12 units in a
    frame. `tests/third-person-camera.test.mjs` now backs RedCat into a wall
    frame by frame. It checks that he is never entered, that no frame moves
    the camera more than 4 units vertically, and that the camera does not dip
    while backing in.
- **Low-ceiling fallback (requested 28 October).** When a low ceiling blocks
  the arc, the camera takes the clearest view from RedCat's left, right or
  front, at the boom's horizontal distance, looking at him. Only when no
  external viewpoint exists at all is his model hidden for that frame; it
  reappears as soon as there is room. These two fallbacks and the lift are the
  only collision behaviour added to the native result. The old extra smoothing
  was not restored.
- **First person (kept).** The original has no first-person view; the port's
  toggle remains. First person and no-clip flight keep direct mouse turning
  and the previous movement model.
- **Key mapping.** Arrow left/right map to TurnLeft/Right, A/D to the strafe
  keys, and touch and controller sticks steer like the turn keys.
- **Distance index.** The port has no Weapon1/2/3 actions, so row 0 is always
  used.
- **Field of view.** The FOV remains the user's setting (default 65°
  vertical). Natively it works out to about 54° vertical on 4:3.
- **Save compatibility.** No new save fields. Saves store RedCat's heading as
  before, and loading cuts the camera behind him.

## Validation (28 October 2026)

- **Unit tests.** `npm test` passes 1593 of 1593 tests, including
  `tests/native-camera.test.mjs`, `tests/third-person-camera.test.mjs` and
  `tests/camera-control.test.mjs`.
- **Browser scenes.** All 112 scene scripts were rerun with Playwright
  Chromium (unlock preload as in the parity review). Every scene that passed
  before the rebuild still passes; the others fail at the same assertion as
  before.
- **Scene expectations updated for native behaviour:**
  - `prop-camera`: horizontal look is measured on the follow camera's yaw,
    which turns with RedCat. Offset regions no longer overwrite the shared
    pitch, so the old-save pitch recovery was removed.
  - `target-eligibility`: native lock-on pitches toward the target instead of
    centring it.
  - `camera-wall`: see below.
- **Steering mapping for direct callers.** Callers that pass only `right` and
  `turn` are mapped to strafe and steer. A heading set from outside (spawn,
  teleport, load, test setup) cuts the camera behind RedCat.
- **Confined spaces.** Under the confined low and sloped Castle ceilings,
  `camera-wall-scenes.mjs` checks every frame: the camera stays outside level
  solids and outside RedCat's model, and he stays visible. The low-ceiling
  fallback supplies this. The unit suite then passes 1594 of 1594 tests.

## Limits

- The native smoothing is frame-rate dependent, and the port keeps that.
- The angle quirk near −π/2 in `0x458900` and the firing-stops-movement branch
  (`0x4353e5`, gated by an unidentified flag) are not reproduced.
- Visual comparison with the original, and a campaign playthrough with the new
  steering, have not been done.
