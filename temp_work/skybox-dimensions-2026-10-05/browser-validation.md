# Skybox browser verification — 2026-10-05

Focused command: `node tests/skybox-scenes.mjs`.

Passing report and screenshots: `scenes-1791222355164/`.

- Original Forest and Graveyard sky faces remain 256×256.
- Original Castle and Tower faces mixed 128×128 with 256×256; all six now upload at 256×256.
- Caves has no authored sky texture (all six indices are -1); it remains without a cubemap.
- Tested every direction of all four authored skies: 24 GPU views. An independent OpenGL cube lookup maps each camera ray to the expected original artwork and orientation. Maximum sampled RGB difference is 1/255 for resized faces and zero for all unchanged faces.
- All 24 first/directional uploads return GL_NO_ERROR. No black/missing-face substitutions were required.
- Real Tower scene retains its actual cubemap; three room camera views render with 76/79/98 draw calls and GL_NO_ERROR. No browser page, shader or HTTP errors.
- Visually inspected the Tower room and restored forest sky artwork screenshot.
- Removed the temporary neutral-background workaround from `tests/world-light-shadows-scenes.mjs`. Did not rerun that previous shadow suite.

The test uses an isolated Chrome profile under its output directory. All profiles, screenshots and reports are retained. The test's browser and server processes close on completion; no user profile/save or build was changed.
