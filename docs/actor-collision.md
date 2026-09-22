# Original actor collision flags

The original `Actors/statue.ini` marks the graveyard's decorative gargoyle
pedestals with `ActorBlocksPlayer=1`, `ActorCanBeShot=1`, and `ActorBlocksLOS=0`.
They are `AdamAnyActor` props (`statue.act`), not disabled combat enemies. The
entrance statue `AdamAnyActor134` uses scale 1 and an authored -20° Y rotation;
the source actor has a -90° X rotation to convert its Z-up vertices.

The importer previously retained only scale and rotation. It now preserves
the three collision flags for every imported actor. The world registers the
transformed original triangles for each blocking prop. Continuous box sweeps
prevent movement and projectiles from tunnelling through their surfaces;
line-of-sight queries independently honor the LOS flag. Hidden/removed props
stop blocking. The mesh sweep is a portable reconstruction, not a recovered
copy of Genesis3D's actor collision algorithm. Cached collision geometry is
refreshed when the actor's transform or sampled animation vertices change.
Mounted decorative props follow their supporting brush before player and
projectile queries, without advancing animation clocks a second time.

When a moving floor carries RedCat, its own attached props are excluded from
that carry sweep: their previous world positions would otherwise falsely
block a passenger moving along with them. Props on other supports and
stationary props still block. This exclusion applies only to carrying;
ordinary player movement, projectiles and side pushes retain normal actor
collision. This composition is part of the portable movement reconstruction,
not a claim that the native engine uses the same filtering mechanism.

`tests/actor-collision.test.mjs` covers swept contact, floor stability, sliding,
empty space in triangle bounds, mask separation and the original rotated
statue. `tests/graveyard-scenes.mjs` tests actual walking into and around the
entrance pedestal, projectile blocking and clear native LOS in its real level.
`tests/actor-placement.test.mjs` verifies updated mounted collision before
player/projectile queries and a single animation-clock advance per frame.
`tests/moving-solids.test.mjs` verifies carrying past the support's own old
prop position, rejection by unrelated props and ordinary mounted-prop blocking.
