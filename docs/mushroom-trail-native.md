# Mushroom projectile ribbon

Evidence is from the installed Dutch `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Addresses are executable virtual addresses. Original files remain read only.

## Live artwork and size

The mushroom trail is a camera-facing flight ribbon. The live initialization
loads **`STrail.bmp` and `STrail_a.bmp`**, at `0x449398–0x44961a`. The previously
used `mshTrail.bmp` / `mshTrailA.bmp` pointers at `0x64cee4` / `0x64cee8` are not
used by this initialization. `tools/import_hazards.py` imports the actual live
64×64 color and alpha bitmaps without altering their pixels, and records their
source hashes in `assets/hazards/manifest.json`.

The ribbon constructor stores half-width 0.64 at `0x586bad`; mushroom setup
multiplies it by 5 at `0x44936f–0x449380`. Its full width is therefore **6.4 world
units**. `0x587959–0x587a23` subtracts/adds the half-width to each segment endpoint.
`0x58785d` and `0x587938` obtain the camera's forward direction and cross it with
the segment direction. This uses the camera direction, not the vector from each
segment to the camera position. Every segment uses the complete texture once,
with UV corners initialized at `0x587879–0x5878d1`.

## Verified native sampling and fade

`GeneralWorldScale` defaults to **32** (`0x4bb425`, key at `0x69766c`). Mushroom
setup writes `0.3 × GeneralWorldScale`, or **9.6 units**, as its distance threshold
(`0x449364–0x44936c`). The particle's `EnableTrail` sets a **100 millisecond** time
threshold (`0x591eca`) that mushroom setup retains.

`AdamEffectTexturedTrail::Update` (`0x5871f0`) maintains a live final point:

- The first update creates two identical points at the projectile's current
  position (`0x587288–0x58729e`, `0x587401`). There is no visible launch segment
  until its next update; the child is created after the parent's first movement
  (`0x4490c0`, `0x449265–0x44927b`).
- Every update replaces its position and timestamp (`0x5872c3–0x5872d7`).
- A point is committed only when more than **100 ms** has passed since the
  preceding committed point **or** the distance exceeds **9.6 units**
  (`0x5873d6–0x587404`). Both comparisons are strictly greater than.
- Committing appends a duplicate live endpoint. It happens at most once per
  update; the native engine does not subdivide a slow frame into equally spaced
  ten-unit segments. Consequently, exact point counts vary with frame rate.

Setup copies RGB 255,255,127 and `TrailFadeTime=1.5` seconds from every installed
projectile difficulty INI (`0x4492e3–0x44931b`). The copied `TrailAlpha=127` field
at ribbon offset `+0x4c` is **not** the alpha used by the render loop. Instead,
`0x59188b` supplies the owner's alpha at `+0x60`. The mushroom's infinite-life
sprite owner evaluates its start alpha of **80 percent**, or 204/255
(`0x4492ab`, `0x56ea4f–0x56ea81`). Its 55 percent end alpha is not reached while
its lifetime is infinite.

Each quad has a single alpha of **0.8 × (1 − age / 1.5)**. The first quad uses its
second point's timestamp; subsequent quads use their first point's timestamp
(`0x587a3e–0x587a53`). Rendering stops at alpha **5/255 or less** (`0x587b20`).
This replaces the former lower opacity and invented spatial subsampling.

## Ownership, persistence and contact

A mushroom owns a `SpriteProjectileParticle`; the particle owns its ribbon.
Mushroom destruction queues that particle for removal (`0x448b33–0x448b45`), and
its destructor deletes the ribbon (`0x5916b3–0x5916cb`). There is no separate
1.5-second tail after projectile impact or expiry. The remake now removes that
projectile's complete ribbon when it leaves the active projectile list.

Save data preserves committed points, the live endpoint and integer millisecond
timestamps. Version-one saves migrate their existing recent flight path once.
Ribbon geometry remains the native 6.4 units wide; any deliberate display-size
assistance belongs to the renderer and does not alter these timings.

Further inspection resolves the former damage approximation: **the ribbon does
not damage RedCat in the installed executable**. `TrailDamage=5` is loaded at
`0x447e5c` into the mushroom settings record's `+0x20` (`0x6b6770`), but no live
consumer was found. The complete mushroom update at `0x449090` first calls
shared projectile movement (`0x4490c0`), then updates a visual-only
`SpriteProjectileParticle`. Its ribbon update/draw has no player collision or
damage call. The projectile's actual `Damage` is separately copied from settings
`0x6b6758` at `0x44906b` and applied through the shared body contact handler at
`0x44ce83–0x44ceab`.

The old swept-player ribbon damage was invented from the unused setting and is
removed. Direct mushroom hits retain native body damage. Existing saves still
load their ribbon paths, with any old stored ribbon damage ignored. Freeze,
cutscene and no-clip protections remain unchanged. The same subclass investigation
is documented in [projectile impacts](projectile-impacts-native.md).

Focused coverage: `tests/projectile-hazards.test.mjs` checks strict distance/time
boundaries, one commit per tick at 30/60/144 fps, native opacity/culling, harmless
overlap/crossing, ownership cleanup, freeze and save migration.
`tests/test_import_hazards.py` checks source preservation and alpha conversion.
