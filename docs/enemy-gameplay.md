# Gameplay sounds and enemy movement (0.2.3)

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
four Spark/alpha image pairs and 20 fps animation, imported by
`tools/import_projectiles.py`. Projectile difficulty settings are included in
the gameplay settings import. Frog, plant, skeleton and gargoyle projectile
classes are also selected from native evidence.

Enemy and projectile simulation pauses with cutscenes/enemy freezing. Saves keep
combat state, cooldowns, pending strikes and projectiles in flight without
re-triggering sounds on load. Existing saves remain compatible.
Restored attack, hurt and death clips seek to their saved phase rather than
restarting while the simulation continues halfway through the action.

## Verification and limits

Unit tests cover original settings, melee/ranged variants, strike timing,
projectile wall/player collision, dodging, floor movement, freeze, save restoration,
sound routing, actor poses and one-shot animation playback.
`test:gameplay-audio` drives real jumps, shots, floor impacts and damage and checks
decoded playback for the player and the six requested enemy families.
`test:enemies` uses a real cave red spider and BSP floor: its walk changes the
skeletal mesh, its attack emits a visible original sprite, and its projectile
damages the player. Both checks also run in the packaged Linux desktop test.

Version 0.2.4 adds original patrol graphs, saved route/random state, view cones,
salvo relocation and boss projectile classes; see `patrol-boss-native.md`.
`player-projectiles-native.md` also corrects the earlier orange sprite tint:
the native orange values configure a light; the bitmap vertices use white.

This is still a reconstruction of native enemy behavior. Exact navigation
selection, every enemy vulnerability and all native interruption rules are
not complete. Version 0.2.5 adds the Dungeon Max, Jester Max and Witch phase
controllers and mushroom ribbons; see `boss-phases-native.md`. Projectile visuals beyond the player, red spider and mushroom, some collision dimensions and
knight-fragment physics are approximations. The tests are controlled scenes, not a complete campaign
playthrough or frame-by-frame comparison with the original executable.

The later [ambush and flight update](enemy-ambush-flight.md) documents original
ceiling spider descent, dormant skeleton bones, bat congestion recovery, and
the Witch and turret regressions.
