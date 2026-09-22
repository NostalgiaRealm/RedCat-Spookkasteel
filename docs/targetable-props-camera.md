# Shootable objects and regional camera recovery

This follow-up updates source only. Existing Linux and Windows packages are
unchanged. Run `npm start -- --ozone-platform=x11` on Linux to try the source;
the packaged launcher still uses the older executable resources.

## Shootable buttons and crates

The original target system selects visible objects in the player's front
hemisphere, refreshing the candidate every 500 ms. Actors use
`Player.DetectionRange` (480 world units); the original button fallback uses
nine times that range (4320). Qualifying enemies and crates have priority over
buttons. An active firing lock remains on its target until it becomes invalid.

The earlier broad prop rule has been corrected: only authored
`AdamAnyActor.Targetable=1` shootable props and `ButtonModel.ShootToSwitch=1`
buttons join enemies in targeting. All twelve opted-in actor props in the
original levels are crates. `ActorDestroyable`, `ActorCanBeShot` and
`OnHitCommand` alone do not make scenery a target. This excludes the lamps and
torches that were incorrectly selected. Hidden/disabled objects and exhausted
one-shot buttons are also excluded. See [native registration, range and
priority evidence](target-eligibility-native.md).

The castle drawbridge control illustrates why selection needs real geometry:
`ButtonModel1` / `knopbridge` has editor origin `[-351,-8,1086]`, while BSP
model 47 is centered at approximately `[-350,-6.8994,1073]`. Targeting uses
the model bounds transformed by the current authored motion. Actor props use
their registered collision bounds, including attachment transforms. The line
of sight may end on the selected object's own hull; a nearer obstruction still
rejects it.

The existing original animated target ring and firing camera lock work for
these objects. Pellets aim from RedCat's animated hand at the selected hull's
center, and their physical collision triggers the original handlers. Enemy
portraits and enemy health remain specific to enemies.

## Camera ownership and saved games

Native camera modes and addresses are recorded in
[camera-native-status.md](camera-native-status.md). In particular, mode 1 is
the untimed player-relative offset view, while mode 2 is a fixed authored
view. The cave water laboratory combines timed overviews with the regional
mode-1 `cam_waterlab` and its `[1.5,1.5,-20]` offset.

Previously, mouse input changed weapon pitch even while the regional camera
ignored that pitch and rendered its fixed authored angle. Continued movement
could leave an invisible pitch at its upward limit. Mode 1 now initializes
from the authored angle, then uses the same adjustable pitch for camera and
weapon. Leaving the region restores the previous free-view pitch. Saved games
retain these two angles. Legacy mode-1 saves lack this metadata, so they use
the authored regional angle and a neutral free-view angle instead of reviving
the previously hidden bad pitch.

Fixed and route overviews retain camera ownership until their authored timer
expires or another script camera command takes over. Mouse input is ignored
without changing the player yaw or weapon pitch, and firing does not cancel the
view. The cave water-laboratory overviews use their original five- or
eight-second timers. After expiry, normal mouse control resumes immediately.
Zero-duration fixed views remain script-controlled, as in the original game.
Dialogue cutscenes retain their existing hold-E skip control. The regional
mode-1 pitch repair above remains in place; it does not require interrupting a
fixed overview. This does not claim to reproduce the native camera spring solver.

## Focused verification

For the latest targeting correction, run only:

```sh
node --test tests/targetable-props.test.mjs
node tests/target-eligibility-scenes.mjs
```

The old generic-destructible fixture could select a castle torch as its
"crate". The new fixture uses an explicitly targetable original graveyard
crate and separately checks light-fixture exclusion. It also tests the castle
button beyond the actor range, including real pellet release from RedCat's
animated hand and the resulting bridge-lowering script.

Earlier camera validation used these commands; it was not rerun for this
targeting correction:

```sh
node --test tests/targetable-props.test.mjs tests/camera-control.test.mjs
node tests/prop-camera-scenes.mjs
```

The camera cases cover regional input, cutscene ownership and old/new saves.
The browser case uses the actual cave water-laboratory cameras to check preview
expiry, mouse adjustment and agreement between visible viewing direction and
unlocked weapon direction. The historical result is
`artifacts/prop-camera-scenes.json`; it reports no script or browser errors.

After adding the legacy save-load hook, only the camera unit cases and
`node tests/prop-camera-scenes.mjs --camera-only` were rerun. The latter
loads an old-style cave save through the production loader and verifies both
the regional view and its eventual release. Its results are in
`artifacts/camera-recovery-scenes.json`.

No full historical test suite or package build was run.

The fixed-overview input regression is covered by only the camera checks:

```sh
node --test tests/camera-control.test.mjs
node tests/prop-camera-scenes.mjs --camera-only
```

These check mouse/fire ownership during the authored duration, automatic return
and restored input, remaining camera time across saves, regional camera pitch,
and legacy-save recovery. No targeting suites or release builds are required.
