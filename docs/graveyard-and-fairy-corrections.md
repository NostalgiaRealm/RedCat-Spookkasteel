# Graveyard visibility and Fleurifee corrections

These source changes correct the reported location to **Level 3, Het Kerkhof**
(`lvl02a`) and use the user's confirmed Fleurifee sound filenames. Existing
Linux and Windows packages remain unchanged.

## Visibility and cave doors

The broad BSP/PVS rendering filter introduced in the previous pass has been
removed from world geometry, moving models, actors and effect batches. It could
hide door artwork in De Grotten. The runtime no longer loads `data/visibility`,
and the asset-import wrapper no longer requires that import. The old visibility
module, importer and data remain as unused research material.

The graveyard correction instead uses the ten original SKY polygon groups
already present in its imported mesh. These boundaries keep unrelated upper
rooms from appearing through the sky while preserving closer walls, doors and
enemies. It adds no geometry and changes no collision. Other levels retain their
ordinary rendering. See [original sky data and rendering evidence](graveyard-sky-native.md).

The focused cave check verified all **45 doors** retain their original texture
and geometry ranges while closed, opening, open and closing, including after
moving the camera to another room. A rendered comparison confirmed the artwork
is visible. The graveyard check verified all **5,793 original SKY vertices**,
with 13 sky samples corrected and 12 nearby foreground samples unchanged.

## Fleurifee

| Event | Sound |
| --- | --- |
| Appears | `Gri5FX11.WAV`, once |
| Present/idling | `IdleFee1.wav`, looping |
| Ordinary disappearance | `Magiev12.wav`, once; stop the idle loop |

The latest user correction selects `Gri5FX11.WAV` for appearance, replacing
the previously confirmed `IHealthL.WAV`. Asset lookup uses the imported
lowercase filenames. Restoring an active fairy resumes idle audio
without repeating the appearance cue. Particle emissions no longer introduce
other sounds. The movement and visual effects are preserved.

Holding E for two seconds completes the cutscene's script callbacks.
It then removes the fairies involved in that cutscene and stops their audio,
including those activated by callbacks during the skip and any departure
particles or trails still fading when the skip starts. Later, disabled fairy
encounters remain available. See [sound and skip implementation notes](fairy-skip-audio-2026-09-22.md).

## Verification and playing the source

Only the affected visibility and fairy checks were run, including the
then-current three-second E hold in the forest. The hold was subsequently
shortened to two seconds; see [skip validation](hud-targeting-cutscene-skip.md).
No complete regression suite was rerun and no
build or version bump was made. Focused browser commands are:

```sh
node tests/cave-door-artwork-scenes.mjs
node tests/graveyard-sky-scenes.mjs
node tests/fairy-skip-audio-scenes.mjs
```

The linked fairy notes list the selected unit checks. Results and screenshots
are in `artifacts/cave-door-artwork-scenes.json`,
`artifacts/graveyard-sky-scenes.json`, and `artifacts/fairy-skip-audio-scenes.json`.

To play the updated source on Linux:

```sh
cd /home/rick/RCSPOOK_NEW
npm start -- --ozone-platform=x11
```

`Start-RedCat.sh` prefers the older prepared package. See [building.md](building.md)
for source setup and instructions for making your own Linux or Windows packages.
