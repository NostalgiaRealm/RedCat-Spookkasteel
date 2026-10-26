# Actor comparison test room

This isolated room displays thirteen unused character, enemy and enemy-machine models shipped with RedCat Spookkasteel beside their verified campaign counterparts. Its 26 selectable exhibits use the original imported geometry, textures and embedded animation clips. Each unused model stands to the left of its campaign counterpart. The gallery positions are newly arranged for inspection; they are not recovered campaign placements.

Both sides are animation previews without combat AI. No separate native fighting behavior was verified for the unused variants. Models without clips remain static. Gallery clip selection, pause, reset and repeated playback are preview controls rather than claims about original gameplay.

## Launch

From this directory, run:

```sh
npm start -- --ozone-platform=wayland
```

The test wrapper uses its own temporary profile so the gallery is isolated from normal campaign saves and settings. It contains its own copies of the required assets and port modules. Electron is resolved from the parent project’s `node_modules` (or an installation in this folder); no live source or asset imports reach into the main game. This project must already have its desktop dependencies installed.

## Controls

| Control | Action |
| --- | --- |
| WASD | Move / strafe |
| Up / down; left / right arrows | Move forward / backward; turn |
| Mouse | Look |
| V | Toggle first / third person (retained when resetting the room) |
| Space | Jump |
| Shift | Walk slowly |
| Ctrl / mouse click | Shoot |
| 1–9 | Select one of the first nine exhibits |
| `[` / `]` | Select the previous / next model |
| E | Select the next embedded clip for the selected model |
| P | Pause / resume exhibit animations |
| R | Reset the test room |
| Esc | Pause and open the model / clip selection panel |
| F11 | Toggle fullscreen |

## Unused models and embedded clips

Durations are rounded to three decimals. Clip spelling and capitalization come from the imported source assets.

| Model | Embedded clips | Imported scale | Notes |
| --- | --- | ---: | --- |
| `knight2` | None | 1 | Alternate static knight pose; same topology, UVs and texture as the used knight. |
| `knight3` | None | 1 | Another static knight pose with the used knight texture. |
| `k_active` | None | 1 | Preposed knight model with only two bones. |
| `spider` | `Death` 2.000 s; `Shoot` 2.000 s | 1 | Alternate spider with a different texture and pose from the colored enemies. |
| `bat` | None | 3 | Static bat; same texture as `batfly`. |
| `batfly` | `fly` 2.000 s | 2.5 | Single-clip animated bat variant. |
| `maxtest1` | `test` 1.000 s | 1 | Max test model; same topology and UVs as `maxj`, different texture and motion. |
| `fep_test5` | `test` 1.333 s | 1.9 | Early carnivorous plant; matches the final `plant` topology, UVs, vertex bone assignments and texture pixels. Its separate gameplay behavior is unverified. |
| `brutus` | `shoot1` 1.467 s | 1 | Alternate Brutus; same topology and UVs as `brutusm`, different texture, pose and motion. |
| `redcat2` | 16 clips, listed below | 1 | Alternate RedCat with different geometry and several different clips/timings. |
| `whizztest8` | `idle` 1.000 s | 1 | WhizzKitty test model; paired with the campaign's caged `wkkooi` actor. Its separate gameplay behavior is unverified. |
| `tstwitch` | None | 1* | Static witch test model with fewer vertices and bones than the used witch. |
| `mxmach` | `shoot` 2.000 s | 1 | Unused animated machine; paired with the campaign assembly of `turbot`, `turtop`, `brcrate` and `maxd`. |

`redcat2` contains `fall2`, `fall1`, `strafer`, `strafel`, `jump2`, `jump1`, `re-spawn`, `shoot3`, `shoot2`, `shoot1`, `charge`, `death`, `hit`, `walkbw`, `walkfw` and `idle`. All last approximately 0.933 s except `death` (2.600 s) and `hit` (1.067 s). It includes `shoot2` and `shoot3`, whereas the final RedCat model includes `walkbwl` and `walkbwr` instead.

Transforms use each model's own original actor INI where present. Twelve imported models have initial rotation `[-90, 0, 0]` degrees. *No own actor INI exists for `tstwitch`; its scale 1 and imported rotation `[0, 0, 0]` are importer defaults, not recovered authored settings.* The gallery rotates `tstwitch` by −90° around X before placing her on the floor, so she stands upright and faces the approach aisle. This display adjustment leaves the source model unchanged.

## Campaign comparison pairs

Exhibits 1–13 retain the unused models in the order above; exhibits 14–26 contain their campaign counterparts in the same order. The selector identifies each entry by its pair number and role. Each pair is physically adjacent, and selecting either side moves RedCat to a shared approach position where both are visible.

| Pair | Unused model | Campaign counterpart | Campaign scale |
| --- | --- | --- | ---: |
| 1 | `knight2` | `knight` | 1.8 |
| 2 | `knight3` | `knight` | 1.8 |
| 3 | `k_active` | `knight` | 1.8 |
| 4 | `spider` | `spiderg` (green spider) | 1 |
| 5 | `bat` | `batg` (green bat) | 1.8 |
| 6 | `batfly` | `batg` (green bat) | 1.8 |
| 7 | `maxtest1` | `maxj` (Jester Max) | 1.4 |
| 8 | `fep_test5` | `plant` (carnivorous plant) | 1.9 |
| 9 | `brutus` | `brutusm` (forest Brutus) | 1.65 |
| 10 | `redcat2` | `redcat` | 1.3 |
| 11 | `whizztest8` | `wkkooi` (WhizzKitty in her cage) | 1.55 |
| 12 | `tstwitch` | `witch` | 1.9 |
| 13 | `mxmach` | `turbot` + `turtop` + `brcrate` + `maxd` | Assembly below |

The native scales are retained on both sides, so differences in displayed size are part of the comparison. Green spiders and bats represent campaign subtype 1. Yellow and red variants also occur in the campaign; green is a consistent representative, not a claim that it is the closest texture match to the unused models.

The final turret is shown as one assembly. `turbot`, `turtop` and `maxd` use scale 1.4; the crate uses the campaign mesh scale `[0.84, 0.84, 2.38]`. All four meshes use the campaign's −90° X rotation. The machine parts share one origin, while Max is raised 40 units above it and the top holds the final pose of `litopen`. This raised, open preview exposes Max for comparison. It does not run the boss state machine or fire enemy projectiles. The clip selector names the animated component, for example `turtop / shoot1` or `maxd / idle`; playing a clip changes that component only.

## Evidence and scope

The audit checked explicit ACT filename references in the installed native executable, installed and CD campaign levels/scripts/settings, cross-references from other actor INIs, and imported campaign data. No reference to these thirteen models was found outside their own actor INIs. This is evidence of unused shipped assets within that search scope, not a native runtime trace or proof against dynamically constructed filenames.

All thirteen installed ACT hashes match the CD files and the hashes recorded by the importer. They import without warnings. The detailed inventory, exact clip durations, transforms, source hashes and search scope are retained in [`asset-audit.json`](../temp_work/actor-test-2026-10-13/asset-audit.json).

The pairings were checked against imported geometry, textures, original actor settings, campaign entities and the port's enemy mapping and machine assembly code. The plant match includes identical topology, UVs, vertex bone assignments and decoded texture pixels. The final level explicitly binds `wkkooi.act` to `WhizzKitty`. Detailed comparisons, campaign usage counts, scales, clips and assembly settings are retained in [`campaign-counterparts-audit.json`](../temp_work/actor-comparison-2026-10-13/campaign-counterparts-audit.json). These comparisons establish campaign counterparts; they do not establish a dated development history for the unused assets.

`knight1` is excluded because it appears six times as static graveyard scenery. `kanon` is an unused cannon/scenery asset outside this room's scope. `rballoon` matches the used `ilife` pickup's imported geometry, animation and texture; `respawn` is an effect model. Neither adds a character exhibit.

## Room and verification

RedCat uses the port’s regular movement, jump, camera, shooting and original HUD. Neither side's exhibits chase, damage, block or score points for RedCat. Shooting remains available for comparing RedCat’s own animation, not fighting the exhibits. The initial preview clip is sampled before calculating floor placement, so animated models rest on the bounds of their displayed pose. Models without clips use their static pose. Bats on both sides are displayed above the floor, and the turret assembly is grounded as a whole. The room supplies neutral fill lighting. Static test poses are preserved; `tstwitch` receives the upright display rotation described above.

Use the pause panel to select any of the 26 exhibits. The controls are unchanged, including the 1–9 shortcuts for the first nine unused models. Choose a clip and press **Afspelen** to resume; uncheck **Animatie herhalen** to play it once and hold the final pose.

New runtime caches, profiles, logs and verification artifacts are written to `../temp_work/actor-test-2026-10-13/`. The headless browser test uses `../temp_work/actor-browser/` for Linux socket path limits. Historical reports remain, but disposable profiles and screenshots from earlier runs were removed in the [22 October cleanup](../temp_work/cleanup-2026-10-22/README.md). No campaign save or settings storage is loaded or written. `source-snapshot.json` records copied source/asset hashes. No main-game release package is created.

Focused checks (requires the parent project’s Playwright and Chrome):

```sh
node tests/scene.mjs
node tests/scene.mjs --comparison
node tests/desktop.mjs  # Linux Wayland session
```
