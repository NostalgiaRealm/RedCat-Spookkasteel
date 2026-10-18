# Fleurifee ribbon fade

Recovered on 2026-10-14 with REA from the installed Dutch `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
These findings come from executable instructions, not a recorded original-game
playthrough. Addresses below are executable virtual addresses.

## Recovered behavior and correction

The original attenuation is linear, but the earlier reconstruction used the
wrong starting opacity and independently aged every frame-sized segment. It also
used the energy-beam texture and treated the sampling distance as the width.

| Property | Original code and current port |
| --- | --- |
| Artwork | `PTrail.bmp` plus `PTrail_a.bmp`, imported without resampling |
| Color | RGB `255,255,25`; the fade changes alpha, not RGB |
| Initial alpha | `100/255`, approximately 39.2%, rather than fully opaque |
| Attenuation | `(100/255) × max(0, 1 − ageMs/800)` |
| Visibility cutoff | Submit only while native alpha is greater than `5/255` |
| Quad shading | One alpha value shared by all four corners |
| Width | Half-width 0.96, full width 1.92 world units |
| Sampling | Replace the live endpoint every update; commit a new point only after moving **more than 1.6 units** from its anchor |
| Time-based sampling | Disabled; 800 ms is the fade duration, not an emission interval |
| Ribbon clock | Newest endpoint's saved timestamp, not the current render clock |

At 0, 200, 400 and 600 ms, alpha before the texture mask is respectively
`100/255`, `75/255`, `50/255` and `25/255`. The cutoff is around 760 ms. The original
float32 reciprocal of 255 and x87 arithmetic leave alpha infinitesimally above
five at exactly 760 ms; the port also draws that boundary sample and drops 761 ms.
Small sub-pixel numerical/rasterization differences remain between engines.

The first update creates two identical points, so it creates no visible launch
segment. Every subsequent update replaces the last point's position and integer
millisecond timestamp. Crossing the distance threshold appends one duplicate live
endpoint, at most once per update. The first quad uses its **second** point's
timestamp; later quads use their **first** point's timestamp. Old history retains
a preceding point when it is trimmed. These details determine the actual visible
fade along each curve; they cannot be reproduced by an arbitrary easing function.

The renderer uses the camera's forward direction to orient the ribbon and maps
the complete original texture onto each segment: U along its length and V across
its width. The original PTrail mask fades toward both edges across the width.
Literal Genesis UVs use `flipY=false`; this mask is vertically symmetric, so the
important correction is its orientation across the ribbon. Fleurifee now has a
separate PTrail batch, leaving portal and beacon energy-beam effects unchanged.

## Disappearance, saves and retained adaptations

The center and five orbiters share the authored lifetime and are activated
together. Native rendering checks the orbiter's active flag before drawing its
ribbon. Normal expiry therefore stops these ribbons immediately. The separate
50-slot departure particle pool continues its own lifetime and fade; there is no
independent 800 ms ribbon afterimage. This corrects the earlier documentation.

Saved ribbon segments now include their orbiter and both endpoint timestamps
(`trailFormat: 2`). Active and departing visual state still restores directly,
without replaying random motion, appearance audio or the departure burst. Old
segment-only saves migrate their retained paths; older age-only saves keep their
existing fallback. Rendering alone changes neither history nor opacity.

The existing fixed 60 Hz simulation, per-fairy random stream, dialogue lifetime
extension and immediate cleanup when skipping a cutscene remain intentional
adaptations. Normal scripted disable still uses the port's clean departure
instead of reproducing the native enabled-list removal quirk. Invisible stopped
history is discarded after 800 ms; storage remains capped at 48 segments per
orbiter (240 total), with no growing list or trajectory replay during rendering.
No audio or music scheduling was changed.

## Evidence and reproduction

Full REA records, disassembly, decoded constants and the detailed findings are
retained in `temp_work/fairy-ribbon-fade-2026-10-14/`. Its
`rea-evidence-bundle.json` contains 43 complete records; `evidence-index.md` maps
each record to its request and resolved function. Principal evidence:

- Fairy setup `0x478a00`, specifically `0x478f18–0x478fbb`:
  `ev_9895cba9eb2aff69ec70dec03e59b4a7a2078668f6a79c67f03db49dcc73c476`.
- Shared update `0x5871f0`:
  `ev_9e8833369f9174949c825afbbc271055a999216b56fa21aedc06af5821e51987`.
- Shared render `0x587550`, timestamps/fade `0x587871`, `0x587a2a–0x587b54`:
  `ev_d24dbf25e9cc08899b0ef407a7c5f914c925186f882fad847b7332de59938d14`.
- PTrail bitmap/mask initializers `0x4781c0`, `0x4780c0`:
  `ev_4bb1abcfc0df41c4d6a8dbc7a8eee31a0736a1ec79bd25a71c4b4130b4725691`,
  `ev_80f72afe2ba2ef426ef8d253dba92ce0ad596cf6e8886eb71479cfc69d181437`.
- Active-orbiter render gate `0x47b160`:
  `ev_b91426b72c3cc499e8c91f658bb77b6a08072746ee62b085d28ef598b45b76d2`.

Focused checks:

```sh
node --test tests/fairy-ribbon-native.test.mjs tests/fairy-native-state.test.mjs tests/fairy-save-state.test.mjs tests/fairy-skip-audio.test.mjs
node temp_work/fairy-ribbon-fade-2026-10-14/fairy-ribbon-browser-check.mjs
```

These cover the fade, live endpoint, cutoff, original artwork, actual GPU vertex
alpha/width, fixed-step consistency, native expiry, save migration, dialogue skip
cleanup and unchanged audio lifecycle. Browser checks use isolated retained
profiles; they do not overwrite the player's saves. No release build is needed.

Verification on 2026-10-14: all 26 focused tests passed (seven ribbon cases plus
19 existing lifecycle/save/skip cases). The final browser check rendered 228
ribbon segments with the expected UVs, width and vertex alpha; active and
departing snapshots restored exactly, and departure left zero ribbons with
50 burst particles still active. There were no browser errors or console
warnings. The retained result and inspected screenshots are in
`temp_work/fairy-ribbon-fade-2026-10-14/browser-2026-10-13T23-20-38-763Z/`
(folder timestamp is UTC). This validates the implementation against recovered
code; it does not claim a pixel-identical comparison to an original-game capture.
