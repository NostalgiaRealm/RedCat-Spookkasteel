# Gameplay sounds and enemy movement

The previous frontend played BulletHitWall at a placeholder 0.25 gain for every
player shot, and applied the same extra reduction to jumping. After restoring
the native volume conversion, that placeholder reduced these effects by 20 dB.
There were no handlers for health loss or regular-enemy sounds. Enemy models
advanced their initial idle clip while their positions moved toward the player.

## Action sounds

`src/gameplay-audio.js` now routes actual gameplay events through the existing
portable mixer at their authored gain:

- Shot: `rcshoot1.wav`. Actual enemy/brush impact: `rcshoot4.wav`.
- Physical jump: `rcjump1.wav`, once on takeoff rather than every held-input frame.
- Hurt: `VoiceNL/RcGen1.wav`, `RcGen2.wav`, or `RcGen3.wav` according to damage.
  Death: `RcGen7.wav`, including the last-life game-over menu.
- Spider types I/II/III, zombies, stationary knights, guardian knights, frogs,
  skeletons, plants, gargoyles, ghosts and bats use their original sound tables.

Native enemy categories distinguish idle, noticing the player, attack, hurt and
death. Enemy sounds follow the moving actor and use the existing distance curve.
Idle chatter cannot interrupt a reaction from the same enemy. Attack audio is
emitted at the actual strike/projectile release. Original filenames and native
evidence are recorded in `gameplay-sound-native.md`; stationary knights use the
Knight set, while moving guardian knights use Wachter.

## Movement, animation and ranged spiders

`Gameplay` maintains each enemy's movement/combat state, attack windup, cooldown,
salvo counter and pending strike. The renderer selects original `walkfw`, `shoot1`,
`hit`, and `death` clips where present, and applies original speed factors. A new
attack restarts its one-shot clip; repeated frames do not. Bodies with a death
clip remain visible through that motion. Stationary knights, whose actor has no
death clip, break into the nine original armor/weapon actor parts; these collide,
settle, pause with the game, and disappear after a bounded lifetime.
Ground movement uses swept actor bounds,
gravity, floor contact and step handling rather than keeping the editor's fixed
height while sliding horizontally. Bats and ghosts remain flying enemies.

Spider I and II have contact-damage settings. Spider III has ranged salvo fields
and fires `RcEnemyShot`: normal-difficulty speed 400, damage 2, zero gravity and
five-second lifetime. The projectile has swept collision against the world and
player, so walls stop it and moving out of its path avoids it. It uses the original
four Spark/alpha image pairs, imported by `tools/import_projectiles.py`. Its
50 ms bitmap timer uses the recovered strict expiry and separate rearm update,
so the displayed rate depends on update cadence; see
[native projectile animation](native-projectile-animation.md). Projectile difficulty
settings are included in the gameplay settings import. Frog, plant, skeleton and gargoyle projectile
classes are also selected from native evidence.

Enemy and projectile simulation pauses with cutscenes/enemy freezing. Saves keep
combat state, cooldowns, pending strikes and projectiles in flight without
re-triggering sounds on load. Existing saves remain compatible.
Restored attack, hurt and death clips seek to their saved phase rather than
restarting while the simulation continues halfway through the action.

The [14 October pursuit and hit follow-up](enemy-pursuit-interruptions-native.md)
connects ordinary moving shooters to adjacent-node approach and skeletons to
farthest-neighbor retreat. Skeletons face the current target while playing one
authored `walkbw` clip; crossing AttackRange pauses only translation, and the
clip completes the retreat child. Shared touching pursuit now includes green ghosts,
touching spiders and zombies as well as green bats and guardians. Committed
moving-shooter salvos finish after loss of sight or range, unless interrupted
by a selected hit reaction. Their parent phases and wait deadlines survive
saves and script freezes. Contact damage uses its own saved one-second
cooldown, can apply during hurt, and is not reset by a hit reaction.

Ordinary hits apply damage but choose the hit animation only on the recovered
50% branch. The other branch plays hurt audio and leaves the action running.
A selected reaction cancels the pending shot, remaining salvo and wait;
another selected hit during that motion does not restart it. Dormant knights
and gargoyles ignore health damage while still reacting, then remain vulnerable
through wake and hurt. Bone Brutus accepts damage on its distinct one-in-three
branch; Mushroom Brutus uses the common receiver. Fractional enemy HP is
deliberately retained so small continuous damage ticks accumulate.

Spider hurt cancels the old ascent/descent/return child. Its fresh alert uses
current height: nearer the ceiling returns to StartPoint and descends; nearer
the floor or tied enters active combat. Dormant skeleton normalization and
save restoration preserve active hurt/death instead of replacing it with the
bone pile pose. The port retains collision-constrained movement and floor
settling for displaced spiders.

## Verification and limits

Unit tests cover original settings, melee/ranged variants, strike timing,
projectile wall/player collision, dodging, floor movement, freeze, save restoration,
sound routing, actor poses and one-shot animation playback.
`test:gameplay-audio` drives real jumps, shots, floor impacts and damage and checks
decoded playback for the player and the six requested enemy families.
`test:enemies` uses a real cave red spider and BSP floor: its walk changes the
skeletal mesh, its attack emits a visible original sprite, and its projectile
damages the player. Both checks also run in the packaged Linux desktop test.

The patrol update adds original patrol graphs, saved route/random state, view cones,
salvo relocation and boss projectile classes; see `patrol-boss-native.md`.
`player-projectiles-native.md` also corrects the earlier orange sprite tint:
the native orange values configure a light; the bitmap vertices use white.

The boss-phase update adds the Dungeon Max, Jester Max and Witch phase
controllers; see [boss phases](boss-phases-native.md). Subsequent recovery
implements [minimum-hop pursuit and combat refinements](native-completion-followup.md),
[native touching-enemy and patrol waypoint selection](enemy-waypoint-movement.md),
[animated projectile attachments](enemy-projectile-origins-native.md), and
[fragment physics](debris-native-recovery.md). [Projectile contacts](projectile-impacts-native.md)
now use the recovered shared hull and subclass dispatch; mushroom ribbons are
visual only, as established by the executable.

Remaining boundaries include off-graph collision recovery, the reachability of
skeleton's dormant-hit start-before-hit branch, specialized boss interruptions
beyond the confirmed Brutus receivers, the native wait first-check handoff,
portable collision tolerances and saved per-enemy random streams. Ordinary authored pursuit endpoints and common hit
interruptions now have recovered policies and implementations.
These do not invalidate the recovered rules, but prevent a claim of complete
native parity. The tests are controlled scenes, not a complete campaign
playthrough or frame-by-frame comparison with the original executable.

The later [ambush and flight update](enemy-ambush-flight.md) documents original
ceiling spider descent, dormant skeleton bones, bat congestion recovery, and
the Witch and turret regressions.
