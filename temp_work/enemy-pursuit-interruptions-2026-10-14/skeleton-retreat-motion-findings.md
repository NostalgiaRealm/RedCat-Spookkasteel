# Skeleton retreat motion and wait handoff

14 October 2026. Static REA/Hopper follow-up on original `RcHcGame.dat`,
SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
No runtime observation. This supplements and refines the earlier findings:
**MoveFurther movement completion is not the same as completion of the
skeleton retreat child.** The latter is governed by a one-shot animation.

Full new records: `skeleton-retreat-evidence-bundle.json` (47 records).
The earlier 248-record `rea-evidence-bundle.json` remains unchanged.
Imported clip/settings summary: `skeleton-retreat-imported-assets.json`.

## Exact retreat contract

1. Skeleton parent `0x408010` selects retreat after a child completes, when
   target memory is valid and current distance is below MinPlayerDistance.
   `0x4081e0` installs retreat child `0x408770` under parent substate zero.
2. Child initializer `0x408790` installs MoveFurther (`0x596860`) with
   **AttackRange** as its completion threshold, unfreezes movement, then calls
   actor virtual `+8c` with `(3, 0, WalkMotionFactor)`.
3. Enum 3 is `walkbw`. The second argument is false/nonlooping. Skeleton actor
   vtable `0x64b1f0`, slot `+8c`, selects moving-enemy motion dispatcher
   `0x4286e0`. Its walk branch multiplies the supplied explicit rate by
   WalkMotionFactor again. Therefore total playback rate is **W squared**,
   with no random rate sample. This is distinct from playing walk forward in
   reverse: use the authored `walkbw` at positive speed.
4. Physical motion uses the ordinary Speed setting. `0x422270` passes movement
   instance `+36c` (settings `+24`) directly to cursor speed setter `0x59bc10`.
   The retreat initializer does not change Speed, negate it, or couple it to
   the walk clip's playback rate.
5. MoveFurther selector `0x599a60` still chooses the farthest valid adjacent
   node, preserving an unfinished cursor edge. On **every** movement update,
   `0x596b00` overwrites its completion byte from `0x597520`: distance strictly
   greater than AttackRange skips physical movement. This is **not latched**.
   If the target comes back within range while the clip is still running and
   a destination remains, body movement can resume on that saved edge.
6. Retreat child update `0x4087e0` refreshes the actor's target-memory timestamp
   via `0x4237f0(now)` each update, regardless of line of sight. It then tests
   animation completion `0x4a0d00`. On completion it installs infinite movement
   wait `0x5966a0(-1)`, freezes the mover with `0x428b10`, and marks its child
   done via `0x402d00`. Merely crossing AttackRange does not finish this child.
7. While this child is **not done**, the parent checks no-destination on every
   frame and immediately replaces it with shooting if true. This is not just
   an entry check: reaching a terminal before the clip ends also starts a shot.
8. Once the child is done, the parent first checks memory, then minimum range.
   Outside MinPlayerDistance it enters the normal post-salvo wait. Still inside
   the minimum, it requests retreat again, but `0x402a10` rejects replacing a
   child with the same parent state. Thus the completed clip does not restart
   repeatedly. The completed retreat remains until a later parent reevaluation
   can choose a different state. The no-node shortcut belongs to the not-done
   branch and does not override this completed-child branch.

## Facing

Skeleton attack parent constructor `0x407e40` copies the navigation manager's
target actor reference (`0x596e40`, manager `+24`) into moving actor facing
slot `+1a4` using `0x428250`. `0x595c80` independently confirms that the same
navigation reference supplies its target actor, rather than a waypoint.
That facing reference remains throughout shooting and retreat.

Moving actor facing code `0x427f10` (query `0x427fd0`) uses the reference to
face the target actor; only a null facing reference falls back to the current
waypoint direction. When it is the usual player target, virtual `+70` reaches
`0x429150`, which turns toward the current stored target bearing `+160`, clamped
by RotationPerSec times elapsed seconds. Other target actors are resolved to
their current position and passed to `0x429350`, which applies the same turn
limit. This is neither a fixed yaw from shot release nor facing the retreat
destination.

Hopper does not define `0x429150` as a procedure in this database. Its exact
bytes were retained through REA `read_bytes`; a bounded extract from the
existing original disassembly is in
`skeleton-target-facing-retained-assembly.txt`. No function-boundary claim is
made from a missing Hopper procedure.

## Shipped values and port implementation recommendation

The imported skeleton has no `walkfw`. It has `walkbw` duration
**1.333340048789978 seconds**, plus start/shoot1/idle/hit/death. All three
difficulties specify Speed **80** and RotationPerSec **9.424778**. Normal
explicitly sets WalkMotionFactor **1**; Easy/Hard omit it, and the port's
existing missing-factor fallback is **1**. The native missing-key default was
not re-investigated in this follow-up. At the shipped effective factor one,
the retreat one-shot duration is approximately **1.33334 seconds**.

Recommended separate `walkback`/retreat action:

- Select `walkbw` explicitly and play once at positive total speed W squared.
  If ActorStateAnimator applies one W through its state speed, use explicit
  `animationRate = W` and duration `rawClipDuration / (W * W)`; do not apply W
  twice in the duration and then a third time in playback. No RNG draw.
- Save the retreat-started flag, animation deadline and ordinary pose/rate
  data. Keep the action outside generic hurt/attack movement locks.
- Translate along the farther waypoint at Speed while turning toward the
  current player with RotationPerSec. Do not let ordinary `walk()` replace
  the one-shot or turn the model toward the destination.
- Each active retreat update refreshes lastSeenAt/remembered-target state.
  Crossing AttackRange stops only physical movement; retain the clip and
  reevaluate distance each frame, without a saved stopped latch.
- A no-destination result before clip completion interrupts into shooting.
  Clip completion runs the parent completion policy. Do not replay the same
  completed retreat while it still requests the same parent state.
- Reuse the existing hit cancellation, freeze and save logic, including exact
  pose restoration. Original motion does not authorize removal of portable
  collision or graveyard work limits.

## Wait first-check handoff

Additional static evidence narrows but does not completely equate native and
portable tick ordering. `0x402d20` dispatches a newly installed child by calling
`0x402a60` (Initialize) and **returns immediately**, without calling its normal
frame update that time. Wait initializer `0x405c50` installs the movement
timer. The timer's `0x597900` first completion check separately arms
`deadline = now + duration` and returns false. It completes on strict
`now > deadline` later.

The current helper arms on wait entry. The original separate state and
movement-controller scheduling may shift this by one or more update boundaries.
A fixed `+dt` adjustment is not established without tracing the full engine
ordering. Safely retain the strict integer-millisecond comparison and describe
the handoff as a small scheduler adaptation; do not claim identical native
frame ordering or add an arbitrary timing shim.

## Key evidence

| Finding | Evidence ID |
| --- | --- |
| Initializer exact arguments (earlier bundle) | `ev_22529a475056ec1b2815ba6cb471f64c1d53b7e739f0ee202d4f2626071c160f` |
| Skeleton actor motion vtable | `ev_0dac9ce365f82dd2bef26844ddf06a6ef102daf4f5b7294832fe91daba50087f` |
| Enum string bytes | `ev_92b9cadf6c0817d7779201257ce093c0ba32d4c1435596bfe4d55785292ba1b1` |
| Moving dispatcher multiplies factor | `ev_639152667dc54fdd2beaa7632ba34b0d45e62a9c2bd410a5685af5d84b570e79` |
| Retreat clip completion / memory refresh | `ev_347fd47f67b52b5d85d0c85b4c6ee1beba596328720d231565544d01760d77a7` |
| Memory setter | `ev_c9d2ecb4bd5c67b1247538dbe8cbddd2f5c4aa4873e3a7b337e3d56c998b26e9` |
| Speed passed unchanged | `ev_d13813d29d0f1a9e33b2d9e2f416e5cd45dcdb1bd488b95e6257c3d97e3197e8` |
| Attack parent's facing reference | `ev_4a75bcda688b0d33475c2b103fc2b834888817ba02619d5230a53ce37b07fd92` |
| Facing selection | `ev_2c560c2f42bbbae7a3ad510e5652a7b17165b9e938c6c8204584513ac64ed75a` |
| Player-facing bytes | `ev_aa95ebfe2d6e49f70e4b2275478ca210c38c72d0213436f96f9f7b823fa15d91` |
| Child initialize-only first dispatch | `ev_428a01a76ac07ec248758b695942fa64a66ee1c884ae8d17a29ac57885100348` |
