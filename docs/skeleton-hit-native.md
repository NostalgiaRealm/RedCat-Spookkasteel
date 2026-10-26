# Skeleton hit transitions

Native follow-up, 15 October 2026. Source changes and focused tests only; no
distribution build was made.

## Finding

The unresolved conditional in `CRcSkeletonHit::Initialize` (`0x408880`) does
exist, but it does **not** insert a full wake animation before an ordinary
damage reaction. Its query observes the skeleton's **current root state**,
which has already changed from inactive/state 1 to hit/state 4. This resolves
the earlier uncertainty in the [pursuit/interruption investigation](enemy-pursuit-interruptions-native.md).

Previously the port preserved its dormant/waking/retracting ambush state while
playing hurt. A hit to a pile consequently played **hurt, then start**, or
resumed a partly completed wake/retraction. Native replaces that old child;
after hurt completes its fresh alert can enter combat directly.

This conclusion follows static instructions in the original `RcHcGame.dat`,
SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
It is a control-flow finding, not a newly recorded original-game playthrough.

## Instruction ordering

1. Skeleton hit entry `0x407a30` constructs the specialized child through
   `0x408830`, then requests root state 4 through `0x402a10`.
2. At `0x402a40`, that setter writes the new root state **before** destroying
   the previous child and installing the replacement at `0x402a4f`.
   Repeating state 4 discards the new candidate and keeps the current hit.
3. Initialization is deferred: the child frame wrapper `0x402d20` checks its
   initialized byte and calls `0x402a60`; that function invokes virtual slot
   `+8`. The specialized hit constructor itself does not call `0x408880`.
4. `0x408880` plays sound 3, calls `0x4150f0` on the skeleton actor, and tests
   the result. `0x4150f0` fetches the actor's root controller through
   `0x424f80` and calls `0x4034b0`, which returns true only for state 1.
   With root state 4, the conditional is false: motion 4 (`hit`) starts
   immediately and the hit child enters substate 1. The alternative start
   motion/substate 0 cannot be selected by this ordinary damage-entry path.
5. The hit update `0x4088e0` completes on the hit motion's end. Root update
   `0x4030b0` then enters a fresh alert. Skeleton alert initialization
   `0x407bc0` checks whether the current motion loops or is already complete;
   a completed hit enters the attack child through `0x407dc0` without playing
   a new start motion.

The destroyed idle child (`0x407af0`) requests the forward start motion when
the living actor leaves idle. Hit initialization supersedes that request; it
does not queue a complete wake after hurt. A native frame boundary can still
expose that intermediate request briefly. This port does not reproduce the
engine's exact per-frame child-dispatch delay.

The dormant-start branch is not claimed impossible under arbitrary custom
calls, memory modifications, or a controller injected outside this recovered
entry path. No such path was established for the shipped damage receiver.

## Port changes

- `source/enemy-hit-native.js` discards skeleton dormant/wake/retract bookkeeping
  when a selected hit replaces it. The actor keeps the ordinary hurt motion,
  playback rate, deadline and sound, then uses its active alert behavior.
- `source/enemy-ambush.js` migrates older snapshots that retain those replaced
  states during hurt. Animation progress and the original hurt deadline stay
  intact; loading does not add another wake.
- Sound-only random responses still apply damage and preserve the existing
  child. A hit to an idle pile on that branch still wakes through the ordinary
  perception/alert route. Repeated selected hits do not restart hurt or replay
  its entry sound. Lethal hits retain death behavior.

There is no new immunity, raycast, graph search or per-frame allocation here.
Fresh skeletons remain settled piles; their ordinary sampled wake and reverse
collapse are unchanged. Smooth zombie emergence and the bounded navigation
safeguards are unrelated and unchanged.

## Evidence and checks

New REA assembly records are retained in
[`root-rea-assembly.json`](../temp_work/skeleton-hit-2026-10-15/root-rea-assembly.json)
and [`root-rea-dispatch.json`](../temp_work/skeleton-hit-2026-10-15/root-rea-dispatch.json).
Relevant earlier records are preserved together in
[`retained-proof-records.json`](../temp_work/skeleton-hit-2026-10-15/retained-proof-records.json);
the original bundles remain intact.

| Observation | REA evidence |
| --- | --- |
| Root replacement order | `ev_b67d24b3b30445c5210bc5afdf393e0f72a473a1e485832d009fd66447fc2b41` |
| Child first-frame initialization | `ev_428a01a76ac07ec248758b695942fa64a66ee1c884ae8d17a29ac57885100348` |
| Initialize virtual dispatch | `ev_0c97c0be734f1c6a96d0ef81457299afa63e4aecfeb63fd08b0d0d81f76299f3` |
| Specialized hit constructor | `ev_5a056aae37fcbbfcb79b02a4f214fb1e7b28b68575e16244e09de4acebdb4323` |
| Hit initialization conditional | `ev_326ff3630b225097062723c4b1a62271b1edf240edf4d29394737ea1b7b06a75` |
| Actor-to-root query | `ev_a45eea0f07ef1f16c696ed8e8e5ecd9b2963d45e652004ee59a8df045f4839ae` |
| Root state equals 1 | `ev_0c617c2940b71b87b28d78c40b09ee6ccba1e3d57d5a0fec8400ed9368386997` |
| Post-hit skeleton alert | `ev_141634d4676ff41d840abcced699d23a1f3a70fb23ad4794e65444b11973e379` |

Focused checks passed:

```sh
node --test tests/enemy-ambush-hit.test.mjs
node --test --test-name-pattern=skeleton tests/enemy-lifecycles-native.test.mjs
```

Thirteen ambush/hit cases and the one selected skeleton lifecycle case cover
hit from a pile, interrupted wake/retraction, repeat and sound-only hits,
old/new save restoration, death, normal wake/collapse, and the shared spider
hit paths. Logs are retained beside the evidence. No full suite or package
build was run.
