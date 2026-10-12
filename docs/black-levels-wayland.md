# Cutscene black levels on Wayland

Investigated 7 October 2026 after the user sampled `#0E0C10` from the
letterbox bars in `Screenshot_20261007_180144.png`.

The bars were explicitly styled `#060407`, a near-black purple. Unused canvas
margins were `#05080d`. Both now use opaque `#000000`. No world lighting,
texture colour space, exposure, gamma or desktop colour settings were changed.

A small Electron probe used the project's installed Electron, native Wayland,
`use-angle=gl` and the existing `force-color-profile=srgb` switch. It loaded the
real stylesheet and compared the old colour, pure CSS black, a WebGL2 clear to
black, and white. Both Electron capture and a Spectacle window capture recorded:

| Source | Captured RGB |
| --- | --- |
| Old `#060407` swatch | `#0E0C10` |
| CSS `#000000` | `#000000` |
| WebGL clear `(0, 0, 0, 1)` | `#000000` |
| White | `#FFFFFF` |
| Corrected cutscene bars | `#000000` |

Thus the old bar colour reproduces the exact reported pixel. True black is
preserved along this rendering/capture path; this does not suggest a global
black-level offset or justify darkening the entire game. The probe does not
establish the correctness of every intermediate colour or physical panel
calibration. The currently reported display configuration was full RGB range,
HDR off, no ICC profile, sRGB.

Evidence and the reproducible probe are retained in `temp_work/black-levels/`:
`probe.cjs`, `probe.html`, `check.mjs`, `computed.json`, `pixels.json`,
`electron-page.png` and `wayland-window.png`. Run from the project root:

```sh
TMPDIR=./temp_work node temp_work/black-levels/check.mjs
```

This uses an isolated profile and does not modify the player's saves. Restart
the game launched with `npm start -- --ozone-platform=wayland` to load the CSS
change. No build was created.
