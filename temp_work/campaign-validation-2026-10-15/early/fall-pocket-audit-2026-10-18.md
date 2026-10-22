# Castle fall-pocket recovery audit — 2026-10-18

The final source was reviewed after the root agent reported the focused movement-recovery suite passed all 24 tests. The root agent ran that final test invocation; this audit did not repeat it.

The test additions in `tests/movement-recovery.test.mjs` cover the actual Castle BSP pocket with the captured partially shifted crate poses, a sealed synthetic pocket, ordinary walking around a corner (including a gate farther along that route), a jumpable lip, and walking beneath a low ceiling to reach headroom. They also require a previously reached higher destination, revalidation before recovery, and bounded collision traces per frame.

The implementation uses four cardinal full-body swept edges and upward probes, includes clipped endpoints for corner turns, and abandons the rewind if it reaches the horizontal escape radius or its node budget. Native player jump height plus the existing step allowance bounds upward exploration. No blocking implementation defect was found in this final source review. Coverage establishes these fixture cases; the bounded grid is not a general proof for every possible level topology.

The original campaign interruption and the retained route notes remain separate: the isolated exploratory Castle fixture reached 19 potions by normal controls, then exhausted lives in the rolling-ball corridor. Its old checkpoint did not survive game over. Further route exploration must use a copied normal-earned save, not manually reconstructed game state.
# Final review addendum

After Castle completion, a focused real-BSP box probe confirmed a missing downward route: [0,.05,0]→[46,.05,0]→[46,-31.95,0]→[46,-31.95,64] was fully unobstructed, but the previous upward/horizontal flood incorrectly recovered to [0,100.05,0] after49ticks. The lower corridor ceiling requires the short drop before turning. This is a source false-positive risk, not a Castle driver failure.

The final implementation now explores full-hull downward edges too. Any reachable position more than1unit below the starting floor conservatively cancels the rewind; downward edges above the starting floor also connect raised routes to lower landings. Four edges per update and the256-node bound are unchanged. The actual Castle crate pocket still passes.

Added regression: `a descending passage beneath a lower ceiling is an ordinary fall-pocket exit`. The focused new regression passed, then all25 movement-recovery tests passed. Logs: `fall-pocket-descending-regression-2026-10-18.log` and `movement-recovery-final-2026-10-18.log`. No broad suite or build was run. Probe source retained at `fall-pocket-descending-exit-probe.mjs`.

