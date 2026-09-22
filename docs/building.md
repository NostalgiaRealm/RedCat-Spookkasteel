# Build RedCat Spookkasteel yourself

This guide covers running the source and making Linux x64 and Windows x64 portable directories. The game uses JavaScript, Three.js and Electron; building it does not compile or run the original Genesis3D executable. Imported assets from your own copy of the game are required.

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

The current development machine uses Node 24.13.1 and npm 11.8.0. Use `npm ci` to install the exact dependencies in the lockfile. The first install and the first build for another platform need internet access to download tools and Electron. A running game needs WebGL 2 support and working graphics drivers.

Keep `index.html`, `package.json`, `package-lock.json`, `src/`, `electron/`, `tools/`, `tests/`, `docs/`, `assets/` and `data/` together in the project directory. Imported assets and data are excluded by `.gitignore`; a source-only checkout is insufficient until you import or copy those directories from your own prepared project. Do not copy `node_modules` between operating systems; run `npm ci` on each development machine.

## 2. Install dependencies and run the source

On Linux:

```sh
cd /home/rick/RCSPOOK_NEW
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

These commands run the source without generating packages. On Linux, selecting X11/XWayland before Electron starts avoids the blank-window problem seen with mismatched display backends.

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
cd /home/rick/RCSPOOK_NEW
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

Other focused checks are listed under `scripts` in `package.json`, including audio, enemies, bosses, effects, doors and cheats. They use temporary game state rather than your normal desktop saves. Screenshots and diagnostic results are written under `artifacts/`.

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

**Only run this section when you intend to create new builds.** Close the game first. These commands update the corresponding directories under `dist/`; copy an older build elsewhere first if you want to preserve it. They do not change the version number automatically.

### Linux x64

Build on a Linux host:

```sh
npm run build:linux
./Start-RedCat.sh
```

The output is `dist/linux-unpacked/`. To distribute or move it locally, copy the **whole directory**, preserving executable permissions. From inside that copied directory, launch:

```sh
./redcat-spookkasteel --ozone-platform=x11
```

The root project's `Start-RedCat.sh` also selects X11/XWayland and finds the build at its expected relative path. It is not required inside a standalone portable directory. There is currently no AppImage, RPM or DEB target configured.

### Windows x64

Build on Windows, or generate the current Windows directory target from Linux:

```sh
npm run build:windows
```

The output is `dist/win-unpacked/`. Copy the **whole directory** to Windows, then double-click `RedCat Spookkasteel.exe`. From PowerShell at the project root:

```powershell
& '.\dist\win-unpacked\RedCat Spookkasteel.exe'
```

This is an unsigned portable directory, not an installer. The current configuration disables Windows executable signing/editing and has been packaged on Linux without Wine. Different targets, signing or installer generation may need additional platform tools. Generating the directory on Linux does not replace a test on an actual Windows machine.

Both outputs include Electron, the game code and imported assets. Players do not need Node, npm, Python, Wine, the original installation or a mounted CD at runtime. Keep every file in the portable directory together.

## Troubleshooting

- **Old behavior after editing source:** `Start-RedCat.sh` may be launching the old package. Use `npm start -- --ozone-platform=x11` on Linux, or `npm start` on Windows.
- **Node engine errors:** check `node --version`; the pinned Electron tools require at least 22.12.0. Re-run `npm ci` with a supported version.
- **Missing maps, actors, audio or videos:** check `assets/` and `data/`, then complete the asset import. `npm ci` installs software dependencies, not original game data.
- **Linux audio plays but the window is blank:** start Electron with `--ozone-platform=x11` as shown above, from a graphical session with X11/XWayland available. Check the graphics driver and run the native desktop test. See [platform notes](portability.md) for the display-backend investigation.
- **Browser test cannot find Chrome:** set `CHROME_PATH` to your installed Chrome/Chromium executable. Installing Playwright's package alone does not provide the executable used by these tests.
- **Video import fails:** ensure FFmpeg is on `PATH` and the CD argument points at the mounted disc containing `Data/Media`.
- **Dependency or Electron download fails:** check network/proxy access and retry the failed install/build command. Do not substitute unpinned package versions to work around a download failure.

## Future platforms

Apple Silicon macOS and Android remain planned ports. There are no validated Mac or Android release targets in these instructions. The shared game code is portable; macOS needs an arm64 Electron build and platform testing, while Android needs a different application shell and mobile input/lifecycle work. See [portability.md](portability.md) for the remaining steps.
