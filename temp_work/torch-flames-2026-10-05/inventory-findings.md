# Torch audit, 2026-10-05

Read-only original imported actor/entity audit. Runtime edits handled by root agent.

| Level | Animated htorch | Static torch | Static trchstl | Existing nearby flames | Missing flames |
| --- | ---: | ---: | ---: | ---: | ---: |
| lvl00a Forest | 0 | 0 | 0 | 0 | 0 |
| lvl01a Castle | 8 | 75 | 0 | 75 | 8 |
| lvl02a Graveyard | 24 | 0 | 0 | 16 | 8 |
| lvl03a Caves | 0 | 0 | 10 | 10 | 0 |
| lvl04a Castle tower | 0 | 10 | 0 | 10 | 0 |

All 111 existing flame spouts match a unique torch within 32 world units of its cap. 109 are within 16; two castle static torches have slightly larger authored offsets. Missing hand flames are all at least 316 units from the nearest existing flame, so the threshold has a wide safety margin.

Caves entrance torches use `trchstl.act`, a static hand-like model. No animation is imported, so do not add a fake oscillation or relocate their existing flame spouts. All 95 static torches already have flames; no new static flame required.

The 32 animated hand torches have no associated corona or authored dynamic light within 200 units of their caps. Adding warm lights to these hands therefore does not duplicate existing torch lights.

The animated hand cap consists of mesh vertices 51, 52, and 53, attached to joint 2 (`BONE03`). Their centroid in joint-local coordinates is `[0.11176367476582527,0.2269089619318644,14.135211308797201]`. Transforming that through `animator.transforms[2]`, then `mesh.matrixWorld`, gives the exact cap center. Terminal `BONE04` is close but offsets the center by about one world unit. Verified local centroid vs animated vertices at 9 points through the full animation, maximum numerical discrepancy < 0.000002 world units.

Animation clip `anim` lasts 1.333340048789978 seconds before MotionSpeed scaling. At default scale 3.5, the tip changes X about 23 units over the swing while keeping local world Y about 17.273 above the actor origin. Therefore move both flame emitter and light using this skeletal attachment, rather than an independent sine wave. Existing particles should rise freely from their birth position, rather than rigidly moving old smoke with the torch.

Graveyard entrance `EffectSpoutEntity1` provides a flame template: `flame03.bmp` + `a_flame.bmp`, Scale 1, StartRadius 1.5, speed 4..8, delay 0.1..0.3 seconds, life 0.5..2 seconds, angle 0..20 degrees, gravity 0.5, alpha 100%→25%, size 25%→100%, white tint. Existing 16 Graveyard hand spouts should be reused and attached to the moving cap; synthesize that same style for the 16 missing hand flames.

Evidence:
- `inventory.mjs`: reproducible actor/model and nearest-effect audit.
- `inventory.json`: detailed placements, estimated tip coordinates, nearest authored flames, lights and coronas.
- `hand-tip-animation.json`: exact sampled cap centroid comparison.

No source files modified, no builds or broad tests run.

Nuance: 31 of 32 hand placements explicitly select `anim`; Graveyard `AdamAnyActor131` has empty MotionName but uses the same animated htorch asset. Current actor instantiation falls back to the first clip and already animates that prop. The torch attachment should follow its actual current mesh pose without changing animation policy. Other hand MotionSpeed values: Castle six at 1.0 and two at 0.5; Graveyard twenty-one at 0.25 and two at 0.5.
