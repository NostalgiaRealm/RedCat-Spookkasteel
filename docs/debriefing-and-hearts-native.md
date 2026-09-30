# Level overview and heart capacity

Source changes only; no packages or website deployment were produced.

## Original end-level overview

`Settings/Debriefing.ini` and `Settings/LanguageNL.ini` supply the Dutch labels,
640×480 layout, icon crops, one-second initial delay and 0.4-second fade-in.
`tools/import_debriefing.py` imports `LoadingBG.bmp`/`LoadingBGA.bmp` and
`LogoBG.bmp`/`LogoBGA.bmp` without resampling. The existing original HUD atlas
supplies the potion, money, enemy and secret icons. A full asset import now
includes this importer.

The screen shows **Overzicht**, **Magische flesjes**, **Geldzakjes**, **Vijanden**,
**Geheimen**, **SpelScore**, **Levelbonus**, and **Nieuwe SpelScore**. Its original
continue text is **Druk op SCHIETEN om verder te gaan**; Ctrl, a click, or the
touch-accessible continue button proceeds. Enter/Space also work. The layout
retains its proportions on widescreen and portrait displays.

In the installed `RcHcGame.dat`, getters `0x49b020`, `0x49adc0`, `0x49ac90` and
`0x49ab60` read the level's `NrPotions`, `NrMoneyBags`, `NrEnemies` and `NrSecrets`.
Those original `Game.ini` totals are used instead of guessed entity totals.
`0x4912d5`–`0x49139e` multiplies each found count by `ScoreMultiplier=15` and adds
the four bonuses. Money counts bags, not bag value. The portable overview counts
actual collected/defeated/discovered level objects, so carried inventory and
supply cheats do not inflate the results.

The mirror and any queued dialogue finish before the overview opens. Completion
freezes player movement and damage during that wait; the world can still finish
scripted effects. The summary and awarded bonus are saved together. Loading a
completed level returns to its overview without granting the bonus again. The
final level uses the same overview before the original outro movie.

## Health

The original HUD uses two HP per complete heart. `items.ini` specifies small,
medium and large medikits as 1, 2 and 20 HP respectively. Small pickups therefore
refill a half-heart; medium pickups refill a whole heart. Fractional liquid
damage can also be healed, and pickups remain available at full health.

The native heart-container pickup at `0x43d46e` passes `2.0` to `0x439c70` to
increase maximum health, capped at 20 HP. The remake had added only one HP,
causing a full but odd capacity such as 11 HP to draw an apparently unfillable
grey half-heart. Capacity now increases by two, leaving current health unchanged
as in the original: 6/10 becomes 6/12. The following native call `0x4699f0` is
the pickup particle/icon effect, not a heal. Its original sound is `IHart.wav`.

The native `ItemHart` constructor at `0x43cd70` selects `hartcontainer.act`
(filename at `0x690a60`, references at `0x43ce12`/`0x43ce3b`). This is the
golden/yellow heart, with scale 3, a 100-degree-per-second Y rotation and white
ambient override from `Actors/hartcontainer.ini`. The remake had incorrectly
selected `IHart.act`, a small red heart with scale 1. Both `ItemHart` and the
`ItemHartContainer` compatibility alias now select the already-imported original
golden model, including when loading existing saves. Healing hearts retain
their separate red `IHealthS/M/L` actors.

The focused artwork check covers all four authored containers across the castle,
graveyard, caves and tower. A separate rendered check loaded a copy of the
2026-09-28 tower autosave beside `ItemHart1`, verified its yellow texture,
scale/rotation, and pickup from 10 to 12 maximum HP with 75 points. Evidence,
before/after images and native findings are retained in
`current_work/health-extension-2026-09-28/`; no build was produced.

Saved games now include `healthVersion:2`. Earlier capacities above the initial
10 HP are converted once from one HP per container to two, preserving missing
health and never reviving a dead player. Existing saved healing is not undone;
future container pickups follow the original max-only rule. Cutscenes ignore all incoming
damage while defeated enemies finish their animation, fade and smoke.

## Focused checks

- `tests/debriefing.test.mjs`: native text/totals, real collection counts,
  one-time bonus and serialization, malformed state, score cap, completed-player
  protection.
- `tests/heart-capacity.test.mjs`: HUD half-heart recovery, native medikit values,
  container capacity, legacy migration and cutscene damage protection.
- `tests/mirror-audio-transition-scenes.mjs`: original forest mirror script and
  complete WAV, pause/resume, desktop/mobile screenshots, summary reload and
  touch continuation to the castle.
- `tests/debriefing-final-scenes.mjs`: frozen completed player, final overview
  before the outro and keyboard continuation.

Desktop/mobile captures are `artifacts/debriefing-desktop.png` and
`artifacts/debriefing-mobile.png`.
