Version 1.0.1 brings back the original game's menus and Dutch Help, adds player-save export, and introduces selectable MSAA with improved automatic graphics adjustment. The port's additional settings, touch controls, controller support and separate player progress remain available.

## Original Menus & Artwork

- **Restored the original menu flow:** Hoofdmenu now offers Avontuur, Snelspel and Highscores, with the original Volgende/Vorige navigation, difficulty selection and Startinfo screens. Returning players can continue their adventure; Snelspel selects an unlocked chapter. Existing restart and save-overwrite confirmations remain in place.
- **Used the original menu artwork throughout:** Backgrounds, logos, normal/selected/disabled button states, chapter previews, locked-level cards, difficulty ghosts, settings panels and control-device illustrations now follow the original layout. The interface scales for desktop and mobile windows. All 124 imported menu PNGs were checked against the original artwork.
- **Restored the matching spoken responses:** Menu choices, navigation, Help, difficulty, input and quality selections use the original voices. Avontuur and Snelspel have their distinct launch announcements; the loading screen also identifies Snelspel correctly. Music and effects have separate volume controls, with changes applied without restarting a playing announcement or song.
- **Added the original-style highscore screen:** The ten-row list includes the shipped starting names and scores. The port keeps each player's best score and actual chapter, avoiding duplicate entries for the same player.

## Original Help, Modern Controls & Settings

- **Ported the original Dutch Windows Help:** All 38 mapped topics are available in a local viewer with search, topic links, back navigation and context-sensitive opening from the menu. Windows WinHelp and Microsoft Agent are no longer needed to read them. Two malformed original topic links were repaired; the original text is retained.
- **Added keyboard configuration in the original menu style:** Eleven useful actions can be rebound, with default bindings available. Existing mouse, controller and mobile gameplay controls remain usable, including the touch Menu button.
- **Clarified the active control method:** Startinfo identifies computers as **Muis en toetsenbord** and touch controls as **Aanraakscherm**, using KDE Breeze touchscreen artwork with its attribution and license. An active controller takes priority; disconnecting it restores the appropriate display.
- **Separated the added settings:** **Geavanceerd**, under Beeldkwaliteit, contains Resolutie, Renderschaal and MSAA. **Meer instellingen**, below Muziek, contains the other added options, cheats, Besturing and Over. Switching sections preserves pending choices; OK applies them together and Annuleren discards them. The low/normal/high quality presets use 50%/75%/100% rendering scale.

## Player Save Export

- **Added Exporteren to Spelerlijst:** Select a player and export their latest saved adventure to a JSON backup without switching the active player or changing their progress. The file contains that player's current save, campaign progress and relevant per-player options.
- **Integrated platform save dialogs:** Browsers download the file; Electron uses the operating system's save dialog. The Android source includes a document-picker adapter. Cancellation leaves the save untouched, and failed exports display an explanatory message.
- **Kept exports scoped to the selected player:** Other players, global settings and the two/five/ten-minute recovery history are excluded. This release adds export only; importing an exported backup is not yet implemented. See [save export](https://github.com/NostalgiaRealm/RedCat-Spookkasteel/blob/v1.0.1/docs/save-export.md) for the format and limitations.

## MSAA & Automatic Graphics Adjustment

- **Added selectable anti-aliasing:** Geavanceerd offers **Uit, 2x, 4x and 8x MSAA**, with 4x requested by default. Changes apply with OK without restarting the level. Unsupported sample counts are disabled; a saved preference from another device falls back to a supported value without exceeding the requested count.
- **Preserved the game's colors and effects:** The multisampled display path retains existing black levels, opaque colors and translucent/additive blending. Its buffers resize with rendering resolution and are released when MSAA is disabled. Graphics-context loss and restoration are handled without retaining stale resources.
- **Disable MSAA when performance stays below 30 FPS:** The first automatic render-scale reduction also switches MSAA off. Further reductions continue in 25-percentage-point steps down to 25%. Loading, pausing and isolated hitches do not trigger the adjustment; MSAA can also switch off if scale is already at its minimum.
- **Show and save the actual reduced scale:** The settings slider and value now reflect automatic reductions, such as 75%, 50% or 25%, instead of continuing to show 100%. Both the reduced scale and MSAA-off state persist across level changes and restarts. Applying other settings does not apply the reduction twice. Quality is not raised automatically; users can restore their preferred scale or MSAA manually.

## Documentation & Release Scope

- **Updated version information to 1.0.1:** The menu and desktop package metadata agree. The Android source uses version name 1.0.1 and version code 3.
- **Documented the menu reconstruction, save-export format and graphics changes:** New notes record original executable/help evidence, deliberate portable adaptations, MSAA behavior and focused verification. The README and build instructions describe the new interface and options.
- **Focused checks cover the changed systems:** Menu navigation, voices, Help links, player isolation, export, keyboard bindings, responsive layouts and graphics settings were checked. Hardware-rendered MSAA checks covered actual 2x/4x/8x attachments, color/blending preservation, resizing and context restoration. Deliberately slowed browser runs verified 75%/50%/25% automatic adjustment, persistence and manual MSAA re-enabling.
- **Desktop downloads retain the existing platform scope:** Linux, Windows and macOS packages are provided for x64 and ARM64. Windows packages are unsigned; macOS bundles built on Linux are unsigned and not notarized. Linux x64 has local packaged-runtime coverage; Windows, macOS and ARM hardware still need native runtime validation. The Android wrapper remains source work, not an APK/AAB release.

## Technical Notes

- These notes cover changes after the **1.0.0 release commit, `46764698`**. Earlier CPU, memory, room-streaming and browser-cache fixes remain included, but are not repeated as new 1.0.1 features.
- The original menu was reconstructed from the shipped executable, form resources, menu configuration and help files. Portable quality presets, modern controls, save export and MSAA are adaptations, not claims about the original DirectDraw renderer.
- Existing saves and deliberate gameplay/audio scheduling changes are retained. Focused checks and a packaged Linux startup/save check are not a new complete campaign playthrough or certification of every target device.
