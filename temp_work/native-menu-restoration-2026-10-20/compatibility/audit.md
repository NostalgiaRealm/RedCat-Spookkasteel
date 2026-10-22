# Menu compatibility audit — 2026-10-20

This audit describes the source at the start of the original-menu restoration.
Subsequent integration edits supersede the listed DOM structure.

## Existing state and save ownership

- `src/main.js` owns `mode`: menu, playing, paused, loading, intro, debriefing,
  error. Settings, Help, Cheats and dialogs are separate overlays.
- `PlayerProfiles` isolates each player's save, campaign, difficulty/no-clip,
  recovery database and introductory-control-hint flags. Shared settings remain
  at `redcat.settings.v1`; the legacy player's existing saves keep their old keys.
- `requestAdventureStart` waits for recovery initialization and checks player
  identity before showing any overwrite prompt. Chapter selection alone only
  announces/selects the chapter; it must not overwrite a save.
- New adventure clears earned abilities/recovery as implemented. Replaying a
  chapter passes `newAdventure: false`. Continuing restores the saved difficulty.
- Player switching waits for pending recovery capture and disposes the old
  retained world to prevent save ownership crossing profiles.
- Recovery access (roughly two, five and ten minutes) and the intro replay must
  remain available even though they were added by the port.

## Existing action hooks

Keep these IDs or update all consumers together:

- Main menu: `menu`, `start`, `continue`, `start-over`, `play-level`,
  `level-list`, `current-player`, `open-recovery`, `play-intro`.
- Shared menu actions: `open-settings`, `open-players`, `open-help`,
  `open-about`, `open-quit`.
- Player dialogs: all `player-*` IDs in `src/player-menu.js`, plus
  `close-players` and `open-players`.
- Quit dialog: `quit-confirmation`, `quit-question`, `quit-yes`, `quit-no`,
  `quit-status`.
- Saved-game protection: `new-adventure-warning`, `cancel-new-adventure`,
  `confirm-new-adventure`.
- Settings: `touch-controls-setting`, `difficulty`, `resolution`, `render-scale`,
  `render-scale-value`, `show-fps`, `fullscreen`, `camera-mode`, `fov`,
  `fov-value`, `sensitivity`, `volume`, `auto-intro`, `controller-status`,
  `open-cheats`, `apply-settings`, `close-settings`.
- Gameplay: `game-menu`, `pause`, `resume`, `save`, `load-save`,
  `pause-recovery`, `pause-settings`, `restart`, `return-menu`.

The original HUD, debriefing, loading screen, cutscene indicators, video screen,
and touch controls live outside `#menu` and can remain independent.

## Input and responsive behavior

- `syncTouchUI()` displays gameplay touch buttons and `#game-menu` during
  playing; active-controller mode temporarily hides touch UI.
- The touch Menu button pauses into the existing save/load/settings actions.
- Controller menu scopes are explicitly listed in `controllerMenuRoot()` and
  `controllerBack()`. Newly introduced dialogs must be included.
- `GamepadMenu` traverses available DOM button/input/select/link elements and
  respects hidden/inert ancestors. Hidden menu pages can therefore remain
  inside `#menu`. Newly selected pages should move focus intentionally.
- Preserve narrow-screen scrolling, touch target sizes and safe-area padding.
  Fixed 800×600 original coordinates require a responsive stage or scrolling.
- Key remapping integration must cover `readInput`, keydown camera toggling,
  the held cutscene-skip timer, and its displayed key/accessible label.
- Mouse shooting, gameplay touch and controller bindings remain independent
  of keyboard configuration.

## Audio already implemented

- Menu display: `menumuz.wav` loops; `rcmn9.wav` plays once each display.
- Chapter selection: `rcmn33..37.wav`, followed by `rcmn38..42.wav`.
- Starting from menu: `rcmn32.wav`.
- New adventure: `rcmn29.wav`.
- Settings: `mn_red24.wav`; OK `rcmn1.wav`; cancel/X `rcmn2.wav`.
- Difficulty chooser: `rcmn30.wav`; choices `mn_red02..04.wav`.
- Audio sliders: quieter `rcmn15.wav`, louder `rcmn16.wav`.
- FOV/sensitivity/render-scale: lower `rcmn23.wav`, higher `rcmn22.wav`.
- Player list: `rcmn13.wav`; New `mn_red26.wav` then `rcmn7.wav`;
  Remove `mn_red27.wav` then `rcmn8.wav`; yes/no `rcmn3/4.wav`.
- Quit: `mn_red23.wav`; yes `rcmn3.wav` then `mn_red28.wav`; no `rcmn4.wav`.

`MenuAudio` sequences by media `ended`, not estimated duration. Preserve its
cancellation generation and browser-autoplay rejection handling.
`SliderAudio` coalesces rapid slider changes while letting the current word end.

## Independent implementation added by this audit

- `src/control-bindings.js`: original duplicate-key rejection and configurable
  keyboard actions with the port's current defaults. Evidence:
  original `Settings/menu.ini` strings 6, 26, 27, `[InputKeys]`;
  `Settings/MenuCaps.ini` `[TfrmKeyConfig]`; `Settings/PlayerDef.ini`
  `[KeyBinds]`. These files establish the configuration facility, not a new
  movement model. Defaults retain WASD strafing, arrow turning, Shift walk,
  E use/skip, V camera, Control firing and Space jumping.
- `src/menu-audio.js`: independent effects/music gains, default 1, preserving
  the master volume and uninterrupted media sequencing.
- `src/slider-audio.js`: original softer/louder feedback for effects/music
  sliders.
- Six focused key-binding tests and fourteen menu-audio/welcome/slider tests
  passed. No package builds or gameplay-state changes.

## Focused integration verification

1. Inspect original menu pages at 800×600, desktop widescreen, portrait and
   landscape mobile sizes. Check images/fonts and button hover/down/focus.
2. Exercise each page transition, previous/next/help/quit and its voice order.
3. With an isolated existing save, browse unlocked chapters, cancel overwrite,
   and confirm raw save remains unchanged until an actual new start/save.
4. Create/select/delete profiles and verify each player's progress/recovery
   remains separate. Never use the user's live profile as a disposable fixture.
5. Adjust every retained setting, including touch, graphics and cheats.
6. Remap jump/use/camera, check duplicate rejection/default reset, save/reload
   preferences, and ensure no key-capture press leaks into gameplay.
7. Enter a level with touch enabled: touch movement/shoot/jump/skip plus Menu
   must remain usable. Return to the restored menu without losing save access.
8. Exercise controller navigation/Back across new pages and dialogs.

Existing `tests/level-selection-menu-scenes.mjs` assumes the old flat menu and
needs navigation updates. `tests/touch-menu-scenes.mjs` retains obsolete
`current_work` output paths; do not run it unchanged when new evidence belongs
in `temp_work`.

## Final integration verification (20 October 2026)

The scoped final browser pass completed successfully. Report: `final-2026-10-20T17-01-35-594Z/report.json`. These five checks cover only the final changes and do not repeat the earlier full menu pass.

- Startinfo presents native chapter and input artwork, saved player/score/difficulty, and keyboard/gamepad/joystick variants.
- Controller navigation can open/close Meer opties and reach restart without changing the saved adventure.
- Key-settings Help opens the original contextual topic, cancels active key capture, and returns to the unchanged draft.
- All eight original Startinfo Help links navigate to their intended topics and back.
- Quickplay uses RCMN43, shows Snelspel on the original loading screen, then starts the selected level.

There were no page errors or failed asset responses. The 800×600 Startinfo screenshot was visually inspected: chapter/control artwork and metadata fit cleanly. Added `summary` to GamepadMenu navigation, making Meer opties and its existing save/recovery actions reachable by controller. No remaining source-review blockers were found for profile saves, settings, keyboard/controller controls or touch Menu.

All browser storage was isolated under this compatibility directory. The source server was stopped in each harness `finally` block. No release builds were generated. Actual Android device/native file-dialog testing remains a separate platform check; the focused adapter checks are recorded in `integration-result.json`.
