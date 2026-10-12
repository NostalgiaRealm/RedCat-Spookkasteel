# Graveyard wall transparency correction

The metal wall beside the descending passage in Het Kerkhof had two narrow
see-through strips. This reproduces from the copied save at approximately
`[1010, 528, -1904]`. It is a texture color-key issue, not missing mesh data or
a streaming failure.

## Original level evidence

The original `Levels/lvl02a.bsp` matches the imported level's recorded SHA-256:
`0ead8d93e1802b3edf8cbcd3135e6e042179061ccdb4511fdc1921fe4e01f095`.
Reading its original face and texture-info records identifies:

| Face | Position/bounds | Texture | Transparency flag |
| --- | --- | --- | --- |
| 920 | X1024–1032, Y528–664, Z−1840 | `hek_door` | Unset |
| 921 | X832–840, Y528–664, Z−1840 | `hek_door` | Unset |
| 923 | X840–1024, Y528–664, Z−1840 | `grvdr01` | Unset |
| 928 | X1032, Y528–664, Z−1840…−976 | `grvdrb` | Unset |

The two eight-unit strips are already present in the port, totaling four
triangles. Their gate texture contains transparent palette-index-255 pixels.
The same bitmap is legitimately used by gate models 50, 51, 53 and 54, whose
faces do carry the transparency flag. The adjacent wall textures are opaque.

The face flag alone is not a safe global rule for color keying. The Forest's
`Lfgrn` foliage also needs bitmap transparency on unflagged faces (8,547
vertices). An audit of all five imported levels found only that foliage and
these twelve Graveyard wall vertices with actual transparent pixels on
ordinary, unflagged world surfaces.

The locally retained Genesis3D reference source also separates these concepts:
`World/WBitmap.c:233–246` enables the color key for a shared bitmap when any
referencing face has `TEXINFO_TRANS`; `World/Surface.c:302–303` separately sets
the face's transparent-surface classification. The Direct3D reference driver's
`Pcache.cpp:1198–1213` combines texture alpha with vertex alpha during its world
pass. Consequently, an unset face flag does not establish that texture-key
pixels are opaque in the original renderer. These references are under
`temp_work/gargoyle-transparency-2026-09-29/genesis-reference/` and include
post-2000 engine revisions; the level records above come from the actual game.

## Correction and fidelity boundary

`surfaceAlphaTest()` now exempts only the Graveyard's static, flags-zero
`hek_door` wall group from alpha rejection. Those pixels render as the original
palette color, including the dark parts of the trim, and write depth. The
texture, UVs, wall geometry, collision and save data are unchanged. Actual
gates, foliage, actors and water keep their existing transparency behavior.

This is a narrowly scoped content repair to ensure the structural wall cannot
be seen through. It is not evidence that the original renderer used per-face
color-key disabling. The original data really does assign the fence texture
to these strips; a matching original-game screenshot at this exact location
has not been captured. Do not describe the correction as pixel-exact native
rendering parity.

The repair adds no geometry, textures or per-frame work. It is selected when
the existing world material is created.

## Focused validation

```sh
node --test --test-name-pattern='original water surfaces|opaque graveyard wall trim' tests/water.test.mjs
node tests/graveyard-wall-material-scenes.mjs
# Optional: reproduce a copy of the affected save in an isolated profile.
node tests/graveyard-wall-material-scenes.mjs path/to/copied-save.json
```

The two focused unit checks passed. The saved-scene comparison restored both
wall strips, changing 3,681 pixels at 960×600, with no browser errors. All six
gate material groups retained their 0.5 alpha cutoff; unflagged Forest foliage
and translucent water also retained their cutouts. Before/after images were
visually inspected.

Research, a copy of the save, a capture of the paused live game, the original
level audit and the isolated scene results are retained under
`temp_work/graveyard-wall-gap/`. The final scoped scene result is in
`scenes-1791499333184/`. The running game and its saves were not modified, and
no packages were built.
