# BSP room topology investigation — 19 October 2026

Read-only analysis of imported level/visibility metadata and the original five GBSP v15 files. No source, original installation, saves, running game or tests were changed by this analysis.

## Result

The imported authored BSP `areas` and `areaPortals` provide a reliable room/door ownership graph. They should be used to filter graphics residency before the existing distance, PVS and frustum checks. This is materially safer than reconstructing rooms from spatial proximity: the Castle basement and floors above overlap horizontally but have different authored area identities.

| Level | Authored areas including reserved area 0 | Nonempty world areas | Directed door edges | Distinct door models | Static faces | Static triangle vertices |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| Het Bos | 12 | 11 | 20 | 10 | 5,887 | 49,836 |
| Het Kasteel | 24 | 23 | 62 | 31 | 7,621 | 62,562 |
| Het Kerkhof | 16 | 15 | 38 | 19 | 9,093 | 69,702 |
| De Grotten | 33 | 32 | 102 | 51 | 7,482 | 61,659 |
| De Kasteeltoren | 6 | 5 | 4 | 2 | 2,795 | 22,827 |

For **every static model 0 render face in every level**, valid BSP leaf-face references give exactly one nonzero area. There are no unreferenced or ambiguously shared static faces in these imported files. This includes sky boundary faces. A defensive normal-probe fallback may remain useful for synthetic tests or future imports, but it is not required by these five actual levels.

The original GBSP general compiler portal chunk (kind 9) is present but empty in all five files. The area-portal array (kind 7) does contain door-model adjacency. Therefore a more detailed arbitrary passage graph is not available as a separate preserved compiler portal list. BSP areas already merge ordinary unsealed passages, stairs and shared large spaces into connected regions.

## Basement screenshot

The screenshot is identifiable as **Castle area 19** by its three knight statues: `StandingEnemy10`, `StandingEnemy11` and `StandingEnemy12` are at `[212,-156,-1287]`, `[-89,-156,-1287]` and `[-393,-156,-1287]`.

Area 19 bounds are `[-500,-192,-1706]` to `[312,32,-1264]`. Its immediate adjacency is:

| Door brush model | Authored model name | Destination area | What is beyond it |
| --- | --- | ---: | --- |
| 9 | doorhallway02_02 | 22 | Left stair/hall section |
| 10 | doorhallway02_03 | 20 | Small save/potion alcove |
| 11 | doorhallway02_04 | 16 | Right stair/hall section |
| 13 | secretdoor02 | 20 | Other entrance into the alcove |

The minimally ready graphics set is **19, 16, 20 and 22**. Models 10 and 13 reach the same area; duplicate graph edges should not multiply room processing. Area 18, above the basement, has bounds y 64–352 and is *not* adjacent to area 19. It should no longer become resident just because the camera is close in 3D coordinates.

## Tower areas are intentionally separate

Do not turn isolated area IDs into a reason to fall back to the whole level. The Tower has genuine teleport-separated rooms:

- Area 3: starting shaft, y -3920 to -2872, containing `telepoort01` through `telepoort05` and the initial cutscene.
- Area 4: teleport chamber around `[0,1788,1008]`, bounds y 1704–2280.
- Area 5: teleport chamber around `[0,1788,0]`, bounds y 1704–2280.
- Area 2: upper entrance/teleporter space, y 2368–2944.
- Area 1: entire witch boss room, y 2368–3128, x -984 to 969 and z -783 to 712. Models 2 and 3 link it to area 2.

The large boss room is one authored area, so retaining it whole does not require a special hard-coded Tower exception. On teleport and authored remote camera cuts, reevaluate the selected area immediately and use existing loading-readiness behavior. Never wait for normal player walking between door neighbors to discover a teleport destination.

## Suggested residency policy

1. Determine current room from a valid player-body BSP leaf. Use camera area for genuinely remote authored camera shots; retain the last valid room for no-clip/outside-world camera locations rather than exposing unrelated floors.
2. Admit current area and one-hop door neighbors for near-field preparation, even when a door is closed. The adjacent room is ready before opening or crossing the door.
3. Admit farther areas only through a chain of open doors with overlapping projected apertures; otherwise a series of permanently open doors could expand the resident set to the whole chapter. Use conservative projection around near-plane intersections and door bounds to avoid popping.
4. Partition static geometry using `(model, material, authored area, spatial cell)`. A chunk that mixes two unrelated floors cannot be genuinely unloaded while either floor still needs its material.
5. Current-room whole faces and large open spaces continue through ordinary native PVS/frustum filtering. Retain complete faces and brush assemblies; do not crop walls or moving doors into arbitrary cells.
6. Use dynamic object bounds against BSP area membership for actors, effects and moving brushes. Keep logic/collision/script state independent of graphics ownership. Do not disable gameplay objects just because their visual resources are absent.
7. Unload topologically unrelated graphics immediately when safe, rather than retaining them because of distance alone. Keep short retention for resources still belonging to the allowed room set to avoid turning around and causing reload hitches.
8. Preserve global skybox textures. Sky masks remain authored-area geometry and must retain their existing depth-only behavior. Do not treat the small global sky texture itself as a room chunk.

## Caveats

An authored area is a connected space sealed by area-portal doors, not necessarily one visually rectangular room. It can include stairs or more than one architectural subsection. This is correct for shared visible spaces; exact arbitrary per-passage ownership would require reconstructing additional topology beyond the saved area graph. In actual data there are no static shared-face ambiguities to solve.

Area 0 appears in brush-model leaf records; it is not a valid traversable world room in these five chapters. Restrict inventory of room bounds to model 0's `firstLeaf`/`numLeaves`, and filter solid/invalid clusters. Treat unknown ownership conservatively rather than classifying every solid decoration as global.

## Reproduction and evidence

- `inspect_areas.py`: loads original BSP leaf bounds and imported camera/door topology, records area bounds and entity ownership. Writes `area-inventory.json`.
- `face_ownership.py`: verifies unique static face ownership from leaf-face references and measures fallback requirements. Writes `face-ownership.json`.
- Source schemas: `tools/import_visibility.py`, `src/bsp-visibility.js`, `data/visibility/lvl00a.json` through `lvl04a.json` and `data/levels/*/level.json`.
