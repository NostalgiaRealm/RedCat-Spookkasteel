# Read-only native RedCat animation audit, 2026-10-12

Reference: installed RcHcGame.dat, SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
All addresses are executable virtual addresses. `extract.py` reproduces the disassembly from that original file without modifying it. Only this `native/` research directory was written. No source, build, original installation, or website files were changed by this audit.

The comparison below describes source observed at the start of this audit. Other agents may subsequently change source. The prior docs were used as navigation aids; the concrete findings below were verified directly in the executable.

## Confirmed discrepancies

### 1. Strafe clips play at 2.4x, not 1x

- Native table `0x690150` resolves to `strafel`; `0x690154` resolves to `strafer` (`constants.txt`).
- `0x432f22` pushes `0x4019999a` (2.4f), `0x432f2b` pushes loop=true, and `0x432f3c` calls animation play.
- `0x432fc2` pushes the same 2.4f, `0x432fce` pushes loop=true, and `0x432fe5` calls animation play.
- Observed portable `src/player-animation.js:22` returned speed 1 for both strafes.
- Imported strafe duration is 0.9333379864692688 s, giving a native cycle of 0.388891 s instead of 0.933338 s.

### 2. Native jump1 and jump2 loop during prolonged flight

- `jump1` selection `0x432d60` resolves through `0x690140`; `0x432dcb` pushes 1.4f, `0x432dd7` pushes loop=true; `0x432de8` calls `0x4a0660`.
- `jump2` selection `0x432e1c` resolves through `0x690148`; `0x432e81` pushes 1.3f, `0x432e8d` pushes loop=true; `0x432e9e` calls wrapper `0x42e240`.
- Wrapper `0x42e2c3–0x42e2e0` forwards both rate and loop flag unchanged.
- `0x4a0660–0x4a0668` forwards the second argument to `0x4a0bb0`, which stores animator byte `+0x3c` at `0x4a0bb4`.
- Update `0x4a0a66–0x4a0a8d` wraps the motion clock by its duration when that byte is true. With false it clamps and marks completion at `0x4a0a96–0x4a0a9d`.
- Observed portable `src/player-animation.js:18` returned `loop:false`, while supplying unbounded age-derived time. ActorAnimator consequently clamps to the last pose.
- jump1/jump2 authored duration is 0.9333379864692688 s: native periods 0.666670 / 0.717952 s. A normal ~0.645-second flat-ground jump usually lands before jump1 wraps, so the difference is mainly visible during prolonged flight, raised takeoff, or fans.
- Immediate jump2 selection/restart on successful portable boost is an already documented adaptation; this finding does not revoke that choice.

### 3. Shooting pose releases priority at 80% of shoot1

- While shot flag `0x6b5845` is active and player input is enabled, `0x4332ff` updates the shot, then `0x433310` queries `0x4a1060`.
- `0x4a1075–0x4a1085` computes normalized time `(clock-start)/duration`.
- `0x433315` compares to double at `0x64c568`, verified as 0.8. At >=0.8, `0x433329` resets the previous animation-state global and `0x43332f` clears the active-shot flag. The next state-selection frame can select locomotion/idle/jump again.
- Observed portable `src/gameplay.js:700` sets `playerAttackUntil` to the entire remaining clip duration; `src/world.js:720–730` gives shooting priority until that full end.
- At 1.9x with imported duration 1.9333430528640747: native handoff threshold ~0.814039 s after normal start; ~0.549476 s after release from charged hold at .26. Portable corresponding durations were ~1.017549 / ~0.752986 s, about 0.203510 s longer.
- Keep visual priority cutoff separate from projectile release and recharge. The .46 release, .26 hold, and 1.9x rate are correct. Exact wall-clock handoff is frame-quantized; native uses integer motion time.

### 4. Respawn completion starts idle at 1.7x

- `0x4331a9` checks animation completion. On success, `0x4331ba` loads `idle` through `0x690130`, `0x4331ed` pushes `0x3fd9999a` (1.7f), `0x4331f6` pushes loop=true, and `0x433201` plays it.
- `0x433233–0x433244` then reenables player input, sets state 1 and clears respawn flag.
- Observed portable `player-lifecycle.js` completes the respawn reaction and `playerMotion` supplies ordinary idle at 1x. There is no post-respawn idle rate state.
- Native standard idle is still 1x. The 1.7x applies to this explicit post-respawn handoff; it must not replace every idle rate.

### 5. Native animation transitions blend; portable transitions snap

This is broader renderer work, not merely another player rate constant.

- On a different motion name, `0x4a0700–0x4a0720` preserves old clip and old clock in animator `+0x50/+0x54`, initializes old-pose weight `+0x58` to 1, provided an old clip exists and current blend weight is <0.5 (`0x64ab98`).
- `0x4a0b24–0x4a0b62` applies the preserved old clip/time with decaying weight, after sampling the new clip.
- `0x4a0b67–0x4a0b8d` subtracts elapsed seconds / `0x64e858` (0.25f) and clamps the weight at zero.
- Observed `src/animation.js:play` selects the new clip, resets time and immediately samples it. No previous-pose transition blend is retained.
- This is not evidence that every native transition starts a fresh 250ms blend: native preserves the existing transition while its old-pose weight remains >=0.5. Reproducing its precise rapid-switch behavior needs that gate too.

## Confirmed names, rates, and correct portable choices

| State | Native behavior | Evidence | Portable comparison |
| --- | --- | --- | --- |
| Standard idle | idle, loop, 1x | 0x432b93, 0x432bf9–0x432c16 | Correct standard rate/name |
| Forward movement | walkfw, loop, 1x; same selector for walk/run | 0x4327e3–0x432809; 0x432ccc, 0x432d1f–0x432d3f | Correct name/rate; no run clip should be invented |
| Backward movement | walkbw, loop, 2.2x | 0x432c3a, 0x432c91–0x432cab | Correct name/rate |
| Jump | jump1 1.4x / jump2 1.3x | above | Rates correct; loops differ |
| Drop | fall1, nonlooping, 1.5x | 0x4333a3, 0x4333f9–0x433413 | Rate/name/nonloop correct |
| Hurt | hit, nonlooping, 1.5x | 0x432a51, 0x432ab7–0x432ace | Name/rate/nonloop correct |
| Death | death, nonlooping, 1.6x | 0x432af2, 0x432b58–0x432b6f | Name/rate/nonloop correct |
| Respawn | re-spawn, nonlooping, 1x; completion gate | 0x433160, 0x4331a9, 0x433278–0x433291 | Name/rate/full re-spawn duration correct |
| Ordinary/power shot | shoot1, 1.9x, emission after .46 | 0x434c25–0x434c36; 0x434d03–0x434d36 | Correct; visual cutoff differs |
| Super-shot charge | shoot1 at normalized .26, speed 0; release speed1.9 | 0x434bda–0x434bfd; 0x434bb6–0x434bc1 | Correct; no charge clip required |

The imported unused-looking clips `walkbwl`, `walkbwr`, `fall2`, and `charge` are not selected by this ordinary RC animation selector. Their mere presence is not evidence that portable gameplay is missing actions.

## Selection and drop details that need careful scoping

- Native motion-state changes are suppressed when requested numeric state equals previous state (`0x4329f1–0x432a09`), while active shooting (`0x432a0f–0x432a16`) and the current drop-detection tick (`0x432a1c–0x432a22`) also suppress ordinary motion selection.
- Native jump state 6 is selected by held jump query at `0x43275c–0x43277a`, rather than by positive vertical velocity alone. The input vtable at `0x64c5b0` gives slot+0x30=`0x437710`, reading held-jump byte+0x21. The already documented portable edge-input/one-boost adaptation must be kept distinct from animation parity.
- When jump is released, native clears its jump-animation flag at `0x432785–0x43278e`. Forward/no-input flight can retain state6 while floor distance is nonzero (`0x4327ce–0x4327dd`, `0x43289b–0x4328aa`), but strafe selection at `0x432811–0x432868` has no floor-height guard. Thus native can switch to strafe during an airborne jump after jump release. Portable holds jump1/jump2 until landing regardless of later movement input. This is a real selector difference, but changing it would interact with the documented whole-flight jump2/portable-control choices.
- Native directional selection uses the rewritten local vector and strafe query. Portable selects forward before right on combined input. Camera-relative portable movement is documented as an adaptation, so changing that priority solely to match original Alt+arrow strafing is not automatically appropriate.
- Native drop helper `0x4363a0` only reports true when current positive floor distance minus previous positive floor distance exceeds 80 (`0x4363da–0x4363ef`, `0x64c40c=80`). A negative Y velocity alone is not a drop trigger: portable correctly avoids that simplistic replacement.
- Native downward floor probe length is 1000 (`0x4d6732`, `0x4d6764`, `0x64f0f0=1000`); portable world.js used 10000. Native helper updates remembered gap only when the gap is positive; portable resets its stored gap at every call including grounded frames. These are confirmed measurement/state differences but their visible impact on shipped levels was not established here.
- A detected drop selects fall1 1.5x only when not state6 and not jump-animation-flagged (`0x43337d–0x43339d`). There is no separately selected landing clip in this frame selector. Standard locomotion/idle resumes through the floor-distance gates. Do not introduce `fall2` as a speculative landing animation.

## Portal and cutscene scope

- RcHide script wrapper (`0x56a4a0`) resolves the player through `0x431170` then invokes vtable+0x2c (`0x56a580–0x56a58b`); RcShow (`0x56a5e0`) invokes vtable+0x30 (`0x56a6c0–0x56a6c9`). RcShowAtSpawnPoint (`0x56a720`) similarly uses show plus position/orientation updates (`0x56a9f4–0x56aa2e`). These wrappers do not select a new animation by name or invoke the re-spawn animation entry at `0x436f60`. They do not establish a missing portal-specific player clip.
- StartCutScene and StopCutScene are registered to `0x569ed0` / `0x56a0c0`; wrappers call cinematic runtime `0x4819f0` / `0x481b20`. Ordinary selector selects idle when controls are disabled or certain scripted view modes are active (`0x4326bf–0x432737`). Current cutscene idle1x is consistent with this path. Exact interruption/resumption in every camera or cutscene mode was not dynamically verified.
- RcHintMotion is registered at `0x527854` to `0x56b510`, which ultimately calls `0x436f40` (`0x56b793`). That setter stores values0–15 in player+0x34c; only hint12 is consumed by this frame selector (`0x433445`), selecting fall1 at1.5x. Portable script-host.js stores hintMotion without using it. However all five imported chapter Davi JSONs contain the RcHintMotion external declaration only: no instruction reference/call was found. This is dormant API parity, not a confirmed visible campaign omission.

## Uncertain claims intentionally excluded

No claim of identical native hit interruption, damage invulnerability, death checkpoint policy, portal timing, every cutscene state, or collision transition follows merely from matching clip durations. The audited reaction names/rates and respawn completion gate are confirmed; the complete gameplay lifecycle is larger than this renderer audit. Native frame rounding, collision height measurements, and renderer blend implementation mean the seconds above are threshold conversions, not a claim of exact wall-clock playback.
