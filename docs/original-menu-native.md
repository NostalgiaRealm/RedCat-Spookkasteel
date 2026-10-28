# Original menu restoration

The port restores the original RedCat Spookkasteel menu artwork, screen flow
and button voices while retaining the port's additional settings and save
features. The original Windows menu is a separate Delphi program,
`RcHcMenu.dat`; the port implements its interface in HTML, CSS and JavaScript.

The evidence below was checked on 20 October 2026. Recovered behavior comes
from the shipped executable, its Delphi form resources, `Settings/menu.ini`,
`Settings/MenuCaps.ini`, and the Dutch help shipped with the game. Decompiler
output is an aid to understanding the binary, not recovered original source.

## Original screen flow

The original Hoofdmenu has **Avontuur**, **Snelspel**, and **Highscores** radio
buttons. Selecting one speaks its name; **Volgende** advances to the chosen
screen.

| Selection | Native destination |
|---|---|
| Avontuur, new player | Moeilijkheid → Startinfo → game |
| Avontuur, returning player | Startinfo → continued adventure |
| Snelspel | Griezelplek selection → Moeilijkheid → Startinfo → selected level |
| Highscores | Ten-row highscore list |

The bottom buttons open **Instellingen** and **Spelerlijst**. **Help** opens
contextual help; **Stoppen** opens the Ja/Nee confirmation. Player creation,
selection and removal keep each player's progress separate.

Startinfo displays the chosen player, difficulty, level and input method.
Its input artwork now has a visible caption: **Muis en toetsenbord** on
computers, or **Aanraakscherm** with KDE's touchscreen icon when touch controls
are enabled (automatically on mobile, or explicitly in settings). An active
controller takes priority. Disabling touch restores the selected conventional
input display; this caption does not change the input settings themselves.
The icon is copied unchanged from the installed KDE Breeze theme; attribution,
license and its distinction from the older flat-blue design are recorded in
[KDE touchscreen artwork](../assets/icons/KDE-TOUCHSCREEN.md).
Its native published actions are Start, Stoppen, Vorige and Help; the
information fields themselves are not interactive shortcuts.

An older `TfrmAdventure` form resource contains Doorgaan/Opnieuw controls,
but no corresponding reachable class/handler was found in the examined
executable. That resource alone is not evidence for adding an intermediate
adventure screen. The port's restart and overwrite confirmations remain as
previously requested safeguards.

## Original artwork and layout

The menu uses the imported archive artwork in [assets/menu](../assets/menu/),
including normal, selected and disabled button states, the original logo,
backgrounds, level previews, locked-level cards, difficulty ghosts, settings
panels and input-device pictures.

[The asset manifest](../assets/menu/manifest.json) records the original archive
names and extracted dimensions. The original layout uses an 800×600 canvas
and Comic Sans MS; the portable layout scales to the game window.
`Settings/MenuCaps.ini` supplies runtime positions that can override the
placeholder positions in the Delphi forms.

The 204×401 settings panels have a selection icon above three radio rows and
a bottom action button. `TCompOptionA.AlignComponents` places the radio rows
at x16, starting at y113; with the original 175×67 button art the rows are
y113/180/247 and the bottom action starts at y317. The selected input/quality
icon is centered and measures 49×47.

## Voices and actions recovered from the executable

File names below omit the `.wav` extension. Existing deliberate audio
scheduling changes remain; matching a voice does not require reproducing
native interruption bugs.

| Action | Native voice |
|---|---|
| Display Hoofdmenu | `RCMN9` |
| Select Avontuur / Snelspel / Highscores | `RCMN10` / `RCMN11` / `RCMN12` |
| Volgende / Vorige | `RCMN5` / `RCMN6` |
| Help | `Mn_red21` |
| Enter settings from home | `mn_red24` |
| Display settings | `Mn_In01` |
| Keyboard / Gamepad / Joystick | `Mn_In02` / `Mn_In03` / `Mn_In04` |
| Low / Normal / High quality | `Mn_In08` / `RCMN20` / `Mn_In09` |
| Besturing Instellen | `Mn_In05` |
| Key configuration Standaard | `RCMN20` |
| Key configuration Instellen | `Mn_In05` |
| Apply settings / cancel | `RCMN1` / `RCMN2` |
| Effects/music slider down / up | `RCMN15` / `RCMN16` |
| Difficulty screen prompt | `RCMN30` |
| Makkelijk / Normaal / Moeilijk | `mn_red02` / `mn_red03` / `mn_red04` |
| Select level 1–5 | `RCMN33`–`RCMN37`, followed by `RCMN38`–`RCMN42` respectively |
| Start adventure | `RCMN32` |
| Start Snelspel | `RCMN43` |

Native Difficulty FormShow plays `RCMN30` only when global `0x5748ac` is
zero; the broader lifetime of that flag was not established in this pass.
QuickPlay, Startinfo and Highscores FormShow do not play an additional spoken
prompt. Individual key-binding action buttons enter assignment without a
voice call in their handlers. No separate native **Geavanceerd** voice was
verified, so no invented mapping is required.

Native Besturing Instellen is enabled for keyboard and disabled for
gamepad/joystick. It opens seven keyboard actions: forward, left, back, right,
shoot, jump and sidestep. Defaults are arrow keys, Control, Space and Alt.
The gamepad/joystick bindings were fixed in the original.

Earlier menu audio research is retained in [menu-audio.md](menu-audio.md).
This original-menu restoration uses the verified launch distinction:
`RCMN32` for Avontuur and `RCMN43` for Snelspel. Level transitions during
gameplay do not play either menu launch announcement.

## Portable original Help

The correct Dutch help file is **`Agent/REDCAT.HLP`**, titled **Help RedCat
Spookkasteel**. It contains **38 mapped topics** and no bitmaps.

The installation also contains a root **`Menu.hlp`**, but that file is
unrelated German *Urlaubs Raser* racing-game help. It was inspected and
excluded. Importing a file merely because it is named Menu.hlp would give the
wrong game's instructions.

The native Help handler speaks `Mn_red21`, then invokes contextual
Agent/WinHelp behavior. `Agent.ini` identifies contexts for the player list,
home, difficulty, adventure Startinfo, Snelspel Startinfo, level selection,
settings, key configuration and highscores.

[assets/help/manifest.json](../assets/help/manifest.json) preserves all 38
mapped Dutch topics, their original titles and 110 text paragraphs, numeric
IDs, symbolic IDs and help hashes. The portable viewer provides topic
navigation, search, contextual opening and back navigation without requiring
Windows Help or Microsoft Agent.

Six original inline topic jumps are preserved structurally. Two malformed
level links are repaired using the destination identifiers that were already
present in the shipped help. Symbol-font arrows and bullets are represented
as Unicode. RoboHelp infrastructure fragments that are not game help topics
are excluded. Original wording, including dated hardware instructions, is
retained.

The reproducible importer is [tools/import_menu_help.py](../tools/import_menu_help.py).
It accepts the native installation directory, a local `helpdeco` executable,
and a retained extraction directory. Full commands and extracted RTF/HPJ
evidence are in the retained investigation linked below.

## Highscore behavior and portable adaptations

Native Highscores records the active player's adventure score and inserts it
into a descending ten-row list. A newly inserted equal score goes before an
existing equal score. Shipped defaults are Teun 100, Gyda 90, Paul 80, Brian
70, Pascal 60, John 50, Rob 40, Tineke 30, Harry 20 and Rene 10.

The native list displays the current chapter only for the newly inserted
current-player entry; other records display **Klaar!**. The port instead
retains each player's best score without duplicate entries and stores the
actual chapter with it.

These adaptations are intentional:

- Existing advanced settings remain available, including touch controls,
  controllers, camera settings, render scaling, FPS display and cheats.
- Gameplay touch buttons and the touch Menu button remain available.
- Standard controller detection and touch input remain compatible with
  browsers and Electron.
- The port exposes eleven useful key actions instead of limiting remapping
  to the original seven keyboard actions.
- Low/Normal/High quality presets use 50%/75%/100% rendering scale. The native
  menu stores a quality enum `0/1/2`; exact native graphics-device preset
  values were not recovered here. These are portable presets, not a claim
  that modern WebGL settings reproduce old DirectDraw options pixel for pixel.
- **Geavanceerd**, under Beeldkwaliteit, contains Resolutie, Renderschaal and
  Anti-aliasing (MSAA): Uit/2x/4x/8x. Unsupported sample counts are disabled; a
  saved choice from a more capable device falls back to its highest supported
  count without exceeding the requested value (or Uit when none is available).
  The default is 4x where supported. MSAA changes apply with OK, without
  restarting the level. See [MSAA implementation and checks](msaa-rendering.md).
  **Meer instellingen**, below Muziek, contains the remaining added settings,
  cheats and links to Besturing and Over. Switching sections preserves draft
  values; OK applies them together and Annuleren discards them.
- Per-player progress, save recovery, restart safeguards and JSON save export
  remain available. The added Importeren action restores an exported backup
  into the selected player after validation and explicit confirmation. See [save-export.md](save-export.md).
- WinHelp is replaced by the searchable portable viewer using the original
  Dutch content.
- The leaderboard avoids duplicate entries and retains the actual chapter.

## Evidence and verification

[Retained findings](../temp_work/native-menu-restoration-2026-10-20/behavior/findings.md)
include function addresses, extraction commands and uncertainty boundaries.
The neighboring `rea-*.json` records preserve REA evidence IDs and function
dossiers; source hashes distinguish this installation from another release.

Key native functions include home routing `0x561068`, choice handlers
`0x56114c`/`0x5611a0`/`0x5611f4`, Startinfo launch `0x55ccd8`,
shared Help `0x553208`, Startinfo context override `0x55ceb0`,
settings input selection `0x55b4b8`, quality selection `0x55b6fc`,
settings apply `0x55be60`, and highscore display `0x55f4cc`.

Focused extraction checks verify unique topic IDs, valid context and group
references, complete topic grouping, safe escaped text, and valid inline jump
targets. All 124 imported menu PNGs were compared with the original archive
pixels; no replacements were needed.

Source validation on 20 October 2026 covered:

- Eleven browser integration checks for the original page flow, locked and
  unlocked chapters, overwrite cancellation, player isolation, actual JSON
  download, Help, settings, keyboard remapping and a real Forest start with
  touch controls and the gameplay Menu button.
- Five final checks for Startinfo's two images and saved metadata, controller
  access to Meer opties, contextual keyboard Help, all eight Help crosslinks
  and Snelspel's `RCMN43` announcement and loading title.
- Focused unit checks for bindings, menu audio/sliders, highscores, export
  payloads, the Electron export adapter and the Android bridge.
- Actual-source visual checks at desktop and portrait phone sizes, including
  320px width. No JavaScript errors or failed asset requests were observed.

The [integration record](../temp_work/native-menu-restoration-2026-10-20/compatibility/integration-result.json)
and [visual evidence](../temp_work/native-menu-restoration-2026-10-20/assets/README.md)
retain the findings and reports. Disposable screenshots and test profiles were
removed in the 22 October cleanup; user saves were not modified. The original
menu source pass built no packages. The subsequent
[1.0.1 release verification](../temp_work/release-1.0.1-2026-10-20/release-verification.json)
records six desktop packages and a Linux packaged startup/save/export check.
That check supplied the desktop save-dialog destination: interacting with the
real desktop OS dialog and a physical Android device/document provider still
need target-device validation. Later Android debug-emulator checks and release
artifact boundaries are listed in [platform status](portability.md); they are
not a claim of physical-device provider verification.


## Maintaining current menu scene checks

The menu was restored after several earlier browser tests were written. Active
scene checks now share [tests/scene-menu.mjs](../tests/scene-menu.mjs), which
navigates the visible Hoofdmenu, Snelspel, Moeilijkheid, Startinfo, Meer opties
and Meer instellingen controls using normal clicks or touch taps. It does not
change game storage or bypass menu handlers. Avoid reintroducing the removed
flat-menu `#start`/`#continue` controls just to satisfy an old test.

Choose only the check for the changed feature:

| Concern | Current scene check |
| --- | --- |
| Chapter selection and delayed overwrite warning | `node tests/level-selection-menu-scenes.mjs` |
| Player separation, voices, switching and deletion | `node tests/player-menu-scenes.mjs`, `node tests/player-menu-lifecycle-scenes.mjs` |
| New-adventure ability reset and cancellation | `node tests/new-adventure-skills-scenes.mjs` |
| Tutorial suppression for replayed chapters | `node tests/replayed-level-intros-scenes.mjs` |
| Recovery-save loading and timeline retention | `node tests/recovery-menu-scenes.mjs` |
| Chapter unlocks, difficulty and automatic saving | `node tests/campaign-settings-scenes.mjs` |
| Explicit unlock cheat | `node tests/cheat-unlock-levels-scenes.mjs` |
| Actual touch input and menu navigation | `node tests/touch-scenes.mjs` |
| Browser hosting beneath a URL prefix | `node tests/web-subpath-scenes.mjs` |

These scripts keep each run's browser profile, reports and captures in
`temp_work/<test-name>/run-<timestamp>/`. They default to a software WebGL
renderer for reproducible headless functional checks; `REDCAT_TEST_ANGLE`
selects another backend when appropriate. Their timings are not hardware
performance measurements, and these tests do not validate packaged releases.

The former `tests/new-adventure-warning-scenes.mjs` held the old flat-menu
presentation assertions for controls that no longer exist; it was removed on
28 October 2026. Its run is recorded in
`temp_work/saved-adventure-menu-2026-10-03/`. The `#start` in
`tests/pickup-audio-tail-scenes.mjs` is a button in that test's deliberately
isolated audio fixture and remains valid; it is not the removed game menu.
