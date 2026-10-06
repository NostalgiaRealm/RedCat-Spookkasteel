# Build RedCat Spookkasteel yourself

This guide covers running the source, making the existing Linux x64 and Windows x64 portable directories, and experimental packaging for Linux ARM64, Windows ARM64, macOS Intel and macOS Apple Silicon. The game uses JavaScript, Three.js and Electron; building it does not compile or run the original Genesis3D executable. Imported assets from your own copy of the game are required.

## 1. Prerequisites

| Tool or input | When it is needed |
| --- | --- |
| Node.js **22.12.0 or newer**, with npm | Installing dependencies, running source, testing and packaging. The pinned Electron tools require at least 22.12.0. |
| This project's source, including `package-lock.json` | All development and packaging. |
| Complete imported `assets/` and `data/` directories | Running and packaging the game. Alternatively, import them as described below. |
| Python 3 and Pillow | Importing original assets and running the Python importer tests. Not required to package already imported assets. |
| FFmpeg on `PATH` | Converting the original intro/outro videos during a complete asset import. |
| An installed Google Chrome or Chromium | Browser integration tests. |
| A graphical Linux session, X11/XWayland and ImageMagick's `import` command | The Linux native desktop integration test. |

The development machine checked on 5 October 2026 uses Node 24.13.1 and npm 11.8.0. Use `npm ci` to install the exact dependencies in the lockfile. The first install and the first build for another platform need internet access to download tools and Electron. A running game needs WebGL 2 support and working graphics drivers.

Keep `index.html`, `package.json`, `package-lock.json`, `src/`, `electron/`, `tools/`, `tests/`, `docs/`, `assets/` and `data/` together in the project directory. The current `.gitignore` does **not** exclude `assets/` or `data/`. Check that your checkout includes their complete contents; if they were omitted from the distribution, import or copy them from your own prepared project. Do not copy `node_modules` between operating systems; run `npm ci` on each development machine.

## 2. Install dependencies and run the source

On Linux:

```sh
cd /mnt/Storage/Cloud/Games/RedCat_Spookkasteel_Rebuild_2026/RCSPOOK_NEW
node --version
npm --version
npm ci
npm start -- --ozone-platform=x11
```

On Windows, open PowerShell and substitute your project directory:

```powershell
Set-Location 'C:\Projects\RCSPOOK_NEW'
node --version
npm --version
npm ci
npm start
```

These commands run the source without generating packages. Substitute your own checkout path when needed. On Linux, selecting X11/XWayland before Electron starts avoids the blank-window problem seen with mismatched display backends. An explicit `npm start -- --ozone-platform=wayland` is also supported when your desktop/driver combination works with Wayland.

**`Start-RedCat.sh` prefers the existing `dist/linux-unpacked` build.** If that directory exists, the launcher will not show your new source changes. Use the `npm start` command above while developing.

For browser development instead:

```sh
npm run serve
```

Open `http://127.0.0.1:4173`. The server binds only to loopback; stop it with Ctrl+C. Do not open `index.html` as a local `file:` URL. Browser saves/settings belong to the browser's origin and are separate from desktop saves/settings. Desktop window controls are available only in Electron.

For self-hosting at `https://games.nostalgiarealm.com/redcatspookkasteel/`, see
[the Nginx hosting guide](nginx-hosting.md). It lists the static files to upload,
provides the subdirectory configuration and covers HTTPS setup; no desktop build
is needed for that deployment.

## 3. Import assets, if needed

Skip this section if the project already has complete imported `assets/` and `data/` directories. Importing regenerates those directories and the generated `src/gameplay-settings.js` and `src/audio-settings.js` files from the original installation; it leaves the original installation and CD unchanged. Keep any manually edited generated files separately before reimporting.

The original installation needs its `Levels`, `Actors`, `Settings`, `Sounds`, `VoiceNL` and other game data. Mount the CD/ISO for the original videos. No external Davitools installation is necessary: this project's importers include the required IMG handling.

Linux example with the paths used on this machine:

```sh
cd /mnt/Storage/Cloud/Games/RedCat_Spookkasteel_Rebuild_2026/RCSPOOK_NEW
python3 -m venv "$HOME/.venvs/redcat-import"
"$HOME/.venvs/redcat-import/bin/python" -m pip install Pillow
ffmpeg -version
"$HOME/.venvs/redcat-import/bin/python" tools/import_assets.py \
  --installation '/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel' \
  --cd '/run/media/rick/RedCat' \
  --album-dir '/home/rick/RedCat Spookkasteel (2000, PC)'
```

Windows PowerShell example; replace the installation and CD drive with yours:

```powershell
Set-Location 'C:\Projects\RCSPOOK_NEW'
py -3 -m venv .venv
& '.\.venv\Scripts\python.exe' -m pip install Pillow
ffmpeg -version
& '.\.venv\Scripts\python.exe' tools/import_assets.py --installation 'C:\Games\RedCat Spookkasteel' --cd 'D:\'
```

`--album-dir` is optional cover artwork. `--skip-media` skips video conversion; use it when converted media already exists, or accept that intro/outro playback will be unavailable. It does not generate replacement videos. Individual import tools accept `--help`. Check that the import finishes successfully before packaging; packaging does not automatically reimport or repair missing data.

## 4. Check the source before packaging

During development, run only checks for the systems you changed. For example:

```sh
node --test tests/targeting.test.mjs tests/hud.test.mjs
node tests/hud-target-skip-scenes.mjs --target-only
```

Do not run every historical test after each small change. The complete commands
below are available for deliberate release validation.

Complete JavaScript unit tests:

```sh
npm test
```

Python importer tests, using the environment containing Pillow:

```sh
"$HOME/.venvs/redcat-import/bin/python" -m unittest discover -s tests -p 'test_*.py'
```

Windows equivalent:

```powershell
& '.\.venv\Scripts\python.exe' -m unittest discover -s tests -p 'test_*.py'
```

Browser integration tests start and stop their own local server:

```sh
npm run test:smoke
npm run test:scripts
```

Other focused checks are listed under `scripts` in `package.json`, including audio, enemies, bosses, effects, doors and cheats. Newer focused checks also run directly from `tests/*.mjs`; use the relevant feature document to choose them. They use isolated game state rather than your normal desktop saves. Older scripts write results under `artifacts/`; newer investigations retain reports, screenshots and isolated profiles in named folders under `current_work/`.

Keep new temporary research, disassembly, profiles and diagnostic work in a
descriptively named `current_work/` subfolder and retain it for later comparison.
Do not use `/tmp` for that work. Where a browser harness needs `TMPDIR`, use a
short relative path under `current_work/` from the project root; long absolute
paths can exceed Chromium's Unix socket path limit. Follow the particular
test's output/profile setup rather than reusing your running game's profile.

The full smoke test explicitly plays the intro, so it requires converted media even if you chose `--skip-media` during import. It also checks HTTP errors: the menu currently requests `assets/menu/cover.jpg` even when optional cover art was omitted. For a clean full smoke pass, include that artwork with `--album-dir` during import. Running unit tests alone does not check either requirement.

Browser tests default to `/usr/bin/google-chrome`. Override the executable if necessary:

```sh
CHROME_PATH=/path/to/chromium npm run test:smoke
```

```powershell
$env:CHROME_PATH = 'C:\Program Files\Google\Chrome\Application\chrome.exe'
npm run test:smoke
```

In a Linux graphical session, run the broader native Electron check:

```sh
npm run test:desktop
```

This launches Electron against the **source** and checks gameplay, resolution switching and actual native window presentation. It does not build packages. Leave `REDCAT_EXECUTABLE` and `REDCAT_LAUNCHER` unset for this source check; those environment variables are overrides for testing an existing packaged executable. The Linux presentation check uses ImageMagick's `import` utility. A headless browser pass alone does not prove that a native desktop window displays correctly.

Resolve test failures before creating packages. Some original-file comparison tests require the original installation on the development machine and skip when it is absent.

## 5. Generate portable packages when ready

**Only run this section when you intend to create new builds.** Close the game first. These commands update the corresponding directories under `dist/`; copy an older build elsewhere first if you want to preserve it. The **Over** dialog has a display version, but `package.json` intentionally has no package version. Electron-builder requires numeric package metadata, so supply `REDCAT_PACKAGE_VERSION` only for that packaging command. It is injected into the generated package metadata without modifying the source, lockfile or displayed version. Use three dot-separated integers chosen for your distribution; the helper has no default. Without this value, the packaging command stops before creating a build.

### Available targets and current limits

As checked on 5 October 2026, the lockfile pins Electron **44.3.0** and electron-builder **26.15.3**. The installed Electron checksum manifest includes Linux, Windows and macOS binaries for both x64 and ARM64. The game's only production npm dependency is Three.js; it has no architecture-specific native game addons. The same imported assets and level data can be packaged for each target. These architectures are also listed in [electron-builder's version 26 documentation](https://www.electron.build/v26/docs/architecture/).

| Target | Build host for the instructions below | Current project status | Output under `dist/` |
| --- | --- | --- | --- |
| Linux x64 | Linux | Existing packaging helper | `linux-unpacked/` |
| Windows x64 | Windows or Linux | Existing packaging helper | `win-unpacked/` |
| Linux ARM64 | Linux, including an x64 build host | Direct CLI recipe; package and ARM hardware validation still needed | `linux-arm64-unpacked/` |
| Windows ARM64 | Windows x64; Linux cross-packaging recipe also included | Direct CLI recipe; package and Windows ARM hardware validation still needed | `win-arm64-unpacked/` |
| macOS Intel (x64) | macOS | Direct CLI recipe; package and Intel Mac validation still needed | `mac/RedCat Spookkasteel.app` |
| macOS Apple Silicon (ARM64) | macOS, preferably Apple Silicon for local testing | Direct CLI recipe; package and Apple Silicon validation still needed | `mac-arm64/RedCat Spookkasteel.app` |

**The ARM64 and macOS recipes have not been built or run as part of this documentation update.** Their commands and output paths were checked against the installed packaging code. Availability of an Electron binary does not establish that this game's graphics, audio, controls and saves work on every device.

`npm run build:linux` and `npm run build:windows` currently hardcode **x64**, even on an ARM machine. Appending `-- --arm64` to either script does not change that. There is no `build:mac` script. The additional recipes below call the locally installed electron-builder directly, retaining the project's file list and asset packaging configuration. `--publish never` prevents uploading artifacts; `dir` creates an unpacked directory or app bundle, not an installer.

For these direct calls, pass `-c.extraMetadata.version` explicitly: setting `REDCAT_PACKAGE_VERSION` alone only works with the project's helper. Use the same three-part numeric metadata version described above, with each part between 0 and 65535. `npx --no-install` uses the builder installed by `npm ci`; do not replace it with an unpinned download. The CLI syntax is documented in the [version 26 CLI reference](https://www.electron.build/v26/docs/cli/).

Install Node and dependencies for the **build host**, not the target architecture. Run `npm ci` again when changing host OS or CPU architecture rather than copying `node_modules`. The builder selects the target Electron download using the architecture flag. The game data does not need reimporting for ARM64.

### Linux x64

Build on a Linux host:

```sh
read -r -p "Desktop package metadata version (three dot-separated integers): " REDCAT_PACKAGE_VERSION
REDCAT_PACKAGE_VERSION="$REDCAT_PACKAGE_VERSION" npm run build:linux
./Start-RedCat.sh
```

The output is `dist/linux-unpacked/`. To distribute or move it locally, copy the **whole directory**, preserving executable permissions. From inside that copied directory, launch:

```sh
./redcat-spookkasteel --ozone-platform=x11
```

The root project's `Start-RedCat.sh` also selects X11/XWayland and finds the build at its expected relative path. It is not required inside a standalone portable directory. There is currently no AppImage, RPM or DEB target configured.

### Windows x64

Build on Windows in PowerShell:

```powershell
$env:REDCAT_PACKAGE_VERSION = Read-Host 'Desktop package metadata version (three dot-separated integers)'
npm run build:windows
```

Or generate the Windows directory target from Linux:

```sh
read -r -p "Desktop package metadata version (three dot-separated integers): " REDCAT_PACKAGE_VERSION
REDCAT_PACKAGE_VERSION="$REDCAT_PACKAGE_VERSION" npm run build:windows
```

The output is `dist/win-unpacked/`. Copy the **whole directory** to Windows, then double-click `RedCat Spookkasteel.exe`. From PowerShell at the project root:

```powershell
& '.\dist\win-unpacked\RedCat Spookkasteel.exe'
```

This is an unsigned portable directory, not an installer. The current configuration disables Windows executable signing/editing and has been packaged on Linux without Wine. Different targets, signing or installer generation may need additional platform tools. Generating the directory on Linux does not replace a test on an actual Windows machine.

### Linux ARM64

Use a Linux host with the source, imported data and `npm ci` completed. For this project's JavaScript-only game runtime and `dir` target, the builder can package the ARM64 Electron binary from an x64 Linux host without running that target binary. An ARM64 host can also be used. From the project root, in Bash:

```sh
read -r -p "Desktop package metadata version (three dot-separated integers): " REDCAT_PACKAGE_VERSION
npx --no-install electron-builder --linux dir --arm64 --publish never \
  "-c.extraMetadata.version=$REDCAT_PACKAGE_VERSION"
```

Copy the **whole** `dist/linux-arm64-unpacked/` directory to a machine running a 64-bit ARM Linux desktop, preserving permissions. On that machine, launch from inside the copied directory:

```sh
./redcat-spookkasteel --ozone-platform=x11
```

Use `--ozone-platform=wayland` instead if that device's Wayland setup works better. `Start-RedCat.sh` currently looks for the x64 `dist/linux-unpacked/` path, so it will not select this ARM64 package. Launch the ARM64 executable directly.

This requires an ARM64 Linux userspace, Electron-compatible system libraries and working WebGL 2 graphics. It is not an Android package or a build for a 32-bit ARM operating system. An x64 build host cannot run this executable directly. A successful package step does not verify device performance or graphics-driver compatibility; test on the intended ARM hardware.

### Windows ARM64

After `npm ci`, use PowerShell at the project root on a Windows x64 build host:

```powershell
$env:REDCAT_PACKAGE_VERSION = Read-Host 'Desktop package metadata version (three dot-separated integers)'
npx --no-install electron-builder --win dir --arm64 --publish never "-c.extraMetadata.version=$env:REDCAT_PACKAGE_VERSION"
```

Electron-builder supports selecting Windows ARM64 from an x64 Windows host. This produces an ARM64 Electron executable, rather than an x64 executable that relies on Windows emulation. See [Windows ARM64 architecture support](https://www.electron.build/v26/docs/architecture/#windows-arm64).

The corresponding Linux cross-packaging command, in Bash, is:

```sh
read -r -p "Desktop package metadata version (three dot-separated integers): " REDCAT_PACKAGE_VERSION
npx --no-install electron-builder --win dir --arm64 --publish never \
  "-c.extraMetadata.version=$REDCAT_PACKAGE_VERSION"
```

This uses the same unsigned `dir` configuration as the existing Windows x64 package, including `win.signAndEditExecutable: false`. The ARM64 cross-packaging path remains unverified; installer creation or signing would have additional requirements and is not covered by this command.

Copy the **whole** `dist/win-arm64-unpacked/` directory to Windows on ARM. Launch `RedCat Spookkasteel.exe` from that directory, or use this command from the project root on the target machine:

```powershell
& '.\dist\win-arm64-unpacked\RedCat Spookkasteel.exe'
```

`Start-RedCat.bat` currently probes only `dist\win-unpacked`, so use the ARM64 executable directly. Do not expect the ARM64 executable to run on an ordinary x64 Windows PC; use that PC for packaging and an actual Windows ARM device for runtime validation. Building directly on Windows ARM is not validated here either; host build tools may require x64 emulation.

### macOS Intel and Apple Silicon

Use a **Mac** for these recipes. The builder supports both macOS architectures, but macOS code signing requires macOS. These instructions do not provide a working signed Mac build from Linux or Windows; use a Mac or a macOS CI runner instead. See the [cross-platform build restrictions](https://www.electron.build/v26/docs/features/multi-platform-build/).

Install Node.js 22.12+ for the Mac's own architecture: x64 on Intel, ARM64 on Apple Silicon. Copy the source and complete imported `assets/` and `data/`, then run these commands in Terminal, replacing the checkout path:

```sh
cd "$HOME/Projects/RCSPOOK_NEW"
node --version
node -p "process.platform + ' ' + process.arch"
npm ci
npm start
```

The architecture check should report `darwin x64` on Intel or `darwin arm64` on Apple Silicon. Running source this way is a useful first check before packaging. Linux's `--ozone-platform` flags do not apply on macOS.

Choose the metadata version once in the same Terminal session. This prompt works in both macOS's default zsh and Bash:

```sh
printf 'Desktop package metadata version (three dot-separated integers): '
read -r REDCAT_PACKAGE_VERSION
```

For **Intel Macs**, build and then open the app on an Intel Mac:

```sh
npx --no-install electron-builder --mac dir --x64 --publish never \
  "-c.extraMetadata.version=$REDCAT_PACKAGE_VERSION" \
  -c.mac.identity=- -c.mac.notarize=false
open "dist/mac/RedCat Spookkasteel.app"
```

For **Apple Silicon Macs**, build and then open the app on Apple Silicon:

```sh
npx --no-install electron-builder --mac dir --arm64 --publish never \
  "-c.extraMetadata.version=$REDCAT_PACKAGE_VERSION" \
  -c.mac.identity=- -c.mac.notarize=false
open "dist/mac-arm64/RedCat Spookkasteel.app"
```

Either Mac architecture can select either package architecture for this game's current JavaScript dependencies. Only run the `open` command where that app architecture is supported; an Intel Mac cannot run the ARM64 app. An Intel build on Apple Silicon uses Rosetta when available, so it is not a substitute for testing the ARM64 app. Separate x64 and ARM64 packages are documented here; there is no configured universal release target.

These are **local development bundles**. `mac.identity=-` requests ad-hoc signing without a Developer ID certificate, and `mac.notarize=false` skips notarization. Keep the entire `.app` bundle intact. The pinned builder supplies default Electron entitlements, including JIT and library-validation permissions, while retaining its hardened-runtime default. An ad-hoc signature does not provide the trust of a signed and notarized public release. These options follow the [version 26 macOS signing configuration](https://www.electron.build/v26/docs/mac/#code-signing).

For public Mac distribution, configure a Developer ID signing identity and notarization credentials on the Mac/CI runner, replace these development overrides, add the intended app icon, and choose a distribution target such as DMG. Those release settings and artifacts are not currently configured or validated in this project. See [electron-builder's code-signing guide](https://www.electron.build/v26/docs/features/code-signing/).

Before describing either Mac target as supported, verify WebGL rendering, Retina resolutions, fullscreen, pointer lock, keyboard/controller input, audio/video playback, saving and restoring on that hardware. The current Electron shell also quits when its last window closes; Mac-specific lifecycle polish remains separate from producing an app bundle.

### Runtime contents and validation

All these desktop outputs include Electron, the game code and imported assets. Players do not need Node, npm, Python, Wine, the original installation or a mounted CD at runtime. Keep every file in a portable directory, or the complete macOS `.app` bundle, together. Each target still requires the operating-system libraries and graphics support expected by its Electron build.

When validating a new platform, first check startup and visible gameplay, controls, resolution/fullscreen, complete music/video playback and save/load on the target device. A package generated on another OS or CPU cannot establish those results. The existing Linux-specific desktop presentation test is not a macOS or Windows certification test. If native npm addons are added later, revisit cross-packaging: they may need target-specific prebuilt binaries or a target-host compiler, as described in the [cross-platform build guide](https://www.electron.build/v26/docs/features/multi-platform-build/).

## Troubleshooting

- **Old behavior after editing source:** `Start-RedCat.sh` may be launching the old package. Use `npm start -- --ozone-platform=x11` on Linux, or `npm start` on Windows.
- **Node engine errors:** check `node --version`; the pinned Electron tools require at least 22.12.0. Re-run `npm ci` with a supported version.
- **Missing maps, actors, audio or videos:** check `assets/` and `data/`, then complete the asset import. `npm ci` installs software dependencies, not original game data.
- **Linux audio plays but the window is blank:** start Electron with `--ozone-platform=x11` as shown above, from a graphical session with X11/XWayland available. Check the graphics driver and run the native desktop test. See [platform notes](portability.md) for the display-backend investigation.
- **Browser test cannot find Chrome:** set `CHROME_PATH` to your installed Chrome/Chromium executable. Installing Playwright's package alone does not provide the executable used by these tests.
- **Video import fails:** ensure FFmpeg is on `PATH` and the CD argument points at the mounted disc containing `Data/Media`.
- **Dependency or Electron download fails:** check network/proxy access and retry the failed install/build command. Do not substitute unpinned package versions to work around a download failure.

## Android and remaining platform work

An initial Kotlin/WebView Android project now exists in `android/`, targeting Android 16/API 36 with minimum API 29. See [Android setup and validation](../ANDROID.md) for the pinned JDK/SDK, `npm run android:prepare`, focused compile/check commands and later APK/AAB steps. Kotlin compilation and checks pass; no Android package has been generated or validated on a device yet.

The ARM64 recipes above are desktop packages. Electron's desktop wrapper cannot produce an Android APK/AAB. The separate Android shell now implements local content loading and lifecycle/audio integration; physical-device, save-recovery and release validation remain. Browser touch overlays and Gamepad API controls are already implemented. Linux/Windows ARM64 and both macOS architectures also still need the platform validation described above before release. See [portability.md](portability.md) for the remaining steps.
