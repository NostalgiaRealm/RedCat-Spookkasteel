# RcHcGame.dat — follow camera, heading, and the port's looking around and first-person view

Reference for `source/host/look.js`. The original has no proportional look (sideways or up and
down) and no first-person view; the port adds them on top of the original follow camera, with
the model of the JavaScript port (`../RCSPOOK_NEW/source/camera-control.js`,
`native-camera.js`).

Evidence: the Ghidra export under `RC_ORIGINAL_DECOMPILED/decompiled/RcHcGame.dat/`
(`assembly.tsv`, `calls.tsv`), the bytes of `originals/RcHcGame.dat`, and the recompiled
module running in the Node runner (`tools/run-headless.mjs`). Earlier notes on the original
camera are in `../RCSPOOK_NEW/docs/native-camera.md`; where this file differs from them, this
file was checked against the instructions and at run time (section 10).

Labels: **C** confirmed from the instructions or data at the address given; **R** confirmed at
run time in the Node runner (values read from game memory); **I** inferred; section 11 lists
what is unresolved. Everything is C unless marked.

Conventions as in [cheats-and-player.md](cheats-and-player.md): thiscall = `this` in `ECX`,
`vec3` = three floats (x, y, z), y is up. Angles are radians unless degrees are written.

---

## 0. Short answers

1. **Heading**: `input = *(player+0xF8)` (`CRcPlayerInput`), yaw at `input+0x18`. The game's
   heading is `h = input+0x18 + π/2` (`0x4D6960`); RedCat looks and walks along
   `(cos h, 0, −sin h)`. Turning right makes `h` smaller (R: the `TurnRight` key).
2. **Actor orientation**: every frame `CRCPlayer::Update` builds a matrix from the yaw and
   the feet position (`0x430AC0`) and gives it to the actor (`actor+0x168`,
   `geActor_ClearPose` `0x5B50A0`), unless the actor's script-hidden byte `actor+0x2A8` is set.
3. **Camera controller**: `dop = *(player+0x250)`, class `CRcDop` (vtable `0x64D5F4`, 0x52C
   bytes). Yaw `dop+0x378` (same measure as `h`), pitch `dop+0x374`, position `dop+0x3B8`,
   mode `dop+0x450`, "cut" byte `dop+0x454`. It writes the engine camera
   `*(engine+0xE0)` (`CAdamCamera`: Euler angles `+0x34`, position `+0x210`, matrix `+0x1E0`).
4. **Preset table**: the follow camera reads 27 floats at **`0x6B7118`** (`.data`), 9 per
   distance preset, grouped by quantity: heights (moving, backwards, standing), distances,
   pitches. The table is filled at start-up by the static initialiser `0x457CC0` from
   `0x64D3A8` (`.rdata`), where the same numbers are grouped by motion. The only reader of
   `0x6B7118` is the follow camera `0x4598E0`; the only reader of `0x64D3A8` is the initialiser.
5. **Box and eye**: the player position `player+0x198` *is* the eye point. The box is
   `player+0x1D4` (mins) / `+0x1E0` (maxs) = (−12.48, −54.08, −12.48) / (12.48, 3.84, 12.48) (R):
   height H = 57.92 (`BBYSize` 1.81 × 32), eye 54.08 above the feet (`EyeHeight` 1.69 × 32).
6. **Hiding**: `RcHide` / `RcShow` call the actor's slots 11 / 12 (`0x42E510` / `0x42E530`):
   the actor is moved to (−999999, −999999, −999999), deactivated and marked (`+0xA8`, `+0xDD`,
   `+0x2A8`). The engine draws an actor when bit 0 or 2 of its entry in the world's actor list
   is set (`0x5B8A0B`); the port uses that entry.
7. **Camera modes** (`dop+0x450`): 5 follow, 6 follow with a CameraTrigger offset, 7 and 8 fixed,
   9 lock-on, 10 route. A cutscene is the object at `player+0x258` with its state at `+0xA8`.
8. **Steering** takes "forward" from the horizontal part of the engine camera's *up* vector
   (`0x434F20`): right for a camera that looks down, nothing for a level one, backwards for one
   that looks up.
9. **Collision of the camera**: an 8-unit box swept from the camera's last place and, if that
   hits, from RedCat (`0x45AE30`); it stops at solid and window brushes, not at clip brushes.
10. **Shots** outside lock-on fly along `(cos h, 0, −sin h)`: the vertical part is the constant
    0 in the code (`0x434AF7`). There is no field a look pitch could go into.

---

## 1. Pointer chains

All start at the application global `0x006B915C`.

| What | Expression | Evidence | Ev. |
|---|---|---|---|
| player (`CRCPlayer`, vtable `0x64C430`) | `app → *(+0x3A4) game → *(+0x60) sublevel → *(+0x360)` | cheats-and-player.md 1.1 | C, R |
| position = eye point | `player+0x198` (vec3) | section 5 | C, R |
| velocity asked for | `player+0x180` (vec3) | `0x4DAE6C` | C |
| box | `player+0x1D0` (byte valid, `+4` mins, `+0x10` maxs); `0x4DC0D0` returns its address | `0x4D5D36`–`0x4D5D7D`, `0x554A20`, `0x554A50` | C, R |
| input (`CRcPlayerInput`, vtable `0x64C5B0`) | `*(player+0xF8)`; rotation vec3 at `+0x14`, yaw `+0x18`, move vector `+0x28` | `0x437750`, `0x4D6960` | C, R |
| properties | `*(player+0x1F0)`; health `+0x3C` | cheats-and-player.md 1.3 | C |
| camera controller (`CRcDop`, vtable `0x64D5F4`) | `*(player+0x250)`; created by `CRCPlayer` slot 23 `0x434230` (`operator new(0x52C)`, ctor `0x457E00(player)`); `dop+0x360` = player | `0x43428C` | C, R |
| RedCat's actor (`CCharAnimActor`, vtable `0x64C338`) | `*(player+0x254)`; created in the same function from `RedCat.act` (`0x42DFA0`); getter `0x431170` | `0x43436F` | C, R |
| cutscene (`CRcCutScene`, embedded) | `player+0x258`; state `+0xA8` (= `player+0x300`) | section 7 | C, R |
| engine camera (`CAdamCamera`) | `*(*(app+0x3A0) + 0xE0)`; getter `0x409F20` | `0x4594E4`, `0x434F78` | C, R |
| Genesis3D world | `*(sublevel+0x5C)` (the sublevel is also `actor+0x18`) | `0x49E232`, `0x49CB7C` | C, R |
| RedCat's `geActor` | `*(actor+0x114)`; the game's copy of its world flags `actor+0x14C` | `0x49CB70` | C, R |

`cheats-and-player.md` calls `player+0x250` an "action-state object" whose state id
`0x459330` returns: it is the camera controller, and the id is the camera mode. The movement
lock `player+0x371` (`0x435440`) is therefore "camera mode 7, 8, 10 or 11".

---

## 2. Heading and steering

### 2.1 Where the heading is

- `0x4D6960(player)`: `h = rotation.y + π/2`, wrapped. `rotation` is `input+0x14..+0x1C`
  (`input->vtbl[10]`). Constants `0x64F0F4` = π/2, `0x64D654` = π, `0x64F0F8` = 2π.
- `CAdamPlayer::Update` (`0x4DA970`) clones the input object (`vtbl[1]`), polls
  (`vtbl[3]`), calls `player->vtbl[24](now, dt, clone, input)` = `0x434430`, then rotates the
  move vector by `input+0x18` (`0x4DADFC`, `0x4DA920`).
- `0x434430` (steering): without movement input, or when the player is not active
  (`+0x104`), locked (`+0x371`) or dead, the rotation is copied from the clone, so the
  heading stays what it was (`0x4348D1`). Otherwise the new heading is written as
  `heading − π/2` to a static vec3 (`0x6B52B8`) and stored with `0x437750`. The two other
  components of that static are set once, from the first move vector (`0x434884`).
- R: standing in world 1, `input+0x14..+0x1C` = (0, −π, 0), `h` = −π/2, the camera 98.46
  units from RedCat on the −z side. `TurnRight` held: `input+0x18` falls (−3.14, −3.44, −3.97 …).

### 2.2 What the steering turns towards (`0x434F20`)

It copies the **engine camera's matrix** (`camera+0x1E0`, 12 floats: `AX AY AZ BX BY BZ CX
CY CZ`, translation) and takes two vectors from it: left `−(AX, BX, CX)` (`0x5B3630`) and
**up `(AY, BY, CY)`** (`0x5B3650`). Both get y = 0; the up vector is normalised and is the
"forward" of the controls; left is added or subtracted for the turn keys.

Consequences:

- The controls follow the camera of the *previous* frame: the player is updated first, the
  camera controller last (`0x433707`–`0x433726`, end of `CRCPlayer::Update`).
- "Forward" is right only while the camera looks down. With pitch p and Euler yaw e the up
  vector is `(sin e · sin p, cos p, cos e · sin p)`: its horizontal part is the camera's
  forward times −sin p. R: with the follow camera's pitch forced to exactly 0, holding
  `MoveForward` makes RedCat veer by 7, 6, 6, 5 … degrees per pass towards the angle 0; with
  −1 degree he walks straight. The original's presets are all between −6 and −32 degrees.
- Readers of `camera+0x1E0` of the engine camera: this function, and `0x556720`, which only
  debug key E reaches (`0x58EBA0` → `0x556840`). `0x5569B0` rebuilds the matrix; for the
  engine camera that is done by the controller's update and reset and by debug keys. (The
  same code at `0x4DB5DF` and `0x4325BF` works on another camera object, `player+0x10C`.) So
  between the end of one pass and the steering of the next, nothing else reads or rewrites it.

The new heading approaches the target by `min(1, dt × rate)` of the difference, rate 2.4
(`0x64C424`) or 6.1 (`0x64C428`, when the move vector has a z part), and jumps onto it when
the difference is below π/8 (`0x64C580`). The comparison is made after the fix-ups at
`0x43468A`–`0x434761`, which add 2π to a negative current heading but to the target only if
the current one is still negative afterwards. R: with the current heading at −90° and the
target at −90.84°, RedCat approaches by a tenth per pass instead of jumping.

`native-camera.md` describes the rest of the steering (lock-on, strafing, firing); it was not
re-read here.

### 2.3 The actor follows the heading

End of `CRCPlayer::Update` (`0x4334F6`–`0x43363B`): feet = position + box mins y
(`0x43351A`); `0x430AC0(&matrix, &feet, input yaw)`; if `actor+0x2A8 == 0` (`0x42E550`) the
matrix is copied to `actor+0x168` and applied (`0x5B50A0(geActor, 0, &matrix)`); then
`actor->vtbl[2](now, dt)`; then the camera controller's `vtbl[2]`. Nothing else has to be
written when the heading changes between two passes.

---

## 3. The camera controller `CRcDop`

### 3.1 Fields (offsets from `dop`)

| Offset | Type | Field | Evidence | Ev. |
|---|---|---|---|---|
| `+0x340` | box | hull of the camera, ±8 units (mins `+0x344`, maxs `+0x350`) | ctor `0x458553` ff., `0x45AE51` | C, R |
| `+0x360` | ptr | the player | ctor | C, R |
| `+0x374` | f32 | pitch now (smoothed) | `0x45984F` | C, R |
| `+0x378` | f32 | **yaw now** (smoothed), same measure as the heading `h` | `0x459832` | C, R |
| `+0x39C`, `+0x3A0` | f32 | `[RcCamera] TurnSpeed` (2.0), `TurnRatio` (0.75) | `0x459994`–`0x4599AC`; values R | C, R |
| `+0x3B8` | vec3 | **camera position** (target of this frame, then after chase and collision) | `0x459601` | C, R |
| `+0x3C4` | vec3 | Euler angles given to the engine camera: pitch, yaw − π/2, 0 | `0x45960E`, `0x459C84` | C, R |
| `+0x3D0` | vec3 | RedCat's feet: position, y + box mins y | `0x45A3E0` | C, R |
| `+0x3DC` | vec3 | RedCat's box size; **`+0x3E0` = H** | `0x45A446` | C, R |
| `+0x3EC`..`+0x40C`, **`+0x420`** | | set by the constructor (`0x458790`–`0x4587C6`: two cleared vec3, 0, 0.5, 1e-7, and `+0x420` = 0) and not touched again: no other instruction of the controller's code (`0x457E00`–`0x45B250`) has these displacements, and in the whole file `[reg+0x420]` occurs only here and in `CAdamSubLevel` functions (`0x4F3530`, `0x4F3FD0`, `0x4FAAB0`) | ctor | C; R: `+0x420` stays 0 through 1624 gaps of world 2 |
| `+0x410` | vec3 | camera position at the end of the last frame | `0x459846` | C, R |
| `+0x424` | vec3 | player position at the end of the last frame | `0x45986D` | C, R |
| `+0x431` | u8 | "moving" this frame | `0x459A6D`, `0x459AE8` | C |
| `+0x432` | u8 | the line-of-sight search holds a place (`+0x440` vec3) | `0x45AA40` | C, R |
| `+0x434` | vec3 | added to every frame and never reset; only used as the start of a trace whose result is not read (`0x45AAF0`) | `0x459B25`–`0x459B75` | C, R |
| `+0x44C`, `+0x450` | i32 | previous mode, **mode** | section 3.3 | C, R |
| `+0x454` | u8 | **cut**: set by every mode change; the next frame skips all smoothing and the position chase and clears it | `0x4599B0`, `0x459BC0`, `0x459C8D`, `0x459CE8` | C, R |
| `+0x458` | 3 × f32 | mode 6: height, distance (in H), pitch (degrees) | `0x459010`, `0x459A19` | C, R |
| `+0x464`, `+0x470` | vec3 | modes 7/8: camera place, point looked at | `0x4590B0` | C |
| `+0x480` | ptr | mode 9: target; modes 8/10: object looked at | `0x459270`, `0x459E59` | C |
| `+0x508`, `+0x50C` | i32 | time in a timed mode, its limit (ms) | `0x459D4A` | C |
| `+0x521` | u8 | the hull collision moved the camera in this frame | `0x45AF58` | C, R |
| `+0x528` | i32 | **distance preset** 0..2 (`0x458E40`; set from the `Weapon1..3` keys at `0x4325DA`; 0 again in each sublevel, `0x458DAE`) | | C, R |

### 3.2 Per frame (`0x4594A0`, vtable slot 2, called last in `CRCPlayer::Update`)

1. `0x45A3E0`: feet and box size (above).
2. The mode function (3.3) computes position `+0x3B8` and Euler angles `+0x3C4`, and returns
   yaw and pitch in a local (pitch, yaw, 0), which starts as (−20, 0, 0).
3. Modes 5, 6, 9 and 11: hull collision `0x45AE30`.
4. Engine camera: `0x556710`, `vtbl[1](&position)`, `0x5566C0(&euler)` (stores at
   `camera+0x34`), `0x5569B0` (matrix = rotate z, x, y, translate; `geCamera` transform
   `0x5C9420`; copy to `camera+0x1E0`).
5. `+0x374` / `+0x378` = wrapped pitch / yaw from the local; `+0x410` = position; `+0x424` =
   player position. In modes 7 and 8 the local is not written, so `+0x378` becomes 0 there (R).

### 3.3 Modes

| Mode | Function | Set by | Movement lock `+0x371` |
|---|---|---|---|
| 5 | follow `0x4598E0` | ctor; `0x458FD0(5)`: CameraTrigger `CameraMode` 0, end of a timed mode | no |
| 6 | follow `0x4598E0` with `+0x458` | `0x459010(6, h, d, pitch)`: `CameraMode` 1, the three numbers are `CamOffset` | no |
| 7 | fixed, looks at a point `0x459D40` | `0x4590B0`: `CameraMode` 2 | yes |
| 8 | fixed, looks at RedCat or an object `0x459D40` | `0x4591B0`: `CameraMode` 3 | yes |
| 9 | lock-on `0x459E50` | `0x459270(9, target, flag)` from `CRCPlayer` `0x434900`; ended by `0x458F90` (back to the previous mode) | no |
| 10 | route `0x45A130` | `0x4592D0`, `0x459340`: `CameraMode` 4 | yes |
| 11 | follow `0x4598E0` (switch default) | accepted by the setters (5..11); no caller found that passes 11 | yes |

`CRcCameraTriggerModel::ActivateCamera` = `0x45B500` (switch on the trigger's `CameraMode`,
table `0x45BC70`); it runs when the trigger is activated (callers `0x45C30C`, `0x45D306`), not
every frame. All six calls of `0x458FD0` pass 5. Every setter stores the old mode in
`+0x44C` and sets the cut byte. In the levels: `CameraMode` 1 occurs once in world 2, once in
world 3 and 14 times in world 4 (offsets such as "2.5 2 −30", "3 1.5 −45").

R (world 1 and 2 openings): the route (10) or fixed cameras (7) with follow-camera shots (5)
in between, all while the cutscene state is not 0; in world 2 the player is in control for
the first passes (1.07 to 1.13 s) before the cutscene starts.

---

## 4. The follow camera (`0x4598E0`)

```
h      = heading(player)                                   // 0x4D6960
rate   = input has movement ? TurnSpeed * TurnRatio : TurnSpeed
if (!cut) yaw = smooth(axis y, current = dop+0x378, target = h, rate, dt)   // 0x458900
else      yaw = h
(height, distance, pitchDeg) =
    mode 6                          -> dop+0x458, +0x45C, +0x460
    moving, move.z == 1 (backwards) -> table row "backwards"
    moving                          -> table row "moving"
    else                            -> table row "standing"
  ("moving": movement input, or the actor's position differs from last frame's copy at 0x6B7188
   (0x5B2EC0, tolerance 0.01); and player active, not locked, animation state != 15)
position = feet + (cos(yaw + π) * distance * H,  height * H,  −sin(yaw + π) * distance * H)
0x45AA40 (line of sight, standing only)
if (!cut) 0x45A470(dt, 0)                                  // position chase
euler.pitch = pitchDeg * π/180, smoothed like the yaw unless cut
euler.yaw   = yaw − π/2          (or, while the line-of-sight search holds a place, towards RedCat at rate 4.0)
cut = 0
```

The camera has no look-at point: it looks along its own yaw with the row's pitch.

`0x458900` (smoothing by quaternion slerp, factor `min(1, dt × rate)`) has a special case:
when the current angle lies between −1.58 and −1.55 and the wrapped target is below it, the
current angle is first lowered by 0.015 (`0x458921`–`0x458968`). R: from exactly −90° (the
start of world 1) the camera yaw jumps by −0.84° in the first walking pass, and RedCat, who
follows the camera's forward, ends 0.6° off his old direction.

### 4.1 The preset table

Read at `0x459A95`–`0x459B01` as `float[index * 9 + …]` with `index = dop+0x528`:

| Address (index 0) | +0 | +4 | +8 |
|---|---|---|---|
| `0x6B7118` height in H | moving | backwards | standing |
| `0x6B7124` distance in H | moving | backwards | standing |
| `0x6B7130` pitch in degrees | moving | backwards | standing |

Index 1 follows at `0x6B713C`, index 2 at `0x6B7160`; the table ends at `0x6B7184`.

The source at `0x64D3A8` has, per index, three rows (moving, backwards, standing) of (height,
distance, pitch). The initialiser `0x457CC0` (reached through the jump at `0x457CB0`; 27
loads and 27 stores) copies `source[index][row][q]` to `table[index][q][row]`.

| Index | Moving | Backwards | Standing |
|---|---|---|---|
| 0 | 1.25, 2.5, −6 | 1.6, 2.7, −27 | 1.5, 1.7, −15 |
| 1 | 1.25, 3.5, −7 | 1.6, 2.7, −27 | 1.5, 2.7, −15 |
| 2 | 1.75, 3.25, −12 | 2.1, 2.45, −32 | 2.0, 2.5, −18 |

Readers: a search of the whole file for every 32-bit value in `0x6B7118..0x6B7183` finds 27
stores in the initialiser and 9 operands in `0x4598E0`, nothing else; for
`0x64D3A8..0x64D413` only the 27 loads of the initialiser. R: both tables hold these values
while a world runs; standing with index 0 the camera is 86.88 above the feet and 98.46 behind.

### 4.2 Position chase (`0x45A470`), line of sight (`0x45AA40`), hull (`0x45AE30`)

- Chase: `base = dop+0x410 + (player position − dop+0x424)`; if the target is within 5 units
  of `base` the target is taken; otherwise `base + direction × speed × dt`, speed 150, or for
  errors above 50 units the table `0x64D460[error − 50]` limited to 150..470.
- Line of sight (only while not moving): if the ray from RedCat to the target is blocked, a
  search (`0x45A600`) can pick another place at the same radius and hold it (`+0x432`,
  `+0x440`); while held the camera stays there as long as that place sees RedCat.
- Hull: the ±8 box (`dop+0x340`) is swept from `dop+0x410` to the position; if it hits *and*
  the same box swept from the player position to the position hits, the camera is put at the
  impact of the second sweep and `+0x521` is set. A last ray from the player position pulls
  the camera in front of a wall when RedCat stands, or has movement input without having moved
  (`0x45AFA0`–`0x45AFE1`: `dop+0x424` equal to the player position).
- The traces are `0x565E10(tracer, from, to)` → Genesis `0x5B7D80`. The tracer's flag bytes
  `+0x14..+0x1A` choose what stops it; the hull sets them to 0, 1, 1, 0, 1, 0, 0
  (`0x45AE89`–`0x45AEA4`), which makes the contents mask solid | window (1 | 2; `0x565EF3`,
  `0x565EFD`) and leaves out clip brushes (0x40, byte `+0x17`).
- So the original's camera is not kept out of everything RedCat is kept out of. R, world 1:
  at the north side of the courtyard RedCat is stopped at z = 2671 (by a clip brush, going by
  the JavaScript port's level data); with `TurnRight` held there the original's camera goes
  round him as far as z = 2803.

All three use the stored positions `+0x410` and `+0x424` and the player position, not the yaw.

---

## 5. Box, eye height

`0x4D5D24`–`0x4D5D7D` builds the box: x and z of mins are −half the size, y of mins is
`−*(float*)0x6B92B4`, maxs = mins + sizes. R: mins (−12.48, −54.08, −12.48), maxs (12.48,
3.84, 12.48). These are `Game.ini [Player]` `BBXSize` = `BBZSize` = 0.78, `BBYSize` = 1.81
and `EyeHeight` = 1.69 times 32 (I: which global holds which key was not traced; the values
fit only this way).

So `player+0x198` is 54.08 above the feet and 3.84 below the top of the box, 12.48 from its
sides. This answers "which point of the body is `+0x198`" in cheats-and-player.md (6.1).
`CAdamPlayer::SetPosition` (`0x4DBE20`) forwards the same vector to an object reached through
`player+0x10C` (`0x4CA920`, then its slot 1).

---

## 6. Hiding and showing RedCat

### 6.1 The script natives

Registered in `0x523D50`: `RcHide` → `0x56A4A0` (`0x527760`), `RcShow` → `0x56A5E0`
(`0x52779D`). Both fetch the player's actor (`0x431170`) and call `actor->vtbl[11](1)` /
`actor->vtbl[12]()`:

| | `CCharAnimActor` | base (`0x502680` / `0x502710`) |
|---|---|---|
| hide (slot 11, `0x42E510`) | base, then `actor+0x2A8 = 1` | if `+0xDD` is clear: save position to `+0xD0` and the active byte `+0x7C` to `+0xDC`; with the argument set, `0x502350(0)` (clears `+0x7C` and tells the sublevel); `+0xA8 = 0`; `SetPosition(−999999, −999999, −999999)`; `+0xDD = 1` |
| show (slot 12, `0x42E530`) | base, then `actor+0x2A8 = 0` | if `+0xDD` is set: `0x502350(saved +0xDC)`; `+0xA8 = 1`; `SetPosition(saved)`; `+0xDD = 0` |

`actor+0x2A8` is read only by `0x42E550`, whose only caller is `CRCPlayer::Update`
(`0x43355B`): while it is set the player stops posing the actor, so it stays far away. A
script-hidden RedCat is therefore out of sight by position, deactivated, and no longer
posed. In the recovered level scripts `RcHide` is called twice in world 3 and once in world 5,
`RcShow` never; RedCat comes back through `RcShowAtSpawnPoint` (`0x56A720`: the actor's slot
12 at `0x56A9FD`, then `Teleport` at `0x56AA2E`).

`+0xA8` is the game objects' "visible" byte (`CAdamGameObject` ctor `0x501DBD`); debug key K
toggles the *player's* (`0x4C9C96`), and `CRCPlayer::Kill` clears it (`0x4DD25C`).

### 6.2 The engine's flags

`geWorld_AddActor` = `0x5B9970(world, geActor, flags, userFlags)`: count at `world+0x3B8`,
array at `world+0x3BC`, 12 bytes per actor: `geActor*`, flags, user flags.
`geWorld_SetActorFlags` = `0x5B9B00`, `geWorld_RemoveActor` = `0x5B9A50`.

The actor loop of the renderer (`0x5B89E6`–`0x5B8ABF` in `0x5B88D0`) skips an actor unless
`flags & 5` (normal view; `0x5B8A0B`) or, inside a mirror (`0x722F24` > 0), `flags & 6`
(`0x5B8A19`); bit 2 also switches off the visibility test (`0x5B8A47`). Bit 3 (8) and the
user flags are used by the collision functions (`0x5CA513`, `0x5CB8B7`).

The game keeps its own copy at `actor+0x14C`, adds the actor with it (`0x49CB70`) and writes
it again when it changes the collide bit (`0x49DF30` → `0x49E238`). R: all 270 actors of
world 1 have flags 9; RedCat is entry 0, user flags 0xF.

R (driver): in third person, the same pass with and without bits 0 and 2 of RedCat's entry:
321 and 66 polygons reach the render driver; the 255 missing ones use one texture, of which
nothing is left; every other texture has the same count.

---

## 7. Cutscenes and control

- `StartCutScene(time)` = `0x569ED0` → `0x4819F0(player+0x258, time)`: state `+0xA8` = 1,
  and `0x480DC0`: HUD off, **`player+0x104 = 0`**. `StopCutScene` = `0x56A0C0` → `0x481B20`:
  state 3. `0x481980` moves 1 → 2 and 3 → 0 when the fade time is over; at 3 → 0 `0x480C80`
  sets `player+0x104 = 1`. States: 0 none, 1 bars coming, 2 running, 3 bars going.
- A cutscene does not choose a camera: the scripts switch CameraTriggers on. Follow-camera
  shots (mode 5) occur inside cutscenes (R: world 2, 11.3–12.5 s and 22.0–26.0 s).
- `player+0x104` is also cleared by `CRCPlayer` slot 28 (`0x436F60`, the new start after
  losing a life) together with `+0x372 = 1`, and set again when the getting-up animation is
  over (`0x433233`). R: 195 passes after a death.

look.js calls the player **in control** when: game state 3, `player+0x104 != 0`, cutscene
state 0, health > 0, camera mode 5 or 6.

---

## 8. Where RedCat's shot gets its direction

`CRCPlayer` `0x434900` (called from `Update` at `0x4332FF`):

- Locked on (`player+0x364`, target at `+0x35C` or `+0x360`): direction = target position −
  position of the hand bone (`0x434A95`–`0x434AC5`, hand `0x434E80`). Not normalised here.
- Otherwise (`0x434ACB`–`0x434B02`): `0x5B16A0(&v, heading)` gives `(cos h, 0, −sin h)`, and
  the y component is then written again as the constant 0 (`0x434AF7`).
- The shot is created at `0x434DAC`: `0x44D260(&result, sublevel, type, hand position,
  direction, 1, &second)`, the two vectors passed by value on the stack. The emitter hands the
  direction to the projectile's slot 31 (`0x44D336`; `CRcWeaponShot` `0x44ECA0`), which turns
  it into the velocity with the speed from the projectile settings. The type comes from the
  skill mask (`0x434E30`: 9, 8 or 11).

So outside lock-on the only inputs are the heading and the hand's position; the vertical part
is a literal in the code and a second zero inside `0x5B16A0`. There is no field of the player,
the input or the actor that the shot code reads for a vertical angle, and the actor's
orientation is not used (only the hand bone's position). **look.js therefore leaves the shots
as they are: they fly level along RedCat's heading**, whatever the look pitch. (The JavaScript
port fires along the view pitch, `world.js:1165`.) Making them follow the pitch would take
either a change of the code at `0x434AF7` or rewriting the velocity of each new projectile
after the pass that created it; neither was done. The projectile's velocity field was not
looked up.

---

## 9. What `source/host/look.js` does

```
host.look.turn(yaw, pitch = 0)   radians; yaw > 0 turns right, pitch > 0 looks down; calls add up
host.look.setFirstPerson(on)
host.look.state()                null, or { world, firstPerson, heading, pitch }
```

Requests are queued and applied in `host.mainLoop.beforePass`, like the cheats. Before the
first call the hook returns at once.

Everything below applies only while the player is **in control** (section 7). In every other
gap the table is the original's (copied back from `0x64D3A8`), a replaced trigger offset is
put back, RedCat's flags equal `actor+0x14C`, and look input is dropped. So there is **no
turning and no looking up or down** in a cutscene (also not in its follow-camera shots), with a
fixed or route camera, while dead or getting up, and **none while locked on** (mode 9; there
the original turns RedCat towards the target).

### 9.1 The model

As in the JavaScript port:

- One look pitch per world: radians, positive looks down, 0.16 at the start of a world,
  limited to −1.2 … 1.2; `orbit = pitch − 0.16`. No inversion, no re-centring.
- Third person (modes 5 and 6): the place the original computes is swung by `orbit` about
  RedCat's chest (feet + 0.75 H) in the vertical plane through the camera's "behind"
  direction; the view pitch is the original's smoothed row pitch minus `orbit`.
- First person: the camera at the eye point, its pitch = −look pitch (so −9.2° at the start of
  a world), its yaw the follow camera's.

Different from that port: in a CameraTrigger offset region (mode 6) first person stays on; the
shots stay level (section 8); the wall lift and the low-ceiling fallback of the port's camera
are not part of this.

### 9.2 Where the look pitch is kept

`orbit` is a float at **`dop+0x420`**, the field the constructor clears and nothing else uses
(3.1). A new world has a new controller, so its look pitch starts at 0.16 without any
bookkeeping; a save state has it because it is game memory; without a call it stays 0.

### 9.3 Up and down in third person: other numbers for the same camera

Height and distance of a row are measured in exactly the plane of the swing, from the feet and
behind. Seen from the pivot a row is (distance d, height h − 0.75); swung by `a`:

```
h' = 0.75 + (h − 0.75) cos a + d sin a        d' = d cos a − (h − 0.75) sin a
pitch' = max(pitch − a in degrees, −85)
```

look.js writes these into the nine rows of the table at `0x6B7118`, and in mode 6 into the
offset at `dop+0x458` (computed from the trigger's own numbers, which are kept and put back).
The original camera then does everything: yaw smoothing, the smoothing between the rows'
pitches, chase, line of sight, hull collision. The −85° stop keeps the camera from turning
over and out of the special case of `0x458900` (section 4); it is reached only by the rows for
walking backwards at a look pitch above about 1.1.

### 9.4 At once: carrying the camera along

A changed number alone would be followed by the original's pitch smoothing and position chase.
When look input changes the pitch by `d` (and when control is lost or comes back with a look
pitch set), look.js also moves what the next pass starts from:

| Written | Why |
|---|---|
| `dop+0x374` −= d | the smoothing goes on from the pitch now; the rows' pitches moved by the same amount |
| `dop+0x424` (last player position) | the chase starts from `dop+0x410 + player − dop+0x424`. That start is swung by `d` about the chest by changing `dop+0x424`. Not while the line-of-sight search holds a place: that place does not depend on the rows |

The last camera position `dop+0x410` is **not** changed. The hull collision sweeps from it, so
the original still sees every wall between where the camera was and where the look input
sends it. (The first version of look.js rotated `dop+0x410` for a turn; the check of 10 shows
that this let the camera through a wall. Turns use `dop+0x424` now as well.)

Sideways, with `d = −yaw` about the vertical through `player+0x198`: the heading `input+0x18`;
the camera yaw `dop+0x378` and `dop+0x3C8`; the chase start as above; a held line-of-sight
place `dop+0x440`; and the engine camera (matrix `+0x1E0`, yaw `+0x38`, position `+0x210`),
because the steering of the next pass reads "forward" from that matrix.

### 9.5 Steering at every pitch

The steering's "forward" fails for a camera that does not look down (2.2). In every gap in
which the player is in control and the engine camera's pitch (`camera+0x34`) is above −1°,
look.js replaces the up vector in `camera+0x1E0` (`AY`, `BY`, `CY`) by that of a camera with
the same yaw and a pitch of −1°: `(sin e · sin(−1°), cos(−1°), cos e · sin(−1°))`. Only the
steering reads it (2.2), and the controller builds the matrix anew at the end of the pass, so
what is drawn is not affected. Below −1° the original's own vector is left alone.

### 9.6 First person

Every row is (eye height / H = 0.9337, distance 0, pitch = −look pitch in degrees), computed
from the player's box; in mode 6 the same numbers replace the trigger's offset. The camera
target is then the player position. RedCat is taken out of the normal view by clearing bits 0
and 2 of his entry in the world's actor list (6.2); a mirror bit is kept or set if he was drawn
in mirrors (he is not: his flags are 9). `actor+0x14C` is not changed, so the original value is
always at hand and a write of the game's own (`0x49DF30`) is corrected in the next gap. The
script's hiding (6.1) is left alone: it has other effects, and a script's `RcHide` must keep
its meaning in a cutscene.

Switching first person on or off, and a new world, are **cuts**: `dop+0x454` is set the way
the original does at every mode change, and on switching on a held line-of-sight place is
dropped (`+0x432`, `+0x522`, as `0x45AB9D`). The byte is not set while another camera runs:
there it would restart that camera's timer (`0x45956B`, `0x4595C2`).

Keys 1, 2, 3 still set `dop+0x528`; in first person all presets hold the same numbers.

### 9.7 State

In game memory: the look pitch (`dop+0x420`), the table, a trigger offset, RedCat's flags. In
JavaScript, registered as the save-state part `look`: whether first person was asked for, and
a replaced trigger offset with what replaced it. A state without that part loads as "nothing
asked for".

`state()`: `firstPerson` is what was asked for (it can be suspended); `heading` is `−h`
wrapped, so RedCat looks along `(cos heading, 0, sin heading)` and `turn(a)` adds `a`; `pitch`
is the look pitch of this world (0.16 without a world).

---

## 10. Verification: `node tools/look-check.mjs`

Fourteen runs of `tools/run-headless.mjs`, twelve with the script itself as `--plugin` (an
option added to the runner: the plugin gets `m`, `host`, the clock and `stop()`). Nothing is
drawn in the Node runner. Samples are the game as a pass left it, read first in each gap.

- "Not drawn" is shown by the world flags the renderer tests (6.2) and by the polygons that
  reach the render driver, counted per texture handle.
- "Not through a wall" is judged outside the game, with the BSP collider of the JavaScript
  port (`../RCSPOOK_NEW/source/collision.js` and its imported level `lvl00a`; read only),
  contents solid | window as in 4.2, by the original's own rule: a 7-unit box gets to the
  camera's place from the place before or from RedCat. The original's own camera passes this
  judge (0 of 200 places) and a camera that is put through the wall does not (38 of 206).
- The place used in world 1 is (−1259.6, 2489.1), reached from the start with `turn` and 60
  passes of walking: the start is in a corner and faces exactly −90°, where the special case
  of section 4 applies. The wall used is the west wall of that courtyard: RedCat can go as far
  as a low ledge at x ≈ −1467 (z ≈ 2377); the wall is about 68 units behind it.

Results (R, run of 13 November 2026; 56 checks, all passed):

| Check | Result |
|---|---|
| turn(90), (−90), (45), (−30), (135), (10), (−170), each from the same save state | heading, camera yaw and engine camera turned by exactly that angle before any game code ran; one pass later 0.0000° more (0.0001° for 135) and the camera 0.000 units from the original's place behind him; walking forward then went 90.00, −90.00, 45.00, −30.00, 135.00, 10.00, −170.00° to the right of the walk without a turn |
| 40 × turn(−1.5°) while walking; turn(90) standing, 90 passes | heading −60.00°, camera yaw never off the heading; heading +90.00°, camera 0.000 units from the original's place |
| look pitch: steps and limits | 0.16 at the start; turn(0, 0.3) → 0.46; five more → 1.2; turn(0, −5) → −1.2; two calls in one gap add up |
| third person, the same 130 passes (standing, walking, turns, walking backwards) with and without look pitch: turn(0, 0.5); turn(0, −0.3); seven changes on the way | in the first pass drawn with it the camera is 53.3 / 32.2 / 21.5 units from the other run's and 0.0001 from that place swung about the chest; over all passes at most 0.0014 / 0.0019 / 0.0021 units from the swung place, pitch at most 0.0001 / 0.0010 / 0.0003° from "the other run's minus orbit", yaw equal, RedCat himself 0.0000 units from the other run |
| look pitch 1.2 and −1.2, the same passes | camera pitch −78.64 … −15.00° and −15.00 … +68.68°; camera 86.9 … 203.2 and 8.1 … 86.9 units above the floor (8 = its hull on the floor); the judge: 0 of 260 places in solid or unreachable |
| steering, third person, look pitch −1.2 / 0 / 1.2 (camera pitch +62.9 / −5.8 / −74.6°) | 30 passes of `MoveForward` go 0.000° beside the walk at the default pitch, heading unchanged, same 3.686 units per pass; `TurnRight` at −1.2 turns him right |
| steering, first person, look pitch 0.16 / −1.2 / 0 / 1.2 | the same: 0.000° beside the third-person walk, heading unchanged |
| first person: the view pitch | one pass after the input the engine camera's pitch is −9.17, +68.75, 0.00, −68.75° for look pitch 0.16, −1.2, 0, 1.2; camera at the eye point (0.0000); 60 passes of turn(±2°, −0.05 or +0.04) while walking: pitch at most 0.0004° from minus the look pitch; off: the third-person camera 0.000 units from the original's place swung by the same pitch |
| a trigger offset (2.5, 2, −30) with look pitch 0.66, third person | camera 0.000 units from that offset's place swung about the chest; the fields hold (3.245, 0.916, −58.648); back at 0.16 they are (2.5, 2, −30) and the table is the original's |
| a fixed camera and the lock-on camera with look pitch 0.66, against the same calls at 0.16 | camera position and angles equal (0.00000 units, 0.000000°), table original in every gap; turn(0.2, 0.2) before each pass changes neither heading nor look pitch; back in mode 5 the camera is 0.000 units from the swung place |
| at the wall: the original alone with `TurnRight` (200 passes); look input (206 passes: turn(180) and walking away, looking up and down, walking back, standing with his back to the wall, turning); the same with `dop+0x410` moved by hand | the game's hull moved the camera in 96 / 139 / 127 passes; westmost camera x −1524.8 / −1535.1 / −1593.2; judged: 0, 0 and 38 places unreachable (37 in solid) |
| first person on, 256 passes of walking, turning, a jump, along a wall, keys 1 2 3, standing; off | as before: camera never more than 0.0000 units from the eye point, flags 8 in every gap; off: table equal to the read-only data, flags 9, camera 0.000 units from the original's place |
| driver | third person, with and without bits 0 and 2 of his flags: 321 and 66 polygons, the 255 missing ones use one texture. First person, 60 passes: 0 polygons with that texture; with his flags written back by hand: 1138 in 49 passes |
| other cameras in first person, set with the game's own calls | fixed camera, mode 6, mode 9, death and new start as before: RedCat drawn and the table original while they run, the eye point again afterwards |
| world 2, first person and turn(0, 0.5) asked for before the game starts | cutscene 1.15–26.03 s: drawn and table original in all 1488 gaps; from its first change of camera on (1450 passes) the camera is equal to that of the same world with no call (0.00000 units); in its opening follow shot the camera comes from his eyes by a cut and is up to 33.4 units from the original's, which is still settling; after it: eye point, look pitch still 0.66, camera pitch −37.82° |
| world 2, third person, turn(0, 0.5) before the game starts | all 1487 passes of the cutscene but the one in which it began: camera at most 0.00028 units and 0.0001° from the run with no call; after it the camera is 0.000 units from the swung place, look pitch 0.66 |
| a save state made in first person at look pitch 0.46, loaded in a second process | first gap: `firstPerson` true, pitch 0.4600, camera pitch −26.36°, flags 8, eye point; 90 passes of the same input later both processes have the memory hash bf4e1093, and 78f6c413 after switching off |
| no call at all (the README check; the hash of that day, image and heap only, see README) | 4bcff851 after saving at pass 900 and 300 passes on, and after restoring that state into a booted world 5; `dop+0x420` is 0 in all 1624 gaps of world 2's opening |

---

## 11. Limits of the module

1. **One pass late.** Changes are made between passes. When the game itself ends the
   player's control inside a pass (a cutscene starts, a trigger sets a fixed camera, RedCat
   dies), that pass is still drawn with the look pitch or first person in force: in first
   person one frame without RedCat. The other way round, one frame of the original's follow
   camera is drawn before they apply again. A trigger that sets a mode-6 offset gives one
   frame from that offset as it is.
2. **Shots fly level** (section 8).
3. **The view direction sideways is the follow camera's yaw**, not the heading itself. Look
   input moves both together. With the original's keys RedCat turns first and the camera
   follows with the original's smoothing, in first person too.
4. **The camera's collision is the original's and no more.** It passes clip brushes (4.2), and
   when RedCat backs into a wall it ends at his position, inside his model: R at the west
   wall, walking away right after turn(180), the camera was 9 units from his eye point. The
   JavaScript port's wall lift and low-ceiling fallback are not in this port.
5. **Looking up in third person** puts the camera on the floor behind him (8 units above it at
   look pitch −1.2), as the port's swing does before its own fixes.
6. **−85°**: the camera's pitch is not lowered further; only the backwards rows reach that.
7. **A cutscene in first person starts with a cut** to the original's standing camera; where
   the original's own camera is still moving at that moment the two differ until the
   cutscene's first change of camera.
8. **Not seen on a screen by this work.** The Node runner draws nothing. What the views look
   like, and what is drawn at RedCat's place that is not his actor, was not checked here.
9. **CameraTriggers were not walked into.** Modes 6, 7 and 9 were set with the calls the game
   makes. In the lock-on check the target was the player object itself.
10. The wall judge covers world and brush models at rest as the JavaScript port imported
    them, not actors.
11. A save state made with a look pitch or in first person and loaded by a build without this
    module keeps the table and RedCat's flags as saved.

---

## 12. Checked against `native-camera.md`, inferred, unresolved

Found as described there: the controller, its update and mode functions, the preset values,
the chase speeds, the turn rates 2.4 and 6.1, `TurnSpeed` and `TurnRatio`, the cut at every
mode change. Different or more precise here:

- The table the camera reads is at `0x6B7118` in `.data`, grouped by quantity; `0x64D3A8` is
  only what the start-up code copies from (4.1).
- The steering's "forward" is not built from the camera's yaw but from the engine camera's
  matrix: the horizontal part of its up vector (2.2). It needs a camera that looks down.
- "Inside π/8 he snaps to the target" holds only when the current heading is not negative
  after the fix-ups (2.2).
- The hull's second test is a box sweep from RedCat, not a ray, and its contents mask has no
  clip brushes (4.2).

Inferred:

- That bit 0 of the world flags is Genesis3D's `GE_ACTOR_RENDER_NORMAL`, bit 1
  `…_MIRRORS`, bit 2 `…_ALWAYS`, bit 3 `…_COLLIDE`, and that contents 1, 2 and 0x40 are
  solid, window and clip: the tests fit the public Genesis3D source; the names are not in
  the binary.
- That `dop+0x420` is free: no access was found (3.1), and it kept the value written in every
  run; an access through a computed address would not show in the scan.
- That mode 11 is never used: only the callers found by `calls.tsv` were read.
- That `player+0x10C` is a view object of the base engine, which would be a first-person
  engine whose camera `CRcDop` replaces every frame: its `+0x1E0` is copied like a camera
  matrix at `0x4325AD`, and `SetPosition` forwards the eye point to it. It is not the engine
  camera of section 1 (R: another address).

Unresolved:

1. What else the game draws at RedCat's place that is not his actor (shadow, effects), and
   how it looks from the eye point.
2. Whether any level relies on RedCat being drawn in a mirror (his flags have no mirror bit).
3. The lock-on camera with a real target, and CameraTriggers reached by walking, with look
   input and in first person.
4. The projectile's velocity field and its update, should the shots ever follow the pitch.
5. Walking covers 3.73 units in a 17 ms pass (219.5 units/s) while `player+0x180` holds 156.8:
   a factor of 1.4 between the two was measured, not traced.
6. The line-of-sight search `0x45A600` and the route camera `0x45A130` were not read beyond
   what is said above.
7. The `0x458900` fix-ups for angles in other quadrants than the cases measured.
8. What stops RedCat 28 units east of the start of world 1: it is not in the BSP data
   (probably an actor's box).

---

## 13. The wall lift (`source/host/walllift.js`)

Added 2026-11-13, after the sections above. The JavaScript port's extra for the one place where
the original camera gives a bad picture: RedCat with his back against a wall.

**Seen in the original** (this port without the lift, wall behind the start of world 1, browser
pictures `tools/out/look/before-*.png`): the camera is pulled in until it is inside RedCat's head.
In the Node runner the original camera was inside his model in 272 of 390 passes there, at its
closest 13 units from his chest.

**What the lift is.** `CameraWallLift` in `walllift.js` is
`../RCSPOOK_NEW/source/third-person-camera.js` with another layout: same constants, same order of
decisions. When the original's place is inside RedCat or closer than 80 units to his chest, the
camera rises along an arc over him at that radius and the view turns down towards him; the lowest
clear, comfortable angle is found by a coarse scan and refined; the position eases there at 12/s
and back at 6/s, each step clipped against the world; under a low ceiling a side or front view;
with no outside view at all RedCat is not drawn for that frame.

**Where it runs (confirmed by running it).**

- A host hook on the camera controller's frame, `CRcDop::Update` 0x4594A0 (`tools/recomp/build.py`
  `GAME_HOOKS`, hook `camera`, `guarded` because the function is only called through the vtable).
  The hook runs the original body and then the lift with its result, so the lift is drawn in the
  same pass.
- The result goes to the Genesis3D camera only: `geCamera` world transform through 0x5C9420, built
  as 0x5569B0 builds it from pitch and yaw. The controller's and the engine camera object's own
  fields stay the original's. The steering 0x434F20 and the 3D sound 0x54E750 read the engine
  camera's matrix (`camera+0x1E0`), and the next frame of the controller continues from its own
  fields: nothing of the lift is fed back.
- World traces are the engine's `geWorld_Collision` 0x5B7D80 with a box of 4 units (the port's),
  and the contents and flags of the original camera's hull sweep (0x45AE30: contents 3, flags 3,
  no clip brushes, no actors). Their arguments live on the game's stack below the hook.
- Applies in camera modes 5, 6 and 9 while a world is played; not in first person, in free flight,
  with a fixed or route camera or during a cutscene. Hiding RedCat uses the world actor flags of
  section 9; he is shown again before the next pass.
- A look turn (`look.js`) rotates the lift's eased place with RedCat (`host.wallLift.lookTurn`).
- Its state is part of a save state (`host.snap`, part `walllift`).

**Checked** (`node tools/walllift-check.mjs`):

- The lift is the port's: on the five single-frame cases of the port's own test (room, rear wall,
  corner, low ceiling, enclosed) and on its 360-frame wall approach, run with the port's own
  collider and camera model, `CameraWallLift` here gives the same result as the port's class in
  every frame; that run rises over him, is never inside him, moves at most 3.44 units up or down
  per frame and has no dips.
- In the game (world 1, backing into the wall for five seconds, a look turn there, walking away;
  1373 passes): the drawn camera is never inside his model and never closer than 79.9 units to
  his chest; after the lift has taken over no pass moves it more than 3.68 units up or down, and
  with the lift engaged it sinks at most 0.14 units in a pass; a look turn of 0.6 rad moves it
  0.600 rad round him in the next pass; after walking away the frame is drawn from the original's
  place again; RedCat's position and heading are the same in every pass with and without the
  lift; a state saved while lifted and restored into a booted world 5 continues to the same
  memory hash with the lift in the same place.
- Standing free the lift changes nothing: the README save-state check still gives 4bcff851 twice (the hash of that day, of image and heap; since 2026-11-14 the runner's hash also covers the pages with the game's own heap, and the pair prints `8f54e89b`, `307574ef` with the fixes off).

**Limits.**

- The pass in which the lift takes over is one step of 17 units upwards in that run: RedCat backs
  in at full speed and the original pulls its camera in at once (its own jump there is 16 units).
  The port's test, which approaches the wall slowly with the port's camera model, has no such step.
- The low-ceiling view and the "not drawn" case were only run on the port's test cases, not at a
  place in a level.
- Nothing was tried in lock-on (mode 9) or with a CameraTrigger offset (mode 6) at a wall.
