# Mushroom projectile ribbon

Evidence is from the installed Dutch `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Addresses below are executable virtual addresses. Original files remain read only.

## Recovered artwork and dimensions

The original mushroom trail follows the projectile through the air. It is a
camera-facing ribbon, not a decal projected onto the floor. Its separate artwork
is `Bitmaps/mshTrail.bmp` plus `Bitmaps/mshTrailA.bmp`, referenced by the pointer
table at `0x64cee4` and `0x64cee8`. `tools/import_hazards.py` combines those two
64×64 images into RGBA without replacing or painting any pixels. The manifest
records both source SHA-256 values. The imported PNG has been compared pixel for
pixel with the original color bitmap and alpha mask.

The ribbon constructor sets its half-width to 0.64 at `0x586bad`. Mushroom setup
reads that width and multiplies it by 5 (`0x44936f–0x449380`, float at `0x64cf7c`).
Ribbon vertices subtract and add that result at `0x587959–0x5879ce`, giving a full
width of **6.4 original world units**. The renderer constructs the perpendicular
from the segment and camera directions, preserving the original flight height.

Setup copies `TrailRed`, `TrailGreen`, `TrailBlue`, and `TrailAlpha` into the
ribbon at `0x4492e3–0x449307`. It converts `TrailFadeTime` seconds to milliseconds
at `0x44930a–0x44931b`. All three installed difficulties specify RGB 255,255,127,
alpha 127/255, and a 1.5 second lifetime. The reconstruction fades each segment
linearly over that lifetime. Its maximum 10-unit sampling interval and bounded
segment count are implementation choices, not recovered native constants.

## Contact damage and remaining uncertainty

`TrailDamage=5` is present in every original projectile difficulty INI and is
loaded at `0x447e5c` into the mushroom settings block (`0x6b6770`). A native
runtime reader establishing its complete contact rule has not been recovered.
Consequently, the following behavior fulfills the requested damaging trail but
must not be described as exact native contact parity:

- A swept player box is intersected with the existing ribbon at its actual
  height, expanded by the ribbon half-width. This prevents a player crossing a
  narrow trail between frames from skipping contact.
- One contact requests the authored 5 damage through the shared player damage
  cooldown, even if several adjacent segments or salvos overlap. It does not
  multiply damage by the number of segments.
- Collision-clipped projectile endpoints prevent trails continuing through a
  wall after impact. Detached segments continue to fade after impact or boss
  death. Cutscenes and enemy freezes pause the effect. Respawn clears it.
- Save/load preserves segment position and age. Loaded damage and artwork values
  come from trusted difficulty settings rather than arbitrary saved values.

`tests/projectile-hazards.test.mjs` checks dimensions, flight-height and swept
contact, overlapping joints, fade, freeze, save/load and growth bounds.
`tests/test_import_hazards.py` checks source preservation and alpha conversion.
`tests/environment-scenes.mjs` additionally exercises the actual projectile,
renderer and player-damage integration in the original forest arena.
