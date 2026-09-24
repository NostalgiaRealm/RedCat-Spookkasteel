# Remaining native behavior audit

Audit date: 23 September 2026.

There is still work before this project can claim full original-game parity.
This audit compares the current source, imported original assets/settings and
compiled campaign scripts with the project's recovered executable evidence. It
is a source audit, not a fresh playthrough of either executable. Earlier research
notes describe their own point in time; their TODO lists are not necessarily
current.

## Follow-up implementation and corrected findings

The requested native follow-up is now implemented in the areas supported by
recovered executable evidence. See [native follow-up](native-completion-followup.md)
and [player reactions/projectile contact](player-reactions-and-projectile-contact-native.md).

| Area | Current status |
| --- | --- |
| RedCat reactions | Original hit/death/respawn clips and rates are connected; checkpoint/game-over wait for death, respawn is protected, and save/load preserves the phase. |
| RedCat movement | Recovered directional speeds, grounded multiplier, takeoff/platform momentum and limited airborne steering now replace the uniform speed model; see [movement evidence](player-movement-native.md). |
| Enemy projectile origins | Original animated attachment bones are used at release, including both Dungeon Max turret barrels; see [attachment evidence](enemy-projectile-origins-native.md). |
| Pursuit and attacks | Native minimum-hop graph search, stored sampled salvos, spider return/ascent, all three touch-pursuit choices and knight strike windows are implemented. Patrols bypass full pursuit search; see the [graveyard regression fix](graveyard-performance-regression.md). |
| Guardians | Native construction identifies a touch-enemy subclass. Actual body contact with a one-second cooldown is implemented; a distinct shield/state machine was not established. |
| Actor/projectile lighting | Actors now select their original local Sun, sample floor ambient, and shade vertices using raw RGB and root-based dynamic lights. Floor shadow flags, animated ambient and material clones are preserved. Projectile/impact lights affect actors and world surfaces. See [actor lighting](actor-lighting-native.md). BSP lightmaps use recovered texture-axis falloff, fixed-point channel gain and per-luxel clamping. |
| Spatial audio | Native directional stereo, BSP/PVS/area audibility and wall-distance attenuation are implemented. Requested ambience limits and fairy hearing exceptions are retained. |
| Shove/power move | The previous classification as a confirmed missing action was too strong. Bit 16 exists, but no playable input, animation or consuming gameplay action was recovered. The flag remains preserved; no speculative action was introduced. |

An unused imported setting alone is not evidence for missing gameplay. In
particular, TimeToRecoverFromHit is absent from the inspected executable;
HitMotionFactor is already used. The original cave reward correction still
awards BIG BENG rather than the unused power-move flag.

`GetGameType` still returns 0. The shipped scripts contain type-1 branches,
including skipped introductions/tutorials. The original menu meaning and complete
mode behavior require research before adding a separate selector. Ordinary
campaign execution uses type 0.

## Implemented, but still reconstructed

- **Projectile contact:** bitmap clocks, imported frames, mushroom ribbon timing,
  gravity/lifetime variation and Witch homing are implemented. The shared native projectile collision hull is recovered and separated
  from visual size. Animated muzzle placement, player-shot impact sprites/light
  pulses and the charged-hit electric ripple/floor fold are recovered. The nine enemy subclasses have empty impact callbacks
  and no secondary effect factory. The native mushroom TrailDamage setting has no
  runtime consumer: the invented ribbon hurt check was removed; mushroom-body
  contact retains its damage. See [impact recovery](projectile-impacts-native.md),
  [flight research](native-enemy-projectile-flight.md) and
  [ribbon boundaries](mushroom-trail-native.md).
- **Movement and moving geometry:** free displacement and jump/boost behavior
  have targeted native recovery. The loaded acceleration setting has no recovered
  runtime consumer; it is not evidence of a missing acceleration ramp. Modern
  mouse/touch controls, immediate jump2 selection and the BSP hull/step/slide
  solver remain portable adaptations. Moving-brush side pushes and blocked-move
  rejection are already implemented. See
  [player collider](../src/collision.js) and
  [moving collision limits](moving-solid-collision.md).
- **Portal and destruction effects:** recovered portal trajectories, emission,
  beam/flash geometry and sound frequencies now replace the earlier approximations.
  Fragment launch, per-fragment physics, collision dimensions, spin and settling
  are recovered too. Fixed-step timing, local RNG, portable collision tolerances
  and BSP world-surface shadowing still differ from Genesis. Actor fragments now use the recovered actor light selection and shading. See
  [portal recovery](portal-native-recovery.md),
  [portal audio](portal-audio-native.md) and
  [debris recovery](debris-native-recovery.md).
- **Fleurifee effect restoration:** saves now retain the full particle pool,
  reused-slot oscillators, RNG, fractional simulation step, trails, path and
  pulse/color state. Active and departing effects survive actual menu save/load
  without replaying appearance or disappearance sounds. Legacy age-only saves
  still reconstruct their effects; waveform cursors are not saved. See
  [fairy save restoration](fairy-save-restoration.md).
- **Camera/presentation details:** the final camera approach now follows the
  recovered distance/speed lookup. Beacon texture movement and corona radius
  fading/occlusion are connected, and footsteps preserve the native independent
  Wobble phase across saves. BSP falloff uses original imported texture axes and
  four-sample lightmap interpolation. Remaining differences include camera
  collision/compensation, some particle integrators, budgeted corona queries,
  eight selected BSP lights and missing world-surface per-luxel shadow traces.
  Actor lighting now follows the shipped game's root reference (per-bone mode
  remains disabled), vertex interpolation and raw-channel clamping. Floor ambient
  includes shadowed luxel checks; unsuccessful native memory reads and the
  cross-actor ambient leak are deliberately not reproduced. See
  [camera recovery](camera-native-status.md),
  [presentation recovery](presentation-native-recovery.md), and
  [world light falloff](world-light-falloff-research.md) and
  [actor lighting recovery](actor-lighting-native.md).

## Verification and platform work

1. **A normal complete campaign playthrough is still outstanding.** Controlled
   scene tests exercise many real triggers and boss handoffs, but do not prove
   that every puzzle, secret, death/retry, save/reload and level transition is
   reachable in sequence. Record a playthrough and compare the remaining
   behavior with native footage. Run focused regressions for each resulting fix.
2. **Validate the current source on actual Linux and Windows systems** when a
   new build is authorized. Older prepared packages do not establish coverage
   for later source changes. Check rendering, sound, pause/resume, controls and
   saves on both platforms.
3. **Apple Silicon and Android remain future ports.** The shared web core and
   touch controls exist. macOS needs arm64 packaging and hardware validation;
   Android needs an application shell, lifecycle/audio integration, resource and
   performance validation, and signed packaging. See [portability](portability.md).
   Browser touch controls and pause-on-background already exist; validate and
   adapt them in the chosen application shell.
4. **Original RCR save import is absent.** The remake has its own full-state saves,
   autosaves and 2/5/10-minute recovery history. RCR compatibility is separate
   optional migration work, not a prerequisite for playing the remake.

## Items that should not be reopened as missing

All native external functions and object methods actually called by the five
compiled campaign programs have host implementations (12 distinct externals and
14 methods across 444 event handlers). Some unused engine APIs are unimplemented,
but are not established campaign blockers. This coverage does not prove every
host implementation exactly reproduces the native engine.

The current source already contains SuperSkippie/BIG BENG rewards and actions,
boss phase machines, zombie/grave activation, ceiling-spider descent, skeleton
wake-up, frog patrol recovery, enemy death fade/smoke, original projectile frames
and timing, mushroom ribbons, debriefing, difficulty/progression, touch controls,
and recovery saves. See their feature documents and targeted tests for limits.

Preserve deliberate user-requested differences: shorter/quieter ambience,
invulnerable no-clip, skip controls, readable distant projectiles, automatic save
history, and repairs to native content mistakes. Lighting every hand torch,
including torches unlit in the original, is an optional enhancement; this audit
has not established a missing original flame attachment for every such torch.

## Changes and checks during this audit

The specified home-screen header, promotional text, development note, eyebrow
and status indicator were removed, along with the Besturing development note.
Unused CSS for those elements was removed; the surviving footer actions remain
usable. A focused browser check passed at 1280×800 and 390×844, including the
five level cards, settings/help access, requested removals and no browser errors.

The existing scene check was updated for the removed header. One stale skill
fixture was corrected to respect the already implemented fresh-Caves BIG BENG
gate; only that named test was rerun. Historical status notes were clarified.
That menu-only audit ran no broad test suite, asset reimport, build or package
generation. The subsequent native follow-up imported actor lighting metadata
and ran only affected tests/scenes. No build or package generation was performed.
