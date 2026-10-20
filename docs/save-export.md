# Export an adventure

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

This change adds export only. It does not introduce an import operation or change
the game's normal local save/profile storage.

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

Both native adapters cap the UTF-8 file at 32 MiB. Other Android bridge messages
retain their 4 KiB limit; the larger limit applies only to the explicit save
export message. Native errors appear in Spelerlijst and do not modify the save.
The browser retains its normal Blob download.

The focused JavaScript checks cover payload bounds, frame validation, native
dialog cancellation/path ownership, Android request/result matching and profile
isolation. Android document-provider/device verification is a separate platform
check; no new APK or desktop release package is required for the source changes.

API references:
[Electron save dialogs](https://www.electronjs.org/docs/latest/api/dialog#dialogshowsavedialogwindow-options)
and [Android document creation](https://developer.android.com/training/data-storage/shared/documents-files#create-file).
