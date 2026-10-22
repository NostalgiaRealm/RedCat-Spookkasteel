# Gameplay, script, main-loop and audio CPU audit — 2026-10-18

Read-only source audit. No tests, benchmarks, browser processes, gameplay controls or builds were started. Only evidence files in this directory were written. The existing dirty working tree was preserved. These are candidates for the parent profiling pass, not measured frame-time improvements.

[static-work-inventory.json](static-work-inventory.json) records source hashes and counts read directly from the five imported level JSON files. “Initially enabled” below means authored entity flags before compiled script initialization, not a measured live scene.

| Level | All gameplay objects | Enemies | Authored enabled objects | Enabled pickups | Unused distance calculations in current interaction loop | Bound brush motion players |
| --- | ---: | ---: | ---: | ---: | ---: | ---: |
| Forest | 700 | 4 | 644 | 40 | 604 | 34 |
| Castle | 1,010 | 40 | 949 | 78 | 871 | 83 |
| Graveyard | 1,724 | 59 | 1,578 | 123 | 1,455 | 107 |
| Caves | 1,466 | 43 | 1,127 | 154 | 973 | 191 |
| Tower | 611 | 16 | 490 | 42 | 448 | 23 |

## Best candidates with no retained-state cache

### 1. Compute pickup position/distance only for pickups

`src/gameplay.js`, `Gameplay.update`, interaction loop around lines 805–832: the loop computes `this.objectPosition(object)` and `distance(position, playerPosition)` for every enabled, uncollected living object. Only the pickup branch uses those local values. Doors, buttons and triggers perform their own contact checks, and enemies calculate their own perception/movement distances.

Move these two calculations inside the `kind === 'pickup'` branch. Retain the current loop and its object order. This removes an unused `map` allocation, `Math.hypot`, position helper call, and sometimes mounted-actor pose work for each non-pickup. `pickupPosition` and `objectPosition` are pure queries; no side effects are lost. No invalidation mechanism is needed.

Do not split this loop into independently grouped passes: a trigger/pickup/script callback can enable a later object, kill the player, or change a door in the same frame. Keep the existing life/health early exits and script ordering. Mounted pickups must still use `objectPosition`, including support offset and current brush transform.

Suggested focused verification: a mixed trigger/pickup/moving-support case showing identical event order and pickup positions, plus an operation-count assertion that unrelated logic objects do not ask for an unused position. Relevant existing coverage includes environment interactions and pickup placement. No wall-clock timing threshold is needed.

### 2. Reuse the final pose returned by MotionPlayer.update

`src/script-host.js:297–305`: `player.update(dt)` already returns `this.sample()` at its final state (`src/motions.js:225–258`). `applyMotion(object, player)` immediately samples the same time again. Reuse the returned pose through an optional `applyMotion` argument or directly set the model transform with that pose and the motion origin.

This avoids a duplicate path interpolation, quaternion work and pose allocations for every playing brush motion. It does not skip any event, moving-solid validation or final pose. No cache or invalidation is needed. Preserve the existing sample-on-demand behavior of constructor/restore/other `applyMotion` callers.

Callbacks can stop, replace, reverse, or complete a motion while `update` runs. Use its **returned final pose**, not a sample taken before advancing or an assumed end time. `beforeAdvance` can reject a solid movement segment; the returned pose must represent the accepted point. Suggested focused coverage: existing motion callback-replacement and rejected-solid-segment cases, and a host-level assertion that the stored transform equals the returned final pose without a second sampling call.

### 3. Avoid unconditional DOM writes and unchanged HUD redraws

`src/main.js:434–444` writes five counter text nodes, the skip hidden state, skip ring stroke and ARIA value on every playing frame. It then invokes `OriginalHud.render`, which reads `getBoundingClientRect`, clears the whole canvas, rebuilds an array of sprite commands and redraws the same sprites (`src/hud.js:44–56`). There is no animated HUD element in this draw function.

Start with value guards for text/hidden/style/ARIA assignments; they require no gameplay changes. A subsequent HUD redraw signature could use the actual displayed state: health/max health, lives, potions, total potions, score, eligible enemy portrait/type/variant/health/max health, game viewport dimensions, HUD canvas CSS/physical dimensions, pixel ratio and bottom inset. Dirty on first atlas readiness, canvas resize, view/resolution/DPR change and touch/controller inset change. Do not cache only the state or enemy object identity; both are mutated in place. Do not cache only the rounded numerical health text because half-heart transitions are distinct. Retain layout observation until a reliable resize/DPR invalidation path exists.

`syncTouchUI` runs twice in a playing frame; the second call intentionally observes script/mode changes made by `world.update`. Simply deleting it can delay context changes. `TouchControls.setContext` already guards unchanged rendering, though it allocates small objects on each call. This is lower priority than the HUD redraw.

## Candidates using stable membership or immutable authored data

### 4. Restrict threat checks to enemy members, without caching their live state

`ScriptHost.updateBossMusic` scans all objects twice every frame, once for ordinary threats and once for bosses. In Graveyard that can be 3,448 predicate visits for 59 enemies; in Caves, 2,932 for 43. The production constructor creates the object collection once, and restore mutates those objects rather than replacing them.

A constructor-time enemy list, or a general stable kind index, can preserve order and read `enabled`, health, ambush state, alerted state and memory timestamps live each call. The music-object membership can also be indexed, but the first currently enabled matching music object must remain selected in original order. Do not cache the resulting threat boolean indefinitely or throttle the check: memory expiry is time based, attacks can change it synchronously, defeat gives immediate music transitions, and cutscenes have explicit priority behavior. `updateBossMusic` is also called from accepted attacks and enemy defeat, so avoid duplicate events while preserving these synchronous calls.

Tests directly mutate object state and a few synthetic fixtures replace/push `game.objects`; production membership is currently static. If indexes become a public Gameplay property, document or support rebuild for deliberate collection replacement. Relevant focused checks are `tests/knight-attack-music.test.mjs`, including finite miss memory, final enemy defeat, boss priority and frozen/save continuity.

### 5. Pre-resolve immutable Davi name precedence and ID lookup

`Gameplay.find` starts from an existing name map but still constructs a Set, array, filtered array and per-object name arrays each lookup. All authored names and memberships are set at construction. Pre-deduplicating each name bucket and storing its DaviName/DaviNameGroup-preferred result avoids repeat work during script dispatch and target lookups. An ID map also removes `ScriptHost.targets`' full-array `filter` for an exact ID and occasional projectile/audio source ID scans.

Preserve the recovered namespace rule: script names outrank editor labels, and groups return every member in authored order. Do not collapse a group to one object or replace case-insensitive matching with exact matching. Existing `find` returns a fresh mutable array; callers currently do not appear to mutate it, but returning an internal cache changes that contract. Retaining a shallow array copy still removes Set/filter/name reconstruction while remaining safe. No persistent save fields are needed. Relevant focused cases: Fairy10/Fairy11 name collision, named groups, ID bindings, missing names, and effect endpoint/player-start name collisions.

### 6. Preparse trigger velocity metadata

`Gameplay.environmentVelocity → triggerVelocity` reparses `AddPlayerSpeed` strings, validates arrays, and scans every trigger on each movement call (`src/environment-interactions.js:4–11`). Static data contains 0 nonzero wind triggers in Forest/Castle/Tower, 1 of 73 Graveyard triggers, and 19 of 130 Caves triggers.

Either cache each parsed vector against its exact source string (preserves deliberate entity-property edits), or precompute a stable nonzero-vector membership list at level construction if authored entity metadata is treated as immutable. Still read enabled/visible/health and `contains` against current transformed geometry every call. Do not cache whether RedCat is inside: fan buttons, moving volumes, teleporting and saves must immediately change the force. Preserve vector summation order and the 32-units/metre scale. Relevant tests: original Caves fan group commands, solid wind movement and spring-box volumes.

## Audio candidates to consider only if its profile warrants them

`GameAudio.applyGain` allocates temporary vectors for movement thresholds, obstruction scaling and stereo calculations, resets a stereo-gain object every sound every frame, and makes fresh Fairy range/spatial objects. Scalar three-component arithmetic and reused per-record output objects can remove this churn without reducing update frequency. Precompute the Fairy range values when level/settings change, while preserving the new `.4` native base gain, the 3× range, player hearing position, camera pan and PVS bypass. Retain the exact 0.1-second obstruction refresh and immediate >32-unit listener/source movement refresh.

`BspAudioEnvironment.refreshPortals` maps all area portal records, then makes another two arrays and a joined key string on each audio update. The Caves metadata has 102 entries, Castle 62, Graveyard 38. Reuse the boolean open array, compare each newly computed live value to its prior value, and clear `areaCache` only if any changed. This preserves every per-frame door/motion/material-opacity check while avoiding array/key churn. Do not memoize openness solely from door.open: partially moving brushes and visible surfaces participate in `doorPortalOpen`. Streaming can change model mesh residency, so keep reading the current mesh list unless a separate generation key is provided.

An unchanged volume/pan assignment guard can also avoid redundant native AudioParam/HTML volume writes. It must invalidate for master/channel/script volume changes, music fades, source/listener movement, camera rotation, doors/obstruction refresh and source replacement. Do not throttle fades, delayed replay countdown, sound completion or dialogue advancement. Avoid implementing a broad dirty-flag cache until profiling shows this is material; scalar allocation reductions are simpler.

## Safeguards that must remain

The prior Graveyard regression came from hundreds of repeated collision sweeps, not just array allocations. Preserve `authoredRoute:true` on authored patrol/relocation/boss edges; a full pursuit search must not return to those steps. Keep the 16-per-enemy / 48-shared search sweep budget, fair scheduling, resumable iterators, half-second failure retry cache and immediate direct-clearance probes. Preserve transient search/reservation state and plain saved routes. Do not skip offscreen enemies or reduce AI update frequency as a substitute for bounded work.

Navigation reservations are already rebuilt once per simulation update and adjusted incrementally after decisions; do not reintroduce an actor scan for each candidate. Collision already has immutable bounds and transform-value caches; do not replace their conservative moving-model checks with visual-only bounds. References: `docs/graveyard-performance-regression.md`, `docs/enemy-waypoint-movement.md`, and `docs/enemy-pursuit-interruptions-native.md`.

The parent owns current measurements and chooses implementation scope. This audit makes no low-end hardware/FPS claim and does not justify a full historical test rerun. Test only the selected change and its behavioral boundaries.
