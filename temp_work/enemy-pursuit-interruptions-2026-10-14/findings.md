# Pursuit and hit interruptions: final native findings

14 October 2026. REA/Hopper static inspection of the original `RcHcGame.dat`,
SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
No native runtime playthrough was recorded. Conclusions below are derived from
the observed instructions, constructor wiring and vtable bytes. The complete
REA records, limitations and parameters are in `rea-evidence-bundle.json`;
`evidence-index.md` maps every query to its evidence ID. This final ledger
supersedes provisional messages, specifically the provisional attribution of
`0x419cc0` to zombie and the provisional claim that closer always finishes an
edge before checking range. Neither is correct.

## Pursuit endpoint selection

The ordinary shooter pursuit does not choose arbitrary closest start/goal
waypoints across the graph. The recovered caller chain is
`406f50 -> 407280 -> virtual+18 4072f0 -> 5967f0 -> 5973e0`, whose selector
`597480 -> 5997e0` uses the actor's current waypoint and current target actor
position. It collects valid adjacent nodes strictly closer to that target and
chooses uniformly with CRT `rand() % count`. There are at most eight slots.
`595cd0 -> 595c80 -> target virtual+48` supplies the current target position,
not a stored last-seen point. `599e10` retains the previously recovered
reservation/unlink and MinPlayerDistance checks; its minimum-distance test
uses the current sublevel player position independently of the target ranking.
The minimum distance allows equality.

The parent explicitly selects closer on first entry. `407280` first changes
movement mode, then either enters shooting immediately if no destination
exists or plays walk and unfreezes movement. There is no range gate in this
initializer. However, physical movement is gated separately:

- `596640` changes mode and selects/reserves a destination.
- `5969b0` only selects a new adjacent node when the cursor's arrival flag
  `59be60` is true. Otherwise it preserves the unfinished edge.
- Every movement update `596b00` calls `5969b0`, then movement-state virtual+4
  to compute completion, then only calls physical cursor advancement `59be70`
  if not complete and a destination exists.
- Closer completion `597430` is current cursor-to-current-target distance
  **strictly less than AttackRange**. `4072f0` passes common settings
  `422d90()+30`, the actor's `+150` AttackRange field.

Consequently a shooter can stop midway through an edge when it reaches range,
and can select an edge but take no physical step if already inside range. The
cursor destination remains available for later resumption. This is distinct
from selecting a new destination in mid-edge.

Parent `406f70` then enters a shoot child on movement completion while target
memory is valid, or completes the alert child when memory has expired. A
no-destination result enters shooting immediately, including outside attack
range; it does not insert the touch family's one-second no-node wait.

After shooting finishes, `406f70` samples `rand()%10000 * .0001`; a sample
less than or equal to settings `429fd0()+34` requests another closer mode,
otherwise it waits settings `+38`. There is no target-memory test in that
post-salvo branch. After
that wait it checks `422f70` (memory valid and range <= AttackRange) and chooses
shoot versus closer. Names of the `429fd0()+34/+38` settings should be tied to
the existing imported field mapping rather than guessed from their offsets.

Representative records:

- `ev_e46fceb1e27913851e21eec6bc5d2bc7a027834c6907f4fe08519aa8b4934822` — approach initialization assembly.
- `ev_9a8ea9e4151e6770ffeff9e5d828f95d911c4a202d16982b0d05e63460400ec9` — exact AttackRange argument.
- `ev_5b9eca924d3600f7d93c06416c1ca4dcad625d77ebd281fb3378becda2b5903a` — random closer neighbor.
- `ev_65d6a9e6aecd7745ff72e498d4e1d53a40de3153649384525bb5232b0d5376a1` — shared candidate validation.
- `ev_a7911715b4904a0510f78eb8abc6fce48f20f76e775324166f926978190bf774` — unfinished edge preservation.
- `ev_b31de8109972c40387cb6173abcdc716bb06fcfef579f13ce9760087f3fbaeba` — completion before physical movement, every update.
- `ev_aec46fa92a4bbdfbb5dab5012a1263c0d719c608a91fa3216f09887d267c2c99` — closer completion condition.

## Skeleton retreat

**Later refinement:** the separate
[retreat motion ledger](skeleton-retreat-motion-findings.md) establishes that
MoveFurther's distance completion only stops body movement. The enclosing
skeleton retreat child completes on its nonlooping `walkbw` clip. That ledger
supersedes any earlier wording below that conflates the two completions, and
records the no-node timing and same-state completed-child behavior.

Skeleton attack `407f50` starts by shooting. After a child completes,
`408010` first tests target memory, then `408140 -> 428b70` checks whether the
current target distance is strictly below movement settings' MinPlayerDistance.
If so, `4081e0 -> 408770 -> 408790 -> 596860` enters MoveFurther. Otherwise it
waits configured post-salvo time, or shoots if the prior child was that wait.
A retreat with no valid destination immediately enters shooting.

MoveFurther `5974d0` uses vtable `650058`: completion `597520`, selector
`597570 -> 599a60`. The selector scans all eight adjacent slots and retains
the **farthest valid** neighbor strictly farther than the current node. It
updates the best distance only on strict improvement, so equal distances keep
the earlier slot. **It does not randomize**. Validation and current target
position are the same mechanisms as closer. Completion is distance strictly
greater than the passed threshold. `408790` passes **AttackRange**, so retreat
begins below MinPlayerDistance and body movement stops beyond AttackRange.
No valid farther node interrupts an unfinished retreat child into shooting.
It shares mid-edge stopping/preservation above; the clip controls child
completion, as established by the later supplement.

Representative records:

- `ev_bf3b67619b02e728baa463710d6bde8283957b31bb9765294051a262a1576515` — skeleton parent update.
- `ev_449a38aa3c2b6ffdf867a49c4c96deb6b876be9343cec90e725a2460c96e2d70` and `ev_b032a0aa524de7d40662b242f9f4ac7e31b5708faa62aabefcdf109b228d076e` — retreat condition.
- `ev_cf9bafd05092ce9b9e41f0742c2738063baa3caa808be1604c846fcab0f62886` — deterministic farthest neighbor.
- `ev_f0a4e8ad0fdb5a49ebc83cb8e96647dd1d4979f5966ad2c5a1194cf63c966554` — strict greater completion.
- `ev_22529a475056ec1b2815ba6cb471f64c1d53b7e739f0ee202d4f2626071c160f` — AttackRange argument.

## Touching family identity and state wiring

`42dc80` is the touching-controller base of guardian (`40d660`), green bat
(`415680`), green ghost (`4161f0`), touching spider (`4176c0`) and zombie
(`418d50`). Their initialized state wiring corroborates actual use:

- Guardian and zombie initialize through `42dd20 -> 40ab80`, root table
  `64aa38`, whose alert entry is `40aba0 -> 40ac10`.
- Green bat and green ghost initialize `4158f0/416460 -> 404470`, root table
  `64a4a4`; its alert slot also points to `40aba0 -> 40ac10`.
- Touch spider initializes `417ed0 -> 408b50`, root table `64a8ec`, alert
  `408b90`. This is a ceiling/lower/return wrapper. Its update `408ff0`
  eventually calls `408d10 -> 40ac10` for the active ground pursuit.

The active common state is the already recovered three-way closer/clockwise/
anticlockwise touching pursuit (`40ae9c`), with one-second no-node wait and
two-second circle duration. It is not a shoot1 attack clip state. Existing
contact damage is the applicable attack mechanism. Preserve the spider's
ceiling transition wrapper separately.

Records: `ev_82086ac487e4e2b7d9b9dcd8994e7934bf729e540bf6f6ca71b7044edd42a7d5`,
`ev_3767e779f327848ea6a832253a7674eb79d97151a6e8ceef5ed875f4d5bd474f`,
`ev_47ebb7329bfcd67ceb195a924a5055e7032bb097f83b3dff9d57bac08ed0dff9`,
`ev_a7a0640e97791b61c7fef85ac144cebaaf59a9bcc7d104a06d133564c8965a0f`.

## Damage receiver identity

Vtable slot `+1c` is the relevant receive-damage method. Constructors and
resource strings identify the types; adjacent code addresses alone do not.

| Type | Actor table | Receive damage | Initialize state |
| --- | --- | --- | --- |
| Guardian | 64abc0 | 4232a0 | 42dd20 |
| Green bat | 64b2c4 | 4232a0 | 4158f0 |
| Green ghost | 64b3ac | 4232a0 | 416460 |
| Touch spider | 64b488 | 4232a0 | 417ed0 |
| Zombie | 64b55c | 4232a0 | 42dd20 |
| Frog | 64ae50 | 4232a0 | 429ea0 |
| Shooting bat | 64af2c | 4232a0 | 410d00 |
| Shooting ghost | 64b030 | 4232a0 | 412280 |
| Shooting spider | 64b10c | 4232a0 | 413b80 |
| Skeleton | 64b1f0 | 4232a0 | 414e60 |
| Plant | 64ad74 | 4232a0 | 40f1c0 |
| Mushroom Brutus | 64b96c | 4232a0 | 41f9e0 |
| Bone Brutus | 64b630 | 419cc0 | 4197d0 |

Common `4232a0` refreshes combat/music and last-target timing, rejects already
dead actors, subtracts integer-truncated incoming damage from integer HP,
then chooses `rand()%2 == 0` to request the hit state. The other branch plays
sound category 3 without interrupting the current state. It then checks death.
There is no general hit-immunity timer or frozen-byte check in this common
receiver. Health damage continues during a hit animation.

Bone Brutus `419cc0` additionally rejects frozen byte `+100`. It refreshes
combat/memory, then only the `rand()%3 == 0` branch subtracts health and
requests a hit; the other two thirds play sound 3 without health damage.
This method is **not zombie's method**. Mushroom Brutus uses the ordinary
50% reaction method. Their root tables `64a284` and `64a6d0` both select
ordinary moving hit entry `4056c0` at slot `+20`.

The port intentionally retains fractional enemy HP rather than x87 integer
truncation. Helper `60ab20` changes rounding mode to truncate. Reproducing
that per-call truncation would discard modern high-frequency blast ticks
below 1 HP. This is an explicit portability choice, not exact integer parity.

Records: common receiver
`ev_d64466c7022118b25bca959259a778e15231e44f3d0ad036038d9165041def8e`
and assembly
`ev_9a78765be4511630ed152e1d5f05760796d5639e30a7c82987f3e8545e3027ff`;
Bone receiver `ev_036485acb855c5413a6bd6aabbe938e0fbec814e1d24ed16c13d1b38553e1189`;
Bone table `ev_83135a274532f31f116a702927a456f9312cb6a3f2623db6a769f69ef47b736c`;
Mushroom table `ev_12543eaf1b6283c411205e8f1898de9f397037a1428ae24ae3536f3bef8a03a1`;
truncation `ev_ef086cb0c46760aa2487dbbe06726081d98567d9296114aba5e87e696e903676`.

## Hit interruptions and sound

Stationary hit entry `403420` and moving entry `4056c0` construct hit child
`403700` (moving wrapper `405b10`). New hit initialization `4037e0` plays
sound 3 and nonlooping hit motion enum 4. State setter `402a10` first compares
the requested state with the existing state. When both are hit/state 4, it
destroys the newly supplied candidate and keeps the existing child. Therefore
repeated selected hits **do not restart** the clip/deadline and **do not play
another hit-entry sound**. The nonreaction branch still plays sound 3,
including while already hurt. Neither branch provides common health immunity.

Changing into hit destroys the previous child and nested descendants.
That cancels pending release, remaining salvo and current wait. After hit
finishes, root `4030b0` enters a fresh alert child through virtual `+14`; it
does not resume the old partially completed attack. For stone enemies this
means a fresh alert/wake, not a new immune inactive state.

Skeleton has a specialized hit entry `407a30 -> 408830`, table `64a898`.
It still uses `402a10`, so active hit does not restart. Its initialization
`408880` plays sound 3 and tests `4150f0` (root state equals 1), conditionally
waiting for a start clip before hit; update `4088e0` sequences those clips.
The reachable timing of that dormant-state condition was not resolved here:
`402a10` changes the root state before later child initialization. Keep the
already implemented skeleton wake lifecycle; do not invent immunity from this
condition. This is a specific retained residual branch.

Records: `ev_b67d24b3b30445c5210bc5afdf393e0f72a473a1e485832d009fd66447fc2b41`,
`ev_41f2690aed72cc1830b858b926cc7b3f7b549ded01596e07961d7b564576fd86`,
`ev_c557b4fb2386a9435ebd9ad37356fe42cfecc2c0bea6d6ab770d8c281296cb6a`,
`ev_5274158d465e952f3781c211bc3a489b996fe1d8322469e21070cad86bdb2ac9`,
`ev_e0ac66fa74fc342a48c755c5a7dc4631cb27572b3e18204fa9c616fdb7d6ee3f`.

## Stone immunity lifetime

Knight receiver `40e400` checks byte `+224`; gargoyle `40bfc0` checks `+230`.
True forwards to common damage. False refreshes combat/memory and chooses
the same 50% hit request versus sound 3, but skips health subtraction.
Only the inactive-state lifetime sets this false: knight construction
`404ee0` clears it via `40e390`, and destructor `405420` sets it true;
gargoyle construction `405250` clears via `40c4f0`, destructor `4054a0` sets
it true. Waking, awake, retracting and hurt are vulnerable.

A selected hit on dormant stone can wake/react while the triggering hit does
no HP damage. Do not put the port back into immune dormant state during hit
or when entering the fresh post-hit alert. Knights play their optional start
motion again; gargoyles use their established idle fallback without a start
asset.

Records: `ev_929195ee65e8e5d09abf332a40bd230fe8f9019de737e373519159e1dc993d11`,
`ev_7c59bddb8f469a181dae541937ff588971b4f82e02f17bc70c55433f22137f55`,
`ev_ccf7392c2eb45f7092cf1be50fe2d3cefc52b7e4124b1c294355c92a16cfc62e`,
`ev_e483d76eda3fc4e59ee2d471e57a7dc8bee95d147fe23aef4e54979bf5067172`.

## Committed shooting

Common shooter child `4073a0` retains salvo count and progress.
`4074b0` waits for the current animation frame >= configured shot frame,
then `4076f0 -> 42a220` releases. It does not recheck visibility, memory or
range at release. The projectile routine resolves and aims at the current
target actor position (plus configured height and spread), provided a target
reference still exists. Root detection `422f30` means current visible flag OR
remembered-target timeout, not visibility alone.

After release, the child waits for the shoot clip to end. If count remains,
it enters `407800 -> 405c20` for configured TimeBetweenShots; after that wait,
`4076b0` starts the next shoot clip. Whole-salvo completion returns control to
the parent's post-salvo move/wait choice. A selected hit destroys this child;
a sound-only random reaction does not. Do not recheck line of sight or range
at each release or between committed shots.

Wait child `405c20` initializes looping idle through `405c50 -> 403ff0 ->
404000`, freezes movement and installs a duration timer `596ee0`. Timer
completion `597900` arms `deadline = now + duration` on its first update and
returns false. Later it completes only when **now > deadline**, not equality.
The duration unit is integer milliseconds, with the recovered scale equal to
one. This timing applies to both `407800` between-shot waits and `407340` /
`408250` parent post-salvo waits.

Records: `ev_592a962a64e5db2c8ca6a9b131ca348b1628e3ba4fe808de837d12bdfdbe788a`,
`ev_1e3cce3db438e4d47561c8877cbcc5e887be92941d593aed67cc1e2ff94d9075`,
`ev_a4fccaea4b64806369c242873632250db8f60fb83c422b50b6105aa567ebd64b`,
`ev_2d1d38715bde8e5fcb5624cc52e1618b91e8ab2f47aaa616e1fdbabd68edaccc`.
Wait records: `ev_1216a362d0af3622b231a9efb1b1d3d84fb8743130f77ad8c74b6ffe54599b65`,
`ev_2bc7c0416a9dbaaa4da9bc2bb7734dd1aa4d92ef4df6b64b4e7e08e072036052`,
`ev_f6f311c86c0f9273322944aca07217fed632640609678dc6158e8c46eba9ee71`.

## Coverage and remaining adaptations

Answered: ordinary closer endpoint selection, farthest retreat selection,
cursor preservation and completion threshold, touching subtype state wiring,
common hit/no-hit and repeat-hit behavior, stone immunity, Bone/Mushroom
receiver identity, shooting commitment and cancellation.

Explicit MoveToStart still uses known waypoint-ID routing
`5975c0 -> 597790 -> 599910 -> 59ca10`; that is distinct from target pursuit.
The earlier `59c810` caller `4dd5a0` is a player's nearest occupancy marker
within 100 units, not evidence of a global pursuit endpoint policy. Offgraph
port recovery, collision handling and scheduler limits remain explicit port
adaptations. No generic arbitrary-position native path endpoint search was
established for these ordinary callers.

Unresolved or preserved: skeleton dormant-hit initializer reachability;
complete specialized boss AI beyond the proven Brutus receiver and shared
hit-entry policies; exact native execution/audio ordering under the original
frame scheduler. Static conclusions do not claim a recorded playthrough.
