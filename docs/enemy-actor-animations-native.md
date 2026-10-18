# Enemy and scenery animation audit

Checked 12–13 October 2026. This follow-up extends the
[RedCat animation recovery](redcat-animations-native.md) to enemies, Dungeon
Max's turret and authored scenery. No release builds were created.
Recovered lifecycle/interruption follow-ups below include 15 October work;
playthrough validation limits were updated 18 October 2026.

The comparison uses the local original `RcHcGame.dat`, original ACT files,
retained executable disassembly and the imported campaign data. It establishes
asset and code behavior, with focused tests of the port; it is not a new native
executable playthrough or proof that every encounter is frame-for-frame identical.

Original executable SHA-256:
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.

## Changes implemented

### Motion transitions

Enemies and the animated turret top now use the recovered 250 ms transition
between different clips. The outgoing pose is frozen, while the incoming clip
advances. Bone-local translation is interpolated and rotation uses SLERP, with
the original Hermite weight `3w² − 2w³`.

The native play wrapper at `0x4a0660` takes the different-clip branch at
`0x4a06b0`. At `0x4a0700–0x4a0720` it retains the outgoing clip/time only when
the preceding transition weight is below 0.5, then starts the new weight at 1.
The frame path at `0x4a0b24–0x4a0b8d` samples before subtracting `dt / 0.25`.
The actor defaults to blend type 1 at `0x5b3c45`; the wrapper at `0x5b3f20`
reaches the Hermite pose blend at `0x5cff30`.

The implementation retains that ordering and rapid-transition behavior. It does
not blend an actor's temporary loading preview into its first gameplay pose or
blend a dormant skeleton away from its pile of bones. Repeated muzzle queries
and the regular scene update advance the transition only once at a simulation
timestamp. Clip speed does not shorten the 250 ms transition.

### Playback speed and idle selection

`CRcEnemy::RandomMotionFactor` at `0x424950` resolves the default rate to
`0.8 + (rand() % 10000) * 0.00004`. The common enemy idle, walk, attack, hurt
and death paths now use this distribution instead of always playing at 1×.
The native CRT range is represented by a 15-bit sample before the modulo.
The port retains its saved per-enemy RNG rather than introducing the original
process-wide CRT stream.

| Behavior | Native evidence | Port behavior |
| --- | --- | --- |
| Common idle | `0x406d00–0x406d67` | Non-looping idle; select a new rate when it completes. |
| Walking | `0x4072a9–0x4072b4`, `0x42879b–0x42882f` | Loop the selected walk rate; retain `WalkMotionFactor`. |
| Skeleton retreat | `0x408790`, `0x4087e0`, `0x4286e0` | One nonlooping positive-rate `walkbw` at WalkMotionFactor squared, without a random sample. Clip completion ends the child; range stopping only pauses translation. |
| Ordinary shooting | `0x4076cf–0x4076da`, `0x4085c3–0x4085d1`, `0x40a6bf–0x40a6ca` | Sample a non-looping `shoot1` rate; release and cooldown use the same scaled duration. |
| Hit and death | `0x4037f3–0x4037fe`, `0x403b23–0x403b31`, hit factor at `0x4235f2` | Retain `HitMotionFactor`; scale reaction/death deadlines with playback. Death fade starts after the clip finishes. |
| Knight strike | `0x4050c0`, `0x40511f` | Fixed 1.8× `shoot1`; collision-window fractions use that duration. |
| Plant idle | `0x406a80–0x406b21`, `0x40f312–0x40f323` | Random `idle0` through `idle3`, non-looping, at `0.9 + (rand() % 10000) * 0.00001`. |
| Gargoyle idle | `0x40c565–0x40c584`, stone fallback at `0x404ca9–0x404cb2` | Select `idle0`, `idle1` or `static`; retain looping stone-alert fallback. |
| Active bat idle | Existing bat class mapping | Use airborne `idle2` and its duration, rather than the hanging idle's duration. |

The common enum mapping at `0x4233e0` is start, idle, walk forward, walk
backward, hit, death and shoot1. Touch pursuit at `0x40ac40–0x40ac4b` uses
walking rather than a separate invented strike clip. These existing mappings
remain intact. Bone Brutus's explicit charge rate, recovered at
`0x401467–0x401498`, remains separate from the common rate helper.

Jester Max's teleport clips are confirmed as forward, non-looping, 1× playback
on both sides of teleportation (`0x404b03–0x404b0f` and
`0x404bfb–0x404c04`). They were not changed to reverse playback. Witch
start/walk mapping and Dungeon Max's existing phase clocks remain in place.

### Save continuity

New saves retain the actual sampled enemy pose, selected idle variant, playback
rate, looping flag and outgoing transition. Turret saves retain the sampled
machine serial and pose. Restore accepts the optional pose only when it matches
the current state/clip, and validates its animation data before use.

Older saves still reconstruct one-shot timing from their gameplay deadlines.
An older zombie save with an existing walking state and no saved rate must not
restart that clip while it rises from the grave. The compatibility check covers
this case. No save-format migration or deletion of user saves is required.

### Authored scenery with no motion

The original `AdamAnyActor` constructor leaves the active motion null. A null
or empty `MotionName` skips animation selection at `0x4a8a79`; the frame path
at `0x4a09fe` does not start a clip by itself. The port previously chose the
first available clip anyway.

These four authored objects now keep their bind pose:

| Level data | Entity | Asset |
| --- | --- | --- |
| `lvl02a` (Graveyard) | `AdamAnyActor198` | `fleuribloem.act` |
| `lvl02a` (Graveyard) | `AdamAnyActor199` | `fleuribloem.act` |
| `lvl04a` (Tower) | `AdamAnyActor62` | `fleuribloem.act` |
| `lvl04a` (Tower) | `AdamAnyActor65` | `stnwitch.act` |

In particular, the stone witch no longer repeats its only clip, `death`, simply
because it was first in the imported file. The 56 explicit scenery motion names
all resolve to real imported clips and continue to play as authored.

The blank-motion hand torch `lvl02a/AdamAnyActor131` is an explicit exception:
it continues animating under the user's requested
[lit moving-torch enhancement](torch-flames.md). All 32 moving hand torches
retain that behavior; the 95 stationary torches remain stationary.

## Asset and numerical verification

All 165 original ACT hashes match the recorded imports; decoded bones and
animation keys match their original files. There are 40 animated non-RedCat
assets containing 156 clips (41 assets / 172 clips including RedCat).

All 156 non-RedCat clips were compared at 129 sample points each: **20,124
poses**. The comparison uses the retained float32 Genesis C interpolation/pose
reference, not a running instance of `RcHcGame.dat`. The largest local vertex
difference from the JavaScript sampler was approximately **0.0008083 model
units**, in `plant/idle1` (about 0.001536 after its 1.9 actor scale).

This verifies the imported motion data and pose sampler. It does not establish
every entity's placement, every animation-state transition, or every actor INI
setting. The audit also found older importer/default differences for initial
rotations and debris Size fields; these are not evidence of a broken animation
and were not mass-reimported or changed in this pass.

## Verification of the implementation

Only checks related to this work were run; no broad suite or package build:

- 17 enemy animation/sound/death checks from `enemy-animation.test.mjs`.
  Its unrelated, older `jump feedback` fixture is excluded because its mock
  omits the player state now required by the existing RedCat lifecycle code.
- 7 zombie grave-emergence checks, including legacy-save continuity.
- 8 native blend, pause, snapshot and turret-barrel checks.
- 7 native rate, idle selection, knight timing and authored-scenery checks.
- 6 animated projectile-origin checks.
- 3 moving/stationary torch checks.

All **48 focused checks passed**. The actual browser application also passed
a Castle knight save/load comparison, 60 frozen cutscene frames with unchanged
pose/geometry, resumed animation, four static scenery instances and the animated
hand-torch exception. The isolated browser profile had no page, shader or HTTP
errors. It did not touch the player's real saves.
An isolated render of the knight's idle and three strike-transition poses was
also visually inspected: the mesh remained intact as the weapon and body moved.
The first room screenshot was obstructed by authored walls and is not used as
visual evidence.

A CPU-only microbenchmark animated 32 actors over five before/after rounds,
with 300 warm-up and 600 measured frames per round. Median mean pose cost was
about **0.541 ms before / 0.571 ms after** on this host. It includes frequent
idle/walk transitions and skinning, not the whole renderer or a low-end device
test. This is evidence of a small measured CPU cost, not a frame-rate guarantee.
The existing unchanged-pose GPU upload cache, collision caches and bounded
navigation remain in place; idle variation is sampled on state entry/completion,
not every frame.

## Deliberate differences retained

This pass preserves the choices recorded in
[intentional fixes and findings](intentional-fixes-and-findings.md): smooth
zombie emergence, ceiling spider behavior, lit moving hand torches, protected
post-boss dialogue with corpse fade continuing, prompt removal of the defeated
combat witch to avoid a duplicate, and the existing turret damage fixes.
Audio scheduling, hearing ranges, music, movement recovery, visibility aids and
particle enhancements were not replaced with older native behavior.

## Recovered follow-ups

The following previously open behaviors have since been recovered and
implemented. Their linked evidence retains the remaining portability limits;
they should not be listed as wholly missing animation systems:

- [Stone-enemy and skeleton lifecycle follow-up](enemy-lifecycles-native.md)
  now connects the recovered wake/retract states and signed-rate saves.
  Knights have the optional `start` motion; gargoyles share the state machine
  but use its idle fallback. Initial skeletons retain the completed pile pose;
  returning skeletons visibly play their reverse settling motion.
- [Pursuit and hit interruptions](enemy-pursuit-interruptions-native.md) now
  connects common random hit versus sound-only response, dormant-stone health
  immunity, cancellation of the interrupted child and no restart while already
  hurt. Stone enemies re-enter a fresh vulnerable alert after hit. Bone Brutus
  has its distinct one-in-three damage branch; Mushroom Brutus uses the common
  receiver. Spiders retain hurt ownership through their ceiling wrapper, then
  choose a fresh descent or active child from current height. Dormant skeleton
  pose normalization preserves saved hurt/death. Skeleton retreat uses one
  authored `walkbw` at positive WalkMotionFactor squared, faces the current
  target and completes on the clip; AttackRange only pauses body translation.
  The [15 October dormant-hit follow-up](skeleton-hit-native.md) resolves
  the state replacement order: a selected hit resumes active alert without
  replaying wake, including older saved hurt states; no immunity was added.
- [Boss interruption/playback recovery](boss-interruptions-native.md) now
  connects Max/Witch sampled attack/hurt rates, actual motion deadlines,
  committed releases and fresh alerts. Both Brutus variants use recovered
  shooter/charge sequencing. Full runtime comparison, global RNG sequence
  and whole-engine dispatcher equivalence remain validation limits.
- Knight armour breakup now uses the recovered launch, spin, collision and
  individual fragment lifetimes. New saves preserve live fragment positions,
  velocities and spin; bounded saved-age replay is only the older-save fallback.
  Portable collision tolerances remain; see [death effects](enemy-death-effects-native.md)
  and [effect save continuity](effects-save-continuity.md).

## Remaining fidelity and validation limits

The [15–18 October source-runtime pass](campaign-validation-2026-10-18.md)
has completed the earned ordinary-input five-level campaign: all four Caves
altars, Max, the complete Tower ascent, both bonus rooms, five mirror placements,
the Witch and the unskipped ending/outro through the menu. The isolated source
browser used controlled game frames and read-only route planning; normal deaths,
checkpoint respawns, F9 and recovery selections remain in the record. Tower had
two deaths, one F9 living-save reload and one normal 2-minute recovery. The first
outro transition failed before playback with a browser media-player creation
error; ordinary reload+Continue then played the same full 55.047-second video to
native `ended` and menu. A subsequent [audio cleanup fix](audio-media-lifetime.md)
passed focused checks, without proving the initial failure's cause. See
the [detailed finale evidence](../temp_work/campaign-finale-2026-10-18/earned-finale-report.md).
Separate secret/fixture checks retain their setup boundaries; this was not an
all-collectibles run or a new frame-for-frame original-executable comparison.

Native global RNG
ordering, whole-engine dispatcher equivalence and every collision-dependent
animation transition remain outside the fidelity guarantee. Actual release
packages, target hardware and sustained low-end performance still require
validation; no builds or target-device runs were added by this documentation
update. The earlier pose microbenchmark does not replace those checks.

## Retained research

All new research and browser profiles are kept under
`temp_work/enemy-actor-animations-2026-10-12/`:

- `before/`: source snapshots from before this enemy follow-up.
- `native/*.asm` and `integration/*.asm`: the original executable paths cited
  above, including empty-motion constructor/setup/frame behavior.
- `assets/assets-report.json`, `assets/native-comparison.json` and
  `assets/rebuild-samples.jsonl`: asset inventory and numerical comparisons.
- `scenes-1791917166720/report.json`: successful application save/load,
  freeze/resume and scenery checks.
- `visual-poses.mjs` and `visual-1791917571002/`: isolated knight pose render
  and corresponding animation clocks.
- `pose-cost.mjs` and `pose-cost.json`: retained CPU-only comparison.

Shared transition evidence is in
`temp_work/redcat-animation-native-2026-10-12/native/`; full earlier executable
disassembly is in `temp_work/redcat-native-score-disasm.txt`.
