# The menu

The page opens on the original Hoofdmenu and starts the recompiled game from it. The original
menu is a separate Delphi program (`RcHcMenu.dat`) that is not recompiled; what runs here is the
HTML reconstruction of it from the JavaScript port in `../RCSPOOK_NEW`, copied into this project
and wired to the page API in `source/web/` (`game.js`, `players.js`, `settings.js`). How that
reconstruction was recovered from the original (form resources, `Settings\menu.ini`,
`MenuCaps.ini`, voices per button) is documented there: `docs/original-menu-native.md`,
`player-profiles-native.md`, `campaign-menu-native.md`, `menu-audio.md`.

Written 2026-11-12; the movies and the original's sound levels were added the same day. Checked in headless Chromium only (see the end).

## Files

| File | Content | From `../RCSPOOK_NEW` |
|---|---|---|
| `public/index.html` | Markup of the menu, its dialogs and the settings pages | body of `index.html`, cut down to the menu |
| `source/menu/menu.js` | Entry: state, starting a game, coming back from it, keys, controller, scaling | replaces the menu glue of `source/main.js` |
| `source/menu/original-menu.js` | Hoofdmenu, Snelspel, Moeilijkheid, Startinfo, Highscores pages | `source/original-menu.js`, adapted; the Griezelplek cards come from `main.js` (`renderChapters`) and `campaign-progress.js` (`chapterArtwork`) |
| `source/menu/player-menu.js` | Spelerlijst, name prompt, delete confirmation, Exporteren and Importeren | `source/player-menu.js` |
| `source/menu/save-export.js` | What an export file holds, and the checks on a file that is imported (pure functions, also run under Node) | new; file name, limits and wording from `source/save-export.js`, `save-import.js` |
| `source/menu/quit-menu.js` | Stoppen confirmation | `source/quit-menu.js` |
| `source/menu/settings-menu.js` | Instellingen and its pages | new; the first page follows `showSettings` / `refreshNativeSettings` / `applySettings` in `main.js` |
| `source/menu/native-help.js` | Help viewer | `source/native-help.js`; changed: `extra`, the port's own topics as a last group |
| `source/menu/port-help.js` | The port's own help pages: Op avontuur, Controller, Aanraakscherm, Opslaan en verder spelen | new; the old project's Besturing page ("Op avontuur"), written for this port's controls |
| `source/menu/gamepad-menu.js` | Moving through buttons with a controller | `source/gamepad-menu.js`, unchanged |
| `source/menu/gamepad-nav.js` | Reads the controller for the menu | new, small; repeat timing of `source/gamepad-input.js` |
| `source/menu/menu-audio.js` | Music and voices, at the original's levels | interface of `source/menu-audio.js`; own playback (Web Audio buffer for the music, `<audio>` for voices) instead of that project's audio engine |
| `source/menu/gdi-slider.js` | The slider of the original options form | new |
| `source/menu/slider-audio.js` | The clip a slider says when it moves | `source/slider-audio.js`, table of sliders changed |
| `source/menu/movie.js` | Leader, intro and outro in a `<video>` | new; the old project's `source/intro-playback.js` plays muted when sound is refused, which the original never does |
| `source/menu/player-file.js` | The adventure's part of a player file, kept apart from a Snelspel; the player's two volumes | new |
| `source/menu/highscores.js` | The stored table and the ten rows | new; the shipped names as in `source/menu-highscores.js` |
| `source/menu/key-guard.js` | First key listener of the page | new |
| `source/menu/style.css` | Paw buttons, Spelerlijst, prompts, setting rows | the used part of `src/style.css`, every rule scoped to `.rc-menu` |
| `source/menu/original-menu.css` | The 800 × 600 composition and the options form | `src/original-menu.css`; first and last part unchanged except artwork paths, the settings part adapted |
| `source/menu/native-help.css` | Help viewer | `src/native-help.css`, unchanged |
| `source/menu/port.css` | Layers, scaling of the forms, loading and closing states, gear button | new |
| `tools/menu-check.mjs` | Walks the menu in headless Chromium, saves screenshots | new |

Nothing is imported from the other project at run time.

## Artwork, voices, music, movies, help text

They are **not** copied into this repository. The development server maps the URL prefix
`/assets/` to `../RCSPOOK_NEW/assets` (read only; `tools/serve.mjs`, `RC_MENU_ASSETS` overrides
the folder), and the page refers to them by relative URL (`assets/menu/…`). For a web server
`tools/package.mjs` copies what the menu uses next to `index.html` (`hosting.md`); its rules
follow this table:

| Path under `assets/` | Used for |
|---|---|
| `menu/mainscre.png`, `adventur.png`, `difficul.png`, `quickpla.png`, `startgam.png`, `highscor.png`, `editbgnd.png`, `messbgnd.png`, `menu-logo.png` | page and form backgrounds, logo |
| `menu/0004000[0-2]`, `0006000[0-2]`, `0212…`, `0213…`, `0216…`, `0217…`, `0219…`, `0222…`, `0223…` (`.png`) | paw buttons: idle, hover, pressed |
| `menu/030[0-2]000[0-2].png` | difficulty ghosts |
| `menu/040[0-4]000[0-4].png` | Griezelplek cards: free, hover, chosen, chained, chained hover |
| `menu/100[0-4]0000.png`, `11010000.png`, `11020000.png` | Startinfo pictures: world, gamepad, keyboard |
| `menu/00120000.png`, `06150000.png`, `06160000.png`, `06170000.png`, `06180000.png` | options form: slider surround, option panel, quality icons |
| `voices/rcmn*.wav`, `voices/mn_red*.wav`, `voices/mn_in01.wav`, `mn_in08.wav`, `mn_in09.wav` | button voices (44 of them are played) |
| `audio/menumuz.wav` | menu music |
| `media/davilex`, `media/intronl`, `media/outronl`, each `.webm` (VP9, Opus) and `.mp4` (H.264, AAC) | the Davilex leader (7 s), the intro (74 s) and the outro, converted from `Data\Media\*.mpg` of the CD at their 320 × 240 |
| `help/manifest.json` | the 38 topics of the original Dutch help |
| `icons/kde-touchscreen.svg` | Startinfo picture for touch input. KDE Breeze icon, LGPL: copy `icons/KDE-TOUCHSCREEN.md` and `icons/licenses/` with it |
| `icons/redcat.ico` | page icon |

About 3.7 MB of pictures, 5.6 MB of sound and 8.7 MB (WebM) plus 10.6 MB (MP4) of movies.

## Flow and how it maps onto the API

| Screen | What it does with the API |
|---|---|
| Page opens | The Davilex leader, the intro, then the Hoofdmenu with its music and greeting (next section). Not with `?autostart` or `?skipintro` |
| First visit, or the chosen player is gone | The Spelerlijst opens by itself; with no player at all it goes on to the name prompt. Volgende with Avontuur or Snelspel and no player opens it again |
| **Spelerlijst** | `players.list()`; Nieuw → `players.create(name)` (at most `MAX_PLAYERS`, `NAME_MAX` characters, Latin-1, no name twice) and `game.deleteSave(n)` for the reused number; OK → `players.current = n`; Verwijderen → `players.remove(n)`, `game.deleteSave(n)` (the saved place, its recovery points). The last player cannot be removed, as in the old project. Exporteren and Importeren: "Export and import of a player" below |
| **Avontuur**, new player (`world` 1 and no adventure save state, or `adventureDone`) | Moeilijkheid → Startinfo → `players.set(n, [['General', 'DifficultyLevel', d]])`, `game.start({ player, world: p.world, difficulty: d, adventure: true })`. A finished adventure is first put back with `players.restartAdventure(n)` |
| **Avontuur**, returning player | Startinfo → `game.start({ player, world: p.world, difficulty: p.difficulty, adventure: true, resume: true })`. Startinfo says from when the save state is. `game.saveInfo()` deletes a save state that cannot be continued from (another build, a damaged record), so it is never offered; Startinfo then has the line of `game.lostSaveNote()` instead, and the game starts with that line over it. Score is `totalScore` |
| Startinfo → Meer opties → **Opnieuw beginnen** | Confirmation (text of `menu.ini` MENUSTRINGS 36), then the worlds reached are noted (`unlocked`), `players.restartAdventure(n)`, `game.deleteSave(n)`, on to Moeilijkheid |
| Startinfo → Meer opties → **<wereld> opnieuw beginnen** (only with a saved place) | Confirmation ("Weet je zeker dat je Het Kasteel opnieuw wil beginnen? Je opgeslagen plek in deze wereld en je herstelpunten gaan verloren. Je begint de wereld zoals je hem binnenkwam."), then `game.deleteSave(n)` and `game.start({ player, world: p.world, difficulty: p.difficulty, adventure: true })` without `resume`: the original's own way to go on |
| Startinfo → Meer opties → **Eerder opgeslagen avontuur laden** (setting Herstelpunten on) | The dialog "Eerder avontuur laden": `game.recoveryInfo(n)`, one button per older saved place with its real age ("7 minuten geleden", world, date). A choice → `game.loadRecovery(n, id)`, then the game starts with `resume: true` |
| **Snelspel** | Griezelplek cards, chained beyond `players.unlockedWorlds(n)` unless `settings.get('unlockAll')` or an adventure was finished once (HAUNTED, next section) → Moeilijkheid → Startinfo → `game.start({ player, world, difficulty, adventure: false })` |
| **Highscores** | `players.list()` by `totalScore`, filled up to ten rows from the stored table (below) |
| **Instellingen** | `game.settings` only (below) |
| **Help** | The viewer with the original help text, opened on the topic of the current screen |
| **Stoppen** | Ja / Nee; Ja shows "Je kunt dit venster sluiten." (a page cannot close itself), with a way back |
| Start! | The clip `RCMN32` (Avontuur) or `RCMN43` (Snelspel) is played to its end with the music still on, as in the original (`0x55CCD8`); the two volumes are written to the player file; then the music stops and `game.start()` runs |
| Game starts | `recomp-running`: the menu and its music are gone. Also when the game is started without the menu (`?autostart=1`, `source/web/main.js`) |
| Game ends | `recomp-exit`: after a Snelspel the adventure's part of the player file is put back; save states are read again; after a finished adventure the outro (next section); then the Hoofdmenu with the choice of the game that was played, music. After a crash a prompt shows the message |
| The game cannot start here: the page is not cross-origin isolated, a canvas cannot be handed to a worker, or there is no WebGL 2 on a canvas that is not on the page (`!game.supported()`, `game.unsupportedReason()`) | A notice in the header says that the game cannot start in this browser, with a link to the old version when that is kept at `classic/`; Start is disabled. The console says which of the three it is (`game.unsupportedDetail()`): the two headers the server has to send, or that the server is not the cause. A game that stops with an error offers the old version in its dialog as well |

Meer opties starts folded whenever a page comes up.

`game.onStatus` is set by the menu (it writes `#status` as the default in `main.js` does; its
second argument is `true` for 2.5 seconds or a number of milliseconds).
`game.cheats.onChange` is set by the settings pages. `game.onExit`, `onRunning` and `onStats` are
left alone: the menu listens to the window events.

## Movies: leader, intro, outro

### What the original does

From `RcHcMenu.dat` (addresses are in that file), its form resources and the launcher. All
CONFIRMED by reading the code unless marked.

| Question | Finding | Evidence |
|---|---|---|
| When do the leader and the intro play? | At every start of the program, before anything of the menu shows; not after a game. The launcher starts the menu with `/FirstTime` once per run and with `/Default` after every game. The menu's settings loader makes "previous state" 0 when it sees `/FIRSTTIME` (or `SIMFIRSTTIME` in `menu.ini`), and `StartUp` then calls `ShowLeader`, `ShowIntro`, starts the music and shows the Hoofdmenu | `RedCat.exe` WinMain `0x401250` (`startup-and-loop.md`, 2.1); loader `0x550F98`; `StartUp` `0x565214` (from `TfrmMain.FormActivate` `0x5648E8`); `ShowLeader` `0x5649DC`, `ShowIntro` `0x564B8C` |
| Which files? | `menu.ini [GENERAL] LEADERAVI`, `INTROAVI`, `OUTROAVI` = `DATA\MEDIA\Davilex.mpg`, `IntroNL.mpg`, `OutroNL.mpg`. Looked for under the program's folder, then on the drives C to Z (the CD). Not found: a line in the log, no movie, and the flow goes on | `0x550F98`; `0x5650C4` ("now searching drives c to z") |
| How is a movie shown? | `ShowIntroMovie` creates the form `TfrmIntro`: no border, 800 × 600, centred on the screen. `FormShow` opens the file with MCI, makes the form its window and puts the picture over the whole client rectangle, then plays. The menu's own main form behind it is black, and so is the launcher's window | `0x56405C`; `0x564178` with `MCI_WINDOW` `0x5638EC` and `MCI_PUT` destination `0x563A00`; form resources `TFRMINTRO`, `TFRMMAIN` (`Color = clBlack`) |
| Is that the whole screen? | INFERRED: yes. The menu wants the screen in 800 × 600 (`MENUSTRINGS` 1 is the message for when that fails); the mode switch itself was not traced |  |
| Mouse pointer | Parked: `SetCursorPos(right, right)` of the form's client rectangle, i.e. the bottom right corner of the screen, and put back afterwards | `0x5640F1`–`0x564118` |
| Skipping | Any key and any mouse button: both handlers stop the movie and close the form without looking at which key or button. One press ends one movie, so the leader and the intro take one each. At its end a movie closes by itself | `FormKeyDown` `0x564308`, `FormMouseDown` `0x564390`, `MenuIntroNotify` `0x564258` |
| Menu music during a movie | None. `StartMusic` is called after the movies, and the Hoofdmenu (with its voice `RCMN9`) is shown after that | order in `0x565214`; `StartMusic` `0x54F644`; `TfrmMainScreen.FormShow` `0x560978` |
| Volume | Not touched. Of all `mciSendCommandA` calls in the program none sets audio (the commands are open, close, play, seek, stop, set, status, window, put, where, capabilities); the menu's own sounds go through DirectSound | call sites `0x561BB8`–`0x563DA8`; imports |
| When does the outro play? | When the menu comes back from a game that it started as an adventure and the player's file says the last world is finished. `PREVSTATE` in `menu.ini` is the choice of the Hoofdmenu at the start of the game (1 Snelspel, 2 Avontuur); with 2, `StartUp` loads the player and calls the outro check. The player loader reads `[SubLevel1_5] Completed`, and reads it only when `[General] GameType` is 0 | `0x5517F4` (writes `PREVSTATE`), `0x56114C` / `0x5611A0` (set the choice); `0x565214` case 2 → `0x564EEC`; loader `0x567694` |
| What else happens then? | After the outro, watched or not: `HAUNTED = 1` in `menu.ini`, the player's `TotalScore` is inserted into the highscore table and the table saved, and the player's adventure is reset (world 1, 3 lives, score 0, not completed). With `HAUNTED` every Griezelplek card of Snelspel is free. Because of the reset the outro plays once per finished adventure | `0x564EEC`; `0x551A9C`, `0x5516DC`; `0x567B84` → `0x565570`; `0x55E1EA` |
| After a game without outro | No movie. The Hoofdmenu comes back with the choice of the game that was played | `0x565214` cases 1 and 2; `0x560978` |
| After a Snelspel on the last world | No outro, whatever the game wrote. With `PREVSTATE` 1 `StartUp` loads the player and starts the music; it does not call the outro check. The game itself writes `[SubLevel1_5] Completed=1` at the end of a Snelspel on the Tower too (run 2026-11-22), and nothing reads it | `0x565214` case 1 (`0x569170`, `0x54F644`, no `0x564EEC`) |
| Does the way the game ended matter? | No. The launcher runs the menu again with `/Default` after every game and does not look at the game's exit code, and the menu has only `PREVSTATE` and the player's file. A game that died after it wrote the key gets the outro like any other | `RedCat.exe` `0x401250`; `0x565214`, `0x567694` |
| Who writes `[SubLevel1_5] Completed`? | The game, when the Tower ends. The Tower's entity `Trigger24` (`DaviName` and `TargetSubLevel` `nextsave`) is triggered by the level's script at the moment `nextsave` of the witch's last scene; the command `nextsave` sets the world's `Completed` (`0x4FED00`), shows the results screen, and, there being no next world, quits. Run in the Node runner and in the page with the command given by the host: adventure started in the Tower, adventure brought there with the cheat page's `next` (four times) and with its level choice (`lvl04a.bsp`), all end with `GameType=0`, `CurrentSubLevel=SubLevel1_5`, `[SubLevel1_5] Completed=1`, exit code 0. The cheat page's own `next` in the Tower quits without the key (no outro in the original either). Not run: the fight with the witch up to that moment | `lvl04a` entities and script (`MotionCommand`, `"nextsave"` → `Trigger`); `ChangeToSubLevel` `0x496D60`; `tools/out/outro/*.json` |

Not established: whether the game clears `[SubLevel1_5] Completed` when a new adventure starts
(the menu's own writer `0x567344` does not write that key). At the very end of the last world the
game shows its results screen like after every world and then quits (`ChangeToSubLevel`, the
"no more sublevels" branch at `0x49803C`); it has no screen of its own for a finished adventure:
that is the menu's outro.

### What the port does

| | |
|---|---|
| Start | Every load of the page is a start of the program: leader, intro, then Hoofdmenu, music, `RCMN9`. `?autostart` (a game without the menu) and `?skipintro` (for the checks) leave them out |
| Picture | A `<video>` as large as the 4:3 area of the Hoofdmenu, the picture stretched over it, black around it, mouse pointer hidden. WebM when the browser plays VP9 and Opus (`canPlayType`), else MP4 |
| Sound | The movie's own track, times the port's master volume (`settings.get('volume') / 100`), nothing else. Menu music and voices start after the movies |
| No sound allowed yet | A browser refuses sound before the first click or key press on a page. The movie is then not started muted: the black first screen stays, with the line "Klik of druk op een toets om te beginnen", and the first click, tap or key press starts the leader with sound. That press does not end it |
| Skipping | Any key, any mouse button, a tap, any button of a controller: one press ends one movie. Keys that belong to the browser (F-keys, combinations with Ctrl, Alt, Meta) still do their own thing as well |
| Missing or unplayable file | Passed over, with a warning in the console |
| Outro | On `recomp-exit`, when the game was started by the menu as an adventure and `players.get(n)` has `gameType === 0` and `completed[4]` (`[SubLevel1_5] Completed`): the outro, then `haunted`, the score into the stored table, `players.restartAdventure(n)` and `game.deleteSave(n)`. Once, for the same reason as in the original. A crash does not change this (the original cannot tell either): the outro first, then the menu with the message. Until 2026-11-22 a crash was left out, and a game that died after its last world (out of memory on the way out) lost its outro, `HAUNTED` and highscore for good |
| Snelspel on the Tower | No outro, as in the original. Different from the original is how a player can get there: the cheat "Alle griezelplekken ontgrendelen" opens the Tower's card for somebody who never came near it (it opens cards only; the adventure stays where it is), so here the witch can be beaten without the outro ever having been seen. Left as the original has it; see the note under this table |
| Snelspel | A Snelspel must not leave `[SubLevel1_5] Completed`, progress or scores behind for the adventure. The original has that for free (its menu keeps the adventure itself and reads the file only after an adventure). Here `player-file.js` notes the sections `[Level1]`, `[SubLevel1_1..5]` and `[Player]` and the difficulty before a Snelspel and puts them back when it ends, or at the next load of the page when it was cut off |

Differences from the original: a reload of the page shows the leader and the intro again
(there is no launcher that stays alive between games); the line of text on the first screen;
the pointer is hidden, not parked; controller and touch can skip; the movies are the converted
files, not MPEG-1 through MCI; `HAUNTED` and the table live in the browser's storage, not in
`menu.ini`. As in the original, a finished adventure whose outro was not reached (the page was
closed first) gets no outro at the next start.

Report of 2026-11 ("the end movie is missing", after a new game brought to the last level "with
the cheat"): every way to finish the Tower in an adventure was run and shows the outro (started
there, continued from a save state, brought there with the original's cheat page), in Chromium
and in Playwright's Firefox. The one way that shows none is a Snelspel on the Tower, which the
port's cheat opens: the original's rule, in a place the original's player could reach only with
an adventure that was itself at the Tower. Whether the port should show the outro there (once,
only the movie, without `HAUNTED`, highscore or reset, when the card was open by the cheat alone)
is the owner's choice; it is not done. `node tools/menu-check.mjs --only tower` runs the three
ends (Snelspel, Avontuur, Avontuur with a crash after the last world).

## What the menu remembers itself

`localStorage['rcspook-recomp.menu.v1']`:

- per player number: the last Snelspel world and difficulty (preselected next time), and while
  a Snelspel is on, what to put back afterwards (above). `game.start()` writes the difficulty it
  is given into `[General] DifficultyLevel` (`source/host/ini.js`), so a Snelspel would overwrite
  the adventure's; the original keeps a separate `QuickPlayDifficultyLevel`;
- `haunted`: an adventure was finished once;
- `highscores`: the table of eleven scores, shipped values until a score is inserted.

- per player number: `unlocked`, the highest number of worlds his adventure has reached
  (`noteUnlocked`: when a game comes back, before an adventure is begun again or closed, when the
  page loads). Snelspel offers at least those. The JavaScript port kept unlocks apart from the
  saved game in the same way; the original closes the cards again with a new adventure.

`game.saveInfo()` only knows the saved place of an adventure. A Snelspel keeps its state under a
key of its own (`game.js`), which serves F5 and F9 in that Snelspel and is deleted when it ends;
the menu never continues one, and deletes what a closed tab left behind when the page loads
(`game.forgetSnelspel()`).

## Export and import of a player

Spelerlijst → **Exporteren** downloads a JSON file for the player chosen in the list;
**Importeren** reads such a file into the player chosen in the list, after a question that names
both ("Wil je het avontuur van Rick importeren voor speler Kopie?") and says where the adventure in
the file is. Buttons, question and status lines are the JavaScript port's.

| | |
|---|---|
| File | `RedCat-Spookkasteel-<name>-<UTC time>.json`: `{ format: 'redcat-spookkasteel-recomp-player', formatVersion: 1, exportedAt, player: { name }, playerIni, menu: { unlocked, flight, quickWorld, quickDifficulty } }`. A few kilobytes |
| Not in it | The saved place inside a world and the recovery points: a save state is 45 to 68 MB and only fits the build that made it. The status line says so when the player has one. After an import the adventure starts at the beginning of the world it is at |
| Taken from an imported file | `[Level1]`, `[SubLevel1_1]` to `[SubLevel1_5]`, `[Player]`, `[General] DifficultyLevel`, `[KeyBinds]` (keys the template has), `[Sound] MusicVolume` and `SoundVolume`; and the menu's record. Everything else of the destination player's own file stays, his name too |
| Checks | At most 32 MiB of JSON (the old port's limit) and 64 KiB of player file; only printable Latin-1; every taken value against what the game writes (health above 0 and at most 20 and not above the maximum, lives 0 to 999, abilities a mask of five bits, mirror parts at most 5, potions at most 100, the world `SubLevel1_1` to `_5`). A wrong value refuses the whole file ("Dit exportbestand bevat ongeldige spelgegevens (Player.Life)."); unknown sections and keys are left out. Nothing is written before Ja |
| On Ja | The adventure's sections of the destination's file as a new player has them, the checked entries on top; `game.deleteSave(n)`; the menu's record replaced |
| The JavaScript port's file | `format: 'redcat-spookkasteel-save'` is read too and converted with the rules of the take-over (`legacy-saves.md`): a game saved inside a world starts that world again. The question then says so |

Not carried over from the old port: reloading a second browser tab that has the same player open.

## Saved places: F5, F9, the settings over a game, recovery points

| | |
|---|---|
| When the port saves | Every minute of a game (every three on a phone), F5, when the adventure goes to its next world, when the page is hidden, and Spel stoppen. Never while RedCat has no health and never from a game that is ending (`intentional-differences.md`); F5 then says "Je avontuur is niet opgeslagen. Dat gebeurt zodra RedCat terug is." |
| F9 | `game.reload()`: the game that runs makes way for its saved place, with the loading screen in between (`recomp-restart`). Without one: "Er is nog geen opgeslagen plek om te laden." F9 never reaches the game (there it is a debug key) |
| Settings over a game (F10, gear) | **Opgeslagen plek laden** (the same as F9; switched off without a saved place, its tooltip says from when the place is), **Eerder avontuur laden** (in an adventure, with the setting Herstelpunten on: the same dialog as on Startinfo; a choice → `game.reload({ recovery: id })`, and the status line says "Avontuur van ongeveer 7 minuten geleden geladen."), **Spel stoppen** |
| Sound fixes | Settings **Zachter torenvuur** and **Muziek loopt door** (Meer instellingen), both on; off is the original's sound. They are flags of `source/host/fixes.js` and take effect in a running game at OK (`SET.FIX`). Cheats → Vrij vliegen says that flying costs no health and ends at a free place; when the game could not land, the status line says "Er is nu geen vrije plek om veilig te landen. Vrij vliegen blijft aan." and the box is ticked again, and when it moved RedCat "Vrij vliegen uit. Je bent terug op een veilige plek." (the JavaScript port's wording) |
| Recovery points | Setting **Herstelpunten** (Meer instellingen), on for a desktop, off for a phone or tablet. Rule, ages and storage budget: `source/web/recovery.js` and `intentional-differences.md`. Loading one makes it the saved place; the others stay, so another can still be tried. Texts of the dialog from the JavaScript port ("Zit je vast? Ga terug naar ongeveer 2, 5 of 10 minuten speeltijd geleden. Pauzes tellen niet mee. …") |

## Players of the JavaScript port

At start-up, before the Spelerlijst can open, `init()` calls `importLegacyPlayers`
(`../source/web/legacy-import.js`, rules in `legacy-saves.md`). A player taken over gets, in the
menu's own record (`rcspook-recomp.menu.v1`, `players[n]`): `unlocked`, the number of worlds he had
opened there (Snelspel offers at least those), and `legacy`, the world his saved game was in.
While that game has not been played on here, Avontuur treats the player as returning, also in
world 1, and Startinfo says "Overgenomen uit de vorige versie: je begint … opnieuw, met je punten
en levens." After a take-over the dialog `#menu-legacy` says once what happened to each player,
with a link to the old version when that answers at `classic/`.

## Instellingen

One dialog with four pages. For everything that is one of `game.settings` the first three hold
a draft: **OK** writes it, **Annuleren** or Escape drops it. The two sliders of the first page
are the player's and act at once (Sound levels, below). The Cheats page acts at once.

| Page | Controls → setting |
|---|---|
| First page (the original 765 × 574 options form) | **Beeldkwaliteit** Laag / Normaal / Hoog → `renderScale` 50 / 75 / 100 (presets, as in the old project); **Geluidseffecten** and **Muziek** → the player's two volumes (Sound levels, below); buttons to the other pages |
| **Geavanceerd** | Resolutie → `resolution` (`auto`, five 4:3 sizes, five 16:9 sizes, 16:10 and ultrawide); Renderschaal 25..200 → `renderScale`; Anti-aliasing Uit / 2x / 4x / 8x → `msaa` (a count above the device's limit, `game.maxSamples()`, reads "8x · niet ondersteund" and cannot be chosen; when such a count is stored the line under the setting says what is used: "Dit apparaat ondersteunt 8x niet. Hier wordt 4x MSAA gebruikt.", as in the old project); Gezichtsveld 45..90 → `fov` (54 is stored as 0, the original's); Breedbeeld → `widescreen`. The page says which ones only count from the next start of a game |
| **Meer instellingen** | Aanraakbediening → `touch`; Besturing → the port's help page in the Help viewer; Volledig scherm → `fullscreen` (on by default; written last, from the click, because `game.js` enters full screen on that change; the box cannot be changed in a browser without full screen for a page); Leesbare ondertiteling → `subtitleBox`; FPS weergeven → `showFps` ("NN FPS" at the right edge under the game's HUD and the gear while a game runs; with the touch controls its place follows the screen, and on a phone held upright it is in the top left corner: `public/index.html` `#stats`, `docs/intentional-differences.md`; `?stats` in the address shows the development line instead); Volume → `volume`, the port's own master volume (default 100); Muis kijken → `mouseLook`; Camera → `camera`; Kijksnelheid → `sensitivity`; Intro afspelen → `intro`; when the JavaScript port left data here and is kept at `classic/`, a line with a link to it |
| **Cheats** | Voorraad vullen → `game.cheats.supplies()`; Vrij vliegen → `.flight(on)`, and kept as the player's choice in the menu's record (`players[n].flight`), so it can also be set without a game and holds for his next games; Onsterfelijk → `.god(on)`; Cheatpagina van het origineel → `.originalMenu(on)`: all four only while `game.running`, switches show `game.cheats.state`; Alle griezelplekken ontgrendelen → `unlockAll` |

**Over a running game:** F10, or the gear at the top right edge of `#stage` (above the touch
controls), opens the same dialog and calls `game.setPaused(true)`; closing it calls
`game.setPaused(false)`. The first page then also has **Spel stoppen**: `game.save()`, a wait of at
most four seconds for the state to be stored, `game.stop()`. A cheat asked for over the paused game
takes effect when play goes on.

`game.js` listens for keys on `window` in the capture phase, sends every key to a running game and
cancels its default action. `key-guard.js` is therefore registered first (that is why
`index.html` loads `source/menu/menu.js` before `source/web/main.js`, and why `menu.js` imports
`key-guard.js` first): it takes F10, and while the dialog is open over a game it keeps all keys
away from the game. Keys that were down when the dialog opened are released in the game with
`game.input.key(vk, false)`. If the order of the two scripts is ever swapped, the dialog still
works with mouse and touch, but not with the keyboard.

### Sound levels and the two sliders

What the original does is in [`research/menu-audio.md`](research/menu-audio.md) (from
`RcHcMenu.dat`, with addresses); this is how the port follows it.

| | Original | Port |
|---|---|---|
| Curve | A slider value p (0..100) becomes the DirectSound volume `-round(10^(2 + (100 - p)/100 · (log10(4000) - 2)))`, kept within -4000..-100, i.e. the amplitude `10^(v/2000)`: 0 → 0.010 (not silence), 80 → 0.786, 100 → 0.891 (`0x4B01EC`) | The same formula (`menu-audio.js`), as the gain of the music and the `volume` of a clip |
| Music | At the player's music volume; follows the Muziek slider at once, one step, no fade | Same |
| Clips | Every clip (voices, help, slider clips) at the player's effects volume, set once when the clip starts; no ducking of the music | Same |
| Before a player is chosen | A fresh player object: 80 and 80. The music starts at 80 and gets the current player's value when the Hoofdmenu comes up | Same: 80 and 80 until a player is chosen; the player's values whenever the Hoofdmenu comes up and when the player changes |
| Sliders | Whole numbers 0..100. Dragging gives any value (needle offset · 100 div 169), a click on the track is one step of 10 towards the click, Left / Up -1, Right / Down +1, PgUp -10, PgDn +10, Home, End | Same (`gdi-slider.js`), on an `<input type="range">` so that Tab, a controller (left / right, ±1) and screen readers reach it |
| A move | Says `RcMn16` (up) or `RcMn15` (down). For Geluidseffecten the clip starts before the new value is stored, so it plays at the previous one | Same order. A clip is let finish before the next one starts (as in the old project) |
| OK / Annuleren | OK keeps both. Annuleren says `RcMn2` at the sliders' values and then puts back the two values from when the form opened | Same |
| New player | 80 and 80 (`static.ini [DEFAULTSETTINGS]`) | 80 and 80, written into the new file |
| Where they are kept | In memory; in `SaveGame<n>.RCR` when the menu ends; in `Settings\Player<n>.ini [Sound] MusicVolume` and `SoundVolume` only when a game is started (`0x566768`). The game reads those two at start (`RcHcGame.dat` `0x527C20`) | In the player file, those two keys, as whole numbers: on OK, and once more before `game.start()` |
| Over a running game | (the menu is not there) | The two sliders of the first page are not shown (no room next to the saved places). Meer instellingen has **Muziek** and **Geluidseffecten** there: on OK the values go to the game's own two volume setters and to the player's file (`source/host/volume.js`); without the menu's clips. A continued save state plays at the volumes the menu has now |
| Music timeline | Starts after the movies, is never stopped or paused in the menu, ends when the menu ends (for Start: after its clip has finished), starts from its beginning when the menu comes back from a game | Same. On Stoppen → Ja it plays on under the two clips and stops when the closing state shows |

Still different from the original:

- **The port's master volume** (`settings.volume`, Meer instellingen, default 100) is an addition:
  one more factor on the music, the clips, the movies and the game's sound. At 100 the levels
  are the original's.
- The values go into the player file on OK, not only at a game start, because the port has no
  `SaveGame<n>.RCR` to keep them in between.
- With nobody chosen, what the sliders are set to lasts until a player is chosen; it is not
  stored.
- The needle is drawn as a bar (its artwork was not recovered) in a box of the original needle's
  width, so the travel is the original's.
- Opening the Spelerlijst does not touch the music. In the original it sets the music to the
  stored volume of each listed player in turn (inferred in the research, row `0x56609A`).
- A hidden browser tab pauses the menu's sound and continues it where it was.
- Whether the original's sliders take keyboard focus is unresolved there; here they do.

## Keyboard, controller, size

- Tab and Enter work as on any page. Arrow keys walk the buttons, Escape goes one page back or
  closes the top dialog.
- Controller (standard mapping), only while no game runs: d-pad or left stick moves, A confirms,
  B goes back, left / right changes a list or slider, the right stick scrolls. The first press
  only hands the menu to the controller, as in the old project. During a game the controller
  belongs to `source/web/gamepad.js`, also while the settings are open over it.
- The Hoofdmenu keeps the 800 × 600 composition and scales with the window. The fixed-size forms
  (Instellingen, Spelerlijst, prompts) are scaled by the same factor with CSS `zoom`
  (`--form-zoom`, set in `menu.js`). The port's own settings pages are never made smaller than
  their natural size; on a small screen they fill it and scroll. A portrait window (narrower than
  4:5) reflows instead, with the rules of the old project.

## Toetsen instellen

Instellingen → Meer instellingen → **Toetsen** → Instellen opens a page of the settings dialog with
the old port's key form (`source/menu/key-menu.js`): thirteen actions (Vooruit, Achteruit, Links
draaien, Rechts draaien, Links opzij, Rechts opzij, Schieten, Springen, Rustig lopen, Camera
wisselen, Camera dichtbij, Camera verder weg, Camera hoog), each with a button that shows its keys.
A click on a button waits for a key ("Druk op een toets…"; Esc leaves that); the key replaces the
action's keyboard keys. Refused, with the original form's words where it had them: a key another
action has ("De toets W wordt al gebruikt! Kies een andere toets."), a key one of the game's
other actions has (Tab, Delete, Home, End, 4 to 7, …), P and Esc, a function key, and a key the
game has no name for ("Je hebt een ongeldige toets gekozen."). **Standaard** puts the starting
keys in the draft, **OK** writes, **Annuleren** drops the draft; both lead back to Meer
instellingen. B on a controller and Esc go back the same way.

What it writes is the game's own: the `[KeyBinds]` lines of the chosen player's file
(`source/web/keybinds.js`), so the keys are per player and the game's own page Esc →
Spelbesturing shows and changes the same ones (there Rustig lopen is called Ontwijken, the
original's name for its action `Walk`). Camera wisselen alone is kept in the port's settings, per
player as well (setting `keys`, `cameraBy[number]`; until 2026-11-14 it was one key for all players,
shown as the chosen player's). The rows are changed in place, so a list that was scrolled stays
where it is and the row being set is brought into view.
Without a chosen player, and over a running game, the button is off and the row says why. Why
this and not a key table of the page: `docs/research/input.md` 3.2.

Meer instellingen also has a line that names the connected controller ("Controller: …", or what to
do when there is none or the page is not served over HTTPS), and the controller's buttons during
play. Over a running game a dialog of the menu is worked with the controller too; when the
controller that was being used disappears the game waits behind the prompt "Controller
losgekoppeld" until a button, a key or a tap says go on.

## Differences from the menu of the old port

- Players are the game's own `Settings\Player<N>.ini` files, not a list of the port. An export
  file holds that file and not the saved place inside a world; there are three recovery points,
  not eleven states to pick three from (above).
- The leader and the intro play at every start as in the original, unless "Intro afspelen" (Meer
  instellingen) is off; Startinfo → Meer opties has "Bekijk de originele intro", which plays the
  intro again (the menu's music stops for it and starts anew afterwards; nothing can be started
  meanwhile; any key, click or tap stops it). Meer opties is therefore there for a new player
  too; its other buttons only for an adventure that is continued. The outro follows the
  original's rule. A movie is never played muted.
- The **Besturing** column of the options form (keyboard / gamepad / joystick) is left out: here
  every device works at once, and the original's `ControlType` would only switch the game to its
  own joystick path, which is digital (`docs/research/input.md`). Its **Instellen** is the row
  Toetsen of Meer instellingen (below, "Toetsen instellen").
- Geluidseffecten and Muziek are the player's and are kept in his file; in the old project they
  were settings of the port. The game is started after the Start clip has finished, and the music
  is not stopped for the Stoppen clips, as in the original.
- No difficulty row in Meer instellingen. Camera, field of view, look speed and "Intro afspelen"
  are there. `deadzone` exists in `game.settings` (0.18, the old port's) but has no control.
- The port's pages are pages of the dialog with their own Vorige / OK / Annuleren bar, not
  sections that unfold below the form.
- Instellingen, Spelerlijst and the prompts scale with a landscape window.
- Startinfo has one Start! button for both flows, a line about the save state, and no input
  picture for a joystick.
- Highscores: the running adventures come from the player files each time; finished ones are in
  a stored table with the original's insertion rule.
- A Snelspel keeps its save state apart from the adventure's and loses it when it ends.
- No pause menu of the port: F9 and the buttons in the settings over a game load a saved place.
- After a game the Hoofdmenu comes back with the choice that was played, as in the original.
- Added: Spel stoppen in the in-game settings; Onsterfelijk and the original's cheat page.

## Differences from the original menu

- Confirmed in the old project's research and kept: screen flow, texts (`menu.ini`
  MENUSTRINGS), artwork, voices per button, eight players, twelve characters.
- Highscores: the original shows its stored table with the score of the current player's
  running adventure added, and "Klaar!" for all rows of the table. Here every player of the
  Spelerlijst is listed with his running `TotalScore`, and the rows that are left are the top of
  the stored table. So a player with 0 points is listed, which the original would not do.
- Griezelplek cards follow `players.unlockedWorlds()`: the world the adventure is at, and stay
  open once reached (`unlocked` in the menu's record) when a new adventure is begun; the original
  closes them again. The original opens the fifth card only with `HAUNTED`, i.e. after a
  finished adventure (`0x55E1EA`).
- Whether an adventure is finished is read from `[SubLevel1_5] Completed`, the key the original
  menu reads (`0x567694`). Until 2026-11-14 this menu read `[Level1] Completed`, which the game
  sets at every change of world (`research/startup-and-loop.md` 8): a player who came back in his
  second world was offered a new adventure, and starting it put him back in world 1.
- The original also writes Besturing and Beeldkwaliteit into the player file (`ControlType`,
  `[Display]`). This menu does not: which values the original menu writes for Laag / Normaal /
  Hoog was not recovered. Not guessed. The two volumes it does write (Sound levels, above).
  Since 2026-11-14 every game is started with `[Display] Mode=2` (`applyLaunch`), because Mode 0
  or 1 puts the game in its "Low End PC" state (`research/effects-low-end.md`).
- Score on Startinfo: the original menu reads `TotalScore` back from the player file
  (`startup-and-loop.md`, 6.3); that it is the number shown on Startinfo is an inference.
- Whether the game moves `[Level1] CurrentSubLevel` or sets `Completed` at the end of a Snelspel
  world was not observed in a real run; the menu puts the adventure's sections back after every
  Snelspel either way (Movies, above).
- The Help viewer has a group of the port's own after the original's 38 topics, "Deze versie":
  Op avontuur (keys and mouse, the skip, the results screen), Controller, Aanraakscherm, Opslaan
  en verder spelen (`port-help.js`). Meer instellingen → Besturing opens it; the viewer's search
  covers it. The original's topics and the page each screen's Help opens are unchanged. Keep the
  text in step with `source/web/gamepad.js`, `touch.js`, `skip.js` and `game.js`.
- Help is a viewer in the page instead of WinHelp; Stoppen cannot close the window; music and
  voices wait for the first click or key press.

## Missing

- Voices for the port's own pages (none exist).

## What the page API does not offer

Worked around in `source/menu/`, nothing in `source/web/` was changed:

1. (Solved 2026-11-14: a Snelspel has a save slot of its own.)
2. `game.start()` overwrites `DifficultyLevel` for a Snelspel, and the game writes into the
   adventure's sections of the player file. The menu puts both back (`player-file.js`); for that
   it reads the stored file through `gameFiles.readText()` of `source/web/files.js` and builds the
   file's path itself, which is not part of the documented API.
3. The key listeners of `game.js` cancel the default action of every key while a game runs, also
   while it is paused for a dialog (`key-guard.js`).
4. `players.get()` gives no access to other keys of the player file.

## Checks

```bash
node tools/serve.mjs
node tools/menu-check.mjs            # --only desktop,phone,portrait,isolation   --game-wait 15000
```

`tools/menu-check.mjs` walks the menu in headless Chromium with software WebGL and saves
screenshots to `tools/out/menu/`: desktop 1280 × 960 (leader and intro and how they end, the
whole flow, three game starts, settings over the game, the supplies cheat, Spel stoppen,
continuing, Opnieuw beginnen, a simulated crash, a finished adventure with its outro and what
follows from it, a second player, Stoppen; the two sliders with keys, clicks and a drag, the
curve read from the live music gain at 0, 80 and 100, the level of the clips, Annuleren and OK,
the two keys in the player file before `game.start()`, the music under the Start and Stoppen
clips and from its beginning after a game; Meer opties with the world again, asked and answered
with Nee and Ja; the Griezelplekken that stay open after Opnieuw beginnen; Exporteren with the
downloaded file read back, Importeren with a file that is no export, one with `Life=-1`, and the
good one into a second player), a touch phone 844 × 390 (taps end the movies,
Snelspel, gear button, the adventure untouched by a Snelspel), a portrait phone 390 × 844
(layout only), once without the isolation headers and without the movie files, and once in a
second browser that refuses sound before a click (the waiting first screen, the first click, the
leader ending by itself, a controller button). It prints about 115 checks and fails on a
JavaScript error or a failed request. The screenshots are meant to be looked at.

The finished adventure is faked: the check sets `[SubLevel1_5] Completed` in the player file as
the game ends. No world was played to its end, so that the game really leaves that key behind
is taken from `docs/research/startup-and-loop.md` (5.2, 6.2), not seen.

Not verified by it: how the music, voices and movies sound (only that they are requested, that
the music source runs, which gain the music has and which volume a clip is given, and that a
movie plays unmuted at the master volume); that the game then plays at the two volumes it reads
from the player file; MP4 playback
(headless Chromium has no H.264), a real phone or tablet, Firefox and Safari (the forms rely on CSS `zoom`,
which Firefox has since version 126), a real controller (the check feeds a simulated one), full
screen, pointer lock, and the fly, immortal and cheat-page switches (only the supplies cheat is
checked against the game's own counters).
