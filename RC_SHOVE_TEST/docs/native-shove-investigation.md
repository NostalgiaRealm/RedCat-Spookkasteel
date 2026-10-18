# Shove / power-move investigation, 2026-10-05

## Conclusion

No playable shove action was recovered in this audit of the installed original. The
`ReqPotionPowerMove` setting and skill index 4 are real, but they establish a
stored capability flag (mask 16 / `0x10`), not an input, animation, or force on
crates. The earlier interpretation that this bit proved a usable shove was
incorrect. No original shove binding or shove-named animation was identified;
this is not proof that no such action exists anywhere.

The standalone lab now offers two modes. The default is a clearly labelled
experimental power-move: hold Q and walk into `crates03` to push the original
crate group within the room. The other mode reproduces the recovered
button-driven mechanism. The experiment is a new user-requested interaction,
not native evidence; the original findings below remain applicable.

The actual castle green-crate puzzle is confirmed button-driven. Touching the
wall button `knopstoragecrates01` runs `crates01.open`, `crates02.open`, and
`crates03.open`. The crates are three animated BSP `DoorModel` objects, not
free-body actors that receive a shove impulse. No skill check occurs in their
authored button commands.

## Original sources and read-only scope

Original installation:
`/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel`.

- `RcHcGame.dat` SHA-256:
  `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
- `Levels/Lvl01a.bsp` SHA-256:
  `844ef094bcf6897ee7c6b9b8abf5d06c5190f5a17a76405b17fd324113c60601`.
  This matches `data/levels/lvl01a/level.json`'s source hash.
- `Actors/RedCat.act` SHA-256:
  `931d3a279c8b49094a0710cb82224e5df0caa287fce69322dce79872924e5e48`.
  This matches `assets/actors/redcat.json`'s source hash.

Original files were read only. The research working directory is
[`temp_work/shove-investigation-2026-10-05`](../../temp_work/shove-investigation-2026-10-05/).
This document is a standalone copy of its `findings.md`, with local evidence
links and the distinction between the original puzzle and the experimental
power-move clarified. Compact JSON and
settings evidence are bundled beside this document; the disassembly excerpts
remain in the research working directory. The full executable disassembly
is intentionally not bundled. Port source, tests, imported assets, build
output and installers were not changed by this investigation.

## What mask 16 actually proves

`skill-grant.asm` preserves the native routine starting at `0x436ea0`.
Its jump table maps script indices 0/1/2/3/4 to masks 1/2/4/8/16.
At `0x436f14`, the index-4 branch loads `0x10`, then calls the grant helper
`0x439ee0` at `0x436f1c`.

`skill-getters.asm` shows that `0x439ee0` ORs the supplied mask into the
object field at `+0x68`; `0x439f10` tests a supplied mask against this field;
`0x439f30` returns the full stored mask. There is no action dispatch inside
the grant operation.

The full executable disassembly has seven direct calls to `0x439f10`:

| Caller | Mask | Meaning recovered |
| --- | ---: | --- |
| `0x434e54` | 4 | Super-shot selection |
| `0x434e68` | 2 | Power-shot selection |
| `0x435ae4` | 8 | Super-jump eligibility |
| `0x4c6e00` | 4 | Debug skill cycle |
| `0x4c6e5d` | 8 | Debug skill cycle |
| `0x4c6ebd` | 2 | Debug skill cycle |
| `0x4c6f1d` | 1 | Debug skill cycle |

There is no direct helper call testing mask 16. The debug cycle explicitly
clears mask 16 at `0x4c6e27`/`0x4c6e2b` together with the other skills, but
does not expose a shove action. Two direct full-mask getter callers are at
`0x4324a4` and `0x4353dc`; the latter checks the full mask for nonzero in an
aim/shoot path, not a mask-16 move. These are the same findings as the
existing correction in the port document
`RCSPOOK_NEW/docs/player-reactions-and-projectile-contact-native.md:62`.
This audit establishes no recovered consumer; it does not claim a formal
proof that every indirect execution path in the binary is unreachable.

The original `Settings/Game.ini:320-324` lists potion requirements for shot,
power shot, super shot, super jump, and `ReqPotionPowerMove=0`. A requirement
of zero does not add an action. The original cave authoring inconsistency
that grants index 4 is documented separately in
`RCSPOOK_NEW/docs/player-abilities-native.md:18-26`.

## Input and actor animations

The original `Settings/Game.ini:138-169` declares 30 input actions. They
include Fire, movement, Jump, Walk, weapon selection, view controls and
menus; no shove or power-move action is listed. The corresponding default
bindings in `Settings/PlayerDef.ini:25-57` likewise contain no shove binding.
Fire is Control, Jump is Space/RightMouse, and Walk is Alt.

The verified imported RedCat actor has these 16 named clips:
`walkbwl`, `walkbwr`, `fall2`, `fall1`, `strafer`, `strafel`, `jump2`,
`jump1`, `re-spawn`, `shoot1`, `charge`, `death`, `hit`, `walkbw`, `walkfw`,
and `idle`. There is no clip named shove/push/power-move. The native player
motion-name table at `0x690130..0x690168` contains idle, forward/backward
walk, jump1, re-spawn, jump2, fall1, left/right strafe, shoot1, hit and death;
some entries repeat. The complete table, actor hash, clip durations and
direct helper callers are in [native-evidence.json](native-evidence.json).

## Why the tutorial wording can be misleading

The configured original language is NL (`Settings/Game.ini:137`). Its
`Settings/LanguageNL.ini:353`, key `FLGen34`, says the green crates can be
moved "door op een knop te drukken" (by pressing a button).

`Settings/LanguageEN.ini:312` contains a different Dutch version of the
same line, "door er tegenaan te lopen" (by walking into them). This appears
to be an older content variant, but its chronological origin is not proven.
The active Dutch text and actual shipped castle entity commands agree on
the button. The English-file wording alone is not evidence of a current
push implementation. Original lines are retained in
[original-settings-excerpts.txt](original-settings-excerpts.txt).

## Exact castle crate mechanism

[native-crate-entities.json](native-crate-entities.json) was read directly from the original
BSP entity chunk using the existing read-only GBSP reader, not copied from
port gameplay objects. It records the following entities:

| DaviName | Native class/entity | BSP model | Activation |
| --- | --- | ---: | --- |
| `crates01` | DoorModel55 | 51 | Script `.open` |
| `crates02` | DoorModel54 | 52 | Script `.open` |
| `crates03` | DoorModel56 | 53 | Script `.open` |
| `knopstoragecrates01` | ButtonModel3 | 54 | `TouchToSwitch=1` |

All three crate doors have `TouchToOpen=0`, `TriggerRadius=0`,
`IsInitiallyOpen=0`, and `TimeToStayOpen=-1`. They are not directly opened
by contact or proximity. The button has `ShootToSwitch=0`,
`TriggerRadius=0`, and this `AfterSwitchOnCommand`:

```text
camera10.enable;
knopstrg_rood_02.disable;
knopstrg_groen_02.enable;
crates01.open;
crates02.open;
crates03.open;
```

The original motion data is deterministic translation along +Z with no
rotation. Native button and door motion clocks advance at 1x (verified below),
so these authored spans are also their unobstructed movement durations:

| Model | Original pivot | Translation at end | Authored duration |
| --- | --- | --- | ---: |
| crates01 | 912, 88, -1030.993652 | 0, 0, 91 | 1.7 s |
| crates02 | 848, 88, -1052.998779 | 0, 0, 116 | 2.5 s |
| crates03 | 976, 136, -1029.999268 | 0, 0, 93 | 1.0 s |
| button | 1188, 207.999924, -908.000061 | 0, 0, 6.000061 | 1.0 s |

Other authored moving crates also use explicit mechanisms: the cave
`water_button01` enables `water_move_crate01` and `water_rising01`; spring
crate ModelControllers enable authored jump triggers on motion events.
Those do not establish a general shove force either. Separately, `brcrate`
and `wkcrate` actors are destructible props with blocking/shooting flags
and destruction debris; their mere existence does not prove pushability.

## Standalone lab asset snapshot

[native-crate-puzzle.json](../assets/native-crate-puzzle.json) contains only the original castle crate/button
models (51, 52, 53, 54), their authored motion tracks, exact original entity
records, bounds, source hash and texture metadata. It contains 1,065
non-indexed triangle vertices across the four models.

Each mesh's positions are relative to that model's original pivot. Place a
model at `origin + sampled translation` and use the sampled quaternion as
its rotation. Units remain original Genesis3D units; Y is up. The five
textures in `assets/crate-textures/` are `030.png` (crateD), `038.png` (red),
`044.png` (crateL), `064.png` (redP), and `065.png` (MX_Crate). Use repeat
wrapping and `flipY=false`. UVs, vertex colors and normals are preserved.

No world lightmap, surrounding architecture, original camera sequence, or
red/green indicator actors are included in this small snapshot. The neutral room, lighting, camera, model placement, and minimal player
controller are lab presentation choices. The recovered button command, motion
paths, and timings are preserved; the lab does not reproduce complete
Genesis3D player or moving-model physics. A separate, clearly labelled
experimental power-move is available, but is not part of the recovered
mechanism documented here.


## Follow-up: verified native timing

Both native clocks use the same formula, `nextTime = currentTime + dtMs *
0.001`. The float at VA `0x64a95c` is `0.0010000000474974513`.

- ButtonModel: `0x4cb567` gets the current time using `0x4d0710`;
  `0x4cb56e..0x4cb57a` converts elapsed milliseconds and adds it. At
  `0x4cb57e` the result is compared with the motion endpoint at `+0x13c`.
  An endpoint move must succeed before state 4 is selected at `0x4cb5ac`.
- The following button state invokes `0x4cb130(1, 0)` at `0x4cb5ef..0x4cb5f5`.
  This selects the global event name at `0x6b9728` (`0x4cb15e`), which is
  initialized from the literal `AfterSwitchOnCommand` at `0x69d7b0`
  (`0x4ff90d`). Thus the crate commands run after the button endpoint, not
  at first touch or the start of button movement.
- DoorModel: `0x4ccc8c..0x4ccca2` performs the identical time increment and
  `0x4ccca6` compares with the endpoint. No DoorType-dependent speed factor
  is present in this update. A successful endpoint move precedes AfterOpen.
- `0x4d0710` reads motion time directly from `+0x100`. `0x4d0738..0x4d0741`
  passes supplied motion time straight to the path sampler; the setter
  stores the supplied time directly at `0x4d095e`, `0x4d096d` or `0x4d097c`.
- ButtonType 1 selects `SwitchPushButton.wav`; DoorType 4 selects `empty.wav`.
  The type-based selectors are audio methods (`0x4cb180`, `0x4cc140`), not
  motion-speed selectors.

The lab can therefore use 1 second of button movement followed by all three
crate paths together at 1.7, 2.5, and 1 second. Native transitions are staged
states and the endpoint comparison uses a strict crossing, so completion
and callback dispatch include frame-dependent latency; claiming exact
wall-clock onset to the millisecond would be too strong. Native moving-model
collision can also stop an obstructed movement. The lab's presentation
should describe the authored paths and durations rather than promise an
identical original frame schedule.

The tracks use two translation keys and interpolation index 1 (Hermite).
With the recovered endpoint tangent rule and only these two keys, the curve
reduces to linear interpolation. No easing curve should be invented.

Focused retained disassembly: `button-motion-tick.asm`,
`button-event-dispatch.asm`, `button-afterswitchon-name.asm`,
`door-motion-tick.asm`, `motion-time-get-sample.asm`, `motion-time-write.asm`,
`button-type-sound.asm`, and `door-type-sound.asm`.

## Follow-up: stack geometry and collision

The crate meshes are compound stacks, not three simple box-shaped crates.
Models 51 and 52 extend from Y=-24 to Y=200 with different horizontal
footprints at different heights. Model 53 is an elevated group from Y=104 to
Y=168. All their surface normals are axis aligned, but their profiles include
steps, seams, and recesses. A single AABB per model fills empty space.

A better small-lab collider is the union of the original solid BSP leaf boxes.
[native-crate-collision-boxes.json](native-crate-collision-boxes.json) exports these in both original rest-world
coordinates and local coordinates relative to each model pivot:

| Model | Solid boxes |
| --- | ---: |
| 51 / crates01 | 12 |
| 52 / crates02 | 15 |
| 53 / crates03 | 10 |
| 54 / button | 1 |

All 38 exported leaf bounds and all 228 side/plane references were also
verified directly against the original BSP bytes. For every exported leaf,
all six side planes were checked to be axis aligned and their half-space
intersection exactly matched the exported min/max box. This uses original collision geometry instead of approximating
it from render triangles. Keep the boxes separate or merge only touching
boxes whose other two axis extents are identical. Translate the union by
the model's sampled translation. These paths do not rotate.
