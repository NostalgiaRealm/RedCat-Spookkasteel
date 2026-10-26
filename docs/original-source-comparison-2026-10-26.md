# Original-code recovery and port comparison — 26 October 2026

This is the separate change record requested alongside the full decompilation.
The port baseline is release 1.0.2, commit
`59d6298a214124ab8d4d69f153c182f280d7c822`. This work changes local source;
it does not generate packages, change the release version or publish anything.

## Separate decompiled-code folder

The new deliverable is a **sibling of the port**, not another collection of
partial excerpts inside its research folder:

```text
/home/rick/Documents/Rebuilds/RedCat Spookkasteel/
├── RC_ORIGINAL_DECOMPILED/
└── RCSPOOK_NEW/
```

Start at [the decompilation README](../../RC_ORIGINAL_DECOMPILED/README.md).
The export includes the game and menu DAT executables, launcher, uninstaller
and seven shipped DLLs; per-function C, combined C, assembly, function indexes,
saved Ghidra projects, original resource/configuration evidence and all five
decoded campaign scripts are kept separately from the port. The export's own
verification report records actual coverage and remaining recovery limits.

Final artifact verification passed: **11 native binaries, 30,648 discovered
functions exported to C, zero remaining C-export failures**. This includes
19,780 gameplay and 8,125 menu functions, five script objects (5,134
instructions), 29 menu forms, three WinHelp projects and 258 PE resources.
All 1,453 preserved input copies and the original binary hashes matched.
See [the standalone coverage report](../../RC_ORIGINAL_DECOMPILED/VERIFICATION.md)
for unresolved indirect dispatch and exact unassigned-code inventories. Those
limits prevent treating the function count as proof of complete source recovery.

These are **decompiled C representations**, not the lost original C++/Delphi
source files or a buildable replacement for them. Inferred types and function
names, unresolved indirect calls, data mixed into executable sections and
original compiler/runtime code remain visible. Recovering code for a function
does not by itself establish behavioral equivalence with the port.

The reference installation remains read-only. The current `RcHcGame.dat` is
SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Early research used a different executable hash; addresses were remapped before
reuse. In particular, its old unary-evaluator address identifies a disassembler
in the current binary. An initial default Ghidra pass also missed virtual
methods such as RedCat's damage receiver and CParticle::Tick. Validated native
RTTI/vtable destinations recovered those functions, while a verified jump-table
override recovered the unary evaluator's 26 cases. Original bytes were not edited.

## Changes made to the port

### 1. Enemy projectile sampling

Native projectile spread and lifetime take the 15-bit CRT `rand()` output modulo
10,000. The port previously used a uniform sample. The corrected mapping
preserves the original nonuniform distribution, float scale and millisecond
lifetime truncation, while retaining the intentionally saved per-enemy RNG.
Already flying saved projectiles retain their velocity and lifetime.

Evidence: CRT `0x60a4a0`, lifetime `0x442e30` / `0x4432e0`, moving/standing/turret
release paths. Implementation: `src/enemy-projectiles.js` and
`Gameplay.enemyProjectile`. [Detailed findings](../temp_work/original-source-parity-2026-10-26/gameplay/findings.md#g-1-projectile-random-distribution-corrected).

### 2. Plant and gargoyle salvo waits

These stationary shooters still combined their attack duration and after-salvo
delay into one timer. They now finish the shooting child, enter an idle/wait
child, arm its clock on the next controller check and finish strictly after its
deadline. Target memory, rather than a new attack-range test, decides whether
the parent starts another salvo. Selected hurt cancels the child; sound-only
hits preserve it. Freeze, current saves and older cooldown saves retain their
appropriate state.

Evidence: standing parent `0x40a200`, wait construction `0x403ed0`, first-check
and strict-expiry update `0x404020`, plant override `0x406ce0` / `0x406d20`.
Implementation: `src/enemy-standing-shooter-native.js` with the existing ambush,
hit and gameplay paths. [Detailed findings](../temp_work/original-source-parity-2026-10-26/gameplay/findings.md#g-2-plantgargoyle-post-salvo-controller-corrected).

### 3. Fleurifee stars and portal particle fades

Secondary fairy stars and portal particles now use the recovered independent
lifetime, fade-delay and fade timers, strict expiry order and integer alpha.
The previous age-only opacity formulas skipped timer arming and byte rounding.
New saves preserve those clocks. Older saves reconstruct clocks without
replaying positions, velocities or emission history.

Evidence: shared `CParticle` at `0x47dd60`, Start/Restart at `0x47e710` /
`0x47e780`, and the original fairy/portal initializers. Implementation:
`src/particle-clock-native.js`, `src/fairy-effects.js`,
`src/teleporter-effects.js`. The original fixed visual step, local RNG, sound
scheduling and portal relocation policy remain intact.
[Full presentation comparison](presentation-source-parity-2026-10-26.md).

### 4. Shared landing sound and fall damage

The earlier water correction implemented liquid landing sounds, but omitted
the dry branch and high-impact damage. Ground contact now selects `rcland1.wav`
on dry ground and the already verified `rcwalk1.wav` slot in water/ooze.

Let `J = sqrt(2 × Gravitation × JumpHeight) × 32` be ordinary takeoff speed.
With the shipped Game.ini values:

- Impact below `0.05 × J` produces no landing cue.
- Landing volume is `min(1, impact / (2 × J))`.
- Damage above `2 × J` is `(impact / (2 × J) - 1) × DamageAtDoubleImpact`;
  the shipped damage multiplier is **1**, not the generic engine fallback 100.
- An ordinary jump causes no fall damage. Impact at exactly the maximum
  threshold also causes none; fractional damage is retained above it.

The native Adam frame calls the landing transition at `0x4db132`. Its ground
case at `0x4dc615–0x4dc76a` applies damage through `0x503fc0` before choosing
the sound. RedCat's actual virtual damage receiver at `0x433820` does not reject
self as the source: its health call at `0x433bc7–0x433be0` receives the negative
damage amount. This confirms an active RedCat path, not merely unused generic
engine functionality. The dry resource at `0x6b5708` resolves to `rcland1.wav`.

Implementation: `src/player-landing.js`, `Gameplay.land`, the existing world
landing transition and locomotion audio. Contact emits once, with no replay on
load or movement recovery. Existing no-clip, cutscene, respawn and completed-level
protections still apply. Portable collision/impact sampling remains a documented
engine boundary; this is not a claim of exact slope impact at every frame rate.
[Retained landing assembly and tests](../temp_work/original-source-parity-2026-10-26/).

### 5. Missing Davi-Script unary operators

The interpreter now supports the ten missing cases in the native 26-entry
unary table: SINH, TANH, COSH, ASIN, ACOS, STRLEN, STRLWR, STRUPR, ASCII and CHR.
Native byte encoding, unsigned first-byte conversion, eight-bit CHR wrapping,
C-locale casing and embedded-NUL length handling are preserved. An independent
review caught and corrected STRLEN's stored-length behavior before completion.

The shipped campaign does not call these unary operators. This is interpreter
coverage, not a newly fixed campaign puzzle. Unsupported Unicode byte casts,
floating-point formatting and x87 precision still have explicit boundaries.
Evidence: evaluator `0x5fc480` / table `0x5fcb90`, label disassembler `0x5fbab0` /
table `0x5fc0bc`. [Complete mapping](davi-vm-opcodes.md#complete-unary-mapping-checked-against-the-installed-executable).

## Comparison coverage and preserved differences

| Area | Result and evidence boundary |
| --- | --- |
| All five compiled campaign scripts | Fresh imports are structurally identical to the port's five `data/davi` programs, including source hashes. The focused VM checks invoke all 444 original handlers and over 300 literal event branches. This does not replace physically completing their puzzles. |
| Combat, movement and actors | Confirmed corrections above; reviewed moving-shooter, skeleton, common-hit, selected boss and projectile-family paths remain in place. Original target aim height is half the target hull height; RedCat's existing 28-unit offset is correct for the port's 56-unit hull. |
| Menu and music | Existing restored menu actions/voices and recovered music envelope reviewed against retained evidence; no further demonstrated mismatch. Modern settings, portable Help and profile backups remain. Intentional track scheduling, full-track looping, sound ranges and complete WAV playback remain. |
| Visual effects and saves | Corrected ordinary particle clocks; existing ribbon history/fades, smoke/flame timer state, actor-fragment state and audio continuity retained. Legacy snapshots cannot recover fields they never stored. |
| Lighting, camera, collision and streaming | Retained recovered implementations and deliberate safeguards; not revalidated pixel-for-pixel or replaced with Windows/Genesis internals. No change to room admission, bounded preparation, lighting/navigation budgets or anti-stuck behavior. |
| Whole game equivalence | Not established by decompilation or this scoped comparison. Every native function has not been semantically matched to a port function, and no new native/port full campaign or target-device run occurred. |

The [intentional-departure catalog](intentional-fixes-and-findings.md) remains
authoritative. No-clip invulnerability, autosaves/recovery, maze resets, ability
reward corrections, two-second skipping, one active fairy, protected cutscenes,
enhanced torches, modern controls, audio choices/ranges and performance limits
were not reverted. Mathematical distribution/timer corrections above preserve
the local RNG and fixed-step adaptations rather than replacing them with a
process-wide native random stream or display-dependent simulation.

## Verification

Only affected source checks were run:

| Checks | Result |
| --- | --- |
| Enemy projectile distribution, flight and restoration | 10 passed |
| Stationary shooter and committed attack behavior | 13 passed |
| Fairy/portal clocks, ribbon behavior and saved effects | 36 passed |
| Davi interpreter, original scripts and added unary cases | 10 passed |
| Shared landing damage/audio and existing water contact | 11 passed |
| Fresh campaign IR comparison | All five equal |

That is **80 passing source tests** across affected areas, not a full-suite or
campaign certification. Independent reviews checked native mappings, landing
dispatch, stationary-shooter integration and the decompilation delivery.
Retained reports, test logs, addressed disassembly and the REA evidence bundle
are under [`temp_work/original-source-parity-2026-10-26/`](../temp_work/original-source-parity-2026-10-26/).
No builds, release uploads, original-install edits or saved-player changes were
performed. The standalone export has its own artifact/coverage verification;
successful code export is separate from gameplay validation.

## Continued behavioral comparison

Further confirmed corrections and their validation are recorded separately in
[Native behavior corrections — follow-up](native-behavior-followup-2026-10-26.md).
That record supplements this initial pass and does not convert the full export
into a claim of universal behavioral equivalence.
