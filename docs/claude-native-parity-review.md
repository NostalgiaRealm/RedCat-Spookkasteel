# Native parity review (Claude), October 2026

This review compared the port in `source/` with the decompiled original
(`RC_ORIGINAL_DECOMPILED/`, `RcHcGame.dat` SHA-256 `e30781fc…`). The source
review was read-only. The user then approved a set of corrections on
27 October 2026: items 1–17, plus D1, D2, D3, D5, D8 and D9 as native
behaviour. D4, D6, D7 and D10 are documented only. All corrections are in the
individual modules, and the runtime bundle `src/game.bundle.js` was regenerated
with `npm run web:refresh`. No build, package, version bump or commit was made.

This review does not claim full equivalence with the original game. Each entry
names the native evidence that was used, and the
[coverage table](#coverage) lists what was compared and what was not.

Research material, extracted proposal text, logs and the reconstructed baseline
are in [`temp_work/claude-native-parity/`](../temp_work/claude-native-parity/README.md).

## How to read an entry

Each entry gives the **system**, the native **evidence**, the **previous**
port behaviour, the **intent** behind the change, the **approval**, the
**correction**, the **files** changed, the **validation** run, and the
**limitations** that remain. Native addresses refer to `RcHcGame.dat`. Units
are 32 per metre, and native time is in milliseconds.

The approval for every entry below is the user's instruction of 27 October 2026:
“Implement all items from 1 to 17 now, plus D1, D2, D3, D5, D8, D9. Document
the others only.”

## Save compatibility

Every new piece of state is optional and has a safe default:

| Field | Where | Default for older saves |
| --- | --- | --- |
| `respawnProtection`, `hurtSoundUntil`, `hurtRandomState` | gameplay snapshot | Derived from the saved reaction phase, or 0 |
| `entryState` | gameplay snapshot | `null`, so the retry falls back to the earlier fresh start |
| `playerReaction.lifeDeducted` | death reaction | Legacy death saves count as already deducted, so no second life is taken |
| `knightSwinging` | enemy | `false` |
| `afterDestroyPending`, `dropDead` | enemy | Absent: the old save already ran its command, and the corpse keeps its old fade |
| `cutsceneFadeUntil`, `cutsceneFadeInUntil` | script host | 0 |

`save-import.js` accepts the new optional keys. Storage origins, keys, player
identities, export format and recovery history are unchanged. The wider native
player box (D1) can start an old saved position up to 1.5 units inside a wall.
The existing movement recovery resolves overlaps of that size on the first
tick, and `tests/native-parity-review.test.mjs` checks this case.

<a id="1"></a>
## 1. Death, lives and respawn

- **System:** player lifecycle.
- **Evidence:** `0x433fd0` deducts the life about 2.0 s after death, after two
  sequential 1000 ms timers. `0x439ce0` keeps respawning while the count is 0
  or more. Respawn sets a 5 s protection, cleared at `0x4dab7f`, which also
  blocks liquid damage. `InitialLifes` comes from Game.ini `[Player]`
  (`0x437c20`).
- **Previous:** the life was deducted at the fatal hit, and the third death
  ended the game. Respawn followed the 1.4 s death clip, with protection only
  for the respawn clip (about 3.3 s).
- **Intent:** native lives and timing; three lives give four attempts.
- **Correction:** a 2 s death hold that keeps the final pose. At its end the
  life is deducted and RedCat respawns while the count is 0 or more; otherwise
  the game is over. Respawn grants one 5 s protection window, and lives come
  from `InitialLifes` (default 3).
- **Files:** `source/player-lifecycle.js`, `source/gameplay.js`, `source/main.js`.
- **Validation:** `tests/player-lifecycle.test.mjs` was rewritten for the
  native clocks: deduction at respawn, 5 s protection, and game over at 0
  lives. Death-order tests in the beam, explosion, projectile, water and maze
  suites now expect the deduction at the end of the hold.
- **Limitations:** the HUD shows 0 lives on the last attempt, as in the
  original. The browser lifecycle scene (`tests/player-lifecycle-scenes.mjs`)
  was updated, but could not be run here because there is no Chrome.

<a id="2"></a>
## 2. Every hit counts; only the hurt voice is throttled

- **System:** player damage.
- **Evidence:** receiver `0x433820` applies every hit unless RedCat is dead or
  respawn-protected. `0x433d7c`/`0x433d89` gate only the hurt voice: on a
  random 1.0–1.5 s timer, and only once the previous voice has finished.
- **Previous:** a 0.65 s immunity after any hit (`gameplay.js`), present since
  the 0.9.1 import with no native source.
- **Intent:** native difficulty in crowded fights.
- **Correction:** the damage cooldown is removed. A deterministic, saved LCG
  sets `hurtSoundUntil`. The `damage` event carries `hurtSound`, and the audio
  router also drops a hurt voice while one is still playing. A hit no longer
  restarts an active hurt reaction.
- **Files:** `source/gameplay.js`, `source/gameplay-audio.js`, `source/save-import.js`.
- **Validation:** `tests/gameplay.test.mjs` (back-to-back hits),
  `tests/water.test.mjs` (liquid damage plus a hit), and
  `tests/gameplay-audio.test.mjs` (the voice is dropped while one plays or the
  timer runs).
- **Limitations:** none known.

<a id="3"></a>
## 3. Retry restores the chapter-entry state

- **System:** game-over retry.
- **Evidence:** the retry loads through `0x439f40`, which restores lives,
  health, maximum health, mirror parts, abilities and total score as they were
  at chapter entry.
- **Previous:** a fresh chapter with 0 score, 3 lives and 10 maximum health.
  The next save then overwrote the campaign totals.
- **Correction:** `gameplay.entryState` is captured when a chapter starts and
  saved. The pause **Opnieuw** button and the dead-save restart use
  `retryLevel()`, which validates the state before using it. Saves without it
  keep the earlier fresh start.
- **Files:** `source/main.js`, `source/gameplay.js`, `source/save-import.js`.
- **Validation:** snapshot/restore round trips in the unit suite. A full
  in-browser retry scene was not run (no Chrome).
- **Limitations:** the native “Opnieuw proberen? Ja/Nee” screen is not
  restored (D6).

<a id="4"></a>
## 4. Finishing the adventure closes it out

- **System:** campaign completion.
- **Evidence:** the menu at `0x564eec` writes the highscore at completion and
  resets the adventure.
- **Previous:** Continue after the outro replayed the Tower overview. The
  highscore was stored only when the Highscores page was opened.
- **Correction:** the final debriefing (`current>=4`) records the highscore.
  A completed final-chapter save no longer counts as a save to continue. The
  completed save remains behind the existing overwrite warning, and the
  one-best-per-player rule is unchanged.
- **Files:** `source/main.js`.
- **Validation:** unit suite. The menu flow was not exercised in a browser.
- **Limitations:** the native redirect of the next Avontuur to the difficulty
  page uses the port's existing new-adventure flow.

<a id="5"></a>
## 5. Chapter starting abilities only for quick play

- **System:** abilities.
- **Evidence:** `0x439f40` applies `StandardSkill` only for quick play
  (`0x43ab52`).
- **Previous:** every chapter added its `StandardSkill` mask, so the Tower
  granted BIG BENG even when the optional Caves fairy was missed.
- **Correction:** an adventure chapter starts from mask 0, plus the abilities
  earned and carried. The carry merge is `skill|progress.skill`. Quick play
  keeps the chapter mask. The Caves BIG BENG correction and saved masks are
  unchanged.
- **Files:** `source/main.js`. The doc fix is in `docs/player-abilities-native.md`.
- **Validation:** unit suite (`tests/player-abilities.test.mjs`, `tests/cheats.test.mjs`).

<a id="6"></a>
## 6. Knight melee

- **System:** enemy combat (22 Castle knights).
- **Evidence:** `0x4050e0` swings every 1.44 s while RedCat is seen or
  remembered. Damage comes from a sword trace from the BONE01 tip to the body
  centre (`0x42bd00`), strictly inside the motion's collision window. Knights
  play no strike sound.
- **Previous:** each swing needed RedCat visible and in range, followed by a
  0.4 s wait. Any position within AttackRange+5 was hit, and Knight4.wav
  played on every hit.
- **Correction:**
  - `knightStrikeHits` sweeps the player box along the posed sword segment.
  - `world.js` supplies the segment from BONE01 as tip = bone + 0.3·(bone − centre).
  - When the artwork is unloaded, a frontal AttackRange segment is used instead.
  - The swing repeats while `knightSwinging`.
  - The strike plays no attack cue.
- **Files:** `source/enemy-perception-native.js`, `source/gameplay.js`, `source/world.js`.
- **Validation:** `tests/enemy-committed-attacks.test.mjs` and the enemy
  suites pass.
- **Limitations:** the fallback segment is an approximation used only without
  artwork.

<a id="7"></a>
## 7. Enemy sight and facing

- **System:** enemy perception.
- **Evidence:** `0x423800` has no height limit, uses inclusive range tests and
  a strict view cone. The eye is at 0.8 of the enemy's height
  (`0x422a96`/`0x4236b0`). The first ray aims at RedCat's box centre
  (`0x49bc80`); only if it is blocked does a second ray aim one box height
  higher (`0x423ad0`). A missing SenseRange defaults to 50. Spiders use
  horizontal range.
- **Previous:** a port-only height limit, and a fixed 25-unit eye. Standing
  enemies stopped turning once RedCat left view.
- **Correction:**
  - `enemySeesPlayer()` and `enemySightEye()` now handle sight.
  - The spider dormant and return rays use the same targets.
  - Standing enemies keep facing RedCat while they remember him.
  - Contact damage aims at the box centre and plays no enemy cue.
  - Enemies start with `alerted=false`.
- **Files:** `source/enemy-perception-native.js`, `source/gameplay.js`, `source/enemy-ambush.js`.
- **Validation:** `tests/painting-spider.test.mjs` (centre and head rays,
  inclusive range), `tests/patrol-boss.test.mjs`, `tests/enemy-behavior.test.mjs`.
- **Limitations:** sight is still checked every frame rather than every 500 ms (D10).

<a id="8"></a>
## 8. Dungeon Max

- **System:** boss AI.
- **Evidence:** `CRcDmAttackState` (`0x401d00`) loops shoot, rise, look and
  lower for as long as he lives. Heights are scaled by `MachineScale` (1.4).
  The root enters the attack state on sight or memory (`0x4030b0` → `0x422f30`).
- **Previous:** he waited after each lowering for RedCat to be visible and
  within AttackRange, and rose only 40 units.
- **Correction:** heights are scaled by 1.4, and by a positive entity `Scale`.
  Lowering leads straight into the next salvo, and idle starts a salvo when
  RedCat is seen or remembered.
- **Files:** `source/boss-ai.js`.
- **Validation:** `tests/boss-phases.test.mjs`, updated to the native height and loop.

<a id="9"></a>
## 9. Jester Max

- **System:** boss AI.
- **Evidence:** `CRcJmMoveState` (`0x404970`) keeps him hidden until the
  departure particles retire, and never reads `InvisibleTime`. Only the
  teleport that follows a salvo is protected. `0x404550` starts the first
  teleport on Enable. Missing Easy/Hard keys keep the constructor defaults:
  AverageShotsPerSalvo 3, BulletDeviation 0.05, MinPlayerDistance 100.
- **Previous:** he was hidden for `InvisibleTime`, every teleport was
  protected, and the first teleport waited for RedCat to be visible. Easy/Hard
  lacked those defaults.
- **Correction:**
  - `teleport(game,o,{guarded})` sets protection only after a salvo.
  - The invisible phase lasts for the remaining departure-effect time.
  - The arrival phase lasts at least the arrival effect.
  - The first teleport starts on Enable.
  - `withNativeEnemyDefaults` supplies the Jester defaults.
- **Files:** `source/boss-ai.js`, `source/gameplay.js`.
- **Validation:** `tests/boss-phases.test.mjs` and `tests/native-parity-review.test.mjs`.

<a id="10"></a>
## 10. Brutus and the Witch when RedCat is unseen

- **System:** boss AI.
- **Evidence:** the Brutus shooter states idle when unaware, and the Witch's
  main state resumes random flight.
- **Previous:** an unaware Brutus walked the arena, and the Witch hovered in place.
- **Correction:**
  - An unaware Brutus with no state idles in place.
  - Mushroom Brutus returns to idle when it finishes.
  - Bone Brutus keeps approaching on arrival without memory instead of finishing.
  - The unaware Witch flies randomly, and resumes random flight on arrival without memory.
  - Perceiving or remembering RedCat after leaving her start triggers the approach.
- **Files:** `source/enemy-shooter-native.js`, `source/boss-ai.js`.
- **Validation:** boss and shooter suites.
- **Limitations:** the two Brutus failures in `tests/patrol-boss.test.mjs`
  already failed before this work (see [Validation](#validation)).

<a id="11"></a>
## 11. Death events and ghost deaths

- **System:** enemy death.
- **Evidence:** `CRcEnemyDie` runs AfterDestroyCommand when the death motion
  ends (`0x403950`/`0x403b50`). Ghosts use `CRcDropDeadState`
  (`0x405cc0`–`0x405f50`):
  - AfterDestroy runs immediately.
  - The floor is traced from y+1 down to y−100·scale (`0x4298c0`).
  - Y lerps to the floor while alpha fades over 5000 ms from the moment of death.
- **Previous:** every enemy ran AfterDestroy at the killing blow. Dead ghosts
  hovered, and faded only after their clip.
- **Intent:** defeated enemies keep finishing during dialogue. Boss scenes now
  start when the death clip ends, about 2 s later.
- **Correction:**
  - Both Brutus, both Max bosses and the zombies set `afterDestroyPending`.
  - A small `dyingEnemies` set (no level scan) runs the command at `animationUntil`.
  - Ghosts store `dropDead` and sink while fading from `deathStartedAt`. A missed trace keeps the height.
  - Both fields are saved.
- **Files:** `source/gameplay.js`, `source/enemy-death-effects.js`.
- **Validation:** `tests/native-parity-review.test.mjs` (deferral, save/load,
  ghost sink and fade), `tests/boss-script-regressions.test.mjs` (Brutus
  ending after the clip), `tests/enemy-death-effects.test.mjs`.

<a id="12"></a>
## 12. Enemy and boss voices

- **System:** gameplay audio.
- **Evidence:**
  - Boss slot-47 handlers: maxd uses mxin0011/0003/0004 and maxj uses mxin0002/0003/0004. The Witch uses grizatt1/grizhit1; her `rand()` result is discarded.
  - `0x423be0` drops a new request while the actor's previous one-shot plays, and replaces a loop only with a different cue.
  - Bat idles loop at gain 0.4.
  - A lethal hit requests hurt (`0x42330c`) before death (`0x423320`).
  - Only frogs, zombies, guardians, ghosts and bats chatter, and only while unaware.
- **Previous:**
  - Max and the Witch were silent.
  - Every cue replaced the previous one.
  - Bats played full-volume one-shots.
  - Walk starts chattered, and visible enemies chattered on a timer.
- **Correction:**
  - `BOSS_VOICES` tables and the drop/loop rule are in `GameplayAudio`.
  - The bat idle loops at 0.4.
  - Walk cues are removed.
  - Lethal hits emit hurt before destroy.
  - `unawareChatter` runs for the five families within the 1600-unit think radius, every 0.25 s.
- **Files:** `source/gameplay-audio.js`, `source/gameplay.js`, `source/enemy-perception-native.js`.
- **Validation:** `tests/gameplay-audio.test.mjs` (new cases for bosses, the
  drop rule and bat loops).
- **Limitations:** natively the idle cadence is 4–5 ms (back to back). The
  port polls every 0.25 s, so a cue starts at most 0.25 s after the previous one ends.

<a id="13"></a>
## 13. Door lock sounds, ErrorSound and the BIG BENG charge (with D3)

- **System:** world audio.
- **Evidence:** `0x4cd800` plays the DoorType's Lock/Unlock cue on a state
  change: normal for type 1, key for 2, secret for 3, silent for 0 and 4.
  ErrorSound.wav plays when a locked door with `UserFeedBack=1` is used.
  `0x54ffe0(def,0,1.0,0,0)` plays the charge once, with loop flag 0.
- **Previous:** locks were silent, a port toast said “Deze deur zit op slot.”,
  and the charge sound looped.
- **Correction:** `doorLock`/`doorLocked` events produce positional cues. The
  toast is removed (D3). The charge is a one-shot that is not replayed during
  the same hold.
- **Files:** `source/gameplay.js`, `source/gameplay-audio.js`.
- **Validation:** `tests/native-parity-review.test.mjs`,
  `tests/fairy-audio-lifecycle.test.mjs`, `tests/player-projectile-audio.test.mjs`.

<a id="14"></a>
## 14. Cutscene endings and scripted cameras

- **System:** script host, camera and presentation.
- **Evidence:** StopCutScene(fade) withholds control and the HUD until the
  fade ends, and the 10% letterbox bars fade. Subtitles appear after the
  StartCutScene fade-in. Fixed and route cameras (modes 2–4) freeze RedCat
  outside cutscenes. In `0x4598e0`, mode 1 places the camera offset[0]·H above
  and offset[1]·H behind the feet, with pitch offset[2]°, where H is the box
  height.
- **Previous:** control and the HUD returned immediately, and RedCat could
  walk during overview cameras. Offset regions used ×32 with the components
  swapped.
- **Intent:** skipping, invulnerability, the wall solver and mouse look stay.
- **Correction:**
  - `ScriptHost.controlLocked` covers cutscenes, the fade hold and modes 2–4. It also blocks attacks.
  - The `cutscene-release` and `cutscene-fading-in` CSS states hide the HUD and subtitles.
  - The bars fade over the authored time at 10vh.
  - Mode 1 uses the native geometry.
  - A skipped cutscene does not hold control.
- **Files:** `source/script-host.js`, `source/world.js`, `source/gameplay.js`,
  `source/main.js`, `src/style.css`.
- **Validation:** `tests/native-parity-review.test.mjs` (lock, fade and mode 4)
  and `tests/camera-control.test.mjs`.
- **Limitations:** browser camera and cutscene scenes were not run (no Chrome).

<a id="15"></a>
## 15. Tower mirror flash

- **System:** world effects.
- **Evidence:** FlashEffect is a one-second kaboom2 burst at the entity origin,
  facing the viewer. It has five static short rays at 0.65 and five spinning
  long rays at scale 50, with a 12 rad/s² spin ramp.
- **Previous:** a 0.6 s full-screen white CSS flash.
- **Correction:** the new `flash-effect-native.js` draws through the existing
  kaboom2 billboard batch. `flashStartedAt` is set on Enable, on the gameplay
  clock. The CSS overlay and its element are removed.
- **Files:** `source/flash-effect-native.js`, `source/world-effects.js`,
  `source/script-host.js`, `source/main.js`, `src/style.css`, `index.html`,
  `tests/witch-mirrors-scenes.mjs`.
- **Validation:** `tests/native-parity-review.test.mjs`.
- **Limitations:** the native alpha curve was not traced, so a linear fade is
  used. The flash is not saved, so a reload during that second drops it. Not
  checked visually.

<a id="16"></a>
## 16. Score and hearts

- **System:** pickups and HUD.
- **Evidence:** `0x43d290` shows the 75 card but adds no points. The HUD truncates health before drawing.
- **Correction:** the reward effect takes a card value separate from the score,
  and `hudCommands` truncates health.
- **Files:** `source/gameplay.js`, `source/hud.js`.
- **Validation:** `tests/reward-effects.test.mjs` and `tests/native-parity-review.test.mjs`.

<a id="17"></a>
## 17. Contact parameters

- **Door/button proximity (17a):** `0x4d14f0` measures from the eye
  (feet + 54.08) using the full box size, plus the radius on X/Z.
  `withinTriggerRadius` now does this (`source/environment-interactions.js`).
- **Pickups:** `CAdamItem` (`0x4d69b0` → `0x4e1d00`) uses the player box and
  item bounds with 1 unit of tolerance and no sight ray. `world.js` stores
  `pickupBounds`, and items without loaded bounds keep the old radius rule
  (`source/gameplay.js`).
- **Walkable floors:** a normal above 0.7 rather than 0.65
  (`FLOOR_NORMAL_Y` in `source/collision.js`). Movement recovery keeps its own 0.65.
- **Validation:** `tests/door-activation.test.mjs` (native box edges) and
  `tests/native-parity-review.test.mjs` (pickup box).
- **Limitations:** the slope change has no dedicated sloped-brush test, so
  walkability on 0.65–0.7 slopes needs an in-game campaign check.

<a id="d1"></a>
## D1. Native player box

The constants in the new `source/player-hull.js`, from Game.ini BBX/BBY/BBZ
and EyeHeight ×32, replace 22×56:

- half-width 12.48
- height 57.92
- eye 54.08

These modules use them: `collision.js`, `gameplay.js`, `beam-contacts.js`,
`enemies.js`, `enemy-flight.js`, `environment-interactions.js`, the
first-person eye in `world.js`, and the perception module. Hand-built tests
designed for the old box now give their controllers that fixture box
(`tests/movement-recovery.test.mjs`) or derive positions from the constants.

**Limitation:** a campaign rerun is still needed to confirm tight passages.

<a id="d2"></a>
## D2. Held jump

The grounded launch now reads the held button (`collision.js`), so holding
Jump relaunches on landing as in the original. The airborne SuperSkippie still
needs a fresh press. This is checked in `tests/player-abilities.test.mjs`.

<a id="d5"></a>
## D5. Default camera framing

Superseded on 28 October 2026 by a full rebuild of the camera and steering
from the original code; see [native camera](native-camera.md). The first D5
change applied the −27° preset row to full *forward* input. Natively that row
is for **backpedalling**: the original's forward is −z, so move z = +1 means
backward. It also blended rows on its own clock. Both are corrected in the
rebuild.

<a id="d8"></a>
## D8. Camera return and trigger edge cases

- Disabling a CameraTrigger no longer clears its active view.
- With `CamActivateOnEnable`, every Enable re-activates the view within
  `MaxTriggerTimes`, without CommandOnEnter.
- Re-activating the active view does nothing.
- Mode 4 with `CamTimeInMode` 0 expires on the next update.
- Death restores the normal camera.

Files: `source/script-host.js`, `source/gameplay.js`. Tests are in
`tests/native-parity-review.test.mjs`.

<a id="d9"></a>
## D9. MultiplyVolume

`0x57f1a0` scales only the playing music instance. A newly started track
begins at full gain, and re-selecting the same track keeps its gain
(`source/script-host.js`).

**Conflict:** the catalogued early boss music (combat music when an attack
starts) can start a new track. That track now resets any earlier
MultiplyVolume, where the old port carried it over. No shipped script relies on
the carried value.

## Documented only

- **D4. Guardian Easy settings:** a malformed section header makes the
  original ignore the Easy block. The port keeps its repaired values as a
  content correction.
- **D6. Retry screen:** the native “Opnieuw proberen? Ja/Nee” screen is not
  restored. The pause menu's **Opnieuw** uses the native entry state (item 3).
- **D7. Unreachable script APIs:** EnableWeapons, LooseAllWeapons, KillPlayer,
  RespawnPlayer and Say differ from the original, but no shipped script calls
  them.
- **D10. Sight cadence:** the original checks sight every 500 ms. The port
  checks every frame, with the second ray only when the first is blocked.
  This was not changed.

<a id="validation"></a>
## Validation

- `npm run web:refresh` regenerated `src/game.bundle.js` (144 modules). The
  logs are under `temp_work/claude-native-parity/logs/`.
- The unit suite (`node --test tests/*.test.mjs`, without
  `enemy-ambush-flight`) gave 1531 passing and 56 failing tests before the
  test removals described below.
- A baseline was rebuilt from the 2026-10-26 Android bundle source map in
  `temp_work/claude-native-parity/baseline/`. It fails 57 tests in the same run.
- All 56 current failures also fail in the baseline (`diff-failures.py`). One
  shows as new only because it was renamed; it fails at the same pre-existing
  distance-attenuation assertion.
- `tests/enemy-ambush-flight.test.mjs` does not finish within 120 s in either
  tree.
- Old-behaviour assertions were changed only where an approved correction
  changes the expected value, and each change carries a comment. Fixture-only
  changes (box-sized geometry, fake host methods) are labelled as such.
- **Browser scenes (28 October).** Playwright's Chromium (Chrome for Testing
  145.0.7632.6) is installed at `~/.local/share/ms-playwright`. All 112 scene
  scripts ran sequentially with isolated browser profiles, through
  `temp_work/claude-native-parity/run-scenes.sh`.
  - Many older scenes start chapters 2–5 directly, which the campaign lock
    refuses on a fresh profile. The harness preload `unlock-preload.mjs` seeds
    unlocked progress when a page has none.
  - Result: 58 scenes pass and 54 fail.
  - The baseline (with real copies of `assets/`, `data/` and `three`, so its
    server can serve them) fails all 54 at the same assertion.
  - Many of these report 0 rendered pixels or time out, which points to
    headless WebGL in this container rather than to the game.
- **Scene expectations that the approved corrections changed, now updated:**
  - `death-save`: the last attempt is played at 0 lives.
  - `door-activation`: RedCat waits out the scripted stair and chapel-floor
    overviews (modes 2–4 hold input), then steps onto the floor.
  - `prop-camera`: a fixed overview holds attacks.
  - `camera-wall`: wall position and confined fixtures use the native box;
    the old 145-unit framing distance is not asserted.
  - `knight-attack-music` and `target-eligibility`: the profile owns the earned
    basic shot, because adventure chapters no longer get `StandardSkill`.
  - While checking the chapel, I confirmed that a lift waiting under RedCat
    after an overview resumes as soon as he steps onto it, so there is no
    soft-lock.

### Removed tests (28 October)

At the user's request, tests that no longer apply were removed. A test was
removed only when its subject was deliberately replaced; tests that point at a
remaining defect or only need a setup fix were kept.

- **Whole files:**
  - `tests/castle-tower-ambience.test.mjs` and `tests/cave-ambience-range.test.mjs`
    asserted the superseded 25 m, 18 m and 30 m ranges. The current ranges are
    in `spatial-audio.test.mjs`.
  - `tests/new-adventure-warning-scenes.mjs` was a historical harness for menu
    controls removed on 20 October.
- **Water tests:** the continuous-damage test, the lethal-water test and the
  moat contact lines assumed damage on the entry tick. Native triggers damage
  from the next tick (`trigger-contact-native.js`). The forest-pool test keeps
  its wet and dry checks.
- **Single assertions replaced by deliberate changes:**
  - native animation blending (`actor-collision`);
  - animator-side off-screen skipping (`actor-placement`);
  - D5 camera framing (`cheats`);
  - saved active explosions (`destructible-threshold`);
  - native particle clocks (`presentation`, `native-visuals`);
  - shared texture hand-over (`room-streaming`);
  - unlimited `MaxSwitchTimes` ≤ 0 (`targetable-props`);
  - touch spiders (`enemy-behavior`);
  - frozen pose copies (`gameplay-update-work`);
  - native Brutus shooter states (`patrol-boss`).

After the removals, 35 unit failures remained. Three read-only reviews
classified all of them as stale test setups for behaviour that still exists.
On 28 October their setups were repaired, without weakening what they check:

- **New helper `tests/support/bare-world.mjs`.** A world built without assets
  exposes its level only for pickup placement, so `attachGameplay` doesn't
  build the asset-loading effects. Used by `actor-collision`, `bat-ai`,
  `player-cheat-progress` and `world-entities`.
- **World and gameplay stubs:** world stubs gained the player state, settings
  and environment velocity that `world.update` reads (`cheats`,
  `enemy-animation`).
- **Pose changes:** frozen poses are replaced instead of mutated
  (`actor-placement`).
- **Queued button presses:** tests run the controller updates that apply them
  (`script-host`, `world-action-sounds`, `world-brush-state`).
- **Pending SetTo:** a pending `SetTo` is replaced by seeking the timeline
  (`script-host`, `world-entities`).
- **Visibility:** scripted remote cameras are used where the conservative
  view-culling fallback is under test (`world-model-visibility`,
  `world-streaming-face-visibility`).
- **Native timing and randomness:**
  - stone-ambush wake time (`difficulty`, `projectile-hazards-integration`);
  - projectile catch-up limit (`difficulty`);
  - randomised motion rates (`enemy-behavior`, `gargoyle-blast`; the salvo
    gap tolerance allows the one 0.01 s tick a native wait spends arming);
  - even hit rolls (`bat-ai`);
  - trigger phases (`gameplay`).
- **Current data shapes:**
  - `castShadow` light records (`world-effects`);
  - restore `lightState` (`explosion-cohort-reuse`);
  - pooled knight debris (`enemy-death-effects`);
  - an animator under the state animator (`enemy-combat-effects`);
  - the game camera's far plane (`presentation-renderer`);
  - an authored path for Bone Brutus (`patrol-boss`);
  - the widened hearing radius (`gameplay-audio`).
- **`enemy-ambush-flight`:** it had hung since before this work. The spider
  test placed RedCat on the landing point, so the spider rested on his head
  forever. He now stands beside it, and the loop is bounded. The Witch's
  "flight continues" assertion assumed relocation after a salvo; the native
  closer move keeps her firing in place while RedCat is in range.
- **`package-metadata`:** it failed intermittently because electron-builder
  writes to stdout, which corrupts the parallel runner's messages. Its logger
  now writes to stderr.

`npm test` now passes 1586 of 1586 tests, in four consecutive complete runs.
One possible save/load defect remains recorded, not fixed: a Bone Brutus
without an authored path (none in the shipped levels) is treated as a legacy
save by the migration in `gameplay.js`.

<a id="coverage"></a>
## Coverage

| System | Compared | Changed | Not compared / open |
| --- | --- | --- | --- |
| Player damage, death, lives, respawn | Receivers, timers, protection | 1, 2 | Native retry screen (D6) |
| Campaign flow, retry, highscore, skills | Retry loader, completion menu, StandardSkill | 3, 4, 5 | Menu behaviour after “Nee” |
| Enemy perception and melee | Sight, rays, knights, contact | 6, 7 | 500 ms sight cadence (D10) |
| Bosses | Dungeon Max, Jester, Brutus, Witch states | 8, 9, 10 | Guardian subclass, poison frog overrides |
| Enemy death | Die states, drop-dead | 11 | — |
| Gameplay audio | Voice wrapper, boss tables, charge, locks | 12, 13 | Gargoyle gain 1.5 call (`0x40c7d7`) not applied |
| Cutscenes and cameras | Stop fade, modes 1–4, trigger edges | 14, D5, D8 | Camera sway keys, subtitle box layout |
| Effects | FlashEffect | 15 | Native flash alpha curve |
| HUD and pickups | Score cards, hearts, item contact | 16, 17 | HUD portrait animation |
| Movement and collision | Box, floor slope, held jump | 17, D1, D2 | Campaign rerun with the new box |
| Music | MultiplyVolume | D9 | — |
| Scripts | Unreachable APIs | — | D7 documented only |
