# Gargoyle attacks

The Gargoyle has its own `CRcBlastEffect`. Increasing the shared fire-pellet
sprite would affect other enemies and would not restore this attack.

## Native evidence

Research uses the installed `RcHcGame.dat` and its original bitmaps and INI.
Disassembly, decoded particle arguments, the previous timing baseline and
render captures are retained in `current_work/gargoyle-native-2026-09-28/`.

- The Gargoyle constructor creates a `Blast` effect at `0x40ba14` and stores
  it at `+0x234`. The effect constructor (`0x45dca0`) loads `kaboom.bmp` with
  `kaboom_a.bmp` and allocates fifteen particles.
- `CRcGargoyle::Shoot` (`0x40c100`) still creates factory enum 2, `RcEnemyShot`,
  through `0x40c480`. It hides that projectile at `0x40c374`, then starts the
  separate effect through `0x45eee0`. The damage projectile retains its
  original speed, deviation, lifetime, radius and damage. The muzzle comes
  from the animated `BIP01 HEAD` attachment.
- Effect start receives mouth, target, 1000 ms and projectile velocity.
  `0x45ef72` **negates** the velocity; it does not normalize it. The subsequent
  endpoint math gives a visual travel vector of
  `target - mouth + projectileVelocity * 1 second`. Thus the blast's head
  deliberately travels beyond the target; it is not the collision projectile.
- `0x45ea10` advances that head, starts a particle on a nominal 50 ms timer
  and cycles through fifteen slots. Timers arm on their first tick, expire
  strictly after their deadlines and rearm on the next tick. There is no
  catch-up emission burst after a slow frame. All particles retire with the
  one-second effect, even though their individual lifetime is three seconds.
- Each emitted particle drifts along normalized mouth-to-target direction at
  20 units/second, with +15 Y and a shared X/Z deviation of
  `(rand() % 10000) * .003 - 15`. Mode-1 acceleration is `(0,.05,0)*32`.
- `0x45e4ad` draws textured ribbons between these drifting particles and the
  moving head. Tail half-width interpolates from 10 to 20 over three seconds;
  the head is one quarter as wide. Tail RGB is `(255,25,25)` and head RGB is
  `(255,251,50)`. Alpha starts at 100 percent and fades over three seconds
  after a 100 ms delay. These are tapered ribbons, not smoke billboards.
  Both original 128 × 128 bitmaps are imported without resampling.

## Trail transparency correction

The native quad assigns V=1 to both red tail vertices (`0x45e753`,
`0x45e77c`) and V=0 to both yellow head vertices (`0x45e792`,
`0x45e71b`). These coordinates address the bitmap from its top edge.
The imported `kaboom_a` mask is bright at the top and translucent at the
bottom: for example its centre-column alpha is 255 at row 0 and 160 at
row 127. The shared effect loader had vertically flipped this texture,
putting the opaque end over the red tail and fading the yellow head instead.

The Gargoyle texture now keeps the native orientation (`flipY=false`).
The other effect textures retain their existing mapping. The original artwork,
vertex fade, red/yellow colours, ribbon size and salvo timing are unchanged;
there is no invented blanket opacity reduction. Native `0x50b0fa` attaches
the separate alpha bitmap via `0x5c4120`. The indexed bitmap's palette must
still be decoded when reading its grayscale mask; raw palette indices are
not opacity values.

The engine reference corroborates the top-down BMP loading and separate-alpha
conversion paths in [Genesis3D bitmap.c](https://github.com/RealityFactory/Genesis3D/blob/f85b288ff54873e93879791ee9eb1367a311909f/Bitmap/bitmap.c).
The installed executable remains the source for the game's quad coordinates.
Reference source, additional disassembly and the focused before/after renders
are retained in `current_work/gargoyle-transparency-2026-09-29/`.

The focused check is `TMPDIR=current_work node tests/gargoyle-transparency-scenes.mjs`.
It renders the actual tower attack and samples the production beam material
over black and white backgrounds. At the sampled red-tail position, the old
mapping transmits 0% of the background; the corrected mapping transmits about
21%. The yellow-head sample remains opaque. This checks the mask orientation
without depending on the background's colour or changing combat simulation.

## Salvos

The Gargoyle alert state (`0x405390`) enters the shared stationary-shooter
attack state through `0x40a1d0`. Its shooting state is `0x40a4c0`:

1. Play `shoot1` (motion enum 6, `0x40a6b0`).
2. Release at `DrawMotionPart`, 0.67 for all Gargoyle difficulties
   (`0x40a649`–`0x40a682`).
3. On animation completion, repeat immediately if the salvo count is not
   exhausted (`0x40a5ee`–`0x40a631`). **This state does not use
   `WaitTimeBetweenShots`.**
4. After the entire salvo, wait `WaitTimeAfterSalvo`, two seconds
   (`0x40a440`, shoot-info `+0x38`).

The imported `shoot1` clip lasts 2.600013 seconds. At the normal animation
rate this gives roughly 2.60 seconds between shots within a salvo, and 4.60
seconds between the last release and the first release of the next salvo.
The old remake added another one/two seconds between shots. Only Gargoyle
cadence is corrected here; other enemies' attack-state work is separate.

Salvo count retains the native once-per-enemy sample at `0x426905`:
`trunc(1 + (AverageShotsPerSalvo - 1) * (rand() % 10000) * .0001)`.
This yields 1 on Easy, 1–2 on Normal and 1–3 on Hard; the INI averages are
not literal shot counts. Stationary Gargoyles do not invent patrol movement
between salvos.

## Runtime and verification

`src/gargoyle-blast.js` owns the small saved particle state and native timer
rules. Gameplay advances it independently of projectile impacts and rendering.
Pause/frozen enemies stop it; saves retain particle positions, velocities,
ages, slot, random state and emission timer. Respawn clears it. Old saves
without a blast remain loadable. Other `RcEnemyShot` users keep their sprites.
The beam batch supports per-vertex colors for the native red/yellow gradient.
A fallback side vector prevents a zero-area ribbon when viewed directly
along its axis. Effect randomness is deterministic within the remake rather
than coupled to the original executable's process-wide C runtime RNG.

Focused checks (no packaging/build step):

```sh
node --test tests/gargoyle-blast.test.mjs
TMPDIR=current_work node tests/gargoyle-blast-scenes.mjs
```

The browser check uses an isolated profile, the actual tower Gargoyle,
imported shooting pose and level geometry. It records before/after images,
visible pixels, and verifies rendering does not change simulation state,
loading/freezing preserves the exact geometry, and expiry clears the effect.
It does not touch the player's live save. This is executable/asset parity
research and a remake render check, not a frame-by-frame capture of the
running Windows executable.
