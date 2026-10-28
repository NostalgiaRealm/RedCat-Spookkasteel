Version 1.0.6 continues the work of 1.0.5: more of the game now follows the original executable, including the original game-over screen, the way enemies notice RedCat, and several effects and sounds. It also adds camera distance keys and a cheaper wall camera. Existing player profiles, saves, recovery history and settings keep working without conversion or manual intervention.

## Game Over and Retry

- **The original retry screen:** Losing your last life now shows the original "Opnieuw proberen? Wil je dit level opnieuw spelen?" screen with its **Ja** and **Nee** buttons, instead of the pause menu.
  - **Ja** is selected first. Left and right choose; Fire or Jump confirms. Escape does nothing, as in the original.
  - **Choosing:** As in the original, the screen appears at once without a fade, and any sideways mouse movement switches the choice. A shot button still held when the screen appears confirms **Ja** straight away.
  - **Also works with:** Enter, clicking or tapping a button, and controllers.
  - **Ja** restarts the chapter as you entered it. **Nee** returns to the main menu with **Avontuur** (or **Snelspel**) highlighted and leaves your save as it was.
  - **Doorgaan** after **Nee** continues from your last real save. The original would restart the chapter here; the port keeps your save on purpose.

## Enemies

- **How enemies notice RedCat:** Enemies look for RedCat every half second instead of every frame. They react to what they saw on their previous look, and they forget him exactly when their memory time runs out.
- **Enemies at a distance rest:** As in the original, an enemy only acts while RedCat is within 1600 units, and checks that distance every 14 updates. A new enemy first acts on its 14th update, a fraction of a second after it appears. Distant enemies no longer patrol on their own, which also saves work on slower devices.
- **Idle chatter:** Unaware frogs, zombies, guardians, ghosts and bats chatter back to back with the original timing, instead of after short pauses and a staggered start.
- **Sleeping enemies can be targeted:** A stone knight or a pile of bones can be targeted before it wakes, as in the original. The first shot on a stone knight or gargoyle wakes it without doing damage.
- **Easy guardians:** On Easy, guardians use the original's default values (5 health, slower and with a shorter reach), because the original never reads their broken Easy settings.
- **Knight swords:** The sword's reach is measured at the original's point on the blade. It also works when the knight is not drawn.
- **Gargoyle alert:** The gargoyle's alert cry is louder at a distance, by the original's rule.

## RedCat and Camera

- **Shooting stance:** Once RedCat has an ability, holding Fire makes him stand still to shoot. He still turns toward your direction, and the camera settles at its standing distance.
- **Camera distance keys:** Three new keys pick the camera distance: **Camera dichtbij** (1), **Camera verder weg** (2) and **Camera hoog** (3). You can change them in the key settings. The camera returns to the closest distance in each chapter. Custom keys you already set are kept; if 1, 2 or 3 is already in use, that new action starts without a key.
- **Field of view:** New players start with the original's 54° view. A field of view you already chose is kept.
- **Faster wall camera:** The camera that rises over RedCat at a wall needs far less work per frame while he stands still, without visibly changing how it moves.

## Effects and Messages

- **Tower mirror flash:** The light rays now grow and shrink, are drawn as the original's coloured triangles, restart each time the flash is triggered, and switch themselves off after one second. A save made during the flash keeps it.
- **Enemy health bar:** The enemy health bar follows the original's limits.
- **Script commands:** The script commands EnableWeapons, LooseAllWeapons, KillPlayer, RespawnPlayer and Say now behave as in the original. None of the shipped chapters use them.

## Fixes Since 1.0.5

- **Respawn protection:** The five seconds of protection after a respawn now last exactly five seconds; they ended one frame early.
- **Bone Brutus saves:** A save from an older version with a Bone Brutus that has no path no longer starts the wrong attack logic on loading.

## Kept on Purpose

- **Subtitles:** The subtitle box keeps the port's easier-to-read layout.
- **Steering:** A small turning glitch in the original's steering is left out.
- **Contact damage:** Contact damage from enemies still needs a clear line to RedCat, so enemies can never hurt him through a wall.

## Tests and Documentation

- **All tests pass:** All 1630 unit tests and all 111 browser scenes pass.
- **Cleaner test runs:** Browser scenes now write their screenshots and reports to an ignored folder instead of the repository. The remaining failing scenes were repaired, and two temporary scenes were removed.
- **Documentation:** [docs/claude-native-parity-review.md](docs/claude-native-parity-review.md) (entry L7) records every change with its evidence from the original game. [docs/intentional-fixes-and-findings.md](docs/intentional-fixes-and-findings.md) lists the deliberate differences.

## Save Compatibility

- **Older saves load as before:** All new save details are optional and get safe defaults.
  - **Enemies:** Their new sight and activity counters start fresh after loading an older save, as a reloaded chapter does in the original.
  - **Keys:** Stored key settings keep every custom key.
  - **Unchanged:** Storage origins, keys, player IDs, export format and recovery history.

## Release Scope

- **Updated the release version to 1.0.6:** These notes cover changes after the **1.0.5 release commit, `6dc8ea24e`**.
- **Included desktop and Android packages:**
  - **Desktop:** Linux, Windows and macOS downloads cover x64 and ARM64.
  - **Android:** A signed direct-install APK and a Google Play AAB, with version name 1.0.6 and version code 8.
  - **Signing:** Windows packages remain unsigned. The macOS bundles built on Linux remain unsigned and not notarized. No Google Play upload or approval is implied.
- **Original decompilation:** The complete original decompilation archive, its checksum and its file manifest are attached, as with every release.
