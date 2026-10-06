# Actor placement, rolling balls and animation audit

The castle cannonballs and cave rolling rocks were colliding at their moving BSP brushes while their visible `AdamAnyActor` models remained at their initial coordinates. They are actor-on-model attachments, rather than independent enemies or newly generated scenery.

## Original data and executable evidence

The read-only reference is the installed `RcHcGame.dat` with SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
At `0x4a8bc0–0x4a8bc7` the native actor setup stores the entity's model pointer.
The update routine at `0x49eb00` obtains that model's transform at `0x49ec3c`,
combines it with the inverse previous transform at `0x49ec68`, obtains the model
origin at `0x49ed74`, and updates the actor relative to that origin before saving
the new transform at `0x49eea3`. This preserves the actor's original anchor;
replacing its position with the brush center would give a different placement.

| Level | Visible actor | Attached brush | Original spin |
| --- | --- | --- | --- |
| Castle | `ac_kogel01`, `ac_kogel02`, using `cannball_rol.act` | `kogel01` / model 75, `kogel02` / model 76 | −360°/s around local X |
| Caves | `rots01` through `rots08`, using `rol_rots.act` | `earth_rock01` through `earth_rock08` | +360°/s around local X |

The spin comes from `ActorRotationSpeedX` in the actors' original INI files.
Initial mesh rotation, entity `RotateX/Y/Z`, scale and attachment origin remain
separate. For example, the castle's first ball has entity RotateX=180 and scale
2.5; the cave rocks use scale 0.425. The native INI parser reads rotation-speed
settings near `0x4a4280` and initial rotation near `0x4a3f83`.

The same attachment mechanism moves the cave introduction's `max_actor` with
`max_model` when the original `max_weg` event lowers it by 73 units. That avoids
leaving a second Max standing in front of his combat machine. See
[boss phases](boss-phases-native.md).

## Runtime changes

`Gameplay.objectPosition` transforms an actor's original anchor about the BSP
pivot. `actorOrientation` composes entity, script and INI spin rotations with
the parent model rotation. Saved actor age and script rotation preserve the
pose after loading; transforms never accumulate into the saved anchor.

The owning controller's Disable pauses its brush; Hide removes the attached
visual. This follows the castle's `knoparmoury02` callback, which disables and
hides both rolling-ball controllers. An attached actor or collected pickup
does not itself hide the supporting brush. Actor collision records are updated
as moving/animated props change pose. Original zero collision flags on the
rolling actors remain zero because their collision belongs to the BSP brushes.

Actor clocks continue while distant. A nearby actor samples the current time
instead of resuming a stale pose. Original named clips and MotionSpeed values
remain in use. Source startup synchronizes actor poses after scripts initialize,
so restored brushes and their actors agree before the first gameplay frame.

## Verification and limits

The original-level audit resolves **710 decorative actors**, **29 model
attachments**, and **56 explicitly named animation clips** across all five
levels. All refer to existing imported models, brushes and animation names.
All 165 imported actor settings now retain rotation speeds.

```sh
node --test tests/actor-placement.test.mjs
npm run test:actor-placement
```

The unit cases check rotation composition, the original opposite rolling
directions, pivot-relative positions, visibility, saved poses, animation clocks
and moving collision surfaces. Browser checks render the real castle and cave
meshes, compare pixels with and without the rolling actors, and verify their
positions against the original motion samples. Screenshots and measurements
are saved in `artifacts/actor-placement-scenes.json` and the corresponding PNGs.

This is an asset/reference and targeted scene audit, not a frame-by-frame
comparison of every animation with the original executable. General animation
blending remains a fidelity limit. Later investigations recovered
[player reaction transitions](player-reactions-and-projectile-contact-native.md),
[projectile attachment bones](enemy-projectile-origins-native.md),
[portal trajectories](portal-native-recovery.md) and
[smoke/flame integration](spout-effects-native.md); those are implemented rather
than outstanding attachment work. Their documents record the remaining timing
and rendering adaptations. No release packages were generated for this work.
