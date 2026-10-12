# MangoHud with Electron on native Wayland

Investigated 7 October 2026 for:

```sh
mangohud npm start -- --ozone-platform=wayland
```

## Confirmed locally

- The MangoHud wrapper passes `MANGOHUD=1` and its shim through npm. This was
  checked using `mangohud npm exec -- node` to inspect the inherited variables.
- The project selects ANGLE OpenGL (`--use-angle=gl`) unless overridden.
- An isolated Electron instance of this project on native Wayland loaded both
  `libMangoHud_shim.so` and `libMangoHud_opengl.so` in its GPU process, together
  with Mesa EGL. A continuously animated WebGL canvas had no visible overlay.
- The equivalent X11 instance loaded the same MangoHud libraries with Mesa GLX
  and visibly displayed the overlay, showing about 144 FPS in this small probe.
  This is not a level-performance benchmark.
- The configuration does not blacklist Electron or enable `no_display`.
  A minimal test configuration also reproduced the native Wayland failure.
- Installed Fedora packages report `0.8.3~rc1-2.fc44`; the wrapper's hardcoded
  `--version` text says `v0.8.2`. The package version is the useful identifier.

These checks isolate a native-Wayland presentation/overlay compatibility problem,
not lost npm environment variables, missing MangoHud libraries, or a game HUD
setting. Chromium has a separate GBM/surfaceless presentation path on Wayland;
that is a plausible mechanism for bypassing normal swap-buffer overlay hooks.
No function-level trace was taken, so that precise internal hook failure remains
an inference. See [Chromium's Wayland surface factory](https://chromium.googlesource.com/chromium/src/%2B/5bf8b001af6ea9413037fabff149c30679a91290/ui/ozone/platform/wayland/gpu/wayland_surface_factory.cc)
and [MangoHud's OpenGL instructions](https://github.com/flightlessmango/MangoHud#opengl).

## Working launch

From the project directory:

```sh
mangohud npm start -- --ozone-platform=x11
```

This runs the application via XWayland within the existing Wayland desktop; it
requires no desktop-session change. To explicitly override any MangoHud cap:

```sh
MANGOHUD_CONFIG=read_cfg,fps_limit=0 mangohud npm start -- --ozone-platform=x11
```

For native Wayland, the game's own FPS counter remains available in settings.
An ANGLE Vulkan probe loaded the Vulkan MangoHud library but did not yield a
valid visible application screenshot, so it is not a verified workaround.
`--dlsym` is already a no-op in the installed wrapper and is not a fix here.

## Evidence

`temp_work/mangohud-wayland/check.mjs` reproduces the comparison with isolated
profiles, leaving the player's saves unchanged. Subdirectories `wayland/` and
`x11/` contain GPU-library reports and actual Spectacle window screenshots.
`vulkan/` retains the inconclusive alternative probe; its window capture showed
the desktop application behind the test, not a valid game result.

No game source, global MangoHud settings, or desktop settings were changed. No
build was created.
