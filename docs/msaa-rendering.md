# Selectable MSAA

Implemented in source on 20 October 2026. This is an additional portable-renderer
setting, not a recovered original DirectDraw option.

## Menu and preferences

**Instellingen → Beeldkwaliteit → Geavanceerd → Anti-aliasing (MSAA)** offers
**Uit, 2x, 4x and 8x**. OK applies the preference without restarting the level;
Annuleren leaves the previous setting intact. The preference is stored with
resolution/render scale in `redcat.settings.v1`.

The default request is 4x. Previously the canvas requested `antialias: true`,
which let the browser choose its own sample count. The new explicit target
supports changing the actual sample count without destroying the WebGL context
and reloading every game asset.

The menu disables sample counts missing from either RGBA8 color or 24-bit depth
renderbuffer support. Only querying `MAX_SAMPLES` is insufficient, and requesting
2 samples on a device with only 4 available can be rounded up by WebGL. We expose
exact supported counts instead. A saved setting from another device retains its
requested value but uses the highest supported count no greater than that
request; if no such count exists, rendering uses Uit. The menu explains this
fallback. Changing graphics hardware/context rechecks the capabilities.

## Automatic low-frame-rate adjustment

The existing detector still waits for sustained performance below 30 FPS after
its warm-up period; loading, pause and isolated hitches do not trigger it.
The first automatic reduction lowers rendering by 25 percentage points and
switches MSAA to Uit immediately. Further sustained slow periods lower scale
again, down to 25%. If scale is already 25%, MSAA can still be switched off.

Automatic changes now update and save the actual settings, rather than leaving
an invisible reduction offset against an unchanged 100% preference. Renderschaal
and its numeric label therefore show the current value when opening settings.
Applying another option cannot accidentally lower the scale a second time.
Both values survive level changes and restarting the app. Higher frame rates
do not raise quality or re-enable MSAA automatically; the user can change either
setting manually and confirm with OK. Sustained low FPS after a manual increase
can trigger the same protection again.

## Rendering and resource lifetime

`src/msaa-renderer.js` handles the final world draw. `CastleWorld.render()` still
waits for visible geometry, actors and textures before calling it. Streaming GPU
preparation continues using its independent tiny targets. HTML menus and the HUD
remain at window resolution. The existing manual and automatic render-scale
controls resize the world canvas and MSAA target together.

- The canvas itself uses `antialias: false`, avoiding a second MSAA pass.
- Enabling MSAA renders into one multisampled target, resolves color, then copies
  the result to the canvas with one fullscreen triangle.
- Depth and stencil are not resolved for presentation.
- Target allocation is lazy and reused across frames; resizing or changing the
  sample count releases old attachments. Uit disposes the extra target.
- Context loss releases the old target while the old context is lost. Disposing
  stale GPU handles after restoration produced an invalid-operation error in
  the first check; the corrected lifecycle was verified.
- Shader preparation includes the display pass during level loading. Rendering
  statistics include the additional triangle and draw call.

Three.js provides multisampled render targets through its
[`samples` setting](https://threejs.org/docs/pages/RenderTarget.html). There is
one deliberately isolated compatibility detail for the pinned Three.js r186:
`isXRRenderTarget` tells its WebGL renderer to apply canvas-style output encoding
and tone mapping to a display target. This does **not** enable an XR session.
The target explicitly uses RGBA8 storage and the final raw shader copies the
already encoded color bytes, without another conversion.

This matters for original effects: an ordinary linear/sRGB intermediate target
changes alpha/additive blending. The initial experiment changed half-opacity red
on black from 127 to 188. The display-target path preserves 127 and the existing
opaque colors/black. Recheck this adapter and these pixel comparisons when
upgrading Three.js; silently switching back to a normal linear target changes
the appearance of translucent actors and effects.

## Focused verification

Only MSAA/settings/rendering checks were run for this change; no new packages.

- `node --test tests/msaa-renderer.test.mjs`: preference normalization, capability
  intersection and saved-preference fallback.
- Hardware Chromium/ANGLE OpenGL ES on Radeon RX 6700 XT: actual renderbuffer
  sample counts of 2, 4 and 8 verified; progressively more partially covered edge
  pixels, identical solid colors and black, matching alpha blending, resizing,
  repeated enable/disable cleanup, and real context loss/restoration.
- Chromium SwiftShader: restricted sample support is represented in the menu.
- Source Level 1 starts and draws with MSAA; settings can switch Uit/MSAA while
  paused and redraw without a level reload or WebGL errors.
- Settings apply/cancel/persistence and desktop/mobile layout checked using
  isolated profiles, without modifying the user's save or running game.

Retained scripts, reports and screenshots are under
`temp_work/msaa-settings-2026-10-20/`. The `hardware/` directory holds the hardware
checks. Initial failed experiments are kept separately for reference.

### Automatic quality follow-up

`node --test tests/render-quality.test.mjs` passes all ten focused checks,
including exact 25-point steps, the 25% floor, MSAA disable at the floor,
pause/loading exclusions, persistence and explicit manual re-enable.

The isolated browser check in `temp_work/adaptive-msaa-2026-10-20/` deliberately
slows animation frames below 30 FPS while running Level 1. It verified real
75%/50%/25% drawing-buffer sizes, matching menu values and saved preferences,
MSAA switching to Uit, applying settings without a second unintended reduction,
level/reload persistence, and manually restoring 4x. No page or WebGL errors.
