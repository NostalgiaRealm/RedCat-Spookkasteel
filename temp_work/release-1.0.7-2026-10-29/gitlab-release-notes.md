Version 1.0.7 makes the touch controls comfortable again after the camera and steering were rebuilt from the original in 1.0.5 and 1.0.6: the touch stick controls speed and direction smoothly, and the **Lopen** button works again. Existing player profiles, saves, recovery history and settings keep working without conversion or manual intervention.

## Touch Controls

- **Analog touch stick:** How far you push the stick now sets RedCat's speed, so a light push walks him slowly instead of running at full speed. He heads in the direction you push, relative to the camera, at any angle, and pulling back makes him back up. A light push also turns him more gently.
- **Lopen works again:** Tapping **Lopen** switched slow walking on and immediately off again on some touch screens. It now stays on until you tap it again.
- **Slower in every direction:** With **Lopen** on, RedCat now walks more slowly in every direction, including backing up, at the original's walk-to-run ratio.
- **A deliberate difference:** The original game only had digital controls. The analog touch stick is recorded as an intentional change in [docs/intentional-fixes-and-findings.md](docs/intentional-fixes-and-findings.md). Keyboard and controllers keep the original steering.

## Project and Documentation

- **Original version:** The README now records which original version the port and the decompilation are based on: the original disc (v 1.0.0.20, 2 oktober 2000) with the Windows 98 patch, v 1.0.1.0, 19 juni 2001.
- **Cleaner repository:** Old test screenshots and reports (`artifacts/`) were removed from the repository; they remain in the git history. See [docs/project-cleanup-2026-10-29.md](docs/project-cleanup-2026-10-29.md).
- **Up-to-date documentation:** The status and remaining-work pages now match the current state of the port.

## Tests

- **All tests pass:** All 1632 unit tests and all 111 browser scenes pass. New tests cover the analog touch stick and the **Lopen** tap.

## Save Compatibility

- **Unchanged:** No save data changed in this release. Storage origins, keys, player IDs, export format and recovery history stay the same.

## Release Scope

- **Updated the release version to 1.0.7:** These notes cover changes after the **1.0.6 release commit, `f0655a55b`**.
- **Included desktop and Android packages:**
  - **Desktop:** Linux, Windows and macOS downloads cover x64 and ARM64.
  - **Android:** A signed direct-install APK and a Google Play AAB, with version name 1.0.7 and version code 9.
  - **Signing:** Windows packages remain unsigned. The macOS bundles built on Linux remain unsigned and not notarized. No Google Play upload or approval is implied.
- **Original decompilation:** The complete original decompilation archive, its checksum and its file manifest are attached, as with every release.
