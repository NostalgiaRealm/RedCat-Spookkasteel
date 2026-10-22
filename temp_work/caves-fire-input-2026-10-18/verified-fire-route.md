# Caves Fire branch — ordinary-input validation, 18 October 2026

## Scope and result

Isolated native chapter-entry fixture, declared incoming skill11/mirror3, Normal
health10/lives3 and zero potions. This is **not** the earned campaign. All travel,
combat, switches and pickups after setup used ordinary keyboard/camera inputs.
The collision planner and motion-phase observations are read-only. No live
health, position, inventory, enemy or puzzle edits, no-clip or direct callbacks.
The retained initial failures include unsafe lava jumps and low-health combat.
Attempt2 imported the exact ordinary `fire-bank-earned-save.json` unchanged;
its boundary is explicitly retained. A normal death in attempt2 respawned at
the Fire checkpoint; no inventory/progress was changed. Subsequent traversal
finished with health10, lives2, ten potions, eight kills, one secret, score975.

Verified: entry doors, first lava stones in both directions, Fire checkpoint,
four rotating-arm corner buttons, all four lowered bridge segments, four-potion
secret and extra life, all three altar guards/buttons, three passage rotations,
altar beam and unlock_max count1, and complete return to the main hub. An actual
F5/F9 save/reload after the four corner buttons preserved their state and lowered
collision poses; RedCat then physically crossed those restored bridges. No
script/page error or confirmed Fire source blocker was found. No build.

Evidence: `live-commands.jsonl`, `resume-responses-2026-10-18.jsonl`,
`fire-four-buttons-save.json`, `fire-altar-earned-save.json`,
`fire-hub-return-earned-save.json`, `fire-final-evidence.json`, screenshots.
`replay-helpers.js` retains the normal-input hop/frame helpers. They require the
common input helpers from the Graveyard route folder. Loading them sends no input.

## Route notes for earned replay

Coordinates below are X,Z walking/aiming destinations, never teleport assignments.
Turn the camera before moving; fixed overviews must expire before mouse aiming.
Do not accidentally use the planner's default attack=true: pass attack=false.

- From hub[397,824], E opens Fire doors; clear hub ghosts with Ctrl and short
  strafing inside their460-unit targeting range. Enter via[430,824],[610,824].
  Twelve-unit floor route reaches[1100,0]. E at[1140,0] must open the **left**
  lab door, whose callback enables the stones. After a death/return, ensure this
  callback runs again. The right door alone does not enable them.
- Clear entrance spider and skeleton; life[1220,163], potions[1450,-50] and
  [1338,81]. Bank takeoff[1450,0]. Another entrance potion was collected on return.
- First stone sequence:45[1508,124]→47[1634,185]→81[1475,333]→79[1570,534]
  →82[1630,663]→83[1759,670]→84[1835,750]→bank[1980,750]. Normal jumps except
  47→81 and81→79 use SuperSkippie. The proven outward timing chains the first
  four hops without recentering; recenter only on79,82,83 and84 before takeoff.
  Do not jump toward a stone about to sink. Their8s track is unsafe around4–6s;
  the successful outward pass is retained with per-hop phases in the log.
- Checkpoint[2050,810], door[2150,728], life[2273,727], potion[2337,728].
  Entry to rotating-arm room[2443,728]. Wait out its8s overview.

### Rotating arm

`__armWait(angle)` reads model85's quaternion and waits for its wrapped yaw.
`__stoneJump(null,target,{superJump:true})` uses a real second Space tap at
frame20 (about333ms). It retains the platform's native launch momentum. The
targets below account for it; they are not exact landing positions.

1. Entry[2443,728], wait angle+.34, superjump[2625,729]. Stay aboard until
   playerZ<=625, superjump[2505,490]; walk to button01[2505,435].
2. NW takeoff[2580,480], wait−.4, superjump[2670,605]. Ride to−2.28,
   superjump[3050,495]; walk button02[3080,435].
3. NE takeoff[3015,480], wait−1.95, superjump[2915,610]. Ride to+2.35,
   superjump[3050,980]; walk button03[3080,1020].
4. SE takeoff[3015,980], wait+2.75, superjump[2915,850]. Ride to+.85,
   superjump[2535,980]; walk button04[2505,1020]. Wait for lowering to finish.
   F5/F9 restoration was performed here and passed.
5. SW takeoff[2580,980], wait+1.2, superjump[2670,850]. Ride to−1.57,
   superjump[2745,405]. Landed around[2807,392]. Walk along lowered bridges
   [2792,360],[2792,250],[2792,150], potion[2791,78].

Secret: approach door[2673,12], floor route to life[2499,42], potions
[2496,-73],[2606,-69],[2614,158],[2488,157]. Door opens on approach. Return
to main corridor and follow floor route toward[2791,-500], then[2795,-630].

### Altar and return

Clear each dormant skeleton from its corresponding approach, not across walls:
east[3020,-630], west[2570,-630], north[2795,-850]. Ordinary Ctrl and short
strafes or stationary finishing shots killed all three without damage on this
attempt. Walk to buttons[3226,-632],[2368,-632],[2795,-1057]. Their trigger
counts1/2/3 rotate the three passages and enable beam_fire_altaar/unlock_max1.
Wait10s after the final touch. Return around the beam via[2910,-980],
[2910,-800],[2910,-500], then floor route[2791,80]. All restored/rotated
passages were physically traversable.

Return ring: walk bridge[2792,405], wait arm−1.15, superjump[2792,570], walk
to arm center[2796,729] (collects its attached potion). Wait+.32, walk arm
[2630,729], wait0, superjump[2440,775]; native momentum lands safely around
[2443,706]. Return[2330,728],[2100,728],[1980,750].

Reverse lava timing: wait until model84 track reaches6.00s, superjump84[1835,750],
then **skip83** using SuperSkippie to82[1630,663]. Normal jump79[1570,534],
SuperSkippie81[1475,333]. Recenter81, SuperSkippie47[1634,185], recenter47,
normal jump45[1508,124], recenter45, normal jump bank[1450,0]. This complete
return crossed without any damage. The successful per-frame hops are retained.

Walk[1200,0], E, [1090,0], floor route[610,824], [480,824], E, [350,824].
Final ordinary save is at[352.433,-15.95,823.987], HP10/lives2, ten potions;
all seven Fire switches remain on and unlock_max is1. Optional potion on the
separate first-lava stone was not collected; this is not a100% collectible run.
