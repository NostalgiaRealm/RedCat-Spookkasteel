# Castle portrait placement

The seven portraits in `lvl01a` use five actor files: `paintbr.act`,
`paintsl.act`, `paintrc.act`, `paintwk.act` and `paintmx.act`. None has an
associated INI in the original installation or on the mounted CD. Their body
geometry is a flat rectangle in the actor X/Z plane, with its top at Z ≈ 40.
Importing an identity basis left that rectangle horizontal in the game world.

The original executable supplies the missing basis. In `RcHcGame.dat`
(SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`),
the `ActorInitialRotationX` configuration read references its key at `0x4a3f82`
and pushes `0xc2b40000` (float **−90**) as the default at `0x4a3faf`, before
calling the configuration getter at `0x4a3fc6`. The preceding arguments are the
−360/+360 bounds. Its result is stored at actor-definition offset `0x68`.
The corresponding Y and Z defaults are zero (`0x4a40b0`, `0x4a41ae`), stored
at offsets `0x6c` and `0x70`.

`tools/import_actors.py` now supplies `[-90, 0, 0]` when the INI or an individual
rotation field is absent. Explicit settings, including X = 0, remain intact.
Only the five portrait metadata files and their manifest entries were refreshed
for this repair; geometry, textures and other actor imports were retained.

The renderer already applies that imported basis to the actor mesh, then the
entity's authored rotation to its parent. No additional placement compensation
is necessary. These level entities retain their exact authored origins, scale
2.5 and Y rotations:

| Davi name | Actor | Origin | RotateY |
| --- | --- | --- | --- |
| schilderijRC01 | paintrc | 1719, 8, −620 | −90 |
| schiderijBR01 | paintbr | 1719, 8, −1054 | −90 |
| schilderijWK01 | paintwk | 1719, 8, −190 | −90 |
| schilderijSL01 | paintsl | 1502, 8, −387 | +90 |
| schiderijSL02 | paintsl | 1467, 8, −388 | −90 |
| schiderijBR02 | paintbr | 2211, 8, −387 | −90 |
| schiderijMX02 | paintmx | 2211, 8, −862 | −90 |

All seven resulting rectangles stand on their original constant-X wall planes,
100 units wide and tall, with Y bounds approximately 8.04147 to 108.04147.
The tiny fractional offset belongs to the source geometry. Neither level data
nor saved positions require modification.

Focused verification passed:

```sh
python3 -m unittest discover -s tests -p test_portrait_import.py
node --test tests/portrait-placement.test.mjs
node tests/portrait-scenes.mjs
```

The two Python cases cover absent INIs/rotation fields, case-insensitive INI
lookup and preservation of explicit zero. The Node case instantiates all seven
original actors through the real renderer placement path. The browser fixture
checks all seven wall planes and visibly renders the Brutus and Slang portraits
on opposite wall orientations; hiding each portrait changes 47,065 and 46,669
pixels respectively at 640×360. There were no script, browser or HTTP errors.
Screenshots and bounds are saved in `artifacts/castle-portrait-*.png` and
`artifacts/portrait-scenes.json`. No release packages were built.
