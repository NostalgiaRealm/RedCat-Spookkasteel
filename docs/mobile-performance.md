# Mobile performance

Dates: 30 and 31 October 2026. This work targets phones and tablets. Gameplay
rules are unchanged. The visible trade-offs are listed first under "What changed".

## Measured result

Goal: 30 FPS on Het Kerkhof at 800×360, DPR 2, 6× CPU throttle. Reached: 34.4 to
39.6 FPS over five runs on an otherwise quiet machine.

Measured with `tools/mobile-performance.mjs`: emulated phones in headless Chromium
145, main thread throttled, software GPU, a scripted walk past the level's enemies
with a teleport every 90 updates. GPU drain is the mean wait until a frame is finished.

| Profile | Canvas | Main thread per frame | GPU drain | Frames per second | Allocation per frame |
| --- | --- | --- | --- | --- | --- |
| 800×360 at DPR 2, 6× throttle | 1600×720 with 4x MSAA → 1073×482 | 27.3 → 13.7 ms | 45 → 11.7 ms | 15.2 → 34.4–39.6 | 1872 → about 700 KiB |
| 852×393 at DPR 3, 4× throttle | 2556×1179 with 4x MSAA → 1060×489 | 18.0 → 9.5 ms | 113 → 11.9 ms | 9.8 → 38.3 | 1701 → about 680 KiB |

The same build at other limits on the budget profile: short edge 600 gave 29.3–31.4
FPS, 648 gave 27.3–32.8 and 720 gave 24.7–28.7.

**Limits:** these are emulated phones and a software GPU, so compare the numbers
between builds; they do not predict a real phone's frame rate. Chrome also reads the
canvas back during each commit in this software mode, which serializes main thread
and GPU; real phones do not. Only Het Kerkhof was measured. Other load on the machine
lowers results a lot (20–25 FPS while another program used seven cores). No physical
phone or real Safari was tested. The 60 FPS limit has no effect in this 60 Hz benchmark.

## What changed

**Phones and tablets (visible; the Android app and mobile browsers):**

- **Resolution:** Automatisch stops at a 960×540 pixel budget. **Volle
  schermresolutie** is a new option, shown only on these devices, that uses every
  screen pixel; the presets still work.
- **MSAA:** starts at Uit. Stored settings still at 4x switch to Uit once
  (`phoneMsaaChecked` in `redcat.settings.v1`, absent in older saves); a sample
  count chosen after that is kept.
- **Frame rate:** at most 60 frames per second on 90 and 120 Hz displays.
- **Textures:** 2x instead of 8x anisotropic filtering, so surfaces at a grazing
  angle are slightly softer.
- **Halos:** corona visibility uses 2 rays per frame instead of 8, so a halo can react
  slightly later to something blocking it.
- **Colour output:** a sqrt-based sRGB curve replaces `pow()`, within 0.39 of a byte
  (`tests/render-quality.test.mjs`).

**World lighting (all devices, same picture):**

- Each light's plane distance and projection are computed per vertex as flat
  values, since they are constant on a BSP face.
- A light that cannot reach a fragment adds nothing, and a fragment that no light
  reaches takes one filtered lightmap read instead of up to eight reads.
- The four corners share two X and two Y values, so they need far fewer floors.

Fixed-clock frames of Het Kerkhof differ by at most 1/255 from the previous shader.

**Simulation and rendering preparation (all devices, same decisions):**

- BSP sweeps share one state object and leaf stamps instead of closures, boxes and
  a Set per trace; the contents query no longer builds distance arrays.
- Static chunks beyond the view radius with nothing loaded wait until the camera has
  travelled the excess distance. Parked, unloaded actors wait the same way, or until
  the room state changes, while their position is unchanged; a sphere around the origin
  covers spinning props.
- Halos in rooms that cannot be drawn cast no visibility rays.
- Room and PVS queries reuse cache entries and arrays. The PVS key is rebuilt only when
  the cluster, area or a portal changes.
- Actor residency, bone composition, motion points, bat separation, trigger volumes,
  model state and collision flags no longer allocate per actor or per bone.
- Unchanged HUD state no longer writes to the DOM each frame.

`keepNames` stays in the bundle: `tests/runtime-bundle.test.mjs` requires the names.

## Reproduce

```sh
node tools/mobile-performance.mjs --profile budget --out report.json
node tools/mobile-performance.mjs --out report.json
```

Reports, the frame comparison and the Het Kerkhof checks are in
`temp_work/mobile-performance-2026-10-30/`.

## Open

- gzip is off for this game on the website, which affects loading only.
