# Native implementation status and remaining work

Initial audit: 23 September 2026. Documentation status reviewed against source:
6 October 2026.

There is still work before this project can claim full original-game parity.
This audit compares the current source, imported original assets/settings and
compiled campaign scripts with the project's recovered executable evidence. It
is a source audit, not a fresh playthrough of either executable. Earlier research
notes describe their own point in time; their TODO lists are not necessarily
current. Follow the linked recovery documents for implemented behavior and
specific portability limits. Test results cited there belong to their recorded
runs; this documentation review did not rerun gameplay tests or create builds.

## Completion assessment (6 October 2026)

The Linux/Windows/web game is close to feature-complete. This bounded source
review found no clearly missing major campaign system or newly established
campaign blocker. That is not a substitute for playing the current source from
start to finish: the recorded complete campaign run predates many later fixes.

The practical remaining work, in priority order:

1. **Validate the current campaign in normal play.** Cover all five chapters,
   puzzle/secret progression, upgrades, boss exits, deaths/retries, saves/reloads
   and level transitions. Fix any reproducible failures with focused checks.
2. **Validate the intended releases.** Once builds are authorized, check the
   actual Linux/Windows packages and the deployed browser files, including
   controls, fullscreen/resolution, complete audio/video playback, persistence
   and sustained performance. Recent isolated Linux Electron and browser checks
   are useful evidence, but are not a complete Windows or campaign test.
3. **Refine specific native differences if exact fidelity is the goal:**
   arbitrary-position chase endpoint selection still uses a reconstructed
   nearest-node policy (`src/enemy-navigation.js`, `pursuitChecks`); some
   enemy-specific attack timing/interruption branches remain unrecovered
   ([patrol/boss limits](patrol-boss-native.md#remaining-fidelity-limits));
   animation clips switch without cross-clip blending (`src/animation.js`,
   `ActorAnimator.play`); knight armour still has reconstructed launch/spin and
   a fixed 3.5-second lifetime (`src/world.js`, `createKnightDebris`). Native
   comparison should establish the desired changes before replacing working
   behavior.
4. **Treat small presentation differences as polish.** Camera collision and
   compensation, Fleurifee's exact ribbon attenuation curve, and generic
   smoke/flame particle continuity across save loading retain documented
   boundaries. Preserve the requested overhead camera protection near walls,
   anti-stuck recovery, bounded lighting/navigation work and deliberate audio
   changes; they are not missing features to undo.

Android device readiness and Mac/ARM hardware validation are separate platform
milestones. Original RCR save import is optional migration functionality. Neither
should be confused with a missing level, puzzle or boss system in the existing
desktop/web game. There is no defensible completion percentage from a source
audit alone.

## Follow-up implementation and corrected findings

The requested native follow-up is now implemented in the areas supported by
recovered executable evidence. See [native follow-up](native-completion-followup.md)
and [player reactions/projectile contact](player-reactions-and-projectile-contact-native.md).

| Area | Current status |
| --- | --- |
| RedCat reactions | Original hit/death/respawn clips and rates are connected; checkpoint/game-over wait for death, respawn is protected, and save/load preserves the phase. |
| RedCat movement | Recovered directional speeds, grounded multiplier, takeoff/platform momentum and limited airborne steering now replace the uniform speed model; see [movement evidence](player-movement-native.md). |
| Enemy projectile origins | Original animated attachment bones are used at release, including both Dungeon Max turret barrels; see [attachment evidence](enemy-projectile-origins-native.md). |
| Pursuit and attacks | Native minimum-hop graph search, stored sampled salvos, spider return/ascent, all three touch-pursuit choices and knight strike windows are implemented. Patrols bypass full pursuit search. Native touching-enemy waypoint scoring/timing, uniform random patrols and shared node reservations were recovered on 2026-10-05, replacing continuous orbits. Bat fallback searches now share the original 16/48 trace limits; see [waypoint movement](enemy-waypoint-movement.md) and the [graveyard regression fix](graveyard-performance-regression.md). |
| Guardians | Native construction identifies a touch-enemy subclass. Actual body contact with a one-second cooldown is implemented; a distinct shield/state machine was not established. |
| Actor/projectile lighting | Actors now select their original local Sun, sample floor ambient, and shade vertices using raw RGB and root-based dynamic lights. Floor shadow flags, animated ambient and material clones are preserved. Projectile/impact lights affect actors and world surfaces. See [actor lighting](actor-lighting-native.md). BSP lightmaps use recovered texture-axis falloff, fixed-point channel gain and per-luxel clamping. |
| Spatial audio | Native directional stereo, BSP/PVS/area audibility and wall-distance attenuation are implemented. Requested ambience limits and fairy hearing exceptions are retained. |
| Shove/power move | The previous classification as a confirmed missing action was too strong. Bit 16 exists, but no playable input, animation or consuming gameplay action was recovered. The flag remains preserved; no speculative action was introduced. |

An unused imported setting alone is not evidence for missing gameplay. In
particular, TimeToRecoverFromHit is absent from the inspected executable;
HitMotionFactor is already used. The original cave reward correction still
awards BIG BENG rather than the unused power-move flag.

Native quick-play tutorial branches now apply automatically on a fresh replay
of a previously played chapter, through the existing campaign menu. First visits
and saved first-play sessions keep type 0. The connected scripts skip eight
Forest and two Graveyard tutorials; dormant Cave/Tower branches are left inactive
to preserve required boss and exit actions. No separate mode selector was added.
See [automatic replay introductions](replayed-level-intros-native.md).

## Recovered features and remaining portability differences

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
  Destructible-prop fragment launch, per-fragment physics, collision dimensions,
  spin and settling are recovered too. Fixed-step timing, local RNG and portable collision tolerances
  still differ from Genesis. Actor fragments now use the recovered actor light selection and shading. See
  [portal recovery](portal-native-recovery.md),
  [portal audio](portal-audio-native.md) and
  [debris recovery](debris-native-recovery.md).
- **Enemy death effects:** the native fade and purple smoke are implemented.
  Smoke uses a continuous trajectory rather than the native per-frame integrator.
  Knight armour breakup still has a separate reconstructed launch, spin and
  3.5-second lifetime; the recovered destructible-prop fragment solver does not
  replace it. See [death-effect boundaries](enemy-death-effects-native.md).
- **Smoke/flame emitters:** the native 15-slot pool, reusable launch templates,
  birth/fade timers, triple launch speed, gravity, square spread and world-unit
  sprite size are recovered. Moving hand-torch enhancements remain intact.
  Sound/music scheduling retains its intentional port behavior. Fixed 60 Hz,
  local RNG and regenerated smoke/flame pools on save loading remain portable
  differences; see [smoke/flame recovery](spout-effects-native.md).
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
  collision/compensation and cross-clip blending, fixed-step/local-RNG particle simulation, budgeted corona queries,
  and eight selected BSP lights. Authored shadow-casting BSP lights now use
  cached native per-luxel obstruction, before clamp and interpolation; see
  [world-light shadows](world-light-shadows-native.md).
  Actor lighting now follows the shipped game's root reference (per-bone mode
  remains disabled), vertex interpolation and raw-channel clamping. Floor ambient
  includes shadowed luxel checks; unsuccessful native memory reads and the
  cross-actor ambient leak are deliberately not reproduced. See
  [camera recovery](camera-native-status.md),
  [presentation recovery](presentation-native-recovery.md), and
  [world light falloff](world-light-falloff-research.md) and
  [actor lighting recovery](actor-lighting-native.md).

## Verification and platform work

1. **A normal complete playthrough of the current source is still outstanding.**
   The README records successful manual campaign runs of the older 0.9.3 build;
   that does not validate every subsequent source change. Controlled
   scene tests exercise many real triggers and boss handoffs, but do not prove
   that every puzzle, secret, death/retry, save/reload and level transition is
   reachable in sequence. Record a playthrough and compare the remaining
   behavior with native footage. Run focused regressions for each resulting fix.
2. **Validate the current source on actual Linux and Windows systems** when a
   new build is authorized. Older prepared packages do not establish coverage
   for later source changes. Check rendering, sound, pause/resume, controls and
   saves on both platforms.
3. **Additional platforms still need device validation.** Android now has a
   Kotlin/WebView shell, offline asset preparation, lifecycle/audio-focus
   integration, Back/fullscreen handling and renderer retry. Compilation,
   focused JVM tests and simulated host checks passed, but no APK/AAB or actual
   Android device run was performed. The next milestone is offline Level 1 on
   hardware with working touch, media and save/resume; then campaign,
   interruption/process-death, performance and signed-release validation. See
   [Android setup and remaining work](../ANDROID.md). Linux/Windows ARM64 and
   Intel/Apple Silicon macOS have documented experimental packaging recipes;
   actual target-hardware validation remains. See [portability](portability.md).
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
controller support and recovery saves. It also implements
[world streaming](world-streaming.md),
[smooth zombie emergence](zombie-activation-native.md),
[mixed-size skybox normalization](world-light-shadows-native.md#campaign-wide-audit-and-implemented-fix)
and [automatic replay tutorial skipping](replayed-level-intros-native.md).
See their feature documents and targeted tests for limits.

Preserve deliberate user-requested differences: shorter/quieter ambience,
invulnerable no-clip, skip controls, readable distant projectiles, automatic save
history, and repairs to native content mistakes. The subsequently requested
enhancement lights every moving hand torch, including those unlit in the
original, and attaches fire and light to its animated wick. This is an
intentional difference rather than a recovered native flame attachment;
see [Lit moving torches](torch-flames.md).

## Historical audit changes and checks (23 September)

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
