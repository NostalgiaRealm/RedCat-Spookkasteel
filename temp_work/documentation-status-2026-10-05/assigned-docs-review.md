# Documentation status review — assigned feature/build notes

Date: 5 October 2026. This pass changed documentation only. No game, importer,
unit, browser or desktop tests were run, and no builds were made. Existing test
results remain labelled as recorded feature validation rather than new results.
The original eight documents are retained in `before/docs/`; existing backups
were not overwritten. `docs-status.diff` records the changes against those copies.

## Corrections and evidence

| Document | Corrected status | Current evidence inspected |
| --- | --- | --- |
| `docs/gameplay-reconstruction.md` | Recovered enemy movement/boss actions; final camera approach; harmless visual mushroom ribbons; bounded spouts; no-clip invulnerability; recovered portals; historical package/test statements | `src/script-camera.js`, `src/projectile-hazards.js`, `src/world.js` (`isPlayerInvulnerable`), `src/world-effects.js`, `docs/enemy-waypoint-movement.md`, `docs/zombie-activation-native.md`, `docs/mushroom-trail-native.md`, `docs/spout-effects-native.md`, `docs/portal-native-recovery.md`, `docs/portal-audio-native.md` |
| `docs/script-vm-investigation.md` | Explicit current parser/VM status; historical no-interpreter claim and research plan separated from current work; first collection count and instruction representation resolved | `docs/davi-format.md`, `docs/davi-vm-opcodes.md`, `src/script-host.js`, `tools/import_scripts.py` pipeline documented by complete grammar |
| `docs/source-fixes-2026-09-22.md` | Three-second original hold explicitly superseded by two seconds; former bat/spider/fairy/debris/spout gaps linked to their implemented follow-ups | `src/cutscene-skip.js`, `src/main.js`, newer movement/effect recovery notes |
| `docs/camera-native-status.md` | Catmull–Rom is an earlier implementation, not the current route; shared mouse/touch/controller ownership and protected camera-mode shortcut | `src/script-camera.js`, `src/camera-control.js`, `src/main.js` |
| `docs/campaign-menu-native.md` | Current played-history helpers; completion does not mark the successor played; old test results identified as historical | `src/campaign-progress.js`, `src/main.js`, `tests/replayed-level-intros.test.mjs` read only |
| `docs/replayed-level-intros-native.md` | Replay policy stated as implemented; suggested fixture list distinguished from actual coverage/results and full-playthrough validation | Current replay source and the recorded focused unit/browser cases; no reruns |
| `docs/building.md` | Moved project path; assets/data no longer ignored; Over display version separate from package metadata; retained `temp_work` diagnostics; mobile controls already implemented | `.gitignore`, `index.html`, `package.json`, `tools/package.mjs`, `Start-RedCat.sh`, `src/touch-controls.js` and touch documentation. Read-only `node --version`/`npm --version` returned 24.13.1/11.8.0 |
| `docs/portability.md` | Latest-save/localStorage versus recovery/IndexedDB; current mobile input and GPU streaming already present; remaining shell/device work kept explicit | `src/recovery-saves.js`, `electron/main.cjs`, `docs/touch-controls.md`, `docs/world-streaming.md` |

## Preserved limitations

Full campaign/native visual validation is still separate from targeted checks.
Portable collision and camera compensation, fixed-step effects, local random
streams, old-save reconstruction and optional original RCR import remain
documented limits. macOS arm64 packaging and actual hardware validation, and an
Android shell/lifecycle/audio-focus/device validation and signed APK/AAB, remain
future work. Existing browser touch input is not described as a shipped native
mobile app. Package creation was not part of this review.

## Documentation checks

Read every assigned document and compared the edited claims with current source
and newer evidence notes. All local Markdown links in the eight documents resolve.
A final stale-phrase search found only the genuine unverified full campaign
playthrough and explicitly corrected historical/unused-setting references.
