# Original level loading screen

Implemented and checked on 2026-10-10. The loading screen uses the original
artwork and Dutch labels for all five levels, replacing the port's loading panel
and spinner. It is shared by desktop, browser and Android presentations.

## Original sources

`Settings/Loading.ini` defines a 640 × 480 layout:

| Element | Original position and size |
|---|---|
| Background | Entire canvas |
| Logo | (0, 0), 102 × 48; source region 256 × 42 |
| “Even Wachten” | Centered, y = 0; Comic Sans MS, size 30 |
| “Avontuur” | Centered, y = 60; Comic Sans MS, size 23 |
| Level illustration | Centered, y = 94; 256 × 256 |
| Loading message | Centered, y = 360; Comic Sans MS, size 23 |
| Progress bar | Centered, y = 400; 300 × 5 |

`Settings/LanguageNL.ini` supplies “Even Wachten”, “Avontuur”, and
“Bezig met het laden van”, followed by the correct native level name: Het Bos,
Het Kasteel, Het Kerkhof, De Grotten or De Kasteeltoren. The port continues to
use one adventure mode, including when revisiting levels.

The imported bitmaps are `LoadingBG.bmp`, `LogoBG.bmp`, `Progress.bmp` and
`levelbg1.bmp` through `levelbg5.bmp`. Their original alpha masks are retained
where supplied. These loading illustrations include their original borders and
are distinct from the smaller menu previews.

## Reproducing the import

Python 3 and Pillow are required. From the project directory:

```sh
python3 tools/import_loading.py --installation '/path/to/RedCat Spookkasteel'
```

On Windows, use `python` and the corresponding quoted Windows path. The importer
writes `assets/loading/`; `--output` can select another destination. The manifest
records native layout settings, text and source SHA-256 hashes. The original
installation is read without modification. The complete `tools/import_assets.py`
workflow also runs this step. Include `assets/loading/` when distributing or
hosting the prepared game; the existing packaging rules already include it.

## Runtime and responsive behavior

`src/loading-screen.js` prepares all five small illustrations in advance so a
new load does not briefly display the previous level's artwork.
`src/loading-screen.css` reproduces the 4:3 placement and expands the background
to cover the window. The logo stays in the window's upper-left corner.
Widescreen layouts keep the illustration square. Portrait layouts reposition
and wrap the text, keep the illustration square and respect the logo's safe area.
Comic Sans MS is used when installed, with Comic Neue and the system cursive
font as fallbacks; no Microsoft font file is bundled.

The red bar advances at actual loader milestones: preparation, level data,
actors, gameplay attachment and the initial visible geometry becoming ready.
Its percentages are stage indicators, not downloaded-byte percentages. A delayed
streamed view uses the same screen with a travelling red segment, since its work
has no fixed total; reduced-motion preferences disable that animation. Failed
loads dismiss the screen and reveal the existing error display.

The native INI also specifies 0.4-second fades. This change restores the screen's
artwork and layout without adding fade delays to loading or changing audio
scheduling.

## Focused verification

`node tests/loading-screen-scenes.mjs` checks all five level names and pictures,
successful loading, a delayed streamed view and error dismissal. It also checks
text overflow and spacing at 1280 × 960, 1920 × 1080, 844 × 390, 390 × 844 and
320 × 568, using the first and last level. All checks passed.

Screenshots and reports are retained under
`temp_work/loading-screen-2026-10-09/`. The 4:3, widescreen and portrait results
were visually inspected. No release builds were created.
