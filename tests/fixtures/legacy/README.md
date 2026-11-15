# Legacy browser-storage fixtures (JavaScript port)

**These files are constructed from the port's code. They are not captures of a browser.**
Nobody's real settings, players or saved games are in them. Each file also says so itself
(`_meta.constructed: true`).

They show what a visitor's browser can hold after using the earlier JavaScript web port of
RedCat Spookkasteel, one file per structural generation of that storage. The specification is
[docs/research/legacy-storage.md](../../../docs/research/legacy-storage.md); section numbers
below refer to it.

## Format

```json
{
  "_meta": { "constructed": true, "builtFrom": "v1.0.8", "validFor": "v1.0.2 – v1.0.8", "indexedDBVersion": 1, "scenario": ["…"] },
  "localStorage": { "<key>": "<the stored string>", … },
  "indexedDB": { "<database name>": { "history": [ { "key": "rolling", "value": { "clock": 0, "anchor": 0, "checkpoints": [ … ] } } ] } }
}
```

- `localStorage` values are the exact strings the port passes to `setItem`: compact JSON text.
  Parse a value a second time to get the object.
- `indexedDB`: every database has version 1 and one object store `history` without key path;
  a record is written here as `{key, value}`. `"history": []` is a database whose store is
  empty, which the port creates as soon as a player is selected.
- `_meta` is not part of the browser data.
- One line per localStorage key and per IndexedDB record, so a diff stays readable.

## Files

| File | Generation | Built with the code of | Valid for | Size |
| --- | --- | --- | --- | --- |
| `gen0-0.9.1-untagged.json` | 0 | commit `cc9e61106` (0.9.1, before the first tag) | that commit | 0.3 MB |
| `gen1-v0.9.3.json` | 1 | `v0.9.3` | v0.9.3 – v0.9.5 | 0.9 MB |
| `gen2-v0.9.7.json` | 2 | `v0.9.7` | v0.9.7 | 0.9 MB |
| `gen3-v0.9.8.json` | 3 | `v0.9.8` | v0.9.8 – v1.0.0 | 0.9 MB |
| `gen4-v1.0.1.json` | 4 | `v1.0.1` | v1.0.1 | 0.9 MB |
| `gen5-v1.0.8-two-players.json` | 5 | `v1.0.8` | v1.0.2 – v1.0.8 | 2.4 MB |

"Valid for" is about the set of keys and databases. Inside a generation later revisions add
optional fields to the saved game (section 8); a file has the fields of the revision it was
built with.

### What is in each file

**gen0** — one visitor, no player list. Keys `redcat.settings.v1`, `redcat.progress.v1`,
`redcat.save.v1`. No IndexedDB. A new adventure, saved in Het Bos (`lvl00a`) after 85 s:
score 215, 6 potions, coins worth 10, one plant defeated, three doors open, first save point
reached, ability "shot" earned. The save has no `playerMotion`, `healthVersion` or
`replayLevel`.

**gen1** — the same visitor and play with v0.9.3. Adds the database `redcat-recovery-saves`
with two checkpoints (level start and one minute), `earnedSkills` in the progress,
`touchControls` in the settings.

**gen2** — the same with v0.9.7. Adds `redcat.desktop-intro-hint.v1`, `playedLevels` in the
progress and `scripts.replayLevel` in the save. Score 230 instead of 215: from v0.9.7 a
health item is picked up at full health too.

**gen3** — the same with v0.9.8. Adds `redcat.players.v1` with two players, the first
player's `redcat.player-options.v1`, and a second player "Mila" who was selected once and
never played: only `redcat.player.<id>.redcat.player-options.v1` and an empty database
`redcat-recovery-saves-<id>` exist for her. The first player ("Speler 1", id `legacy`) keeps
the old key names.

**gen4** — the same with v1.0.1. Adds `redcat.highscores.v1` (the Highscores page was opened
once), the sound and input settings, and `playerAnimation` and `audio` in the save.

**gen5** — v1.0.8, two players, active player "Mila".

- "Speler 1" (id `legacy`): **adventure, in the middle of Het Kasteel** (`lvl01a`). Het Bos
  was finished through the mirror pickup and its own level script, the results bonus was
  added, the state was carried over. Saved after 97 s in the castle: score 825, 1 mirror part,
  4 lives, 4 potions, coins worth 30, 2 kills, `skill` 1, 12 items collected, one spider
  defeated, 4 doors open, save point `SavePoint1` reached. `entryState` holds the state on
  entering the castle. Recovery history: 3 checkpoints (two in `lvl00a`, one in `lvl01a`), so
  the "2 minuten geleden" choice exists. Has `redcat.adventure-revision.v1`, as after an
  imported backup.
- "Mila" (id `p_6f1d2c3a-…`): started an adventure in Het Bos, went back to the menu, then
  chose **Snelspel** > Het Bos on Makkelijk. That quick play replaced her save and her recovery
  history. Saved after 53 s: `difficulty` `Easy`, `scripts.replayLevel` `true`, score 180.
  Recovery history: one checkpoint, `clock` and `anchor` 47 (the seconds she had played before).
  Her highscore row is in `redcat.highscores.v1`.
- `redcat.settings.v1` `difficulty` is `Easy`: it follows the active player, not "Speler 1".

## How the files were constructed

`build-fixtures.mjs` in this folder builds all six. For each generation it exports that
revision of the port with `git archive` into `tools/out/legacy-research/export/` (the port's
repository is only read), imports the port's own modules in Node and calls them in the order
`main.js` of that revision does. There is no browser, no WebGL and no audio.

**Produced by running the port's own code of that revision:**

| Part | Code path |
| --- | --- |
| `save.game` (state, objects, scripts, VM, effects in the game logic) | `Gameplay.snapshot()` and `ScriptHost.snapshot()` after a simulated play: `ScriptHost.initialize/update`, `Gameplay.update`, `skipCutscene`, `setDoor`, `hurtEnemy`, `pickup`, the script natives `RcEnableSkill`, `RcSetSavePoint` (`callNative`) |
| Chapter end in gen5 | pickup of `ItemMirror1`, then the level's own script until `Gameplay.completed`; `awardLevelSummary()` (`debriefing.js`) |
| `redcat.progress.v1` | `readCampaignProgress`, `earnCampaignSkill`, `recordPlayedCampaignLevel`, `completeCampaignLevel` (`campaign-progress.js`) |
| `redcat.players.v1`, the per-player key names, the database names | `PlayerProfiles` (`player-profiles.js`): constructor, `create`, `select`, `key`, `recoveryDatabase`. The id factory is fixed so the files are reproducible |
| IndexedDB records | `RecoverySaves` (`recovery-saves.js`): `capture`, `advance`, `needsCapture`, with a memory object in place of the two IndexedDB calls of `IndexedDBRecoveryStorage` |
| When a save happens | `AutosaveClock` (`autosave.js`) and the recovery minute marks, as in `main.js` `frame()` |
| `redcat.highscores.v1` | `recordHighscore` (`menu-highscores.js`) |
| `settings.controlBindings` | `normalizeControlBindings` (`control-bindings.js`) |
| `save.playerMotion`, `playerAnimation.motion` | `PlayerController.snapshotMotion()` (`collision.js`), `playerMotion()` (`player-animation.js`) on a standing player |
| Field order of the save and of the settings | read from that revision's `main.js` text: the object literal of `adventureSnapshot()` and of `DEFAULTS` |

**Written by hand, following the code** (marked `HAND-BUILT` in the script):

| Part | Followed | Not exact |
| --- | --- | --- |
| Order and timing of the writes: page load, level start, save, player switch | `main.js` `store`, `saveGame`, `startLevel`, `selectPlayer`, `handleGameEvent`, the last lines of the file | only the storage-related statements are replayed |
| Settings values | defaults from `main.js`, then a few changed values | which values a visitor changes |
| `save.position`, `lastSafe`, `yaw`, `pitch`, `noClip`, `savedAt` | `adventureSnapshot()` | the player walks in straight lines; there is no collision world. Times start at a fixed date |
| `save.audio` | `GameAudio.saveState()` (`audio.js`): the music and the looping sounds the scripts started | `currentTime` is a guess; no one-shot sounds, no dialogue |
| `playerAnimation.pose`, `reactionPhase`, `attackSerial` | `snapshotPlayerAnimation()`, `ActorAnimator.snapshot()` | always a standing `idle` |
| `objects[].actorAge`, `game.footstepState` | set by the renderer and the footstep code before a snapshot | values taken from the port's browser-test reports |
| `objects[].fairyState` of `Fairy1` in gen5 | `NativeFairyEffect.snapshot()`, built the way the port's own `tests/save-import.test.mjs` builds it | one fairy only |
| `redcat.adventure-revision.v1` in gen5 | `PlayerProfiles.importAdventure()` stores `"p_" + UUID` | the value is fixed; no import was run |
| `redcat.desktop-intro-hint.v1` | `OpeningHint.remember()` stores `true` | when exactly it is shown |

**What a real browser would have and these files do not:**

- The renderer's state in the save: `game.spoutEffects` (one entry per particle emitter, up to
  0.37 MB in `lvl01a`), `objects[].animationPose`, `machinePose`, `effectAge`,
  `teleporterState`, `knightDebrisState`, more `fairyState`. All optional when the port loads a
  save (section 6.6). A real save of the same moment is therefore larger than these.
- In IndexedDB, properties whose value is `undefined` (section 7). JSON cannot hold them.
- Possibly other key order in `localStorage`, which has no defined order.
- The simulated player takes what it touches and nothing sees it from far away, so no damage
  was taken. Health is 10 in every file.

Saves written by a real browser engine, including the renderer's fields, exist in the port's
repository from its own automated tests (headless Chromium with a throw-away profile):
`temp_work/js-bundling-2026-10-26/browser-1793046337375/report.json` (`beforeUpgrade.save`,
`beforeUpgrade.history`, `beforeUpgrade.players`) and
`temp_work/scene-output/temp_work/campaign-settings-scenes/run-1793270200565/campaign-settings-scenes.json`
(`autosave.saved`). The shapes of the hand-built parts were compared with those.

## Checks

All six files were loaded with the v1.0.8 code of the port in Node
(`tools/out/legacy-research/verify-fixtures.mjs`, scratch): the player list is accepted (and
created for gen0–gen2), all seven saves pass `validAdventureSave`, `Gameplay.restore()` and
`ScriptHost.initialize()` without a script error, every history record is accepted by
`RecoverySaves`, and every save passes the port's strict import validator
(`createSaveExport` → `parseSaveImport`). That is a check of the files against the port's
code. It is not a test in a browser.

## Rebuild

```sh
node tests/fixtures/legacy/build-fixtures.mjs --repo "../RCSPOOK_NEW"
```

Needs git, tar and the port's checkout with its `node_modules` (three.js). Two runs give
byte-identical files.
