# Gameplay and Davi-Script status (0.2)

The application now executes the original compiled level scripts, using a portable
Davi-Script interpreter and game-command adapter. It does not execute the original
Windows DAT/EXE or compile script text into JavaScript. The full original native
game engine and enemy AI have not been reimplemented, and a complete campaign
playthrough has not yet been verified.

## Script pipeline

`tools/import_scripts.py` reads all five format-27 DSO files, consumes every byte,
resolves symbol references and validates branches. It produces `data/davi/*.json`:
5,134 instructions, 444 instance event handlers, 76 script functions, and their
native API declarations. No event handler is replaced with a hand-written puzzle
solution. `src/davi-vm.js` implements typed operands, parameters, temporaries,
locals/globals, calls, conditional branches, arithmetic, comparisons and returns.
Step/depth budgets stop runaway scripts, and errors include instruction context.

`src/script-host.js` binds script names to original entities and groups and routes
native commands back into `Gameplay`. Every native function/method actually called
by these five compiled programs has an implementation. Unused original native
APIs are not all implemented; unknown calls fail explicitly.

Original-data tests exercise every handler and function, and the original branch
labels, using controlled host fixtures. Integration tests use actual level
entities, settings, motions, dialogue and the real game adapter. Covered examples:

- Forest potion threshold selects the correct fairy sequence and grants shooting.
- Graveyard five-pillar conjunction opens the mausoleum only after all flags match.
- Cave exit waits for four elemental signals; tower waits for five mirror signals.
- The last mirror enables the fifth placement, without prematurely ending the game.
- Boss destruction dispatches the original camera, beam and cutscene timelines.
- Touch/shot callbacks activate paused cave platforms and remove graveyard planks.
- Castle boss doors tolerate the original self-referential Open callback.
- Saves retain puzzle globals, minimum/maximum trigger counts, pickups, skills,
  motion directions/loop bounds, camera state and already-fired event boundaries.

The old small source-command whitelist remains available for isolated gameplay
fixtures without a compiled program. Shipped levels use the DSO interpreter.

## Motions and presentation

`tools/import_motions.py` decodes 437 brush motions, 806 original event labels and
2,346 keyframes. `src/motions.js` supports translation interpolation, quaternion
rotation, once/loop/ping-pong playback, pause/resume and reentrant event callbacks.
Five graveyard end markers are authored at 8.01 seconds on 8-second paths. The
portable playback interval explicitly extends to the final marker while retaining
the exact geometry interval; this compatibility repair is documented in
`motions.md`.

Rendering and swept BSP collision follow the same brush transforms, including
rotation about the original pivot. Players ride translated/rotated floors.
Disabling a model controller pauses its motion; Hide/Show controls visibility.
Door and button after-events occur when their authored motion finishes. A shared
brush retains the active controller's pose rather than being overwritten by an
inactive controller.

Cutscene commands control input, RedCat visibility, enemy freezing, cameras,
teleports, music volume and subtitles. `tools/import_dialogue.py` imports 398 Dutch
text entries and 223 matching voice files/durations. Fixed camera targets take
precedence over the generic player-target flag. Moving cameras visit authored
waypoints at 150 world units per second; exact original final-approach acceleration
and smoothing remain approximate. Offset camera framing is reconstructed.

## Regular enemy and action feedback (0.2.3)

Enemies now select original idle, walk, attack, hurt and death motions, with
one-shot playback and original motion-speed factors. Ground enemies follow
swept BSP terrain collision. Green/yellow spiders use contact damage; red spiders
use their original ranged-salvo and RcEnemyShot settings with visible, colliding
projectiles. Attack sounds occur at the strike/projectile release, with separate
alert, idle, hurt and death sounds. Player shots, impacts, jumps and health loss
have their original sounds. Details and fidelity limits are in `enemy-gameplay.md`.

## Remaining native engine work

- Enemies still use reconstructed visibility/chase and attack state machines.
  Patrol links, sense/view ranges, remembered targets and salvo relocation are
  implemented, but exact flight steering, route simplification, aiming randomness,
  some projectile effects, vulnerabilities and boss-specific combat states remain incomplete. Executing a
  boss's original defeat handler is not proof of an identical boss fight.
- Shooting respects initial chapter abilities and script-granted skills, but exact
  special-shot charging, super-jump and shove behavior are still incomplete.
- Trigger and liquid overlap use transformed convex BSP cells. Moving solid
  collision is implemented; crush damage and moving-brush pushes from the side
  need further work.
- Original spouts, coronas, light styles, beams and save beacons are rendered;
  particle randomness, exact dynamic-light falloff, fairy effects, camera fades
  and some actor choreography remain approximate or incomplete.
- Hidden drops, some breakable prop behavior and original secret handling need work.
- Original RCR saves are not imported. This application has its own save format.

## Verification

Run `npm test`, `python3 -m unittest discover -s tests -p 'test_*.py'`,
`npm run test:smoke`, `npm run test:scripts`, `npm run test:gameplay-audio`,
`npm run test:enemies`, `npm run test:bosses`, and `npm run test:desktop`.
The browser scene test renders the forest introduction, checks Dutch voice and
subtitles, reloads its camera/time, finishes its timeline and exercises the witch
handler in an isolated scene. Tests programmatically drive selected events; they
are not a full campaign playthrough or a comparison against native game footage.

Format and execution details: `davi-format.md`, `davi-vm-opcodes.md`, `motions.md`.
Numeric settings come from 26 original INI files via `import_gameplay_settings.py`.

## Patrol, projectiles and boss scenes (0.2.4)

`patrol-boss-native.md`, `player-projectiles-native.md` and
`boss-script-regressions.md` record the native evidence and remaining limits.
The renderer distinguishes disabled enemy AI from hidden bodies. Model-bound
pickups use their platform pose for both rendering and collection, and camera
references no longer remove a shared physical brush. RedCat's shooting pose and
right-hand muzzle use the same clock as delayed pellet release. Each projectile
animates its own original bitmap sequence and collides along its entire step.

`test:bosses` renders Brutus before/during the intro, checks his mushroom attack,
fires an animated player pellet into his actual collision hull, runs the defeat
and mirror timeline, collects the raised mirror, loads the next chapter, and
checks the castle WhizKitty scene's position. This test also runs in the packaged
Linux application. Other mirror routes and the tower's fifth placement are
covered by original-script tests.

## Liquids, mushroom ribbons and remaining boss cycles (0.2.5)

Translucent water survives the renderer’s palette cutout threshold. Visible
water faces on trigger brushes render without making the water solid. Contact
uses the occupied convex BSP cells, including non-solid leaves with no collision
sides. Forest triggers drain their authored 1 HP/second; the castle ooze drains
3 HP/second. Damage is continuous while hurt feedback is throttled. See
`water-native.md` for executable evidence and exact wet/dry test positions.

Mushrooms leave the original camera-facing trail, width 6.4 and lifetime 1.5 s.
Trail contact uses the authored TrailDamage=5 with the existing hit cooldown;
that contact rule is reconstructed, since its native handler is not yet recovered.
Trail age and geometry persist through saves, freeze during cutscenes, and clear
on respawn. The trail is in the projectile’s flight path, not projected onto a floor.

Dungeon Max’s original turret parts and rise/look/lower cycle, Jester Max’s
teleport/invisibility cycle, and the Witch’s takeoff, waypoint flight and attack
cycle now run as specialized, saveable state machines. These changes do not
establish exact parity for every native transition or projectile behavior.
See `boss-phases-native.md` for evidence and limits.

## Graveyard, bats and original effects (0.2.5)

The paired courtyard doors accept the original explicit Open commands even
when their interaction controllers start disabled. Both button callbacks and
their conjunction still run through the original DSO. The decorative gargoyle
statues now use their original actor flags for player, projectile and sight
collision. Sweeps use the transformed mesh; this is a reconstruction of actor
collision, not the recovered original collision algorithm.

Green touch bats pursue into actual player contact, while ranged bats keep
their original timed shot release. Flight uses their rest-pose body bounds so
spread-wing animation no longer traps them in authored alcoves. See
`graveyard-door.md`, `actor-collision.md` and `bat-native.md`.

Original bitmap/alpha pairs drive flames, coronas, lightning beams and staged
checkpoint effects. Dynamic lights illuminate the lightmapped world and actor
materials. Save beacons build six converging spokes before the upward beam,
with their original sound stages, and restore their activation clock. Actual
checkpoints remain controlled by the original Davi-Script calls. Recovered
constants and rendering approximations are documented in `world-effects-native.md`.

## Optional cheats (0.2.5)

Settings → Cheats fills the native inventory caps (5 mirror pieces, 100 potions)
and adds 9000 points, capped at 999999. This changes inventory only: it does not
dispatch mirror pickup scripts or complete a level. The real gateway stays
collectible. No-clip follows the camera, with Space up and Shift down. It skips
movement/camera collision, gravity, platform carry and out-of-world recovery;
script events and damage still operate. Disabling it validates the current
position and returns to safe terrain if needed. Saves retain the flight flag
and last safe position, including when saved outside the map.

The potion cap follows the executable's actual pickup routine, which uses a
literal 100 and ignores the separate `LimitMaxPotions=20` field. This preserves
the original 30-potion skill thresholds. The exact addresses and distinction
are recorded in [inventory-limits-native.md](inventory-limits-native.md).

`test:environment`, `test:boss-phases`, `test:graveyard`, `test:bats`,
`test:effects` and `test:cheats` exercise the imported levels and WebGL runtime.
The desktop suite runs these same scenarios before checking actual Linux
window pixels, hardware compositing and resolution changes.

## Subsequent source fixes (not packaged)

The original StandingEnemy factory maps Type 4 to castle Jester Max and Type 5
to cave Dungeon Max. This corrects their earlier reversal. The cave's compiled
introduction lowers its decorative `max_actor` with `max_model`; the combat
actor then uses the original three-part turret, rise/fire/lower cycle and magma
shots. Older saves made with the reversed mapping migrate on load.

Opening doors now push RedCat clear as their original brushes move, or pause
when the world blocks that push. Mounted decorative actors follow their BSP
model transform; this restores the two castle cannonballs and eight cave rocks.
Original INI spin rates, saved animation clocks and updated collision surfaces
keep those models aligned. See [moving-solid-collision.md](moving-solid-collision.md)
and [actor-model-attachments.md](actor-model-attachments.md).

The cave's four boss-gate beams apply their authored damage and delay; the
original puzzle callbacks disable each one. TeleporterFX responds to the
original Show action, rendering imported sparks, energy strands and ground
effects while preserving its seven-second activation clock through saves.
The effect trajectories and some sound stages remain approximate; see
[world-effects-native.md](world-effects-native.md).

`test:doors`, `test:actor-placement` and `test:portals` add actual rendered-level
regressions to `test:desktop`. The asset audit resolves 710 placed actors, 29
model attachments and 56 explicitly named motions. These are source checks;
the prepared Linux/Windows 0.2.5 directories remain unchanged. Follow
[building.md](building.md) to run source or package it yourself.
