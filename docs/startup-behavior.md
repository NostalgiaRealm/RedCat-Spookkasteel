# Intro, first-time control help and fullscreen

The original intro starts automatically unless the player has disabled
"Originele intro bij opstarten" or the URL includes `?skipIntro`. Browser
playback first tries sound at the chosen volume. If audible autoplay is blocked,
it retries muted and offers **Geluid inschakelen**. Clicking or tapping that
button enables sound without restarting the movie. If the browser also blocks
muted playback, **Afspelen** remains available. Unsupported WebM playback uses
the imported MP4 instead. Desktop playback continues to start with sound.

Skipping or ending a movie cancels pending playback attempts. Starting another
movie resets temporary mute state; the user's chosen volume is preserved.

The touch-control hint is now limited to the first fresh start of **Het spookbos**
with touch controls active. It waits for the actual opening cutscene and authored
camera to return control, then appears for ten seconds. The browser/app profile
stores `redcat.touch-intro-hint.v1=true` when shown, so later cutscenes, level
changes, restarts, save loads and page reloads do not repeat it. Clearing the
profile's local storage resets that first-time status. The desktop “Klik om rond te kijken”
hint follows the same rule, stored independently as `redcat.desktop-intro-hint.v1`.
It is no longer shown immediately at every level start. If a controller is in use
when the opening ends, the desktop hint shows controller controls instead.

Fullscreen defaults on when no saved choice exists; a saved `false` remains
windowed. The desktop shell applies the choice at startup. Browsers wait for an
eligible click, tap or keypress, because fullscreen needs user activation. Media
unmuting and pointer lock run before the fullscreen request. After entering
fullscreen once, leaving it does not trigger automatic re-entry. Settings can
always explicitly change the preference where the Fullscreen API is supported.

Browser policy references:

- [Chrome autoplay policy](https://developer.chrome.com/blog/autoplay/)
- [WebKit inline video and gesture policy](https://webkit.org/blog/6784/new-video-policies-for-ios/)
- [Fullscreen activation requirements](https://developer.mozilla.org/en-US/docs/Web/API/Element/requestFullscreen)
- [Pointer lock and fullscreen ordering](https://developer.mozilla.org/en-US/docs/Web/API/Element/requestPointerLock)

Focused verification: `tests/intro-playback.test.mjs`,
`tests/fullscreen-preference.test.mjs`, `tests/touch-intro-hint.test.mjs`,
`tests/intro-scenes.mjs` and `tests/startup-ui-scenes.mjs`. Browser checks use
fresh Chromium profiles with audible autoplay restricted; mobile layout/input
is emulated. The desktop startup check uses the Linux Electron shell. Evidence
is retained under `current_work/intro-autoplay-2026-10-02/` and
`current_work/startup-ui-2026-10-03/`. No packages were generated.
