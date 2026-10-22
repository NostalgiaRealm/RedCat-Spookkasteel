# Earned finale preparation — 18 October 2026

Historical preparation notes below. The actual handoff and earned finale have
since completed; see [the complete replay record](earned-finale-report.md) for
accepted routes, helper mistakes, all deaths/recovery boundaries and the final
unskipped outro/menu proof. Do not treat the original estimates below as a
guaranteed automatic route. In particular, open the hub proximity doors before
the fairy route, align at z=-1180 before the Max gate, and collect the fifth
mirror physically rather than waiting for it as an introduction reward.

Preparation only; **no API4511 contact** and no new runtime/tests/builds were
performed. Await explicit exclusive handoff after all four earned Caves altars.
`guarded-stages.js` defines input-only stages based on previously successful
physical routes. These new wrappers have not been replayed and must not be
called proof of the earned finale. They stop on death, wrong level, mode change,
no-clip, script errors, unexpected cutscene, failed path or missed destination.
Stairway stages also check the actual destination height; `__finalGap` waits for
ordinary grounded contact and checks the landing position/height. Load the existing
Tower ascent `input-helpers.js` with all previous keys released, then the stages.
Use one stage per request and export actual living saves/evidence between stages.

## Caves

1. Confirm `unlock_max.triggerCount === 4`, potions>=30, skill includes11,
   mirror3, living state. Export the exact earned handoff save first.
2. Fairy approach `[-538,-300]`→`[-538,-552]`; normal E pulses finish dialogue.
   Skill must become15. `__finalFairy()` guards the prerequisites and result.
3. Follow floor route to `[-100,-1200]`, then `[-10,-1500]` and
   `[-10,-1622]`, finishing any actual Max introduction. Save alive.
4. **Lava gap:** retained successful attempt walked to about[-10,-1660] and
   pressed Space while moving north, landing about[-10,-1780] and continuing
   to[-10,-1872]. Walking straight through this gap caused death in the old
   fixture. Use normal jump/SuperSkippie with inspected current takeoff/landing.
5. Max starts11HP. The successful old attempt used charged Ctrl holds with
   releases, strafed right toward[109,-1885], advanced to[60,-2019], then
   strafed toward[169,-2103]. Three successful charged projectiles plus an early
   weak hit killed him. Ordinary full-health pickups are at[127,-2069],
   [-148,-2052], and[140,-2339]; collecting the first restored the old run to10.
   Use one guarded charged shot at a time and inspect health/phase. This prepared
   helper holds a full charge until target lock, then releases normally; it
   does not reproduce every original strafe timing automatically.
6. After Max health0/door unlock, go via[140,-2339] and[0,-2387]. **Second gap:**
   old takeoff about[0,-2544], ordinary jump lands near[0,-2667]; continue to
   [0,-2791]. Walk through the normal doors and past the short ramp atz-3148.
   Collect mirror[-14,-3592], finish its scene, then exit near[0,-3776]. Verify
   actual debrief, mirror4 and skill15; Enter ordinarily loads Tower.

Retained evidence: `../caves-input-encounter-2026-10-15/runtime/commands.jsonl`
commands21–40 and `responses-resumed.jsonl` entries1–20. That old run started
from a declared late-Caves fixture, so it establishes mechanics/routes only.

## Tower ascent and bonuses

`__finalTowerStairs()` reaches the introduction then floor[200,350]. Fight
guard01 and bat01 with actual charged shots. Earlier stationary combat cost6HP;
do not start this part with inadequate health and assume it is safe. The Max
arena offers normal full-health pickups before Tower.

`__finalTowerClimb()` follows the proven spiral staircase to four health
pickups: [-333,523] y-3808,[-553,-111] y-3691,[2,-516] y-3576,[547,-111]
y-3472. Portal[367,600] is at y-3354 (not-3312). Wait for its actual scene to
arrive at[-1,2484,1400]. Upper hall[0,1008]→[0,931] touches checkpoint; go
around its pillar via[80,800]→[0,590]. Export living checkpoint.

`__finalBonusA()` and `__finalBonusB()` contain the previously proven complete
pickup loops and both return portals. Expected: +2 maximum health,+1 life,
eight small health pickups,22 bags; all32 collected. Bonus rooms do not increment
secrets. See `../tower-bonus-2026-10-18/verified-bonus-rooms.md` for exact
semantics. The earlier fixture started with maximum10 and reached12/12. The
earned campaign already has maximum12 from the Air secret, so the Tower heart
container should raise that to14; verify the actual pickup rather than copying
the fixture's health total. The bonus life should likewise add to the actual
earned lives, not replace them with the fixture's total.

## Mirrors, Witch and ending

`__finalMirrors()` triggers the fifth mirror introduction and walks the same
safe perimeter used by the successful encounter attempt. Require mirror5,
`witch_enable.triggerCount === 5`, and an enabled Witch. The old run took no
damage during this circuit. Export a living pre-Witch save.

Move toward[140,-40], a previously successful central firing position. The
Witch has8HP. The successful retained attempt held a full charge until actual
target lock and Witch phase `shoot`, released, then strafed right for400ms.
Second shot charged while strafing D850ms,A850ms, waited again for full charge,
lock and `shoot`, then released and strafed D500ms. Both4-damage shots hit;
player stayed10HP. `__finalCharge('The_Witch',{phase:'shoot'})` provides a
guarded one-shot operation, but the caller still manages safe repositioning.

On health0, stop attack/movement and let the authored ending play. It took
roughly70seconds in the old fixture. Advance normal frames in bounded chunks,
without E skips if documenting the full ending. Confirm actual levelComplete,
debrief, script errors[], VMnull and unsupported commands empty. Export the
completed save and screenshot. Press Enter normally; observe the outro video's
real `ended` event and return to menu (old video took about56seconds). Video
uses real playback time, so manual game-frame advancement is not a substitute.

Retained successful Witch evidence: encounter `commands.jsonl` commands67–75,
`responses-resumed.jsonl` entries47–55, `tower-witch-defeat-evidence.json`,
`tower-ending-complete-evidence.json`, `outro-start.json`, `outro-complete.json`.
The original Witch attempt used a declared upper-arena position fixture; the
separate ascent has since proven ordinary reachability from Tower entry. Only
the forthcoming earned handoff/replay can join them into the continuous run.
