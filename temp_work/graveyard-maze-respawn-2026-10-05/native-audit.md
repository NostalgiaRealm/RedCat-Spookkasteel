# Graveyard maze respawn audit — 2026-10-05

Read-only source audit; only evidence in this directory was written. No build, original-game mutation, active-save mutation, or website work.

## Finding

The imported original graveyard World has an empty `OnPlayerRespawnCommand`; the compiled event has no handlers (`data/davi/lvl02a.json:25073`). `Gameplay.respawn()` clears trigger `inside` only. It retains `triggerCount`, closed door state, and completed hedge motion poses. Every progression trigger has `MaxTriggerTimes=1`, so visiting it again cannot reopen the route.

The five VM globals are `paal1` through `paal5`, exclusively the unrelated painting puzzle. There is no maze global to clear.

## Exact partial-maze progression inventory

| Davi name | Entity id | Model | Initial state / motion |
| --- | --- | --- | --- |
| heg1_mc | ModelController22 | 58 | Disabled; motion 0..0.5, raises hedge 100 at end |
| heg2_mc | DoorModel35 | 59 | Enabled, unlocked, closed; motion 0..1, lowers hedge 100 when open |
| heg3_mc | ModelController24 | 61 | Disabled; motion 0..3, lowers hedge 100 at end |
| heg4_mc | ModelController25 | 65 | Disabled; motion 0..2, lowers hedge 100 at end |
| heg5_mc | ModelController26 | 66 | Disabled; motion 0..0.5, raises hedge 100 at end |
| heg1_trigger_mc | Trigger10 | 60 | Enabled; count 0; enables heg1 and opens heg2 |
| heg3_trigger1_mc | Trigger11 | 62 | Enabled; count 0; enables Trigger12 |
| heg3_trigger2_mc | Trigger12 | 63 | Disabled; count 0; enables heg3 |
| heg2_closetrigger_mc | Trigger13 | 64 | Enabled; count 0; closes heg2 |
| heg5_trigger_mc | Trigger14 | 67 | Enabled; count 0; enables heg5 and heg4 |

Trigger sequence: entrance Trigger10 → western passage through heg2 → Trigger13 closes the passage → Trigger11 arms Trigger12 → Trigger12 lowers heg3 → Trigger14 raises heg5 and lowers heg4 → final button.

For a partial retry, restore those four controllers and one door to their initial motion poses. Reset five trigger counts and `inside=false`, restoring their authored enabled flags. For the door also restore `open=false`, `openFraction=0`, `closeAt=null`, `locked=false`, enabled true. For stopped motion owners set `moving=false`, `motionStarted=false`.

Call MotionPlayer `stop()` and `seek(start)` to cancel callbacks, clear `finished/includeStart`, and invalidate any update's generation. Normalize `from/to/speed/loop/loopFrom/loopTo` to the initial range for unambiguous save round trips. Call `host.applyMotion` to update the rendering/collision pose map. The generic script Reset alone does not reset owner `moving`, `motionStarted`, `open` or enabled state.

## Final button and committed completion

| Davi name | Entity id | Model | Initial state |
| --- | --- | --- | --- |
| mazedeur1_knop | ButtonModel4 | 23 | Enabled, off, switchCount 0; motion 0..1 |
| heg7_mc | ModelController28 | 69 | Disabled; motion 0..1 raises hedge 100 |
| mazedoortrigger | ModelController43 | 71 | Disabled; motion 0..12 drives completion |
| mazedoorcam | CameraTrigger20 | 71 | Disabled, triggerCount 0 |
| mazedeur1_dm | DoorModel19 | 14 | Enabled, unlocked, closed; motion 0..3 translates 152 in X |
| mazedeur1_rood | EffectCoronaEntity5 | — | Enabled |
| mazedeur1_groen | EffectCoronaEntity6 | — | Disabled |

`switchButton` immediately sets `switchedOn=true` and increments `switchCount`; it does not commit completion until the button's one-second motion completes. `AfterSwitchOnCommand` then synchronously enables heg7 and mazedoortrigger, disables red, and enables green.

Use green enabled, sequence playing/time advanced/finished, or exit open to recognize committed completion. `button.switchedOn` alone is too early. `motionStarted` alone is unreliable for older snapshots missing `started`: current restore assigns true to even untouched nonrepeating controllers in those saves.

The sequence's imported events and compiled `MazeTrigger` function are:

| Sequence time | Event | Effect |
| --- | --- | --- |
| 0.05 | volumedown | muziek volume × 0.5 |
| 0.1 | startcutscene | StartCutScene(1) |
| 1 | startcamera | Enable kerkdeurrechts_cam |
| 3 | knaldeur | Hide kerkdeurrechts_muur_mc; destroy kerkdeurrechts_dummy and dummy2 |
| 5 | startcamera1 | Enable mazedoorcam |
| 6 | opendeur | Open mazedeur1_dm |
| 11.5 | stopcutscene | StopCutScene(1) |
| 11.55 | volumeup | muziek volume × 2 |

Preserve committed completion. It affects church geometry and secret-bearing dummy actors outside the maze, and replaying it can alter score or audio. This makes a global maze reset after every later death inappropriate for the requested isolated retry fix.

Before commitment, cancel/reset a pending final-button motion upon fatal damage, before the next ScriptHost update. World advances the ScriptHost before Gameplay each frame, and timelines continue during death. Without immediate cancellation, button AfterSwitchOn can run while RedCat is dead, commit completion, and start a cutscene which pauses death advancement until the sequence finishes. Then restore partial maze geometry at normal respawn. Apply the same pending-button cancellation after restoring a death-phase save, before any timeline update.

## State to preserve

- `heg6_mc` / ModelController27 / model 68 is an initially enabled 0..4 ping-pong obstacle with no script events or progression latch. Its current phase can remain; resetting its phase is optional, not needed for recovery.
- `heg8_mc` / ModelController29 / model 70 has no imported motion. Its visibility is removed by `heg_brcrate`'s destruction. Preserve the crate health/destroyed state, hedge visibility, and secret reward state.
- Preserve ghost enemy health, kills, pickups, player inventory/score, checkpoints, painting globals, all unrelated motions, church state, and completed cutscenes.
- `maze1campos` is initially disabled with no compiled activation reference; no progress reset is needed.

## Actual live snapshot

Input: `live-autosave.json`, saved 2026-10-05T11:35:12.162Z.

- Player `[-922.2278975624878, 512.05, -798.9451312953597]`; checkpoint savepoint_b `[244,523,111]`, orientation 9.
- All five maze progression trigger counts are 1; Trigger10 `inside=true`; Trigger12 enabled.
- heg1/3/4/5 completed at 0.5/3/2/0.5, respectively.
- heg2 is closed, stopped at 0 after its reverse close motion.
- Final button is off, count 0, time 0. heg7, mazedoortrigger and exit are untouched. Red enabled, green disabled. No cutscene/camera.
- mazeghost1/2 are already defeated; mazeghost3/4 remain alive. Those states are unrelated to opening the maze route.

## Narrow old-save recovery predicate

A conservative predicate is: incomplete/uncommitted maze, saved player inside Trigger10's actual trigger volume, consumed Trigger10 and Trigger13, heg2 closed and settled at its start, optionally heg1 settled at its raised endpoint. Recover only this stuck entrance pocket; preserve viable partial saves elsewhere in the maze.

The saved Trigger10 volume is X [-1016,-840], Y [512,556], Z [-840,-790]. Use `game.contains` rather than adding a broad rectangle. Include normal player hull semantics as that helper does.

Full physical BSP-model grid connectivity at player feet Y 512.05 gives the saved entrance point and completion button different connected regions; Trigger11's western passage and the button share the other region. Evidence: `native-audit-connectivity.txt`. This is a static walking-path diagnostic, not proof of prior death or a jump simulation. A deliberate jump/backtrack into the same pocket would still leave the same exhausted trigger lock and merits the same narrow recovery.

Do save recovery only after motion and saved pose restoration, otherwise saved poses can overwrite the correction. A retry snapshot then has trigger counts reset, so it will not repeatedly qualify on subsequent loads. The next ordinary interaction tick can retrigger the entrance even when the player remains inside Trigger10, because reset sets `inside=false`.

## Collision evidence

`native-audit-collision.json` uses the game's BspCollider and saved motion poses, with a +/-11 X/Z, 56-high player hull.

- Saved raised heg1 blocks the probe with fraction 0.315; reset pose is clear (1).
- heg2 is initially correctly closed; after re-triggering Trigger10 and advancing the authored motion it becomes clear (1), while heg1 raises again.
- VM error remains null.

This probe is an isolated in-memory reset candidate; it did not modify source or the live save.

## Relevant implementation pointers

- `src/gameplay.js`: `damage`/`respawn`/`updatePlayerReaction`, `setDoor`, `switchButton`, `trigger`, `contains`, snapshot/restore.
- `src/script-host.js:283`: completion callbacks; 289: pose application; 292: timeline update; 317: snapshot; 322: restore.
- `src/motions.js:179`: stop; 192: seek; 206: generation-aware dispatch.
- `src/world.js:778`: timelines update before gameplay; `src/main.js:207`: respawn event teleports the physical player.
- `data/davi/lvl02a.json:39969`: exact compiled MazeTrigger function; :25746 onwards: the five painting globals.
