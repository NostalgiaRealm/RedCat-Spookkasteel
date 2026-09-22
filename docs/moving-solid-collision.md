# Moving doors and platforms

The tower doorway in `Stuck in doors.png` consists of the original
`door_witch01` and `door_witch02` brushes (models 2 and 3 in `lvl04a`). They
rotate about the imported hinges over one second. The left door's compiled
`DoorBeforeOpenCommand` opens the other leaf. The geometry and motion endpoints
are unchanged.

Previously the model transforms advanced before player collision, even when a
door's new pose intersected RedCat. A normal movement sweep beginning inside
that solid could not move him out. The old moving-platform carry handled a
floor underneath him, but did not resolve a door swinging into his side.

## Original engine reference

Genesis3D's [`Trace_TestModelMove` in `World/Trace.c`](https://github.com/RealityFactory/Genesis3D/blob/f85b288ff54873e93879791ee9eb1367a311909f/World/Trace.c#L1287)
tests a model's old and proposed transforms against an actor hull, computes an
outward impact position, and tests that push against the world. If the push is
blocked, it returns the actor's original position and rejects the model move.
This is the engine behavior used as the reconstruction reference. The linked
repository includes changes after the original 1999 engine; it is not a claim
that every numeric detail matches the game's executable.

## Portable implementation

`src/moving-solids.js` checks the original motion path before `MotionPlayer`
commits each segment. It samples translation and hinge rotation, carries a
grounded player with a supporting model, and pushes an intersected player hull
out along the brush's collision plane. Every push is swept against the rest of
the world and actor props. A blocked push restores the model and player and
leaves the motion waiting at the last accepted time. The next frame retries it,
so moving out of the way lets a blocked door continue.

The checks operate on the existing world-axis player hull. Path subdivision
and the small separation tolerance are portable collision approximations,
not newly authored door positions. Extreme paths are rejected rather than
silently bypassing collision when the subdivision limit is reached.

Motion events and completion callbacks occur only after their associated
movement succeeds. Events already emitted before a later blocked segment are
not repeated. A script teleport at an accepted event keeps its destination;
there is no deferred platform carry to overwrite it. No-clip bypasses moving
solid displacement. Trigger-only, disabled and static-world models are not
treated as moving solid doors.

## Verification

Run these checks from the project root without building packages:

```sh
node --test tests/moving-solids.test.mjs tests/moving-platform.test.mjs tests/motions.test.mjs
node tests/door-scenes.mjs
```

The unit cases cover translation through a stationary player, hinged arcs,
blocked pushes, platform carrying, ceiling crush prevention, no-clip, delayed
events and same-frame script teleports. The platform fixture uses the actual
`ScriptHost` and `MotionPlayer` callback route. An additional unit case uses
the original tower BSP and hinge animation.

The browser scene opens the actual paired tower doors through the gameplay
command and compiled callback, checks that RedCat stays outside all solid
brushes on every animation step, verifies both original motions finish, and
walks him away afterward. It writes `artifacts/door-scenes.json` and screenshots
of the closed, opening and open doorway. This verifies the reported regression;
it does not establish frame-perfect parity for every moving brush in the game.
