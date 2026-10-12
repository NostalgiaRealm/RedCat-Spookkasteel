# Original game icon

The browser favicon and app icons use the RedCat face extracted from
`RcHcGame.dat`, the original game's Windows executable. Its single icon group
is resource **107**, language **1043**, containing a **32×32, 8-bit** image in
icon resource **2**. The original executable is only read, never run or changed.

The imported files live in `assets/icons/`:

| File | Purpose |
| --- | --- |
| `redcat-original.ico` | Original icon resource bytes wrapped in an ICO directory. |
| `redcat-32.png` | Original pixels with the palette and transparency mask decoded. |
| `redcat.ico` | Browser favicon and Windows app icon, with 16–256 pixel sizes. |
| `redcat.png` | 512 pixel Linux/Electron icon and development macOS Dock icon. |
| `redcat.icns` | Packaged macOS app icon, including Retina sizes. |
| `apple-touch-icon.png` | 180 pixel icon for browser home-screen bookmarks on Apple devices. |
| `source.json` | Original executable SHA-256 and icon resource identifiers. |

Resizing uses nearest-neighbor sampling to preserve the original pixel art.
Larger files do not contain additional artwork. Android uses the same artwork,
centered on a transparent 432×432 foreground canvas with padding for adaptive
launcher masks. Its existing dark background and themed-icon support remain.

## Regenerate the icons

Already imported icons are included in the project; Python is only needed to
regenerate them. From the project root, create an isolated Python environment
and install the two importer dependencies:

```sh
python3 -m venv temp_work/app-icon/venv
temp_work/app-icon/venv/bin/python -m pip install Pillow pefile
temp_work/app-icon/venv/bin/python tools/import_app_icon.py \
  "/path/to/original/RedCat Spookkasteel/RcHcGame.dat" \
  --android-foreground android/app/src/main/res/drawable-nodpi/redcat_launcher_foreground.png
```

On Windows, use the virtual environment's `Scripts/python.exe` instead of
`bin/python`. Omit `--android-foreground` to regenerate only `assets/icons/`.
These commands import images; they do not build an app.

`index.html` selects the browser icons, `electron/main.cjs` selects the running
desktop window/Dock icon, and `package.json` selects the packaged platform icons.
Windows packaging keeps resource editing enabled while disabling signing with
`win.signExecutable: false`; disabling `signAndEditExecutable` would prevent the
builder from replacing Electron's executable icon. The Android resource is
referenced by `ic_launcher_foreground.xml`.

Restart the source app or reload the web page to pick up source changes. Existing
desktop packages and installed Android apps retain their previous embedded icons
until rebuilt. A desktop environment or browser may also cache its displayed icon.
