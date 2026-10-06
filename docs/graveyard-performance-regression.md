# Graveyard patrol regression and zombie pursuit hitches

23 September 2026. Source changes only; no build/package generation.

## First correction: patrol searches

The new enemy `walk` helper applied full pursuit route search to every grounded
movement, including steps along an already selected authored patrol edge.
A blocked patrol therefore scanned the graveyard's 370 waypoint candidates and
traced graph edges repeatedly. As more enemies reached those positions, CPU
work grew while walking through the level. GPU resource counts stayed constant.

Authored patrol/relocation/boss-route steps now pass `authoredRoute:true` and
move along the existing graph edge with normal collision. Full route search is
reserved for actual pursuit/backoff and remembered player destinations.
Failed searches retain their result briefly rather than immediately repeating;
the short retry deadline permits a fresh route, and a clear direct sweep resumes
direct movement immediately.
Within a search, edge clearance is reused instead of retracing the same edge for
multiple candidate terminals. These changes leave perception ranges, enemy
updates, collision, authored paths and rendering active.

## Measured result

`tests/graveyard-performance-scenes.mjs` loads the actual graveyard and its
41 initially active enemies, then visits 42 locations three times, 630 simulation
frames per pass. It uses the real collider, actor animation, effects and audio.
The player is invulnerable with no-clip so encounters cannot end the measurement;
scripted level/camera transitions are suppressed for a repeatable route.

| Pass | Before median / p95 | After median / p95 | BSP traces before → after |
| --- | --- | --- | --- |
| 1 | 110.7 / 284.4 ms | 9.9 / 12.5 ms | 654,462 → 33,162 |
| 2 | 194.9 / 299.7 ms | 10.2 / 11.6 ms | 987,123 → 36,971 |
| 3 | 196.9 / 302.7 ms | 10.7 / 12.3 ms | 999,081 → 38,319 |

These are instrumented CPU simulation/mixer timings, **not displayed FPS**.
Rendering is sampled separately from the measured updates. The final after pass
spent about 80 ms total in pursuit versus 115,680 ms before. Resources stayed at
1,651, scene children at 731 and shader programs at 15 in every pass. Audio was
paused in the fixture, so pending one-shot media counts are not a leak metric.

The data is in `artifacts/graveyard-performance-before.json` and
`artifacts/graveyard-performance-after.json`. The test now asserts bounded trace
counts, pursuit-call counts and scene/resource counts to catch recurrence
without imposing hardware-specific frame-time thresholds. A focused unit test
also proves ordinary patrol does not search while remembered-target chasing can.
The existing actual-map frog patrol/save-recovery scene is checked because this
change directly touches the shared patrol movement path.

This regression was CPU routing work; changing world visibility alone would
not remove the repeated searches. [Chunked world streaming](world-streaming.md)
has since been implemented separately, including residency hysteresis to avoid
repeated uploads while turning or revisiting nearby areas. It is no longer an
unimplemented optimization; the navigation budgets below remain necessary.

## Follow-up: activated zombies still caused hitches

The first benchmark disabled activation triggers and exercised the 41 initially
active enemies. It did **not** establish that newly activated zombies were free
of hitches. The user's follow-up identified this missing case.

`tests/zombie-hitch-scenes.mjs` now walks into the actual `dknopa` button and
`graf1_trigger` volume, runs their compiled grave-explosion/zombie activation
scripts, then measures patrol and pursuit separately. The blocked-pursuit stress
stage moves RedCat around the zombie on the actual map and refreshes memory via
the enemy hit handler (zero damage, keeping the encounter alive). No-clip keeps
that controlled movement from ending the measurement. This is a deterministic
CPU reproduction, not a recorded human playthrough or a displayed-FPS claim.

The `dknopa` zombie's blocked chase performed **703 collision sweeps in one
update**, repeatedly scanning nearly every waypoint. This caused 18 updates
above 50 ms in a six-second simulation interval. Grave debris alone did not
produce these large spikes in either tested encounter.

The follow-up correction:

- Tries nearest origins and terminals lazily, keeping their original selection
  order; stops the breadth-first flood once the start receives its hop label.
- Splits expensive pursuit clearance work across updates: at most 16 search
  sweeps per enemy and 48 shared per update, with fair reserved shares for
  waiting enemies. Direct/next-step collision probes remain immediate.
- Keeps the half-second retry cache even when the next edge is blocked or the
  player moves. A newly clear direct path still takes effect immediately.
- Discards unfinished searches after substantial endpoint changes or a lapse
  in pursuit. Search iterators remain transient; existing saved routes keep
  their plain-data format.
- Rejects distant brush models before traversing their BSP leaves. Conservative
  bounds include collision leaves, rather than relying on artwork bounds alone.
  Moving/rotating geometry is transformed on each query; the world exterior
  stays uncullable. Actor collisions are still checked normally.

| `dknopa` blocked chase, 360 updates | Before | After |
| --- | ---: | ---: |
| Median update | 13.9 ms | 14.2 ms |
| 95th percentile update | 141.5 ms | 18.0 ms |
| 99th percentile update | 149.3 ms | 23.5 ms |
| Maximum update | 163.6 ms | 28.9 ms |
| Updates above 50 ms | 18 | 0 |
| Maximum pursuit sweeps per call | 703 | 17 |

These timings include simulation, actors, effects and mixer updates, with render
submission measured separately. They show the improvement in spikes rather than
an average-speed claim. Render submission peaked at 7.7 ms in both passes; GPU
completion/display latency is not measured. The second encounter's blocked
chase measured 17.1 ms p95 and 32.1 ms maximum after the fix, also with no updates
above 50 ms. Both zombies activate through their scripts and walk out of their
graves. No rendering chunks or visibility changes were necessary for this cause.

Results: `artifacts/zombie-hitch-combat-before.json` and
`artifacts/zombie-hitch-after.json`. The scene asserts a bounded number of pursuit
sweeps instead of a machine-specific timing threshold.

Only affected checks were run:

```bash
node --test tests/enemy-pursuit-budget.test.mjs
node --test --test-name-pattern='route|pursuit|patrol' tests/enemy-native-completion.test.mjs
node --test tests/collision-broadphase.test.mjs
node --test --test-name-pattern='translated brush|rotated|model zero|swept hull|parallel movement|slide|disabled moving model' tests/collision.test.mjs
node --test tests/moving-solids.test.mjs
PERF_REPORT=artifacts/zombie-hitch-after.json node tests/zombie-hitch-scenes.mjs
```

Six new pursuit-budget tests, four existing navigation checks, 26 collision and
moving-solid checks, and both browser encounters passed. The new collision tests
include randomized and actual-map comparisons with unpruned traversal. No full
historical test run, builds, packages or website-directory changes were made.
