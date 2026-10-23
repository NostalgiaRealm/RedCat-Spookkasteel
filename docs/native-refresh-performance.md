# Frame pacing and performance

The game uses `requestAnimationFrame` for its update and rendering loop, with
elapsed-time movement rather than a fixed distance per frame. It has no fixed
60 FPS game timer. Browser-managed frame pacing normally follows display refresh;
the desktop source now requests uncapped scheduling as described below.

## Uncapped desktop FPS — 18 October 2026

At the user's request, Electron now adds `disable-frame-rate-limit` before
startup completes. Chromium's [switch implementation](https://chromium.googlesource.com/chromium/src/+/refs/heads/main/components/viz/common/switches.cc)
removes its compositor frame limiter and also disables GPU VSync. The existing
OpenGL/ANGLE and X11/Wayland choices are preserved. No Vulkan/MangoHud changes,
timer-based rendering replacement or game-speed multiplier were introduced.

Restart the source game using the usual command, including the existing Wayland
override if desired:

```sh
npm start -- --ozone-platform=wayland
```

FPS can now exceed the monitor's refresh when the hardware has headroom. This
uses more CPU/GPU work than limiting rendering to refresh; the monitor and
compositor still determine what is physically displayed. To restore the former
display-synchronized behavior for one launch:

```sh
REDCAT_VSYNC=1 npm start -- --ozone-platform=wayland
```

The same environment option works with `Start-RedCat.sh`. The launcher prefers
existing `dist` packages; the published 1.0.0 and 1.0.1 packages include this
change. Use `npm start` when testing newer source edits rather than a previously
built executable.
An explicit MangoHud/driver limit can still impose its own cap.

Browser tabs and Android retain their existing frame loop. A web page cannot
apply Electron's startup switch to a visitor's browser; normal browser
[`requestAnimationFrame` pacing](https://developer.mozilla.org/en-US/docs/Web/API/Window/requestAnimationFrame)
still applies there. A Chromium user can choose startup flags themselves, but
the hosted game does not force global browser settings.

### Focused source verification

Native Wayland, current source, isolated profiles, 800 × 600 forest fixture,
one-second warmup and three-second sample. Damage/encounter triggers and authored
camera/motion timelines are disabled; sound is muted. This is a short check of
frame scheduling, not a campaign/FPS guarantee.

| Mode | Submitted world frames/s | Real sample | Simulation advanced |
| --- | ---: | ---: | ---: |
| `REDCAT_VSYNC=1` | 144.0 | 3.0001 s | 3.0006 s |
| Default uncapped | 747.3 | 3.0015 s | 3.0020 s |

The launcher's X11 backend also passed: **801.2 submitted frames/s**, with
3.0023 seconds of simulation during a 3.0019-second sample. Its reported display
frequency is 143.87 Hz. These short entrance-scene results show that pacing is
uncapped; they do not predict FPS elsewhere in the game.

Both samples retain the same grounded player position, record no zero-delta game
updates and no WebGL/page errors. Pause produces zero world updates/draws during
the 500 ms check; resume draws immediately. Electron's Wayland display-frequency
field is zero on this host, so 144 Hz is the observed synchronized callback rate,
not a claimed successful display-frequency API reading.

Evidence, source backups and reproduction remain under
`temp_work/fps-uncap-2026-10-18/`, including `check.mjs`, `wayland-sync-ready/`
and `wayland-uncapped/`, plus `x11-uncapped/`. The first harness navigation raced Electron's initial
navigation; that failed attempt is retained. The corrected harness waits for
initial startup before reloading seeded settings. Both variants also recorded
three console fetch failures around this reload; their raw reports are retained.
No renderer page errors or GL errors occur during the measured game. Only
frame/pause/resume behavior, startup syntax and whitespace were checked; previous
campaign suites were not rerun. No packages were generated.

## MangoHud

MangoHud can impose its own FPS limit, independent of the display and game. For
example, `fps_limit=60,30,0` starts with a 60 FPS limit. Its default
`Shift` + `F1` shortcut cycles through those limits; `0` means unlimited by
MangoHud. Desktop source now also removes Chromium's limiter unless
`REDCAT_VSYNC=1` is set; browsers and older packages retain normal display pacing.

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
`temp_work/native-refresh-2026-10-01/`. Main evidence:

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

## Later CPU optimization pass

The [18 October 2026 CPU performance report](low-end-cpu-performance.md) records a separate measured reduction in repeated animation, lighting, gameplay, effect and HUD work for slower devices. Those changes preserved the then-current native-refresh scheduling and report CPU update times separately from displayed FPS. The subsequent desktop uncapping above changes scheduling only; the CPU/GPU work reductions remain in place.
