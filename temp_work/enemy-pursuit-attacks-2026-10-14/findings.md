# Enemy pursuit / committed shot recovery — 14 October 2026

Target: installed Dutch `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
All addresses are PE virtual addresses. The original file was not modified.

REA positively identified this target, but a focused `analyze_function` request
could not acquire the Linux Hopper lane already owned by another parallel REA
session. No decompilation result is claimed here. Findings use focused `objdump
-d -Mintel --start-address=... --stop-address=...` output from that target plus
the previously retained full disassembly `../redcat-native-score-disasm.txt`.

## Stationary attack child

`standing-shooter-state.asm` covers `0x40a200`–`0x40a6f0`.

- Update `0x40a200` calls `0x402a80` → `0x402d20` for the current child.
- It checks child completion through `0x402d10`, then perception `0x422f30`
  at `0x40a32d` / `0x40a382`. Perception loss is not a release veto inside
  the still-running shooting child.
- `0x40a3d0` constructs the shooting child `0x40a4c0`.
- `0x40a649`–`0x40a682` compares motion progress from `0x4a1060` with
  shoot-info `+0x24` (`DrawMotionPart`), then invokes `0x4022a0` → owner
  vtable `+0xc0`.
- `0x40a5ee`–`0x40a631` checks completed shoot motion and shot quota; another
  shot enters `0x40a6b0` immediately. No per-shot waiting timer is introduced.
- `0x40a440` reads `WaitTimeAfterSalvo` at shoot-info `+0x38` for the later wait.

`standing-shooter-release.asm` covers `0x42b620`–`0x42b880`: it validates a
player pointer, reads current player position and height, obtains the animated
muzzle and perturbs the aim before emitting at `0x42b84d` and playing audio at
`0x42b859`. There is no new perception or attack-range query at release.

`plant-state.asm` covers `0x406960`–`0x406d70`. `0x406c09` constructs the
plant attack subclass `0x406c40`, which calls base `0x40a1d0`. Its vtable at
`0x64a760` contains `405aa0,40a200,403ff0,40a3d0,406c60,654378`, retaining
the common update and shoot creation and overriding the post-salvo idle wait.
The gargoyle constructor uses the base attack at `0x4053c9`.

Port correction scope is plant/gargoyle only. Other classes' interruption
branches have not been completely recovered; no speculative broad change was
made. Actual projectile wall collision, knight range and hurt/death cancellation
remain intact. Added checks exercise the gargoyle becoming unalerted before
its committed release, as well as save/freeze deadlines and complete salvos.

## Explicit return waypoint

`spider-return.asm` covers `0x4092d0`–`0x409420`; the other spider variant
uses the same sequence at `0x4098f0`–`0x409a40` in the retained full disassembly.
Calls `0x40931f` / `0x4093af` / `0x40993f` / `0x4099cf` send the explicit
start ID into the move controller `0x5968d0`.

`spider-start-getter.asm` (`0x414180`–`0x4141a0`) calls owner actor getter
`0x4283d0` then `0x595480`. The latter returns actor `+0x2f4`, initialized from
the constructor argument at `0x5952dd`–`0x5952e1`; actor spawning at
`0x595b8e` also passes that field to its cursor (`0x59b980`). Actor construction
at `0x42761c`–`0x42774d` supplies the authored StartPoint. These getter and
construction ranges remain in the retained full disassembly.

All 46 original spiders across Castle (13), Graveyard (22) and Caves (11)
have a StartPoint; no spider sets UnlinkStartPoint. The port now permits an
explicit terminal in its bounded search and passes that StartPoint on retreat.
Collision-safe origin reacquisition is deliberately retained. A cached chase
route or suspended search with a different terminal cannot replace the return.

The existing native graph search and route stepping are supported by
`../enemy-movement-native-2026-10-05/route-findings.md`. They do not prove which
nearby waypoint native selects when a player is off-network. Another caller,
`CRcMoveMoveToStart` (`0x406550`, vtable `0x64a6c0`), uses its first linked
start waypoint; this is initial movement, not arbitrary player-chase endpoint
selection. No nearest-endpoint policy was inferred from that caller.

## Checks

- Six checks in `tests/enemy-committed-attacks.test.mjs` pass.
- Five checks in `tests/enemy-route-endpoints.test.mjs` pass.
- Six checks in `tests/enemy-pursuit-budget.test.mjs` pass.
- `node --check src/gameplay.js` and `src/enemy-navigation.js` pass.
- Per-frame search limits remain 16 per actor and 48 shared, with fair resumed
  work; changing destination does not reset used credits.

No package build and no unrelated full test run.
