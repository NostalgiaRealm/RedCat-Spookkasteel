# Native implementation status and remaining work

Initial audit: 23 September 2026. Documentation status reviewed against source:
6 October 2026; enemy lifecycle, attack, threshold and boss follow-ups updated
15 October, with source-runtime validation status updated 18 October 2026.

There is still work before this project can claim full original-game parity.
This audit compares the current source, imported original assets/settings and
compiled campaign scripts with the project's recovered executable evidence. It
began as a source audit; the bounded port playthrough evidence added on
18 October is described below. It is not a fresh original-executable comparison.
Earlier research
notes describe their own point in time; their TODO lists are not necessarily
current. Follow the linked recovery documents for implemented behavior and
specific portability limits. Test results cited there belong to their recorded
runs; this documentation review did not rerun gameplay tests or create builds.

## Completion assessment (18 October 2026)

The Linux/Windows/web game is close to feature-complete. This bounded source
review found no clearly missing major campaign system. The subsequent current-
source playthrough found and fixed Castle fall-pocket recovery and dead-save
overwrite failures with focused regressions. The earned five-level source
campaign has now completed Forest, Castle, Graveyard, all four Caves altars,
Max, Tower's full ascent and both bonus rooms, the five mirrors, the Witch,
the unskipped authored ending and the full outro return to menu. It used normal
controls and saves/recovery in an isolated browser profile, with controlled
game-frame advancement and read-only route planning. It was not deathless and
did not use a save import or inventory/health/puzzle-state grants in the earned
route. Older complete campaign records predate many later fixes.

All 13 authored secret objects now have physical ordinary-input route checks
across the earned run and explicitly separate continuations/fixtures. Tower's
two optional bonus rooms were also entered, their 32 loose pickups collected,
and both return routes completed in the earned campaign. The secret checks
include separate starts: the final campaign save has 7 secrets, not all 13, and
does not establish collection of every bottle, money bag or enemy. The
[15–18 October validation report](campaign-validation-2026-10-18.md) records the
setup boundaries, failed attempts, fixes and retained evidence.

Tower included two actual deaths/checkpoint respawns, one F9 living-save reload
and one normal 2-minute recovery selection. Its first outro attempt failed at
time 0 with a browser media-player creation error; ordinary reload+Continue
restored the completed debrief, then the same 55.047-second media played to its
native `ended` event and menu. Follow-up fixed retained HTML audio-player
resources at release and passed focused lifetime/browser checks; this does not
prove the cause of the original startup failure. See the
[detailed earned finale record](../temp_work/campaign-finale-2026-10-18/earned-finale-report.md)
and [audio cleanup evidence](audio-media-lifetime.md).

The practical remaining work, in priority order:

1. **Validate long-session media on the intended runtime.** Audio release now
   explicitly destroys the browser player; focused checks observed 66 matching
   creations/destructions and successful outro startup. The complete campaign
   preceded this small cleanup change. Its successful normal reload retry
   establishes a working outro asset, but not the cause of the initial error.
   Keep the failure and separate secret/fixture setup scopes visible.
2. **Validate the intended releases.** Once builds are authorized, check the
   actual Linux/Windows packages and the deployed browser files, including
   controls, fullscreen/resolution, complete audio/video playback, persistence
   and sustained performance. Recent isolated Linux Electron and browser checks
   are useful evidence, but are not a complete Windows or campaign test.
3. **Refine specific native differences if exact fidelity is the goal:**
   ordinary authored chase now uses recovered adjacent-node closer and skeleton
   farthest-retreat selection. The bounded arbitrary-position search in
   `pursuitChecks` remains an off-graph collision-recovery fallback. Common hit
   interruption, dormant-stone immunity and the Brutus damage receivers are
   recovered and implemented. Skeleton retreat uses its one-shot backward
   clip independently of its distance-based body stop. Spider hit recovery
   starts a fresh height-selected alert, and touch cooldown remains independent
   of hurt. The 15 October follow-up now delays wait arming to the first
   controller check, resolves skeleton dormant-hit dispatch, and connects
   Max/Witch interruptions and both Brutus shooter parents. See
   [wait clocks](shooter-wait-native.md), [skeleton hits](skeleton-hit-native.md),
   [boss interruption/playback](boss-interruptions-native.md),
   [pursuit and hit boundaries](enemy-pursuit-interruptions-native.md) and
   [patrol/boss limits](patrol-boss-native.md#remaining-fidelity-limits).
   Shared knight/gargoyle stone-alert and skeleton wake/settling now follow
   the recovered lifecycles, including signed-rate save restoration. Fresh
   skeletons retain the already-settled pile pose rather than briefly standing
   during native reverse initialization; see [enemy lifecycles](enemy-lifecycles-native.md).
   RedCat, enemy actors and Dungeon Max's turret
   now use the recovered 250ms motion transition; common-enemy rates and idle
   variants are connected. See the [RedCat audit](redcat-animations-native.md)
   and [enemy/scenery animation audit](enemy-actor-animations-native.md).
   Knight armour now uses the recovered shared actor-particle launch, spin,
   collision and individual fragment lifetimes. New saves preserve live fragment
   positions, velocities and spin; bounded saved-age replay remains only for
   older saves. Portable collision tolerances still differ. See
   [armour recovery](enemy-death-effects-native.md) and [effect continuity](effects-save-continuity.md).
4. **Treat small presentation differences as polish.** Camera collision and
   compensation retain documented portability boundaries. Generic smoke/flame
   particle pools, knight fragments and audio playback now survive new saves;
   older saves without those fields cannot recover their lost state, and
   browser output-buffer/sample timing is not preserved. See
   [effects](effects-save-continuity.md) and [audio](audio-save-continuity.md).
   Preserve the requested overhead camera protection near walls,
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
| RedCat reactions | Original hit/death/respawn clips and rates are connected; checkpoint/game-over wait for death and respawn is protected. Existing death-animation snapshots remain loadable; new save requests with non-positive health preserve the last living save. See [save behavior](autosave.md). |
| RedCat animation | All 16 imported clips verified against original motion data. Recovered strafe rates, looping jumps, 80% shooting handoff, post-respawn idle, drop probe and 250ms transitions are implemented; animation phases and blends survive saves. Modern control adaptations remain; see [animation audit](redcat-animations-native.md). |
| Enemy/scenery animation | All 156 non-RedCat clips checked against original motion data. Enemies and the turret blend between clips; common-enemy playback rates, knight strikes, plant/gargoyle idle selection and pose saves are connected. Knight wake/retract, gargoyle no-start fallback/settling and skeleton randomized wake/reverse settling are implemented; see [lifecycles](enemy-lifecycles-native.md). Blank authored scenery motions remain static, with the intentional moving-torch exception. |
| RedCat movement | Recovered directional speeds, grounded multiplier, takeoff/platform momentum and limited airborne steering now replace the uniform speed model; see [movement evidence](player-movement-native.md). |
| Enemy projectile origins | Original animated attachment bones are used at release, including both Dungeon Max turret barrels; see [attachment evidence](enemy-projectile-origins-native.md). |
| Pursuit and attacks | Authored pursuit uses recovered adjacent-node random closer selection and deterministic farthest skeleton retreat, with mid-edge range stopping. Skeleton retreat faces the current target and plays one backward-walk clip independently of the distance stop. Touching spiders, green bats/ghosts, zombies and guardians share the three-way contact-pursuit state, whose separate contact cooldown survives hurt. Ordinary moving shooters preserve committed salvos and the recovered parent move/wait choices; plants/gargoyles retain their standing-shooter commitment. First-check wait arming, Mushroom/Bone Brutus shooter parents, Max/Witch hurt completion and committed boss releases are now connected; see [boss follow-up](boss-interruptions-native.md). Explicit returns keep their authored StartPoint terminal. Minimum-hop routing remains for fixed destinations, and bounded off-graph collision recovery remains a portable fallback. Patrol, approach and retreat bypass full search on authored edges; recovery retains 16/48 sweep limits. See [pursuit and hits](enemy-pursuit-interruptions-native.md), [waypoint movement](enemy-waypoint-movement.md) and the [graveyard safeguards](graveyard-performance-regression.md). |
| Enemy hit responses | Common damage chooses a hit reaction on the native 50% branch; sound-only responses leave the action intact. Selected reactions cancel pending release, remaining salvo and wait, while repeated hits do not restart an active hit motion. Spiders choose a fresh alert from current height after hurt; selected skeleton hits replace dormant/wake/retract with hurt then active alert, without an extra wake; older saves normalize to that order. Dormant knights/gargoyles ignore HP damage but can react; their wake/hurt phases remain vulnerable. Bone Brutus accepts damage on its distinct one-in-three branch, while Mushroom Brutus uses the common receiver. Fractional HP is deliberately retained so small continuous damage ticks accumulate. See [hit evidence and limits](enemy-pursuit-interruptions-native.md). |
| Guardians | Native construction identifies a touch-enemy subclass. Actual body contact with a one-second cooldown is implemented; a distinct shield/state machine was not established. |
| Actor/projectile lighting | Actors now select their original local Sun, sample floor ambient, and shade vertices using raw RGB and root-based dynamic lights. Floor shadow flags, animated ambient and material clones are preserved. Projectile/impact lights affect actors and world surfaces. See [actor lighting](actor-lighting-native.md). BSP lightmaps use recovered texture-axis falloff, fixed-point channel gain and per-luxel clamping. |
| Spatial audio | Native directional stereo, BSP/PVS/area audibility and wall-distance attenuation are implemented. Requested ambience limits and fairy hearing exceptions are retained. |
| Fleurifee ribbons | Original PTrail artwork, width1.92, alpha100/255, linear800ms attenuation/cutoff, distance sampling and endpoint clocks are recovered and implemented. Ribbons stop with the orbiters; departure stars retain their separate fade. Fixed-step simulation, bounded saves and skip cleanup remain; see [ribbon evidence](fairy-ribbon-fade-native.md). |
| Shove/power move | The previous classification as a confirmed missing action was too strong. Bit 16 exists, but no playable input, animation or consuming gameplay action was recovered. The flag remains preserved; no speculative action was introduced. |
| Playthrough fixes | Castle fall-pocket recovery now checks bounded local escape routes before returning to a revalidated previously reached position; downward exits and closed doors retain their guards. Saving after death no longer replaces the living latest save or recovery history; dead-profile switching still works, while living write failures block it. See [movement recovery](movement-recovery.md), [autosaves](autosave.md) and the [campaign evidence](campaign-validation-2026-10-18.md#fixes-found-during-the-playthrough). |

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
  spin and settling are recovered too. Destructible explosions now apply the
  recovered radial damage with a 400 ms clock armed on the first active frame,
  including full-frame doses through the inclusive deadline, to RedCat, enemies and
  destroyable props, including brush LOS and active-blast save restoration.
  Fixed-step timing, local RNG and portable collision tolerances
  still differ from Genesis. Actor fragments now use the recovered actor light selection and shading. See
  [portal recovery](portal-native-recovery.md),
  [portal audio](portal-audio-native.md),
  [debris recovery](debris-native-recovery.md) and
  [explosion damage and strict accumulated prop thresholds](explosion-damage-native.md).
- **Enemy death effects:** the native fade and purple smoke are implemented.
  Smoke uses a continuous trajectory rather than the native per-frame integrator.
  Knight armour now shares the recovered actor-particle solver: nine original
  fragments, upward 40–80 launch speed, individual 3–4-second lifetimes and
  axe-only settling fade. New saves retain live fragment positions, velocities,
  spin, contacts and fade state; legacy saves replay a bounded trajectory.
  See [death-effect boundaries](enemy-death-effects-native.md).
- **Smoke/flame emitters:** the native 15-slot pool, reusable launch templates,
  birth/fade timers, triple launch speed, gravity, square spread and world-unit
  sprite size are recovered. Moving hand-torch enhancements remain intact.
  Saves preserve all pool slots, launch templates, timers, color, RNG and the
  fractional simulation step, including synthetic hand-torch flames. Fixed
  60 Hz and a local RNG remain portable differences. Sound/music scheduling
  retains its intentional port behavior; see [smoke/flame recovery](spout-effects-native.md).
- **Fleurifee effect restoration:** saves now retain the full particle pool,
  reused-slot oscillators, RNG, fractional simulation step, trails, path and
  pulse/color state. Active and departing effects survive actual menu save/load
  without replaying appearance or disappearance sounds. Legacy age-only saves
  still reconstruct their effects. Audio now saves playback positions,
  delayed-loop waits, crossfade progress and the dialogue queue too; browser
  output-buffer/sample timing remains outside the continuity guarantee. See
  [fairy save restoration](fairy-save-restoration.md) and
  [audio save continuity](audio-save-continuity.md).
- **Music volume envelope:** the native constant-rate control-gain ramp and
  logarithmic conversion are recovered and implemented, including partial
  fade reversals. Intentional track scheduling and full-track looping remain.
  See [music fade recovery](music-fade-native.md).
- **Camera/presentation details:** the final camera approach now follows the
  recovered distance/speed lookup. Beacon texture movement and corona radius
  fading/occlusion are connected, and footsteps preserve the native independent
  Wobble phase across saves. BSP falloff uses original imported texture axes and
  four-sample lightmap interpolation. Remaining differences include camera
  collision/compensation, fixed-step/local-RNG particle simulation, budgeted corona queries,
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

1. **The earned current-source campaign is complete, within its recorded scope.**
   The [15–18 October validation report](campaign-validation-2026-10-18.md)
   separates the ordinary-input five-level run, actual deaths/recoveries,
   secret continuations/fixtures and source-platform checks. The full ending
   was unskipped; the final video reached native `ended` and menu after an
   ordinary completed-save reload following its initial startup error. The
   controlled-frame browser runner and read-only route planner do not establish
   human real-time combat difficulty, exact native animation fidelity or target
   package/hardware behavior. Compare remaining fidelity questions with native
   footage and run focused regressions for resulting fixes.
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
[native skybox face mapping and boundaries](skyboxes-native.md), including
mixed-size skybox normalization,
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
