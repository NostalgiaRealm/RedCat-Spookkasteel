# Earth controls ready for earned campaign handoff

The current campaign session has **not been contacted or controlled** while preparing these files. Wait for root/Caves agent's explicit handoff of API4511 after Water+Air. Do not import any chapter fixture, replace local storage, reload a checkpoint from this isolated folder, or change gameplay state.

`earned-replay-helpers.js` is a browser-evaluable helper bundle for the existing controlled60Hz driver. Loading it defines only `__earth...` names; it sends no input, advances no frames, and changes no game state. It preserves root/Caves helper names. The underlying movement, hop, phase and combat controls were used in the isolated Earth run; the new checked wrappers and grouped pillar routes have been syntax-checked, not replayed in the live earned campaign yet.

After handoff, release any previous helper's held inputs, inspect the actual position/health/skills/altar count, and install once through the driver:

```js
await page.evaluate(await fs.readFile(process.cwd()+'/temp_work/caves-earth-2026-10-18/earned-replay-helpers.js','utf8'));
return await page.evaluate(()=>__earthChecks());
```

Normal input helpers:

- `__earthGo([x,z])`: direct walking, stop/report a blocked waypoint; `allow` can be increased for a wall-mounted button contact.
- `__earthFloor([x,z])`: read-only full-hull floor planning followed by ordinary walking, firing off by default.
- `__earthRamp()`: verified short-segment replanning around the moving entrance boulders, toward[-1264,-1100].
- `__earthUse([x,z])`: face, normal E press, wait45frames.
- `__earthFightEvade(name,frames)` / `__earthFightWide(name,frames)`: normal aimed Ctrl firing and lateral input. Run `__earthAimPitch()` first. Inspect health/target; do not blindly chain encounters.
- `__earthHopChecked([x,z],{walk:true})`: normal Shift jump with S air-brake after frame30; `walk:false` is the longer run hop. Stops for a missed landing.
- `__earthPillars.entry()`, `neOut()`, `neBack()`, `swOut()`, `swBack()`, `nwOut()`, `nwBack()`, `exit()`: individually callable successful pillar routes. Start on the corresponding stable platform. They check mode/health/waypoint/landing and never invoke switches directly.
- `__earthWait(frames)` releases input and advances ordinary frames; `__earthPress([])` releases these helpers' controls.
- `__earthChecks()` is read-only status, checkpoint, six switch states, beam state and unlock count. `__earthLog` retains walking/hop results.

Use `verified-earth-route.md` for entrance, potions, secret, crate-wall, exact button contacts, altar and return. Inspect between each room/branch. The grouped helpers deliberately stop before corner pickups and switches. Wait360frames after each rotation button's fixed overview once the room is safe.

## Combat order and earlier failure lessons

The isolated route's three deaths were ordinary deaths, not required puzzle actions. Avoid repeating their setup:

1. Clear entrance spider03 before leaving it to fire through the lab doorway on the eventual return. Let already-fired projectiles expire before crossing after a kill.
2. Do not shoot the explosive Earth crate from the earlier unsafe point[-1430,-1555], only about155units from it. A farther firing position must be chosen/verified against the current live room geometry; no safe replacement was claimed in the isolated report.
3. Clear spiders07–11 covering the platform room before sitting through the five-second switch overviews. The broad checkpoint floor[-1246,-1800]/[-1300,-1750] was the successful firing area. Auto-aim range is480; shooting from the central platform at an out-of-range spider failed.
4. Preserve local health pickups for after combat where possible. Do not assume the incoming earned health/life count equals the isolated fixture.
5. Altar skeleton fights cost8HP in total in the isolated run. Inspect target lock and line of sight; diagonal ring-wall positions can block firing. The remaining health must be considered before committing to all three fights.

All actions remain ordinary keyboard/camera controls. The retained isolated saves are evidence only, never seeds for this earned replay.
