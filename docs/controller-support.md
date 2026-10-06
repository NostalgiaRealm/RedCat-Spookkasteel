# Controller support

Connect a controller, then press a button while the game window is focused.
The game accepts controllers that the browser or Electron reports with the
Gamepad API's `standard` mapping. This covers the common Xbox/PlayStation layout
when supported by the operating system and browser. Unmapped devices are ignored
rather than assigned potentially incorrect buttons. No custom remapping or
vibration is implemented.

| Control (Xbox / PlayStation position) | Action |
| --- | --- |
| Left stick | Move, with analog speed and an 18% radial deadzone |
| Right stick | Look; uses Settings → Kijkgevoeligheid |
| A / × (bottom face button) | Jump; ascend with no-clip; confirm in menus |
| B / ○ (right face button) | Descend with no-clip; back/cancel in menus |
| X / □ (left face button) | Use; hold two seconds to skip a scripted scene |
| Y / △ (top face button) | Switch first/third-person camera |
| RT / R2 or RB / R1 | Shoot; hold for charged shots once BIG BENG is earned |
| LB / L1 | Walk slowly while held |
| Start / Options / + | Pause/resume; skip intro/outro movies |
| Left stick or D-pad in menus | Move focus; left/right changes a selected setting |
| Right stick in menus | Scroll long panels |

Menu confirmation also toggles checkboxes and cycles closed select controls.
The highlighted control scrolls into view when focus moves. Saves, recovery saves,
settings, cheats, level choices and the debriefing continuation use the same menu
controls. Holding a button across a menu/level transition does not activate a
second action; release it before using it in the new screen. Losing the controller
that was being used pauses play. Losing an unused controller does not interrupt it.

Mouse, keyboard and touch remain available. Using a controller releases mouse
capture and hides touch overlays until a real pointer/touch or keyboard input
switches back. Scripted camera views and target locks reject controller look in
the same way as mouse look. Stick look is time-scaled, so frame rate does not
change its angular speed.

For web hosting, use HTTPS (or localhost for development). Some browsers require
a controller button press before exposing the device, and a real mouse click,
tap or keyboard gesture before audio or fullscreen can start. Applying settings
with a controller still saves them when fullscreen must wait for that gesture.
See the [Gamepad API guide](https://developer.mozilla.org/en-US/docs/Web/API/Gamepad_API/Using_the_Gamepad_API)
and [fullscreen activation requirements](https://developer.mozilla.org/en-US/docs/Web/API/Element/requestFullscreen).
Controller availability appears in Settings. Actual device/driver mappings still
need validation on each target platform; this does not constitute a new Mac or
Android package.

## Verification

Focused checks only:

```sh
node --test tests/gamepad-input.test.mjs tests/touch-intro-hint.test.mjs
node tests/controller-scenes.mjs
```

The unit checks cover deadzones, analog scaling, held shots/skip, action edges,
menu repeat, panel transitions, focus loss, multiple/sparse devices, disconnects,
API failures and long-menu scrolling. The browser suite injects a simulated
standard controller into an isolated Chromium profile and tests actual menus,
forest opening/skip, camera locks, gameplay input, no-clip flight, pause/resume,
reconnection and keyboard takeover. It also verifies the delayed ten-second
desktop onboarding hint and its persistence. Evidence is retained under
`current_work/controller-support-2026-10-03/`. These are simulated-controller
checks; physical-controller and Windows-device validation remain to be done.
No distribution packages were generated.
