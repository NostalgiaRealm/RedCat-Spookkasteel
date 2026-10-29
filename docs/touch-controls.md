# Touch controls

In **Instellingen → Aanraakbediening**, select:

- **Automatisch · mobiel**: enable the overlay on mobile browsers. This is the
  default for a new or older settings record. Detection uses mobile user-agent
  information, iPad touch capabilities and coarse primary pointers without hover,
  rather than screen size alone. Electron remains on keyboard/mouse by default.
- **Aan**: enable touch controls on any device, including the desktop app.
- **Uit**: disable the overlay, even on a detected mobile device.

Apply the settings to save the preference in `redcat.settings.v1`. The explicit
choice survives reloading, level changes and loading a saved game. On mobile,
the **Menu** button remains available when the overlay is off, so settings can
always be reopened. Browser settings are local to that browser and origin.

## Actions

| Control | Action |
| --- | --- |
| Left stick | RedCat walks toward the stick's direction relative to the camera, at any angle; pulling back backs him up. How far you push sets the speed, and a light push also turns him more gently. A deliberate change from the original's digital steering (29 October 2026); in free flight the stick moves forward/backward and strafes. |
| Swipe the right-hand look area | Turn and look up/down, using the configured Kijkgevoeligheid. |
| Spring | Jump; becomes Omhoog with no-clip enabled. |
| Schieten | Hold to attack, using the existing aiming/target-lock system. |
| Overslaan · 2 s | Hold for two seconds to skip a cutscene; the existing progress ring shows the hold. Releasing early cancels it. |
| Lopen | Toggle slow walking: every direction, backing up included, at the original's walk-to-run ratio (0.61). |
| Camera | Switch first/third-person view. |
| Menu | Pause; access save/load, settings, cheats, restart and return to the main menu. |
| Omhoog / Omlaag | Ascend/descend in no-clip mode; the stick follows the view direction. |

Movement, looking, jumping and attacking support simultaneous fingers. No
pointer lock is needed in touch mode. Touch look uses the same camera controller
as mouse input, preserving fixed-camera timers, cutscenes and targeting locks.
The normal intro video, level cards and dialogs use their existing tappable UI.
Doors and buttons that activate on contact do not need a separate Gebruik
control. Save and load are available through Menu.

The level-ending overview displays **KLIK/TIK hier om verder te gaan** on all
devices. Click or tap the overview or its continue button after the short opening
delay. The background stretches to fill the
entire game window, including portrait and landscape. Text and icons retain
their proportions while rows spread over the available height. Portrait layout
follows the current window dimensions, also working without device orientation
information and in split-screen windows. Safe-area insets protect the text and
continue button while the artwork extends to the screen edges.

The original HUD scales to fit portrait screens, with enemy health above the touch controls. The layout supports portrait and landscape, accounts for safe-area insets and
keeps settings and pause panels scrollable on short displays. Native touch
scrolling is disabled only on the gameplay controls, not throughout the menus.
Held input is cleared when a pointer is cancelled or loses capture, when a
level/cutscene/input mode changes, on resize, and when the page loses focus or
goes into the background. Returning from the background requires resuming the
paused game.

## Implementation and focused checks

`source/touch-controls.js` provides device detection, pointer tracking and input
state. `source/main.js` combines that state with the existing keyboard/mouse
actions; the gameplay and physics systems receive the same inputs. Presentation
is in `src/touch-controls.css`; no asset conversion or packaging is required.

```sh
node --test tests/touch-controls.test.mjs tests/hud.test.mjs
node tests/touch-scenes.mjs
node tests/touch-menu-scenes.mjs
node tests/debriefing-layout-scenes.mjs
```

The browser check uses Chromium mobile emulation and actual multi-contact touch
events, plus cancellation and lifecycle checks. Physical iOS/Android devices
still need performance, audio/video and browser compatibility validation. This
change adds browser touch input; it does not produce an Android APK or iOS app.

For an existing website, run `npm run web:refresh` after editing the `source/`
modules, then upload the matching `index.html` and runtime `src/` directory
using the [hosting guide](nginx-hosting.md). No website staging directory is
updated automatically.

Browser API references: [Pointer Events](https://developer.mozilla.org/en-US/docs/Web/API/Pointer_events)
and [touch-action](https://developer.mozilla.org/en-US/docs/Web/CSS/Reference/Properties/touch-action).
