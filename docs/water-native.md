# Water surfaces, contact sounds and damage

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
| Graveyard moving-platform moat | 135 (`killwater`) | 18, `Air_Wtr00` | 255/255 | `Trigger45`, 100 health/second |

The graveyard moat is deliberately opaque. Its original brush occupies
`[2288,496,-824]` to `[2896,520,-472]`, beneath `froggerplatform_1/2/3`.
Its non-solid BSP leaf has contents `4`, without a water-contents bit. The
`Trigger45` entity supplies contact damage independently of rendering.

The renderer and gameplay share `visibleLiquidGroups`: positive-alpha water
artwork on a damaging trigger can be opaque as well as translucent. Ordinary
opaque camera/puzzle helper brushes remain hidden, even when they use a water
texture; zero-alpha faces remain hidden too. Across the five imported levels,
this exception adds only the graveyard's model 135. It restores the authored
mesh, texture, UVs and lighting without creating a replacement plane or making
the water solid. Saved games recompute this visibility when loaded.

The two forest brushes also serve as nonblocking triggers. Suppressing the
rendering of every trigger model suppressed their deliberately visible faces.
Collision exclusion and visible-face rendering must be separate decisions.

The forest and castle surfaces have texinfo flag `16` (transparent). Their texture PNGs have
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

## Water-contact sounds

On 2026-10-11 the user's copied save placed RedCat beside the first forest
moat, at `[-1734.56,-136.95,1170.02]`. Walking inside model 56 reproduced the
missing splash: the solid collider returned no water bit, while the separate
volume collider returned `0x1000c`. Consequently the audio router selected
`Rcwalk1/2` even while RedCat was visibly in the pool.

`CastleWorld.syncModelStates` correctly excludes these trigger models from
solid collision. The error was reusing that exclusion for sound contact.
`Gameplay.playerContactContents` now uses the volume collider and current
model transforms. The relevant model list is calculated once from the original
BSP contents, separately from rendering and streamed mesh visibility. Per-frame
sound checks inspect only that short list, with the collider's bounds rejection.

The original footstep sound slots and cadence are preserved; see
[native footstep audio](audio-completion-native.md#redcat-footsteps). Running
through plain water alternates `RcLWater.wav` and `RcRWater.wav`. Slow walking
in water uses `Rcwalk1.wav`; ooze also uses that recording. Water recordings
remain independent one-shots, so subsequent footsteps do not truncate their
tails. Standing still, flying in no-clip, jumping above the water and pausing
do not create repeated footstep splashes.

### Jumping and landing in liquid

The original does **not** select the running splash recordings for every kind
of water contact. The shipped resource constructors assign `Rcwalk1.wav` to
both the water and ooze jump/landing slots:

| Action | Water resource | Ooze resource | Dispatch |
|---|---|---|---|
| Jump | `0x6b5548` | `0x6b5640` | `0x4dc808`, `0x4dc7b8` |
| Land | `0x6b5520` | `0x6b5618` | `0x4dc709`, `0x4dc6b3` |

Constructors `0x42f810`, `0x42f1b0`, `0x42f920` and `0x42f2c0` all copy the
string at `0x690220`, `Rcwalk1.wav`. Ordinary dry jumps instead select
`Rcjump1.wav` at `0x4dc846`. The port now selects the liquid jump sound from
actual contact, and emits one landing contact sound when airborne RedCat
reaches a supporting floor in water/ooze. It does not repeat that sound while
standing on the floor, loading a save or flying in no-clip. Movement recovery
also clears the pending landing event.

The native landing handler (`0x4dc615–0x4dc696`) uses downward impact speed.
Its minimum threshold and full-volume speed are the ordinary jump takeoff
speed multiplied by `MinNoDamageImpactSpeedFactor` (.05) and
`MaxNoDamageImpactSpeedFactor` (2), respectively. The multiplications are at
`0x4dc2ba` and `0x4dc41c`. For a level pool floor, the new contact cue follows
that minimum threshold and the clamped impact/full-volume ratio; the sound
mixer performs its existing native gain conversion. That water-specific change
initially added audio only. The [26 October full-source comparison](original-source-comparison-2026-10-26.md)
subsequently recovered the complete shared landing branch: dry ground now plays
`rcland1.wav`, and impact above the maximum threshold applies fractional fall
damage using the shipped `DamageAtDoubleImpact=1`. Normal jumps remain below
that threshold; no-clip and cutscene protection remain intact.

Evidence is disassembled code and the shipped resources, plus the user's
confirmation of audible splashes in this moat. No frame-by-frame recording
of the original was used. In particular, this fix does not claim identical
movement speed, contact hulls or every slope-impact calculation; it corrects
the proven contact-query failure and the recovered liquid sound choices.

An audit of all five imported maps found:

| Level | BSP models with liquid/death contents | Audio consequence |
|---|---|---|
| Het Bos | 0 (water + death), 56 and 57 (water) | Both shallow pools now select splash footsteps; the lethal pit retains its death behavior. |
| Het Kasteel | 0 (ooze) | Preserves the native ooze sound slots and excludes dry banks/bridge decks. |
| Het Kerkhof | None | Model 135's visible water has trigger contents 4, not the native water bit; no splash is inferred from its texture. |
| De Grotten | 0 and 211 (death) | The death bit alone does not select water sounds. Other visible water effects are not automatically footstep water. |
| De Kasteeltoren | None | No new liquid footstep sound is assigned. |

Water rendering, collision, trigger damage, movement speed and ambient/music
scheduling are unchanged by this correction.

Focused checks: `tests/water-audio.test.mjs` covers both forest pools,
all-level contents selection, dry corners, bridge decks, walk/ooze sound slots,
no-clip, transformed volumes, liquid jump/landing slots and impact gain, and
single landing events at 30/60/120 simulation steps per second.
`tests/water-audio-scenes.mjs` exercises real
player movement in both pools and on dry ground, and verifies that both original
splash recordings decode and retain their full durations. It also checks the
world-to-audio jump/landing event path. To reproduce against
a copy of the reported save:

```sh
REDCAT_WATER_SAVE=temp_work/water-contact-2026-10-11/live-autosave.json node tests/water-audio-scenes.mjs
```

The scene check also works without the environment variable by starting Het Bos.
Use `--transitions-only` to check just jumping and landing without repeating
the already-verified walking scenes.
Both splash files are byte-identical to the installed originals, with durations
of approximately 717 and 777 ms. The saved-moat scene and the second forest pool
selected both recordings; the dry-bank scene selected only ordinary footsteps.
Evidence and the isolated save copy are retained under
`temp_work/water-contact-2026-10-11/`. The user's save was not modified.

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
