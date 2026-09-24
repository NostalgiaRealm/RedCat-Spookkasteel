# Native projectile bitmap timing

This audit uses the installed `RcHcGame.dat`, the original `Bitmaps` directory,
and `Settings/ProjectileEasy.ini`, `ProjectileNormal.ini`, and
`ProjectileHard.ini`. Addresses below are virtual addresses in the 32-bit
executable. No runtime recording or estimated video frame rate was used as a
substitute for the recovered timer logic.

Executable SHA-256:
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.

## Authored intervals and sequences

Every projectile bitmap timer has an authored interval of **0.05 seconds**.
Initialization multiplies that float by `1000` (`0x64b79c`) and converts it to
an integer millisecond duration. The duration belongs to **one frame**, not
the whole sequence.

| Projectile | Frames, in order | Interval load | Float address |
| --- | --- | --- | --- |
| RedCat ordinary shot | `Spark_01`–`Spark_04` | `0x44ebed` | `0x64d0f0` |
| RedCat power shot | `psht0`–`psht5` | `0x44a727` | `0x64cfa4` |
| RedCat super shot | `sshlo0`–`sshlo5` | `0x450767` | `0x64d244` |
| Enemy shot | `Spark_01`–`Spark_04` | `0x443b7d` | `0x64ca54` |
| Bone | `bn0`–`bn3` | `0x442a47` | `0x64c994` |
| Goo / poison | `snot0`–`snot5` | `0x444af1` | `0x64cae4` |
| Jester ball | `jb0`–`jb3` | `0x445a47` | `0x64cca4` |
| Witch magic ball | `eball0`–`eball5` | `0x446bd1` | `0x64cd7c` |
| Magma | `mb0`–`mb3` | `0x447be7` | `0x64ce04` |
| Mushroom | `msh0`–`msh3` | `0x448e47` | `0x64ceec` |
| Skull | `skl_0`–`skl_3` | `0x44feed` | `0x64d178` |

Color images retain their separate, original alpha bitmaps. The importer
records `frameIntervalMs: 50`. Its retained `framesPerSecond: 20` field describes
the *nominal interval only*; the renderer must not use `floor(age * 20)`.

## Exact update behavior

The common projectile constructor initializes the bitmap index to zero at
`0x44b279`. The timer constructor (`0x404285`–`0x40429d`) stores its duration,
sets its deadline to `-1`, its remaining fraction to `1`, and its active flag
to true.

`0x44c760` receives an integer current time and a delta in milliseconds. The
bitmap update at `0x44cbbb`–`0x44cc98` does the following:

1. An unstarted timer receives `deadline = now + 50` and keeps the current
   bitmap (`0x44cbd7`–`0x44cbe9`).
2. The timer expires only when **`now > deadline`**, not when they are equal
   (`0x44cbeb`–`0x44cbf7`).
3. Expiration advances **one** bitmap and wraps to zero at the sequence length
   (`0x44cc23`–`0x44cc43`). There is no ping-pong, randomized starting frame,
   or catch-up loop.
4. The unstarted timer template is copied into the active timer
   (`0x44cc49`–`0x44cc70`). Consequently the *next* update rearms the timer.
   That update does not advance another frame, even after a long stall.

Actual native animation rate therefore depends on the update cadence; it is
not exactly 20 displayed frames per second. `src/projectile-animation.js`
preserves the strict deadline, separate rearm update, and single advancement.
Gameplay drives this state once for each active projectile update. Rendering
reads the resulting index without changing it. Pauses, cutscenes, and enemy
freeze consequently cannot advance the artwork independently of the shot.

The clock, bitmap index, and pending deadline are saved as flat projectile
fields. Resuming an in-flight shot preserves its timer phase. Earlier saves
without those fields start their first bitmap and a fresh native timer;
their arbitrary accumulated age is not interpreted as an animation phase.

## Native size semantics

The projectile factory sets the sprite scale field at offset `0x130` to
`0.8` (`0x44d30f`). It subsequently calls the subtype initializer through
vtable entry `0x7c` (`0x44d336`). Enemy initializers replace that same field
with the corresponding `Projectile*.ini` `Size`; they do not multiply that
setting by the factory's initial `0.8` again. For example, bone initialization
loads its size at `0x442ba7` and writes offset `0x130` at `0x442bad`.

The imported native dimensions remain bitmap width/height multiplied by this
scale. Projectile collision radius is independent of those artwork dimensions.
Any deliberate distant-projectile visibility adjustment must remain a render
adjustment and must not alter the timer, movement, collision, or damage.
The requested readability improvement is documented in
[projectile-visibility.md](projectile-visibility.md).

## Focused validation

Run `node --test tests/projectile-animation.test.mjs`. It checks every imported
sequence, deadline equality, wrapping, separate rearming, long updates,
player/enemy freeze behavior, save/resume phase, and older-save initialization.
It does not run unrelated game tests or produce a build.
