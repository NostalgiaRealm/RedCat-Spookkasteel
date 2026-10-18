# Boss interruptions and playback (15 October 2026)

This follow-up uses REA/Hopper static inspection of the installed Dutch
`RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
It does not claim a newly recorded native battle or a complete campaign test.
The source changes preserve the deliberate turret damage, fractional HP,
safe 3D flight, anti-stuck recovery and bounded navigation work.

## Recovered behavior and corrections

### Jester Max

The actor's receiver at `0x41e840` rejects damage during protected teleport,
then requests a root hit on `rand()%3 == 0`. That is a **common stationary
hurt child**, not an immediate teleport. Root table `0x64a4d8` maps its hit
slot to `0x403420`. Child initialization `0x4037e0` plays hurt sound category
3 and motion 4; `0x403810` completes only when the motion finishes. Root
completion `0x4030b0` then calls its fresh-alert slot, `0x404590`, which
initializes the teleport sequence.

The port now plays the complete hurt clip before teleporting. It remains
damageable during hurt, rejects repeated requests for the same hurt child,
and discards any remaining canceled shots. A sound-only hit still plays its
voice without interrupting the action. Hidden/protected hits consume no RNG.

Standing shoot child `0x40a4f0` (queried inside at `0x40a5e0`) releases at the
configured motion fraction and immediately starts another shoot motion on
completion if shots remain. It does not insert `WaitTimeBetweenShots` or
recheck visibility at release. These corrections also apply to turret Max.
Jester's teleport-point choice and health-ratio choice now use the native
integer-modulo sampling shape instead of a uniform floating-point threshold.

### Dungeon Max

Root table `0x64a2e4` uses the same stationary hit child. Its fresh-alert slot
`0x401bd0` constructs `0x401cb0`; initializer `0x401cd0` selects the shooting
child before the rise/look/lower cycle. No lowering or body-height reset was
found on that fresh shooting entry. A selected hit during a partial rise
therefore preserves height through hurt and begins a fresh salvo afterward.
The previous reconstructed recovery-to-lowering transition was removed.

The separate turret shoot motion remains fixed rate 1 (`0x41d0a0`, enum 6).
Its body hurt animation passes through the common randomized motion wrapper.
All three machine parts still forward projectile damage to Max as explicitly
requested earlier, although native projectile flags were more restrictive.

### Witch

Root table `0x64aa80` maps hit to moving hit `0x4056c0`, whose initializer
`0x405bb0` plays the common hurt child and freezes movement. Completion returns
through ordinary shooter alert `0x406de0`, which starts closer pursuit. It
does not randomly relocate on a hit or replay the initial takeoff motion.

The port now returns to adjacent closer selection while retaining the existing
body-clear flight fallback and authored cauldron takeoff. Waypoint arrival
does not replace that closer selection with an unrestricted patrol choice.
Committed shots fire even if RedCat leaves the perception range during the
animation. Post-salvo movement uses the recovered modulo comparison; waits
share the first-check clock described below. The receiver's combat-health
floor of two and the existing scripted finale remain intact.

### Both Brutus variants and wait clocks

Mushroom Brutus's `0x41f9e0 -> 0x406820 -> 0x4068c0` wiring selects ordinary
shooter attack `0x406e50`. It now uses the shared closer/salvo/wait controller.
Bone Brutus uses `0x401160`: after a complete salvo it plays charge, switches
bone/skull ammunition on charge entry, then chooses closer or another salvo
after the motion completes. Its charge rate is
`0.9 + (rand()%10000)*0.00002`. There is no extra post-salvo wait after charge.
Its individual shots use the normal inter-shot wait and committed release.

Wait entry now leaves its deadline unarmed. The first subsequent check arms
the integer-millisecond deadline, and completion requires **now > deadline**
(`0x597900`). This replaces starting the clock on state entry. The Witch uses
the same helper with a phase-local clock, which stops during script freezes.
See [shooter waits and Brutus verification](shooter-wait-native.md).

### Motion playback and persistence

Common randomized motions use `0.8 + (rand()%10000)*0.00004` (`0x424950`).
Jester uses the common wrapper directly; Witch's `0x420840` forwards to
`0x4233e0`; Dungeon's wrapper does so for body motions. The phase deadline
now uses the actual sampled animation duration, including HitMotionFactor,
instead of completing hurt or attack at its unscaled imported clip duration.
Teleport and turret-machine clips retain their explicit rates.

Saves retain hurt progress, rates, committed releases, remaining salvos and
unarmed/armed waits. Older finite wait deadlines remain valid. Old Bone Brutus
saves already playing charge adopt that phase without toggling ammunition
again; saves waiting to begin charge still perform the entry action once.

## Evidence and verification

Retained in `temp_work/boss-interruptions-2026-10-15/`:

- [Complete REA bundle](../temp_work/boss-interruptions-2026-10-15/rea-evidence-bundle.json)
  and [query/evidence index](../temp_work/boss-interruptions-2026-10-15/evidence-index.md).
- `bone-controller-rea.json`: full parent/charge/shot/wait assembly queries.
- `dungeon-entry-rea.json`: fresh attack entry and common attack teardown.
- `unrecognized-entry-bytes.json`: exact REA bytes for `0x401ef0` and
  `0x420840`, where Hopper did not recognize independent procedure entries.
  Witch's bytes were cross-checked against the retained
  `enemy-actor-animations-2026-10-12/native/witch-class.asm`. A query for
  `0x402110` returns a containing procedure beginning `0x4020e0`; this is a
  provider boundary limitation, not evidence of an extra native state.
- Source snapshots in `before/`; focused test logs alongside the bundle.

The boss checks use original campaign entities/settings, imported clips,
actual `Gameplay` hit dispatch and save restoration. They exercise Jester's
hurt-then-teleport, turret recovery without a fabricated lower, uninterrupted
salvos, repeated-hit rejection, Witch closer handoff, exact wait boundaries,
freeze continuity and imported hurt poses at half of their effective duration.
The initial boss run passed 21 checks, two added pose/route checks passed,
and the final wait-related selection passed seven checks (overlapping earlier
coverage). The focused motion-rate check also passed. Separate threshold,
skeleton and shared-shooter checks are recorded in their own follow-ups.

No release builds were created. This work adds no unbounded graph search or
per-frame native analysis. It preserves the saved per-enemy RNG rather than
replicating the original global stream. Releases still occur on simulation
updates; full engine-dispatch ordering, every unexamined executable branch,
native runtime battle comparison and low-end hardware performance are not
claimed by these focused checks.
