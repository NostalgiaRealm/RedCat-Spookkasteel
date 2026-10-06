# Boss phases and native evidence

This implementation uses the installed Dutch `RcHcGame.dat` with SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Addresses refer to its loaded PE virtual addresses. Assets and INI values come
from the user's original installation. See `patrol-boss-native.md` for the
shared patrol and Bone Brutus work.

## Implemented behavior

`src/boss-ai.js` supplies specialized machines to `Gameplay.updateEnemy`.
Elapsed phase time, shot-release state, the turret animation clock, teleport
state and chosen flight waypoint are saved. Disabling an enemy, a cutscene, or
FreezeEnemies suspends the machine. Terminal hits pass through the existing
`destroy` and Davi-Script hooks exactly once.

- The original `StandingEnemy` enum is **4 = Jester Max** in the castle and
  **5 = Dungeon Max** in the caves. This was reversed in earlier saves, which gave the
  cave battle a jester body and omitted its vehicle. Existing saves migrate
  the incompatible phase/pose/ammunition while preserving enabled state,
  defeated state, damage proportion and script progress.
- Dungeon Max fires the authored magma salvo, opens the lid, rises from
  `MinHeight` to `MaxHeight`, waits `LookTime`, lowers, and repeats. Normal
  difficulty uses three shots, two seconds to rise and two seconds to look;
  Easy and Hard use their own imported counts/timing. The three original
  machine actors are `turbot`, `turtop`, and `brcrate`, scaled by `MachineScale`.
  `turtop` owns the `still`, `shoot1`, `litopen` and `litclose` clips. The body
  and stationary assembly have separate positions, so generic gravity no
  longer sinks Max's platform. A hit during an unfinished rise lowers from
  the actual current height instead of jumping to the top first.
- Jester Max plays `teleport`, becomes hidden for `InvisibleTime`, chooses an
  authored `JesterMaxPoint` (or its appended spawn fallback), reappears with a
  fresh teleport animation, and fires jester balls. Hidden enemies do not
  absorb player projectiles. Teleporting rejects damage. Current/max health
  controls whether he shoots or teleports again after reappearing, and a
  one-in-three accepted-hit reaction can interrupt the salvo.
- The Witch plays her original takeoff clip, traverses the tower's authored
  three-dimensional waypoint network, and launches magic-ball salvos. She
  can relocate after a salvo or a hit. The native combat health floor of two
  triggers the existing beam/cutscene handoff; the remake represents that
  terminal combat state as health zero to preserve its existing script and
  save conventions. The last mirror still belongs to the local finale.

## Confirmed native anchors

| Behavior | Native evidence |
| --- | --- |
| Castle/cave boss factory enum | `0x42ade3` / `0x42b010`: type 4 calls Jester constructor `0x41d6f0` (settings pointer `0x64b880`); type 5 calls Dungeon constructor `0x41b600` (settings pointer `0x64b710`) |
| Dungeon assembly actor names | Pointer table `0x64b6fc`–`0x64b704` |
| All three assembly origins are identical | `0x41a739` calls `0x41ac30`, which passes the same XYZ pointer to all three actors; actor setter `0x49bb70` copies it directly into translation |
| Crate's nonuniform scale | `0x41a6ef`–`0x41a717`: machine scale × `[0.6, 0.6, 1.7]` in original Z-up coordinates; normal difficulty `[0.84, 0.84, 2.38]` |
| Actor player-collision default | `ActorBlocksPlayer` uses default `1` at `0x4a2719`, calls the INI reader at `0x4a2730`, and stores settings `+0x18` at `0x4a2750`; actor construction copies this into `+0x208` at `0x49b3cd`–`0x49b3d0` |
| Animated top excludes projectile collision | `ActorCanBeShot` parser `0x4a2826` → settings `+0x54`; actor constructor `0x49b3d6`–`0x49b3e2` copies to actor `+0x20a/+0x20b`. Dungeon constructor `0x41a32c` and `0x41a33e` explicitly clear these flags on `turtop` and refresh the mask through `0x49b8d0` |
| Rising body | `0x4023e0` and `0x402410`; height setter `0x41c810` |
| Looking pause | `0x4024e0` and `0x402500`, calls `0x41c800` |
| Lowering body | `0x402660` and `0x402690` |
| Dungeon body accepts damage and has a half-hit state reaction | Vtable `0x64b7a4` + `0x1c` → `0x4232a0`; subtraction `0x4232d3`–`0x4232dc`, random branch `0x4232e2`–`0x423312`; `0x424420` only checks health ≤ 0 |
| Jester health-ratio branch after a child phase | `0x404759`–`0x4047be` |
| Jester protected hits and random hit response | `0x41e840`–`0x41e8d9` |
| Witch clamps combat health at two and calls defeat | `0x420649`–`0x420686` |
| Witch half-hit state reaction | `0x42068e`–`0x4206ac` |

The original imported clip durations are used by the renderer and gameplay:
Jester teleport is about 0.933338 seconds, Witch takeoff 3.266683 seconds,
turret shoot 1.000005 seconds, lid open/close 1.666675 seconds. Animation state
mapping now includes teleport as a restartable one-shot, including save/load.

## Cave cutscene double and vehicle handoff

The cave level deliberately has two `maxd.act` instances: the standing-enemy
combat body at `[1, 1, -2183]` and the introductory `max_actor` at
`[2, 36, -2143]`, attached to `max_model` (brush 249). The original compiled
`CSL305_MotionCommand` receives `max_weg` at second 16 of `cutscene05` and enables
that model controller. Its one-second motion translates `[0, -73, 0]`, lowering
the introductory double to `[2, -37, -2143]` beneath the platform. The actor
must inherit the brush motion rather than remain standing in front of the tank.
At second 18 the compiled script ends the cutscene and unfreezes enemies.
The arena entrance door's original before-close callback enables `Max`; the
defeat callback unlocks both doors toward the tower. These original script
commands remain responsible for the handoff; no level-specific deletion or
invented teleport is needed. The model transform is preserved in saves.

## Fidelity limits

This is a recovered playable phase implementation, not a claim of complete
instruction-for-instruction AI parity. Native salvo-size sampling is implemented,
but the saved per-enemy random stream differs from the original global stream.
The shared graph includes native pruning, minimum-hop pursuit routing and the
[recovered waypoint selectors](enemy-waypoint-movement.md); arbitrary-position
pursuit endpoints and body-clearance safeguards remain portable choices. Some
attack interruption branches remain unrecovered.
[Projectile muzzles](enemy-projectile-origins-native.md) now use their original
animated bones, including both barrels of Dungeon Max's machine. Release still
occurs on a simulation update rather than splitting the frame at an animation event.
Dungeon vehicle collision uses the original assembly geometry. The narrow
`brcrate` retains its native dimensions (76.16 units high) with no additional
translation below the turret. The original top disables its shot flags; the
bottom inherits `ActorCanBeShot=1` from the native parser (`0x4a27f6`). As a
later explicit gameplay requirement, the portable implementation now forwards
pellet hits on all three vehicle parts to Max's health, including the lid.
This supersedes the earlier portable shield-only interpretation. It retains
player collision and the rule that Max's own ammunition ignores his assembly.
The lid's collision record follows its current animation. Body hits are still
refined against the rendered mesh so invisible hull corners cannot be hit.
See [Enemy ambushes and flight](enemy-ambush-flight.md) for the updated behavior
and focused regressions.
The Witch uses the existing reconstructed graph with full body-clearance
checks after her explicitly authored cauldron takeoff, so route choices may differ.
The later [projectile flight recovery](native-enemy-projectile-flight.md) implements
Witch homing and native lifetime variation in the shared projectile module.
The later [impact investigation](projectile-impacts-native.md) recovered subclass
dispatch: these enemy projectiles retire on contact without a secondary effect
or bounce. Exact Genesis collision roundoff remains outside the portable backend's
parity claim.

`tests/boss-phases.test.mjs` tests complete cycles, original difficulty values,
freeze/save behavior, animation restarts, hidden collision rejection, and
scripted defeat dispatch. `tests/boss-phase-scenes.mjs` exercises the imported
actors and WebGL rendering in the original arenas with entry triggers isolated
for reproducible phase checks, then checks the original defeat script handoffs.
Its Dungeon checks also call `World.update` with actual level collision:
pellets at lowered body, vehicle and exposed raised-head height damage Max,
another enemy's ammunition hits the assembly, and Max's ammunition
exits its own assembly. `tests/actor-collision.test.mjs` loads the original
machine assets and checks crate dimensions/placement, animated top collision,
vehicle hit forwarding, collision cache reuse, and removal on defeat.
The browser test now runs the cave's compiled introductory scene before the
battle, verifies the double's exact 73-unit descent, and compares rendered
pixels with that double hidden to check that it has withdrawn beneath the
platform. Script regression tests also cover the arena door activation,
save/restore after the descent and the original exit-door unlock on defeat.
These checks do not replace a side-by-side full playthrough of the original.
