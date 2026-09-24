# Projectile readability and native behavior

The September 2026 audit compared the installed `RcHcGame.dat` (SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`),
its projectile settings, and the original color/alpha bitmap pairs. The source
changes do not require repackaging assets or building an executable to test.

## What is native

- [Bitmap timing](native-projectile-animation.md): the 50 ms timer has a strict
  expiry, advances once per update, and rearms on the next update. It is not a
  continuous 20 fps animation and does not skip frames after a stall.
- [Mushroom ribbon](mushroom-trail-native.md): original `STrail` artwork, owner
  opacity, live endpoint sampling, fade, and deletion with its projectile.
- [Other enemy effects](enemy-combat-effects-native.md): bone, skull, goo,
  poison, Jester, magma, and witch shots use their animated bitmap sequences.
  Their native periodic effect factories return null; guessed warm smoke trails
  have been removed. Jester's separate teleport swirl remains.
- [Enemy flight](native-enemy-projectile-flight.md): restored the 32-unit
  gravity conversion, sampled lifetime ranges, and the witch shot's steering
  after each movement update. Existing saves retain their sampled lifetime;
  older generated shots have their gravity units migrated once.

Forest Brutus throws `RcMushRoom`; graveyard Brutus uses `RcBone` and `RcSkull`.
Both use the original frame artwork. Native billboard dimensions are bitmap
width/height times the subtype's `Size`, not `Size` multiplied by 0.8 again.
This also agrees with `RenderTexturedPoint` in the
[Genesis3D reference implementation](https://github.com/RealityFactory/Genesis3D/blob/f85b288ff54873e93879791ee9eb1367a311909f/World/User.c).
That later engine source supports the projection interpretation; the installed
game's executable is the authority for its projectile parameters and timing.

## Deliberate visibility improvement

The requested readability adjustment is separate from native timing. Small,
distant sprites grow toward 24 pixels across on a viewport 1080 pixels high;
ribbons grow toward 6 pixels wide. Enlargement is capped at 2.5 times the
native dimension. Close shots keep their native size. The thresholds scale
with viewport height so resolution and device pixel ratio do not change the
angular size. This is a minimum target, not an unlimited size floor at any
distance.

The full original frame, including transparent padding, keeps its aspect ratio.
Depth testing remains enabled. Only rendered dimensions change: collision
radius, ribbon contact width, trajectory, damage, lifespan, and timer state do
not depend on the camera. The current camera pose is used after camera updates,
including scripted camera changes. Rendering never advances effect state.

## Focused verification without builds

```sh
node --test tests/projectile-visibility.test.mjs
node tests/projectile-visibility-scenes.mjs
```

The browser check runs source through a temporary local server, fires actual
Brutus shots in the forest and graveyard arenas, checks their projected size,
pause/save behavior and impact cleanup, and writes screenshots/report under
`artifacts/projectile-*`. It does not run the campaign or unrelated tests.
The neighboring native research documents list their own focused timer,
ribbon, importer, and flight checks.
