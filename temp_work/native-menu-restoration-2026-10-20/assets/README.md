# Original menu asset inventory

The 124 PNGs listed in `assets/menu/manifest.json` all match the decoded pixels
of their original `MenuRcs.Img` member exactly. No art re-extraction or changes
to assets are required. `asset-verification.json` records archive digests and the
complete match result. The separate `menu-logo.png` is already imported from
`MenuGfx/00030000.tga` (128 × 60).

## Backgrounds

| Screen | Original filename | Dimensions |
|---|---|---|
| Hoofdmenu | `mainscre.png` | 800 × 600 |
| Avontuur | `adventur.png` | 800 × 600 |
| Moeilijkheid | `difficul.png` | 800 × 600 |
| Snelspel | `quickpla.png` | 800 × 600 |
| Startinfo | `startgam.png` | 800 × 600 |
| Highscores | `highscor.png` | 800 × 600 |
| Spelerlijst | `editbgnd.png` | 765 × 574 |
| Ja/Nee prompt | `messbgnd.png` | 440 × 330 |

The home/adventure/difficulty/quickplay/startinfo files contain identical decoded
pixels. They have been retained under their native names. The Highscores backdrop
contains the translucent table itself at x159–643, y137–501 inclusive. Its column
rules are x336 and x510, with the header rule at y178.

## Buttons

All wide buttons are 175 × 67 including transparent margins. The final digit
selects state: 0 normal, 1 hover/focus, 2 pressed. Labels are drawn separately.

| Prefix (last digit omitted) | Purpose |
|---|---|
| `0004000` | Blank paw button, for ordinary actions |
| `0006000` | Radio choice; state 2 includes the selected yellow dot |
| `0212000` | Volgende / Start! (right chevron) |
| `0213000` | Vorige (left chevron) |
| `0216000` | Stoppen / Nee (pink X) |
| `0217000` | Ja / OK (check mark) |
| `0219000` | Instellingen (wrench) |
| `0222000` | Help (question mark) |
| `0223000` | Spelerlijst (two people) |

`00160000/1/2.png` are separate 60 × 60 music-note paw buttons.
`00120000.png` and `0x120000.png` are volume-slider artwork.

## Selection cards

- Difficulty: `03000000/1/2.png` easy (green), `03010000/1/2.png` normal
  (yellow), `03020000/1/2.png` hard (red), 180 × 245.
- Difficulty 0 is the grey idle card, 1 is the colored focused card, 2 is the
  colored selected character in a flexing pose. Labels are separate.
- Main level cards: `0400000[0–3].png` Forest, `0401000[0–3].png` Castle,
  `0402000[0–3].png` Graveyard, `0403000[0–3].png` Caves,
  `0404000[0–3].png` Tower, 150 × 171.
- State 0 is grey available, 1 colored focus, 2 colored pressed, 3 grey chained
  locked. The names correctly match their levels despite unusual archive record
  order; the initially suspected Forest/Caves swap was disproved by full-size
  pixel inspection (comparison image retained under its original hypothesis name
  `forest-caves-normal-card-swap.png`).
- The smaller old 130 × 162 level-card series in resources 40–64 is also preserved.
  `resource_040.png` etc. are deliberate safe names for duplicate native archive
  names `*empty resitem*`; these do not need to replace the 150 × 171 shipped cards.
- Chapter previews `10000000.png` ... `10040000.png` are 200 × 200.

## Typography and responsive rendering

The original screenshot uses Comic Sans MS. That family exists on this workstation
at `/home/rick/.local/share/fonts/microsoft/comic.ttf`. It is not a font asset in
this game's installation, so it has not been copied into the port. CSS requests
local `Comic Sans MS`, then `Comic Neue`, then the system cursive fallback. Systems
without the original installed font therefore can differ in glyph shapes.

`src/original-menu.css` restores the 800 × 600 composition at a uniform scale.
Portrait phones intentionally reflow imported cards and buttons vertically so the
menu remains readable and touch-accessible; this is not a claim about the original
Windows game's layout support.

## Restored options frame and additional layout evidence

`Settings/MenuCaps.ini` fixes the options dialog at its imported 765 × 574 frame:
Help x590/y0, OK x415/y505, Annuleren x590/y505, title x8/y72. The original
runtime's four child panel anchors are x64/y104 (Besturing), x280/y104
(Beeldkwaliteit), x512/y104 (Geluidseffecten), and x512/y232 (Muziek).
The tall `06150000.png` panel is 204 × 401. Its first dark cell (y36–110)
contains the centered selected icon, the middle cell (y118–310) contains the
three radio choices, and the bottom cell (y318–381) contains the action. The
234 × 99 `00120000.png` surrounds both sound sliders.

The present HTML uses those native panel, radio-button and slider surround
resources. Control/quality radio buttons expose `aria-pressed`; selected icon
and text are separate DOM fields; the redundant text is visually hidden because native only shows the icon here. `Geavanceerd` opens a scrollable extension
containing every port-specific setting. No gameplay touch selector is changed.
The browser's slider handle is an accessible HTML range handle rendered over the
original wedge graphic; this does not claim byte-for-byte native widget drawing.

Also recovered from MenuCaps: main header Help x448 and Stoppen x624; footer
Previous x448, Next x624, Settings x0, Players x176, all footer y536. A fallback
font difference remains possible on systems without Comic Sans MS, as above.

Visual-only screenshots and `layout-report.json` cover 800 × 600, 1920 × 1080,
390 × 844, 320 × 568 and 844 × 390. `menu-layout.mjs` serves actual HTML/CSS/art
but removes the application bootstrap; it constructs OriginalMenu using a small
isolated state fixture, so those shots do not replace real gameplay/menu tests.
All original menu pages and the base/advanced settings were inspected. Small
portrait layouts scroll vertically instead of letting controls overflow sideways.


## Completed source UI review

`actual-menu-review.mjs` runs the real source bootstrapping on a dedicated server
at localhost:4388 with isolated browser profiles stored in this evidence folder.
Its minimal existing-save fixture is only for menu branching; it is **not** a
campaign-restoration or gameplay fixture. The run covers 800 × 600, 390 × 844 and
320 × 568: main menu, original radio artwork states, Startinfo, expanded extra
options, player list, native Help context/search/topics, settings, key settings,
and advanced settings. The 36 screenshots and `actual-menu-review.json` recorded
no JavaScript page errors or failed HTTP responses. CSS artwork was explicitly
decoded before capture; `networkidle` alone did not reliably wait for newly shown
dialog backgrounds in early retained images.

The original options radio controls were subsequently checked against
`TCompOptionA.AlignComponents` at `0x556d2c`: 175 × 67 artwork at local x16,
y113/180/247; configure button at x16/y317; 49 × 47 selection icon centered in
the upper cell; title at y10 in 12-point Comic Sans MS. The implementation now
uses these dimensions, including the panel and slider-surround graphics.

Startinfo now also uses the full `TfrmStartGame` coordinates in MenuCaps.ini:
level image x168/y192 and control-device image x488/y192, both 200 × 200;
headings x178/y162 and x490/y162; level name x170/y402; Name, Score and
Difficulty x170/y442,466,490 and values at x274. Native device art is
`11010000.png` gamepad, `11020000.png` keyboard, `11030000.png` joystick.
The port's restart/recovery/intro extras are preserved under **Meer opties**
in the unused lower-left area, opening upward on desktop and in document flow
on portrait devices. They do not cover native Start or Previous buttons.

Concrete visual issues corrected during real-source review:

- Player-list Help and close controls now fit even a 320-pixel portrait width.
- Key-configuration dialog labels had inherited black browser-dialog text over
  a dark background. The dialog now uses original menu artwork, white labels,
  a yellow title, and readable scrollable controls.
- Startinfo metadata uses native 12-point text so the difficulty label does not
  run into its value.

`final-layout-check.mjs` and its JSON/screenshots are the targeted final check for
those Startinfo/key-dialog CSS changes at 800 × 600 and 320 × 568. This is source
UI validation, not a packaged build or a new full campaign test.
