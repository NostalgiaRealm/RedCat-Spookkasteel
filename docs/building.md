# Building

What is built from this folder, with which command, and what each needs. Nothing here uploads,
publishes, tags or commits anything.

| What | Command | Result |
|---|---|---|
| The game module | `npm run recompile` | `public/game/spook.wasm` and its tables ([`recompiler.md`](recompiler.md)) |
| The list of game files, the start lists | `node tools/build-manifest.mjs`, `npm run preload` | `public/game/files.json`, `preload.json` |
| The site for a web server | `npm run package` | `dist/site/` ([`hosting.md`](hosting.md)) |
| The desktop packages | `npm run build:desktop` | `dist/desktop/*.zip`, `SHA256SUMS.txt` (below) |

Needed: Node.js 24, and the JavaScript port checked out next to this folder (`../RCSPOOK_NEW`):
the original game files, the menu's assets, the icons, and Electron with electron-builder are read
from it. Nothing is ever written there.

## The site

```bash
npm run package
```

```bash
npm run package:check
```

See [`hosting.md`](hosting.md), "Build and check", for what must be rebuilt first after which
change, and for what is in `dist/site/`.

## The desktop packages

```bash
npm run build:desktop
```

`tools/package-desktop.mjs` builds the site from the source (its own copy, in
`tools/out/desktop/site-build/`; `dist/site/` is not touched), puts it with `electron/` and the
icons in `tools/out/desktop/stage/`, and lets electron-builder make an unpacked application for
each of six targets, which it then zips. About two minutes when the Electron of every target has
been fetched before.

| ZIP in `dist/desktop/` | Holds | Unpacked copy in `dist/desktop/unpacked/` |
|---|---|---|
| `RedCat-Spookkasteel-<version>-linux-x64.zip` | `linux-unpacked/` with `redcat-spookkasteel` | `linux-unpacked/` |
| `RedCat-Spookkasteel-<version>-linux-arm64.zip` | `linux-arm64-unpacked/` | `linux-arm64-unpacked/` |
| `RedCat-Spookkasteel-<version>-windows-x64.zip` | `win-unpacked/` with `RedCat Spookkasteel.exe` | `win-unpacked/` |
| `RedCat-Spookkasteel-<version>-windows-arm64.zip` | `win-arm64-unpacked/` | `win-arm64-unpacked/` |
| `RedCat-Spookkasteel-<version>-mac-x64.zip` | `mac/RedCat Spookkasteel.app` | `mac/` |
| `RedCat-Spookkasteel-<version>-mac-arm64.zip` | `mac-arm64/RedCat Spookkasteel.app` | `mac-arm64/` |

`SHA256SUMS.txt` in the same folder has one line per ZIP, as `sha256sum` writes and checks them:

```bash
cd dist/desktop && sha256sum --check SHA256SUMS.txt
```

Names, folder layout, product name (`RedCat Spookkasteel`), application id
(`local.redcat.spookkasteel`), executable name and icons are those of the JavaScript port's
releases (its `package.json` "build" and `PUBLISH_CURRENT_BUILD`, step 2), so a release of this
port can carry the same six files.

- **Version.** The version in `package.json`. Another one for one build: `npm run build:desktop -- --version 2.0.1`
  or `REDCAT_PACKAGE_VERSION=2.0.1`.
- **Some targets only**: `npm run build:desktop -- --only linux-x64,windows-x64`. `SHA256SUMS.txt`
  then lists every ZIP of that version that is in the folder. `--no-zip` stops after the unpacked
  folders, `--no-site` uses the site built the last time.
- **Electron and electron-builder** are not installed in this project. They are loaded from
  `../RCSPOOK_NEW/node_modules` (Electron 44.3.0, electron-builder 26.15.3 on 15 November 2026);
  `REDCAT_DESKTOP_TOOLS` names another `node_modules` folder that has both. The Electron version
  is the one installed there. Keep it the same as the JavaScript port's last release or newer:
  the two applications share a profile folder, and Chromium does not open a profile written by a
  newer version of itself.
- **Downloads.** The builder fetches the Electron of a target it has not built before from
  Electron's releases on GitHub into `~/.cache/electron/` (about 100 MB per target, once).
- **Windows packages on Linux**: the builder sets the icon and the version of the `.exe` with its
  own tool, which runs under Wine. Wine must be installed.
- **Nothing is signed.** As in the JavaScript port's procedure: `win.signExecutable: false`, and
  the builder skips signing a macOS bundle when it runs on Linux (`mac.notarize: false`). A Mac
  will refuse the unsigned application until its user allows it; a signed and notarized build
  needs a Mac and is not set up.
- **The ZIPs of the macOS bundles keep symbolic links** (`zip -y`): the frameworks inside the
  bundle need them.

### What is in a package

`resources/app.asar` holds `electron/` (the shell), `site/` (the site without its `.gz` copies:
`index.html`, `app/<revision>/`, `assets/`, `data/`), `assets/icons/` and a `package.json`. No
program of the original game is in it.

### How the application shows the page

`electron/main.cjs` opens one window on `redcat://game/index.html`. The scheme `redcat` is
registered as a standard, secure origin and answered by the application itself from `site/`: no
network port is opened and nothing is fetched from the network. Every answer, an error too,
carries `Cross-Origin-Opener-Policy: same-origin` and `Cross-Origin-Embedder-Policy: require-corp`,
so the page is isolated and may share memory with its game thread, as on a web server set up
after [`hosting.md`](hosting.md).

- **Stoppen > Ja** ends the program: the page calls `window.desktop.quit()`
  (`electron/preload.cjs`; `source/menu/menu.js`, `closeGame`). In a browser the same button shows
  "Je kunt dit venster sluiten."
- **Full screen** is the page's own setting: the shell makes the window full screen when the page
  asks for it. Esc leaves full screen, as in a browser.
- **Exporteren and Importeren** in the Spelerlijst use the page's download and file input; the
  shell shows the system's file windows for them.
- A second start brings the running window forward. A link to an `https:` address opens in the
  system browser; the window itself shows nothing but the game.
- Linux: when the window stays empty, start with `--ozone-platform=x11` (the JavaScript port's
  launcher did that by itself; there is no launcher script in these packages). `REDCAT_GPU`
  chooses ANGLE's backend (default `gl`), `REDCAT_VSYNC=0` lifts the limit of the display's
  refresh rate.

### Players and saved games of the JavaScript port's desktop application

The desktop application of the JavaScript port (versions up to 1.0.8) kept its players and saves
in its Electron profile, as the storage of the page `redcat://game/index.html`:

| | JavaScript port's application | This one |
|---|---|---|
| Page address | `redcat://game/index.html` (`../RCSPOOK_NEW/electron/main.cjs`) | the same |
| Profile folder | `redcat-spookkasteel-port` in the system's folder for application data: Electron names it after the `name` of the packaged `package.json`, which has no `productName` | set by name in `electron/main.cjs` |

Same profile and same origin, so this page finds the old application's `redcat.…` keys and
`redcat-recovery-saves…` databases in its own storage and takes them over at its first start,
exactly as on the web site ([`legacy-saves.md`](legacy-saves.md)): settings, players, progress and
scores; a game saved inside a world continues at the start of that world. The old data is only
read, so the old application keeps working with it, exact place included. Without the old
application's profile on the machine (another computer, a removed profile), a file made with
**Exporteren** in the old version can be read with **Importeren** in the Spelerlijst.

Do not run the two applications at the same time: they would open the same profile.

### Checking a package

```bash
npm run desktop:check
```

`tools/desktop-check.mjs` starts `dist/desktop/unpacked/linux-unpacked/redcat-spookkasteel` under
`xvfb-run`, muted, with software WebGL and a new profile folder below `tools/out/desktop/`, and
reports: the page's origin and isolation, the headers of the shell's answers, a byte range of a
movie, world 1 starting and still drawing after twenty seconds (with a screenshot in
`tools/out/desktop/check/`), and Stoppen > Ja ending the program. It never opens the profile of an
installed game.

The take-over, on a profile that the JavaScript port's own application wrote
(`../RCSPOOK_NEW/dist/build-1.0.8/` here) and that is filled with a constructed storage dump:

```bash
node tools/desktop-check.mjs --exe ../RCSPOOK_NEW/dist/build-1.0.8/linux-unpacked/redcat-spookkasteel --profile tools/out/desktop/profile-old --seed tests/fixtures/legacy/gen5-v1.0.8-two-players.json
```

```bash
node tools/desktop-check.mjs --profile tools/out/desktop/profile-old --legacy --no-world --no-quit
```

Only the Linux x64 package can be run on the development machine. The other five are built by
the same tool from the same files and are not run by anything here.
