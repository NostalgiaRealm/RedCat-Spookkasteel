# Graveyard optional secrets — physical source validation, 18 October 2026

All four authored Graveyard secrets now have ordinary-input traversal evidence,
including an exit/return from each optional area. These are **separate isolated
branches**, not a claim that the continuous earned campaign collected 4/4. The
earned Graveyard completion recorded 0/4; the earlier chapter fixture recorded
1/4 (secret 2). No source changes or builds were needed for these routes.

## Boundaries and evidence

Every runtime used a separate retained browser profile. Original profiles and
saves were preserved. After importing an unchanged snapshot or using the
ordinary recovery menu, traversal used keyboard events and the normal camera
look entry point. Read-only collision/path queries selected destinations. No
position, health, inventory, enemy-health, skill or puzzle-state writes occurred
during traversal. No-clip remained false. Failed paths and deaths are retained in
each folder's `commands.jsonl` and `responses.jsonl`; none were silently reset by
state edits. Source servers/drivers for this audit were stopped after export.

| Secret | Starting boundary | Physical result | Evidence |
| --- | --- | --- | --- |
| `secret_1_tr` | Exact earned Graveyard-entry save, HP6, skill3, mirror2 | Coin opens the grave lift; secret increments; underground bottle and all six bags collected; lower lift trigger carries RedCat back up | `entry/secret1-evidence.json`, `entry/secret1-return-save.json` |
| `secret_2_tr` | Earlier isolated chapter fixture, incoming skill3 | Moving-platform shot opens the optional bridge; two bottles and secret collected; jump back onto platform3 succeeds | `../campaign-validation-2026-10-15/late/graveyard-route/verified-route-2026-10-18.md`, section “Temporary ferries and vertical platforms”, plus its retained input logs |
| `secret_3_tr` | Exact earned normal 10-minute recovery snapshot, HP2, skill11, mirror2 | Timed outer switch opens room; secret increments; both bottles, five money pickups and heart container collected; inner switch permits exit | `preboss/secret3-evidence.json`, `preboss/secret3-return-save.json` |
| `enabletrig_tr` (secret 4) | Unchanged earlier chapter-fixture profile, actual 5-minute recovery-menu choice, HP4, skill11, mirror0 | Both hidden grave switches count1; released frog defeated; normal teleport enters Easter-egg room; secret increments; all four lighting zones entered; return portal works and RedCat walks out of grave | `earlier-fixture/secret4-room-evidence.json`, `earlier-fixture/secret4-return-complete-evidence.json`, `earlier-fixture/secret4-safe-return-save.json` |

The entry branch imported the exact `redcat.save.v1` string from
`../campaign-validation-2026-10-15/playthrough-1792088801065/graveyard-entry-earned-2026-10-18.json`.
The preboss branch imported the unchanged
`earned-graveyard-recovery-choice-10m-2026-10-18.json` in that same folder. Both
initial imports are retained locally as `entry-fixture-unchanged.json`.

For secret 4, `earlier-fixture/profile` was copied from the existing isolated
chapter-fixture profile, preserving its origin `http://127.0.0.1:4550`. The
ordinary recovery menu selected its five-minute snapshot. Its exact contents are
retained as `earlier-fixture/selected-recovery-save.json`, with the prior choices
in `recovery-inventory.json`. Starting position was
`[48.95,308.05,-1099.9488]`, potions31, score1890, coins60, kills24, secrets1.
Skill11 had already been earned in that fixture. This is not an earned campaign
checkpoint and does not extend the campaign's secret count.

## Reusable route details

Coordinates below are `[x,z]`. Helpers are the retained
`../campaign-validation-2026-10-15/late/graveyard-route/input-route-helpers-final.js`.
`__moveToSuper` requires `{jump:true}`. Movement always used `attack:false`;
combat was separate. Failed A* results do not establish a game blocker.

### Secret 1: early grave lift

From entry, collect `[1421,3239]`; use `[1616,3100]`, `[1616,2900]`,
`[1616,2400]`, **`[1616,2300]`**, then `[2253,2309]`. Moving east too soon
hits the outside crypt wall. A* step16 reaches `[2400,1915]`; walk east to
`[3210,1915]` through the ordinary proximity doors. Continue to `[3339,2181]`,
then `[3810,2351]`. The coin pickup opens the lift. Remain on it through its
descent; the secret triggers en route.

Underground: `[3650,2348]`, `[3408,2267]`, `[3318,2329]` (bottle),
`[3266,2270]`, `[3121,2288]`, `[3124,2419]`, `[3235,2429]`, `[3401,2429]`.
All six room bags were collected. Return via step16 A* to `[3650,2355]`.
The ordinary lower proximity trigger opens the lift; wait open/still, board
`[3808,2348]`, wait closed/still, then leave via `[3650,2260]`.

Final: HP6/10, lives1, potions4, skill3, mirror2, score2815, coins76, kills13,
total secrets4 (entry total3). No damage, death or combat in this branch.

### Secret 3: timed lower-corridor room

The earned recovery starts near `[-858,715]` at HP2. Ordinary health pickups at
`[-807,1071]`, `[-1244,1252]`, `[-1695,1089]`, `[-1346,925]` provided a
living HP4 save despite an enemy hit. One attempt to fight spider13 directly
under its ceiling position died. F9 loaded the real living save. The successful
approach used SuperSkippie to `[-880,828]`, then `[-880,620]`, settled50frames,
and shot the spider from medium range without damage.

Collect `[-1088,588]` (bottle31). Press the outer switch at **`[-1116,587]`**
with tolerance1; stopping at `[-1110,588]` had not pressed it. Then promptly
SuperSkippie along `[-880,650]`, `[-880,836]`, `[-1604,836]`, `[-1604,752]`.
The room trigger increments secret3. Collect `[-1565,709]`, `[-1552,602]`,
`[-1527,480]`, `[-1649,474]` (heart container), `[-1794,515]` (bottle32),
`[-1789,638]`, `[-1811,708]`: all seven room pickups.

After allowing the timed door to close, approach the inner switch via
`[-1704,730]`, press `[-1704,759]` with tolerance1, then SuperSkippie through
`[-1604,750]`, `[-1604,836]`, `[-880,836]`, `[-880,620]`. Both switches and
the secret trigger recorded count1. Final HP4/max12, lives1, potions32, skill11,
mirror2, score4905, coins112, kills48, total secrets4 (entry total3). The saved
return point is legitimately mid-jump; no position correction was made.

### Secret 4: two hidden grave switches and Easter-egg room

The retained fixture began by the fairy after earning SuperSkippie. Use the
already-proven three-crate climb to full health `[906,-1070]`, press gate2 from
the west via `[964,-1077]` and `[993,-1077]`, then traverse explicit points
`[1536,-1070]`, `[1760,-1064]`, `[2010,-1064]`, `[2240,-1064]`, and step16
A* to `[2600,-850]`. The long A* path from the rotary hub had failed, while
these ordinary explicit points passed.

Cross the three horizontal rafts using their current physical centers. Align
with raft39 at z-850, board to z-722. Wait for signed `center40-center39` to be
within12 and decreasing; transfer to raft40 z-686 and then z-606. The successful
third transfer waited for absolute center difference below8 before moving to
raft41 z-570 and z-490; walk north to `[currentX,-430]`. A looser25-unit
alignment had failed in this branch. Do not transfer after an expired wait.

Clear the nearby frogs with normal shooting before visiting the graves. The
actual successful branch defeated three enemies from the northern bank,
then two around `[2379,-10]`; damage left HP2. Enter the first opened grave
from `[2379,-10]` toward `[2428,-252]`. Ordinary foot contact presses
`easterknop1_tr`, which opens grave4 and enables its frog. Return to
`[2379,-10]`, walk to `[3000,-20]`, and shoot the released five-health frog
from that medium range. It died without further damage.

Walk to `[3424,2]` (10-coin bag), then toward `[3372,-236]`. The second hidden
switch starts the normal teleport scene. Wait for it to finish: destination
`[-3040,544.05,-2216]`. Walk north to `[-3040,-2450]`; `enabletrig_tr`
records count1 and enables the return trigger. The room has no pickup objects.
Its four lighting regions were entered through `[-3170,-3000]`,
`[-2910,-3000]`, and the route back to `[-3170,-2500]`; all four light-trigger
counts became positive. Portraits and lighting were also checked in the
rendered screenshot.

Return through `[-3040,-2450]` to `[-3040,-2216]`, allow the return trigger and
full teleport scene to finish. It returns to `[3386,467.05,-235]` in the grave,
not to the mausoleum. Walk out to `[3424,2]`. Final HP2/10, lives1, potions31,
skill11, mirror0, score2225, coins70, kills32, total secrets2 (entry total1).
Both hidden switches, the secret trigger and the return trigger counted1.

Five ordinary deaths/reloads occurred while learning this branch: three raft
attempts and two frog encounters. F9/normal load restored living saves; the new
dead-save guard preserved them. No deaths occurred inside the secret room or
on its return. `secret4-return-evidence.json` deliberately retains an earlier
incomplete return scene; use the `return-complete` and `safe-return` files for
the actual successful return.

## Other observations and limits

A separate unchanged earned post-Brutus health-pillar save was inspected first
(`late/`). Ordinary backtracking reached the sealed boss entrance; model55
blocks return to the earlier chapter. This was a route-selection dead end,
not a demonstrated game defect. The attempt and its screenshot are retained.

Screenshots for secrets1,3,4 and secret4's safe return were visually inspected.
They show the underground stairs, timed treasure room with expanded health
capacity, Easter-egg portraits, and return to the outdoor grave area. Final
runtime browser error lists were empty and script VM errors null. This audit
does not establish 40/40 bottles, every enemy, every money pickup, or a single
4/4-secret debriefing.
