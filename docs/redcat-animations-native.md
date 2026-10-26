# RedCat animation audit and playback fixes

Audited and corrected on 12 October 2026. This covers the controllable RedCat
actor, including movement, attacks, reactions, scripted visibility and saves.
That pass changed RedCat's transitions; the subsequent
[12–13 October enemy/scenery follow-up](enemy-actor-animations-native.md)
connected enemy and turret blending. Historical scope and save-policy links
were clarified on 18 October 2026; no new animation tests or builds were run
for that documentation update.

The later [15–18 October source-runtime campaign](campaign-validation-2026-10-18.md)
is now complete through all five levels, both Tower bonus rooms, the unskipped
authored ending and full outro return to menu. It used normal controls with
controlled game-frame advancement and read-only route planning in an isolated
profile. The record retains ordinary deaths, checkpoint/recovery and reload
boundaries; Tower specifically had two deaths, one F9 living-save reload and
one normal 2-minute recovery. Its first outro attempt failed before playback
with a browser media-player creation error; ordinary reload+Continue restored
the completed debrief, then the full 55.047-second outro reached native `ended`
and menu. A subsequent [audio resource cleanup](audio-media-lifetime.md) passed
focused checks; the initial startup failure's cause remains unproven. The
[detailed finale record](../temp_work/campaign-finale-2026-10-18/earned-finale-report.md)
does not replace the animation comparisons below or validate release packages,
target hardware, every collectible or real-time human combat difficulty.

## Original evidence

Reference executable: installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Addresses below are virtual addresses in this executable.

The original `RedCat.act` was re-decoded and compared with
`assets/actors/redcat.json`. The body, bones, vertices, normals, materials and
all **16 motion records match**. Each RedCat motion uses Hermite translation
and SLERP rotation, with named bone paths and no embedded motion events. These
individual paths are non-looping; repeating a complete motion is a separate
runtime flag. The imported `charge` or `fall2` filenames alone do not establish
a missing action.

A numerical comparison sampled 129 times per motion (**2,064 poses**) against
compiled retained Genesis Hermite, SLERP and quaternion-pose routines. Maximum
vertex difference was 0.000339 actor units, or about 0.000441 world units at
RedCat's 1.3 scale. These are floating-point/rounding differences, not a detected
wrong motion or coordinate conversion. The comparison uses retained Genesis
source, not a capture of the original executable's running renderer.

Reproducible scripts, executable disassembly, constants, comparison reports and
pre-edit copies are retained in
[`temp_work/redcat-animation-native-2026-10-12/`](../temp_work/redcat-animation-native-2026-10-12/).
In particular, `native/findings.md` records the source state **before** the fixes
below, and `pose/native-comparison.json` records the numerical comparison.

## Motion selection

| Situation | Original motion / rate | Current behavior |
| --- | --- | --- |
| Standing / conversation | `idle`, 1×, looping | Preserved. Conversation idle has priority over movement and pending shots. |
| Forward movement | `walkfw`, 1×, looping | Preserved; native walking/running share this clip. |
| Backward movement | `walkbw`, 2.2×, looping | Preserved. |
| Left / right strafe | `strafel` / `strafer`, 2.4×, looping | Corrected from 1×. |
| Normal jump | `jump1`, 1.4×, looping during prolonged flight | Corrected from holding the last frame. Its second half already contains descent. |
| SuperSkippie boost | `jump2`, 1.3×, looping during prolonged flight | Corrected from holding the last frame; retain the previously requested reliable boost restart. |
| Large ledge drop | `fall1`, 1.5×, non-looping | Retains the >80-unit floor-distance increase gate; probe length and distance memory now match native. |
| Landing / small ledge | Return to movement or idle | No separate landing clip is selected in the recovered ordinary player code. |
| Hurt | `hit`, 1.5×, non-looping | Preserved; interrupts shooting. |
| Death | `death`, 1.6×, non-looping | Preserved; checkpoint or game-over follows completion. |
| Checkpoint respawn | `re-spawn`, 1×, non-looping | Preserved; its completion now enters `idle` at 1.7× until another animation state takes over. |
| Ordinary / power shot | `shoot1`, 1.9× | Projectile release remains at 46%; movement/jump/idle resumes selection at 80% instead of waiting for 100%. |
| BIG BENG charging | Hold `shoot1` at 26%, then 1.9× on release | Preserved, including 46% projectile release; the same 80% visual handoff now applies. |
| Portal hide/show | Scripted visibility/position | No new portal-specific or respawn motion is selected by the recovered hide/show wrappers. |
| `walkbwl`, `walkbwr`, `fall2`, `charge` | Imported clips, not selected by the recovered ordinary player selector | Retained in the asset; no speculative action assigned. |

Strafe rate/loop evidence: `0x432f22–0x432f3c` and `0x432fc2–0x432fe5`.
Jump rate/loop evidence: `0x432dcb–0x432de8`, `0x432e81–0x432e9e`;
`0x4a0bb0` stores the loop flag and `0x4a0a66–0x4a0a8d` wraps time.
Respawn idle: `0x4331ed–0x433244`. Standard idle remains 1× at `0x432bf9`.

The original jump selection uses jump input/state, not upward velocity alone.
The port now uses the controller's actual jump/boost event identity, so a fan
lifting a stationary RedCat does not invent a jump animation. Physics, jump
height and airborne control were not changed by this audit.

`0x4363a0` only remembers **positive** downward floor distances and reports a
drop when the new positive distance exceeds the remembered distance by more
than 80. The probe at `0x4d6720` is **1,000 units**, not the port's former 10,000.
The probe and remembered distance now follow those rules. A normal jump still
suppresses the separate long-drop pose.

Shooting's 80% threshold is at `0x433310–0x43332f`, using normalized time from
`0x4a1060` and the double `.8` at `0x64c568`. Visual handoff is about 0.814 s
from an ordinary shot's start, or 0.549 s after release from the .26 charge hold.
The initial animation pass only changed visual priority. The 26 October
follow-up traced the firing-state reset and confirmed that the next shot also
becomes available after this cutoff, on the next controller update; RedCat
discards the common projectile factory's recharge timer. That firing cadence
is now implemented, while the full-clip saved deadline still supplies the
animation phase. Projectile emission remains beyond 46% and damage is unchanged;
see [player projectile timing](player-projectiles-native.md#timing-and-movement).

## Transition blending and performance

`0x4a0700–0x4a0720` preserves the outgoing clip at a **frozen** time. Its weight
starts at 1 and decreases by elapsed seconds / .25 at `0x4a0b67–0x4a0b8d`.
A rapid additional switch starts a new transition only when remaining weight
is below .5; otherwise it keeps the older outgoing pose.

The actual executable creates the actor with blend type 1 at `0x5b3c45`.
`0x5b3f20` forwards it to `0x5cff30`, which applies `3w² − 2w³` when type is 1.
Bone translations blend linearly at that eased weight and rotations use SLERP,
before composing the hierarchy. The implementation now follows this path for
RedCat. Blending vertices directly would distort the skeleton and is not used.

The original samples the weight before subtracting the current timestep. This
order is preserved. Zero-time hand-position queries, saved-pose restoration and
paused updates do not advance that weight or the clip. The outgoing bone keys
are cached once per transition, and identical poses retain their geometry/GPU
versions. The original 12 October change was limited to RedCat. Enemy and turret
transitions were connected afterward; their
[separate verification and CPU measurements](enemy-actor-animations-native.md#verification-of-the-implementation)
describe that follow-up's coverage and performance limits.

## Saving and loading

New adventure snapshots add an optional `playerAnimation` object containing the
motion state, clip clock, reaction/attack selection identifiers and outgoing
blend state. Loading it restores the same pose rather than restarting the jump
or selecting `fall1` during descent. Existing saves remain accepted. A legacy
normal-jump save can recover its phase from the saved physics age; a legacy
super-jump save lacks the boost restart time, so its exact phase cannot be
recovered retroactively.

Attack release and hurt/death/respawn clocks continue to come from their saved
gameplay state. This animation pass did not change save history retention or
overwrite any user profile during testing. The later
[18 October save guard](autosave.md) refuses new snapshots while health is
non-positive, preserving the last living save; older death-animation snapshots
remain loadable and resume their ordinary death/respawn lifecycle.

## Deliberate differences and remaining limits

- The port retains modern camera-relative controls and forward priority for
  diagonal input. Native uses its rewritten local vector and Alt+arrow strafe
  controls. Native can switch to strafe during flight after releasing jump;
  the port retains the whole jump/boost motion until landing, as previously
  implemented for predictable SuperSkippie behavior.
- The reliable immediate `jump2` restart and one-boost-per-flight behavior are
  retained. Reintroducing the native jump-state latch bug would break this;
  see [movement recovery](player-movement-native.md#superskippie-latch-and-animation-interaction).
- Protected conversational idle, non-frozen gravity during hurt, and the
  existing checkpoint/game-over policies remain deliberate port behavior.
- `RcHintMotion(12)` is implemented as dormant API parity. The setter
  `0x436f40` accepts 0–15 and ignores invalid values; only 12 has a selector
  consumer (`0x433445`). It requests non-looping `fall1` at 1.5× unless the
  jump state suppresses it. Because the request repeats each update and
  `0x4a06b0` restarts a non-looping request, the beginning of the pose repeats
  while the hint remains active. Clearing it alone leaves that last motion
  to finish until the movement state changes. The port preserves those
  details and saves the hint, while retaining protected cutscene/reaction
  and no-clip priorities. All five campaign scripts declare this external
  without calling it; this is not a previously missing campaign animation.
- Native uses integer motion clocks and frame-quantized state changes; the port
  uses continuous seconds. The recovered rates/thresholds do not guarantee
  identical frames at every display refresh rate or collision boundary.
- This audit is not a fresh end-to-end native/port playthrough. It establishes
  asset fidelity and the recovered selection/timing paths above, not universal
  frame-perfect parity under every possible input sequence.

## Focused verification

No builds or unrelated regression suites were run.

- `tests/player-animation-native.test.mjs`: eight focused checks covering
  selection/rates, long flights, fans, drop probes, shot handoff, reaction and
  cutscene priority, save restoration, and native transition blending.
- `tests/animation.test.mjs`: five checks on the modified skeletal sampler,
  including all 16 real clips, finite bounds/normals, held-pose caching and
  unblended actor compatibility.
- Five selected existing presentation/ability checks passed: normal jump,
  slight ledge, backward playback, SuperSkippie restart and BIG BENG hold/release.
- `tests/player-animation-scenes.mjs`: real Forest world in an isolated Chrome
  profile, including application-level save/reload during descending `jump1`,
  exact pose/blend restoration, shot handoff, zero-time queries, reactions and
  post-respawn idle. No page, shader or WebGL errors were reported. Evidence:
  `temp_work/redcat-animation-native-2026-10-12/scenes-1791814235050/`.
