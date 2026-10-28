# Approved proposal (extracted from the session transcript, 2026-10-27)

## Confirmed defects: proposed work, by player impact

**1. Death, lives and respawn**
- **Now:** a life is deducted at the fatal hit and the third death ends the game. Respawn starts when the 1.4 s death clip ends, and protection afterwards lasts about 3.3 s.
- **Original:** `0x433fd0` deducts the life about 2.0 s after death, after two sequential 1000 ms timers. `0x439ce0` keeps respawning while the count is 0 or higher, so 3 lives give four attempts and the HUD shows 0 on the last one. Respawn sets a 5 s protection that also blocks water and ooze damage, cleared at `0x4dab7f`.
- **Fix:** a 2.0 s death phase holding the final pose, then deduct and respawn while the count is 0 or more. InitialLifes is read from settings, with one 5 s protection window. Files: `gameplay.js`, `player-lifecycle.js`.
- **Risk and checks:** counter values in saves stay identical. Update `tests/player-lifecycle.test.mjs`, and check three frame rates plus pause and reload during death.

**2. Every hit counts; only the hurt reaction is throttled**
- **Now:** any hit grants 0.65 s of immunity at `gameplay.js:289`. This has been there since the 0.9.1 import, with no native source.
- **Original:** receiver `0x433820` applies every hit unless RedCat is dead or respawn-protected. A random 1.0 to 1.5 s timer, plus a check that the previous hurt sound has finished, gates only the hurt sound. The hit clip follows the health drop.
- **Fix:** remove the damage cooldown and gate the hurt sound natively, in `gameplay.js` and `gameplay-audio.js`.
- **Risk and checks:** crowd fights get harder, as in the original. Add unit tests for close hits and liquid ticks.

**3. Retry after game over restores the chapter-entry state**
- **Now:** the retry starts a fresh chapter with 0 score, 3 lives, 10 maximum health and no mirror parts. The next save then overwrites the campaign totals.
- **Original:** the retry loads `0x439f40`, which restores lives, health, maximum health, mirror parts, abilities and total score as they were at chapter entry. It zeroes potions and the chapter's own score.
- **Fix:** store the chapter-entry state as a new optional save field, and use it for the game-over retry and the dead-save restart. Old saves keep today's behaviour.
- **Checks:** a scene that enters the Castle with upgrades, loses every life and retries.

**4. Finishing the adventure closes it out**
- **Now:** after the outro, Continue replays the Tower overview and outro. The highscore is stored only when the Highscores page is opened.
- **Original:** the menu at `0x564eec` writes the highscore at completion, resets the adventure and sends the next Avontuur to the difficulty page.
- **Fix:** store the highscore at the final debriefing and mark the adventure finished. The completed save stays behind the existing overwrite warning, and the one-best-per-player rule stays. Files: `main.js`, `original-menu.js`.

**5. Chapter starting abilities only for quick play**
- **Now:** every chapter adds its StandardSkill mask, so the Tower grants BIG BENG even if the optional 30-potion Caves fairy was missed.
- **Original:** `0x439f40` applies StandardSkill only for quick play, at `0x43ab52`. Adventure play keeps the carried abilities.
- **Fix:** apply it only to chapters started from Snelspel. Earned-ability carry and the Caves BIG BENG correction stay, and saves keep their stored masks.

**6. Knight melee: 22 Castle knights**
- **Now:** each swing needs RedCat visible and in range, then waits 0.4 s, for a 1.84 s cycle. A hit lands anywhere within AttackRange plus 5 units, in every direction, and Knight4.wav plays on every hit.
- **Original:** `0x4050e0` swings every 1.44 s while RedCat is seen or remembered. Damage comes from a sword-tip trace, `0x42bd00`, reaching about 91 to 111 units in front. Knights never play a strike sound.
- **Fix:** a small knight attack module that tests the strike from the animated sword bone. It must also work while the artwork is streamed out.
- **Risk:** the Castle gets harder, as in the original.

**7. Enemy sight and facing**
- **Now:** a port-only height limit blocks sight, and the sight ray starts at a fixed 25 units. Green bats on Easy and Hard lack a rear sense range. Standing enemies stop turning as soon as RedCat leaves view.
- **Original:**
  - `0x423800` has no height test.
  - The eye sits at 0.8 of the enemy's own height, and a blocked ray is retried above RedCat's head.
  - A missing SenseRange defaults to 50.
  - Knights, gargoyles, plants and both Max bosses keep turning toward RedCat while they remember him.
- **Fix:** in `gameplay.js` and `enemy-ambush.js`, including the spider rays. The second ray runs only when the first is blocked.

**8. Dungeon Max**
- **Now:** after each lowered cycle he waits until RedCat is visible and within AttackRange, and he rises 40 units.
- **Original:** `0x401d00` loops shoot, rise, look and lower for as long as he lives, and the rise is 56 units, scaled by MachineScale.
- **Fix:** in `boss-ai.js`; the expectations in `boss-phases.test.mjs` change.

**9. Jester Max**
- **Now:** he hides for InvisibleTime, every teleport is protected, and he waits to see RedCat before the first teleport.
- **Original:**
  - `0x404970` keeps him hidden and then protected until the teleport particles finish, and never reads InvisibleTime.
  - Only teleports after a salvo are protected, and the first teleport starts on Enable.
  - Easy and Hard use defaults of an average salvo of 3, a spread of 0.05 and a minimum distance of 100.
- **Fix:** in `boss-ai.js` and the settings defaults. Saves in the hidden phase keep their remaining time.

**10. Brutus and the Witch when RedCat is unseen**
- **Now:** an unaware Brutus walks the arena, and the Witch hovers in place.
- **Original:** Bone Brutus waits at his spawn, which is about 1,240 units from where he is enabled, and Mushroom Brutus returns to idle. The Witch resumes random flight.

**11. Death events and ghost deaths**
- **Now:** every enemy fires its after-destroy event at the fatal hit. Dead ghosts hover and fade only after their clip.
- **Original:** both Brutus, both Max bosses and the zombies fire it when the death clip ends, so three boss scenes start about 2.3 s later. Ghosts sink to the floor while fading over 5 s from the moment of death.
- **Intent:** defeated enemies keep finishing during dialogue.

**12. Enemy and boss voices**
- **Now:**
  - Dungeon Max, the Jester and the Witch are silent.
  - A new cue cuts off the previous one.
  - Bats play their idle as a full-volume one-shot.
  - Touching enemies play their attack recording on contact.
  - Idle chatter plays only while the enemy sees RedCat.
- **Original:**
  - The Max and Witch voices play.
  - `0x423be0` drops a new cue while the previous one still plays, and a lethal hit requests hurt before death.
  - Bat idles are quiet loops at 0.4 volume, and contact is silent.
  - Only frogs, zombies, guardians, ghosts and bats chatter, and only while unaware.
- **Audible consequence:** those five families become noticeably more talkative.

**13. Door lock sounds and the BIG BENG charge**
- **Now:** Lock and Unlock are silent, and the charge sound loops while held.
- **Original:** `0x4cd800` clicks on every lock change; five Caves doors lock at the start and unlock later. The charge sound plays once, with loop flag 0.

**14. Cutscene endings and scripted cameras**
- **Now:** control and HUD return the moment a cutscene stops. RedCat can walk away during overview cameras, and offset-camera regions sit lower and closer.
- **Original:**
  - Control and HUD return when the stop fade ends, usually after 1 s, and the bars fade.
  - Fixed and route cameras freeze RedCat, mainly in the Caves lab overviews.
  - The 16 offset regions place the camera from hull height multiples, in `0x4598e0`.
- **Intent:** skipping, invulnerability, the wall solver and mouse look stay.

**15. Tower mirror flash**
- **Now:** a full-screen white flash for 0.6 s.
- **Original:** a one-second burst of ten textured rays at the pedestal. The fix reuses the pickup artwork batch and removes the overlay.

**16. Score and hearts**
- **Now:** heart containers add 75 points, and 8.5 health shows a half heart.
- **Original:** `0x43d290` shows the 75 card but adds no points, and the HUD truncates health before drawing.

**17. Contact parameters**
- **Door and button proximity:** the original measures from eye height, so the Caves lab doors open from the lower floor and every proximity door responds about 3 units sooner.
- **Pickups:** the original uses a box overlap with 1 unit of tolerance and no sight ray.
- **Walkable floors:** the original needs a normal above 0.7 rather than 0.65.

## Your decisions, and what is still unexplored

- **D1. Player hull.** The original box is 24.96 by 57.92 units against the port's 22 by 56. Matching it risks saved positions starting inside walls and needs a campaign rerun. I recommend deferring it.
- **D2. Holding jump.** The original relaunches on landing while Jump is held. I recommend keeping the port's press-to-jump as a catalogued control adaptation.
- **D3. "Deze deur zit op slot."** This toast is a port addition. The original is silent except for an error sound on two doors, and I recommend matching that.
- **D4. Guardian Easy settings.** A malformed header makes the original ignore the Easy block. I recommend keeping the port's repair as a documented content correction.
- **D5. Default camera framing.** The original sits closer and lower. I recommend keeping the intentional port camera.
- **D6. Game-over screen.** Restoring the original "Opnieuw proberen? Ja/Nee" screen is optional.
- **D7. Unreachable script API details.** EnableWeapons, LooseAllWeapons, KillPlayer, RespawnPlayer and Say differ, but no shipped script calls them. I recommend documenting only.
- **D8. Camera return and trigger edge cases.** These have only one trace so far, so I recommend a second check before any change.
- **D9. Music ducking.** The difference is inaudible in the shipped game, so I recommend documenting only.
- **D10. Sight cadence.** The original checks sight every 500 ms. Adopting that would offset the extra ray from item 7.
- **Not yet compared:** subtitle box layout, the camera sway keys, HUD portrait animation, and the menu's behaviour after "Nee".

## Unchanged items, documentation, coverage and tools

**Stays as is:**
- Potions reset per chapter, and the carried score matches the original.
- The doubled Castle line sits in unreachable script code.
- Potions never respawn.
- Shipped beams have no idle loop.
- The contact sight check and the stair cadence are documented adaptations.
- Every catalogued intentional change stays.

**Stale documentation to correct:**
- `docs/hud-targeting-cutscene-skip.md:21` describes the HUD scaling incorrectly.
- `docs/loading-screen-native.md:23` says there is one adventure mode.
- `docs/actors.md:13` says blending is missing.
- `docs/boss-phases-native.md:32` relies on InvisibleTime.
- `docs/campaign-menu-native.md:25` calls the Tower card rule unexplained; it is the completion flag.
- `docs/debriefing-and-hearts-native.md:63` credits 75 points to heart containers.
- `docs/player-abilities-native.md:29` presents the starting masks as adventure defaults.
- `docs/painting-spider-native.md:120` gives the wrong sight-ray targets.
