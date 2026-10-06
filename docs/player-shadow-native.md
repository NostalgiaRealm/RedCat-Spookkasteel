# RedCat's ground shadow

The renderer previously had no RedCat shadow. The correction restores the
original `CRcShadow` projected quad, using `Bitmaps/RcSdw.bmp` and
`Bitmaps/RcSdw_A.bmp`. It does not enable expensive scene-wide shadow maps.

## Original evidence

Read-only examination of the installed `RcHcGame.dat` on 2026-10-04
(SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`):

- Constructor `0x46ce40` loads the bitmap pair and sets half-size to 25 units.
- Update `0x46d680` traces from ten units above the actor origin down to
  10,000 units below it. Collision setup `0x46d704..0x46d72b` selects solid
  and window contents, with meshes, models and actors allowed.
- The collision wrapper offsets the result by 1.3 units along its normal
  (`0x566106..0x56611b`, helper `0x5b1520`). The quad uses the plane tangent
  basis and the original half-unit corner offsets; it follows slopes.
- UV corners are `(0,1), (1,1), (1,0), (0,0)`. The original vertices are
  white with full alpha. The black 64×64 bitmap's separate alpha mask peaks
  at 73/255, producing a soft shadow without additional opacity reduction.
- The original uses fixed size and alpha while airborne, with depth testing
  and no depth writes. It does not scale or fade according to jump height.

`tools/import_world_effects.py` retains this pair for future asset imports.
The imported PNG's RGB and alpha pixels were compared with both original BMPs
and match exactly. Only one reusable quad and its texture are allocated.

## Portable integration

The shadow queries current collision geometry, including transformed moving
platforms and collidable actor props. Its solid/window mask excludes invisible
player clip volumes; ordinary movement retains its existing collision mask.
World resource streaming does not remove these collision surfaces.

The shadow follows RedCat's visibility, including portal disappearance and
first-person camera hiding. If there is no valid ground hit, it is hidden.
This deliberately avoids the native no-hit fallback at actor height minus
five, which can leave a floating shadow outside the world. Collision retains
the portable controller's small skin tolerance and actor collision rules.

## Focused validation

- `node --test tests/player-shadow.test.mjs`: five tests covering native
  dimensions/offsets, jump stability, slopes, missing ground, clip exclusion,
  window surfaces, moving/disabled platforms, visibility and resource reuse.
- `node tests/player-shadow-scenes.mjs`: rendered forest, castle and
  graveyard checks for ground/jump placement and player visibility, with
  before/after screenshots and no browser errors. Pixel comparisons confirm
  that the shadow visibly changes the ground beneath RedCat in each scene.

Disassembly, constants, asset comparison and rendered evidence are retained
under `current_work/player-shadow-2026-10-04/`. No builds were created.
