# Spelerlijst: original menu and separate adventures

Implemented in the source, without generating new packages. Open **Spelerlijst**
beside **Instellingen** at the bottom left of the main menu. Choose a name and
press **OK** to switch players. **Nieuw** adds a player; **Verwijderen** opens a
Ja/Nee confirmation before removing that player's adventure.

There are eight slots, with names up to twelve characters, matching the original
menu. Names must be nonempty and distinct, ignoring case. Canceling the list
leaves the current player selected; creating a name does not switch adventures
until OK is pressed. New/delete changes are committed when their own prompt is
confirmed. The final remaining player cannot be deleted until another is added.

## Original evidence

Research uses the locally installed `RcHcMenu.dat`, its Delphi form resources,
`Settings/MenuCaps.ini`, and the already imported menu artwork/audio. Addresses
below are virtual addresses in that executable, not offsets into the file.

| Action | Original recording(s) | Evidence |
| --- | --- | --- |
| Open Spelerlijst | `RCMN13.wav` | Main menu `btnPlayerClick`, `0x560d40` |
| Nieuw, then name prompt | `Mn_Red26.wav`, then `RCMN7.wav` | `0x5562a8`; name form show `0x554434` |
| Accept name | `RCMN1.wav` | Name prompt OK `0x5545d0` |
| Cancel name | `RCMN2.wav` | Name prompt cancel `0x554628` |
| Verwijderen, then confirmation | `Mn_Red27.wav`, then `RCMN8.wav` | `0x555fc8`; confirmation helper `0x554b4c` |
| Confirm deletion / cancel deletion | `RCMN3.wav` / `RCMN4.wav` | Shared confirmation form handlers |
| Accept selected player | `RCMN1.wav` | `0x55646c`, literal at `0x556620` |

The port waits for the complete Nieuw/Verwijderen recording before opening the
next prompt and playing its instruction. Escape during that announcement cancels
the pending prompt. Audio failure does not prevent opening it. The list's X and
Annuleren use the port's existing `RCMN2.wav` cancel convention; the original
inherited list-cancel handler at `0x54ee94` closes through `0x54f018` without an
explicit voice call in that handler.

Original resources used:

- `02230000.png` / `02230001.png` / `02230002.png`: player-list paw button states.
- `editbgnd.png`: original 765×574 player-list background. Its constructor at
  `0x5552a0` uses the background resource at `Data + 0x12c`.
- `messbgnd.png`: original 440×330 name/delete prompt background, `Data + 0x128`.
- `00040000..2.png`: original generic Nieuw/Verwijderen buttons (`Data.gdfBtn`).
- `02170000..2.png` and `02160000..2.png`: OK/Ja and Annuleren/Nee paw buttons.
- `menu-logo.png`: original RedCat logo in each prompt.

`MenuCaps.ini` positions the main Spelerlijst button at `(176,536)`, beside
Instellingen at `(0,536)`. The port anchors this pair to the window's bottom left
and adapts the layout for touch, portrait and short landscape windows. Names and
controls remain accessible HTML rather than a fixed-size bitmap of the form.

The `TfrmPlayer` resource has `Player1` through `Player8`; its handlers scan eight
slots. The name field's `MaxLength` resource at file offset `0x1c3511` is 12.
Disassembly, strings and artwork contact sheets are retained under
`temp_work/player-profiles-native/`.

## Save ownership and migration

The pre-existing **port** adventure is adopted as **Speler 1**. Its save,
campaign progress and recovery database remain in place; migration never copies
or discards them. This is not an importer for original Windows-game saves.

`src/player-profiles.js` stores a versioned player list and selected ID under
`redcat.players.v1`. Names are display text; stable generated IDs own the data.

| Data | Ownership |
| --- | --- |
| Current save, inventory, health, lives, score, puzzle/script and actor state | Per player, through the existing complete adventure snapshot |
| Unlocked chapters, played-level tutorial flags, earned abilities | Per player |
| Difficulty and no-clip preference | Per player |
| First-play desktop/touch hints | Per player |
| Two-, five- and ten-minute recovery history | Separate IndexedDB database per player |
| Display, resolution, audio, camera and input preferences | Shared on this device/browser origin |

The migrated player keeps the existing `redcat.save.v1`, `redcat.progress.v1`,
hint keys and `redcat-recovery-saves` database. Other players use
`redcat.player.<id>.<base-key>` and `redcat-recovery-saves-<id>`. Gameplay options
are kept in the corresponding `redcat.player-options.v1` key. Deletion removes
only the selected player's keys and recovery database. If an open window blocks
cleanup, the menu reports it instead of deleting other data.

Switching is allowed only from the main menu. It saves the previous world under
its original owner, drains pending recovery writes, loads the next history,
commits the selected player, and disposes the old world. A world-owner guard
prevents quit/autosave callbacks from storing that retired world in another
player's slot. Failed metadata writes leave the prior selection/list intact;
stale writes from another window are rejected. Corrupt profile metadata is
reported and preserved rather than replaced with an empty list.

Storage remains local to the desktop installation or browser origin/profile.
It is not account authentication or synchronization between devices.

## Focused verification

```sh
node --test tests/player-profiles.test.mjs
node tests/player-menu-scenes.mjs
node tests/player-menu-lifecycle-scenes.mjs
```

The unit checks cover migration, names and slot limits, separate keys, failed
writes, deletion, orphaned data and stale metadata. The browser check uses an
isolated profile to exercise the actual menu and load real Forest saves for two
players: different scores, abilities, difficulty and recovery points survive
switching/reloading. It also checks the original voice sequences, canceled
prompts, deletion isolation and desktop/mobile layouts. The lifecycle check
delays a recovery write while switching, deletes the active player, and checks
an eight-player list in short landscape and portrait windows. Evidence is retained in
`temp_work/player-profiles/`. No original user saves are changed by these checks.
