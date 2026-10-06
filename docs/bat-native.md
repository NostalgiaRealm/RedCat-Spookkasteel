# Bat pursuit and contact damage

Read-only inspection of the installed `RcHcGame.dat` on 2026-09-21,
SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Addresses below apply to this executable. Original game files were not changed.

## Native classes and behavior

Green bats are `CRcTouchBat`, while yellow and red bats are `CRcShootBat`.
The green constructor at `0x415680` invokes the toucher base `0x42dc80`;
its state initializer `0x4158f0` constructs `0x404470`, which derives from
the toucher main state at `0x40ab80`. The yellow/red state initializer
`0x410d00` constructs `0x4043e0`, deriving from the shooting state `0x406dc0`.
The native actor/configuration strings are `batg.act`/`bat1` at
`0x68ed74`/`0x68ed6c`, and `baty.act`/`bat2`, `batr.act`/`bat3` near
`0x68e8e0`–`0x68e8fc`.

The toucher collision callback `0x42dd80`–`0x42df40` checks the contacted
actor, obtains the clock at `0x42def2`, and compares against its last-contact
timestamp at `this+0x1a8`. At `0x42df09`–`0x42df13`, another hit is allowed
after **1000 ms**, or on the first contact when the stored timestamp is -1.
It reads the toucher's damage property and calls the contacted actor's
health function `0x503fc0` at `0x42df15`–`0x42df25`, then stores the timestamp.
This is a contact hit, not a strike released at `AttackRange` during `shoot1`.

The toucher movement state starts its looping movement animation at
`0x40ac30`. The `CRcTouchBat` animation override at `0x415990` maps the idle
motion to `idle2`; shooting bats use the same flying idle mapping at
`0x410f30`. The imported bat actors contain `walkfw` and `idle2` of
0.933338 seconds, with a 1.600008-second `shoot1` for the ranged variants.

Original Normal settings distinguish the behaviors:

| Variant | Speed | Visual range | Attack range | Damage / firing |
| --- | ---: | ---: | ---: | --- |
| Green, bat1 | 140 | 250 | 100 | Contact damage 1 |
| Yellow, bat2 | 180 | 350 | 200 | Native enemy projectile; DrawMotionPart 0.45 |
| Red, bat3 | 200 | 350 | 200 | Native enemy projectile; DrawMotionPart 0.45 |

## Portable correction and verification

The generic melee branch previously stopped green bats within 100 units,
played `shoot1`, and damaged RedCat remotely halfway through the animation.
Green bats now select native neighboring-waypoint movement on detecting or
remembering RedCat; damage requires actual hull contact. See the
[2026-10-05 movement recovery](enemy-waypoint-movement.md). Their swept, BSP-clipped movement is checked
against RedCat's hull, using the imported bat collision bounds; blocked
line of sight prevents a contact hit across a wall. Contact uses a one-second
per-bat cooldown stored in the existing saved `attackTimer` field. Hurt
motions, enemy freeze, and cutscenes preserve their movement/cooldown gates.
Old saves containing the former generic green-bat attack are converted back
to pursuit without releasing that remote hit.

Yellow/red bats retain their ranged attack, original movement speed,
projectile release pose, and salvo behavior. Their `AttackRange` still
determines when to stop approaching and shoot.

The browser check exposed another independent flight blocker. Castle BAT03's
authored position `[567,350,-590]` started inside a wall when assigned the
old square collision hull `[-24,0,-24]`–`[24,34.324,24]`. That hull was
computed after the actor began its first animation, so the spread wings
inflated both horizontal dimensions. Bat collision now uses the stable
imported rest-body bounds, transformed by the original INI rotation and
scale, and preserves its actual vertical offset. BAT03's resulting hull is
`[-8.782,6.481,-10.312]`–`[10.467,44.336,9.130]`; it fits the original alcove.
No bat spawn was moved and no world collision was disabled.

The imported source bounds are `[-3.991931,-4.149898,2.946020]`–
`[4.757662,4.687134,20.152848]` for all three bat meshes. Their INIs specify
an initial X rotation of -90 degrees and scales 1.8, 2.2 and 2.7, respectively;
positive per-entity Scale overrides remain respected. All 17 initially
enabled bats across the castle, graveyard and tower fit these body hulls.
The four initially disabled cave bats also fit; one initially disabled
graveyard bat remains enclosed by its scripted grave geometry until opened.

This fixed body hull is a deliberate reconstruction approximation. The
original actor file's stored global bounds are zero and the exact native
runtime hull-generation policy has not been recovered. The correction uses
the supplied body geometry instead of claiming an exact native radius or
sampling a changing wing pose.

Active bats now also retain their airborne idle pose when they stop moving
at contact or between attacks. Read-only disassembly confirms the green
override compares motion type 1 at `0x4159ce`, then selects the `idle2`
string at `0x68e9fc` from `0x415a02`; the ranged override selects the same
string at `0x411030`. Other motion types delegate to the generic actor
implementation. The portable state animator applies that mapping only to
enabled bat enemies. Disabled/dormant bat state animation and explicit
scripted `idle1` motions retain their existing hanging behavior; no asset
motion is renamed. Tests cover all three original bat actors, moving wing
vertices during airborne idle, freeze behavior and enabled-state changes.

`tests/bat-ai.test.mjs` verifies pursuit through the old stopping radius,
vertical movement, hull contact, cooldown, obstruction, hurt/freeze,
save restoration, compatibility with saved old attacks, yellow/red projectile
timing, and the four original castle bat entities. `tests/bat-scenes.mjs`
exercises imported actors and BSP geometry in the running renderer. An
additional attachment test checks the real collision hulls at every active
bat spawn, reproduces BAT03's former start-solid failure, and confirms that
flapping wings leave the body hull unchanged.

The three touching-enemy waypoint selectors, shared reservations, random
patrol rules and state timing were recovered on 2026-10-05. The former
continuous orbit is replaced; see [movement evidence and limits](enemy-waypoint-movement.md).
Portable collision, overlap recovery and saved per-enemy RNG remain deliberate
adaptations, rather than a complete instruction-for-instruction engine port.
