# Enemy projectile attachments

Reference: the installed Dutch `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Addresses below are virtual addresses. The executable and original assets were
read without modification.

The former emitter placed every enemy projectile at the actor origin plus 25
vertical units. It now samples the original animated attachment at release,
including the actor's authored scale, model basis and current world rotation.

| Enemy | Native attachment | Bone-name getter |
| --- | --- | --- |
| Shooting spider | `BIP01 HEAD` | `0x40c4e0`, shared through vtable entry `0x64b1cc` |
| Gargoyle | `BIP01 HEAD` | `0x40c4e0`, vtable entry `0x64ab90` |
| Shooting bat | `BIP01 R HAND` | `0x410d60` |
| Shooting ghost | `GHOST COM BIP01 R HAND` | `0x412820` |
| Frog | `FROG COM BIP01 PONYTAIL1` | `0x40fe70` |
| Plant | `FEP BIP01 PONYTAIL22` | `0x40f3d0` |
| Skeleton | `SKELET BIP01 L FINGER1` | `0x414fd0` |
| Bone and mushroom Brutus | `BRUTUS BIP01 R FINGER01` | `0x419a80`, shared through entries `0x64b6f0` and `0x64ba2c` |
| Jester Max | `MAX BIP01 R FINGER01` | `0x41e6d0` |
| Witch | `WITCHBIP01 R FINGER0` | `0x4207f0` |
| Dungeon Max's machine | `BONE07`, then `BONE13` on `turtop` | index 1 at `0x41af92`, index 2 at `0x41af6c` |

These are actual bones in the imported original actors. The identically named
turret bones on the Witch's model are unrelated: Dungeon Max's emitter queries
its separate machine object, not its character actor.

## Attachment transformation

`RcMovingEnemy` reads its virtual bone selector at `0x42a019`, looks up that
bone, and obtains its current Genesis pose at `0x42a0ff`. The standing shooter
performs the same operation at `0x42b349` and `0x42b42f`. This is not a bind-pose
or body-centre query.

Both paths then read the actor's three scale components at offsets
`+0x150/+0x154/+0x158` and transform that vector by the bone matrix
(`0x42a104–0x42a13a`, `0x42b434–0x42b46a`). Those members are initialized to
the actor scale at `0x49b53a–0x49b555`, updated by `0x49cca0`, and passed to
Genesis actor scaling at `0x49cc34–0x49cc4f`. They are not an extra guessed
vertical offset. The machine does the same at `0x41ad96–0x41adc7`.

The imported bone matrices use unscaled model coordinates. Transforming local
`[1,1,1]` by that bone and then by the mesh world matrix reproduces this small
attachment offset for the uniform scales used by these actors. Mesh transforms
already contain the original Z-up to Y-up conversion and scale.

## Both turret barrels

The native machine firing loop begins with index 1 at `0x41c5b5`, queries its
attachment at `0x41c682–0x41c690`, computes a separate aim vector and randomized
deviation, and emits at `0x41c7a0`. It increments the index at `0x41c7a3` and
continues through index 2. One release therefore produces two magma shots.
The remake now follows that pattern, aiming independently from each animated
barrel. Moving Max's lowered body does not move either launch point.

## Boundaries and verification

Missing actor data and headless gameplay fixtures retain the previous finite
fallback position; normal rendered campaign actors have the recovered bones.
The current attack scheduler still releases on a simulation update, rather
than splitting a frame exactly at an animation event. This change does not
claim bit-identical Genesis interpolation, recover all attack interruptions,
or replace the existing enemy projectile impact physics.

Focused unit checks:

```sh
node --test tests/enemy-projectile-origins.test.mjs
```

They load every original ranged actor, check pose/heading/scale changes and
the native bone offset, check both turret barrels independently of Max's body,
verify per-barrel projectile aim and ownership, and cover invalid or absent
render attachments. Two further world checks cover stale/restored attack clocks,
same-frame animation advancement and saved turret poses. The source-browser
`tests/movement-muzzle-scenes.mjs` checks Brutus, spider and turret launch points
against their rendered projectiles. No package build is required or generated.
