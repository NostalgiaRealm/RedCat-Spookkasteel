# Buried actor floor-lighting audit

All entity-backed actor meshes, authored origin and fresh initialized state, all five imported levels. Setup bounds and asset transforms use CastleWorld.instantiateActor; initialized transforms use syncActors(0). Temporary projectiles/debris and auxiliary Dungeon Max machine meshes are excluded.

For each pose: native baseline locate/sample; require the first world/brush trace to start solid (no crossed node), baseline null, and explicit existing five-point recovery in transformed cached setup bounds to return a valid sample. No dynamic lights. Legitimate zero-valued lightmaps remain valid.

| Asset | Total | Authored candidates | Initialized candidates | Initially visible candidates | Ambient enabled |
| --- | ---: | ---: | ---: | ---: | --- |
| tree.act | 78 | 69 | 69 | 69 | true |
| kandela.act | 114 | 22 | 22 | 22 | true |
| knight.act | 22 | 10 | 10 | 10 | true |
| cross5.act | 15 | 4 | 4 | 4 | true |
| imoneys.act | 48 | 0 | 4 | 4 | false |
| guardian.act | 5 | 1 | 1 | 1 | true |
| ihealthm.act | 18 | 0 | 1 | 1 | false |
| imoneyl.act | 101 | 2 | 1 | 1 | false |
| imoneym.act | 55 | 0 | 1 | 1 | false |
| pbench.act | 4 | 1 | 1 | 1 | true |
| ihealthl.act | 13 | 1 | 0 | 0 | false |
| ilife.act | 8 | 1 | 0 | 0 | true |
| spiderg.act | 25 | 2 | 0 | 0 | true |
| spidery.act | 12 | 1 | 0 | 0 | true |

Full entities, controller attachments, exact poses, five probe results, and asset settings are retained in `audit.json`.

Run from any directory with `node /mnt/Storage/Cloud/Games/RedCat_Spookkasteel_Rebuild_2026/RCSPOOK_NEW/temp_work/buried-actor-lighting-2026-10-05/audit-buried-actors.mjs`.
