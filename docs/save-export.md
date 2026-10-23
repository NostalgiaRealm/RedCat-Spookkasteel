# Export and import an adventure

Open **Spelerlijst**, select the player whose saved adventure you want to keep,
then choose **Exporteren**. Selecting a player for export does not switch the
active player. Exporting copies the latest primary saved adventure; it does not
replace, delete or reload the current game.

The browser downloads a JSON file. Electron opens the operating system's save
dialog; Android opens its document picker. Cancelling a native
save dialog cancels the export; it does not start a second browser download.

A player without a valid saved adventure receives an explanatory message. The
filename includes the player's sanitized name and the export time, for example:

`RedCat-Spookkasteel-Rick-2026-10-20T123456Z.json`

## File format

The UTF-8 JSON object contains:

| Field | Meaning |
| --- | --- |
| `format` | Always `redcat-spookkasteel-save` |
| `formatVersion` | Export-container version, currently `1` |
| `exportedAt` | UTC timestamp in ISO 8601 format |
| `player.name` | Selected player's display name |
| `save` | Complete primary adventure snapshot, including its existing save-format version |
| `progress` | Campaign unlocks, earned abilities and played chapters |
| `options.difficulty` | Selected player's difficulty preference |
| `options.noClip` | Selected player's saved no-clip preference |

The file excludes other players, global display/audio/control settings, private
storage keys and the two/five/ten-minute recovery history. Existing save data is
validated and copied before serialization; malformed or non-finite data is
rejected instead of silently corrupting the export.

## Restore a backup

1. Open **Spelerlijst** and select the destination player. Use **Nieuw** first
   to restore into a separate player without replacing an existing adventure.
2. Choose **Importeren** and select a previously exported `.json` file.
3. Check the confirmation: it names both the backup’s player and the destination
   player. **Nee** cancels; **Ja** replaces only the selected player’s primary
   save, campaign progress and per-player difficulty/no-clip preferences.
4. Select that player with **OK**, then start the adventure normally.

Import does not rename the player, switch profiles automatically, change shared
sound/display/control settings, or replace other players. Existing local
2/5/10-minute recovery points are retained; they may initially lead back to the
adventure from before import. The backup itself does not contain recovery history.

The file must use the port’s version-1 export container and a supported adventure
snapshot. Original Windows RCR saves and arbitrary JSON files are unsupported.
UTF-8 files are limited to 32 MiB. Validation checks versions, chapter/script
identity, required puzzle globals, vectors, nested restore fields, finite values,
structural limits and unsafe property names before showing the confirmation.
Missing optional fields from older compatible exports remain supported.

Canceling, rejecting an invalid file or declining the confirmation changes no
progress. Storage writes retain the old raw values and roll back on a quota/write
failure; the old live world remains available when that transaction fails. After
success, an active player’s paused world is retired so it cannot overwrite the
import when quitting. Pending recovery writes finish before import. A per-player
revision also blocks stale live-world writes and reloads another browser tab
using that profile when the import commits. This is not a general simultaneous
multi-tab editing or cloud-sync system.

## Platform implementation

The desktop bridge exposes `window.desktop.exportSave({filename, text})`.
It accepts only calls from the main `redcat://game` frame, validates the JSON
export container and suggested filename, and writes only to the path returned by
the native save dialog. Existing files use the dialog's overwrite confirmation.

`AndroidHost.exportSave({filename, text})` uses the existing origin-restricted
WebView bridge. `MainActivity` launches
`ActivityResultContracts.CreateDocument("application/json")`, writes to the URI
the user chooses on a background worker, then returns success, cancellation or
an error to the requesting page. This uses Android's Storage Access Framework;
no general filesystem permission or arbitrary path-writing bridge is added.

`window.desktop.importSave()` opens Electron’s JSON file-open dialog and returns
only the selected file’s text and name. The same main-frame/origin restriction
applies. `AndroidHost.importSave()` opens `ActivityResultContracts.OpenDocument`,
reads only the user-selected URI on a worker and returns its text/name through
the restricted bridge. Neither adapter exposes arbitrary paths or asks for broad
storage permissions. The browser uses a normal JSON file input.

Both native adapters cap the actual UTF-8 read/write at 32 MiB. Other Android
bridge requests retain their 4 KiB limit; only the explicit save-export payload
uses the larger request allowance. Import/export native pickers share a busy
guard, and cancellation does not launch a fallback picker. Native errors appear
in Spelerlijst and do not modify the save.

Focused checks are in `tests/save-import.test.mjs`,
`tests/save-import-picker.test.mjs`, `tests/save-import-scenes.mjs` and the desktop
and Android adapter tests. They cover exported snapshots, malformed/unsupported
files, profile isolation, rollback, cancellation, native frame/path ownership,
Android request/result matching and pending-save ownership. The Chromium scene
loads a real exported engine snapshot through the normal menu, checks reload
persistence, portrait/landscape controls and an older tab’s stale-save protection.
Android document-provider/device verification is a separate platform check; no
new APK or desktop release package is required for the source changes.

API references:
[Electron save dialogs](https://www.electronjs.org/docs/latest/api/dialog#dialogshowsavedialogwindow-options)
and [Android document creation](https://developer.android.com/training/data-storage/shared/documents-files#create-file).
