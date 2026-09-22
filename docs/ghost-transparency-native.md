# Native ghost appearance

Ghost enemies use the original `Bitmaps/transghost.bmp` colour texture and
`Bitmaps/transghost_A.bmp` alpha mask, tinted green, yellow or red according to
their enemy subtype. This replaces the fully opaque actor-body texture at
runtime; it is not a guessed constant opacity.

## Original executable evidence

The addresses below refer to the installed `RcHcGame.dat` with SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.

- The colour and alpha filename pointers are stored at `0x64bdac` and
  `0x64bdb0`. `RcTouchGhost` initialization loads them at `0x416505` and
  `0x4165de`; `RcShootGhost` loads them at `0x41232e` and `0x4123f5`.
- The shooting variant explicitly attaches the alpha bitmap through
  `0x50aea0`, called at `0x4124ee`.
- Both variants replace material zero through `0x5b5520`, called at
  `0x4167c8` and `0x41262d`. Its implementation forwards to `0x5cd410`, which
  writes the replacement bitmap and material RGB. `0x50aa70`, immediately
  before these calls, only retrieves the bitmap pointer; it does not consume
  the RGB arguments already on the stack.
- Touch ghosts use the green RGB table at `0x64b398`: `(0,255,0)`. Shooting
  ghosts select their colour through `0x412cb0`/`0x412d95`: subtype 2 uses
  yellow `(255,255,0)` at `0x64b008`; subtype 3 uses red `(255,0,0)` at
  `0x64b018`.

The touch initializer loads the mask but does not have the shooting
initializer's explicit alpha-attachment call. The bitmap is cached and shared
in the original. The remake applies the recovered mask consistently to each
ghost variant, without depending on enemy initialization order.

Both source bitmaps are 128 × 128. Their SHA-256 is
`aa8715c996230a5b8d16e39a4149e4151f93c9375028e902eb08a5034fdcde44`.
The alpha samples range from 8 to 182; the most common body value is
182/255 (about 71% opacity), with different values in the face and hands.
The importer preserves every original RGB and alpha sample.

## Portable implementation

`src/ghost-materials.js` clones material zero for each actual ghost enemy.
Other material slots, shared actor templates, ordinary actor props and existing
opacity multipliers remain unchanged. The classification uses `enemyType`,
because graveyard object names are misleading: `ghost1` is a zombie, while
`zombie6` is a ghost.

The renderer blends the imported RGBA texture with the native subtype colour.
Front-face rendering and disabled depth writes prevent a closed translucent
mesh from doubling its own surface or hiding later transparent surfaces.
These are portable rendering choices; the original Direct3D render-state flags
have not been established. The alpha cutoff is low enough to retain all
nonzero values in the original mask.

The normal `tools/import_assets.py` pipeline invokes
`tools/import_ghost_alpha.py`. To refresh only this asset from an owned original
installation, run from the project root:

```sh
python3 tools/import_ghost_alpha.py '/path/to/RedCat Spookkasteel'
```

This writes `assets/ghosts/ghost.png` and its source-hash manifest. It does not
create an application build.

## Focused verification

- `node --test tests/ghost-materials.test.mjs`: native variant colours,
  instance isolation, retained fade opacity and exclusion of non-ghosts.
- `node tests/ghost-materials-scenes.mjs`: loads actual graveyard/caves enemy
  instances, checks all three material variants and renders their original
  geometry against a background. More than 99% of measured body pixels blend
  with that background; ordinary actor templates and the zombie named
  `ghost1` stay opaque. No browser or HTTP errors were observed.
- A source-to-export pixel comparison verified all 16,384 RGB and alpha
  samples, the source hash and normal importer integration.

The rendered checks save `artifacts/ghost-transparency-1.png` through
`ghost-transparency-3.png` and `artifacts/ghost-materials-scenes.json`. The
screenshots show isolated original ghost meshes for inspecting the native
texture, subtype colour and transparency; they are not gameplay captures.
