# Native maximum-health heart model

- `RcHcGame.dat` has `hartcontainer.act` at file offset `0x290a60`, VA `0x690a60` (PE section raw/VMA mapping adds `0x400000`).
- `CRcItemHart` constructor `0x43cd70` copies this exact string at `0x43ce12` / `0x43ce3b`, pairs it with the class-name string `ItemHart` at `0x690a08`, and calls base actor constructor `0x4e0c50` at `0x43ced7`.
- `Actors/hartcontainer.ini` sets ActorScale=3, ActorRotationSpeedY=100 degrees/sec, initial rotation X=-90 degrees, UseSun=0, UseAmbient=0, OverrideAmbient=1, RGB=[255,255,255].
- The already-converted `assets/actors/hartcontainer.json` has matching native source SHA-256, uses material `hartcontainer` and texture `textures/hartcontainer-0.png`. Visual inspection confirms this is the shiny **yellow/gold heart** requested.
- `IHart.act` is byte-identical to `IHealthS.act` (red heart geometry/texture). Its INI uses scale=1 rather than hartcontainer scale=3, accounting for both wrong red artwork and small size.
- `IHart.wav` remains the correct pickup sound; asset-model name and audio cue have different spelling.
- Existing gameplay reward evidence at `0x43d46e` adds 2 HP to maximum capacity, one full HUD heart, without refilling current health. No reward change required for this artwork bug.

Read-only research. Source and assets not changed. Exact disassembly slice and asset comparison retained alongside this note.
