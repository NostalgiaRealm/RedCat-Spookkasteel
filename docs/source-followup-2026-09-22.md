# Audio, targeting, camera and presentation follow-up

These changes address the next reported issues after
[the earlier source pass](source-fixes-2026-09-22.md). They change source and
imported assets only; the existing Linux and Windows packages have not
been rebuilt.

| Report | Change |
| --- | --- |
| Missing door movement sounds | Original DoorType sounds play on opening and closing; authored motion sounds remain in control where the native automatic slot is empty. |
| Missing footsteps | Original alternating ground footsteps and water/ooze rules use actual grounded movement and speed. No wood/stone table was found in the native selection. |
| Cobwebs appear opaque | Authored alternative colour/alpha bitmap pairs replace the opaque placeholder material for every matching actor instance. |
| Shootable controls and crates lack targeting | Original explicit target flags exclude decorative lamps/torches. Enemies and opted-in crates take priority over shootable buttons, whose original detection range is nine times longer. Moving brush and actor bounds provide the aim point. |
| Distant geometry visible when looking up (corrected location: Het Kerkhof) | The broad visibility filter was reverted after a cave-door regression. The graveyard now retains its original SKY boundaries; see the correction notes below. |
| Bats remain inside RedCat | Flight clips against his body, recovers existing overlap and circles away between contact attacks. |
| Wrong secret discovery sound | Authored secret discovery uses `SecretFound.wav`, retaining once-per-secret save state. |
| Missing Brutus combat voices | Both variants use the original localized attack, hurt and death WAVs. |
| Ordinary enemy combat music missing | Each level's Action, Special and Ambient slots follow threat transitions; caves/tower Action uses `spookkort3.wav`. Mode changes preserve same-file playback and saved state. |
| Duplicate witch before outro | The defeated combat actor retires immediately, including recovery of old frozen corpses. Authored cinematic model handoffs remain intact. |
| Camera stuck after overview; pellets aim upward | Regional views share adjustable pitch with weapon aim. Fixed/route overviews retain camera ownership until their authored timer expires or a script replaces them; mouse look/firing no longer cancels them. Legacy saved hidden pitch is repaired. See [camera ownership](targetable-props-camera.md). |
| Fleurifee appearance/disappearance effects inaccurate | Recovered halo/rays, accelerated waypoint movement, hover, orbit timing and timed particle emissions replace the approximation. Departure preserves live particles, fills vacant pool slots and plays its original sound. |

Research, affected files and focused validation are documented in:

- [Door, footstep, combat music and voice audio](audio-completion-native.md)
- [Shootable props and camera recovery](targetable-props-camera.md)
- [Bat contact and Witch cleanup](enemy-ambush-flight.md)
- [Cobweb masks, BSP visibility and Fleurifee effects](native-visuals-2026-09-22.md)
- [Graveyard correction, restored cave doors and confirmed Fleurifee sounds/skip cleanup](graveyard-and-fairy-corrections.md)

The work uses the installed original assets, authored level entities and
scripts, and recovered executable/Genesis3D behavior. Portable differences
and limits are identified in the detailed notes rather than claiming complete
instruction-for-instruction parity.

The user corrected the look-up issue's location to Het Kerkhof. The earlier
cave/PVS approach has been removed from runtime rendering. The replacement is
verified against an original graveyard sky boundary and foreground geometry;
the cave check verifies all 45 doors keep their artwork through motion.

Only tests for behavior changed in this follow-up were run. Failed focused
checks were repaired and rerun; the historical full test suite was not run.
No release package build or version bump was performed.

To play this source on Linux before making packages:

```sh
cd /home/rick/RCSPOOK_NEW
npm start -- --ozone-platform=x11
```

`Start-RedCat.sh` still prefers the existing package. For complete self-build
instructions on Linux and Windows, see [building.md](building.md).
