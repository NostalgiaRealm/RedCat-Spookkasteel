Version 1.0.5 brings gameplay, audio, cutscene and camera behaviour closer to the original game, based on a new review of the original executable. The third-person camera and steering are rebuilt from the original logic. Mouse and touch look stay as direct as in 1.0.4, and the camera now moves smoothly when RedCat backs into a wall. Existing player profiles, saves, recovery history and settings remain compatible without conversion or manual intervention.

## Gameplay Corrections From the Original Game

- **Lives, death and respawn work as in the original:** Death now holds RedCat for two seconds, and the life is deducted when he respawns. Three lives give four attempts, with 0 shown on the last one. The number of starting lives comes from Game.ini. Respawn gives five seconds of protection, which also covers water and ooze.
- **Every hit counts:** The port's 0.65-second immunity after a hit is removed. As in the original, only the hurt voice is throttled: it waits for a random 1.0–1.5 seconds and for the previous voice to finish.
- **Retrying restores the chapter-entry state:** Restarting after game over brings back the lives, health, maximum health, mirror parts, abilities and total score you had when entering the chapter. It no longer starts from zero.
- **Finishing the adventure closes it out:** The final debriefing records the highscore, and a completed final chapter is no longer offered as an adventure to continue.
- **Chapter starting abilities apply only to quick play:** An adventure keeps the abilities you actually earned. Previously, for example, the Tower granted BIG BENG even if the optional Caves fairy was missed.
- **Knights strike with their sword:** Damage now comes from the animated sword, so RedCat must be within its reach in front of the knight. Knights keep swinging at the original pace while they see or remember RedCat, and play no strike sound.
- **Enemy sight follows the original:** Enemies look from 0.8 of their own height, with no artificial height limit. They aim at RedCat's centre first and retry above his head if blocked. Standing enemies keep turning toward RedCat while they remember him.
- **Bosses behave as in the original:**
  - **Dungeon Max** keeps cycling through his salvo, rise, look and lower phases, and rises the full scaled height.
  - **Jester Max** stays hidden until his teleport particles finish, and only the teleport after a salvo protects him. His first teleport starts as soon as he is enabled, and Easy and Hard use the original salvo defaults.
  - **Unaware Brutus and the Witch** wait or fly at random instead of hunting RedCat.
- **Defeat events and ghost deaths:** Both Brutus variants, both Max bosses and zombies now trigger their defeat scripts when the death animation ends, so the boss scenes start about two seconds later. Defeated ghosts sink to the floor while fading over five seconds.
- **Score and hearts:** Heart containers no longer add 75 points, but still show the 75 card. The heart display rounds health down, so fractional water damage never shows an extra half heart.
- **Contact and movement details:**
  - RedCat's collision box has the original's size.
  - Doors and buttons measure their activation range from RedCat's eye height.
  - Pickups are collected when RedCat's box overlaps them, without a line-of-sight check.
  - Floors are walkable up to the original slope limit.
  - Holding Jump relaunches on landing.

## Audio

- **Boss and enemy voices:**
  - **Bosses:** Dungeon Max, Jester Max and the Witch now speak their original lines.
  - **No cut-offs:** A new enemy sound no longer cuts off one that is still playing.
  - **Bats:** Their idle sounds are quiet loops.
  - **Idle chatter:** Walking no longer triggers chatter. Only frogs, zombies, guardians, ghosts and bats chatter, and only while unaware of RedCat.
  - **Lethal hits:** These play the hurt sound before the death sound.
  - **Touch attacks:** These are silent, as in the original.
- **Door sounds:** Locking and unlocking a door plays its original click. Trying a locked door that gives feedback plays the original error sound, which replaces the port's "Deze deur zit op slot." message.
- **BIG BENG charge:** The charge sound plays once instead of looping.
- **Music volume:** A script's music volume change now applies only to the track that is playing, so a new track starts at full volume.

## Cutscenes, Scripted Cameras and Effects

- **Cutscene endings:** Control and the HUD return only after the closing fade. The letterbox bars fade in and out at the original 10% height, and subtitles appear once the opening fade has finished.
- **Overview cameras:** Fixed and route overview cameras now hold RedCat in place and block attacks while they are shown, as in the original.
- **Camera triggers:** Disabling a trigger no longer cancels its view. A trigger set to activate on enable does so each time it is enabled, within its limit. A route camera with no time set ends at once, and dying restores the normal camera.
- **Tower mirror flash:** The full-screen white flash is replaced by the original one-second burst of light rays at the mirror.

## Camera and Steering

- **Rebuilt from the original camera logic:**
  - **Following:** The camera trails RedCat with the original's lag and uses its own heights, distances and angles for moving, backing up and standing still.
  - **Catching up:** It moves toward its target position at the original speeds.
  - **Walls:** It keeps a clear line of sight when RedCat stands near a wall.
  - **Lock-on:** While attacking a locked target, the camera tilts toward it.
- **Camera-relative steering:** The keyboard and movement sticks steer RedCat toward the direction the camera faces, as in the original:
  - **Turning:** RedCat turns at the original rates, and turning on the spot is slower.
  - **Backing up:** Pressing back walks him backward.
  - **Sidestepping:** The A and D strafe keys sidestep without turning him.
- **Direct mouse and touch look:** As in 1.0.4, looking left or right turns RedCat himself, and the camera turns with him at once. Looking up and down is immediate too. The controller's right stick behaves the same way.
- **Smoother wall camera:** When RedCat backs into a wall, the camera now rises smoothly over him, without jittering upward, and never ends up inside his model. It comes back down once there is room. Under a low ceiling it switches to a clear side view. Only when there is no view at all is RedCat's model hidden.
- **First-person view:** The first-person camera remains available.

## Tests, Tools and Documentation

- **Full unit test suite passes:**
  - **Result:** All 1596 unit tests pass.
  - **Repaired:** Outdated test setups were brought up to date.
  - **Removed:** Tests for deliberately replaced behaviour, such as the old ambience ranges and the old flat-menu check.
  - **Fixed:** A test file that hung forever and an intermittently failing packaging test.
  - **Added:** New tests for the corrected behaviour and the rebuilt camera.
- **Browser scenes checked:** The browser scene scripts were run in a headless Chromium. Every scene that passed before this work still passes. The remaining ones fail at the same checks as before, mostly because the headless environment draws no graphics.
- **Documented the review and the camera:** [docs/claude-native-parity-review.md](docs/claude-native-parity-review.md) records each correction with its original-code evidence. [docs/native-camera.md](docs/native-camera.md) describes the rebuilt camera and the port's additions.

## Save Compatibility

- **Older saves load as before:** New save details are optional and get safe defaults.
  - **Deaths in progress:** A save made during the death animation does not lose a second life.
  - **Defeat events:** An older save does not re-run a defeat script.
  - **Collision box:** Saved positions near walls are freed by the existing movement recovery.
  - **Unchanged:** Storage origins, keys, player IDs, export format and recovery history.

## Release Scope

- **Updated the release version to 1.0.5:** These notes cover changes after the **1.0.4 release commit, `940268202`**.
- **Included desktop and Android packages:**
  - **Desktop:** Linux, Windows and macOS downloads cover x64 and ARM64.
  - **Android:** A signed direct-install APK and a Google Play AAB, with version name 1.0.5 and version code 7.
  - **Signing:** Windows packages remain unsigned. The macOS bundles built on Linux remain unsigned and not notarized. No Google Play upload or approval is implied.
- **Test scope:**
  - **Source:** The source was checked with the full unit suite and the browser scenes described above.
  - **Packages:** The built packages themselves were not run.
  - **Playthrough:** No full campaign playthrough was done with the new camera, steering and gameplay corrections, and there was no side-by-side comparison with the original game.
