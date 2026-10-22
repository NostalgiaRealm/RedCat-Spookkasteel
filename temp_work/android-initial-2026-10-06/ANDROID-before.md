# Roadmap: an app targeting Android 16 / API 36+

This is a step-by-step implementation plan, checked against the project on **5 October 2026**, with the Android SDK target clarified on **6 October 2026**. There is no Android app, Gradle project or Android build command in this repository yet. The commands near the end become usable only after the preceding work is implemented.

The recommended starting point is a small **Kotlin Android app containing a WebView**, which runs the existing JavaScript/Three.js game and its imported assets. Keep one shared game implementation for desktop, browser and Android. The Electron executable and Linux ARM64 package cannot be turned into an APK; replace the application wrapper, not the game engine.

## 1. Define the compatibility target

Target **Android 16 / API 36 or higher**, while retaining compatibility with **Android 10.0 / API 29 and newer**. The target API determines which Android behavior requirements the app implements; the minimum API determines which devices may install it.

| Setting or requirement | What to do |
| --- | --- |
| `minSdk` | Set to **29**. This is the oldest Android OS allowed to install the app. |
| `targetSdk` | Set to **36 or higher**: Android 16 or a later target required at release time. Implement and test that target's behavior requirements. |
| `compileSdk` | Set to **36 or higher**, at least as new as `targetSdk` and compatible with the selected Android libraries. |
| WebView and GPU | Require a tested WebView provider with WebGL 2 and the browser APIs used by the game. Android 10 alone does not guarantee those capabilities. |

As of **6 October 2026**, Google Play requires new phone/tablet apps to target **API 36 or higher**. This requirement applies to `targetSdk`; it does not require `minSdk = 36` or prevent supporting older devices. Recheck the target requirement when implementing and releasing. See [Android 16 / API 36 setup](https://developer.android.com/about/versions/16/setup-sdk), [SDK configuration](https://developer.android.com/build) and [Play target requirements](https://developer.android.com/google/play/requirements/target-sdk).

The initial Gradle SDK configuration should therefore be:

```kotlin
android {
    compileSdk = 36
    defaultConfig {
        minSdk = 29
        targetSdk = 36
    }
}
```

Raise `targetSdk` and `compileSdk` together when adopting a newer target. Keep the minimum at 29 unless the project separately decides to drop Android 10 compatibility.

Use the existing browser game for an initial smoke check on a physical Android 10 device. Then use the minimal WebView shell from steps 2–4 to establish the oldest tested WebView provider version; a browser test does not exercise that provider. Check ES modules/import maps, WebGL 2, Web Audio, IndexedDB and video decoding. Add a readable compatibility screen before starting the game when essential features are missing. Do not advertise support for every Android 10 device until this is measured.

## 2. Create the Android application shell

Install Android Studio, the **Android 16 / API 36 SDK or the newer selected SDK**, compatible build tools, platform-tools (`adb`) and the JDK required by the chosen Android Gradle Plugin. Use the existing Node/npm prerequisites from [the build guide](docs/building.md) for preparing web files. Pin the Android toolchain and libraries, commit the Gradle wrapper, and choose versions whose minimum OS remains at or below API 29. See [Android build JDK requirements](https://developer.android.com/build/jdks).

Create a new `android/` project with one activity hosting a hardware-accelerated WebView. Use AndroidX WebKit for local content loading. Assign a stable application ID, launcher icon, app name, increasing `versionCode` and readable `versionName`. There is no need to compile Genesis3D or introduce C++/the NDK for this design.

Proposed files to add, **not existing build entry points**:

| File or area | Purpose |
| --- | --- |
| `android/` | Gradle project, manifest, activity, WebView setup and Android resources. |
| `tools/prepare-android.mjs` | Copy and verify only the web runtime files into generated Android assets. |
| `src/android-host.js` | Small, optional adapter for Android lifecycle, display and save messages. |
| Focused Android checks | Asset loading, host events, storage and physical-device validation. |

Keep research, diagnostic logs and device captures in `temp_work/android-…/`, retaining them for comparison. Do not use or modify `RCSPOOK_WEBSITE/`.

## 3. Package the existing web game for offline use

Run `npm ci` and reuse the already imported game data. The preparation tool should copy this structure into a generated Android assets directory, preserving relative paths and filename case:

```text
www/
├── index.html
├── src/
├── assets/
├── data/
└── node_modules/three/    # Include build/, examples/jsm/ and LICENSE
```

Keep both `three.module.js` and `three.core.js`; the current HTML import map also references Three.js addons. Exclude Electron, other development dependencies, tests, desktop packages, original Windows executables, the ISO and `temp_work/`. Make asset preparation a Gradle prerequisite so stale copied files cannot silently ship.

The inspected source content is roughly **186 MiB before APK compression** when the whole installed Three.js package is included. Measure the actual packaged download and installed size; this estimate is not a store-size guarantee. Start with bundled assets so all five levels work offline. If delivery size later requires asset packs, add download/readiness handling and keep the same game URLs through the asset loader. [Play Asset Delivery](https://developer.android.com/guide/playcore/asset-delivery) is an optional distribution step, not a prerequisite for a local test APK.

## 4. Load the game through a stable local HTTPS origin

Use `WebViewAssetLoader` to map the packaged content to an address such as:

```text
https://appassets.androidplatform.net/assets/www/index.html
```

This is local app content, not a website that needs an internet connection. Enable JavaScript and DOM storage, route requests through the loader, and return correct MIME types and missing-file errors. Keep the current content-security policy and relative paths. Avoid `file://` loading and broad file-access workarounds. Android documents this approach in [loading in-app content](https://developer.android.com/develop/ui/views/layout/webapps/load-local-content) and [WebSettings](https://developer.android.com/reference/android/webkit/WebSettings).

Verify JSON, binary geometry, textures, WAV audio, and both intro/outro media formats in airplane mode. Test media seeking and interrupted playback; implement range-aware media responses if the chosen loader cannot satisfy playback requests. The HTML currently uses an import map: either establish a tested WebView minimum that supports it, or add a web bundling step that removes that dependency.

Restrict the game WebView and native messages to the app's origin. Open the About page's external links in the system browser. Do not grant those external pages access to a game bridge.

**Completion check:** the menu, intro and a playable level load entirely from the APK without a desktop server or internet connection.

## 5. Add Android display, Back and quit behavior

Use a separate Android adapter; do **not** pretend the wrapper is `window.desktop`. In the current source that object's presence changes automatic touch detection, intro playback and fullscreen handling.

Connect the saved fullscreen preference to Android immersive mode, retaining the current default of fullscreen on. Apply window/cutout insets to the HUD and controls, and handle resize, portrait/landscape and multi-window changes. Android fullscreen hides system bars; it does not change the display's resolution. See [immersive system-bar handling](https://developer.android.com/develop/ui/views/layout/immersive).

Route Android Back through the game's UI: close the current submenu first, otherwise pause gameplay, and only exit from an appropriate menu. Make **Afsluiten** save and finish the activity. Preserve settings when returning to the app. Keep the screen awake while actively playing or watching a cutscene, and release that behavior when backgrounded.

## 6. Make interruptions pause everything reliably

Add explicit Android lifecycle and audio-focus messages to the game adapter. Reuse the existing gameplay pause/input-reset logic, but cover **all modes**, including intro/outro video and level loading.

Current gaps to address:

- `src/main.js` handles blur/visibility changes, but `pause()` only handles playing mode; an intro/outro needs separate media suspension.
- `GameAudio.pause()` pauses voices; coordinate the Web Audio context, HTML video and native audio focus as well.
- The frame loop can still render while paused. Stop background rendering without advancing simulation, dialogue, autosave or recovery clocks.
- Clear held touch/controller input when interrupted. On return, show a paused state and resume from the same positions after the player's action; do not apply a large elapsed-time step.

Test Home, screen lock, calls/audio interruptions, headphones disconnecting and switching apps. Preserve the port's intentional music looping and sound scheduling; lifecycle integration should suspend/resume them, not replace their timing with native-game scheduling. See [activity lifecycle](https://developer.android.com/guide/components/activities/activity-lifecycle) and [audio focus](https://developer.android.com/media/optimize/audio-focus).

## 7. Preserve saves when Android destroys the app

The existing latest save/settings/progress use localStorage, and the 2/5/10-minute recovery history uses IndexedDB. Keep a persistent WebView profile and stable origin across launches and app updates. Android app saves will be separate from browser and Electron saves unless an explicit import/export feature is added.

Retain the one-minute autosave and recovery system. Make capture completion observable: the current `saveGame()` starts recovery storage asynchronously without awaiting it. Persist during normal play and request an extra save when leaving gameplay; do not rely only on `beforeunload`, a final lifecycle callback, or completion of late JavaScript after the process is killed.

Add an acknowledged, atomic app-private backup of the latest complete game snapshot if WebView persistence cannot meet the recovery requirements. Decide backup/restore and export behavior explicitly; keep original save schemas and report storage failures. Never silently clear saves on an ordinary app update.

**Completion check:** save, background, kill the app process, relaunch and recover; repeat after an app update and with the older recovery entries. Clearing app data/uninstalling is a separate operation and must not be confused with ordinary process death.

## 8. Verify existing touch and controller controls in the wrapper

Reuse [touch controls](docs/touch-controls.md), `src/gamepad-input.js` and `src/gamepad-menu.js`. Touch detection and its automatic/on/off setting already exist; preserve the user's override and the accessible Menu button when touch is off.

Check simultaneous movement/look/jump/shoot, charged shots, SuperSkippie, two-second skipping, settings, cheats, saving/recovery and the debriefing continue button. Check system-edge gestures, screen cutouts, cancelled touches and screen rotation. Pair a real Bluetooth/USB controller and test menu navigation and reconnection; browser controller support does not prove a particular WebView/controller pairing works. Add native input forwarding only if that testing identifies a gap.

## 9. Set a mobile performance budget and recover from renderer loss

Start with a conservative render resolution, such as a **720-pixel landscape short edge** while preserving aspect ratio, then measure and expose suitable settings. This is an initial tuning proposal, not a proven device requirement. The current automatic resolution multiplies viewport size by device-pixel ratio and can request too many pixels on phones.

Retain the existing [world/actor graphics streaming](docs/world-streaming.md), shared resources and bounded AI work. Do not remove distant-but-visible scenery or stop offscreen scripts to increase FPS. CPU geometry/animation and collision data remain resident; measure RAM as well as GPU resources, texture uploads, decoded audio, frame-time spikes and sustained heat. Use low-end hardware and prolonged play, especially the Graveyard, before choosing final quality defaults.

Add an explicit response to WebGL context loss and WebView renderer-process termination: pause safely, rebuild/reload what is necessary, then offer restoration from the latest complete save. Three.js has internal context handling, but that is not a complete game-state recovery strategy. See [managing WebView renderer processes](https://developer.android.com/develop/ui/views/layout/webapps/managing-webview).

## 10. Validate the Android app on a small device matrix

Test the **API 36-targeted build on Android 16 / API 36** for target-specific OS behavior, plus newer Android versions as available. Also use an API 29 emulator and **physical Android 10 hardware** to verify the minimum supported OS, including graphics, media and performance. Include a low-end ARM device, portrait/landscape layouts and a controller. Record model, OS, WebView version, RAM, render resolution and frame-time results. If adopting a target newer than 36, add tests on that target's Android release.

During implementation, run only tests for the changed systems. Before calling the Android app release-ready, make one deliberate Android campaign pass covering all five levels, boss fights, cutscenes, upgrades, portals, level transitions, complete audio loops, saving/recovery and prolonged play. Include airplane-mode cold startup, app-update save retention, background/process-death recovery and failure messages for unsupported graphics.

The proposed shell has no bundled native game libraries, so its JavaScript game code is not an ARM64-only binary. Start hardware validation on ARM64 and use x86_64 emulators as appropriate; make no claim about untested 32-bit devices. If plugins or native libraries are added, check their ABIs and current Android/Play compatibility, including [16 KB page-size support](https://developer.android.com/guide/practices/page-sizes).

## 11. Generate debug and signed release artifacts

**Future commands — only after `android/`, its Gradle wrapper, asset preparation and signing configuration exist.** From the project root on Linux/macOS:

```sh
npm ci
cd android
./gradlew assembleDebug
adb install -r app/build/outputs/apk/debug/app-debug.apk
```

Once release signing is configured, choose the artifact needed:

```sh
./gradlew assembleRelease    # APK for direct installation/distribution
./gradlew bundleRelease      # AAB for Google Play
```

Windows uses `gradlew.bat` instead of `./gradlew`. With the proposed standard `app` module and no product flavors, outputs are under `android/app/build/outputs/apk/` and `android/app/build/outputs/bundle/`; exact release names depend on signing configuration. An AAB is a publishing artifact, not something installed with `adb install`. See [command-line Android builds](https://developer.android.com/build/building-cmdline) and [App Bundles](https://developer.android.com/guide/app-bundle).

Keep release keys/passwords outside source control and preserve the signing identity for updates. Configure debug-only WebView inspection, disable it in release, and verify the signed release itself. A debug build and release build normally use different signing keys: use separate development application IDs or an explicit save transfer rather than uninstalling the player's app to switch them.

## 12. Document the supported release

Replace this roadmap's proposed commands with the actual setup and build steps once implemented. Record the tested OS/WebView/device range, default resolution, known limitations, asset delivery method, signing procedure and focused checks. If Google Play is chosen, recheck its target-SDK and asset-size requirements at release time; direct APK distribution still needs working Android lifecycle, storage and graphics.

The first useful milestone is **an API 36+ targeted build running offline Level 1 on Android 16 and Android 10, with touch, audio and reliable save/resume**. A completed Android port additionally needs the full campaign and release checks above. No Android build or implementation was produced by writing this roadmap.
