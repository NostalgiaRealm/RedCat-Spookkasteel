# Earned Caves Fire completion — 18 October 2026

Continued the actual earned Water/Air/Earth hub save, without a fixture import
or manual gameplay-state edits. API4511 ownership was handed from the Earth
agent to root, then to the finale agent only after returning to the hub. Input
helpers send keyboard events and camera-look input; collision/phase reads guide
the route. The shared driver advances controlled frames. This is instrumented
source validation, not a real-time physical-input performance measurement.

## Result

Incoming: health7/12, lives2, potions36, skill11, mirror3, secrets6,
score8565, kills80, coins117 and unlock_max3.

Outgoing living F5 save: position[352.451633,-15.95,823.986785], health5/12,
lives5, potions46, skill11, mirror3, secrets7, score9390, kills85, coins137,
unlock_max4. No-clip remained false; script errors were empty and VM error null.
All seven Fire buttons have switchCount1; the Fire altar beam is enabled.

- Entrance/lab doors opened through ordinary movement/use. The left lab door
  enabled the lava stones. Both entrance enemies were defeated.
- The initial cramped doorway spider exchange cost2 health; moving back into
  the broad hall enabled normal strafing and killed it. The later entrance
  skeleton and all three altar guards cost no health.
- All first-lava stones crossed outward and back on their first attempted
  sequences. The return used SuperSkippie to skip stone83, as in the prior
  isolated successful route. No fall or reload occurred during this branch.
- The Fire checkpoint, four rotating-arm corner controls, lowered bridges,
  secret room and all three altar controls were physically reached. All three
  rotated altar passages were crossed on return. All controls activated
  through normal contact, not direct callbacks.
- Ten potions, three lives and the secret were collected. The center-arm potion
  was collected on return. The optional separate first-lava stone potion was
  not collected; this is not a 100% collectible claim.
- Ordinary F5 saves were captured at the bank, four-button corner, altar and
  hub. Unlike the separate fixture, this earned Fire pass did not need F9;
  the earlier fixture provides the explicit bridge-save/reload collision check.

## Retained evidence

All files below are in
`../campaign-validation-2026-10-15/playthrough-1792088801065/`:

- `earned-fire-bank-save-2026-10-18.json`
- `earned-fire-outward-stones-attempt1-2026-10-18.json`
- `earned-fire-ring-button01-attempt1-2026-10-18.json`
- `earned-fire-ring-buttons234-attempt1-2026-10-18.json`
- `earned-fire-four-buttons-save-2026-10-18.json`
- `earned-fire-secret-attempt1-2026-10-18.json`
- `earned-fire-altar-completed-2026-10-18.json`
- `earned-fire-altar-save-2026-10-18.json`
- `earned-fire-restored-passage-return-2026-10-18.json`
- `earned-fire-ring-return-attempt1-2026-10-18.json`
- `earned-fire-return-stones-attempt1-2026-10-18.json`
- `earned-fire-hub-save-2026-10-18.json`
- `earned-fire-completion-2026-10-18.json`
- `earned-fire-control-routes-2026-10-18.json`
- `earned-fire-hub-return-2026-10-18.png`
- Shared `live-commands.jsonl`, plus the parent folder's
  `resume-responses-2026-10-18.jsonl`, retain each submitted action and result.

The guards in the altar's west and north alcoves temporarily left the
strafe helper's line of sight. Returning to the corresponding corridor and
ordinary stationary firing finished them. This was input positioning, not a
source defect. No Fire source change or new build was made.
