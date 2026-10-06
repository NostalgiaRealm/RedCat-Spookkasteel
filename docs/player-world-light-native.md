# RedCat's local world light

The native player owns a small dynamic light named `rc glow`. The remake now
adds that light to the existing world lightmap and actor-lighting paths. It
follows RedCat, brightening nearby surfaces without changing the level's baked
lighting or introducing a visible glow sprite.

## Native evidence

Static inspection of the installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`:

- Player setup `0x431dc0` constructs `CAdamLight` with the string `rc glow`
  at `0x6903a8`, retaining it at player offset `0x398`.
- `0x431f4c–0x431f51` sets radius **120**. `0x431f58–0x431f5d` supplies
  RGB **200,200,200** from `0x64c3e8`. The stored alpha is 254, but the light
  setter at `0x4e30b1` forces it to 255; this is lighting, not sprite opacity.
- `0x431f74–0x431f75` sets the shadow flag to zero. The light updater forwards
  that byte at `0x4e2b54–0x4e2b75` to the engine light attributes.
- `0x4336bb–0x433704` positions the light at the actor's bounding-box centre
  plus **20 units on Y** (`0x64c564`). Centre getter `0x49bc80` uses actor
  origin plus half the sum of cached bounds at offsets `0x11c` and `0x128`.
  Base and moving-actor vtable slot `0x68` both resolve to the bounds snapshot
  function `0x49c570`, invoked during setup by `0x49c5a0`.
- Setup enables the owned light at `0x431f7c`; the observed position update
  does not gate it on the model's render visibility. The portable light thus
  remains present in first person and during scripted model disappearance.

Constants and focused disassembly are retained in
`current_work/player-world-light-2026-10-04/`. This is executable evidence,
not a claim of a frame-by-frame capture of the original game.

## Portable integration

`PlayerWorldLight` caches the imported actor's initial box centre, including
its model basis and scale, then follows the player position. Subsequent idle
or jump animation bounds cannot make the light bob. Moving, jumping,
teleporting and loading a save update its position without an additional saved
effect state. Each level owns exactly one such light.

The existing native BSP falloff and actor lighting formulas handle the light.
One of the existing eight world-light slots is reserved for it, with the
remaining slots retaining their distance selection. This prevents the small
player glow blinking out near many lamps without increasing the shader's
light budget. Actors still select their own nearby lights from the full list.
No additional draw calls, shadow maps, scene scans or collision traces are
introduced by the player-light update.

## Focused checks

```sh
node --test tests/player-world-light.test.mjs
node tests/player-world-light-scenes.mjs
```

Three unit checks cover constants, placement, movement, cached bounds, limited
falloff, camera-independent lifetime, reuse, cleanup and the eight-slot budget.
The browser check compares illuminated and unilluminated **world surfaces** in
a shaded graveyard area, separately from the character becoming brighter. It
also checks jumps, first-person/script visibility and save restoration. The
pixel comparison uses displayed sRGB brightness so faint changes on dark
textures are not lost to linear 8-bit rounding.

The final checks passed on 2026-10-05. Screenshots, reports and all intermediate
diagnostics remain under the evidence directory above. No builds were made.
