# RedCat firing-state parity follow-up — 26 October 2026

## Scope and evidence identity

Read-only native reference: installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
This pass uses the complete Ghidra export and independently retained x86
assembly in `player-shoot-controller.asm`. `native-source-index.txt` links the
exact C files without duplicating the full export. This is static native
control-flow evidence plus focused port simulation, not a fresh live native
playthrough.

## Confirmed difference: RedCat did not wait for the factory recharge timer

1. Native `0x4324a4` reads `CRcPlayerProperties+0x68` using `0x439f30`.
   `0x4324be` saves this learned skill mask on the stack; accounting for the
   completed five-argument RTTI call and subsequent three register pushes,
   the same slot is `[esp+0x78]` at `0x432906`. The shooting input branch
   checks this value is nonzero. It does not check a recharge clock.
2. `0x4328ef` polls fire; `0x4329c7` selects state 15. The changed-state test
   at `0x4329f1–0x432a16` avoids restarting an already active shot.
3. `0x433310–0x43332f` reads normalized shoot1 time, compares it with the
   double 0.8 at `0x64c568`, and clears both `0x6b5864` (cached previous state)
   and `0x6b5845` (active firing). The next controller update can select and
   enter shoot1 again while fire remains held.
4. RedCat calls the common projectile factory at `0x434dac` with a stack-local
   timer result. `0x44d260` does construct a RechargeTime timer for its callers,
   but the player never copies or tests that result. The remaining instructions
   scale the created pellet damage, set the one-emission flag `actor+0x36c`,
   clear release gate `0x6b584c`, and return.
5. `0x4341b0` is a separate 3700-ms targeting-display linger after fire input
   releases. It does not prevent another shot. `0x435440` gates particular
   camera states, not a weapon recharge interval.

The port previously used max(authored RechargeTime, full clip duration), about
1.018 s. It now ends the weapon cycle at 80%: about 0.814 s for ordinary/power
shots, or 0.549 s after BIG BENG release from its 26% held pose. Input is sampled
before that cycle is retired, so a new shot/charge begins on the next update.
The saved full-clip deadline remains unchanged because it supplies visual phase.
The existing save cooldown field continues to roundtrip. Old saves containing
the previous longer cooldown can finish that single saved cooldown; future
shots use the native duration. No version bump/migration is required.

## Confirmed boundary: release must be beyond 46%

`0x434d03–0x434d13` compares normalized time with the float 0.46 at `0x64c598`;
zero and less-than flags both skip release. The port formerly accepted exact
equality with an additional early tolerance. It now releases only after its
stored phase deadline. Floating-point representation and native integer motion
clocks remain a documented precision boundary; this does not assert bit-identical
x87 timing.

## Preserved intentional behavior

BIG BENG's 1.5-s charge, min-1 damage, explicit press/release handling, protected
dialogue cancellation, death cancellation, per-player save state, controller and
touch inputs remain intact. No audio/music scheduling, camera, modern movement,
collision stabilization, invulnerability gates, streaming or performance budgets
were changed by the firing/hint corrections. The subsequent flight correction
below replaces continuous integration using separate recovered evidence.

Movement/boost, charge damage and player damage/landing paths were re-read in
this follow-up, but this finding does not certify all player branches. The
previously implemented landing fix is separate. Native global charge residue,
platform collision differences and exact x87/frame clocks are not claimed fixed.

## Focused verification

`node --test tests/player-projectiles.test.mjs tests/player-abilities.test.mjs`
passes **19/19** (`player-shot-tests.tap`). Coverage includes strict release,
next-update rearming, ordinary/power/super projectiles, charged damage/hold pose,
charge and pellet save continuity, cancellation and touch press/release.

One old test described dialogue as pausing a queued shot while production code
already deliberately cancelled it. The test now distinguishes that cancellation
from ordinary save restoration. Another test assumed a fixed pre-upgrade shot
count after switching skills mid-animation; it now records already released
pellets before checking that death does not release a cancelled charge.

No new packages, full suite, external user saves, or original files were changed.

## Dormant RcHintMotion API

The original setter `0x436f40–0x436f55` accepts integer values0..15 and stores
player+0x34c without resetting the movement-state cache. Only12 is consumed,
at `0x433445–0x4334c4`, selecting `fall1` from the pointer at0x690168 with
loop=false and speed1.5. Normal/super jump flags at0x43337d/0x43338a suppress
that branch. `0x4a0660` sets loop/rate before selecting the clip;
`0x4a06b0`→`0x4a10a0` restarts non-looping requests even when the clip name
is unchanged. The hint persists, so the native request restarts each update.
Clearing the hint does not itself change the cached movement state: the last
hinted clip runs on until ordinary movement changes state.

Implemented valid-range handling, persistent saved hint and rendering consumer,
including repeated request/clear semantics. Zero-delta render/bone queries,
protected dialogue, hurt/death/respawn and no-clip remain the deliberate port
exceptions. The motion override key survives the existing animation snapshot.

`hint-campaign-reference-scan.json` records all five campaign declarations and
zero instruction-expression references. This is dormant API completion, not a
claim that a visible campaign animation was missing. Focused animation tests
pass11/11 (`player-hint-tests.tap`), covering API bounds, old/new saves,
restart/clear behavior, bone-query stability, and protected/jump priorities.

Strict release-boundary fixture updates were also required in six existing
consumer test files. Only their affected test cases were selected:14/14 pass
(`player-release-consumers-tests.tap`), covering puzzle callbacks, body/wall
hits, shot/impact audio and combat music. Unrelated tests were not rerun.


## Confirmed flight ordering: player acceleration and enemy gravity/homing

Shared native `0x44c760`, specifically `0x44cacf–0x44ccd1`, copies current
velocity, adds acceleration (`0x44cb0b`), caps magnitude (`0x44cb33`), applies
world-scaled gravity (`0x44cb5f`), translates (`0x44cba4`), and collides
(`0x44ccab`) before committing position/velocity. The witch override at
`0x446690` invokes this first, then normalizes the vector from the new position
to target center and restores InitialSpeed (`0x446701–0x446737`).

The prior player continuous integral was a demonstrated mismatch, not a
requested difference: at native 60 Hz the first second of RcShot flight is
381.333 units, versus 380 in the old port. Player flight now sums the recovered
accelerate/cap-before-move sequence on a canonical 60 Hz clock in O(1), including
cap crossing. Smooth partial travel and saved phase prevent high-refresh
quantization and save/load acceleration glitches. All authored player shots
have zero gravity; custom acceleration-plus-gravity player shots remain outside
this specialized helper's native parity claim. Existing straight swept contact
and audio event routes remain unchanged.

Enemy flight formerly executed gravity/turns per display frame. It now applies
cap/gravity once at each canonical tick's start, sweeps every curved partial
segment, and retargets witch magic only on a completed surviving tick. Fixed
player-position trajectories agree at 10/30/60/120/144/240 Hz. Straight
zero-gravity non-homing shots still use one collinear sweep per display update.
Sprite animation and visual trail clocks retain their separate existing update
schedule. Target positions still sample the current gameplay update; no claim
of native global-time, moving-target, or x87 bitwise equivalence is made.

For performance, each enemy update consumes <=100 ms (<=7 curved segments).
Normal Gameplay.update already clamps to that window and accrues no debt.
Exceptional direct large-delta calls retain saved pending flight time capped
by remaining lifetime; later calls drain it within the same bound. Age/expiry
follow consumed flight time. This canonical timing and exceptional debt are
explicit portable safeguards rather than claims that the native engine did
identical fixed stepping. Frozen ammunition preserves phase/debt untouched.

Retained evidence: `projectile-native-flight.asm`, exported C functions
`0044c760_FUN_0044c760.c` and `00446690_FUN_00446690.c` in the sibling full export.
Focused results: **15/15** player flight/collision tests in
`player-flight-tests.tap`; **16/16** enemy flight tests in
`enemy-flight-tests.tap`. No full suite, package builds, or user-save edits.
