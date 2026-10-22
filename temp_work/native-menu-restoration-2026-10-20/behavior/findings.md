# Native menu behavior and portable Help extraction

Investigated 20 October 2026 with REA/Hopper, the shipped Delphi menu binary,
its configuration, and retained disassembly. These are observations about the
shipped program, not recovered original source.

## Inputs and retained evidence

- Native root:
  `/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel`.
- `RcHcMenu.dat` SHA-256:
  `c859320e2cb5be2db8e1c344a15ee388a7bee9728e10f09b89b7e1111485698f`.
- `Agent/REDCAT.HLP` SHA-256:
  `cdda82596b88875f78d7435389ba081cddf1a26a87abe548370b2150197442aa`.
- Original `Settings/menu.ini`, `Settings/MenuCaps.ini`, `Settings/Agent.ini`,
  and `Agent/REDCAT.ghc` identify labels, layout, help contexts and topic IDs.
- Retained complete disassembly:
  `temp_work/player-profiles-native/menu-disassembly.txt`.
- This directory's `rea-*.json` retain REA function dossiers, evidence IDs,
  assembly, decompiler output and limitations. `home.asm`, `start-info.asm`,
  `highscores.asm`, `help.asm`, and `settings.asm` are scoped retained listings.
- Hopper reports incomplete function-body coverage and decompiler-generated
  pseudocode. Addressed branches and actual call arguments were checked against
  assembly; a DFM resource alone does not establish that a screen is reachable.

## Screen graph

Native home has three radio choices, followed by Volgende. The choices themselves
do not launch a game:

| Choice | Click handler | Mode | Voice | Volgende destination |
|---|---|---:|---|---|
| Avontuur | `0x56114c` | 2 | `RCMN10` | Difficulty for a new player; otherwise Startinfo |
| Snelspel | `0x5611a0` | 1 | `RCMN11` | Level selection |
| Highscores | `0x5611f4` | 3 | `RCMN12` | Highscore list |

Home show `0x560978` plays `RCMN9`. Home Volgende `0x561068` plays
`RCMN5`. The adventure branch checks the player new flag at `player+0x14 == 1`.
QuickPlay Volgende `0x55e390` plays `RCMN5` and goes to Difficulty.
Difficulty Volgende `0x55d674` plays `RCMN5` and goes to Startinfo.
Previous handlers use `RCMN6` and the inherited previous-screen operation.

The binary includes an old `TfrmAdventure` DFM with Doorgaan/Opnieuw controls,
but the examined executable has no corresponding RTTI/class handlers or
`RCMN29` literal. Do not add that page to the live native graph based only on the
resource. The port's explicit restart/overwrite confirmations remain separate,
previously requested improvements.

### Page-show and launch sounds

- QuickPlay FormShow `0x55debc`: no spoken-file playback call. It restores the
  selected level and applies the authored lock states.
- Difficulty FormShow `0x55d36c`: plays `RCMN30` only when global
  `0x5748ac == 0`. The wider meaning of that global is not established here.
- Startinfo FormShow `0x55c65c`: no spoken-file playback call.
- Highscores FormShow `0x55f578`: no spoken-file playback call.
- Startinfo Start `0x55ccd8`: native adventure uses `RCMN32` and clears the
  player-new flag; native Snelspel uses `RCMN43`. The user's earlier request
  specifically chose `RCMN32` for every menu launch; preserving that is an
  intentional port difference.
- Level-selection number/name pairs were already recovered in the earlier
  menu-audio work: `RCMN33`/`RCMN38` through `RCMN37`/`RCMN42`.

## Settings and key configuration

| Action | Handler | Native voice/behavior |
|---|---|---|
| Open settings from home | `0x560c94` | `mn_red24` |
| Settings FormShow | `0x55bbd8` | `Mn_In01` |
| Keyboard / Gamepad / Joystick selection | `0x55b4b8` | `Mn_In02` / `Mn_In03` / `Mn_In04` |
| Low / Normal / High quality selection | `0x55b6fc` | `Mn_In08` / `RCMN20` / `Mn_In09` |
| Besturing Instellen | `0x55b8b8` | `Mn_In05`; opens seven-action key configuration |
| Key configuration Standaard | `0x55ac28` | `RCMN20`; reloads defaults |
| Key configuration individual action | `0x55ab18` and neighboring wrappers | Selects action and begins key assignment; no voice call in these wrappers |
| Key configuration Instellen | `0x55ae64` | `Mn_In05`; begins sequential configuration |
| Apply settings | `0x55be60` | Saves selections; plays `RCMN1` |

Besturing Instellen creates the same key configuration form; its handler does
not dispatch to `joy.cpl`. The selection handler enables this button only for
keyboard (`0x55b502..0x55b527`) and disables/hides it otherwise
(`0x55b555..0x55b57a`). Controller bindings are fixed in the native game.
Seven native actions are forward, left, back, right, shoot, jump and sidestep.
Their native defaults are arrow keys, Control, Space and Alt.

Quality stores an enum `0/1/2` at the native options object offset `+0x2c`.
This investigation does not establish exact per-preset rendering resolution,
texture or effects values in the game executable. Browser/Electron quality
presets must therefore be documented as modern adaptations, not claimed as
identical native graphics-device settings. The port's added settings remain.

### Settings panel layout

`TCompOptionA.AlignComponents`, `0x556d2c`, and its constructor `0x556824`
recover the layout inside the original `06150000` panel (204×401):

- White centered Comic Sans MS 12pt title at top 10.
- Current selection artwork, 49×47, horizontally centered.
- Radio controls at left 16; first top 113, each following row immediately
  after the previous according to control height.
- Instellen at left 16, top = third radio top + its button height + 3.
- With the imported 175×67 controls these rows are 113, 180, 247, and 317.
- The first dark cell is the selection icon; the middle contains all three
  radio rows; the last contains Instellen.

The icon's top depends on the hidden heading control height plus five; do not
infer an exact numeric top from the static panel placeholder alone.
`Settings/MenuCaps.ini` supplies the form-level Help, OK and Cancel positions.

## Highscore semantics

Highscores FormShow `0x55f578` constructs a record using the active player's
name and adventure score (`player.adventure(+0xc).score(+0x24)`), then calls
the insertion routine `0x551a9c`. The list retains ten entries sorted by score.
Equal scores are eligible and the new entry is inserted before an existing
equal score.

Shipped defaults from menu.ini are Teun 100, Gyda 90, Paul 80, Brian 70,
Pascal 60, John 50, Rob 40, Tineke 30, Harry 20, Rene 10. A further Nineke
zero entry exists in configuration outside the ten displayed rows.

Display routine `0x55f4cc` shows the actual current chapter only for the newly
inserted current-player entry. Other rows use MenuStrings32, `Klaar!`.
This is a native storage/display limitation. A port implementation that keeps
the best score per player and retains actual chapter labels improves that
behavior and should be described as such.

## Help: correct original file and workflow

Shared Help handler `0x553208` plays `Mn_red21`, then calls the contextual
Agent/WinHelp integration. This is not merely a spoken Help label.
`Agent.ini` maps the native screen contexts:

| Screen | Native context |
|---|---:|
| Player list | 10 |
| Home | 20 |
| Difficulty | 30 |
| Adventure Startinfo | 40 |
| Snelspel Startinfo | 50 |
| QuickPlay level selection | 60 |
| Settings | 70 |
| Key configuration | 80 |
| Highscores | 90 |

Startinfo Help override `0x55ceb0` selects context 50 for Snelspel and 40 for
Avontuur after the inherited handler.

The installation's root `Menu.hlp` is an unrelated German **Urlaubs Raser**
help file: its decompilation yields racing topics and 21 bitmaps. It is not
RedCat help and must not be imported into this port. The retained
`help-menu/` directory establishes that negative finding.

The correct original help is **Agent/REDCAT.HLP**, titled **Help RedCat
Spookkasteel**. It has **38 mapped Dutch topics** and **no bitmaps**. There
are additional RoboHelp infrastructure fragments and a non-mapped hash;
those are not game help pages. Extracted original text covers home,
players, adventure, quickplay, difficulty, start information, scores,
settings and the seven-action key configuration.

The portable export is `assets/help/manifest.json`:

- 38 topics, 110 paragraphs, 13 screen context aliases and 8 topic groups.
- Each topic keeps its symbolic ID, numeric native ID, native hash, original
  title and paragraphs.
- HTML is restricted to escaped text inside paragraph tags.
- Original wording is preserved, including dated hardware instructions.
- Symbol-font arrows/bullets become Unicode.
- Two leaked malformed destination identifiers are removed from visible text.
- Six native inline topic jumps are retained as structured link metadata; two
  malformed level links are repaired using their shipped symbolic destinations.
- The grouped topic navigation replaces WinHelp/Agent platform dependencies.

### Reproduce the extraction

The caller supplies a local build of
<https://github.com/pmachapman/helpdeco>. The build used here remains in
`helpdeco/`, with `helpdeco-build.log`; it is an extraction dependency only.

From the project root:

```sh
python3 tools/import_menu_help.py \
  --native-root '/home/rick/Games/redcat-spookkasteel/drive_c/Program Files (x86)/Davilex/RedCat Spookkasteel' \
  --helpdeco temp_work/native-menu-restoration-2026-10-20/behavior/helpdeco/gcc/helpdeco \
  --work-dir temp_work/native-menu-restoration-2026-10-20/behavior/help-redcat \
  --output assets/help/manifest.json
```

The importer retains the decompiled RTF, HPJ and extraction log in the requested
work directory. It reads symbols from the shipped `Agent/REDCAT.ghc`.

Focused static verification passed: the importer parses, all 38 topic IDs and
native numeric IDs are unique, every context/group target exists, every topic
is grouped, all eight inline links resolve, and emitted HTML contains only
paragraph tags with escaped text.
Export SHA-256:
`0c5c69b364c0c7e7a847cc794148e57628f9844a75bd7cba1e7910e54a14dadb`.
This does not by itself establish browser UI verification or game completion.

The REA target was closed after saving
`rea-menu-analysis.snapshot.json` (20 retained evidence records).
