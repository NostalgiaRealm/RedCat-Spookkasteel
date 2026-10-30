# Android app: build and Google Play release

Updated **26 October 2026**; initial implementation **6 October 2026**. The **Kotlin/Android WebView app** bundles the prepared game runtime and original assets. It runs the shared JavaScript/Three.js game with bundled assets, targeting **Android 16 / API 36** and allowing installation on **Android 10 / API 29 or newer**.

The current release configuration builds version **1.0.8**, Android `versionCode = 10`. The 1.0.8 source was checked with the full unit suite plus focused checks on Het Kerkhof, and the browser scenes were last run in full for 1.0.7; the device validation below describes the earlier 1.0.3 work. The procedures below cover offline asset staging, debug validation, private upload-key signing, and a Google Play AAB plus a directly installable APK. See the final validation section for what was actually checked, and [the Google Play guide](docs/android-google-play-release.md) for owner-account publication steps.

## 1. Understand what is implemented

| Area | Current implementation |
| --- | --- |
| Native shell | `android/`: single hardware-accelerated WebView activity, launcher resources and Gradle wrapper. |
| Launcher icon | Original `RcHcGame.dat` icon, enlarged without smoothing and padded for adaptive launcher masks; themed icons use its transparency mask. |
| Offline files | `tools/prepare-android.mjs` stages the runtime and records file hashes; Gradle runs it before compilation. |
| Local origin | `https://appassets.androidplatform.net/assets/www/index.html`, served from packaged assets with AndroidX WebViewAssetLoader. |
| Native adapter | `source/android-host.js` uses the origin-restricted `RedCatAndroid` message endpoint. It does not impersonate Electron's `window.desktop`. |
| Display and input | Native fullscreen preference, system-bar/cutout insets, Back-button routing and existing touch/controller UI. |
| Interruptions | Activity/window-focus messages suspend gameplay, audio, intro/outro video and background rendering, clear held input, and keep gameplay paused on return. |
| Saves | Per-player localStorage latest save and IndexedDB recovery history; Android quit waits for pending recovery capture. Spelerlijst exports a selected player through the document picker. |
| Failure handling | Readable startup/old-WebView errors and renderer retry without clearing local progress. |

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
cd "/home/rick/Documents/Rebuilds/RedCat Spookkasteel/RCSPOOK_NEW"
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

Research and temporary validation output belong under `temp_work/`. Useful findings, scripts and logs are retained; the 22 October cleanup removed disposable browser profiles, copied saves, screenshots and duplicates. See the [retained research index](temp_work/README.md). `RCSPOOK_WEBSITE/` is not used. Gradle's ordinary dependency cache remains in its normal user directory. The wrapper ZIP checksum is pinned in `android/gradle/wrapper/gradle-wrapper.properties`; the verified wrapper JAR SHA-256 is `81a82aaea5abcc8ff68b3dfcb58b3c3c429378efd98e7433460610fecd7ae45f`.

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
    ├── src/                    # Generated bundle, source map and runtime CSS
    ├── assets/
    ├── data/
    └── node_modules/three/       # Whole installed package, including LICENSE/addons
```

The tool checks all five level metadata files, intro/outro MP4 and WebM files, and required Three.js files before replacing generated output. It preserves relative paths and filename case, rejects symlinks/unsafe output locations, and removes stale generated files only from output it owns. It does not include the editable `source/` modules, Electron, development dependencies other than Three.js, tests, original executables, the ISO or `temp_work/`. Preparation first reads `source/` to regenerate the bundle; the installed app runs `src/game.bundle.js` without individual module requests.

The initial 6 October staging contained **2,993 files / 195,051,239 bytes**, about **186 MiB** before APK compression; these historical measurements are not the size of the current source or a future APK. `asset-manifest.json` records deterministic per-file hashes and the combined content hash. The ownership marker contains local paths and is explicitly excluded by Gradle. Source changes cause Gradle to restage the assets; manual preparation is useful for inspection, but is not a required extra step before each Gradle compile.

Do not edit staged files or the generated bundle. Edit the shared `source/` modules or assets instead. An advanced `--output` option is available for an owned output directory inside the project, but Gradle always uses the default directory above.

## 5. Understand native behavior and storage

### Local content and browser boundary

The app loads `https://appassets.androidplatform.net/assets/www/index.html`. It is an app-local HTTPS origin, not a hosted website. `GameAssets.kt` serves the packaged content, returns MIME types and missing-file errors, and supports single byte-range responses for uncompressed media/binary files. Invalid paths never fall through to the network. The app requests no INTERNET permission, disables file/content access and mixed content, and only opens the allowlisted About links in an external browser.

The native message endpoint is restricted to the main frame at that origin using AndroidX `WebViewCompat.addWebMessageListener`. Debug builds permit WebView inspection; release builds disable it. See [local WebView content](https://developer.android.com/develop/ui/views/layout/webapps/load-local-content) and [WebViewCompat](https://developer.android.com/reference/androidx/webkit/WebViewCompat).

### Display, Back, focus and interruptions

Android fullscreen follows the saved setting and is on by default. Native insets keep controls away from system bars, cutouts and mandatory gesture edges. The existing touch on/off/auto preference remains available. Automatic Android render resolution preserves aspect ratio, limits the short edge to 720 pixels and limits total pixels to 1280 × 720; explicit resolution selections remain available. Ordinary browser/Electron automatic resolution is unchanged. This is an initial phone budget, not a measured performance guarantee.

Back closes a submenu or pauses gameplay; from the pause menu it returns to the main menu, and from the main menu it saves and exits. Loading ignores game Back navigation until it finishes. Foreground and native window focus control availability. Headphone removal also pauses playback. WebView is the sole Android media-focus owner; the Activity does not make a competing audio-focus request. The first emulator run exposed a self-deadlock: WebView starting the game’s own menu WAV ducked the Activity request, which then paused that WAV and blocked level loading. Removing that second focus owner fixes both short announcements and longer media. The physical volume buttons control the media/game stream.

WebView handles its media-focus duck/suspend/resume behavior. Background, window interruptions and headphone events additionally suspend the JavaScript game. A focus-only interruption from another app that leaves this window focused is provider/device dependent, especially for ambient or one-shot WebAudio; a blanket AudioContext-state hook would not reliably detect it. Check those cases on target hardware rather than claiming that every external interruption was verified.

Backgrounding pauses game audio and its AudioContext, freezes rendering/simulation/save clocks, clears held input and suspends video without rewinding. Gameplay remains paused after returning; suspended video offers **Verder kijken**. A level that finishes loading while hidden also stays paused and silent. This does not change sound/music scheduling. See [Android audio focus](https://developer.android.com/media/optimize/audio-focus) and [activity lifecycle](https://developer.android.com/guide/components/activities/activity-lifecycle).

### Saves and recovery limits

The stable app ID and HTTPS origin retain localStorage settings/latest save and IndexedDB 2/5/10-minute recovery history. Normal autosave continues, leaving gameplay captures a save, and Android Back from the main menu waits for recovery capture before asking Android to finish. The restored menu also provides **Stoppen**, with confirmation and the same save-before-quit handling. Debug uses `com.nostalgiarealm.redcatspookkasteel.debug`; release uses `com.nostalgiarealm.redcatspookkasteel`. These have separate saves, also separate from browser and Electron saves.

Cloud backup/device transfer are explicitly disabled for this initial app. Uninstalling or clearing app data deletes its saves. Spelerlijst exports and imports one player’s latest save, campaign progress and per-player options through Android’s document picker; see [save backups](docs/save-export.md). Import validates the selected file and requires confirmation before replacing the selected player’s data. An automatic atomic app-private backup is not implemented. The Android document adapters have source checks and a Downloads-provider pass in the recorded Android 16 emulator; physical-device/provider coverage remains. Do not promise survival of an arbitrary process kill from JavaScript checks alone: validate actual process-death and app-update persistence on Android before release.

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

The focused Electron check uses the existing app source, an isolated save profile and a graphical desktop session; Linux needs X11/XWayland. It does not package the desktop app or run the historical gameplay test suite. Reports and harnesses are retained under `temp_work/android-initial-2026-10-06/`; generated profiles and screenshots were removed during the 22 October cleanup.

Gradle tasks above compile Kotlin/resources, run JVM tests, merge assets and lint. They **do not create an installable APK or AAB**, though resource/compiler intermediates are generated. First-time dependency downloads require network access. Windows uses `gradlew.bat` and Windows environment syntax; the supplied shell examples and validation were performed on Linux. If resources are moved and an incremental merge reports a stale missing resource, rerun the affected Gradle tasks with `--rerun-tasks`.

### Results from the initial implementation

- Asset preparation: **7 unit tests passed**.
- Host adapter and intro playback: **18 unit tests passed**.
- Full browser integration: **12 checks passed**, with no page errors, covering simulated Android plus desktop/mobile browsers.
- Final native-only visibility checks: **9 checks passed**, including hidden level-loading completion and visibility arriving before native pause messages.
- Existing Linux Electron app: intro, Level 1, saving, pause/resume and native fullscreen/windowed switching passed with no page errors.
- Android Kotlin compilation, asset merge and **10 JVM tests passed**. Lint reported **0 errors**; remaining warnings concern pinned dependency versions, newer platform attributes and a leftover empty resource-folder qualifier.
- Merged assets excluded the local ownership marker, and the frontend files matched staged hashes in that initial run. Later source changes require restaging. No APK/AAB was generated.

Evidence is under `temp_work/android-initial-2026-10-06/`: `validation-summary.json`, `host-unit-tests.log`, `native-validation-summary.json`, `native-final-validation-02.log`, `native-lint-final.txt`, `staged-assets-check.json`, and retained scene reports. The cleanup removed scene profiles and screenshots; retained reports describe their checks. Initial failed setup/check attempts are retained too; the summary identifies the final successful runs. Windows desktop execution and actual Android execution were not tested during this work.

## 7. Build and install a debug APK

From the prepared shell above:

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

The debug APK has a separate app ID and storage. Emulator results do not establish performance or compatibility on every physical Android device.

## 8. Sign and build the Google Play release

Use an existing upload key if this application already exists in Play Console. For a new app, create an upload key once and keep it for future releases. Do not regenerate it for each build. Keep both the keystore and passwords outside the repository; the signed AAB does not contain the private key.

Select JDK 21 and the SDK as in section 3. To generate a new key yourself, use an absolute private path outside the project, for example:

```sh
mkdir -p "$HOME/.local/share/redcat-spookkasteel/android-signing"
chmod 700 "$HOME/.local/share/redcat-spookkasteel/android-signing"
keytool -genkeypair -storetype PKCS12 \
  -keystore "$HOME/.local/share/redcat-spookkasteel/android-signing/upload-key.p12" \
  -alias redcat-upload -keyalg RSA -keysize 4096 -validity 10000 \
  -dname "CN=NostalgiaRealm Android Upload"
```

The command prompts for a password. In that private directory, create `signing.properties` with these four Java-properties entries. Replace the placeholders with the real absolute filename, alias and passwords. With PKCS12, use the same store and key password. Escape backslashes on Windows paths, or use forward slashes. Do not put this file in Git or a release archive.

```properties
storeFile=/absolute/private/path/upload-key.p12
storePassword=YOUR_STORE_PASSWORD
keyAlias=redcat-upload
keyPassword=YOUR_KEY_PASSWORD
```

Restrict permissions and build from the project root:

```sh
chmod 600 "$HOME/.local/share/redcat-spookkasteel/android-signing/"*
export REDCAT_ANDROID_SIGNING_PROPERTIES="$HOME/.local/share/redcat-spookkasteel/android-signing/signing.properties"
npm run build:android
```

`tools/build-android.mjs` checks version agreement, runs `:app:assembleRelease` and `:app:bundleRelease`, and copies the signed outputs plus content manifest/checksums to:

```text
dist/android/1.0.8/
  RedCat-Spookkasteel-1.0.8-android.aab
  RedCat-Spookkasteel-1.0.8-android.apk
  asset-manifest.json
  SHA256SUMS.txt
```

Release tasks fail if signing credentials are absent instead of presenting an unsigned artifact as ready. Debug tasks do not require release credentials. `REDCAT_ANDROID_SIGNING_PROPERTIES` is read at Gradle configuration time; it is not embedded in the app. The helper keeps temporary build work under `temp_work/`. It does not launch or test the release APK.

Upload the **AAB** to Google Play's internal testing track first. The **APK** is for direct installation outside Play. With Play App Signing, Google may use a different app-signing certificate from this upload key, so the direct APK and Play installation may not update each other. Export saves before switching incompatible installations. Back up the private signing directory separately and securely.

### Inspect the release artifacts

Google's [bundletool](https://developer.android.com/tools/bundletool) validates the AAB and estimates Play delivery size. This pass uses official `bundletool-all-1.18.3.jar`, SHA-256 `a099cfa1543f55593bc2ed16a70a7c67fe54b1747bb7301f37fdfd6d91028e29`, downloaded from [Google's release](https://github.com/google/bundletool/releases/tag/1.18.3). The digest matches GitHub's published asset digest.

```sh
export REDCAT_BUNDLETOOL="$PWD/temp_work/android-release-1.0.3-2026-10-26/toolchain/bundletool-all-1.18.3.jar"
java -jar "$REDCAT_BUNDLETOOL" validate \
  --bundle=dist/android/1.0.3/RedCat-Spookkasteel-1.0.3-android.aab
jarsigner -verify dist/android/1.0.3/RedCat-Spookkasteel-1.0.3-android.aab
"$ANDROID_HOME/build-tools/36.0.0/apksigner" verify --verbose --print-certs \
  dist/android/1.0.3/RedCat-Spookkasteel-1.0.3-android.apk
"$ANDROID_HOME/build-tools/36.0.0/zipalign" -c -P 16 -v 4 \
  dist/android/1.0.3/RedCat-Spookkasteel-1.0.3-android.apk
(cd dist/android/1.0.3 && sha256sum -c SHA256SUMS.txt)
```

Self-signed upload certificates are expected for Android and do not need a public CA. An AAB is a signed ZIP publishing format; `apksigner` checks APKs, while `jarsigner` checks AABs. Preserve the public certificate separately when configuring or resetting an upload key. Do not publish the private keystore/password files.

## 9. Validation scope and remaining device checks

### Completed on 26 October 2026

Both signed release tasks completed successfully from the source snapshot recorded
in `temp_work/android-release-1.0.3-2026-10-26/`. These artifacts predate the
later JavaScript bundling, efficiency and source-folder changes; they are not
a build of the latest working tree. Rebuild before publishing those later
changes. The file sizes and checks below belong to that recorded build:

| Artifact | Size | Use |
| --- | ---: | --- |
| `dist/android/1.0.3/RedCat-Spookkasteel-1.0.3-android.aab` | 109,625,032 bytes | Google Play upload |
| `dist/android/1.0.3/RedCat-Spookkasteel-1.0.3-android.apk` | 156,720,185 bytes | Direct installation |

Checksums, the runtime manifest, `release-verification.json`, public `upload-certificate.pem` and `PLAY-STORE-README.md` accompany them. Bundletool generated Play-style APKs and estimated a download of **108,196,436–108,197,556 bytes**; Play Console calculates the final size.

- **3,086 runtime files / 196,129,990 source bytes** matched between that source snapshot, staging, AAB and APK, including all five levels and version 1.0.3 metadata.
- Bundle structure, AAB signature, APK v2 signature and ZIP alignment pass. Both packages match the upload certificate. No native `.so` libraries, private signing files or workstation staging marker are packaged. Debugging is disabled; target/minimum are 36/29; there is no INTERNET or broad-storage permission. AndroidX's app-specific signature permission for non-exported receivers is present.
- **10 JVM tests, 16 staging/host source tests, 9 simulated Android-host scenes and 6 desktop/mobile-browser scenes** pass. Lint has **0 errors**; remaining warnings concern newer tools/dependencies, an API-33 attribute and an empty obsolete resource-folder qualifier.
- An isolated **Android 16/API 36 x86_64 emulator**, WebView **133.0.6943.137**, ran the debug APK offline: intro/unmuted media, original menu, Level 1, simultaneous movement/look, jump/shoot input, cutscene skip, Back/Home pause/resume, rotation, local save, force-stop and in-place APK update persistence, and actual Downloads-provider export/import/cancel. Offline media returns correct byte-range **206** responses.
- Runtime evidence uses the **debug APK**. The release artifacts were inspected without launching them. Physical Android 10/ARM64 devices, a complete Android campaign and Play Console approval remain unverified.

`jarsigner` verifies the AAB. Self-signed/no-timestamp warnings are normal for an Android upload key. It also reports AGP ZIP manifest ordering for streaming `JarInputStream`; the random-access signature verification and bundletool validation/generation pass. This does not indicate an unsigned bundle.

A new upload key was prepared for this first completed Android build at `/home/rick/.local/share/redcat-spookkasteel/android-signing/`. The private keystore, password and `signing.properties` are permission-restricted, outside the repository, and unpublished. **Back up that directory securely.** Certificate SHA-256: `3f5151f0a41503ef65e27e72eb4d2e90c6384a31d91c05452e8f7f58bf22d22a`. If an existing Play app uses another registered upload key, rebuild with that existing key.

The consolidated evidence is `temp_work/android-release-1.0.3-2026-10-26/android-release-result.json`; `verification/`, `emulator/`, `assets/` and `native/` retain detailed reports. Initial fixture failures are distinguished from the real audio-focus and rendering-budget bugs fixed before release packaging.

To repeat signature and complete current-source payload verification after rebuilding:

```sh
python3 tools/verify-android-release.py \
  --bundletool "$REDCAT_BUNDLETOOL" \
  --output temp_work/android-release-verification
```


The current evidence is retained under `temp_work/android-release-1.0.3-2026-10-26/`. Android source changes are isolated to the native host and Android-only rendering/privacy branches. Focused source checks cover staging privacy/content, native bridge/lifecycle, and ordinary desktop/mobile-browser behavior. Historical results in section 6 remain historical rather than current-device claims.

Before production rollout, perform the account/device checks in [the Play release guide](docs/android-google-play-release.md):

1. Install through Play's test track and exercise a physical Android 10 device and a recent Android 16 device. Record WebView versions, portrait/landscape, cutouts, multi-window and system gestures.
2. Test calls/audio interruptions, headphones, lock/unlock, process termination and updates. Check save/recovery persistence and document import/export with the providers you use.
3. Exercise simultaneous movement/look/jump/shoot, charged shots, SuperSkippie, skipping, settings, debriefing and USB/Bluetooth controllers, then a complete five-level campaign on Android.
4. Measure sustained frame times, RAM and heat on low-end ARM64 hardware, especially the Graveyard. An emulator on a desktop GPU cannot establish phone performance.
5. Publish the supplied privacy policy, complete truthful Play Console declarations/store assets, inspect the pre-launch report and satisfy any account-specific testing requirements.

No Play Console upload or approval is implied by compilation. The stable app ID, local content origin and signing key must be retained for updates; increment `versionCode` for each new Play upload. There are no native game libraries in the current design; recheck ABI and [16 KB page-size compatibility](https://developer.android.com/guide/practices/page-sizes) if native libraries are added later.
