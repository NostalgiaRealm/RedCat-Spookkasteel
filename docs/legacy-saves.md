# Taking over what the JavaScript port left in a visitor's browser

The JavaScript port of this game (`../RCSPOOK_NEW`, versions 0.9.1 to 1.0.8) was on a public site.
Its settings, players and saved games are in the browsers of the people who played there. When
this port is opened at the same address it takes them over. This page says what happens to each
piece of data, why, how to host the two versions so that nothing is lost, and what was checked.

What the old port stored, in every released version, is specified in
[`research/legacy-storage.md`](research/legacy-storage.md). The code is `source/web/legacy.js`
(the rules, also run under Node), `source/web/legacy-import.js` (the browser side) and
`source/web/persist.js` (this port's own small values).

## The short version

- **Nothing of the old version is changed or removed.** Its keys (`redcat.…` in localStorage) and
  its databases (`redcat-recovery-saves…` in IndexedDB) are only read. This port's own data is under
  other names (`rcspook-recomp…`).
- **Settings, players, progress and scores are taken over**, once, at the first visit.
- **A game saved inside a world continues at the start of that world**, with the player's score,
  lives, health, mirror parts and abilities. The exact place inside the world cannot be carried
  into this port (see "Why not the exact place").
- **Field of view, first-person camera, look speed and free flight** exist here too and are taken over.
- **The exact place is not lost either, provided the old version stays reachable**: keep it at
  `<address>/classic/`. It then finds its own save as before, and this port points to it.

## What becomes what

| In the old version | Here | Notes |
|---|---|---|
| Player list `redcat.players.v1` (up to 8, names up to 12 characters) | One `Settings\Player<N>.ini` per player, in the same order; the player who was chosen is chosen | Same limits in both. Before v0.9.8 there was one unnamed player: he becomes "Speler 1" |
| Saved game `redcat.save.v1` (per player) | The player file: the world the adventure is at, and `[Player]` Health, MaxHealth, Life, MirrorPart, Skill, TotalScore | Rules below. When the save is missing or unreadable, the newest checkpoint of that player's recovery history (IndexedDB) is used |
| Progress `redcat.progress.v1`: `highestUnlocked` | Worlds open in Snelspel for that player (the menu's own record) | Never fewer than the old version had opened |
| Progress: `earnedSkills` | Added to the player's abilities | |
| Player option `difficulty`, or the saved game's own | `[General] DifficultyLevel` (Easy 0, Normal 1, Hard 2) | |
| Highscores `redcat.highscores.v1` | A player's best score of an earlier adventure goes into this port's table when it is higher than what he has now | The ten seeded names are the same in both |
| An adventure that was finished | `[Level1] Completed`, every world open in Snelspel for everybody (the original's HAUNTED) | |
| Settings `redcat.settings.v1`: resolution, render scale, MSAA, FPS display, full screen, touch controls | The same settings here | `native` becomes "automatic"; `full` (phones only, there and here) stays. The port's mark that a phone's 4x MSAA was switched off once (`phoneMsaaChecked`) comes along, so a number of samples chosen there is kept |
| Setting `volume` (0..1, usually 0.6) | Master volume here: `volume / 0.6 × 100`, at most 100 | The old 0.6 is as loud as this port at 100 (`research/sound.md`) |
| Settings `musicVolume`, `effectsVolume` (0..1, usually 1) | The player's Muziek and Geluidseffecten sliders, only when they were lowered: `80 × value^0.602` | Keeps the loudness relative to the usual setting; the game's loudness goes with the slider to the power 1.66 |
| Setting `autoIntro` | Setting "Intro afspelen" (Meer instellingen) | |
| Key bindings `controlBindings` | The keys in every player's own file (`[KeyBinds]`), which the form Toetsen instellen shows: an action nobody changed gets this port's starting keys, a changed one keeps its keys. The camera key goes to the setting `keys`. The old bindings are kept in that setting (`legacy`), so a player made later starts with them too | A key the game cannot bind (U, the numpad) is left out and the action then gets its default. "Gebruiken / overslaan" has no counterpart. `source/web/keybinds.js` `bindingsFromLegacy` |
| Setting `fov` (45..90 degrees from top to bottom) | Setting Gezichtsveld (Geavanceerd) | The port's usual 54 is the original's and stays "original" here; any other value is kept |
| Setting `camera` (`third`, `first`) and its key (V unless changed) | Setting Camera (Meer instellingen) and the same key | First person is an addition of both ports; the original has none (`research/camera-and-look.md`) |
| Setting `sensitivity` (0.2..2) | Setting Kijksnelheid: mouse, right stick and touch look around 0.002 radians per pixel times this, sideways and up and down, as in the port | The look itself works as there, except that shots stay level |
| Free flight: the saved game's `noClip`, else the player option | Kept per player (Cheats → Vrij vliegen); on at the start of each of his games | The port let a loaded game's own switch overrule the option; so does the take-over |
| Setting `controlDevice` | Not taken over | Keyboard, controller and touch all work at the same time here |
| Recovery history (up to 11 checkpoints per player) | Only read, as a fallback for a missing save | Stays where it is for the old version |
| Hint keys `redcat.desktop-intro-hint.v1`, `redcat.touch-intro-hint.v1` | Read: who saw a hint there is not shown the same one here (`source/web/hints.js`) | |
| Adventure revision | Not needed | |

### A saved game

The old version kept one saved game per player: a complete picture of the world at that moment.
This port keeps a player as the original game does: the world the adventure is at and what the
player has when he enters it. So:

| Saved | Becomes |
|---|---|
| Inside world N | The adventure is at world N and starts it again |
| At the end of world N, results screen not left yet | The adventure is at world N+1 |
| At the end of the last world | The adventure is finished |

What the player has at the start of that world:

| | Value | Why |
|---|---|---|
| Mirror parts | As when he entered the world (`entryState`, v1.0.5 and later; before that: what he has, less the parts picked up in this world) | The part lies in the world again; counting it twice would break what the game expects |
| Health capacity | As when he entered the world | The heart containers lie there again |
| Score | The higher of entry and moment of the save: what he had when he saved | Points are not lost; some can be earned a second time |
| Lives | The higher of the two | Lives lost in this world come back, an extra life gained is kept |
| Health | The higher of the two, at least 1 | |
| Abilities | What the game had, what he had at entry and what the adventure had earned, together | |
| Potions | None | The game itself starts every world without potions |

A heart container was worth one health in 0.9.1 and two afterwards; an old save is converted the
way the old version itself does it. `lives` meant one life less before v1.0.5; like the old
version, this port takes the number as it is.

### Why not the exact place

A save of the old version holds the state of every object as that port modelled it (which items
are gone, which doors are open, where enemies are, the state of its script interpreter). This
port runs the original game code, which has its own memory layout for all of that and no function
to load such a state; the original never saved inside a world. Putting the player at the saved
place in a freshly started world would leave doors closed that he had opened from the other side
and scripts waiting for events that already happened: a game that may not be finishable. Starting
the world again is what the original game does when a player comes back, and it is always
finishable. The saved game itself stays untouched, so it can still be continued in the old
version.

## Safety

- **Read only.** `legacy-import.js` calls `localStorage.getItem` on old keys and opens an old
  recovery database only when it exists, without a version number, in a read-only transaction.
  A database that is not there is not created (the old code expects its own layout in it).
- **Once.** What was taken over is noted in `rcspook-recomp.legacy.v1`, per old player. A second
  visit, a second tab, or playing on in the old version later does not import again and never
  overwrites what was played here.
- **Never-played visitors.** The old version made a player "Speler 1" for everybody who opened the
  page. A visitor with nothing but that gets this port's ordinary first visit.
- **No room in the player list.** With eight players here already, the others wait; the notice
  says so, and they are taken over at a later visit when there is room.
- **Storage space.** A site has about 5 MB of localStorage and an old saved game is 0.3 to 1 MB, so
  it may be nearly full. This port needs little of it (a few kB per player), and every value it
  keeps there is also written to IndexedDB (`persist.js`): when a write to localStorage fails,
  nothing of this port is lost and nothing of the old version is pushed out. Save states are in
  IndexedDB only. At the first game the browser is asked to keep the site's storage
  (`navigator.storage.persist()`); a browser may refuse.
- **Failure.** An error while taking over one player skips that player and is tried again at the
  next visit. The page works without the old data.

## Hosting

The steps, the server configuration and the package are in [`hosting.md`](hosting.md). What
matters for the take-over:

1. **Same origin.** Browser storage belongs to scheme + host name (+ port). This port only sees
   the old data when it is served from exactly the origin the old version was on,
   `https://games.nostalgiarealm.com`: not another subdomain, not `http` instead of `https`.
   The path does not matter for storage. The old version's path was `/redcatspookkasteel/`.
2. **Keep the old version at `classic/`** below the new one, `/redcatspookkasteel/classic/`
   (its files use relative addresses; it ran from `classic/` in the check). It is the only way to
   continue a saved game at its exact place. This port looks for `classic/index.html` and shows
   the link (in the notice after the take-over and under Instellingen → Meer instellingen) only
   when it is there. The switch in `hosting.md` leaves the live folder where it is and serves it
   at that address. A browser this port cannot start in, and a game that stops with an error, are
   offered the old version too.
3. **Headers.** This port needs a cross-origin isolated page. The old version gets a location of
   its own and is answered as it is today; it also works with the isolation headers (checked in
   headless Chromium).
4. **`index.html` is never kept without asking.** The old site sent `Cache-Control: no-cache` with
   everything (seen on 13 November 2026), so every browser asks for the page again at its next
   visit and gets this port.

The desktop (Electron) and Android builds of the old version keep their data in their own
profiles; a website cannot see it. Their players can move a saved game with the old version's
export file (Spelerlijst → Exporteren there). This port reads that file itself: Spelerlijst →
Importeren, for a player chosen in the list (`source/menu/save-export.js`). It is converted with
the same rules as a take-over (`convertPlayer`), so a game saved inside a world starts that world
again, with the player's points, lives and abilities; Startinfo says so. The file is checked
first (format `redcat-spookkasteel-save`, version 1, the old version's own test of a saved game,
at most 32 MiB) and nothing of it is written as it is. `node tools/legacy-check.mjs --only export`
makes such files with the old version's own export code from the saved games of the storage
dumps and compares the result with the take-over of the same save.

## Checked

`node tools/legacy-check.mjs` (server running; 100 checks in headless Chromium and the Node runner):
It was also run against the packaged site served below `/redcatspookkasteel/` with the old port at
`classic/` (`hosting.md`, "Checked").

- Six storage dumps, one per generation of the old storage (0.9.1 … v1.0.8,
  `tests/fixtures/legacy/`, built from the old code, not captured from a browser): players, world,
  the `[Player]` values, difficulty, open worlds, chosen player and settings are what the rules
  say; the notice names every player; the old localStorage and IndexedDB are byte for byte what
  they were, also after a second visit; a second visit takes nothing over.
- An unreadable save with a recovery history; localStorage filled to the last byte; seven players
  here and two there; a visitor who never played; a new visitor (no old database appears).
- **The old version itself**, served under `/classic/` on the same origin: driven through its own
  code into its second world and saved; this port then shows the player at world 2 with the saved
  score and lives and offers the old version; back in the old version, it loads its own save at
  the saved place.
- **In the game**: the Node runner starts world 2 with a taken-over player file and the game has
  that health, those lives, that total score, mirror part and ability.

Not checked: a browser profile of a real visitor (none was opened), versions of the old port
actually running in a browser other than the current one (older generations are constructed from
their code), Firefox and Safari, and private-browsing modes that have no IndexedDB.
