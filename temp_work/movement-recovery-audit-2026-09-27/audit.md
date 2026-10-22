# Movement recovery integration audit — 2026-09-27

This is a read-only source/data audit for RedCat and moving-enemy recovery. No production source was edited by this audit.

## Coverage and exclusions

- `PlayerController.update` (`src/collision.js`) handles player ground travel, air movement, environment wind and gravity. `world.update` already omits this while cutscene/dead/completed/respawn-frozen. No-clip returns early from the controller and must not collect safe positions inside solids.
- `moveEnemy` (`src/enemies.js`) handles ordinary enemy pursuit, authored patrol waypoints, flying enemies, Brutus movement, the witch's normal flight, and spiders returning to their hanging anchor along the floor.
- The witch's initial explicit flight edge rises through decorative cauldron geometry: `boss-ai.js` calls the walk helper with `authoredFlight:true`, which intentionally passes `trace=null`. Do not recover or collect good points from this bypass.
- Spider ceiling placement, descent and ascent write the authored Y position directly (`src/enemy-ambush.js`); a hovering spider is intentional. Do not regard these phases as stuck.
- Jester Max teleport relocation and Dungeon Max's pedestal rise/lower bypass ordinary movement and are intentional. They must not be pulled to a remembered ground position.
- Doors, lifts, bridges, rolling boulders and attached `AdamAnyActor` props move through `ScriptHost.players`/`MotionPlayer` and `modelTransforms`. Their authored brush motion is not locomotion. `moveSolidPlayer` deliberately rejects a brush step that would crush RedCat. Nudge the trapped character, never shift the brush's authored anchor.
- No independent collision-controlled navigation for passive `AdamAnyActor` props exists elsewhere. `followName`/`followOffset` are stored script fields, not an implemented movement path.

## Recovery lifecycle

`PlayerController.resetVelocity()` is called on ordinary grounded movement every frame: it cannot also erase safe-position history.

Explicit discontinuities to reset recovery history:

- `src/main.js`: `teleport` handler, `respawn` handler, and save restore/startLevel.
- `src/cheats.js`: no-clip toggle/safe exit.
- `src/world.js`: out-of-world return to `lastSafe`.

After an enemy recovery, clear transient pursuit/detour state and pending `navigation.pursuitJobs` for that enemy so path searches use the relocated origin. Preserve authored `patrol.current`/`patrol.target`; clearing them can restart or unlink a completed native route. Do not reset boss phases, animation clocks, health or random state.

## Actual-level locations and limits of reproduction

Castle (`lvl01a`): the only authored well-name marker is `Sun19`, DaviName `put01`, at `[-204, 0, 165]`. It is a light marker, not a separately named well actor. `ItemPotion6` is nearby at `[-132, -24, 208]`. This is an evidence-based candidate for a browser inspection of the reported well, not a visually confirmed identification.

Graveyard (`lvl02a`) frogs:

- `MovingEnemy41`, `frog01`, origin `[2770,533,-881]`, StartPoint269 `[2828,528,-880]`.
- `MovingEnemy42`, `frog02`, origin `[2760,532,-396]`, StartPoint265 `[2716,528,-396]`.
- `MovingEnemy43`, `frog03`, origin `[2456,532,-416]`, StartPoint267 `[2496,528,-396]`.
- `GrobberPathPoint124` is `[2640,528,-208]`. Existing `EnemyNavigation.target` documents corner cutting on point265 → point124 and now uses an exact `.1` ground waypoint arrival threshold.

`geometry-probe.mjs` and its JSON result preserve a small world-only surface grid around the well marker and frog02 start. These samples did not reproduce a four-direction trap. They deliberately omit actor meshes and transformed brush collision; do not call this proof that live movement cannot trap there. The source indicates an intermittent movement/collision issue needs a dynamic browser fixture or deliberately embedded hull fixture to verify recovery.
