# Source fixes — 22 September 2026

This historical pass addressed the reported presentation, combat and environmental
regressions. It updated source and imported assets only; Linux and Windows
packages were not rebuilt in that pass. Later corrections are identified below.
Run the current source as described in
[building.md](building.md); `Start-RedCat.sh` still prefers the existing package.

| Report | Source behavior and verification |
| --- | --- |
| RedCat turns away from Fleurifee | Native clock-face angle conversion is used both for initial spawn and scripted teleport. |
| Missing Fleurifee lights | Original masked glow, halos, rotating rays, star trails and dynamic light render. |
| Reversed Brutus/knights | Correct native initial heading; combat updates facing during locked attack animation. Rendered actor fronts were checked against the player direction. |
| Reversed introductory UFO | Native world-axis rotation composition replaces the incorrect local-axis order. |
| Large-fall pose on ordinary jump descent | Normal jumps retain the original full jump clip through descent; long-drop selection uses the recovered floor-gap rule. |
| New dialogue skip | Initially a three-second E hold, later changed to **two seconds** in `src/cutscene-skip.js`; “Overslaan” progress circle; original remaining callbacks complete and preserve outcomes. Touch/controller skip use the same duration. |
| Enemy targeting and lock | Original front-cone/range selection, visibility, target artwork and animation; firing locks camera and aims from the hand toward the enemy. |
| Original HUD | Original icons/digits show health, lives, potions/level total, score and targeted-enemy health; widescreen and 4:3 positioning checked. |
| `GRintro3` subtitle | Original empty text stays empty while laughter audio remains. |
| Witch inactive after intro | Initial authored flight leaves the cauldron; later routes require body clearance. Real-BSP, stationary-player regression confirms repeated attacks; old stuck saves recover. |
| Max turret cannot be damaged | Bottom, crate and animated lid forward pellet hits to Max while retaining player collision. Original phase and defeat handling remain. |
| Platform carry rejected by its own prop | Existing fix verified by its single targeted regression; unrelated props still block carry. |
| Spiders already roaming | Indoor spiders start at their ceiling, descend at original FallSpeed on the native-style dark web line, then enter ordinary AI. |
| Missing secret entry cue | Authored secret discovery flags play `secretfound.wav` once and persist through saves (corrected in the audio follow-up). |
| Skeletons already standing | Original start-motion bones frame remains held until the enabled encounter senses nearby RedCat. |
| Tiles/buttons require E | Authored TouchToSwitch activates from actual player collision/standing contact, including collision epsilon. |
| Spring boxes do not launch | Original AddPlayerSpeed volumes supply the authored upward/sideways velocities. |
| Bats bunch and stop | Body-clear route selection, sliding and separation let bats move away from blocked pursuit positions. |
| Exploding objects disappear | Destructible actor settings select original blast frames, debris meshes, sounds and timing. |
| Fans have no effect | Enabled original wind volumes affect swept player movement; level buttons still control their original groups. |

Research and focused test commands:

- [Presentation and native orientation](presentation-native.md)
- [HUD, targeting and skip](hud-targeting-cutscene-skip.md)
- [Enemy ambushes, flight and turret damage](enemy-ambush-flight.md)
- [Environment interactions and explosions](environment-interactions-native.md)

Only tests covering changed behavior were run, plus the specifically requested
moving-platform carry regression. No full historical test suite was rerun.
Rendered verification artifacts are in `artifacts/`.

This pass did not establish complete instruction-level parity. Its original
follow-up list has since changed: native touching-enemy waypoint selection and
random patrols are now recovered in [enemy movement](enemy-waypoint-movement.md),
spider return/ascent in [the native follow-up](native-completion-followup.md),
Fleurifee movement/particles in [her effect-save note](fairy-save-restoration.md),
and fragment/explosion smoke and general emitters in
[debris recovery](debris-native-recovery.md) and [spout recovery](spout-effects-native.md).
These are no longer blanket missing-feature claims. The complete native camera
spring/collision solver, collision tolerances and process-wide RNG matching
remain separate fidelity limits. The [current audit](native-parity-audit.md)
records remaining work and intentional portable differences.
