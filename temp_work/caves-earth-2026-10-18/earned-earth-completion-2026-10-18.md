# Earned Earth replay — 18 October 2026

Earth is complete in the genuine Forest → Castle → Graveyard → Caves campaign, following the Water/Air agent's explicit handoff of API4511. No chapter fixture was imported, no live gameplay state was assigned, and no source or build changes were made. Ordinary F9 recovery was used three times; this is a campaign continuation with normal save/load retries, not a death-free uninterrupted run.

## Handoff and result

Incoming: hub `[71.05,0.0053,1279.98]`, health10/max12, lives1, potions26, skill11, mirror3, secrets5, score7755, kills71, coins102, unlock_max2. Source handoff save: `../campaign-validation-2026-10-15/playthrough-1792088801065/earned-caves-water-air-hub-save-2026-10-18.json`.

Final: hub `[-401.0952157968717,-15.95,849.5160334830169]`, health7/max12, lives2, potions36, skill11, mirror3, secrets6, score8565, kills80, coins117, unlock_max3. All six Earth switches are on, each switchCount1; `draai_opening02` count3; `beam_rots_altaar` enabled. All eight named Earth potions plus `secret_potion01`/`secret_potion02` are collected. All nine Earth enemies are dead. The secret life was earned normally.

The final living F5 save was exported and its parsed state and position were checked against the final live snapshot. All keys were released and exclusive API4511 control was handed to root for Fire. No further control calls were made after handoff.

## Verified traversal

- Earth hub and lab doors, entrance spider03, rolling-stone ramp inward and outward, checkpoint and full hub return.
- Secret wall switch, secret door, life and two potions.
- Earth crate destruction and opened rock wall.
- All twelve moving pillars, every branch and return, three rotation buttons, all corner potions/hearts.
- All three altar guards, buttons and passage rotations; completed beam/unlock sequence.

The entrance spider was cleared from the approach near `[-850,500]` with ordinary Ctrl and lateral movement, with no damage. The rolling ramp also cost no health. The final altar-to-hub return cost no health, and clearing the entrance spider earlier removed the isolated run's exit ambush.

## Replay corrections and retained failures

1. Combat from the raised checkpoint crystal pedestal failed: the helper's conservative floor probe rejected the nearby three-unit drop, leaving the character stationary. Normal F9 restored a living earned save.
2. A later multiple-spider combat attempt failed and was restored with normal F9. The broad floor approach `[-1300,-1750]` worked after leaving the pedestal/secret doorway. The two green spiders have5HP and melee attacks; the three red room spiders have10HP and ranged attacks. The helper sometimes locked another visible target while aiming at the requested enemy, so individual target-health logs are not a complete record of damage dealt to the room.
3. A strict waypoint aimed beyond the secret wall switch waited against the wall during combat and failed. Normal F9 restored the existing living save. Successful contact: approach `[-1288,-2050]`, briefly walk into `[-1288,-2096]` for six frames, then immediately retreat and enter the secret room. This earned the extra life before further room combat.

These are retained driver/route failures, not confirmed source defects. There was no post-handoff manual health, lives, inventory, position, enemy, skill, model or puzzle-state change.

The explosive Earth crate was destroyed incidentally by ordinary auto-aimed combat fire while clearing the room. This replay therefore does not establish a deliberate330-unit firing position. The relevant combat segment went health7 → 6; individual explosion damage was not independently recorded after the later F9 reload. The wall opened and the character survived. Do not describe the crate as a separately verified no-damage330-unit shot.

### Exact rotation-button approach matters

Straight approaches at Z-672 stopped at an adjacent wall lip, four units short of button contact; normal jumping and E there did not activate it. Returning to the exact diagonal approach used in the isolated proof worked immediately:

- SW: potion `[-2125,-726]` → button `[-2288,-672]`, actual contact `[-2264.95,64.05,-675.03]`.
- NE: potion `[-1643,-720]` → button `[-1488,-672]`, actual contact `[-1511.05,64.05,-675.05]`.
- NW: potion `[-2131,-1388]` → button `[-2288,-1457]`, actual contact `[-2264.95,64.05,-1453.18]`.

Wait360 ordinary frames after each fixed overview. No interaction-radius or collision change was needed.

### Altar route

East guard approach `[-1950,-2370]` cost2HP; north guard approach `[-2020,-2660]` cost no health; west approach `[-2297,-2512]` cost2HP. All used normal Ctrl and lateral movement. An ordinary jump escaped a27-unit stair lip after the floor planner cut into a spoke recess; no recovery/teleport was invoked. The safe north-spoke transfer was normal run-jump from `[-2050,-2656]` toward `[-2190,-2656]`, landing on the far upper floor nearX-2165.

Altar buttons were activated in order02 west,01 north,03 east. Floor approaches `[-2510,-2472]`, `[-2133,-2850]`, `[-1750,-2472]`, then ordinary forward contact into their authored button positions. Wait480,480,600frames respectively. Final unlock_max rose2 → 3.

Return: floor route `[-2130,-2250]` → `[-1650,-1800]` → `[-1264,-1600]`, then central downhill ramp through Z-1420,-1264,-1100,-700,-300,40. Open lab door with E, floor route to `[-550,800]`, E at hub door and cross to `[-400,850]`. A planner query to the crystal's exact center had no path, so the return used the adjacent corridor; no game blocker occurred.

## Evidence

All final files are under `../campaign-validation-2026-10-15/playthrough-1792088801065/`:

- `earned-earth-handoff-in-2026-10-18.json` — incoming genuine campaign snapshot.
- `earned-earth-checkpoint-before-combat-2026-10-18.json` and the three `earned-earth-*-failure-2026-10-18.json` snapshots — retained attempt boundaries.
- `earned-earth-secret-life-save-2026-10-18.json` — living native F5 after secret/life,30potions.
- `earned-earth-before-pillars-save-2026-10-18.json` — living native F5 before moving pillars.
- `earned-earth-three-rotations-save-2026-10-18.json` — living native F5 with all rotation buttons.
- `earned-earth-altar-complete-save-2026-10-18.json` — completed altar before return.
- `earned-earth-hub-save-2026-10-18.json` — final living native F5 save.
- `earned-earth-final-evidence-2026-10-18.json` — final state, switch/potion proofs and352 movement/hop records. Its `eventsFromEarlierAttempts` field is partial: the initial event wrapper did not persist through every later F9 load, so it is not a complete final-attempt event log.
- `earned-earth-hub-2026-10-18.png` — final hub screenshot.

The shared driver's `live-commands.jsonl` and `../resume-responses-2026-10-18.jsonl` retain every API command and result, including all ordinary retries. `earned-replay-helpers.js` contains the normal-input helpers used; the collision planner was read-only.
