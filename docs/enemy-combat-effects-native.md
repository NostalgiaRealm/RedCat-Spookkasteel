# Enemy visual effects and cutscene completion

The local original `RcHcGame.dat` (SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`) was used for this audit. No packaged game or website was built.

## Jester teleport

`0x404b20` starts the actor effect `0x477cd0(actor,false)` when departing; `0x404bd0` starts the same effect with `true` after relocation. `0x476860` allocates fifteen particles and loads `strail.bmp` / `strail_a.bmp`. The original rendering at `0x477126` uses RGB `(211,63,255)`.

The setup at `0x4775b0` gives the particles one-second lives and angles separated by `2π/15`. `0x476830` and `0x476850` initialize the emission intervals to 29 and 19 milliseconds. The phase setup at `0x4777b0` and rendering at `0x476fd4` distinguish the two effects:

| Property | Departure | Arrival |
| --- | --- | --- |
| Radial extent | 50 → 0.1 | 0.1 → 30 |
| Angular rate | 12.5 | 18.5 |
| Height relative to traced floor | 75 → 0 | 0 → 50 |
| Billboard radius | 40 → 5 | 5 → 40 |
| Alpha percent | 25 → 100 | 100 → 35 |

The [26 October follow-up](death-smoke-native-followup-2026-10-26.md) replaces the continuous approximation with two small shared fixed-step tables. The radial transition takes **500 ms**, independently of the one-second particle life. Emission rearms on the following controller update, and both lifetime and fade timers use strict native deadline checks. Rotation advances before positioning and turns in the original negative-Z direction; height uses the preceding life fraction. Alpha is a delayed integer-byte fade, rather than an immediate continuous interpolation. The billboard now uses the original camera-position basis and UVs.

At the retained 60 Hz visual cadence, both 19/29 ms intervals produce one birth every three ticks: the first at 50 ms and the fifteenth at 750 ms. The final particle remains visible at 1750 ms and expires on the next tick. The boss's save/cleanup boundary now comes from the shared table (107/60 seconds), so the old 1.5-second cutoff does not truncate that tail. These frame-quantized times are for the portable fixed clock; the original wall-clock birth spacing depended on its controller cadence.

Boss state still stores effect origin, phase and age. Loading resumes the same corrected samples without another lifecycle/audio event; script freeze pauses the effect. Older records remain supported, with the corrected curve evaluated at their retained age. `bossTeleportEffect` still announces the same departure and arrival starts for audio integration. No sound or music scheduling was changed.

## Projectile artwork and trails

The previous renderer substituted generic spheres for seven enemy projectile types. The asset importer now combines the original color and alpha BMPs without resampling:

| Projectile | Original frames | Native loader |
| --- | --- | --- |
| Bone | `bn0..3` + `bn0a..3a` | `0x442770` |
| Plant goo / frog poison | `snot0..5` + `snot0_a..5_a` | `0x444700`; poison inherits goo at `0x444c70` |
| Jester ball | `jb0..3` + `jb0a..3a` | `0x445770` |
| Witch magic ball | `eball0..5` + `eball0_a..5_a` | `0x4467e0` |
| Dungeon Max magma | `mb0..3` + `mb0a..3a` | `0x447910` |
| Brutus skull | `skl_0..3` + `skl_0a..3a` | `0x44fc10` |

The existing spark and mushroom frames remain intact. Sprite dimensions use original bitmap dimensions multiplied by the projectile INI `Size`, including the smaller Jester shot on Easy. Frog poison shares goo frames but uses its own much smaller size.

The earlier warm `strail` dots behind Jester, magma and magic shots have been removed. Their 25 ms emission and 0.3-second fade were reconstruction choices, and the complete native update audit does not support them. These shots have animated bitmap artwork, but do not create an independent flight trail or smoke impact tail.

The shared projectile tick `0x44c760` checks a periodic effect timer and invokes virtual factory `+0x68` at `0x44c9a9`. Its initial delay is 100 ms (`0x44b30f`); after an attempt it resets to the integer conversion of `130 + (rand() % 10000) * 0.002` ms (`0x44ca31–0x44cabf`, constants `0x64d0c0` / `0x64d0c4`). That timer produces **no particles for these subclasses**, because their factory returns null. The impact path `0x44c530` similarly invokes `+0x64` at `0x44c55f`; it also returns null for these enemies' projectiles.

| Projectile | Native vtable | Update | Effect factories `+0x64` through `+0x74` |
| --- | --- | --- | --- |
| Bone | `0x64c9bc` | `0x44c760` | `0x44aef0`, returns null |
| Enemy shot | `0x64ca64` | `0x44c760` | same |
| Goo / poison | `0x64cba0` / `0x64cc24` | `0x44c760` | same |
| Jester ball | `0x64cccc` | `0x44c760` | same |
| Magic ball | `0x64cd84` | `0x446690` | same |
| Magma | `0x64ce2c` | `0x44c760` | same |
| Skull | `0x64d1a0` | `0x44c760` | same |

Magic ball's override calls the shared tick, then updates its homing velocity (`0x4466a2–0x446737`); it does not emit another effect. The shared tick's remaining work covers lifetime, velocity/gravity, sprite animation, collision and position. This verifies the absence of an independent emitter beyond merely inspecting a null vtable slot.

Mushroom Brutus has a separate explicit ribbon: its override `0x449090` creates `SpriteProjectileParticle` and enables a textured trail. Its native sampling, opacity and lifetime are documented in [mushroom-trail-native.md](mushroom-trail-native.md). Forest Brutus fires this mushroom projectile; the later Bone Brutus uses the bone and skull ammunition. Jester's purple `strail` teleport swirl is separate from his projectile artwork; its later timing and billboard correction is described above.

Existing supported effects were reviewed: generic enemy purple death smoke/fade, knight detached armor, spider descent thread, mushroom's visual ribbon, and scripted Witch retirement. Follow-up native contact recovery found that mushroom `TrailDamage` is unused; only the projectile body causes damage. The audit adds no arbitrary emissions to bone, goo, poison or contact-only enemies.

## Death and cinematic handoff

Cutscenes used to extend every enemy deadline, including defeated bosses' death/fade/smoke clocks. Cutscenes now freeze living combatants while corpses finish their death animation, smoke and five-second fade. An explicit enemy freeze outside a cutscene retains its old paused-clock behavior. RedCat switches to his ordinary animated idle throughout a conversation; an interrupted charge or pending shot is canceled rather than firing after dialogue.

The cave's introductory `max_actor` is distinct from the `Max` combat actor. The authored `max_model` motion lowers that double by 73 units, from `[2,36,-2143]` to `[2,-37,-2143]`; part of the tall mesh remained above the floor after the turret disappeared. Presentation now retires only that double when its withdrawal controller is finished, including restored saves. Other disabled attached actors retain their existing pause behavior.

## Focused verification

- `node --test tests/enemy-combat-effects.test.mjs`: five checks covering cutscene death/idle/attack cancellation, original cave intro/withdrawal/death/load handoff, Jester lifecycle/save/freeze, native absence of independent projectile smoke trails, original frame coverage and difficulty-specific sizes.
- `node tests/enemy-combat-scenes.mjs`: actual Chromium rendering of both fifteen-particle Jester swirls and all seven restored sprite types; verifies Max's duplicate and corpse disappear during a cutscene while RedCat's idle remains active, with no browser or HTTP errors. Images and results are under `artifacts/jester-*.png`, `artifacts/enemy-projectiles.png`, and `artifacts/enemy-combat-scenes.json`.
- A direct pixel comparison of all 28 newly imported RGBA frames against the original BMP color/alpha pairs passed.

For the follow-up native trail audit, only the changed flight-effect regression and its neighboring Jester effect were rerun:

```sh
node --test --test-name-pattern='native non-ribbon|Jester departure' tests/enemy-combat-effects.test.mjs
```

The 26 October follow-up also passed three isolated Jester clock/transform/save tests, the two focused lifecycle/projectile-isolation checks, and an original-byte differential probe covering 212 effect frames and 1,830 live-particle samples. See the linked follow-up for exact agreement and floating-point limits.
