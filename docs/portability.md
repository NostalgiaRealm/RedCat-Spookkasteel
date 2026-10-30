# Platform architecture and validation

The editable core in `source/` uses ES modules and typed arrays. Preparation
combines it with Three.js into `src/game.bundle.js`; ordinary desktop, browser
and Android gameplay runs that bundle without loading individual modules. `source/collision.js`, `source/gameplay.js` and `source/animation.js` are independent of Electron. Asset conversion happens before packaging, producing PNG, float32 geometry, JSON and modern audio/video formats. A new platform does not need to parse legacy PE executables or Direct3D resources.

`source/world.js` owns WebGL rendering and camera/player integration. `source/main.js` owns the menu, HTML media, persistent settings, keyboard/mouse/touch/gamepad translation, and the frame loop. Its optional `window.desktop` bridge provides display, quit and save import/export actions, plus platform identification. `electron/main.cjs` implements that bridge with a sandboxed renderer and an application-local secure URL scheme. The browser build works without the bridge. Mobile browser input is implemented. Platform-specific build and runtime evidence is listed below; one platform’s success does not establish another’s compatibility.

This is the central platform-status reference. The [build guide](building.md) contains reproducible commands; the [implementation audit](native-parity-audit.md) covers gameplay fidelity. Status was reconciled with the retained release and Android records on 26 October 2026; this documentation update did not run builds or new platform tests.

## Release 1.0.8

The current release packages the bundled runtime for the six desktop targets and signed Android APK/AAB (version code 10). The source passed the full unit suite (1634 tests) and focused checks on Het Kerkhof ([mobile performance](mobile-performance.md)); all 111 browser scenes last passed in full for 1.0.7, as recorded in [the parity review](claude-native-parity-review.md#validation). The platform evidence below retains its historical version. See [the 1.0.8 notes](../RELEASE_NOTES_1.0.8).

## Linux and Windows

The existing npm packaging helpers target x64 Linux and x64 Windows. Both include Electron and imported resources. [The build guide](building.md#5-generate-portable-packages-when-ready) also gives direct-CLI recipes for Linux ARM64 and Windows ARM64 using the pinned Electron binaries. All four Linux/Windows targets were built, archived and published for **1.0.3**, as recorded in the [release record](../temp_work/release-1.0.3-2026-10-26/release-record.json). The six desktop archives and their uploaded checksums were verified; **1.0.3 package tests were deliberately not run**. Earlier Linux x64 packaged-runtime coverage, including a 1.0.1 software-rendered startup/save check, does not establish a new 1.0.3 runtime pass. Windows and ARM hardware runtime validation remains outstanding. The helpers still force x64, and the root launchers do not discover the ARM64 output directories; use the explicit build and launch commands in that guide.

The Linux launcher selects X11/XWayland before Electron starts, for consistent programmatic resolution/window sizing, and defaults to ANGLE OpenGL. Ozone must never be changed from the main script: Electron may already have selected Wayland, causing a native Wayland surface ID to be misused as an X11 window. The earlier forced Vulkan workaround masked the context failure but left native presentation blank. OpenGL works with the display backend selected at startup. Explicit `--ozone-platform` and `--use-angle` arguments and `REDCAT_GPU` remain available; direct executable launch uses Electron’s native window-system choice. Selected rendering dimensions remain exact when the desktop limits the physical window size. Fullscreen does not change the monitor's operating-system mode; it renders at the selected resolution and fits the image to the screen.

The latest save, settings and campaign progress use Chromium localStorage for the `redcat://game` origin, inside Electron's normal userData directory. The rolling 2/5/10-minute recovery history uses IndexedDB at that same origin. Browser hosting has its own origin and storage; it does not share desktop saves. The application exposes no network services in desktop mode. `tools/serve.mjs` binds only to loopback for browser development.

## macOS Intel and Apple Silicon

The pinned Electron version provides both Intel x64 and Apple Silicon ARM64 binaries. [The macOS build instructions](building.md#macos-intel-and-apple-silicon) cover source startup and separate app bundles for both architectures on a Mac, with ad-hoc signing for local development. Extending `tools/package.mjs` is not required for those direct CLI recipes; the helper itself still has no macOS target. The explicit package metadata version is separate from the Over dialog's display version.

Use Node.js 22.12+ for the build Mac's architecture, the same imported `assets/` and `data/`, and a fresh `npm ci`. No Intel-only native addon is used by the game's runtime. The Linux graphics overrides are guarded by platform and do not apply on macOS.

Unsigned Intel and Apple Silicon bundles were built on Linux and published for **1.0.3**; the [release record](../temp_work/release-1.0.3-2026-10-26/release-record.json) lists successful builds and verified upload hashes. No 1.0.3 package tests were run. Earlier [1.0.1 architecture and archive checks](../temp_work/release-1.0.1-2026-10-20/release-verification.json) retain their historical scope. Neither record establishes native Mac runtime support. Remaining validation and distribution polish:

1. Test the published bundles on actual Intel and Apple Silicon hardware; neither has a recorded native runtime pass.
2. Verify WebGL rendering, pointer lock, fullscreen, Retina resolution, media codecs, controls and save restoration.
3. Review Mac lifecycle behavior: the current shell quits when its last window closes.
4. Configure Developer ID signing, notarization and a distribution target such as DMG. The original app icon is already configured as `assets/icons/redcat.icns`; verify its appearance in the resulting bundle. Signing needs a macOS host; Linux/Windows are not a complete substitute for that release pipeline.

See the build guide for command options, output paths and the distinction between local ad-hoc bundles and public distribution. The current source does not configure a universal Mac release or a macOS CI workflow.

## Android

The Kotlin/WebView app in `android/` targets Android 16/API 36 with minimum API 29. It reuses the shared web game through a separate `RedCatAndroid` bridge, leaving Electron and ordinary browser behavior unchanged. See [ANDROID.md](../ANDROID.md) for setup, signing, builds and exact validation results, and [Google Play publication](android-google-play-release.md) for Console steps.

Implemented: generated offline assets, stable app-local HTTPS origin, restricted native messages, byte-range media, fullscreen/insets, Back handling, Activity/window/headphone suspension, pending-save completion on quit, per-player JSON import/export through the Android document picker, and renderer retry. WebView owns audio focus: a competing Activity request was removed after an emulator exposed a self-deadlock when playing menu voices. Automatic Android rendering retains the 720-pixel short-edge/1280×720 pixel budget. Touch and Gamepad controls remain shared.

The recorded 1.0.3 snapshot has signed APK/AAB builds and complete source/staging/package hash verification. Those artifacts predate the later bundling, efficiency and source-folder changes; current working-tree edits require a fresh build before release. Focused JVM/JavaScript and desktop/mobile-browser checks pass. An isolated Android 16 emulator ran the debug APK offline: intro/menu/Level 1, touch, pause/resume, rotation, local saves, in-place app update and document-provider import/export were checked. Release artifacts were inspected without launching them. Remaining device work:

- Physical Android 10/16 and low-end ARM64 performance, real Bluetooth/USB controllers, cutouts and multi-window.
- Calls, focus-only audio interruptions, headphones and renderer/context-loss recovery across actual WebView providers. The Android shell pauses on lifecycle/window loss; WebView's handling of background ambient/one-shot audio focus is provider-dependent.
- Sustained memory/frame time/thermal behavior and a full Android campaign playthrough. Existing streaming remains active; scripts/collision are preserved.
- Play test-track installation/update, pre-launch report, store declarations and production approval. Android cloud backup/device transfer remains disabled; manual JSON export/import is available.

The Electron desktop wrapper is not used on Android. Emulator and package verification do not establish universal physical-device support.

## Davi-Script portability

The DSO importer is Python standard-library code. The interpreter, script host,
brush motion sampler and camera-route sampler use ordinary JavaScript with no
Windows API, native addon, filesystem or DOM access. They can run unchanged on
ARM64. OS-specific packaging and input/audio lifecycle work remains in the shells.
