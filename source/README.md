# Editable JavaScript source — not loaded by the running game

This folder contains the 139 individual JavaScript modules used to develop and
maintain the port. **These files are NOT loaded individually to run normal
gameplay.** The game loads the generated
[`src/game.bundle.js`](../src/game.bundle.js) instead.

Edit these files when fixing or extending the game, then prepare the runtime:

```sh
npm run web:refresh
```

Run that command from the project root. It combines the modules and the required
Three.js code into the bundle and updates the page's cache revision. The source
map in `src/` lets developer tools relate errors to these readable modules.
Do not edit the generated bundle directly: preparation replaces it.

`npm start`, `npm run serve`, the desktop packaging helpers and Android asset
preparation perform this preparation step automatically. They therefore need
this folder on the development machine **before launching or packaging**.
An already prepared website or packaged application does not need `source/`.
Developer tests and explicitly unbundled debugging sessions may import these
modules directly; they are separate from the ordinary game loader.

Keep this folder in source control. Moving it does not change save formats,
player profiles or the browser/application storage origin. See the
[bundling guide](../docs/javascript-bundling.md) for preparation and deployment
details, and [`src/README.md`](../src/README.md) for the runtime files.
