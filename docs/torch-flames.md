# Lit moving torches

This is an intentional enhancement requested by the user, including fixtures
that did not have visible flames in the original game.

The five imported levels contain 127 torch fixtures:

| Level | Moving hand torches | Existing hand flames reused | Missing hand flames added | Already-lit stationary torches |
| --- | ---: | ---: | ---: | ---: |
| Het Bos | 0 | 0 | 0 | 0 |
| Het Kasteel | 8 | 0 | 8 | 75 |
| Het Kerkhof | 24 | 16 | 8 | 0 |
| De Grotten | 0 | 0 | 0 | 10 |
| De Kasteeltoren | 0 | 0 | 0 | 10 |

All 32 moving hands now have a flame and a warm local light. The original
graveyard `flame03.bmp`/`a_flame.bmp` artwork, transparency and spout settings
are reused. Existing flames are attached to their owning hand rather than
duplicated. The 95 stationary `torch.act`/`trchstl.act` fixtures already have
flames; their effects, placement and lighting remain unchanged. No sway is
added to stationary fixtures.

## Attachment and lifecycle

`src/torch-flames.js` reads the centre of the original `htorch.act` wick cap
(vertices 51–53, attached to BONE03). The cached bone-local centre is transformed
by the current rendered animation pose, actor scale and orientation. Both the
flame emitter and light follow this point, with a three-unit vertical lift so
the initial sprite sits above the cap. Fire travels upward from each emission
position; it does not aim at the old fixed world-space direction marker.

Existing emitters are associated once, within 32 units of each hand's fixed
bind-pose tip. All sixteen associations are unique; the missing hands' nearest
unrelated flames are over 316 units away. Association uses the bind pose so
loading a save partway through a sway cannot select another fixture's flame.
The actor's existing animation clock supplies the pose, including after load
and while paused. No authored actors, triggers or save schema are changed.

Hiding, disabling or destroying a hand stops its light and particle emission.
Already emitted particles fade out within their original two-second lifetime.
Emission is limited to the same 1800-unit camera range used to pose decorative
actors. Returning to a section resumes emission without replaying missed time.

Each added light uses warm RGB `[.75, .4, .1]` and radius 150. Lights use the
existing eight shared world-light slots. They do not add shadow traces or
invalidate stationary floor-light samples. Attachment work is constant per
nearby hand; flames share the existing instanced artwork batch.

## Focused verification

`node --test tests/torch-flames.test.mjs` checks the five-level inventory,
nonduplicated associations, exact correspondence with animated mesh vertices,
orientation/scale, save-stable matching, emission, pause, hiding/disabling,
destruction, distance culling and the fixed light budget. All three checks pass.

Isolated browser checks compare the Castle Jester room, Graveyard entrance and
static Caves entrance before and after the enhancement. Across 121 sampled
frames the flame/light attachment differs from the rendered cap by less than
0.0000016 world units. The Castle and Graveyard flames visibly follow the sway.
The Caves entrance screenshots are pixel-identical. There are no duplicate
emitters, JavaScript errors or shader errors. No builds or unrelated suites
were run.

Inventory, animation measurements, harnesses, reports and screenshots are
retained in `current_work/torch-flames-2026-10-05/`.
