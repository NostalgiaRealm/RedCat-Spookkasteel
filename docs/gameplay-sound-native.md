# Gameplay sound and projectile evidence

Read-only inspection of the installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`,
on 2026-09-21. Addresses below are virtual addresses for this executable only.
No original game files were modified.

## Player sounds

The user identified `Sounds/rcshoot1.WAV` for an ordinary shot,
`Sounds/rcshoot4.WAV` for its impact, and `Sounds/rcjump1.WAV` for jumping.
The executable corroborates these assets: ordinary-shot selection is at
`0x436b84`, impact at `0x44f479`, and jump at `0x4dc847`.

The 2026-10-03 audit also recovered the upgraded-shot choices:

| Projectile | Firing / charging | Impact |
| --- | --- | --- |
| Ordinary | `rcshoot1.WAV` at pellet release | `rcshoot4.WAV` |
| Power shot | `rcshoot2.WAV` at pellet release | `rcshoot5.wav` |
| BIG BENG | `rcshoot3.WAV` while charging; stop on release | `rcshoot6.wav` |

The selector at `0x436b40` uses resource `0x6b5308` for type 8 (power),
initialized from `rcshoot2.WAV` at `0x6902a4` by `0x430865`. Power and super
impact factories pass resources `0x6b69d8` (`0x44af48`) and `0x6b6fc8`
(`0x450f78`), initialized from `rcshoot5.wav` at `0x6914d0` and `rcshoot6.wav`
at `0x691850`. Native normal/power release calls the selector at `0x434d4a`
after normalized motion time .46. Super release instead calls the stop entry
`0x436a30` at `0x434d43`, without an additional ordinary-shot sound.

The portable router now selects these cues from each projectile event's kind,
including projectiles already in flight when the player's abilities change.
Impacts play only on actual contact, not lifetime expiry. Independent one-shot
instances preserve earlier firing and impact tails. The existing charge-loop
and pause/resume behavior are unchanged. Audit evidence is retained in
`current_work/shooting-audio-audit-2026-10-03/`; focused regression coverage is
`tests/player-projectile-audio.test.mjs`.

Damage selection at `0x433d97`–`0x433df3` uses damage amount, rather than
remaining health: `RcGen1.wav` below 10, `RcGen2.wav` from 10 to below 40,
and `RcGen3.wav` from 40 upwards. The constants are 0, 10 and 40 at
`0x64c414`, `0x64c418` and `0x64c41c`. Death uses `RcGen7.wav` at
`0x433caf`; a second damage path at `0x4dcf8a`–`0x4dcfca` has the same
three hurt choices. These four samples are installed in **VoiceNL**, and
the portable copies are in `assets/voices`, not `assets/audio`.

## Enemy sound categories

The common actor sound virtual method is at vtable offset `+0xbc`. Its
five event values select the following table. State-machine calls establish
0 as the idle/wait sound, 1 as noticing/remembering the player, 2 as attack,
3 as hurt, and 4 as death. For example, `0x40313a` emits event 1 after
the perception check `0x422f30`; `0x42a455` emits event 2 after firing;
`0x42330c` emits event 3 in the hit path; and `0x424094` emits event 4
in the death path. Idle alternatives are chosen randomly in the native game.

| Enemy | Idle | Alert | Attack | Hurt | Death | Sound function |
| --- | --- | --- | --- | --- | --- | --- |
| Spider type 1 | Spiderl1 / Spiderl2 | Spiderl3 | Spiderl4 | Spiderl5 | Spiderl6 | 0x418450 vicinity |
| Spider type 2 | Spiderll1 / Spiderll2 | Spiderll3 | Spiderll4 | Spiderll5 | Spiderll6 | same variant function |
| Red spider | Spiderlll1 / Spiderlll2 | Spiderlll3 | Spiderlll4 | Spiderlll5 | Spiderlll6 | 0x414220 |
| Guardian (patrolling knight) | Wachter1 / Wachter2 | Wachter3 | Wachter4 | Wachter5 | Wachter6 | 0x40d9b0 |
| Knight (stationary knight) | Knight1 / Knight2 | Knight3 | Knight4 | Knight5 | Knight6 | 0x40e590 |
| Zombie | Zombie1 / Zombie2 | Zombie3 | Zombie4 | Zombie5 | Zombie6 | 0x4190b0 |
| Gargoyle | Gargoyl1 / Gargoyl2 | Gargoyl3 | Gargoyl4 | Gargoyl5 | Gargoyl6 | 0x40c790 |
| Frog | Kikker1 / Kikker2 | Kikker3 | Kikker4 | Kikker5 | Kikker6 | 0x40fee0 |
| Plant | Plant1 / Plant2 | **Plant4** | **Plant3** | Plant5 | Plant6 | 0x40f440 |
| Skeleton | Bones1 / Bones2 | Bones3 | Bones4 | Bones5 | Bones6 | 0x415020 |
| Ghost type 1 | Ghostl1 / Ghostl2 | Ghostl3 | Ghostl4 | Ghostl5 | Ghostl6 | 0x416900 |
| Ghost type 2 | Ghostll1 / Ghostll2 | Ghostll3 | Ghostll4 | Ghostll5 | Ghostll6 | 0x412a50 |
| Ghost type 3 | Ghostlll1 / Ghostlll2 | Ghostlll3 | Ghostlll4 | Ghostlll5 | Ghostlll6 | same variant function |
| Bat type 1 | BaFXI1 | Batl3 | Batl4 | Batl5 | Batl6 | 0x415ad0 |
| Bat type 2 | BaIIFX1 | Batll3 | Batll4 | Batll5 | Batll6 | 0x4110e0 |
| Bat type 3 | BaIIIFX1 | Batlll3 | Batlll4 | Batlll5 | Batlll6 | same variant function |

All names in this table have `.wav` extensions and are in the original
Sounds directory. Literal `I` in bat FX filenames and lowercase `l` in the
numbered variants are different characters, not interchangeable Roman
numerals. The portable importer normalizes case only.

The ACT motion importer finds no embedded motion-event blocks in the shipped
actors; these gameplay sound decisions come from native enemy/player logic,
not the level's Davi-Script instruction stream. The native event categories
do not establish exact idle-repeat timing or the full original AI behavior.

## Enemy projectile classes

Projectile construction at `0x44d570` uses a **one-based** enum. It subtracts
one before the jump table, whose strings start at `0x691504`:
1 RcBone, 2 RcEnemyShot, 3 RcGoo, 4 RcJesterBall, 5 RcMagma,
6 RcMushRoom, 7 RcPoison, 8 RcPowerShot, 9 RcShot, 10 RcSkull,
11 RcSuperShot. Treating the string index itself as the enum is incorrect.

| Enemy | Native fire method | Pushed enum | Projectile configuration |
| --- | --- | --- | --- |
| Red spider | 0x4127c0 | 2 at 0x4127e8 | RcEnemyShot |
| Gargoyle | 0x4127c0 | 2 | RcEnemyShot |
| Frog | 0x40fe10 | 7 | RcPoison |
| Plant | 0x40f3e0 | 3 | RcGoo |
| Skeleton | 0x414f70 | 1 | RcBone |

`Settings/ProjectileNormal.ini` defines RcEnemyShot with initial speed 400,
gravity 0, damage 2, life 5 seconds, and size 0.8. RedSpider's normal
`Settings/spider3.ini` specifies 3 shots per salvo, one second between shots,
one second after a salvo, deviation 0.05 and attack range 175. Spider types
1 and 2 use contact damage in their own INIs and do not contain salvo fields.

RcEnemyShot's constructor `0x4437f0` loads light RGBA `(250,175,20,225)` from
`0x690dc8`. Its setup at `0x4438a0` references the original
`Spark_01.bmp` through `Spark_04.bmp` and corresponding `Spark_a_*.bmp`
alpha images. At `0x443b7d`, it loads 0.05 seconds from `0x64ca54`,
converts to 50 milliseconds and stores the animation interval at object
offset `+0x20c` (`0x443bfe`). The recovered clock uses a strict 50 ms deadline,
advances at most one frame per update, then rearms on the next update; it is not
a continuous 20-fps clock. The later [animation audit](native-projectile-animation.md)
implements those rules. Sprite dimensions now use the original bitmap size
and INI scale, with an intentional bounded enlargement for distant-shot
[visibility](projectile-visibility.md). The
[effect-factory audit](enemy-combat-effects-native.md) found null particle/trail
factories for RcEnemyShot, so it has no invented smoke or green poison trail.

Door movement, player footfalls, Brutus combat voices and ambient/action/special
selection are documented in [audio-completion-native.md](audio-completion-native.md).
