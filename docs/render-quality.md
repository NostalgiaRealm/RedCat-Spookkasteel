# Rendering scale and FPS display

Settings now include a 25–300% render-scale slider (default 100%) and an
optional FPS counter (default off). Both choices persist in local settings.
The scale applies to each dimension of the selected resolution, or the window's
physical pixel resolution when Automatic is selected. HTML overlays stay sharp.
Android Automatic now uses this same policy instead of the earlier fixed 720p
budget. Camera aspect ratio and desktop window size use the unscaled resolution.

During active, visible gameplay, the monitor measures one-second frame windows.
After a two-second warmup, at least three consecutive seconds below 30 FPS
reduce the rendering scale by 25 percentage points. Further reductions can occur
after another warmup and low-FPS interval: 100% → 75% → 50% → 25%.
A manually selected scale also drops by 25 percentage points, with a floor of
25% (for example, 60% → 35% → 25%). At the default 100%, there are at most three reductions per level;
starting above 100% permits further 25-point reductions down to the same floor;
there is no automatic upscaling or oscillation. Starting a level or changing the
resolution/scale resets the automatic reductions. Applying unrelated settings
preserves them. Automatic reductions do not overwrite the saved slider choice.

Paused, loading, hidden and non-gameplay frames are excluded. Intervals longer
than one second reset measurement rather than count as low rendering performance.
The displayed FPS measures game animation-frame cadence, not GPU timing.

Focused verification: `node --test tests/render-quality.test.mjs`.
Browser settings/persistence check: `temp_work/render-quality/browser-check.mjs`.
No packages were built for this change.

The track above 100% is red to flag the performance cost of supersampling.
300% renders at three times each dimension (nine times the pixel count).
