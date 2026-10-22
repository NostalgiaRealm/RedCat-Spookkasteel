# Focused torch scene verification

Ran `node temp_work/torch-flames-2026-10-05/torch-scenes.mjs` in an isolated headless Chromium profile. TMPDIR, crash reports, screenshots and reports are retained inside this work directory. No user session or save was touched. No source file was edited by this verification task.

Baseline uses a Playwright route to replace only the new `TorchFlames` manager with a no-op implementation. All existing world effects and current actor lighting remain identical. After uses the actual current source. Camera, poses and sampled times are identical.

- Castle Jester room: eight hands, eight new emitters. Both displayed door-side hands have continuous fire. Sampled swing spans 23.0543 world units in X. Visible mesh cap versus emitter (+3 Y) maximum difference is 0.000001511 units.
- Graveyard entrance: 24 hand records, eight new emitters, existing emitters reused for the other 16 hands. Displayed entrance hands retain fire and move it with the visible wick. Sampled X swing spans 19.3177 units over the sampled interval. Maximum cap/emitter error is 0.000001293 units.
- Caves static entrance: no hand records or synthesized emitters, all 10 authored flame emitters retained. Four entrance torch props are unanimated and stationary. Baseline/after screenshots are pixel-identical (Pillow ImageChops difference bounding box `None`).
- 121 sampled frames per scene verify light and flame emitter positions are identical, the moving fixtures remain active and emitting, and each moving hand has one unique emitter.
- Fixed eight dynamic light slots retained. No page errors or shader errors were reported. This verifies the existing light budget; it is not a device FPS benchmark.

Visual review: orange flame artwork is visible, transparent, sized consistently with the existing Graveyard effects, and anchored above the wick. Existing smoke/flame particles drift away from their emission position naturally while new emissions follow the swinging hand.

Full samples: `scenes/report.json` and individual scene JSON files. Images: `scenes/baseline-*.png` and `scenes/after-*.png`. Command log: `torch-scenes.log`.
