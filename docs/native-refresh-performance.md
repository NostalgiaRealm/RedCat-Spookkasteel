# Native refresh and performance

The game uses `requestAnimationFrame` for its update and rendering loop. Chromium
schedules this against the display refresh rate; there is no fixed 60 FPS game
timer. Movement uses elapsed time rather than a fixed distance per frame. A
120 Hz display gives each frame about 8.33 ms, so following the display refresh
also requires the game and GPU to finish their work within that budget.

Keep display synchronization enabled. Disabling VSync or Chromium's frame limiter
is not necessary for native refresh and can cause unnecessary GPU load or tearing.
The desktop display mode is selected through the operating system; the game does
not change its refresh rate or assume that every display is 120 Hz.

## MangoHud

MangoHud can impose its own FPS limit, independent of the display and game. For
example, `fps_limit=60,30,0` starts with a 60 FPS limit. Its default
`Shift` + `F1` shortcut cycles through those limits; `0` means unlimited by
MangoHud, while Chromium's normal display synchronization still applies.

When started through `Start-RedCat.sh` with MangoHud enabled (`MANGOHUD=1` or a
`libMangoHud` library in `LD_PRELOAD`), the launcher removes the inherited cap for
this game only. With no existing environment configuration it sets
`MANGOHUD_CONFIG=read_cfg,fps_limit=0`: `read_cfg` retains the usual HUD settings
from the user's config, and `fps_limit=0` overrides that config's limit. It never
edits the global MangoHud configuration.

An existing `MANGOHUD_CONFIG` is preserved, with `fps_limit=0` appended only when
it does not already specify `fps_limit`. An explicitly supplied per-launch limit
therefore takes precedence:

```sh
MANGOHUD_CONFIG=read_cfg,fps_limit=90 mangohud ./Start-RedCat.sh
```

Launching directly with `npm start` bypasses the shell launcher. To use MangoHud
without inheriting its global frame cap, start the source version with:

```sh
MANGOHUD_CONFIG=read_cfg,fps_limit=0 mangohud npm start -- --ozone-platform=x11
```

The X11 option preserves the Linux window-system selection used by the launcher.
It does not impose a 60 Hz limit. Existing explicit display-backend arguments to
`Start-RedCat.sh` remain supported.

`Start-RedCat.sh` prefers an existing packaged executable in `dist`. Source
changes do not update that executable. Use the `npm start` command above to test
these changes without creating a package, then restart the game after editing
source files.

## Investigation, 1–2 October 2026

The live session used an AMD Ryzen 9 5950X and Radeon RX 6700 XT with hardware
acceleration. KDE reported 120 Hz; Electron reported 119.953 Hz. The game window
and drawing buffer were 2560 × 1080 on a 2560 × 1440 display. Its observed
54.8 FPS was dominated by CPU updates, not a software-rendering fallback.
MangoHud's global configuration also contained `fps_limit=60,30,0`; the active
limit selected by its hotkey in that original session could not be recovered.

The CPU profile identified repeated brush transforms/bounds calculations during
enemy collision sweeps, followed by animated prop collision construction.
These changes remove repeated work without reducing simulation frequency:

- Cache a brush's transformed planes and bounds until its pivot, translation or
  rotation changes. Temporary moving-door/platform poses invalidate the cache.
- Keep held, dormant and completed actor poses unchanged, avoiding redundant
  mesh uploads and collision rebuilding. Motion clocks and direct pose seeks
  retain their existing behavior.
- Build animated triangle collision projections with fewer allocations, keeping
  the same separating axes, contact tolerances and ordering.
- Reject distant actor bounds before evaluating scripted collision visibility.
- Update aiming geometry only for authored shootable buttons and targetable
  crates. Decorative objects and ordinary doors cannot be aiming candidates.

After the original game closed, its captured save, position and camera were
restored in a separate Electron profile. The tests used the same resolution and
original enemy simulation, with player damage suppressed and audio muted to
keep the scene repeatable. Each sample followed a 3.5-second warm-up and measured
six seconds. The castle/caves samples used their entrances with introductory
script triggers suppressed. User save files were not changed.

| Scene | Average FPS | Median / 95th percentile frame interval | Mean world update |
| --- | ---: | ---: | ---: |
| Captured graveyard, before collision/animation optimizations | 41.9 | 25.0 / 33.2 ms | 21.73 ms |
| Captured graveyard, optimized | 118.2 | 8.3 / 8.5 ms | 6.42 ms |
| Castle entrance, optimized | 120.0 | 8.3 / 8.5 ms | 5.24 ms |
| Caves entrance, optimized | 120.0 | 8.3 / 8.6 ms | 3.27 ms |

The original live measurement and the controlled graveyard comparison are
different samples; compare 41.9 with 118.2 for the reproduced scene. These are
short measurements of specific areas, not a guarantee of 120 FPS everywhere.
The graveyard still had an occasional longer frame (18.3 ms maximum in the
three-scene run; 26.7 ms in the verification run below). No
resolution, artwork quality or enemy behavior was reduced to reach these results.

A further graveyard sample confirmed MangoHud's `libMangoHud_opengl.so` and shim
were loaded in Electron's GPU process with `read_cfg,fps_limit=0`. It measured
119.0 FPS, with an 8.3 ms median and 8.5 ms 95th percentile frame interval. The
earlier three-scene report's `loadedInGpu: false` field used an incomplete
library-name check (only `libMangoHud.so`, omitting the OpenGL library); the
verification report records the actual mapped library paths instead.

Profiles, snapshots, benchmark scripts and focused test logs are retained in
`current_work/native-refresh-2026-10-01/`. Main evidence:

- `live-snapshot.json`, `baseline-live.json`, `live-before.cpuprofile`
- `before-1790892232162/report.json`
- `final-scenes-1790924629455/report.json`
- `mangohud-verification-1790924735905/report.json`
- `collision-cache-tests.log`, `actor-broadphase-tests.log`,
  `target-bounds-tests.log`, `launcher-check/report.json`

Validation was limited to the affected collision, animation, targeting and
launcher behavior. Differential tests compare the optimized triangle surfaces
against the former implementation using 1,008 synthetic cases and 800 player/
projectile sweeps through original animated props. No packages were generated.
