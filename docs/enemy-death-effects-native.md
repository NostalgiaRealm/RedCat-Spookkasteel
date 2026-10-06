# Enemy death fading and purple smoke

Defeated enemies finish their original death motion, then fade over five seconds. The accompanying smoke uses the original `strail.bmp` colour bitmap and `strail_a.bmp` alpha mask, combined without resampling. `tools/import_world_effects.py` imports that pair during normal asset import.

The local original `RcHcGame.dat` (SHA-256 `e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`) provides the following evidence:

| Native code | Behaviour |
| --- | --- |
| `0x403890`, `0x403b20`, `0x403960` | Enter smoke effect and death motion; wait for the motion before the alpha-fade phase. |
| `0x403b92`, `0x403aad`, `0x4247a0` | Start a 5000 ms timer, multiply its remaining fraction by 255, and apply actor alpha. |
| `0x46db52`, `0x46dbe0`, `0x46dc15` | Construct fifteen particles and load the `strail` colour/mask pair. |
| `0x46e6c0`, `0x47db60`, `0x47dd60` | Seven-second particle life; initial alpha 50%, then interpolate to zero over 6.2 seconds after a one-second delay. |
| `0x46e230`, `0x46e36a` | Quad radius grows from 20 to 60; tint RGB is `(211,63,255)`. |
| `0x46e8b0`, `0x5b7150` | Read raw bone attachment translations, selecting every second bone and wrapping before the last bone. Normalize that translation: initial position is actor origin plus this direction times 20; initial velocity is the direction times particle index times 0.5. These are bind attachments, not animated joint positions. |
| `0x47e090`, `0x47e301`, `0x47e3a9` | Particle mode 1 adds acceleration `(0,0.05,0) × 32` to velocity and advances position. This smoke configuration has no collision, damping or oscillation. |

The portable renderer evaluates the continuous form of that acceleration, `position = origin + velocity × age + (0,0.8,0) × age²`. The native engine advances velocity before position each frame, so its exact path retains a small frame-rate-dependent integration difference. Texture, tint, count, launch direction, launch speed, acceleration and timing come from the executable; exact individual pixels across renderers are not claimed.

Fading multiplies each instance's existing material opacity and alpha texture, preserving translucent ghosts and unrelated actors that share a template. The cutout threshold is reduced during fading to prevent a second abrupt disappearance. Dead enemies remain non-colliding and do not become targetable again. The scripted witch's immediate retirement stays separate. Knights keep their existing detached-armour animation, with a final fade and a one-shot guard that prevents pieces from reappearing while the generic corpse deadline remains active. Their breakup still uses the separate `createKnightDebris` / `updateEnemyDebris` path in `src/world.js`, with a fixed 3.5-second lifetime and reconstructed launch, collision and spin. The later [native debris recovery](debris-native-recovery.md) applies to destructible actor fragments through `DestructibleEffects`; it has not replaced this knight-specific path. Native parity for detached-armour trajectory and lifetime therefore remains unverified.

Save data includes the death start and smoke launch positions/velocities. Loading during the effect resumes its existing age; loading an expired corpse does not restart it. Older saves retain their existing corpse expiry and do not acquire a new smoke burst. An explicit enemy freeze outside a cutscene pauses these clocks. During a cutscene, already defeated enemies finish their death animation, fade and smoke while living combatants remain frozen. Rendering the same time repeatedly does not advance or emit particles.

Focused verification (no packages built):

- `node --test tests/enemy-death-effects.test.mjs`: native fade timing, paused clocks, mid-fade and expired save restoration, material isolation, ghost alpha preservation, native smoke launch/trajectory, redraw stability, witch exclusion, and knight breakup restoration.
- `node tests/enemy-death-scenes.mjs`: Chromium renders the original zombie, ghost and spider actors through actual fatal-hit/death handling, mid-fade, retirement and save restoration. Confirms purple smoke pixels, independent materials, stable repeated redraws and no browser/HTTP errors.
- Exact pixel comparison confirms the imported 64 × 64 RGBA smoke texture matches the two original BMPs (alpha range 0–254).

Rendered examples: `artifacts/enemy-death-alive.png`, `artifacts/enemy-death-defeated.png`, `artifacts/enemy-death-fading.png`, `artifacts/enemy-death-gone.png`, and `artifacts/enemy-death-restored.png`; numerical report: `artifacts/enemy-death-scenes.json`.
