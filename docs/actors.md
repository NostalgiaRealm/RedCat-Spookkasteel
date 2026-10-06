# Actor assets and animation

`tools/import_actors.py` reads Genesis3D VF00 actor archives, nested body archives, rigid bone attachments, per-vertex bone assignments, texture/material records and named motion keyframes. The original `.act` files are read only. All 165 actors in this installation export without motion warnings.

`assets/actors/manifest.json` maps lowercase actor names to JSON geometry, materials, counts and settings. Each actor JSON contains bind-pose render vertices, normals, UVs, triangle indices, material groups, source-local vertex/normal coordinates, their bone indices, the bone hierarchy and exported animation tracks. The runtime applies the INI initial rotation and scale; actor geometry itself retains its original coordinates.

`src/animation.js` samples the exported translation and quaternion tracks, composes parent × attachment × sampled motion transforms, and skins each rigid vertex and normal. Animated instances own their vertex buffers; source geometry/materials are cached. RedCat selects original clips from movement/jump/attack state. Environment animation clocks advance off-screen, with vertex sampling deferred until nearby; looking away no longer pauses their timeline.

Original motion-event dispatch and scripted camera timelines are implemented;
see [motion playback](motions.md) and [camera recovery](camera-native-status.md).
Hurt/death/respawn clip rates and completion gates are also connected in
[player reactions](player-reactions-and-projectile-contact-native.md).
General cross-clip blending and the full native camera spring solver are not
implemented; that narrower limit should not be read as missing event playback.

RedCat has 16 clips including idle, walkfw, walkbw, directional movement, jump/fall, shoot, charge, hit, death and respawn. The animation tests sample all clips, verify finite bounded positions and normalized normals, and verify looping and independent instances.

Material PNGs preserve original palette colors and transparency. Actor UVs are exported with `1-v`, so their Three.js textures use `flipY=true`; BSP textures use `flipY=false`. INI filename lookup is case-insensitive to match Windows.

Actors bound to a BSP `Model` now follow that brush's original transform, including their authored offset from its pivot. The importer also retains INI rotation speeds. This restores the castle cannonballs and cave rolling rocks. See [model attachment evidence and verification](actor-model-attachments.md).
