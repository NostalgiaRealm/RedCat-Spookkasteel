# Original menu audio

The menu loops the complete imported `assets/audio/menumuz.wav` through the
buffered music player. It starts when the main menu is shown and stops for movies
and levels. Browser autoplay restrictions may require a click or keypress first.

Player selection of an unlocked level plays these voice clips consecutively,
advancing on the WAV's actual end event. Hovering and automatic selection do not
speak. Selecting another level cancels the previous announcement.

| Selection | First clip | Second clip |
| --- | --- | --- |
| Het Bos | RCMN33.wav | RCMN38.wav |
| Het Kasteel | RCMN34.wav | RCMN39.wav |
| Het Kerkhof | RCMN35.wav | RCMN40.wav |
| De Grotten | RCMN36.wav | RCMN41.wav |
| De Kasteel Toren | RCMN37.wav | RCMN42.wav |

Starting or continuing a level from the main menu plays `RCMN32.wav` before
level initialization. Restarts from the pause menu and chapter transitions do
not play this cue. Clicking **Start opnieuw** plays `RCMN29.wav` alongside the
existing confirmation dialog. Opening **Instellingen** plays `mn_red24.wav`,
including from the pause menu, without resuming paused gameplay audio.

Menu voices use a separate channel, follow the volume setting and pause when
the app loses focus. A rejected play request or media error releases a pending
start operation rather than blocking the game. All files were already imported;
no asset conversion was needed. Descriptive spoken text supplied alongside file
names is documentation only, not a subtitle or UI change.

Focused checks: `node --test tests/menu-audio.test.mjs`; menu wiring check in
`temp_work/menu-audio/browser-check.mjs` (voice elements simulated, real menu
handlers and music request). No new builds created.

## Stoppen confirmation

The top-right **Stoppen** button uses the imported purple-cross `02160000/1/2.png`
normal/hover/pressed artwork. The confirmation uses `messbgnd.png`, the original
Dutch prompt from `Settings/menu.ini` MENUSTRINGS 15, and the original paw
buttons `02170000/1/2.png` (Ja) and `02160000/1/2.png` (Nee). The 440×330
layout places `menu-logo.png` at the top left and the two buttons along the
bottom, matching the original prompt. It scales to fit desktop and mobile
windows; labels are accessible HTML. Besturing and Over retain the plain
`00060000/1/2.png` paw artwork.

- Opening the confirmation plays `Mn_red23.wav`.
- **Nee**, Escape, or controller Back plays `RCMN4.wav` and dismisses it.
- **Ja** stops menu music and plays `RCMN3.wav`, then `Mn_red28.wav`. Only after
  both clips finish does it save pending progress and request platform closure.
  Repeated clicks cannot start duplicate exit sequences.
- Electron closes through its existing quit bridge; Android uses its host quit
  action. The web version calls `window.close()`. A browser that disallows closing
  a manually opened tab leaves the confirmation visible with a manual-close
  message, rather than pretending the tab closed.

Focused checks: `tests/quit-menu.test.mjs` and
`temp_work/menu-stop/browser-check.mjs`. Browser verification simulates voice
completion and closure to verify ordering without closing the user's session.
Desktop/mobile screenshots and the imported-art contact sheet are retained in
`temp_work/menu-stop/`. No new builds created.

## Slider voice feedback

Changing **Geluid** down plays `RCMN15.wav` (Zachter); changing it up plays
`RCMN16.wav` (Harder). **Kijkgevoeligheid**, **Gezichtsveld**, and **Renderschaal**
use `RCMN23.wav` (Lager) and `RCMN22.wav` (Hoger), respectively.

Feedback follows `input` events for pointer, touch, keyboard and controller
adjustments. Each word finishes before another slider word plays. Repeated steps
in the same direction are coalesced, and only the latest changed direction waits.
Opening settings, assigning saved values and unchanged values do not trigger
slider feedback. Leaving settings cancels pending feedback. The sound slider
previews menu audio at its current value; closing without applying restores the
saved volume. Zero volume remains silent.

Focused checks: `tests/slider-audio.test.mjs` and
`temp_work/slider-audio/browser-check.mjs` (actual controls with simulated voice
playback). No new builds created.

## OK and X buttons

The settings apply button is labelled **OK** and plays `RCMN1.wav` on click.
Applying settings does not cut off this confirmation voice. The X buttons in
Instellingen, Besturing, Over and the recovery-save chooser play `RCMN2.wav`
while closing their screen. The Cheats back arrow is unchanged.

Focused browser verification: `temp_work/menu-ok-close/browser-check.mjs`
checks the label, applied settings, all four X actions, and that the OK cue
remains active after settings close. No new builds created.

## Main-menu welcome

Displaying the main menu on startup (when the intro is skipped), after the intro,
or on return from gameplay plays `RCMN9.wav` once alongside the looping menu
music. It does not loop or restart on focus changes, chapter selection, or closing
an overlaid submenu. Browser autoplay denial defers the welcome until an input
gesture; leaving the menu or starting another announcement cancels it.

Focused checks: `tests/menu-welcome.test.mjs` and
`temp_work/menu-welcome/browser-check.mjs`.

## Difficulty selector

Opening the difficulty picker with a pointer or keyboard plays `RCMN30.wav`.
Choosing Makkelijk, Normaal or Moeilijk plays `mn_red02.wav`, `mn_red03.wav`
or `mn_red04.wav`, respectively. Choice announcements use the change event,
including controller changes. Programmatic settings initialization stays silent.
The opening cue uses pointerdown rather than click so a picker's trailing click
cannot replace the newly selected difficulty announcement.

Focused browser check: `temp_work/difficulty-menu-audio/browser-check.mjs`.
