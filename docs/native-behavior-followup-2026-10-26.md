# Native behavior corrections — 26 October 2026 follow-up

This is a separate change record for the continued comparison requested after
the [initial full-code comparison](original-source-comparison-2026-10-26.md).
Both records describe local source changes after release 1.0.2; neither creates
packages or changes the released version. The native installation is read-only.

The reference is the installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Readable recovered code and original instruction listings are in the separate
[`RC_ORIGINAL_DECOMPILED`](../../RC_ORIGINAL_DECOMPILED/README.md) folder.
Decompiler output is checked against instructions where inferred types or x87
expressions are ambiguous. The [intentional changes](intentional-fixes-and-findings.md)
remain the preservation policy.

## RedCat's firing cycle

The port waited for the complete shooting animation or the projectile factory's
recharge setting before another held shot. Native RedCat discards that factory
timer and clears the firing state at 80% of `shoot1`. The next controller check
can begin another shot. Ordinary/power shots now rearm after about 0.814 seconds;
BIG BENG release has about 0.549 seconds remaining from its held pose. Pellet
release is strictly **after** 46%, rather than at or just before it. The complete
visual animation deadline remains available for pose calculation.

The existing charge correction, input press/release handling, protected dialogue,
death cancellation and saved attack state remain. Earlier saves can finish their
one existing longer cooldown before future shots use the corrected cycle.
Evidence: `0x4324a4`, `0x432906`, `0x433310–0x43332f`, `0x434dac` and
`0x434d03–0x434d13`. Details: [player projectile behavior](player-projectiles-native.md).

## Projectile flight and dormant animation hints

Shared native projectile code accelerates and caps velocity before moving; the
old player helper integrated acceleration continuously instead. At a 60 Hz
reference cadence RcShot now travels 381.333 units in its first second, matching
the recovered ordering, instead of 380. The port sums those steps in constant
work and saves partial-step phase. Enemy gravity/capping and Witch homing also
follow their recovered order; homing happens after surviving movement/contact.
Curved paths are swept segment by segment rather than cutting corners.

The canonical 60 Hz clock, smooth partial movement and bounded 100 ms / seven
segment enemy update are explicit portability safeguards. Normal game updates
fit that budget; exceptional large direct calls preserve saved pending time.
Straight gravity-free shots still need one sweep. Tests cover 10–240 Hz,
collisions, freeze and save continuation. Authored player shots have no gravity;
the specialized player helper does not claim parity for invented combined
acceleration/gravity shots. See [player flight](player-projectiles-native.md) and
[enemy flight](native-enemy-projectile-flight.md).

The dormant `RcHintMotion` API now accepts the native 0–15 range and saves its
persistent value. Native hint 12 requests non-looping `fall1` at 1.5×, with
restart/clear semantics and jump priority. Protected cutscenes, reactions and
zero-time render queries retain their intentional safeguards. All five campaign
programs declare this API but contain no call, so this is dormant API coverage.

## World scripts and moving buttons

- Buttons now follow the original request, start/sound, movement and completion
  phases on separate controller checks. Only explicit script requests latch
  during motion or while disabled; walking into or shooting a moving button
  cannot queue a reversal. Continued contact can activate a settled button.
  Endpoint callbacks complete before a queued command is consumed. Native
  strict endpoint tests and motion-time float stores are preserved. Saves keep
  the phase and pending request without repeating sound or completion. Legacy
  unfinished paused motion can resume after Enable, without replaying its start.
  A valid saved phase determines logical on/off state; Reset inside a callback
  cannot make an on transition accidentally dispatch an off completion.
- Button Reset restores its original enabled state, use count and on/off pose;
  an initially-on button resets to its motion end. The intentional maze death
  reset also clears queued requests so they cannot undo the recovered maze.
- Physical triggers follow waiting, new-entry, occupied and just-left phases.
  Minimum counts advance on occupied waiting checks; damage belongs to Stay,
  and exhausted triggers no longer damage or leave without an accepted entry.
  Explicit script Trigger sends Enter and Leave even when automatic contact
  is disabled. Positive maximum counts still apply; limits at or below zero
  mean unlimited. Saves preserve or safely migrate occupancy state.
- ModelController MoveTo/SetTo replace authored repeat mode with a target,
  retaining pending commands while disabled and settling at that target.
  Backward MoveTo dispatches crossed markers in native ascending order;
  backward SetTo has no intervening labels. Callbacks see the old timeline
  before the final pose is committed, and MoveTo completes strictly after
  passing its target. Validated saved marker masks prevent duplicate callbacks
  during blocked/disabled retries. A replacement command cancels stale movement.
- Completed once-only controllers stay at their endpoint when re-enabled;
  they do not rewind or replay the final marker. Reset restores authored
  InitialPosition. Loading an older snapshot into an already-used host clears
  a later target override.
- Cutscene skipping finishes enabled queued controller work and deferred button
  callbacks before stopping. Disabled pending work remains pending.

The real Castle bookcase and Graveyard painting/maze interactions have focused
checks, alongside fan/contact guards and Caves aggregate callbacks. Native
button machine-code execution and the actual JS controller agree for sixteen
sampled checks, including state, timeline, latch, count and callback order.
This is a bounded state-machine comparison, not a new campaign playthrough.
The final world/controller verification records 71 distinct passing checks;
overlapping diagnostic and rerun logs are excluded from that count.

The target-command and zero-limit corrections also restore dormant API cases:
all five campaign scripts/entities were scanned, and those cases are not used
in shipped content. They are not presented as missing campaign puzzles.
See [world command evidence, call sites and checks](world-script-commands-native.md).

## Davi-Script conversions and comparisons

These discrepancies were confirmed by executing the original small machine-code
routines in an isolated x86 emulator with private image/stack memory. The original
game loop, Windows APIs, user profiles and saves are not run or modified.

| Operation | Previous behavior | Corrected native behavior |
| --- | --- | --- |
| Double to string | JavaScript's usual notation and direct six-digit rounding | Original `%lg`: first form 17 decimal digits, then round that string to six; scientific notation below `1e-4` or from `1e6`, three-digit exponent; e.g. `1234567` becomes `1.23457e+006` and `1.234575` becomes `1.23458` |
| String to double | JavaScript parseFloat, Unicode whitespace and lost negative zero | Original decimal grammar with C-locale whitespace, E/D exponents and signed zero; literal Infinity/NaN are not recognized |
| String to integer | `parseInt`, with Unicode whitespace and lost low bits on very long input | C-locale whitespace and signed 32-bit wrapping after each decimal digit |
| String ordering | Unicode code-unit ordering | Unsigned Windows-1252 byte ordering over the stored length, including embedded NULs; `€` sorts before `é` |
| Double remainder | JavaScript `%` | Native subtracts divisor times a truncated signed 32-bit quotient; the native large-quotient behavior is retained |
| Double to integer | Unbounded JavaScript truncation/wrapping | Low 32 bits of the native signed 64-bit conversion; out-of-range/invalid conversions have low word zero |

Native entry points: binary evaluator `0x5f8990`, unary evaluator `0x5fc480`,
string comparison `0x484b80`, decimal parser `0x60ae85`, formatting wrapper
`0x5e7010` and CRT `0x60df9f`. The emulator invokes the shipped formatter
initializer `0x60a4d6`, rather than substituting the host system's modern printf.

The differential corpus contains **1,332 passing comparisons**: 1,000 finite
number formats, 200 integer strings, and 132 integer/double arithmetic and
comparison cases. Additional direct probes cover byte ordering, embedded NULs,
non-finite formatting and integer conversion boundaries; sixteen shipped atof
probes cover decimal grammar and signed zero; a further 24 boundary inputs
match byte-for-byte, including incomplete exponents and signed underflow. Sixteen focused
JavaScript checks pass, including every shipped script handler. Ninety additional
formatter cases cover halfway rounding, adjacent binary64 values, notation
boundaries and the smallest/largest finite values. Two halfway discrepancies
exposed the native two-stage rounding (`0x61d4a8`, `0x61e991`, `0x61d431`);
after correction all ninety and the original 1,332 comparisons agree. The unary casts
and numeric edge cases are language coverage, not a claim that existing puzzles
previously depended on them. A separate 47-case operator review found no
further dispatch/coercion regression; seven small math differences remain within native x87/emulator
precision. They were not replaced with hardcoded answers. Exact transcendental
behavior outside the tested inputs is not established.

## Death smoke and Jester teleport particles

Ordinary enemy smoke now uses the native lazy lifetime/fade clocks, byte alpha,
velocity-before-position rise, remaining-life size and camera-position-facing
quad. Jester swirls now use the native 500 ms radial clock, delayed fade,
19/29 ms emission rearming, rotation direction and previous-life-fraction
height. The old 1.5-second cleanup cut off the last particles; cleanup and saves
now retain the complete finite sequence.

Shared precomputed tables keep playback bounded without historical replay,
extra draw calls or collision queries. Existing corpse fading, score counters,
freeze behavior and audio events remain. Original-byte execution compared 422
death-smoke ticks and 212 Jester frames (1,830 live-particle samples): every
count, alpha byte and size agreed. The common zero-launch smoke trajectory
agreed exactly; maximum Jester position difference was 0.0002861023 world
units, a documented x87/float32 transform boundary. Twelve independent native
quad versus actual shader views matched pixel-for-pixel on hardware WebGL.
See [effects recovery and full verification scope](death-smoke-native-followup-2026-10-26.md).

## Explosion light

Normal exploding props were missing their native light flash. Each blast now
adds the recovered one-second `pszzzspmea` radius sequence, with maximum radius
`SizePercentage × .01 × 800`, stored to float32 and truncated. Normal flashes
use RGB 255/192/0; green flashes use 34/218/40. Smoke-only effects create no light.
The source is `0x58dbdd–0x58dd4a`; it is a larger light than a player pellet impact.

The native light samples the previous pattern time before advancing it. Its
lifetime arms on the first update, and expiration is strictly after the
deadline. New actors begin updating on the next actor-list traversal. At the
port's canonical 60 Hz cadence, a new light therefore starts ticking at 16 ms,
survives tick 61 and retires on tick 62. This corrects both the initial phase
and the old exact-one-second cutoff. Player-shot impact lights use the same
kernel, retaining their different colors and maximum sizes; their sprite,
shockwave, firing and audio timing are unchanged.

Saves preserve validated scalar light clocks, including delayed secondary
blasts. A synchronous save advances a copy to its save time without mutating
the live renderer. Old snapshots reconstruct at most 62 tiny clock steps.
Light records and colors are reused; actor and world lighting keep their
existing selection limits, including eight world-light slots. No additional
shadow queries or light objects are allocated per frame.

Seventy-four original-byte light/interpolator samples agree exactly. Eight
focused light checks, four affected prop-save checks, two player-impact checks
and one Electric-save check pass on the final source. These counts overlap
other sections. The factory assembly is in the evidence's `effects/` folder;
the timer probe, final comparisons and save checks are in
[`world/light-review/`](../temp_work/native-behavior-followup-2026-10-26/world/light-review/).

## Prop-fragment save robustness

New saves preserve live crate, gravestone, door and other prop fragments, as
already supported for knight armour. Position, velocity, spin, contacts,
settlement and fade resume without replaying historical bounces against current
doors or platforms. Empty saved cohorts stay empty; old saves retain bounded
reconstruction. Synchronous script saves preserve the last actual integration
time. Imported records are validated and never contain pooled renderer objects.
This is a portable save improvement, not a claim about native Windows save files.

Four focused save/continuation/cleanup tests and thirteen affected existing
debris/explosion tests passed. An independent review found and resolved callback
validation and synchronous-save timestamp issues before the final four checks.
See [save details](effects-save-continuity.md#breakable-object-fragments-26-october-follow-up).

## Dormant green and Electric explosion branches

Green blasts now use the original eight `Expl_sup` images and their alpha masks,
plus the original 600 ms expanding `Ring` effect. Previously they tinted normal
explosion artwork. The ring and existing charged-shot shockwave share the same
recovered geometry; existing charged-shot timing and size remain unchanged.

The independent Electric flag now creates its native three-path gold-spark
generator, original masked sprite frames and tapered streaks. Path creation,
burst timing, newest-first updates, next-tick child activation, motion and
discrete `spark1`–`spark6` sounds follow the recovered routines. This does not
change ordinary sound/music scheduling. Saved effects preserve their live
paths, sparks, deadlines and random state without replaying old sounds.

All 167 actor files were checked: the 139 with explosion settings disable both
flags. These are dormant native branches, not missing effects on ordinary
campaign crates. Textures and batches are created only when requested, with
bounded shared rendering and update work. Sixteen imported images match the
original color/alpha pixels exactly. Nine dynamics checks, five final
renderer/save/audio checks and sixteen original-byte spark-motion cases pass;
an isolated hardware-WebGL scene also verifies rendering and complete cleanup.

The requested `grobber_trail3.bmp` is absent from the entire original install
and CD. Original loader code reaches a missing-resource assertion; no native
fallback was found. The port retains trail state but omits that unavailable
visual instead of inventing artwork or reproducing the assertion. This does
not affect shipped levels because Electric is disabled throughout. Detailed
addresses, evidence, precision limits and overlapping check counts are in
[the explosion-variant record](explosion-variants-native.md).

## Preserved choices and evidence scope

The intentional changes include modern input/camera protection, robust earned
abilities, saves/recovery, cutscene protection/skipping, audio/music scheduling,
moving lit torches, bounded navigation, room/model streaming and shared render
batches. Fixed visual steps and saved local random streams remain; this work
does not restore the original process-wide random sequence or frame-rate bugs.

The inspected native camera obstruction solver includes a retained alternative
view and a bounded angular search (`0x45aa40`/`0x45a600`). The port's explicitly
requested overhead/body avoidance and modern camera-relative control remain in
place. The recovered speed table used by authored routes is already implemented.
This review does not replace those camera safeguards or establish identical
Genesis collision results.

The retained probes, instruction excerpts, command inventory and exact check
outputs are under
[`temp_work/native-behavior-followup-2026-10-26/`](../temp_work/native-behavior-followup-2026-10-26/).
Native-kernel execution, source simulation and shader pixel comparison establish
their stated scopes; they are not a fresh complete native/port campaign run or
target-device package validation. No builds or publication are performed.

The [consolidated verification record](../temp_work/native-behavior-followup-2026-10-26/verification.json)
records retained check outputs, original-file verification and final changed
source/document hashes. Test logs overlap and must not be added together as a
count of distinct tests. Remaining precision and unavailable-resource boundaries
above remain explicit; this record does not assert universal behavioral equivalence.
