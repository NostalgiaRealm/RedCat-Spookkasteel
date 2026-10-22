# Castle optional secrets — 2026-10-18

Both previously unvisited secret doors were physically opened, entered and exited using ordinary movement in an isolated continuation of an unchanged, genuinely earned Castle save. The resulting isolated state has **5/5 secrets and 22 potions**. This does not replace or modify the separate continuous campaign session.

## Provenance and controls

- Source: `../campaign-validation-2026-10-15/playthrough-1792088801065/castle-power-shot-earned-save-2026-10-18.json`, key `redcat.save.v1`.
- The exact source value is retained as `initial-earned-save-unchanged.json`; parsed equality with the source value was verified after the run.
- Initial position `[-80.63948449574379, 88.05, -2048.744105697915]`; HP 5.799999999989808, lives 2, potions 21, skill 3, mirror 1, secrets 3, score 1800, coins 31, kills 12.
- Separate browser profile and source/API ports 4540/4541. No access to the genuine campaign on 4511 and no personal save changes.
- After this declared import there were no reloads, teleports, health/lives/inventory edits, puzzle callbacks, noclip or other gameplay-state assignments. Helpers sent normal key events, used the ordinary look handler for yaw, and advanced the source animation loop. A read-only full-hull floor planner selected walking waypoints; it did not move the player or open doors.
- The inherited movement helper supports attack, but this exploration explicitly disabled it. One normal Space jump collected the library potion. No combat was required.

## Throne secret, `secretdoor05` / `DoorModel53`

From the retained power-shot checkpoint, approach `[12,-2012]` on the raised throne floor, then walk into `[34,-2012]`. The touch-operated secret door opened, `secretFound` became true and secrets changed 3 → 4. Cross toward `[100,-2012]`, then walk the interior floor route to `[243,-2022]` to collect `ItemCoin28`.

The interior is a maze: a direct line back to the door encounters walls. A read-only planner with 8-unit grid found the ordinary route through the northeast corridor to `[52,-2012]`. From there, walking toward `[34,-2012]` reopens the door from inside. Exit toward `[-80,-2012]`.

The exit re-entered the already-earned fairy cutscene. The current source requires holding E for at least two seconds to skip; short E pulses do not skip it. Holding E ended the scene normally, with the existing skill 3 retained. This was a driver correction, not a game defect.

## Library secret, `secretdoor01` / `DoorModel10`

Descend the central stairs through `[-80,-1400]`, `[-80,-700]`, `[-80,-400]`, `[-80,-190]`. Enter the library through `[-350,96]`, `[-500,96]`, `[-650,96]`, `[-860,64]`, `[-892,-96]`. Follow the library floor maze to `[-1180,-832]`.

Walk into `[-1214,-832]`. The secret door opened by touch, `secretFound` became true and secrets changed 4 → 5. Cross toward `[-1250,-832]`. The interior floor maze leads to `ItemCoin4` near `[-1282,-946]`.

`ItemPotion7` at `[-1454,9,-736]` is on a roughly 40-unit pedestal, so a floor-only route to its center correctly fails. Walk around the room to approximately `[-1423,-738]`, then use a normal forward walking jump toward `[-1454,-736]`. The character landed at approximately `[-1444,8.05,-734]`, and the potion count changed 21 → 22. No double jump was available or used.

Return by the floor route to `[-1244,-832]`, walk into `[-1214,-832]` to reopen the door from inside, and exit to `[-1180,-832]`. Both directions were physically traversed.

## Result and retained evidence

Final position `[-1179.9417603105346,-31.95,-831.9999995619326]`; HP 5.799999999989808, lives 2, potions 22, skill 3, mirror 1, secrets 5, score 1930, coins 52, kills 12. Health and lives were unchanged throughout. No death, reload, script/VM error, or gameplay blocker occurred.

All five authored secret-door flags are now true: `DoorModel10`, `DoorModel16`, `DoorModel22`, `DoorModel26`, `DoorModel53`. The last three were already found in the imported earned save. This run newly verifies the library and throne secrets; combined with the prior earned route, all five Castle secrets have physical-input evidence. It does **not** establish that all 30 Castle potions were collected.

- `fixture-declaration.json`: scope and initial state.
- `commands.jsonl`: complete driver command record, including failed direct maze paths.
- `final-evidence.json`: final state, all secret flags, pickup flags, 159 movement records and 130 gameplay events.
- `final-normal-menu-save.json`: save created with the visible pause-menu Save button.
- `final-library-exit.png`: final paused screenshot.

No source changes, tests, builds or release artifacts were produced by this optional-secret exploration.
