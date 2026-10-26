# Source release checks — 15 October 2026

These checks used the source in
`/home/rick/Documents/Rebuilds/RedCat Spookkasteel/RCSPOOK_NEW`, isolated
Electron/browser profiles and the installed imported assets. **No packages
were built.** These results do not certify a complete campaign playthrough,
a deployed website, physical mobile/controller hardware or Windows/macOS/ARM.
They complement the separate campaign progression checks.

The [15–18 October follow-up](campaign-validation-2026-10-18.md) subsequently
completed the earned five-level Normal campaign and documents the two resulting
source fixes, full outro after a startup retry, and remaining release/hardware
limits. The isolated checks below retain their original scope.

The About dialog now displays **0.9.9**. The packaging helper still requires an
explicit `REDCAT_PACKAGE_VERSION`; injecting `0.9.9` passed the installed
electron-builder schema for Linux and Windows without creating output or
changing `package.json`. The existing `dist/` contained builder logs/configuration,
not executable packages, so no existing release executable was validated.

## Relocated standalone lab

`RC_SHOVE_TEST` now resolves its profile, cache and other runtime files under
the parent's `temp_work/shove-investigation-2026-10-05/lab-runtime/`. Its Electron
runtime, Bash launcher, npm cache configuration and documentation agree on that
location. The lab was actually launched on Wayland, loaded its separate
`rc-shove://lab` scene and rendered successfully without page errors. It did not
read or change the main game's profile. Historical dependency-provenance paths
remain as a record of where those assets were originally copied.

## Desktop and browser controls

| Check | Observed result and scope |
| --- | --- |
| Linux source Electron | Intro video decoded and advanced. The actual XWayland window contained 5,304 sampled colors, with GPU compositing enabled. Native capture was 2560×1440. This is visible native-window evidence, not only a WebGL canvas readback. |
| Display settings | Switched through the actual menu between windowed and fullscreen. The game canvas retained the selected 1280×720 render dimensions in both modes. Electron reported the attached display at approximately 143.87 Hz; this does not establish that the game sustains that FPS. |
| Player saves | Created a second player through Spelerlijst, started and saved each adventure, switched back and loaded the first. Each player's level, position and inventory remained separate. Profiles and recovery databases were confined to the isolated test profile. |
| Controller | A simulated standard Gamepad API exercised menu focus/navigation, settings, held two-second cutscene skip, analog movement/look, jump, walk, held firing, camera toggle, pause, disconnect/reconnect and keyboard takeover. No physical controller was connected by this check. |
| Touch browser | Chromium's emulated Pixel 7 and CDP touch events exercised automatic touch detection, two-second skip, movement/look, simultaneous jump/fire and camera toggle. Turning touch off in settings survived reload. This verifies browser input integration, not physical Android/iOS device behavior. |

No page errors were recorded in the successful desktop, controller and touch
checks. The runs did not test Windows fullscreen, mobile thermal limits,
controller driver mappings, every WAV/video to its end, or every recovery-save
age. No main campaign progression was claimed from these short input fixtures.

## Graveyard performance fixtures

The circling fixture used ordinary movement/collision for **45 seconds** while
suppressing story camera interruptions and death so its route stayed repeatable.
After its initial 5.5-second warmup:

- 2,370 sampled frames rendered; none held/skipped the render call.
- Turning repeatedly caused no additional scenery chunk activations.
- 12,096 of 75,843 world vertices were resident, approximately **16%**.
- Main-loop synchronous CPU p95 was **9.4 ms** on this development machine.

Two separate activation fixtures approached the original `dknopa` button and
`graf1_trigger`. Their original scripts enabled zombies and those zombies moved
more than 70 units out of their grave starts. Across 2,794 sampled updates, no
update exceeded 50 ms. Activation-stage CPU p95 was 7.6 ms and 6.7 ms; later
chase-stage p95 ranged from 5.5 to 7.9 ms. The script VM reported no errors and
the bounded pursuit-trace assertion passed.

Those chase probes deliberately repositioned an invulnerable/noclip player to
repeat obstructed target positions. **They are performance fixtures, not
evidence of completing puzzles without cheats.** Timings measure synchronous
CPU work in headless Chrome, not physical-display FPS or GPU completion. Other
validation processes could run concurrently. These results do not guarantee
performance on a low-end device or eliminate every possible hitch elsewhere.

## Retained evidence and reproducibility

Retained harnesses, source hashes and reports are in
[`temp_work/release-housekeeping-2026-10-15`](../temp_work/release-housekeeping-2026-10-15/).
The compact [source validation report](../temp_work/release-housekeeping-2026-10-15/source-validation-summary.json)
links the results by check and distinguishes their scope. Disposable profiles
and captures were removed in the [22 October cleanup](../temp_work/cleanup-2026-10-22/README.md);
the historical observations remain in these reports:

- [Native desktop/profile run](../temp_work/release-housekeeping-2026-10-15/platform-1792090299506/report.json), including the recorded actual-window check.
- [Controller run](../temp_work/release-housekeeping-2026-10-15/controller-scenes-1792090080978/report.json).
- [Touch-only follow-up](../temp_work/release-housekeeping-2026-10-15/platform-1792090382460/report.json).
- [Circling measurements](../temp_work/release-housekeeping-2026-10-15/circling-verification-1792090130094/report.json).
- [Zombie activation measurements](../temp_work/release-housekeeping-2026-10-15/zombie-activation-1792090349959/report.json).
- [Standalone lab launch](../temp_work/release-housekeeping-2026-10-15/shove-launch/report.json).
- [Path/package schema checks](../temp_work/release-housekeeping-2026-10-15/report.json).

Earlier fixture attempts are retained too. Their corrected assumptions were:
the current menu focuses Stoppen first, profile switching refreshes optional
audio snapshot fields, and the raw touch label `Schieten` is capitalized by CSS.
These did not require game-code changes. The native run above completed its
desktop/save checks before that raw-label assertion failed; the separate
touch-only follow-up then passed. Source hashes identify the checked files;
later campaign fixes require their own relevant checks.
