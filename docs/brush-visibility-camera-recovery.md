# Brush visibility, saved cave passage and overview controls

This source-only change corrects the rendering and collision state of imported
brushes without deleting authored geometry or changing puzzle completion.

## Gates that appeared doubled

The castle entrance `fence` is one `DoorModel`, model 42. Its single mesh has
six original brush faces, spanning `[-172,-32,496]` to `[4,116,508]`, and uses
the color-keyed `kasthek` texture. There is no second gate actor. Rendering
both sides of these faces exposed the rear surface through the front
texture's gaps, drawing another set of bars twelve units behind the first.

The imported triangles are already wound counterclockwise when viewed from
their supplied outward normal. Genesis3D's
[`RenderBSPFrontBack_r`](https://github.com/RealityFactory/Genesis3D/blob/f85b288ff54873e93879791ee9eb1367a311909f/World/World.c#L2179)
only submits faces whose plane side faces the camera. Regular BSP materials
now use that front-face rule throughout the five levels. Both authored faces
remain in the geometry, so the opposite face is still visible when the player
walks around a fence. The existing graveyard sky depth masks remain unchanged.
The linked engine source is supporting evidence for its rendering rule, not a
claim of a frame-for-frame comparison with the original executable.

## Rotating-platform room passage

The cave rotating-room doorway deliberately consists of two separate brushes:

- `draai_opening`, model 110, contains the moving wooden art and its authored
  animation, stopped at motion times 3, 6 and 10 after the three buttons.
- `draai_opening01`, model 122, is a collision-only lock with zero render faces.
  It must block the doorway until the puzzle is complete.

Every `draai_button01/02/03` calls `draai_opening.enable` and
`draai_opening02.trigger`. The latter is an original three-count trigger on
model 110. Its compiled enter command executes `draai_opening01.hide` only
on the third count. The hidden lock state and moving wood transform were both
present in saved games; neither required a new save format or an unlock repair.

Previously, the world applied model visibility and collision flags by iterating
rendered meshes. Model 122 was absent from that list, so it stayed solid even
though its restored gameplay state was hidden. `syncModelStates` now visits all
physical models as well as rendered ones. `syncModels` invokes it on load and
before movement, and the post-gameplay update applies new script state in the
same frame. Consequently existing completed saves work immediately, and
unfinished puzzles retain their collision lock.

## Fire-room overview return

`cam_firelab02` and its fire-button counterparts are mode-2 fixed views with
an authored eight-second timer. The native fixed-camera updater at
`0x459d40` checks that timer and calls `0x458fd0` with normal mode 5 at
`0x459d77–0x459d7b`; it does not select first person on expiry.

The portable camera code also leaves the preferred first/third-person setting
alone. However, the camera shortcut previously changed that setting even
while an overview concealed its effect. The new `canTogglePlayerCamera` guard
allows shortcuts only while a normal or regional player view owns the camera.
Fixed/route views and dialogue cutscenes ignore the shortcut, so they cannot
silently queue a different player perspective for later. Deliberate changes
in the settings panel remain possible. This addresses a reproducible input
path; it is not a claim that every reported camera occurrence had that cause.

## Focused validation

Only these affected source checks were run, with no package build:

```sh
node --test tests/world-brush-state.test.mjs tests/camera-control.test.mjs tests/moving-platform.test.mjs tests/bsp-face-winding.test.mjs
node tests/geometry-camera-recovery-scenes.mjs
```

The unit tests execute the original three-button scripts, verify the lock before
completion and both traversal directions after completion/save restore, and
validate the winding of every imported triangle in all five levels. The small
moving-platform fixture was updated with stubs for current non-physics world
collaborators so its existing carry/teleport checks remain isolated.

The browser scene compares the actual castle fence with its former double-sided
material, reloads a completed cave doorway through the production save loader,
walks through both ways without no-clip, and exercises the fire-room camera's
timer and shortcut guard. Results and screenshots are written to
`artifacts/geometry-camera-recovery-scenes.json`,
`artifacts/castle-fence-single-surface.png`,
`artifacts/caves-restored-rotating-passage.png`, and
`artifacts/caves-fire-overview-return.png`.
