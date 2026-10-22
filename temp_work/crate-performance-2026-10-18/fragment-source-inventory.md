# Existing campaign fragment paths

Read-only inventory of shipped level entities and imported actor INI metadata. Counts include initially disabled/script-triggered props; they are authored source counts, not simultaneous visible objects.

| Level | Generic prop sources | Generic fragment artwork | Knight enemies | Knight fragment artwork |
| --- | ---: | ---: | ---: | ---: |
| Het Bos | 2 | 2 | 0 | 0 |
| Het Kasteel | 0 | 0 | 22 | 9 |
| Het Kerkhof | 32 | 10 | 0 | 0 |
| De Grotten | 15 | 6 | 0 | 0 |
| De Kasteeltoren | 0 | 0 | 0 | 0 |

The current campaign contains 49 generic prop sources, 12 generic fragment artworks and nine knight armour/weapon artworks, for 21 used 3D fragment artworks. All 21 exist in the imported actor manifest and contain no animation clips.

The two current render paths are:

- Generic AdamAnyActor destruction: Gameplay.destroy creates an explosion event; DestructibleEffects creates the original debris records and acquires temporary actors from DebrisRenderPool. This covers crates, grave covers, glass, the destructible gate, planks and explosive rocks.
- Knight enemy defeat: CastleWorld.createKnightDebris creates or restores the native armour records and acquires actors from the same DebrisRenderPool implementation, retaining opaque rendering until the native fade.

Other enemy fading and purple smoke use an existing corpse and billboard batches rather than temporary 3D fragment actors. Gargoyle INI metadata also contains part models, but the current enemy-death runtime does not create those parts; that is a pre-existing parity question, outside this performance change.

## Generic prop artwork counts

- Het Bos: wkcrate: 2.
- Het Kerkhof: brcrate: 3, glaslood: 2, glaslood1: 5, grafdum: 14, hekdoor: 1, plankdum: 6, wkcrate: 1.
- De Grotten: brcrate: 8, rotsexp1: 3, wkcrate: 4.

The full JSON inventory retains every source entity ID, source/fragment artwork and authored maximum cohort. The theoretical all-props-at-once count is not a preallocation request: the runtime prepares a bounded nearby cohort and still creates the complete native particle count when needed.
