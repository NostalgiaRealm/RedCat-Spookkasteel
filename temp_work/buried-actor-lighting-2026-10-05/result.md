# Buried actor lighting repair — completed

Production change: `src/world.js` explicitly permits the existing cached five-point floor recovery for `tree.act`, `kandela.act`, `cross5.act` and `pbench.act` when instantiated as AdamAnyActor, and `knight.act` when instantiated as StandingEnemy. No sampler algorithm, placement, collision, Sun selection, visibility or residency changes.

New persistent cases repaired: 22 tower candlesticks, four graveyard markers, one graveyard bench, ten castle standing knights (37 total). All recover at the first center probe inside their setup bounds. The prior tree repair continues to cover 60 forest and nine castle trees. Baseline audit and review evidence are preserved separately; `findings.md` describes the initial classification before the knight movement investigation established the persistent failure.

Checks performed for this task only:

- `node --test tests/buried-actor-lighting.test.mjs`: 5/5 pass. All 37 recovered; 106 already-valid decorative samples and 12 already-valid knight samples/surfaces unchanged. Production transforms/setup bounds, stationary and animated knight caches, hidden/nonresident actors, eligibility exclusions, and placement preserved. Log: `focused-tests.log`.
- `node tests/buried-actor-lighting-scenes.mjs`: original three decorative views passed. `scenes-1791199265991/report.json`, before/after PNGs and `visual-check.log`. Restored sRGB pixels: bench 5,405, grave markers 9,548, candlestick 4,849. Zero darkened pixels and zero repeated queries across 60 updates; placements unchanged.
- After adding the confirmed standing-knight case, ran only `node tests/buried-actor-lighting-scenes.mjs castle-knights`: passed. `scenes-1791199372710/report.json`, before/after PNGs and `knight-visual-check.log`. 7,540 restored pixels; zero darkened pixels or repeated floor queries; placements unchanged.
- Visually inspected all four corrected views and knight comparison.
- Focused whitespace check passed.

Audit covers all 1,309 entity-backed authored and freshly initialized actor placements in all five levels; not every future script endpoint, transient projectile or debris mesh. Tower guardian's initial shallow overlap clears on its second active movement frame; no permanent lighting repair needed there. Scripted buried doubles and cases with no valid bounded floor remain unchanged.

No builds, packages, commits or website-directory changes. All temporary scripts, profiles, audit records and test evidence remain in this directory.
