# Player reactions and projectile contact

Reference: installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
Addresses below are virtual addresses. The executable was inspected read-only.

## Hurt, death and checkpoint recovery

The player animation selector chooses `hit` at `0x432a51` and starts it at
1.5× (`0x432ab7`). It chooses `death` at `0x432af2`, played at 1.6×
(`0x432b58`). The respawn branch selects `re-spawn` at `0x433160` and plays
it at 1× (`0x433278`). It waits for animation completion at `0x4331a9`,
then returns to idle and reenables movement (`0x433233–0x433244`).

The imported RedCat clips give these durations:

| Reaction | Clip duration | Playback rate | Simulation duration |
| --- | ---: | ---: | ---: |
| Hurt | 1.066672 s | 1.5 | 0.711115 s |
| Death | 2.266678 s | 1.6 | 1.416674 s |
| Respawn | 3.266683 s | 1 | 3.266683 s |

`player-lifecycle.js` supplies this independent simulation clock to gameplay
and the actor renderer. A hit cancels a pending shot/charge and selects the hurt
clip; it does not freeze gravity, platform motion or movement out of water.
Death consumes one life and finishes its clip before returning to the checkpoint.
The respawn animation holds player input and protects RedCat from damage until
finished. On the final life the death clip holds its last frame before game over
pauses the game. This uses the existing game-over menu; it does not restore
additional original game-over artwork.

Save data carries the phase and elapsed time. Loading a mid-death save with
remaining lives resumes that sequence instead of resetting the level. Pausing
stops its clock. Cutscenes retain their idle-pose and invulnerability rules.
The clip rates/completion gates are recovered native behavior; the portable
lifecycle integration does not claim every original animation blend or physics
transition has been reconstructed.

## Projectile collision is independent of artwork size

The shared `RcProjectile` path at `0x44cd67–0x44cda3` multiplies the float
at `0x691530` (0.32) by 0.1 and sets symmetric trace minima/maxima to
approximately ±0.032 on all three axes. The separate 0.16 value at trace
`+0x5c` is not that box's half-extent. The trace passes its minimum/maximum
vectors directly into the Genesis collision query (`0x565f33`, `0x565f40`);
`0x565da0` performs a zero-vector check, not a world-unit conversion.
Both shared actor and brush impacts retire the projectile (`0x44d039`,
`0x44d0ff`); there is no generic bounce in this shared path.

Generated player and enemy projectiles now use that recovered swept hull.
Readable sprite enlargement remains visual only. Existing saved generated
projectiles migrate their old visual-derived radius when restored; custom
projectiles retain their explicit radius. Earliest actor/wall contact remains a
sweep, so small projectiles cannot tunnel merely because a frame is long.
Enemy muzzle attachments were subsequently recovered and implemented; see
[attachment evidence](enemy-projectile-origins-native.md). Subclass dispatch was
subsequently traced: enemy impact factories are null, while the three player
factories create distinct original hit sprites/lights. The unused mushroom
`TrailDamage` setting does not enable ribbon contact damage; direct mushroom
body hits still damage RedCat. See [impact evidence](projectile-impacts-native.md).

## Correction to the earlier shove finding

The original skill setter maps index 4 to bit 16 (`0x436ea0`); the settings
contain `ReqPotionPowerMove`. That is evidence of a stored capability, not proof
of an available action. The bit-test helper `0x439f10` has gameplay callers for
shooting bits 4 and 2 (`0x434e54`, `0x434e68`) and jump bit 8 (`0x435ae4`).
The other direct callers are debug-menu checks. The full-mask getter
`0x439f30` is used in shooting/aiming paths, not a recovered bit-16 move.
The imported actor/input definitions also provide no identified shove clip or
input. No speculative shove action was added. Bit 16 still survives grants and
saves; the scoped cave reward correction still grants BIG BENG as intended.
The earlier audit's description of shove as a confirmed missing native action
was therefore too strong.

## Focused checks

- `node --test tests/player-lifecycle.test.mjs` — five tests: original clip
  clocks, hurt/weapon cancellation, delayed checkpoint recovery, invulnerability,
  save restoration, cutscene/no-clip exceptions and one-time game-over events.
- `node --test tests/projectile-collision.test.mjs` — three tests: body contact
  versus a near miss, every generated projectile's hull and save migration,
  first-wall blocking and swept actor contact.
- `node --test --test-name-pattern='death cancels an unreleased pellet' tests/player-projectiles.test.mjs`
  — the one affected existing death/respawn attack test.
- `node tests/player-lifecycle-scenes.mjs` — the actual forest actor/controller,
  hurt while falling, death save through the real load menu path, checkpoint
  placement, protected respawn, paused clock and final death pose.

No builds or packages were generated.
