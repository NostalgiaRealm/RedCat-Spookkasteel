# Android app: setup, implementation and remaining work

Updated **6 October 2026**. An initial **Kotlin/Android WebView wrapper now exists**. It runs the shared JavaScript/Three.js game with bundled assets, targeting **Android 16 / API 36** and allowing installation on **Android 10 / API 29 or newer**.

The Kotlin code compiles and focused checks pass. **No APK/AAB has been generated or run on an Android device yet.** This document gives repeatable setup and validation commands, followed by the remaining work before a supported release.

## 1. Understand what is implemented

| Area | Current implementation |
| --- | --- |
| Native shell | `android/`: single hardware-accelerated WebView activity, launcher resources and Gradle wrapper. |
| Launcher icon | Original `RcHcGame.dat` icon, enlarged without smoothing and padded for adaptive launcher masks; themed icons use its transparency mask. |
| Offline files | `tools/prepare-android.mjs` stages the runtime and records file hashes; Gradle runs it before compilation. |
| Local origin | `https://appassets.androidplatform.net/assets/www/index.html`, served from packaged assets with AndroidX WebViewAssetLoader. |
| Native adapter | `src/android-host.js` uses the origin-restricted `RedCatAndroid` message endpoint. It does not impersonate Electron's `window.desktop`. |
| Display and input | Native fullscreen preference, system-bar/cutout insets, Back-button routing and existing touch/controller UI. |
| Interruptions | Lifecycle/audio-focus messages suspend gameplay, audio, intro/outro video and background rendering, clear held input, and keep gameplay paused on return. |
| Saves | Existing localStorage latest save and IndexedDB recovery history; Android quit waits for pending recovery capture. |
| Failure handling | Readable startup/old-WebView errors, renderer retry, and an audio-focus retry overlay that preserves the current WebView. |

Android-specific behavior requires the native bridge. Ordinary desktop and mobile browsers keep their existing resolution, fullscreen, touch detection and audio behavior. Electron source and packaging recipes are unchanged. The intentional music looping/scheduling changes remain intact.

## 2. Install the pinned tools

| Component | Version used |
| --- | --- |
| Node.js | 22.12.0 or newer; validation used 24.13.1 |
| JDK | **21**, validation used Temurin **21.0.12.1+1** |
| Gradle wrapper | **8.13** |
| Android Gradle Plugin | **8.13.2** |
| Kotlin plugin | **2.0.21** |
| Android SDK platform | **36** |
| Android SDK Build Tools | **36.0.0** |
| AndroidX WebKit / Activity / Core | **1.14.0 / 1.10.1 / 1.16.0** |

Use the committed Gradle wrapper, not a separately installed Gradle. AGP 8.13 requires at least JDK 17; this project was checked with JDK 21. **The workstation's default Java 25 cannot run Gradle 8.13**, so select JDK 21 explicitly. A directory named `java-21-openjdk` is not proof that a JDK is installed: check its `bin/java` and `bin/javac`. See [AGP 8.13 requirements](https://developer.android.com/build/releases/agp-8-13-0-release-notes) and [Android build JDKs](https://developer.android.com/build/jdks).

In Android Studio's SDK Manager, install Android SDK Platform 36, Build Tools 36.0.0 and Android SDK Platform-Tools. Install Android SDK Command-line Tools (latest) if you want `sdkmanager` commands. On this workstation the SDK is `/home/rick/Android/Sdk`; the platform/build tools already existed, but command-line tools were not installed.

With command-line tools installed, the equivalent packages are:

```sh
export ANDROID_HOME="$HOME/Android/Sdk"
"$ANDROID_HOME/cmdline-tools/latest/bin/sdkmanager" \
  "platforms;android-36" "build-tools;36.0.0" "platform-tools"
"$ANDROID_HOME/cmdline-tools/latest/bin/sdkmanager" --licenses
```

Read and accept the SDK licenses when prompted. Android Studio is an alternative way to install these packages and accept their licenses. No NDK or Genesis3D compilation is needed.

The SDK settings are in `android/app/build.gradle.kts`: `compileSdk = 36`, `targetSdk = 36`, `minSdk = 29`. The target controls Android behavior requirements; the minimum controls which OS versions may install the app. Supporting Android 10 still requires a sufficiently recent WebView and working WebGL 2. Google Play's API-36 target requirement does not mean the minimum must be 36. Recheck [Play target requirements](https://developer.android.com/google/play/requirements/target-sdk) before release; raise compile/target together when adopting a newer API. See [Android 16 SDK setup](https://developer.android.com/about/versions/16/setup-sdk).

### Optional: reproduce the local JDK installation

An existing JDK 21 installation is sufficient. To reproduce the exact **Linux x86_64** JDK used here without changing system Java, run this from the project root:

```sh
mkdir -p temp_work/android-initial-2026-10-06/toolchain
cd temp_work/android-initial-2026-10-06/toolchain
curl --fail --location --output OpenJDK21U-jdk_x64_linux_hotspot_21.0.12.1_1.tar.gz \
  'https://github.com/adoptium/temurin21-binaries/releases/download/jdk-21.0.12.1%2B1/OpenJDK21U-jdk_x64_linux_hotspot_21.0.12.1_1.tar.gz'
printf '%s  %s\n' \
  'ce79869e1307ed8ee1e2baa86a412b1eb5b75d10a01006d788a6f968bcfaee94' \
  'OpenJDK21U-jdk_x64_linux_hotspot_21.0.12.1_1.tar.gz' | sha256sum --check
tar -xzf OpenJDK21U-jdk_x64_linux_hotspot_21.0.12.1_1.tar.gz
cd ../../..
```

The downloaded archive and installed JDK are retained locally under `temp_work/android-initial-2026-10-06/toolchain/` and excluded from Git. Original release/checksum metadata is included in `temp_work/android-initial-2026-10-06/`; use the commands above to recreate the toolchain after cloning. Other host architectures need the matching JDK archive. Use the [official Temurin release](https://github.com/adoptium/temurin21-binaries/releases/tag/jdk-21.0.12.1%2B1), not this x86_64 archive on ARM or macOS.

## 3. Prepare the checkout and shell environment

Keep the imported `assets/` and `data/` alongside the source. If missing, follow [the asset/build instructions](docs/building.md) first. From a Linux shell:

```sh
cd /mnt/Storage/Cloud/Games/RedCat_Spookkasteel_Rebuild_2026/RCSPOOK_NEW
export REDCAT_ROOT="$PWD"
export ANDROID_HOME="$HOME/Android/Sdk"
export JAVA_HOME="$REDCAT_ROOT/temp_work/android-initial-2026-10-06/toolchain/jdk-21.0.12.1+1"
export PATH="$JAVA_HOME/bin:$ANDROID_HOME/platform-tools:$PATH"
mkdir -p "$REDCAT_ROOT/temp_work/android-local-validation/tmp"
export TMPDIR="$REDCAT_ROOT/temp_work/android-local-validation/tmp"
export JAVA_TOOL_OPTIONS="-Djava.io.tmpdir=\"$TMPDIR\""
java -version
javac -version
npm ci
cd android
./gradlew --version
cd ..
```

Replace the project/SDK/JDK paths when using another machine. `npm ci` installs the pinned Node dependencies; it does not import missing game assets. Android Studio users should select the same JDK under the project's Gradle settings. `ANDROID_HOME` locates the SDK; an ignored `android/local.properties` containing `sdk.dir=/absolute/path/to/sdk` is another option.

All research, temporary work, profiles and logs belong under `temp_work/` and are retained. `RCSPOOK_WEBSITE/` is not used. Gradle's ordinary dependency cache remains in its normal user directory. The wrapper ZIP checksum is pinned in `android/gradle/wrapper/gradle-wrapper.properties`; the verified wrapper JAR SHA-256 is `81a82aaea5abcc8ff68b3dfcb58b3c3c429378efd98e7433460610fecd7ae45f`.

## 4. Stage the game files

```sh
npm run android:prepare
```

This creates:

```text
android/app/build/generated/gameAssets/
├── asset-manifest.json
├── .redcat-android-assets.json    # Ownership marker, excluded from Android assets
└── www/
    ├── index.html
    ├── src/
    ├── assets/
    ├── data/
    └── node_modules/three/       # Whole installed package, including LICENSE/addons
```

The tool checks all five level metadata files, intro/outro MP4 and WebM files, and required Three.js files before replacing generated output. It preserves relative paths and filename case, rejects symlinks/unsafe output locations, and removes stale generated files only from output it owns. It does not include Electron, development dependencies other than Three.js, tests, original executables, the ISO or `temp_work/`.

The final initial staging contains **2,993 files / 195,051,239 bytes**, about **186 MiB** before APK compression. `asset-manifest.json` records deterministic per-file hashes and the combined content hash. The ownership marker contains local paths and is explicitly excluded by Gradle. Source changes cause Gradle to restage the assets; manual preparation is useful for inspection, but is not a required extra step before each Gradle compile.

Do not edit staged files. Edit the shared source/assets instead. An advanced `--output` option is available for an owned output directory inside the project, but Gradle always uses the default directory above.

## 5. Understand native behavior and storage

### Local content and browser boundary

The app loads `https://appassets.androidplatform.net/assets/www/index.html`. It is an app-local HTTPS origin, not a hosted website. `GameAssets.kt` serves the packaged content, returns MIME types and missing-file errors, and supports single byte-range responses for uncompressed media/binary files. Invalid paths never fall through to the network. The app requests no INTERNET permission, disables file/content access and mixed content, and only opens the allowlisted About links in an external browser.

The native message endpoint is restricted to the main frame at that origin using AndroidX `WebViewCompat.addWebMessageListener`. Debug builds permit WebView inspection; release builds disable it. See [local WebView content](https://developer.android.com/develop/ui/views/layout/webapps/load-local-content) and [WebViewCompat](https://developer.android.com/reference/androidx/webkit/WebViewCompat).

### Display, Back, focus and interruptions

Android fullscreen follows the saved setting and is on by default. Native insets keep controls away from system bars, cutouts and mandatory gesture edges. The existing touch on/off/auto preference remains available. Automatic Android render resolution preserves aspect ratio, limits the short edge to 720 pixels and limits total pixels to 1280 × 720; explicit resolution selections remain available. Ordinary browser/Electron automatic resolution is unchanged. This is an initial phone budget, not a measured performance guarantee.

Back closes a submenu or pauses gameplay; from the pause menu it returns to the main menu, and from the main menu it saves and exits. Loading ignores game Back navigation until it finishes. Foreground state and audio focus control availability. When focus is denied/lost, a native retry panel covers the existing WebView without discarding it. Headphone removal also pauses playback.

Backgrounding pauses game audio and its AudioContext, freezes rendering/simulation/save clocks, clears held input and suspends video without rewinding. Gameplay remains paused after returning; suspended video offers **Verder kijken**. A level that finishes loading while hidden also stays paused and silent. This does not change sound/music scheduling. See [Android audio focus](https://developer.android.com/media/optimize/audio-focus) and [activity lifecycle](https://developer.android.com/guide/components/activities/activity-lifecycle).

### Saves and recovery limits

The stable app ID and HTTPS origin retain localStorage settings/latest save and IndexedDB 2/5/10-minute recovery history. Normal autosave continues, leaving gameplay captures a save, and Android Back from the main menu waits for recovery capture before asking Android to finish. There is no quit button in the game menu. Debug uses `com.nostalgiarealm.redcatspookkasteel.debug`; release uses `com.nostalgiarealm.redcatspookkasteel`. These have separate saves, also separate from browser and Electron saves.

Cloud backup/device transfer are explicitly disabled for this initial app. Uninstalling or clearing app data deletes its saves. There is no native atomic backup or cross-app save import/export yet. Do not promise survival of an arbitrary process kill from JavaScript checks alone: validate actual process-death and app-update persistence on Android before release.

Renderer termination shows a retry screen; after reopening, use **Verder spelen** to restore the latest stored save. Missing bridge support or startup failure shows a readable error. A tested minimum WebView version and complete WebGL context-loss recovery still need device validation.

## 6. Run only the relevant checks

From the project root, with the environment from step 3:

```sh
node --test tests/android-assets.test.mjs tests/android-host.test.mjs tests/intro-playback.test.mjs
node tests/android-host-scenes.mjs
node tests/android-desktop-scenes.mjs
cd android
./gradlew --no-daemon --max-workers=2 \
  :app:compileDebugKotlin :app:testDebugUnitTest :app:mergeDebugAssets :app:lintDebug
cd ..
```

The browser scene check needs Playwright's installed Node dependency and Google Chrome (default `/usr/bin/google-chrome`, override with `CHROME_PATH`). It launches an isolated local server/profile and tests a simulated native bridge plus ordinary desktop/mobile browser contexts. `ANDROID_TEST_SCOPE=native node tests/android-host-scenes.mjs` runs only the native bridge/visibility subset. These are Chrome checks, not Android emulator tests. The script uses relative `TMPDIR=temp_work` because Chromium Unix socket paths can exceed their length limit inside a deeply nested absolute temporary directory.

The focused Electron check uses the existing app source, an isolated save profile and a graphical desktop session; Linux needs X11/XWayland. It does not package the desktop app or run the historical gameplay test suite. Profiles/reports/screenshots are retained under `temp_work/android-initial-2026-10-06/`.

Gradle tasks above compile Kotlin/resources, run JVM tests, merge assets and lint. They **do not create an installable APK or AAB**, though resource/compiler intermediates are generated. First-time dependency downloads require network access. Windows uses `gradlew.bat` and Windows environment syntax; the supplied shell examples and validation were performed on Linux. If resources are moved and an incremental merge reports a stale missing resource, rerun the affected Gradle tasks with `--rerun-tasks`.

### Results from the initial implementation

- Asset preparation: **7 unit tests passed**.
- Host adapter and intro playback: **18 unit tests passed**.
- Full browser integration: **12 checks passed**, with no page errors, covering simulated Android plus desktop/mobile browsers.
- Final native-only visibility checks: **9 checks passed**, including hidden level-loading completion and visibility arriving before native pause messages.
- Existing Linux Electron app: intro, Level 1, saving, pause/resume and native fullscreen/windowed switching passed with no page errors.
- Android Kotlin compilation, asset merge and **10 JVM tests passed**. Lint reported **0 errors**; remaining warnings concern pinned dependency versions, newer platform attributes and a leftover empty resource-folder qualifier.
- Merged assets exclude the local ownership marker. Current frontend files match the staged hashes. No APK/AAB was generated.

Evidence is under `temp_work/android-initial-2026-10-06/`: `validation-summary.json`, `host-unit-tests.log`, `native-validation-summary.json`, `native-final-validation-02.log`, `native-lint-final.txt`, `staged-assets-check.json`, and retained scene profiles/reports. Initial failed setup/check attempts are retained too; the summary identifies the final successful runs. Windows desktop execution and actual Android execution were not tested during this work.

## 7. Build a debug APK later, when ready for device testing

These are available commands, **not commands run during this initial implementation**:

```sh
cd android
./gradlew --no-daemon --max-workers=2 :app:assembleDebug
adb devices
adb install -r app/build/outputs/apk/debug/app-debug.apk
adb shell am start -n com.nostalgiarealm.redcatspookkasteel.debug/com.nostalgiarealm.redcatspookkasteel.MainActivity
```

Enable developer options/USB debugging and authorize the development computer on the device first. Use `adb -s SERIAL` with multiple devices. Keep the same application ID and signing key when updating; do not uninstall a player's app to replace it with an incompatible signing key. See [command-line Android builds](https://developer.android.com/build/building-cmdline).

For a reproducible capture, keep logs in this project's work directory, for example from the project root:

```sh
adb logcat -d > temp_work/android-local-validation/device-logcat.txt
adb shell dumpsys webviewupdate > temp_work/android-local-validation/device-webview.txt
```

Do not call the Android version supported until the device checks below pass.

## 8. Complete device validation and release work

1. **Offline launch and media:** test cold launch in airplane mode, menu, both intro/outro formats, media seeking, textures, binary level data and WAV audio. Record WebView provider/version and establish its minimum; check ES modules/import maps, WebGL 2, Web Audio and IndexedDB.
2. **OS/device matrix:** test the API-36 target on Android 16, an API-29 emulator and physical Android 10 hardware, plus a low-end ARM64 device. Check portrait/landscape, rotation, cutouts, multi-window and system-edge gestures.
3. **Interruptions and saves:** test Home, lock/unlock, calls/audio focus, headphones, process death, app relaunch and updates. Verify latest and older recovery saves. Add an acknowledged atomic app-private backup/export path if WebView persistence proves insufficient.
4. **Controls and campaign:** test simultaneous movement/look/jump/shoot, charged shots, SuperSkippie, skipping, settings, cheats, debriefing and real USB/Bluetooth controllers. Then make one deliberate five-level campaign pass including bosses, portals and complete audio loops.
5. **Performance/recovery:** measure long-session frame times, RAM, GPU resources, texture/audio memory and heat, especially the Graveyard. Preserve existing streaming and bounded AI; distant scripts/collision still need to run. Validate renderer termination and WebGL context loss without silently discarding progress.
6. **Distribution:** measure APK download/install size. Bundled assets are the initial design; use [Play Asset Delivery](https://developer.android.com/guide/playcore/asset-delivery) only if needed. Configure and securely retain release signing credentials outside source control, then test the signed build itself.

Release signing is **not configured**. After adding a release signing configuration, the standard tasks are `:app:assembleRelease` for an APK and `:app:bundleRelease` for an AAB. An AAB is a publishing artifact, not directly installable with `adb install`. Increase `versionCode` for updates and retain the signing identity. No native game libraries are bundled, but if plugins/native dependencies are introduced, check ABIs and [16 KB page-size compatibility](https://developer.android.com/guide/practices/page-sizes).

The next milestone is an offline Level 1 run on real Android hardware with reliable touch, audio and save/resume. Compilation and browser emulation do not establish that milestone by themselves.
