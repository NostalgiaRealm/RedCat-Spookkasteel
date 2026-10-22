# Native fixture corona sizing

CAdamEffectCorona constructor initializes record+0x44 to 1.0 at 0x57a05a.
Render at 0x57add3 computes record+0x44 * currentRadius * 0.25 (float at 0x64d760), passes type2, flags2 and scale into 0x5b6e90 (geWorld_AddPolyOnce).
Its underlying geWorld_AddPoly at 0x5b6d60 stores the seventh argument in poly+0xac.
The executable textured-point renderer 0x5b669d..0x5b66cb computes cameraScale / depth * polyScale and multiplies bitmap width from 0x59b220; 0x5b66cf..0x5b66fe similarly multiplies bitmap height from 0x59b230.
0x5b6702..0x5b6710 halves these full screen extents to position each side of the quad.
The mirror branch at 0x5b6449..0x5b648b corroborates width * polyScale * 0.5 for the half world extent.

Original Bitmaps/Coreff.bmp and Coreff_a.bmp both measure 64 x 64. Therefore full world extent is radius * 16, not radius * 2. The current remake had displayed the fixture halo at one eighth native width and height.

Matching reference source: temp_work/gargoyle-transparency-2026-09-29/genesis-reference/World/User.c, RenderTexturedPoint lines 868 onward; source also says full width=bitmap width*scale.

Scope: EffectCoronaEntity fixture glow, including button indicators, candles and decorative lights. This does not justify scaling every particle emitter, whose implementation already multiplies authored scale by artwork dimensions, or the independent CRcSavePoint effect.
