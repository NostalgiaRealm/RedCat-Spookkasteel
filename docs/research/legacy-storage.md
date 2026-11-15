# JavaScript port — everything it has stored in a visitor's browser

Reference for importing the data of the earlier JavaScript web port of *RedCat Spookkasteel*
(repository `RCSPOOK_NEW`, tags `v0.9.3` … `v1.0.8`) into a successor program served from the
same URL, without anyone losing settings, players or saved games.

Evidence: the port's git history, read with `git show <rev>:<path>` and `git archive` into
scratch (`tools/out/legacy-research/`). All 15 tags and the untagged first commit `cc9e61106`
("Import RedCat Spookkasteel 0.9.1") were read. The port's repository was not modified and no
other revision was checked out in it. No browser profile was opened. The port's own modules
were run in Node to produce and to check the example dumps (section 13).

Labels:

- **C** / CONFIRMED — read directly from the code or data at the cited place.
- **I** / INFERRED — follows from confirmed facts or from standard browser behaviour; not
  demonstrated in the port's code.
- **U** / UNRESOLVED — could not be established from the repository.

Everything in sections 1–10 is CONFIRMED unless it is marked **I** or **U**. Section 11 is
INFERRED as a whole, section 12 lists what is UNRESOLVED.

References: `main.js:126` means `source/main.js` line 126 **at tag v1.0.8**. `source/`,
`index.html`, `src/` and `data/` are identical at `v1.0.8` and at `HEAD` (`728a29bef`).
Other revisions are written `src/main.js:51 @v0.9.3`. Up to v1.0.3 the source directory is
`src/`, from v1.0.4 it is `source/` and `src/` holds the generated bundle.

---

## 0. Short answers

1. The port stored data in **localStorage** and in **IndexedDB** only. No sessionStorage, no
   Cache Storage, no cookie, no service worker, in any revision (2.11).
2. localStorage keys: `redcat.settings.v1`, `redcat.players.v1`, `redcat.highscores.v1`, and
   per player `redcat.save.v1`, `redcat.progress.v1`, `redcat.player-options.v1`,
   `redcat.adventure-revision.v1`, `redcat.touch-intro-hint.v1`, `redcat.desktop-intro-hint.v1`.
   The first player (id `legacy`) uses these six names as they are; every other player uses
   `redcat.player.<id>.` + the full name, for example
   `redcat.player.p_6f1d….redcat.save.v1`.
3. IndexedDB: database `redcat-recovery-saves` (player `legacy`) and
   `redcat-recovery-saves-<id>` (other players), version 1, one object store `history`
   without key path or index, one record under the key `'rolling'`.
4. There is **one saved game per player**. Manual save, autosave, checkpoint save and quick
   play all write the same `redcat.save.v1`. A Snelspel replaces the adventure save.
5. No schema version was ever raised: `redcat.save.v1` has `version: 1` and `game.version: 1`
   in every revision. Changes are added optional fields. Six structural generations of the
   storage as a whole exist (section 8).
6. Nothing is deleted or converted destructively when a newer revision starts. Newer
   revisions read older data in place.

---

## 1. Inventory

| Storage object | Scope | Written by | Read by | Size |
| --- | --- | --- | --- | --- |
| LS `redcat.settings.v1` | browser origin, all players | 0.9.1 … v1.0.8 | same | 0.15–0.7 kB |
| LS `redcat.save.v1` | player `legacy` (before v0.9.8: the only player) | 0.9.1 … v1.0.8 | same | 0.3–1 MB |
| LS `redcat.progress.v1` | player `legacy` | 0.9.1 … v1.0.8 | same | < 0.1 kB |
| LS `redcat.touch-intro-hint.v1` | player `legacy` (v0.9.7: global) | v0.9.7 … v1.0.8 | same | 4 B (`true`) |
| LS `redcat.desktop-intro-hint.v1` | player `legacy` (v0.9.7: global) | v0.9.7 … v1.0.8 | same | 4 B (`true`) |
| LS `redcat.players.v1` | origin | v0.9.8 … v1.0.8 | same | 0.1–0.6 kB |
| LS `redcat.player-options.v1` | player `legacy` | v0.9.8 … v1.0.8 | same | 40 B |
| LS `redcat.player.<id>.redcat.save.v1` | player `<id>` | v0.9.8 … v1.0.8 | same | 0.3–1 MB |
| LS `redcat.player.<id>.redcat.progress.v1` | player `<id>` | v0.9.8 … v1.0.8 | same | < 0.1 kB |
| LS `redcat.player.<id>.redcat.player-options.v1` | player `<id>` | v0.9.8 … v1.0.8 | same | 40 B |
| LS `redcat.player.<id>.redcat.touch-intro-hint.v1` | player `<id>` | v0.9.8 … v1.0.8 | same | 4 B |
| LS `redcat.player.<id>.redcat.desktop-intro-hint.v1` | player `<id>` | v0.9.8 … v1.0.8 | same | 4 B |
| LS `redcat.highscores.v1` | origin, all players | v1.0.1 … v1.0.8 | same | 0.65 kB |
| LS `redcat.adventure-revision.v1` | player `legacy` | v1.0.2 … v1.0.8, only by an import | same | 40 B |
| LS `redcat.player.<id>.redcat.adventure-revision.v1` | player `<id>` | v1.0.2 … v1.0.8, only by an import | same | 40 B |
| IDB `redcat-recovery-saves` / `history` / `'rolling'` | player `legacy` (before v0.9.8: the only player) | v0.9.3 … v1.0.8 | same | up to 11 saves |
| IDB `redcat-recovery-saves-<id>` / `history` / `'rolling'` | player `<id>` | v0.9.8 … v1.0.8 | same | up to 11 saves |

Key constants: `main.js:48-51`, `touch-intro-hint.js:1,3`, `player-profiles.js:3,7-12,14`,
`menu-highscores.js:3`, `recovery-saves.js:13`, `player-profiles.js:111-114`.
First appearance of each literal was checked with a search over every revision.

All localStorage values are `JSON.stringify(value)` of the shapes in section 2
(`main.js:130`, `player-profiles.js:85-86`). `<id>` is `p_` followed by a UUID, see 3.

---

## 2. The storage objects

### 2.1 `redcat.settings.v1`

One JSON object shared by all players: display, sound, camera and input preferences. The
fields are in section 4.

- Read once at page load: `main.js:56-76`. `settings = {...DEFAULTS, ...stored}`, so
  **unknown fields survive** and are written back unchanged.
- Written as the whole in-memory object by `store(SETTINGS_KEY, settings)`: when a level
  starts (`main.js:489`), camera toggle (`:349`), Instellingen > OK (`:617`), the no-clip
  cheat (`:553`), the menu's Moeilijkheid page (`:728`), key bindings (`:712`), automatic
  quality reduction (`:867-871`). It is **not** written at page load, so a visitor who never
  started a level and never changed a setting has no such key.
- From v0.9.8 every settings write also writes the active player's
  `redcat.player-options.v1` (`main.js:129`).
- `difficulty` and `noClip` are still stored in this object in every revision, but from
  v0.9.8 they are only a copy of the last active player's values. The per-player key is
  authoritative (2.4).
- Migration: none needed; missing or invalid fields fall back to defaults at load (section 4).

### 2.2 `redcat.players.v1`

```json
{"version":1,"activeId":"legacy","players":[{"id":"legacy","name":"Speler 1"},{"id":"p_6f1d2c3a-9b4e-4c7d-8a21-0e5f3b7c9d10","name":"Mila"}]}
```

- `version`: always 1. `activeId`: id of the current player. `players`: 1 to 8 entries in
  creation order, each `{id, name}` and nothing else (`player-profiles.js:67-79`).
- Created on the first page load of v0.9.8 or newer when the key is absent
  (`player-profiles.js:53-55`).
- A value that does not validate makes the port refuse all per-player writes and show
  "De opgeslagen spelerlijst is beschadigd of niet ondersteund" (`player-profiles.js:57-58`,
  `main.js:53,127,452`). It is left as it is.
- Model and rules: section 3.

### 2.3 Per-player keys

`PlayerProfiles.key(base, id)` (`player-profiles.js:102-109`):

```js
if (base === SHARED_SETTINGS_KEY || id === LEGACY_PROFILE_ID) return base;
return namespace(id) + base;            // namespace = id => `redcat.player.${id}.`
```

`main.js:51,54` applies it to exactly six base names:
`redcat.save.v1`, `redcat.progress.v1`, `redcat.player-options.v1`,
`redcat.adventure-revision.v1`, `redcat.touch-intro-hint.v1`, `redcat.desktop-intro-hint.v1`
(v0.9.8 – v1.0.1: five, without the revision; `src/main.js:37 @v0.9.8`).
`redcat.settings.v1`, `redcat.players.v1` and `redcat.highscores.v1` are never namespaced.

Recovery database name (`player-profiles.js:111-114`):
`legacy` → `redcat-recovery-saves`, otherwise `redcat-recovery-saves-<id>`.

### 2.4 `redcat.player-options.v1`

```json
{"difficulty":"Normal","noClip":false}
```

- `difficulty`: `"Easy"`, `"Normal"` or `"Hard"` (`difficulty.js:3-7`), the difficulty the
  player's **next new game** starts with. A running or saved game keeps its own
  (`save.game.difficulty`).
- `noClip`: boolean, the "vrij vliegen" cheat preference.
- Written at every page load for the active player (`main.js:891`), with every settings write
  (`:129`), and when the player is switched away from (`:141`). Replaced by an import (2.9).
- Read at page load and on player switch (`main.js:60-61,153-154`). Absent: `"Normal"`, `false`.
- Migration from before v0.9.8 (`main.js:60`):
  ```js
  const playerOptions=readStored(PLAYER_OPTIONS_KEY)||(profiles?.activeId==='legacy'?{difficulty:stored.difficulty,noClip:stored.noClip}:{});
  ```
  Only the adopted first player inherits `difficulty` and `noClip` from `redcat.settings.v1`.

### 2.5 `redcat.progress.v1`

```json
{"version":1,"highestUnlocked":1,"earnedSkills":1,"playedLevels":["lvl00a","lvl01a"]}
```

| Field | Type | Meaning | Since | When absent |
| --- | --- | --- | --- | --- |
| `version` | 1 | any other value: the whole object is ignored | 0.9.1 | treated as no progress |
| `highestUnlocked` | integer 0–4 | index of the highest chapter that may be started | 0.9.1 | 0 |
| `earnedSkills` | integer 0–31, bit mask | abilities earned in the adventure, see 6.3 for the bits. The property is left out when 0 | v0.9.3 | 0 |
| `playedLevels` | array of level ids, in chapter order | chapters started at least once since the last new adventure. Left out when empty | v0.9.7 | none |

Code: `campaign-progress.js:4-12,27-41`. Level ids: `lvl00a` Het Bos, `lvl01a` Het Kasteel,
`lvl02a` Het Kerkhof, `lvl03a` De Grotten, `lvl04a` De Toren (`main.js:44`).

- **Rewritten at every page load** from its normalised form (`main.js:57,891`;
  `src/main.js:20,248 @cc9e61106`): unknown fields are dropped.
- Also written when a skill is earned (`main.js:378`), a chapter is completed (`:400`), a
  level starts (`:516-517`), a save is loaded (`:523`), by the unlock cheat (`:562-569`) and by
  an import.
- Migration (`campaign-progress.js:34-40`): a valid saved game adds its own chapter to
  `playedLevels`, its `game.state.skill` to `earnedSkills`, and raises `highestUnlocked` to its
  chapter (plus one when `game.completed` is true). This is how saves from before each field
  existed are upgraded, every time the page loads.

### 2.6 `redcat.save.v1`

The single saved game of a player: section 6. Written by `saveGame()` (`main.js:226-234`) and,
for a game started from the menu, once at level start (`main.js:518`).
`saveGame()` runs on: F5 and the pause menu's save button (`:649,749`), pause (`:350`; pause
itself is triggered by P, Esc, window blur, hidden tab, lost pointer lock, leaving
fullscreen `:743-763`), return to menu (`:353`), a script save point (`:388`), chapter
completion (`:400,435`), every 60 s of play (`autosave.js:1`, `main.js:877`), each recovery
minute (`:877`), `beforeunload` (`:764`), quit (`:705`), player switch (`:140`), the cheats
(`:554,559`) and after loading a recovery point (`:261`).

From v0.9.9 a state with `health <= 0` is never written (`main.js:230`). Up to v0.9.8 it was
(`src/main.js:147 @v0.9.8`), so an old save can hold a dead player.

Validity test used everywhere (`campaign-progress.js:20-25`): `version === 1`, `level` one of
the five ids, `position` three finite numbers, `yaw` and `pitch` finite, `game` an object with
`version === 1`, `game.level === level`, `game.state.health` finite. An unparsable or invalid
value counts as "no saved game".

### 2.7 `redcat.touch-intro-hint.v1`, `redcat.desktop-intro-hint.v1`

JSON `true` once the one-time control hint of the first chapter was shown on a touch device
or on a desktop (`touch-intro-hint.js:1-25`, `main.js:109-112`). Absent otherwise. v0.9.7
stored them for the whole origin (`src/main.js:56,58 @v0.9.7`, no player list yet); from v0.9.8
they are per player and the first player keeps the old keys.

### 2.8 `redcat.highscores.v1`

```json
{"version":1,"entries":[{"id":"player:legacy","name":"Speler 1","score":230,"level":"lvl00a"},{"id":"original:0","name":"Teun","score":100,"level":null}, …]}
```

- At most 10 entries, sorted by `score` descending (`menu-highscores.js:13-18,30`).
- `id`: `original:0` … `original:9` are the ten seeded rows of the original game
  (`Teun 100, Gyda 90, Paul 80, Brian 70, Pascal 60, John 50, Rob 40, Tineke 30, Harry 20,
  Rene 10`, `menu-highscores.js:6-7`); `player:<player id>` is a player's best score. One row
  per player.
- `name`: display name at the time of writing (not updated later). `score`: non-negative
  integer, taken from `save.game.state.score`. `level`: level id of that save, or `null` for
  the seeded rows (shown as "Klaar!", `main.js:733`).
- Written when the Highscores page is opened (`main.js:730-733`) and, from v1.0.5, when the
  last chapter's results screen is left (`main.js:442`). A player's row is replaced only by a
  higher score, or the same score in a later chapter (`menu-highscores.js:28`).
- An invalid value is replaced by the ten seeds on the next write (`menu-highscores.js:14`).

### 2.9 `redcat.adventure-revision.v1`

A JSON string, `"p_" + UUID` (a fresh `generateId()`), written **only** when a backup file is
imported into that player (`player-profiles.js:147`). Absent for players who never imported.
It has no meaning beyond "changed". Use: section 9.

An import (`player-profiles.js:143-168`, v1.0.2+) replaces four keys of the chosen player in
this order: save, progress, player options, revision. On a write error it removes what it
wrote and restores the previous texts.

### 2.10 IndexedDB recovery history

`indexedDB.open(name, 1)`; `onupgradeneeded` creates `createObjectStore('history')` with no
options (`recovery-saves.js:25-29`). One record, read with `get('rolling')` and replaced with
`put(state, 'rolling')` in one transaction (`:46-66`).

```js
{ clock: 120.0,          // seconds this player has spent playing, as of the last write
  anchor: 0,             // clock value of the first checkpoint of the current adventure
  checkpoints: [ { at: 0, save: {…} }, { at: 60, save: {…} }, { at: 120, save: {…} } ] }
```

Details in section 7. The database and its empty store are created as soon as a page of
v0.9.3 or newer loads (`main.js:104`, `recovery-saves.js:106,112-114`), and for a non-first
player as soon as that player is selected (`main.js:145`). A database with an empty store is
therefore normal.

### 2.11 Not used

A search of every revision's sources, `index.html` and the shipped bundle
(`src/game.bundle.js @v1.0.4 … @v1.0.8`) for `sessionStorage`, `serviceWorker`, `caches.`,
`document.cookie`, `navigator.storage`, `BroadcastChannel`, `SharedWorker`, `navigator.locks`,
`window.name` and `history.pushState/replaceState` finds nothing. The page has no web
manifest. The only URL parameter is `?skipIntro` (`main.js:896`).

The literals `redcat.act` and `redcat-actor-resources-v1` in the source are an asset file name
and an asset index format, not storage (`world.js:183`).

### 2.12 Outside the browser: the export file

From v1.0.1 a player's save can be downloaded as
`RedCat-Spookkasteel-<name>-<UTC stamp>.json`; from v1.0.2 it can be imported. Visitors may
hold such files. Shape (`save-export.js:5-6,29-40`):

```json
{"format":"redcat-spookkasteel-save","formatVersion":1,"exportedAt":"2026-10-22T12:00:00.000Z",
 "player":{"name":"Rick"},"save":{ … redcat.save.v1 … },"progress":{ … redcat.progress.v1 … },
 "options":{"difficulty":"Hard","noClip":false}}
```

No settings, no other players, no recovery history. Maximum 32 MiB
(`save-import.js:5`). The import validator (`save-import.js:61-146`) is the most complete
written description of which nested save fields the port itself relies on.

---

## 3. Player profile model

Source: `player-profiles.js` (unchanged from v0.9.8 to v1.0.8 except for the added import).

- **List**: `redcat.players.v1` `players`, 1 to 8 entries (`MAX_PLAYERS = 8`, `:6,68`).
- **Ids**: `legacy`, or a string matching `/^p_[a-z0-9_-]{8,80}$/` (`:13`). Generated as
  `p_` + `crypto.randomUUID()`; without `randomUUID`,
  `p_<base-36 time>_<random>_<random>` (`:35-40`). An id is never derived from a name and is
  never reused while keys with its prefix exist (`:125-130`).
- **Names**: text, NFC-normalised, trimmed, inner whitespace collapsed to one space, 1 to 12
  code points, no control or format characters (`:26-33`). Unique ignoring case
  (`toLocaleLowerCase('nl-NL')`, `:15,72-73`).
- **Current player**: `activeId`. It must be one of the ids in the list (`:77`).
- **First player**: on the first load without `redcat.players.v1`, the list becomes
  `[{id:'legacy', name:'Speler 1'}]` and whatever is in the un-prefixed keys and in
  `redcat-recovery-saves` becomes that player's data, in place (`:53-55,107,113`). Nothing is
  copied or removed.
- **Creating** a player writes only the list (`:121-135`). The new player has no keys until
  it is selected. **Selecting** writes the previous player's options, then the list
  (`main.js:141-146`), and opens the new player's recovery database.
- **Removing** (`:170-184`, `main.js:164-178`): the list is written first; then every key
  starting with `redcat.player.<id>.` is removed (for `legacy`: the six un-prefixed names), and
  the player's recovery database is deleted. The last player cannot be removed. If the cleanup
  fails the data stays behind without an owner. Once `legacy` has been removed, the un-prefixed
  per-player names are not used again.
- **Per-player data**: the saved game, campaign progress, difficulty and no-clip preference,
  the two hint flags, the import revision, the recovery history.
- **Shared**: settings (including key bindings and input device), highscores.

There is no per-player key binding, volume or display setting, and no stored statistic about
a player other than what is in the save and the progress.

---

## 4. Settings model

`redcat.settings.v1`. Defaults: `main.js:47`. Normalisation at load: `main.js:56-76,82,90`.

| Field | Values | Default | Meaning | Since |
| --- | --- | --- | --- | --- |
| `resolution` | `"native"`, or `"1280x720"`, `"1920x1080"`, `"2560x1440"`, `"3840x2160"`, `"2560x1080"`, `"3440x1440"`, `"1024x768"`; on phones also `"full"` | `"native"` | size of the 3D drawing buffer. `native` = window size × device pixel ratio (max 7680×4320); from v1.0.8 on phones a budget with a 540-pixel short edge, and `full` = the real device resolution (`main.js:83-86,270`). Unknown value → `native` | 0.9.1; `full` v1.0.8 |
| `renderScale` | number 25–300 (%, slider step 5) | 100 | scale of the 3D buffer. Lowered by 25 automatically after 3 s below 30 FPS; from v1.0.1 that lowered value is stored (`render-quality.js:2-4,38-46`) | v0.9.8 |
| `msaa` | 0, 2, 4, 8 | 4 | anti-aliasing samples; other values → 4 (`msaa-renderer.js:3-6`). Set to 0 by the automatic reduction. On phones set once from 4 to 0 (v1.0.8) | v1.0.1 |
| `phoneMsaaChecked` | `true` | absent | marks that the one-time phone change of `msaa` was applied (`main.js:82`). Phones and Android only | v1.0.8 |
| `showFps` | boolean | false | FPS counter | v0.9.8 |
| `fullscreen` | boolean | true (0.9.1 – v0.9.5: false) | enter fullscreen on the first click or key. Only a stored `false` switches it off (`fullscreen-preference.js:1-3`) | 0.9.1 |
| `fov` | number 45–90, degrees vertical | 54 (before v1.0.6: 65) | field of view. Out of range → default. A stored value is kept | 0.9.1 |
| `sensitivity` | number 0.2–2 | 1 | mouse, touch and stick look speed | 0.9.1 |
| `volume` | number 0–1 | 0.6 | master volume | 0.9.1 |
| `effectsVolume` | number 0–1 | 1 | sound effects and voices (`main.js:105`) | v1.0.1 |
| `musicVolume` | number 0–1 | 1 | music | v1.0.1 |
| `autoIntro` | boolean | true | play the intro film when the page opens | 0.9.1 |
| `camera` | `"third"`, `"first"` | `"third"` | camera mode | 0.9.1 |
| `touchControls` | `"auto"`, `"on"`, `"off"` (`true`/`false` are read as on/off) | `"auto"` | on-screen controls (`touch-controls.js:2-7`) | v0.9.3 |
| `controlDevice` | `"keyboard"`, `"gamepad"`, `"joystick"` | `"keyboard"` | input device chosen in the menu | v1.0.1 |
| `controlBindings` | object: action → array of 1–4 key codes | see below | keyboard bindings | v1.0.1 |
| `difficulty` | `"Easy"`, `"Normal"`, `"Hard"` | `"Normal"` | **copy** of the active player's option from v0.9.8; the real setting before | 0.9.1 |
| `noClip` | boolean | false | **copy** of the active player's option from v0.9.8; the real setting before | 0.9.1 |

`controlBindings` (`control-bindings.js:4-42,86-124`): actions `forward` (`KeyW`,`ArrowUp`),
`backward` (`KeyS`,`ArrowDown`), `turnLeft` (`ArrowLeft`), `turnRight` (`ArrowRight`), `left`
(`KeyA`), `right` (`KeyD`), `attack` (`Control`), `jump` (`Space`), `walk` (`Shift`), `use`
(`KeyE`), `camera` (`KeyV`), and from v1.0.6 `cameraNear` (`Digit1`), `cameraFar` (`Digit2`),
`cameraHigh` (`Digit3`), which may be empty arrays. Key names are `KeyboardEvent.code`
values, with `ShiftLeft/Right`, `ControlLeft/Right`, `AltLeft/Right` stored as `Shift`,
`Control`, `Alt`. `Escape`, `KeyP`, `F5`, `F9` cannot be bound. A set that is invalid as a
whole (duplicate key, unknown key, empty required action) is replaced by the defaults.

Not stored anywhere: a language (the port is Dutch only), a controller button mapping, an
"unlock" or "cheat used" flag, window size.

---

## 5. Progress outside a running game

| What the menu shows | Comes from |
| --- | --- |
| Player name ("Hallo …") | `redcat.players.v1`, active player (`main.js:133,724`) |
| "Avontuur" continues or starts new | whether the player's save is valid and is not a completed last chapter (`main.js:723`) |
| Startinfo: chapter, difficulty, score of the adventure in progress | `save.level`, `save.game.difficulty`, `save.game.state.score` (`main.js:724-726`, `original-menu.js:101-110`) |
| Which chapters can be chosen (Snelspel, chapter cards) | `progress.highestUnlocked` (`campaign-progress.js:58-60`) |
| Whether a chosen chapter is a replay (the level scripts then take their quick-play branches) | `progress.playedLevels` (`campaign-progress.js:45-49`, `script-host.js:155-157`) |
| Abilities a chapter starts with | `progress.earnedSkills`, see below |
| Highscores table | `redcat.highscores.v1` (2.8) |
| Recovery choices "2 / 5 / 10 minuten geleden" with chapter and date | IndexedDB history: `save.level`, `save.savedAt` (`main.js:235-249`) |
| Settings dialog, cheats page | `redcat.settings.v1`, `redcat.player-options.v1` |

- **Unlocked chapters**: chapter `i` can be started when `i <= highestUnlocked`. Completing
  chapter `i` sets `highestUnlocked = max(old, min(4, i + 1))` (`campaign-progress.js:62-69`).
  There is no per-chapter "completed" flag. Chapter `i` was completed at least once if
  `highestUnlocked > i`, **unless** the unlock cheat was used.
- **"All unlocked" flag**: the cheat "Alle levels vrijspelen" writes
  `highestUnlocked: 4` and nothing else (`main.js:562-569`). There is no typed cheat code and
  no separate flag. `highestUnlocked: 4` is therefore either four completed chapters or the
  cheat.
- **Adventure and Snelspel**: the same game, the same single save, the same progress. Snelspel
  is a menu route that starts any unlocked chapter (`original-menu.js:3-5,155`,
  `main.js:456,729`). It asks before replacing an existing save and its recovery history
  (`main.js:299-319`). What differs is in 6.7 "game mode".
- **Abilities**: `earnedSkills` collects every ability earned in the adventure
  (`main.js:378`). A new adventure (chapter 1 from "Avontuur") resets it to what that fresh
  game has (`main.js:458,516`). When a chapter starts, the earned mask is OR-ed into the game
  (`main.js:485`).
- **Total score, lives, potions, mirror parts**: only inside the saved game (6.3). They are
  carried from chapter to chapter in memory (`main.js:439,443,478`), not stored separately.
- **Highscores**: 2.8. Global, one row per player.

---

## 6. The saved-game snapshot

The same object is used for `redcat.save.v1`, for every recovery checkpoint and inside an
export file. Built by `adventureSnapshot()` (`main.js:225`):

```js
{version:1, level, position, lastSafe, playerMotion, playerAnimation, noClip, yaw, pitch,
 game: gameplay.snapshot(), audio: audio.saveState(), savedAt}
```

### 6.1 Top level

| Field | Type | Meaning | Since |
| --- | --- | --- | --- |
| `version` | 1 | never changed | 0.9.1 |
| `level` | level id | chapter | 0.9.1 |
| `position` | `[x, y, z]` | the player's feet (bottom centre of the collision box, `player-hull.js`), in the original level's units: 32 units per metre, Y up, no axis change (`docs/asset-formats.md:68`). A new game starts at the `PlayerStart` entity's `Origin` unchanged (`world.js:172`) | 0.9.1 |
| `lastSafe` | `[x, y, z]` | last position with solid ground, used to leave no-clip | 0.9.1 |
| `yaw` | radians | heading. Forward on the ground is `(-sin yaw, 0, -cos yaw)` (`world.js:1165`). A level's `Orientation` value `o` (twelfths of a turn) is `yaw = -o·π/6` (`actor-placement.js:8`). Not normalised | 0.9.1 |
| `pitch` | radians | camera pitch, 0.16 at start (`world.js:91`) | 0.9.1 |
| `noClip` | boolean | no-clip was on. On load it overrides the player option (`main.js:483`) | 0.9.1 |
| `playerMotion` | object | `{velocityY, launchVelocityXZ:[x,z], grounded, jumpAge (seconds or null), superJumpUsed, jumpSerial, jumpKind ('normal', 'super' or null)}` (`collision.js:362-365`) | v0.9.3 |
| `playerAnimation` | object or null | `{motion:{airborne, jumping, falling, age, jumpSerial, groundDistance?, respawnIdle?, hintMotionKey?}, reactionPhase ('hit', 'death', 'respawn' or null), attackSerial, pose:{name, time, rate, loop, transition}}` (`player-animation.js:50-55`, `animation.js:209-213`) | v0.9.9 |
| `game` | object | 6.2 | 0.9.1 |
| `audio` | object | `{version:1, level, sounds:[…up to 512], musicPositions:[[name, seconds]…], dialogue:[{event:{voice,text,id,until}, currentTime}…]}` (`audio.js:329-343`). Playing voices only; not needed to convert a game | v0.9.9 |
| `savedAt` | ISO 8601 UTC string | wall-clock time of the save (`new Date().toISOString()`) | 0.9.1 |

### 6.2 `game` (`Gameplay.snapshot()`, `gameplay.js:1112-1141`)

| Field | Type | Meaning | Since |
| --- | --- | --- | --- |
| `version` | 1 | never changed. `restore()` refuses anything else (`gameplay.js:1144`) | 0.9.1 |
| `healthVersion` | 2 | marks that a heart container is worth 2 health. Absent in 0.9.1 saves (6.9) | v0.9.3 |
| `level` | level id | must equal the top-level `level` | 0.9.1 |
| `difficulty` | `"Easy"`, `"Normal"`, `"Hard"` | difficulty of this game. Absent → Normal (`difficulty.js:9-13`) | 0.9.1 |
| `state` | object | 6.3 | 0.9.1 |
| `time` | seconds | simulated play time **in this chapter visit**; starts at 0 in every chapter | 0.9.1 |
| `completed` | boolean | the chapter's end was reached; the results screen has not been left yet. Loading such a save shows the results screen and then starts the next chapter (`main.js:523,437-444`) | 0.9.1 |
| `debriefing` | object or null | results of a completed chapter: `{version:1, level, rows:[{kind:'Potion'/'Money'/'Enemy'/'Secret', found, total, bonus} ×4], bonus, oldScore, newScore}` (`debriefing.js:5-23`). `state.score` already includes the bonus | v0.9.3 |
| `checkpoint` | `{position:[x,y,z], orientation}` | where the player respawns: the last script save point, or the start. `orientation` in twelfths of a turn | 0.9.1 |
| `entryState` | object or null | copy of `state` at the moment the chapter was entered, used by "opnieuw proberen" (`main.js:488,447-450`) | v1.0.5 |
| `variables` | array of `[name, number]` | assignments made by the fallback command interpreter (`gameplay.js:216-217`), which is not used while the compiled scripts run. Empty in every example dump | 0.9.1 |
| `objects` | array | one record per level entity, 6.4 | 0.9.1 |
| `scripts` | object | script state, 6.5 | 0.9.1 |
| `hazards` | object | `{version:2, time, nextId, trails:[…]}` (0.9.1: `{version:1, nextId, segments:[…]}`), mushroom trails | 0.9.1 |
| `projectiles`, `nextProjectileId`, `projectileImpacts`, `gargoyleBlasts`, `explosions`, `explosionDamage`, `rewardEffects`, `spoutEffects` | arrays / object | shots in flight and running effects (6.6) | mixed, see 8 |
| `playerReaction` | object or null | `{phase:'hit'/'death'/'respawn', age, lifeDeducted?, finished?}` (`player-lifecycle.js:19-31`) | v0.9.3 |
| `playerCharge`, `pendingPlayerAttack`, `attackCooldown`, `playerAttackSerial`, `playerAttackUntil` | | the player's shot in progress | 0.9.1 / v0.9.3 |
| `hitCooldown`, `environmentFeedbackCooldown`, `respawnProtection`, `hurtSoundUntil`, `hurtRandomState`, `chatterRandomState`, `footstepState` | numbers / object | timers and random streams | mixed, see 8 |

### 6.3 `game.state`

`gameplay.js:127`: `{health, maxHealth, score, potions, mirror, lives, coins, kills, secrets, skill}`.
All are numbers; `restore()` takes each finite value and clamps it to ≥ 0 (`gameplay.js:1157-1158`).

| Field | Meaning | Range, start value |
| --- | --- | --- |
| `health` | current health. 2 per heart on the HUD. Can be fractional (liquids) | 0 … `maxHealth`, start 10 |
| `maxHealth` | health capacity. A heart container adds 2 (`gameplay.js:431`); 0.9.1 added 1 | 1 … 20, start 10 |
| `lives` | spare lives. Meaning differs by one before v1.0.5, see 6.9 | start 3 (`Game.ini [Player] InitialLifes`) |
| `score` | total score of the adventure so far, including chapter bonuses | 0 … 999999 (`player-inventory.js`) |
| `potions` | magic potions held. Reset to 0 at every chapter start (`main.js:478`) | 0 … 100 |
| `mirror` | mirror parts held | 0 … 5 |
| `coins` | value of money bags collected: small 1, medium 5, large 10 (`gameplay.js:423`) | ≥ 0 |
| `kills` | enemies defeated | ≥ 0 |
| `secrets` | secrets found | ≥ 0 |
| `skill` | abilities, bit mask (`script-host.js:148-154`, `docs/player-abilities-native.md` in the port): 1 ordinary shot, 2 power shot, 4 super shot (BIG BENG), 8 super jump (SuperSkippie), 16 unused power-move flag | 0 … 31 |

`score`, `mirror`, `lives`, `coins`, `kills`, `secrets`, `health`, `maxHealth` and `skill` are
carried into the next chapter; `potions` is not (`main.js:439,443,478`).

### 6.4 `game.objects[]`

One record per level entity that has a `classname` not starting with `%`, in level order
(`gameplay.js:136-161`). **`id` is the entity's own editor name** (`%name%`, for example
`ItemCoin23`, `DoorModel49`, `MovingEnemy12`, `Trigger1`); see 6.8.

Every record has (`gameplay.js:1131`): `id`, `position` `[x,y,z]`, `enabled`, `visible`,
`collected`, `health`, `open`, `locked`, `switchedOn`, `triggerCount`, `switchCount`,
`openFraction`, `inside`. Other fields appear only for some kinds or only when set.

| Kind (entity class) | What is recorded |
| --- | --- |
| Pickup: `ItemCoin`, `ItemHealth`, `ItemPotion`, `ItemMirror`, `ItemLife`, `ItemHart`, `ItemHartContainer` (`gameplay.js:56`) | **`collected: true`** when taken. The item's size is the entity's `Type` 1/2/3, not saved |
| Door: `DoorModel` | **`open`** (logical state), `openFraction` 0–1, `locked`, `closeAt` (game time of the automatic close, or null), `secretFound` |
| Button: `ButtonModel` | `switchedOn`, `switchCount`, `buttonPhase` 1–8 (1 off, 5 on; v1.0.3), `pendingButtonSwitch`, `secretFound` |
| Trigger: `Trigger`, `CameraTrigger` | `triggerCount` (times fired), `inside`, `triggerPhase` 0–3 (v1.0.3), `enabled`, `secretFound` |
| Enemy: `MovingEnemy`, `StandingEnemy` | **`health`** (≤ 0 = defeated; then `enabled: false`), `position`, `yaw`, `alerted`, `animationState` (`idle`, `walk`, `walkback`, `attack`, `hurt`, `death`, `charge`, `start`, `retract`, `teleport`, `dormant`), `deathStartedAt`, `corpseUntil`, AI state (`patrol`, `pursuit`, `ambush`, `batContact`, `flightDetour`, `nativeShooter`, `nativeStandingShooter`, `aiRandomState`, `sight`, `think`, `idleTimer`, `salvoSize`, `salvoRemaining`, `attackTimer`, `pendingAttack`, `lastSeenPosition`, `lastSeenAt`, `lastAttackedAt`), and **`boss`** for the three scripted bosses |
| Destructible prop: `AdamAnyActor` with `Targetable` | `health` (0 = destroyed), `propDamage` (v0.9.9), `actorAge` |
| Fairy: `Fairy` | `enabled`, `visible`, `fairyState` (particle effect, v0.9.3), `effectAge` |
| Save point: `SavePoint` | `enabled` (its beacon is lit) |
| Moving brush: `ModelController` | its timeline is in `scripts.motions` |
| Others (`EffectSound`, `EffectMusic`, `EffectSpoutEntity`, `TeleporterFX`, `FlashEffect`, lights, `World`, `PlayerStart`, path points) | `enabled`, `visible`, `volume`, `effectAge`, `teleporterState`, `flashStartedAt` … |

- **Secrets**: an entity with `IsSecret=1` gets `secretFound: true` when opened, switched or
  entered (`environment-interactions.js:40-46`); a secret pickup counts through `collected`.
- **Enemy type** is not saved; it follows from the entity: `MovingEnemy.Type` 1 spider, 2 bat,
  3 ghost, 4 zombie, 5 frog, 6 skeleton, 7 Mushroom Brutus, 8 Bone Brutus, 9 witch, 10 guardian;
  `StandingEnemy.Type` 1 plant, 2 knight, 3 gargoyle, 4 Jester Max, 5 Dungeon Max
  (`gameplay.js:57-60`).
- **`boss`** (`boss-ai.js:12-14,282-301`): present for Jester Max (`type:'maxj'`), Dungeon Max
  (`'maxd'`) and the witch (`'witch'`): `{version:1, type, phase, elapsed, duration, shots,
  started, released, hidden, invulnerable, approaching, home:[x,y,z], machineMotion,
  machineSerial, machineElapsed, teleportIndex, lowerFrom, waitUntil, target?,
  teleportEffects?}`; `phase` is one of `idle`, `shoot`, `betweenShots`, `rise`, `look`,
  `lower`, `teleportOut`, `invisible`, `teleportIn`, `start`, `fly`, `recover`, `salvoWait`.
  The two Brutus bosses are ordinary enemies with `nativeShooter`. A boss is defeated when its
  `health <= 0`. Related: `scripts.combatBoss`, `scripts.musicState.mode`.

### 6.5 `game.scripts` (`ScriptHost.snapshot()`, `script-host.js:386-390`)

| Field | Meaning | Since |
| --- | --- | --- |
| `version` | 1 | 0.9.1 |
| `replayLevel` | boolean, the value the level scripts get from `GetGameType()` (`script-host.js:157`). True when the chapter had been played before by this player when it was started | v0.9.7 |
| `vm` | `{version:1, script, initialized, globals}`. `script` is the SHA-256 of the compiled level script; a save is refused when it differs (`davi-vm.js:358-371`). The five script files are byte-identical in every revision. `globals` maps a variable id to `{type, value}` (type 1 or 2 number, 3 string, 4 object name or null) | 0.9.1 |
| `time` | script clock in seconds for this chapter visit | 0.9.1 |
| `cutscene` | a cutscene is running | 0.9.1 |
| `playerVisible`, `enemiesFrozen`, `weaponsEnabled` | script switches (`weaponsEnabled` is saved but no longer used) | 0.9.1 |
| `camera`, `subtitle`, `pendingCutsceneStop`, `portalTransition`, `cutsceneFadeUntil`, `cutsceneFadeInUntil`, `hintMotion` | state of a running cutscene or portal | mixed |
| `musicState`, `afterBossMusicId`, `combatThreats`, `combatBoss` | which music plays: `musicState = {id, sound, mode}` | 0.9.1 |
| `keyItems` | array of lower-case names given by `GivePlayerKeyItem` | 0.9.1 |
| `missions` | array of `[number, {text, portrait, sound, complete}]` | 0.9.1 |
| `poses` | array of `[modelIndex, {translation:[3], rotation:[4], origin:[3]}]`: current pose of every scripted brush model | 0.9.1 |
| `motions` | array, one per door, button or controller with a motion: `{id, started, time, from, to, speed, loop (false, true or 'pingpong'), playing, finished, includeStart, loopFrom, loopTo, controllerTarget?, buttonPhase?}` | 0.9.1; last two v1.0.3 |

- **VM globals that exist**: only two chapters have any. `lvl02a`: `37:0` … `37:4` =
  `paal1` … `paal5` (integers). `lvl04a`: `37:0` = `HasLastMirror`, `37:1` = `MirrorsPlaced`.
  Names are in `data/davi/<level>.json` `globals[].id/name`. Every other piece of script
  progress is in the objects: an entity's `enabled`, a trigger's `triggerCount`, a door's
  `open`/`locked`, a motion's `time`.
- **Cutscenes and dialogue**: there is no list of scenes already seen. A scene has run if the
  trigger or object that starts it has fired or has been disabled by its script. A scene in
  progress is `cutscene: true` plus `camera`, `subtitle` and the queued lines in
  `audio.dialogue`.
- **`keyItems` and `missions`** — **I**: a count of references in the five compiled scripts
  finds `GivePlayerKeyItem`, `PlayerHasKeyItem`, `AddMission`, `CompleteMission`,
  `ShowMission(s)` only in the import tables, never called. Both arrays are then always empty.
  They are empty in all six example dumps.

### 6.6 Effect and sound state

`spoutEffects`, `objects[].fairyState`, `teleporterState`, `animationPose`, `machinePose`,
`knightDebrisState`, `actorAge`, `effectAge`, `rewardEffects`, `explosions`,
`projectileImpacts`, `hazards`, `footstepState` and the top-level `audio`,
`playerAnimation`, `playerMotion` only let the port continue a frame exactly where it
stopped. Several are filled by the renderer, not by the game logic
(`world-effects.js:426-443`, `world.js:350,413`). They are the larger part of a save in some
chapters: all 77 particle emitters of `lvl01a` together are about 0.37 MB of `spoutEffects`
(measured with the port's `NativeSpoutEffect`), an active fairy about 30 kB. A converter can
ignore all of them.

### 6.7 Field map for converting a saved game

| Wanted | Field | Notes |
| --- | --- | --- |
| Chapter | `level` (= `game.level`) | `lvl00a` … `lvl04a` |
| Player position | `position` | feet, original units, Y up |
| Facing | `yaw` (radians), `pitch` | `orientation = -yaw·6/π` in the level's twelfths |
| Respawn point | `game.checkpoint.position`, `.orientation` | |
| Health, max health | `game.state.health`, `.maxHealth` | 2 per heart; see 6.9 for 0.9.1 saves |
| Lives | `game.state.lives` | see 6.9 |
| Score, total score | `game.state.score` | one running total; no per-chapter score |
| Magic potions | `game.state.potions` | of this chapter |
| Mirror parts | `game.state.mirror` | |
| Coins / money bags | `game.state.coins` (value) and the count of `ItemCoin` objects with `collected` (bags, this chapter only) | |
| Kills, secrets | `game.state.kills`, `.secrets` | running totals |
| Key items | `game.scripts.keyItems` | empty in practice (**I**) |
| Abilities | `game.state.skill` | plus `progress.earnedSkills` for the adventure as a whole |
| Difficulty | `game.difficulty` | |
| Game mode | `game.scripts.replayLevel` | see below |
| Play time | `game.time` (this chapter visit, seconds) | no total exists; the recovery `clock` is the player's total playing seconds since v0.9.3, but only as of its last write |
| Timestamps | `savedAt` | the only one; nothing else is dated |
| Collected items | `game.objects[]` with `collected: true` | |
| Opened doors | `game.objects[]` `open`, `locked`; exact pose in `scripts.motions` / `scripts.poses` | |
| Killed enemies | `game.objects[]` with `health <= 0` | |
| Triggered scripts | `game.objects[]` `triggerCount`, `enabled`, `switchedOn`; `scripts.vm.globals` | |
| Chapter finished | `game.completed` | |

**Game mode**: nothing in the save says "Avontuur" or "Snelspel". What exists:

- `scripts.replayLevel` (v0.9.7+): the chapter was started as a replay of a chapter already
  played. A Snelspel of a played chapter has `true`; a Snelspel of a chapter that was only
  unlocked has `false`; an adventure that walks into a chapter played earlier has `true` as
  well (`main.js:459`, `campaign-progress.js:45-49`).
- From v1.0.5 the starting abilities differ: an adventure chapter starts with the carried and
  earned mask only, a Snelspel adds the chapter's standard mask 0, 1, 3, 3, 15
  (`main.js:476-478,485`, `gameplay.js:128-132`). Before v1.0.5 every chapter start got the
  standard mask.

### 6.8 Entity names

`gameplay.js:138`: `let id=e['%name%']||`entity${i}`;if(used.has(id))id+=`:${i}`;` — the same
line in every revision. In the five shipped levels every entity has a unique `%name%`, so no
synthetic id occurs (checked: 700, 1010, 1724, 1466 and 611 objects; the entity lists and the
compiled scripts are identical in all 16 revisions). The names are the level editor's own, taken unchanged
from the original `.bsp` entity data into `data/levels/<level>/level.json` `entities[]`, where
each entry also has `classname`, `Origin`, and `DaviName` (the name the scripts use; for
example entity `SavePoint1` has `DaviName` `savepoint_fx`). `scripts.motions[].id`,
`audio.sounds[].sourceId`, `musicState.id`, `camera.id`, patrol way points
(`GrobberPathPoint…`) use the same names. `scripts.poses` uses the brush model number
(`%Model%` entities' `Model`, `gameplay.js:134`).

### 6.9 What a newer revision changes when it loads an older save

All in memory at load; the stored text changes only at the next save.

| Change | Code |
| --- | --- |
| Heart containers were worth 1 health in 0.9.1 and 2 from v0.9.3. A save without `healthVersion: 2` and with `maxHealth > 10` gets `maxHealth = min(20, 10 + 2·(maxHealth − 10))` and the same amount added to `health` | `gameplay.js:1159-1165` |
| `lives`: up to v1.0.4 a life was taken at the fatal hit and the game ended when `lives` reached 0 (`src/gameplay.js:300,329 @v1.0.4`). From v1.0.5 it is taken when the death animation ends and the game ends when a player with `lives` 0 dies (`gameplay.js:407-416`). So a living player with `lives: N` has N−1 respawns left under the old rule and N under the new one. No value is converted; a save in the middle of a death animation is marked so that it does not lose a second life | `player-lifecycle.js:26` |
| `difficulty` absent → Normal | `gameplay.js:1147-1149` |
| `skill`: kept as saved, also where an older revision gave a default ability that was not earned | `docs/player-abilities-native.md` in the port |
| A save with `health <= 0` (possible before v0.9.9) restarts its chapter, from `entryState` when present | `main.js:523,447-450` |
| `hazards` version 1 `segments` → version 2 `trails` | `projectile-hazards.js:114-135` |
| Jester Max / Dungeon Max saved with the two types swapped (a build older than 0.9.1): health kept as a fraction, boss reset | `gameplay.js:1284-1294` |
| Motions without `started`, older AI records, effect records without particle state: defaults | `script-host.js:406-428`, `gameplay.js:1199-1281` |

---

## 7. Recovery saves compared with the latest save

Source: `recovery-saves.js`.

- A checkpoint's `save` is **the same object** that was written to `redcat.save.v1` at that
  moment (`main.js:231-232`): same schema, same fields.
- It is stored as a structured clone, not as JSON text (`recovery-saves.js:6,152,174`).
  Properties whose value is `undefined` exist in the IndexedDB copy and are missing in the
  localStorage text.
- A checkpoint is taken at most once per 60 s of **playing** time (`INTERVAL = 60`), on fixed
  minute marks counted from `anchor` (`:135-137,169-170`). Menus, pauses and time with the
  page closed do not count (`:128-133`, `main.js:875`).
- The first checkpoint of a game started from the menu is taken when the level has loaded
  (`main.js:512-513`); it discards the previous history (`reset`).
- Kept: the newest checkpoint plus those within 600 s before it, **at most 11**
  (`WINDOW = 600`, `MAX_CHECKPOINTS = 11`, `:4,171`).
- A state with `health <= 0` is never stored (`:7,151`).
- The menu offers the checkpoints that are 2, 5 and 10 minutes older than the newest one
  (`RECOVERY_MINUTES`, `:3,191-199`). Loading one makes it the latest save (`main.js:255-262`).
- `clock` is the player's playing time in seconds; it continues across adventures and is never
  reset. `anchor <= clock`; each `at` lies between them. On read, at most the last 11 entries
  are looked at and invalid ones are dropped (`:78-92`).
- A failed write leaves the previous record and is retried after 5 s of play (`:180-184`).

The port's own browser tests left a real record of this shape in its repository
(`temp_work/js-bundling-2026-10-26/browser-1793046337375/report.json`,
`beforeUpgrade.history`: `clock 720`, `anchor 0`, 11 checkpoints at 120 … 720).

---

## 8. Version history of the storage

Six structural generations:

| Generation | Revisions | What makes it different |
| --- | --- | --- |
| 0 | untagged 0.9.1 (`cc9e61106`, 2026-09-22) | three localStorage keys, no IndexedDB |
| 1 | v0.9.3, v0.9.4, v0.9.5 | + IndexedDB recovery history |
| 2 | v0.9.7 | + two hint keys, replay bookkeeping |
| 3 | v0.9.8, v0.9.9, v1.0.0 | + player list, per-player keys and databases |
| 4 | v1.0.1 | + highscores, sound and input settings |
| 5 | v1.0.2 … v1.0.8 | + adventure revision (after an import) |

Per revision. "Save" lists fields added to the snapshot; all are optional when read.

| Revision | Date | Keys and databases | Schema and meaning |
| --- | --- | --- | --- |
| 0.9.1 `cc9e61106` | 09-22 | `redcat.settings.v1`, `redcat.save.v1`, `redcat.progress.v1` (`src/main.js:17`) | settings: `resolution, fullscreen, fov, sensitivity, volume, autoIntro, camera, noClip, difficulty` (`:16`). progress: `version, highestUnlocked`. Save: top level without `playerMotion`, `playerAnimation`, `audio` (`:42`); `game` as `src/gameplay.js:669`. Heart container +1. `GetGameType()` returns 0 |
| v0.9.3 | 09-24 | + IndexedDB `redcat-recovery-saves` (`src/recovery-saves.js:13,25`) | settings + `touchControls`. progress + `earnedSkills`. Save + `playerMotion`; game + `healthVersion: 2`, `debriefing`, `footstepState`, `playerReaction`, `playerCharge`, `projectileImpacts`; objects + `teleportTerminalSoundSerial`, `teleporterState`, `fairyState`, `salvoSize`, `pursuit`; scripts + `pendingCutsceneStop`, `portalTransition`; `hazards.version` 2. **Heart container now +2.** A game started from the menu stores its save at level start (`src/main.js:236`) |
| v0.9.4 | 09-30 | — | game + `gargoyleBlasts`, `rewardEffects` |
| v0.9.5 | 10-02 | — | — |
| v0.9.7 | 10-06 | + `redcat.touch-intro-hint.v1`, `redcat.desktop-intro-hint.v1` | `fullscreen` default becomes true (a stored `false` stays). progress + `playedLevels`; a new adventure resets `playedLevels` and `earnedSkills`. scripts + `replayLevel`. objects: `batContact.version` 2 |
| v0.9.8 | 10-12 | + `redcat.players.v1`, `redcat.player-options.v1`, prefix `redcat.player.<id>.`, databases `redcat-recovery-saves-<id>` | settings + `renderScale`, `showFps`; `difficulty`/`noClip` move to the player options. The hint keys become per player. Page load now also writes the player options |
| v0.9.9 | 10-18 | — | Save + `playerAnimation`, `audio`; game + `spoutEffects`, `explosionDamage`, `explosions`; objects + `propDamage`, `animationPose`, `machinePose`, `animationLoop`, `animationIdleClip`, `knightDebrisState`, `nativeShooter`. **A dead player is no longer saved** |
| v1.0.0 | 10-20 | — | — (page: import map and `?v=` cache keys) |
| v1.0.1 | 10-20 | + `redcat.highscores.v1` | settings + `msaa`, `effectsVolume`, `musicVolume`, `controlBindings`, `controlDevice`; the automatic quality reduction is now stored. Export file added. Menu gets the Snelspel route |
| v1.0.2 | 10-23 | + `redcat.adventure-revision.v1` (per player) | import added; `storage` listener and revision guard |
| v1.0.3 | 10-26 | — | objects + `pendingButtonSwitch`, `buttonPhase`, `triggerPhase`, `nativeStandingShooter`; scripts + `hintMotion`; motions + `controllerTarget`, `buttonPhase` |
| v1.0.4 | 10-26 | — | — (sources move to `source/`, one bundle is served) |
| v1.0.5 | 10-28 | — | game + `respawnProtection`, `hurtSoundUntil`, `hurtRandomState`, `entryState`; objects + `afterDestroyPending`, `dropDead`, `knightSwinging`; scripts + `cutsceneFadeUntil`, `cutsceneFadeInUntil`; `playerReaction.lifeDeducted`. **`lives` rule changes** (6.9). **Adventure chapters start without the chapter's standard abilities.** Highscore also written at the end of the last chapter. A completed last chapter no longer counts as an adventure in progress |
| v1.0.6 | 10-28 | — | `fov` default 54 (stored values kept). `controlBindings` + `cameraNear`, `cameraFar`, `cameraHigh`. game + `chatterRandomState`; objects + `sight`, `think`, `flashStartedAt`, `idleTimer`, − `nextIdleAt` |
| v1.0.7 | 10-29 | — | — |
| v1.0.8 | 10-31 | — | settings + `phoneMsaaChecked`; `resolution` value `full`; on phones `msaa` 4 is set to 0 once |

Field lists were extracted from each revision's `snapshot()` bodies
(`tools/out/legacy-research/extract_snapshot_keys.py`). Line of the key definitions,
`store()` and `saveGame()` in `main.js` per revision: 0.9.1 `17/39/42`, v0.9.3 `21/51/55`,
v0.9.7 `28/67/71`, v0.9.8 `35/94/147`, v1.0.1 `42/107/172`, v1.0.2 `44/110/210`,
v1.0.8 `48/126/226`.

No key was renamed or removed and no field was renamed. Removed or replaced:
`objects[].nextIdleAt` (gone in v1.0.6) and the inside of `game.hazards` (v0.9.3: `segments`
became `trails`, with its own `version` 1 → 2).

---

## 9. Concurrency and safety behaviour of the port

**At page load** (v1.0.8):

1. `redcat.players.v1` is created if absent (`player-profiles.js:53-55`).
2. The active player's recovery database is opened, which creates it (`main.js:104`).
3. `redcat.progress.v1` and `redcat.player-options.v1` of the active player are written
   (`main.js:891`).

Nothing is deleted at page load, in any revision. The only deletions in the whole port are:
removing a player (3), and the roll-back of a failed import. A new game from the menu
overwrites the save and resets the recovery history after a confirmation
(`main.js:299-319,512-518`).

**Reading**: `readStored()` returns `null` for a missing or unparsable value
(`main.js:55`). For the save this means "no saved game": the menu then starts a new game
**without** the overwrite warning, unless the recovery history still has a checkpoint
(`main.js:304`).

**Several tabs**:

- `storage` event (`main.js:767-771`, v1.0.2+): only for the active player's
  `redcat.adventure-revision.v1`. When its value changes, the tab reloads itself
  (`window.location.reload()`). No other key is watched.
- Revision guard (`main.js:128,228,474`, v1.0.2+): a tab remembers the revision when it loads
  a level. If the stored value differs later, that tab silently refuses to write any
  per-player key or the settings.
- Player list (`player-profiles.js:81-84,145`): a tab refuses to change the list, and to
  import, when the stored text is no longer the text it read ("De spelerlijst is in een ander
  spelvenster gewijzigd. Herlaad dit venster.").
- Owner guard (`main.js:227`): a level loaded for one player is never saved after the active
  player changed in that tab.
- There is no other lock. Two tabs playing the same player both write `redcat.save.v1`; the
  last write stays. Each tab replaces the whole `'rolling'` record from its own memory
  (`recovery-saves.js:171-175`).
- IndexedDB: a tab closes its connection on `versionchange` (`recovery-saves.js:39`); an open
  that is blocked or fails makes recovery saving unavailable in that tab and shows a message
  (`:30-34`, `main.js:99-102`). The game goes on.

**Write errors, including a full quota**:

- `store()` catches every error, shows "Opslaan is niet gelukt: lokale opslag is niet
  beschikbaar." and returns false (`main.js:126-131`). The previous value stays. The autosave
  tries again after 5 s (`autosave.js:12-15`).
- Player list: nothing is changed and an error is shown (`player-profiles.js:86-87`).
- Import: roll-back (2.9). Recovery history: section 7.
- A player switch is refused when the living game of the old player cannot be saved
  (`main.js:140`).

**Leaving the page**: `beforeunload` saves the running game (`main.js:764`).

---

## 10. Hosting of the web build

- Public address: `/redcatspookkasteel/` on `games.nostalgiarealm.com`
  (`docs/nginx-hosting.md:3` in the port; the same in its first commit;
  `tools/deploy-website.sh:23` checks that address after an upload).
  `/redcatspookkasteel` redirects to `/redcatspookkasteel/` keeping the query
  (`docs/nginx-redcatspookkasteel.conf`).
- `index.html` is at the root of that path. Every URL in it is relative: `./src/…`,
  `assets/…`, `data/…`, `./node_modules/three/build/…`. No `<base>`, no host name
  (`index.html:6-13,376`; `docs/nginx-hosting.md:300-302`).
- Published tree: `index.html`, `src/`, `assets/`, `data/`, `node_modules/three/`
  (`docs/nginx-hosting.md:20-29`, `tools/deploy-website.sh:51-52`).
- Script loading: up to v0.9.9 `<script type="module" src="src/main.js">` and plain module
  URLs; v1.0.0 – v1.0.3 an import map and `?v=<hash>` on every module; from v1.0.4 one
  `./src/game.bundle.js?v=<hash>`.
- No service worker, no Cache Storage, no manifest (2.11). Caching is plain HTTP caching. The
  documented server snippet sets `expires -1` (revalidate) in every revision.
- Page policy: `default-src 'self'; script-src 'self' 'unsafe-inline'; … connect-src 'self';
  object-src 'none'` as a `<meta>` tag (`index.html:5`).
- The desktop (Electron, origin `redcat://game`) and Android (origin
  `https://appassets.androidplatform.net`) builds keep the same keys in their own storage
  (`docs/portability.md:21`, `electron/main.cjs:90`, `GameUrls.kt:7`). A website cannot see
  them.

---

## 11. INFERRED — what a successor at the same URL has to respect

Everything here follows from sections 2–10 and from how browsers scope storage. None of it
was tried in a browser.

1. **Same origin, same data.** localStorage and IndexedDB belong to scheme + host + port, not
   to the path. The successor sees all of the above as long as it is served from the same
   origin; from another host name, another scheme or inside a frame of another site it sees
   nothing. The port's own guide says the same (`docs/nginx-hosting.md:288-293`).
2. **Old code can still run** after the successor is deployed: a tab that was left open, or a
   cached page. That code writes at load (section 9) and on every save. Treat the legacy keys
   as possibly changing, and read them at the moment of import.
3. **Do not delete or reshape `redcat.players.v1`** while the other keys exist. Old code that
   finds it missing creates a new list with only `legacy`; every other player's keys and
   databases stay but can no longer be reached.
4. **Do not store anything else under the legacy names.** Old code rewrites
   `redcat.progress.v1` at every load from what it understands (a `version` other than 1 is
   read as no progress). A value in `redcat.save.v1` that it cannot parse or validate is
   "no saved game", and the next game started from the menu overwrites it without a warning.
5. **Reading is safe; removing is not needed.** No legacy revision breaks when its keys stay.
   The successor's own names (`rcspook-recomp.…`, database `rcspook-recomp`) do not collide
   with any legacy name.
6. **IndexedDB**: open `redcat-recovery-saves…` with version 1, or check that it exists first.
   Opening with a higher version makes every later `open(name, 1)` of old code fail. Creating
   the database without the `history` store makes old code fail on its first read, because it
   only creates the store in `onupgradeneeded`. An empty store is normal.
7. **Player enumeration**: take the ids from `redcat.players.v1`. Without that key (data of
   generations 0–2) there is one player; the port would name it `Speler 1`. Keys with a
   `redcat.player.<id>.` prefix whose id is not in the list are leftovers of a removed player.
8. **Difficulty and no-clip**: use the player options. For a first player without that key use
   `redcat.settings.v1` `difficulty` / `noClip`, as the port does (2.4). Otherwise ignore those
   two settings fields.
9. **Meaning by generation**: `maxHealth` without `healthVersion` (6.9); `lives` before v1.0.5
   (6.9) — the save does not say which revision wrote it, but `game.entryState` or
   `game.respawnProtection` present means v1.0.5 or newer; a dead player in the save
   (`health <= 0`); a completed chapter waiting for its results screen (`completed: true`).
10. **IndexedDB values are objects with `undefined` properties** (section 7); the localStorage
    text never has them.
11. **Space**: one save is 0.3–1 MB of text and every player has one; up to 8 players. The
    port's history adds up to 11 more per player in IndexedDB. A successor that adds large
    values to localStorage on this origin can push it over the browser's limit; old code then
    fails to save (with a message), and so does the successor.
12. **Retiring old tabs**: changing a player's `redcat.adventure-revision.v1` makes every open
    tab of v1.0.2 or newer with that active player reload, and stops its writes until then
    (section 9). Older revisions have no such hook.
13. **HTTP cache**: up to v0.9.9 module URLs had no version in them, and the port's guide
    records a visitor whose browser mixed 0.9.9 and 1.0 files
    (`docs/nginx-hosting.md:312-320`). A browser may therefore start old code from cache after
    the successor is in place if `index.html` is not revalidated.

---

## 12. UNRESOLVED

1. **Which revisions were on the public site, and when.** The repository shows what each tag
   would store, not what was uploaded. Evidence of deployment exists only for 0.9.9 and 1.0
   (`docs/nginx-hosting.md:312-320`). The deploy script uploads the working tree, so untagged
   states between two tags may have been public. Whether 0.9.1 (generation 0) or anything
   older was ever public is unknown.
2. **Data older than 0.9.1.** The load code tolerates shapes that no revision in this
   repository writes (swapped boss types, saves without `difficulty`, 6.9). Such builds
   existed before the first commit; their storage cannot be read from here.
3. **The live server's configuration**: its cache headers and its directory layout. The deploy
   script's default target folder (`…/redcatspookkasteel/redcat-website`) is not the folder of
   the documented server snippet (`…/redcatspookkasteel/`); both are checked against the same
   public address.
4. **Browser limits** for localStorage on this origin and whether other applications on the
   same host share them. Three sibling projects on this machine use other key prefixes
   (`rcsk.`, `kao-port-v1:`, `bookworm-nl-v1`); none uses `redcat.` or
   `redcat-recovery-saves`.
5. **Where `position` is on the original player.** The port puts the player's feet on
   `PlayerStart.Origin`. Which body point the original engine keeps there was not established
   (`cheats-and-player.md` in this folder has the same open point).
6. **Exact content of the renderer-filled fields** (6.6) for every chapter. They were read from
   code and from two of the port's browser-test reports of `lvl00a`, not for every case.
7. **Whether any visitor has leftovers** of removed players or damaged values. The code
   allows both.

---

## 13. Example dumps and how they were checked

`tests/fixtures/legacy/` holds six constructed dumps, one per generation, and
`build-fixtures.mjs` that rebuilds them. They are **not captures of a browser**; its
`README.md` says which parts come from running the port's own code and which were written by
hand.

Checks done (scratch scripts in `tools/out/legacy-research/`):

- Each dump's game snapshot is the output of that revision's own `Gameplay.snapshot()` and
  `ScriptHost.snapshot()`, run in Node against that revision's level data.
- All six dumps were then loaded with the v1.0.8 code: `PlayerProfiles` accepts every player
  list (and creates it for generations 0–2), `validAdventureSave` accepts all seven saves,
  `Gameplay.restore()` and `ScriptHost.initialize()` restore them without a script error,
  `RecoverySaves` accepts every history record, and `createSaveExport` → `parseSaveImport`
  (the port's strict validator) accepts every save.
- Shapes of the renderer-filled fields were compared with saves that the port's own
  headless-Chromium tests wrote into its repository:
  `temp_work/js-bundling-2026-10-26/browser-1793046337375/report.json` (tracked) and
  `temp_work/scene-output/temp_work/campaign-settings-scenes/run-1793270200565/campaign-settings-scenes.json`.
  Those come from isolated automated test profiles, not from a visitor's browser.
- Sizes: `lvl00a` 0.31 MB, `lvl01a` 0.46 MB, `lvl02a` 0.78 MB, `lvl03a` 0.69 MB, `lvl04a`
  0.27 MB for a fresh v1.0.8 game without renderer state (Node); 0.32 MB and 0.35 MB for
  `lvl00a` in the two browser-test reports.
