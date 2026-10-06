# RedCat's original projectile path

Reference executable: the user's installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Addresses below are virtual addresses in that build. Original files were only read.

The former reconstruction fired an invisible 650-unit ray every 0.38 seconds,
applying damage and playing the impact sound immediately. Player shots now have
their own moving, swept-collision projectile, with impact callbacks and sounds
executed when it reaches the target or brush.

## Timing and movement

`0x434e30` selects factory type 9 (RcShot), 8 (RcPowerShot) when skill mask 2 is
enabled, or 11 (RcSuperShot) when mask 4 is enabled. The factory at `0x44d570`
subtracts one before indexing its jump table; these are one-based type IDs.

The ordinary firing branch at `0x434c25` selects animation speed 1.9. At
`0x434d03` it reads the animation's normalized progress (the accessor at
`0x4a1060` divides elapsed motion time by duration) and compares it with 0.46
from `0x64c598` before emitting the pellet. The imported RedCat `shoot1` motion
lasts 1.9333430528640747 seconds, so a normal firing cycle is about 1.018 seconds
and the pellet is released about 0.468 seconds after that cycle begins.
The simulation and rendered player animation now share this timing.

`ProjectileEasy.ini`, `ProjectileNormal.ini`, and `ProjectileHard.ini` contain
the active per-projectile properties. These are already imported into
`src/gameplay-settings.js`; the unrelated generic `WeaponsNormal.ini` is not
used. Normal difficulty has:

| Kind | Initial speed | Acceleration per second | Maximum speed | Damage | Life | Recharge |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| RcShot | 300 | 160 | 1000 | 1 | 5 s | 1 s |
| RcPowerShot | 300 | 160 | 1000 | 2 | 5 s | 1 s |
| RcSuperShot | 240 | 60 | 1000 | 4 | 5 s | 1 s |

The RcShot property reader at `0x44eca0` fills its initial velocity from
`InitialSpeed` at `0x44f34b`, acceleration at `0x44f392`, maximum speed at
`0x44f3df`, and recharge at `0x44f3f7`. The generic emitter converts recharge
seconds to milliseconds at `0x44d3b5`. The common flight update at `0x44cacf`
adds acceleration times delta time and caps speed before translating.
The portable update integrates that acceleration continuously to keep travel
consistent across frame rates and sweeps every segment against world brushes
and actor hulls. Projectile lifetime, pending release, firing cooldown and
animation phase survive saving and loading. Cutscenes pause firing; freezing
enemies still allows RedCat's projectiles to operate shootable puzzles.

## Original animated artwork

| Kind | Native setup | Original paired color/alpha bitmaps |
| --- | --- | --- |
| RcShot | `0x44e910` | `Spark_01.bmp`–`Spark_04.bmp`, `Spark_a_01.bmp`–`Spark_a_04.bmp` |
| RcPowerShot | `0x44a330` | `psht0.bmp`–`psht5.bmp`, `psht0_a.bmp`–`psht5_a.bmp` |
| RcSuperShot | `0x450370` | `sshlo0.bmp`–`sshlo5.bmp`, `sshlo0_A.bmp`–`sshlo5_A.bmp` |

All three use a 50 ms frame timer, from constants at `0x64d0f0`,
`0x64cfa4`, and `0x64d244`. Its actual rate depends on update cadence: strict
expiry advances one frame, then the next update rearms the timer. The renderer
reads saved timer state rather than computing `floor(age * 20)`; see
[native-projectile-animation.md](native-projectile-animation.md).
`tools/import_projectiles.py` combines each original pair into an RGBA PNG and
records source hashes.

The emitter sets sprite scale 0.8 at `0x44d30f`. The ordinary and power textures
are 32×32 and the super textures 64×64. The manifest provides their scaled
widths and heights. Base billboard vertex RGBA is white/opaque at
`0x437148`–`0x43715a`. The orange `(250,175,20,225)` values in the projectile
constructors configure a dynamic light through `0x44c1b0`; applying them as a
second sprite tint was incorrect.

## Remaining fidelity boundaries

The native emitter obtains the position of `RCHC_BIP01 R HAND` at `0x434e80`.
The renderer now supplies that animated bone's world position at release, and
the simulation retains a fallback muzzle offset for headless tests or missing
actor data. The original super-shot charge/release phase is now reconstructed
as described in [player-abilities-native.md](player-abilities-native.md), including
the held pose, 1.5-second charge, release timing and scaled damage.
The shared native collision hull, approximately ±0.032 units, is implemented
independently of sprite size; see [projectile contact](player-reactions-and-projectile-contact-native.md).
The [player impact factories](projectile-impacts-native.md) also use their
recovered artwork, timing and light profiles. Continuous flight integration and
portable BSP/actor traces still do not claim bit-identical Genesis3D collision
or frame stepping.

## Verification

`tests/player-projectiles.test.mjs` verifies delayed release, held-fire cadence,
authored acceleration and speed caps, projectile lifetime, upgraded shot kinds,
save/load mid-animation and mid-flight, cutscene pause and frozen-enemy puzzles.
Existing gameplay and Davi-Script tests now advance real pellet flight before
asserting damage or brush callbacks, including inactive graveyard planks and the
forest shootable switch. The bitmap importer test checks original RGB retention,
the separate alpha channel, case-insensitive filenames and all three sequences.

Brutus's `RcMushRoom` sequence is also imported as `mushRoom`: `msh0.bmp` through
`msh3.bmp` paired with `msh0a.bmp` through `msh3a.bmp`. Its native setup at
`0x448b70`–`0x448e67` uses a 50 ms interval from `0x64ceec`; the authored Size
0.3 gives 9.6-unit dimensions for these 32×32 frames. Its separate mushroom
trail effect remains distinct from the animated projectile sprite.
