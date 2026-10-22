# Gargoyle transparency follow-up, completed 2026-09-30

The original reference screenshot is /home/rick/Pictures/Screenshots/Gargoyle Original.png.
Its pedestal shows through the red tail and the yellow head stays bright.

Root cause: WorldEffects.create unconditionally set flipY=true, despite the
Gargoyle quad using native top-down UVs. Native tail V=1 (45e753/45e77c),
head V=0 (45e792/45e71b). Only this texture now keeps flipY=false.

The original indexed mask's raw palette bytes initially suggested a possible
import problem. That hypothesis was rejected: separate alpha locks convert
to 8BIT_GRAY; the conversion de-palettizes. The existing PNG already contains
the translucent lower part of the image. No artwork was regenerated.

Native texture setup: 45dfd7 -> 50aea0 -> 50b0fa -> 5c4120 (set alpha).
Native particle vertex alpha: 5995d0 returns +70; 47de62 multiplies the
percentage fade by the double 2.55 at 64e328. No blanket alpha multiplier
was needed. Geometry, timer, salvo and projectile physics remain unchanged.

Engine source reference clone retained in genesis-reference, commit
f85b288ff54873e93879791ee9eb1367a311909f. Bitmap/bitmap.c loads BMP rows
top-down (5237 onward), converts the separate alpha lock (1636), and
Bitmap/bitmap_blitdata.c de-palettizes it. This reference is corroborating
engine source, not a claim of identical game executable source.

Focused check only:
TMPDIR=temp_work node tests/gargoyle-transparency-scenes.mjs
Exit code 0. Log: render-test.log.
Captures and JSON: render-1790759448204/.
Production mask sampler with a full-opacity vertex over black/white:
corrected red tail transmission 0.21176470588235294, yellow head 0;
regressed red tail 0, yellow head 0.21176470588235294.
Actual tower capture has 3 quads; no page errors or failed assets.
Visual inspection confirms pedestal seams through the tail in the corrected
capture; the previous capture obscures them.

No build or packaging was performed. Scratch, browser profile and native
disassembly remain here for later cross-reference.
