# Independent target-controller review and correction

Reference SHA-256:
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.

Native `0x4d23d0` target mode (case 3) calls `0x4d1740(old,new)` for
forward MoveTo and `0x4d1740(new,old)` for reverse MoveTo. The iterator
`0x5d77a0` / `0x5d7800` starts at lower time minus 1e-5 and accepts markers
strictly below upper time minus 1e-5, always in ascending timestamp order.
Native callbacks run before the final position write at the common exit.
The native target is cleared only after proposed motion strictly passes it,
not when it lands exactly on it.

The initial MoveTo target-mode port reused general MotionPlayer traversal. That ran
reverse markers in descending order, included the destination marker rather
than excluding the upper interval endpoint, and completed at equality.
`model-controller-target.js` now has a narrow native target-mode iterator with
the recovered ordering and strict completion boundary. Ordinary gameplay
controllers and their general motion-player traversal are outside this change.
SetTo now also keeps the old timeline visible during all marker callbacks,
rather than temporarily moving it to each marker. The existing saved target
object carries a validated immutable `eventMask` string separately from the
physical timeline; no script-host snapshot format bump is needed.
All five shipped DSO programs declare MoveTo/SetTo but have no call sites;
this is recovered dormant API behavior, not a discovered campaign blocker.

The portable collision guard remains and callbacks supersede stale commands.
Because that guard can carry RedCat, it runs after marker callbacks: a callback
that queues a different motion cannot carry RedCat using a cancelled pose.
Blocked or disabled retries preserve an immutable saved event mask to prevent
replaying already-dispatched puzzle side effects. This retry protection is a
portable safeguard rather than a claim that the native failure path behaved
identically. The mask is bounded by the imported marker count and validated on
restore; it introduces no unbounded per-frame catch-up work.

Focused verification:

- `model-controller-target-order-tests.tap`: 8/8 new tests, including reverse
  multi-marker ordering, forward endpoint exclusion, strict completion,
  collision/callback ordering, command replacement, disabled retry and save.
- `model-controller-target-integration-tests.tap`: 6/6 selected existing
  MoveTo/SetTo/pending-target/reset integration tests. No unrelated tests or builds.

The button/trigger read-through found their recovered FSM order consistent
with `0x4cb420`, `0x4cb8d0`, `0x4cb3a0` and `0x4d3680`. The owning agent
also corrected Reset (`0x4cb9a0`) and settled-only shot handling (`0x4cb3f0`),
then recorded 21 passing focused world checks and zero mismatches in its
16-tick original-byte button probe. This is not a complete engine audit.
