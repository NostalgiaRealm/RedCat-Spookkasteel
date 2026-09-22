# Water surfaces and contact damage

Evidence checked against the installed `RcHcGame.dat` SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Addresses below are virtual addresses in that executable. Original game files
are read only; the portable game does not load or patch the executable.

## Why the water disappeared

The GBSP importer already exports the original water geometry, palette textures,
UVs, lightmaps and transparency correctly. No replacement water plane or generated
texture is necessary.

| Location | BSP model | Texture | Surface opacity | Contact source |
| --- | --- | --- | --- | --- |
| Forest first shallow stream | 56 (`water`) | 17, `Air_Wtr001` | 125/255 | `lichtwater`, 1 health/second |
| Forest second shallow stream | 57 (`water2`) | 17, `Air_Wtr001` | 125/255 | `lichtwater2`, 1 health/second |
| Castle moat | 0, static world | 53, `Air_Wtr000` | 115/255 | BSP ooze contents, 3 health/second |

The two forest brushes also serve as nonblocking triggers. Suppressing the
rendering of every trigger model suppressed their deliberately visible faces.
Collision exclusion and visible-face rendering must be separate decisions.

All three surfaces have texinfo flag `16` (transparent). Their texture PNGs have
opaque water pixels and a zero-alpha palette-index-255 color key. Testing the
final fragment alpha against a fixed `0.5` rejects every pixel because the authored
whole-surface opacities are below that threshold. The key test must operate on
texture alpha, or use a threshold scaled by the whole-surface opacity. Surfaces
with opacity zero remain invisible. Ordinary keyed foliage still needs its key
test. This is not missing palette data or a procedural water texture.

The shallow-water models have original top heights -143 and -156. The castle
moat has top height -124. These surfaces must not become solid floors. Their
original lower terrain remains the physical floor, and bridges/banks retain
their original collision.

## Native contents and damage

The game's user contents bits are separate from the low Genesis3D geometry bits:

| Contents bit | Native meaning | Health behavior |
| --- | --- | --- |
| `0x10000` | Water | No intrinsic damage; authored triggers may hurt |
| `0x20000` | Ooze | `Game.ini [Player] OozeDamagePerSecond`, 3 |
| `0x40000` | Death volume | `Game.ini [Player] DeathDamagePerSecond`, 200 |

At `0x4daf07–0x4daf1b` the player reads the contents result, retains `0x30000`
for water/ooze state and tests bit 18 for death. At `0x4db0ef–0x4db109` death
damage is `elapsedMilliseconds * DeathDamagePerSecond * 0.001`. At
`0x4db137` it tests `0x20000`, and at `0x4db334–0x4db34e` applies
`elapsedMilliseconds * OozeDamagePerSecond * 0.001`. The native defaults are
200 and 3 respectively; the installed `Game.ini` has the same values.

The forest shallow-water occupied leaves are `0x1000c`; they are visible,
translucent, nonblocking water volumes. Their trigger entities supply damage.
The castle moat includes 62 nonblocking static-world leaves with `0x2000c`.
There is no separate moat damage trigger. The forest also has a lethal pit
with contents `0x5000c` (water plus death), which must not be treated as ordinary
shallow water. Some BSP leaves combine user contents with solid/detail geometry;
testing a texture name or one enclosing box cannot reproduce this distinction.

For trigger damage, the `CAdamTriggerModel` vtable at `0x64f078`, slot `0x68`,
points to `0x4d3e00`. While contact continues, `0x4d3878–0x4d3881` invokes it
each frame. At `0x4d3f5c–0x4d3f80` it multiplies elapsed milliseconds by
entity offset `0x48` (`DamagePerSecond`) and by `0.001`, then passes the result
to the player's health handler (`0x503fc0`). It does not use a fixed hit interval.

Both paths apply fractional health damage every simulation frame. In RedCat's
health callback, `0x433bc7–0x433be0` subtracts health before the later sound and
reaction checks. A hit-sound cooldown must not discard the continuous health
loss. Leaving contact stops further loss; it must not queue damage for later.

## Geometry needed for contact

Nonblocking liquid and trigger leaves usually have `firstSide=-1, numSides=0`.
They cannot be tested by the solid-leaf `leafSides` sweep alone. Their convex
boundaries are the node planes along the model-root-to-leaf BSP traversal.
An AABB is only a broad-phase rejection test: the second forest pool is shaped,
and the moat winds around banks and bridge supports. Use the actual occupied
leaf cells, transformed with their model, to avoid hurting RedCat on nearby dry
ground or under a different part of a model's enclosing box.

Useful original-data probes (Y is the player's foot height):

- Forest first stream: `[-1811.5,-160,1264]`, model 56, leaf 5383.
- Forest second pool: `[-1096.958,-170,1355.036]`, model 57, leaf 5392.
- Castle open moat cell: `[228,-136,1754]`, static model 0, leaf 489.
- Moving above a liquid top must cease contact once the player's box clears it;
  bridge collision must keep a crossing player's feet above the moat.

Playable contact probes verified with the full player hull (the cell-center
probes above need not be clear of neighboring terrain):

- Forest first stream: `[-1811.5,-164.95,1264]`, model 56.
- Forest second pool: `[-1240,-183.95,1355]`, model 57.
- Dry corners inside the second pool's enclosing bounds:
  `[-1250,-170,1500]`, `[-930,-170,1200]`, `[-950,-170,1520]`.
- Castle moat bottom: `[200,-151.95,1650]`, `[300,-151.95,1600]`.
- Dry bridge/bank: `[0,-31.95,1650]`, `[-84,-31.95,1247]`.

`tests/water.test.mjs` checks exact convex-cell overlap, concave dry corners,
rotated liquid models, original map contact, and nonblocking surfaces. It also
checks the material cutout threshold, continuous damage at 10/30/60/144 updates
per second, immediate exit from damage, ordinary hit immunity, save/load,
cutscene and completed-level gates, and one-life-only immediate respawning.
