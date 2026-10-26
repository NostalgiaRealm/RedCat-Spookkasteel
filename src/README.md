# Runtime files

The normal game page loads **`game.bundle.js`**, the generated JavaScript runtime,
and the CSS stylesheets in this folder. `game.bundle.js.map` is optional debugging
information; ordinary gameplay does not request it.

The editable individual JavaScript modules live in [`source/`](../source/).
**They are not loaded individually by the running game.** Edit those modules
and run `npm run web:refresh` from the project root to regenerate this folder's
bundle and the matching `index.html` cache revision. The normal development
launch and packaging helpers already run preparation automatically.

Deploy the matching `index.html`, this `src/` folder and the other documented
runtime assets together. The editable `source/` folder is not required in a
prepared website or packaged app. Keep it in the development checkout for
future fixes, tests and rebuilds. See the [build guide](../docs/building.md) and
[web-hosting guide](../docs/nginx-hosting.md).
