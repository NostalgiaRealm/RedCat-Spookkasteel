# Findings and classification

Audited all 710 decorative AdamAnyActor entities and 599 enemy/pickup actors across all five levels (1,309 total), first at authored roots and then after model initial transforms, spider placement, script initialization and pickup bobbing. No browser, build, geometry change, or production source edit. Dynamic lights were intentionally absent; this isolates baked floor ambient.

**27 non-tree decorative actors match the tree failure:** root starts solid, baseline returns null, and one of the existing five in-bounds probes returns a valid floor luxel. All are visible, default-enabled AdamAnyActor entities, have no attached Model, explicitly useAmbient=true, overrideAmbient=false, useSun=true, no authored motion, and zero rotation speeds.

| Asset | Level | Entities | Representative root | First successful probe | Recovered ambient |
| --- | --- | --- | --- | --- | --- |
| kandela.act (22) | lvl04a | AdamAnyActor26, AdamAnyActor27, AdamAnyActor28, AdamAnyActor29, AdamAnyActor30, AdamAnyActor31, AdamAnyActor32, AdamAnyActor33, AdamAnyActor34, AdamAnyActor35, AdamAnyActor36, AdamAnyActor37, AdamAnyActor38, AdamAnyActor39, AdamAnyActor40, AdamAnyActor41, AdamAnyActor42, AdamAnyActor43, AdamAnyActor44, AdamAnyActor45, AdamAnyActor46, AdamAnyActor47 | [-72, 2368, 784] | [-71.976, 2379.33, 783.979] | [0.3, 0.3, 0.161] |
| cross5.act (4) | lvl02a | AdamAnyActor232, AdamAnyActor233, AdamAnyActor234, AdamAnyActor235 | [1880, -64, 380] | [1880.328, -44.528, 380.338] | [0.3, 0.3, 0.3] |
| pbench.act (1) | lvl02a | AdamAnyActor11 | [925, -65, 2020] | [926.734, -51.996, 2020.322] | [0.3, 0.3, 0.3] |

All 27 use the first (center) probe and recover static world model 0. The full exact bounds, world transforms, floor faces, luxels, five probe values, lighting settings and unmodified source entities are in non-tree-decoration-candidates.json.

Follow-up evidence in enemy-lighting-review.md separates the gameplay candidates: all 10 castle StandingEnemy knights (StandingEnemy1–5 and 13–17) stay buried at Y=86 during 300 active updates, beneath floors Y=87 or 87.086044. They are confirmed persistent lighting failures and were added to the runtime opt-in specifically for StandingEnemy + knight.act. Tower guardian MovingEnemy5 clears its origin through ordinary movement on the second active update and remains excluded. The final repair therefore covers 37 new persistent cases: 27 decorative props plus 10 standing knights.

Seven currently solid-origin coin/health pickups recover mathematically but explicitly disable floor ambient (six castle coins and graveyard ItemHealth6). They should retain their original override lighting. Three castle spider editor roots (MovingEnemy8–10) would recover, but placeSpider already relocates them to valid lit roots before play. Graveyard ItemLife1 has a valid native floor after the normal +5 pickup offset. Other raw-only coin/health cases likewise change when initialized.

The five-point recovery fails for castle attached cannonball AdamAnyActor87, tower attached mirror_stndrd AdamAnyActor53–57 and cinematic witch AdamAnyActor58, and graveyard spider MovingEnemy50. Those should not be presented as repaired by this probe method. They are documented with all failed probes in excluded-actors.json. The other castle rolling cannonball and all eight cave rolling rocks already have native floor samples.

Ten graveyard zombie spawns and tower combat Witch start disabled and invisible under actorVisible; all have valid native floor samples. The cave Max cinematic double and graveyard falling RedCat double also have valid initial floor samples. The tower Witch double AdamAnyActor58 is an intentionally scripted model attachment with no successful probe; other Witch doubles have native samples. Broad asset/class activation would conflate these with ordinary scenery.

Existing tree policy also applies outside the forest: tree.act has 69 recoverable entities (60 forest, nine castle) among 78 placements. The other nine already have native samples. This audit found no buried twig.act candidate.

Limit: covers authored placements and fresh initialization, not every later script/motion endpoint, savegame pose, transient projectile or debris mesh, or auxiliary Dungeon Max machine part. Setup bounds are captured through production instantiateActor (including first animation pose) and initialized actor transforms through syncActors(0); no rendered-pixel assertion is claimed here.

Reproduce: node temp_work/buried-actor-lighting-2026-10-05/audit-buried-actors.mjs

Focused regression validation: tests/buried-actor-lighting.test.mjs passes 5/5 cases. Production instantiateActor and syncActorLighting cover all 37 new recoveries, 118 unchanged valid samples (106 decoration plus 12 knight), transformed setup bounds, unchanged placement, stationary and animated cache behavior, and visibility/render-residency skip and resume behavior. The final run is retained in focused-tests.log. Earlier failing test-authoring iterations are retained separately for transparency.
