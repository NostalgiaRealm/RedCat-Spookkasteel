# Tower optional bonus rooms — verified 2026-10-18

Both upper side portals, both bonus rooms, all 32 loose pickups, and both return
portals were reached with ordinary inputs. The player then walked back to the
Witch approach without starting the encounter. No source change or build was
needed.

## Explicit fixture boundary

This is a separate isolated source-runtime test, not part of the earned campaign
on API4511. A fresh browser profile on origin4580 imported
`../tower-ascent-2026-10-18/upper-arena-save.json` unchanged. The import and the
retained `entry-fixture-unchanged.json` have identical SHA256:

`a1bc858d19b7083b7e0cb9fc4ce7b80c2b63bfbcc326e7bec4dce00a96d80d02`

That save was earned by the separately documented Tower ascent, itself starting
from a declared Tower entry fixture. Entry here was lvl04a at
[0.8325655035,2368.05,593.0728833121], health8/10, lives3, score480, coins20,
mirror4, skill15, kills3 and secrets0.

After this exact save import, no position, health, inventory, enemy, skill or
puzzle state was assigned. Walking used ordinary W keyboard events with normal
camera yaw through world.look. Read-only full-hull collision A* supplied walking
waypoints. Ordinary E key pulses finished portal cutscenes; the game's own
authored scripts performed the portal transfers. No no-clip, direct trigger,
attack or puzzle commands were used. No death, damage or reload occurred.
Personal saves and the earned-campaign profile were not touched.

## Reproducible route

All pairs below are walking targets [x,z], never teleports. `__walkHeight` uses
step16,stepHeight18,maxDrop24,tolerance4,attack:false. `__moveTo` uses tolerance8
and attack:false for pickup loops. Helpers are those retained in the ascent's
`input-helpers.js`; exact API requests and results are retained here.

1. From the arena approach, follow the read-only floor route to [-392,1008]. The
   west stairs ascend normally to y2484.05. Touching telepoort02_trigger starts
   its actual cutscene; E pulses finish it at [0,1756.05,1009] in room A.
2. Descend the central stairs toward the heart container [-202,1013]. Its actual
   pickup raises maximum health10→12 and score480→555, while current health
   remains8. Circle the room through [-207,1095],[-205,1192],[-106,1196],
   [1,1196],[116,1198],[196,1198],[196,1097],[193,1007],[205,920],[194,807],
   [106,805],[-1,810],[-91,801],[-203,816],[-203,911]. Every one of room A's
   sixteen loose pickups becomes collected: one heart container, four small
   health pickups and eleven coin bags. Current health rises8→12, coins20→130,
   score480→1125. Lives stay3, including when the coin count passes100.
3. Follow the ordinary stairs back to [0,1008]. Telepoort04_trigger starts its
   authored return cutscene; arrival is [-392,2484.05,1008]. The entry trigger
   remains temporarily disabled until the player leaves its bounds, preventing
   immediate return. Continue across the upper hall to [392,1008].
4. Touching telepoort03_trigger starts the east portal's actual cutscene; room B
   arrival is [0,1756.05,0]. Descend west to the life pickup [-192,3]. Lives3→4
   and score1125→1200. Circle through [-203,90],[-205,180],[-101,184],[1,184],
   [102,191],[196,186],[200,91],[193,-5],[200,-101],[194,-205],[113,-204],
   [-1,-202],[-102,-204],[-203,-196],[-205,-113]. All sixteen loose pickups are
   collected: one life, four small health pickups and eleven coin bags. The
   health pickups are consumed at full health and each still gives5score.
   Coins130→240, score1125→1770; lives remain4 after the life pickup.
5. Follow the center stairs to [0,0]. Telepoort05_trigger returns normally to
   [393,2484.05,1008]. Walk down the normal stairs toward [80,800] and then
   [0,590]. Final approach position is
   [0.7735469535,2368.05,592.8695528729]. The Witch is still disabled with8HP.

Each of telepoort02_trigger, telepoort03_trigger, telepoort04_trigger and
telepoort05_trigger has triggerCount1 and is enabled again after leaving. The
pickups' actual collected flags are all true. Final health12/12, lives4,
score1770, coins240, potions0, mirror4, skill15, kills3, secrets0. No-clip false,
script errors[], VM errornull and chapter completedfalse. These are bonus rooms;
visiting them did not increment the secrets counter.

## Retained evidence

- `entry-fixture-unchanged.json`: byte-identical imported save.
- `commands.jsonl` and `responses.jsonl`: complete requests/results, including
  the per-pickup state sequence and actual portal arrivals.
- `bonus-evidence.json`: all pickup IDs and collected flags, four portal counts,
  actual navigation waypoint results, final state and unstarted Witch.
- `completed-bonus-save.json`, `completed-bonus-storage.json`: actual normal
  pause-menu save after returning to the approach, exported without alteration.
- `bonus-A-arrival.png`, `bonus-A-collected.png`, `bonus-A-returned.png`,
  `bonus-B-arrival.png`, `bonus-B-collected.png`,
  `returned-to-witch-approach.png`: runtime screenshots. The collected-room and
  final-approach screenshots were visually checked.
- `profile/`: isolated browser profile, retained for further inspection.
- `driver.cjs`, `call.py`: isolated source server/manual-frame input driver. The
  server and browser were stopped after evidence capture, retaining all files.

This verifies optional reachability, ordinary pickups and return. It does not
repeat the Witch, mirror placement or ending, and does not strengthen the
fixture's provenance into an uninterrupted-campaign claim.
