# JavaScript runtime bundle

The editable game modules are kept separately in [`source/`](../source/README.md).
They are **not loaded directly by ordinary gameplay**. Before launching from the
checkout or packaging it, the preparation tools read those modules and combine
the browser entry and Three.js into
`src/game.bundle.js`. The HTML loads this single file. This reduces startup
requests and JavaScript transfer size, especially over HTTP and in Android's
local WebView. It does not change the game's per-frame rendering or simulation
work, and is not a claim of higher gameplay FPS.

The initial 26 October bundle combined **141 modules** (139 game modules and
two Three.js modules): **3,235,163 source bytes → 1,205,774 bundled bytes**, a
62.7% reduction before HTTP compression. Ordinary startup needs one JavaScript
request instead of 141. Future edits can change these exact sizes.

## Preparing and deploying

Run after source edits, before manually copying website files or invoking
electron-builder directly:

```bash
npm ci
npm run web:refresh
```

`npm start`, `npm run serve`, the desktop packaging helpers and Android asset
preparation already run the refresh automatically. Copy the matching
`index.html` and complete runtime `src/` directory together, including
`game.bundle.js`, `game.bundle.js.map` and CSS; retain the other existing
deployment directories. The separate `source/` directory is needed to edit,
test or regenerate the bundle, but is excluded from normal desktop/Android
packages and is not needed on a static webhost. The bundle is generated output:
edit `source/`, not `src/game.bundle.js`.

`npm start` and `npm run serve` read `source/` during their automatic preparation
step. That development step is distinct from running the prepared game: the
browser/WebView/Electron renderer executes the resulting bundle. Tests and
explicit debugging imports may load individual modules deliberately.
The independent `RC_ACTOR_TEST`, `RC_COIN_TEST` and `RC_SHOVE_TEST` laboratories
keep their own source layouts and do not use the main runtime bundle.

esbuild is pinned in the development dependencies and is needed only on the
machine preparing the files. The deployed website, Electron app and Android
app use the generated JavaScript without a Node/esbuild runtime requirement.
Three.js licensing information stays in the distribution and its license
comments remain in the bundle.

## Compatibility and caches

- The same `source/main.js` entry and initialization order are bundled as ES
  modules, including the save/profile/export circular dependencies.
- Property names and storage keys are never mangled. Original function and
  class names are retained. Asset URLs remain relative to the same document.
- Browser origin, Electron's `redcat://game/` origin, Android's local origin,
  localStorage keys, IndexedDB databases, player IDs and save schemas are
  unchanged. Existing saves require no import, conversion or data clearing.
- The bundle, source map and HTML use a revision derived from the complete
  validated source snapshot, stylesheet contents and bundler configuration.
  Editing a dependency changes the revision even without a version bump.
- `source/` modules remain revisioned in the import map for tools and debugging;
  ordinary gameplay does not request them separately. Generated files are
  excluded from source discovery so repeated preparation is deterministic.
- The browser fetches the external source map only when debugging. Its URL
  receives the same revision as the bundle.

Keep the [existing Nginx HTML revalidation and atomic deployment rules](nginx-hosting.md).
Bundling prevents an old individual cached module from being mixed into the
new runtime; it cannot make a partially uploaded deployment atomic.

## Focused verification

`tests/runtime-bundle.test.mjs` checks actual profile/save/export modules,
original save/export bytes, recovery namespaces, identifier/property behavior,
side effects, deterministic rebuilding and failed-build preservation.
`tests/web-cache.test.mjs` covers dependency revisions and validation.
`tests/android-assets.test.mjs` requires the bundle in offline runtime staging.

The browser checks are `tests/runtime-bundle-scenes.mjs` (unbundled-to-bundled
save/profile/recovery continuity and gameplay) and `tests/web-cache-scenes.mjs`
(cached 0.9.9 module reproduction followed by ordinary current-save loading).
They use isolated profiles and retain evidence under `temp_work/`; they do not
modify the user's browser saves. The 2026-10-26 validation passed:

- 18 focused unit/preparation checks.
- All five levels loaded and rendered; desktop movement/shooting and mobile
  simultaneous movement/look, shooting and jumping worked.
- A historical save survived the unbundled-to-bundled upgrade byte for byte,
  with separate players and 2/5/10-minute recovery history intact.
- The old separately cached-module regression passed with the new loader.
- Electron's normal Continue action restored the same save using its existing
  custom origin, then rendered and saved on pause. This used an isolated
  profile and a software renderer under Xvfb, not a performance benchmark.
- Android runtime staging included matching HTML, bundle and source map.

See the [consolidated verification record](../temp_work/js-bundling-2026-10-26/verification-summary.json)
and linked evidence. No release packages were rebuilt, no live user profile
was modified, and these focused checks are not a complete campaign playthrough.

Implementation: [bundle generation](../tools/runtime-bundle.mjs),
[cache preparation](../tools/refresh-web-cache.mjs).
Bundler semantics: [esbuild's official API documentation](https://esbuild.github.io/api/).

## Separate source-folder follow-up — 26 October 2026

All 139 editable game modules moved from `src/` to `source/` without changing
their bytes. The regenerated executable bundle is identical apart from its
source-map reference. Importers, tests and preparation now use the new editable
path; runtime URLs, assets, storage keys and save formats are unchanged.

The follow-up passed 30 focused bundle/cache, Android host/staging and package
configuration checks. A prepared runtime tree containing no `source/` directory
loaded an older save without changing its stored bytes and rendered all five
distinct levels. Its only game JavaScript request was `src/game.bundle.js`; a
request for `source/main.js` correctly returned 404. Staging produced 2,950
files / 201,143,276 bytes. These are source/staging checks, not newly built APKs
or desktop packages, a full campaign run or hardware performance results.

See the [bundle comparison](../temp_work/source-layout-2026-10-26/bundle-code-comparison.json),
[staging/configuration checks](../temp_work/source-layout-2026-10-26/packaging-review.json),
[browser evidence](../temp_work/source-layout-2026-10-26/browser-1793049972136/report.json)
and [documentation review](source-layout-and-documentation-review.md).
