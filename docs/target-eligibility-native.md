# Original target eligibility and castle bridge button

The targeting correction uses the original `RcHcGame.dat` and the authored
level entities. The executable SHA-256 is
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Addresses below refer to this executable.

## Which objects enter the target list

| Object | Original opt-in | Remake selection |
| --- | --- | --- |
| Enemy | Enemy actor registration | Active, visible, living enemy; concealed ambush/boss states remain excluded |
| Crate | `AdamAnyActor.Targetable=1` | Explicit flag and imported `ActorCanBeShot` |
| Button | `ButtonModel.ShootToSwitch=1` | Active shootable button with remaining uses |
| Lamp, torch, scenery, door/controller | No registration from damage or event flags alone | Excluded |

`RcAnyActor` reads the entity's `Targetable` DWORD at offset `+0x50`
(`0x420b44`), stores its runtime flag at `+0x30c`, and checks it at
`0x420c7b` before calling target registration `0x42d130` at `0x420c8d`.
The original BSP `%typedef%` field layout confirms the entity offset.

`RcButtonModel` similarly reads `ShootToSwitch` at entity offset `+0x24`
(`0x421a2d`). Its registration at `0x421dc0` calls the separate model-target
registration routine `0x42d610`. The finite-use button removal path is at
`0x421e40–0x421e6c`; the bridge's one-shot button stops being a target once used.

Damage and targeting are separate properties. For example, original
`htorch.ini`, `torch.ini` and `batlamp.ini` have `ActorCanBeShot=1` and
`ActorDestroyable=1`. Their level placements do not opt into targeting. The
previous `destroyable OR Targetable` condition incorrectly selected them.
The correction preserves physical shot collisions and damage behavior.

Across the five original levels, exactly **12 actor placements** opt in:

| Level | Targetable crates |
| --- | --- |
| Het Bos | 2 `wkcrate` |
| Het Kasteel | 0 |
| Het Kerkhof | 3 `brcrate`, 1 `wkcrate` |
| De Grotten | 2 `brcrate`, 4 `wkcrate` |
| Final level | 0 |

Selection uses the authored flags, not a hardcoded list of crate filenames.

## Button range and priority

The original target selector at `0x42c549` first searches registered actors
through `0x42cb60`. If an actor qualifies, it returns immediately. Only when
none qualifies does the button fallback call `0x42cf40` at `0x42c5ad`.
Consequently, qualifying enemies and crates take priority over buttons.

The button path at `0x42cf58–0x42cf85` multiplies the supplied detection range
by the float **9.0** at `0x64c268`, then squares the expanded value for distance
comparison. With `Player.DetectionRange=480`, the original ranges are **480
units for actors** and **4320 units for buttons**. This is `(range * 9)^2`,
not a multiplier applied after squaring. The same front hemisphere, nearest
eligible candidate and line-of-sight checks apply. Existing 500 ms refresh
and stable firing-lock behavior are retained.

The castle's `ButtonModel1` / `knopbridge` is BSP model **47**. It has
`ShootToSwitch=1`, `TouchToSwitch=1`, `MaxSwitchTimes=1`, and no `OnHitCommand`.
Its after-switch script changes the indicator lights and calls
`ophaalbrug01_mc.close`, lowering the bridge. Applying the actor's 480-unit
limit to this button prevented targeting from farther along the approach.

The remake aims at the actual transformed button hull, approximately
`[-350,-6.8994,1073]`, rather than its displaced editor origin
`[-351,-8,1086]`. A visibility trace can end on the target's own hull; nearer
obstructions still prevent selection. The former 98%-of-distance tolerance is
removed: at button range it could incorrectly accept a wall dozens of units
before the target. The original animated ring, camera lock
and animated-hand pellet release are used for the selected button.

## Focused checks

```sh
node --test tests/targetable-props.test.mjs
node tests/target-eligibility-scenes.mjs
```

The unit checks cover authored eligibility across the five level data sets,
light-fixture exclusion, actor priority, button range, occlusion, transformed
bounds and firing-lock stability. A production-world regression checks that a
wall 15 units in front of a distant button still blocks selection while a hit
on the button itself is accepted. The browser fixture covers the actual castle
button and graveyard props. No unrelated camera, combat, audio or campaign
suite is required for this correction. No packages have been rebuilt.

The six targeting unit cases passed (the new world-visibility case was run
separately after tightening the ray check). The browser check passed with no
browser, HTTP or script errors. It selected the castle button from **658.6
units** away, fired from the animated hand, and lowered the original bridge
motion from time 3 to 0. An authored graveyard `brcrate` was selected and
destroyed; all **99** graveyard light fixtures were excluded. A visible lamp
received no ring or lock, and an enemy still received both.

Evidence is in `artifacts/target-eligibility-scenes.json`, with screenshots:

- `artifacts/castle-drawbridge-targeting.png`
- `artifacts/castle-drawbridge-lowered.png`
- `artifacts/graveyard-authored-crate-targeting.png`
- `artifacts/graveyard-lamp-not-targeted.png`
- `artifacts/graveyard-enemy-targeting.png`
