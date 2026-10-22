# Platform architecture and remaining ports

The core is ES modules and typed arrays. `src/collision.js`, `src/gameplay.js` and `src/animation.js` are independent of Electron. Asset conversion happens before packaging, producing PNG, float32 geometry, JSON and modern audio/video formats. A new platform does not need to parse legacy PE executables or Direct3D resources.

`src/world.js` owns WebGL rendering and camera/player integration. `src/main.js` owns the menu, HTML media, persistent settings, keyboard/mouse/touch/gamepad translation, and the frame loop. Its optional `window.desktop` bridge only has display and quit actions. `electron/main.cjs` implements that bridge with a sandboxed renderer and an application-local secure URL scheme. The browser build works without the bridge. Mobile browser input is implemented; that does not establish a validated Android application package or Apple Silicon release.

## Linux and Windows

The existing npm packaging helpers target x64 Linux and x64 Windows. Both include Electron and imported resources. [The build guide](building.md#5-generate-portable-packages-when-ready) also gives experimental direct-CLI recipes for Linux ARM64 and Windows ARM64 using the pinned Electron binaries. Those packages and target devices have not yet been validated. The helpers still force x64, and the root launchers do not discover the ARM64 output directories; use the explicit build and launch commands in that guide.

The Linux launcher selects X11/XWayland before Electron starts, for consistent programmatic resolution/window sizing, and defaults to ANGLE OpenGL. Ozone must never be changed from the main script: Electron may already have selected Wayland, causing a native Wayland surface ID to be misused as an X11 window. The earlier forced Vulkan workaround masked the context failure but left native presentation blank. OpenGL works with the display backend selected at startup. Explicit `--ozone-platform` and `--use-angle` arguments and `REDCAT_GPU` remain available; direct executable launch uses Electron’s native window-system choice. Selected rendering dimensions remain exact when the desktop limits the physical window size. Fullscreen does not change the monitor's operating-system mode; it renders at the selected resolution and fits the image to the screen.

The latest save, settings and campaign progress use Chromium localStorage for the `redcat://game` origin, inside Electron's normal userData directory. The rolling 2/5/10-minute recovery history uses IndexedDB at that same origin. Browser hosting has its own origin and storage; it does not share desktop saves. The application exposes no network services in desktop mode. `tools/serve.mjs` binds only to loopback for browser development.

## macOS Intel and Apple Silicon

The pinned Electron version provides both Intel x64 and Apple Silicon ARM64 binaries. [The macOS build instructions](building.md#macos-intel-and-apple-silicon) cover source startup and separate app bundles for both architectures on a Mac, with ad-hoc signing for local development. Extending `tools/package.mjs` is not required for those direct CLI recipes; the helper itself still has no macOS target. The explicit package metadata version is separate from the Over dialog's display version.

Use Node.js 22.12+ for the build Mac's architecture, the same imported `assets/` and `data/`, and a fresh `npm ci`. No Intel-only native addon is used by the game's runtime. The Linux graphics overrides are guarded by platform and do not apply on macOS.

Remaining work before a macOS release:

1. Produce and test the bundles on actual Intel and Apple Silicon hardware; neither is a validated release yet.
2. Verify WebGL rendering, pointer lock, fullscreen, Retina resolution, media codecs, controls and save restoration.
3. Review Mac lifecycle behavior: the current shell quits when its last window closes.
4. Add the intended app icon, Developer ID signing, notarization and a distribution target such as DMG. Signing needs a macOS host; Linux/Windows are not a complete substitute for that release pipeline.

See the build guide for command options, output paths and the distinction between local ad-hoc bundles and public distribution. The current source does not configure a universal Mac release or a macOS CI workflow.

## Android

Use the same web core in an Android WebView-capable app shell. The current desktop Electron wrapper cannot be reused on Android.

Required changes:

- Browser touch input is implemented in `src/touch-controls.js` and combined with keyboard/mouse actions in `src/main.js`. Standard Gamepad API controls are implemented in `src/gamepad-input.js`; validate touch and controller support in the chosen Android shell. See [touch-controls.md](touch-controls.md).
- Use an app-local secure origin for packaged resources and replace desktop quit/window behavior with Android lifecycle handling.
- Integrate Android backgrounding, storage and audio focus with the existing browser pause/input-reset behavior. Verify saving on backgrounding, resuming audio after a user gesture and recovery from WebGL context loss in the chosen shell.
- Safe-area-aware portrait/landscape touch controls and scrollable menus are available. Verify device-specific browser bars, display cutouts and WebView viewport behavior on actual devices.
- Validate memory and sustained performance using the existing camera/PVS-based world and actor GPU streaming, shared resources and bounded AI work. Collision/scripts and cached CPU data remain resident; streaming is not whole-level RAM eviction. See [world streaming](world-streaming.md). Choose a suitable mobile rendering resolution and profile remaining device bottlenecks.
- Test WebGL 2, shader precision, video decoding, headphones/audio focus and sustained thermal performance on multiple physical devices.
- Create and sign an APK/AAB with an Android toolchain.

Do not describe Android as supported until these steps and gameplay tests pass.

## Davi-Script portability

The DSO importer is Python standard-library code. The interpreter, script host,
brush motion sampler and camera-route sampler use ordinary JavaScript with no
Windows API, native addon, filesystem or DOM access. They can run unchanged on
ARM64. OS-specific packaging and input/audio lifecycle work remains in the shells.
