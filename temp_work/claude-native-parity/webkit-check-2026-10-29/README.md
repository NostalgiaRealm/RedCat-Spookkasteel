# WebKit check of the live website, 29 October 2026

Playwright's WebKit 26.0 build for Debian 12 (`~/.local/share/ms-playwright/webkit-2248`),
the engine behind Safari but not Safari itself, headless and with fresh profiles.

- `webkit-live-check.mjs`: intro, menus, Avontuur on Normaal and Het Bos on
  https://games.nostalgiarealm.com/redcatspookkasteel/ (1.0.7). Everything
  loaded and played (WebGL 2, WebM intro, WAV music and effects); no console
  errors or failed requests.
- `escape-pause-check.mjs`, `escape-webkit.json`, `escape-chromium.json`: the
  first Escape after the chapter started did not pause in WebKit; later ones did.
- `escape-trace.mjs`, `escape-trace-webkit.json`: the cause. The game was in
  browser fullscreen, and the browser used that Escape to leave fullscreen
  without passing it to the page. `pointer-lock-probe.mjs` ruled out the
  refused pointer-lock request.
- `escape-trace-webkit-fixed.json`: the same trace against the fixed local
  build, where leaving fullscreen opens the pause menu (see
  docs/startup-behavior.md).

Run with `PLAYWRIGHT_BROWSERS_PATH=$HOME/.local/share/ms-playwright`. Real Safari
on macOS or iOS was not tested.
