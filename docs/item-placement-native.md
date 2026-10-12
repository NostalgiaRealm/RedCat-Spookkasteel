# Original collectible placement

Checked and implemented on 2026-10-09. This covers potions, money bags,
health, extra lives, heart containers and collectible mirror pieces in all
five levels.

## Cause and fix

`ItemPotion27` in Het Kasteel was imported correctly at `391 29 1855`, but
that is its editor position, not its final native position. The supporting
ground is at Y = -48. The port previously rendered it at Y = 31..37 using
an additional sine bob, without running the original floor-placement step.

The port now sweeps the item's scaled actor bounds down onto supporting
geometry once during level loading, then applies the original 18-unit item
offset. The reported potion's root is approximately Y = -30.069, putting
the bottom of its artwork approximately 18 units above the ground. This is
the original small clearance, rather than the previous roughly 80-unit gap.
The fabricated bob has been removed; the INI-driven rotation and the extra
life actor's own animation remain.

Rendering, proximity pickup checks and score/spark effects all obtain the
same corrected position from `Gameplay.objectPosition()`.

## Native evidence

Source: the installed `RcHcGame.dat`, SHA-256
`e30781fcdc665d1f217c1a3353761c96e1ec3566f1ad472bb1a8a499cb29dba5`.
These findings come from its executable and the original settings/BSP files;
they are not a claim of a frame-by-frame native gameplay capture.

- Potion setup at `0x441f60` calls shared item setup `0x4e1150`.
- `0x4e1335–0x4e1359` obtains the item position, calls the actor's floor
  sweep at `0x49d020`, then writes the result back.
- That sweep starts at Y + 1 and ends 100 world metres below the authored
  position (32 Genesis units per metre, or 3,200 units). It uses the actor's
  cached local collision bounds at `actor+0x11c`, excluding the actor itself.
  The item uses the ordinary bounds implementation: virtual slot `0x68`
  resolves to `0x49c570`, which calls `0x49bc00` to obtain bounds relative
  to the actor position.
- The query at `0x554ab0` uses contents mask `0x43` and collision flags
  `0x6`, covering BSP models and actors. An unsuccessful floor search at
  `0x49d152` logs the failure and retains the original position.
- The first item update at `0x4e1420` captures the settled position;
  `0x4e15f0–0x4e161c` adds `ItemYOffset` from the global at `0x6b9410`.
- Original `Settings/items.ini`, `[General]`, sets `ItemYOffset=18` and
  `Float=0`. Its unused floating path requests the actor's `bounce` motion;
  it does not justify adding an unconditional sine bob to every item.

The implementation reuses the port's BSP and actor collision sweeps and
imported actor bounds. Those sweeps retain their existing contact epsilon
and triangle-based prop collision; this change does not replace the entire
collision engine with Genesis3D.

## All-level audit

Every imported `Item*` entity dictionary matches its original BSP exactly.
No origins or level assets needed editing.

| Level | Items checked | Floor found | Embedded sweep / anchor retained |
| --- | ---: | ---: | ---: |
| Het Bos | 40 | 39 | 1 |
| Het Kasteel | 78 | 68 | 10 |
| Het Kerkhof | 123 | 122 | 1 |
| De Grotten | 154 | 154 | 0 |
| De Kasteeltoren | 42 | 42 | 0 |
| Total | 437 | 425 | 12 |

The embedded cases are the forest's deliberately buried `ItemMirror1`,
castle `ItemCoin5/6/11/12/13/14`, `ItemHealth10`, `ItemPotion17/28/29`,
and graveyard `ItemHealth6`. They keep their authored anchor plus the native
item offset instead of being moved through geometry to a distant floor.
All nine explicit model attachments were checked: the forest mirror,
four graveyard pillar hearts, the graveyard platform potion and money bag,
and the two cave pickups on moving fire platforms.

Besides the reported castle potion, the audit found high editor placements
for graveyard `ItemPotion9/10` and cave `ItemPotion19`. They now use their
supporting floor too. This does not indiscriminately put elevated items on
the lowest floor: the first supporting surface encountered stops the sweep.

## Saves, scripts and performance

Saved positions remain authored anchors, as in previous port saves. The
floor correction is derived once from the initial BSP and prop geometry,
before restored model motion is applied. It is not serialized on top of an
already-corrected position. Old saves are repaired on load, repeated saves
cannot accumulate a height change, and attached items continue to follow
their moving model. Collection state is preserved.

There are no additional floor traces during gameplay. Changes to a crate,
door or platform after loading do not repeatedly reposition its pickups.

## Focused verification

```sh
node --test tests/pickup-placement.test.mjs
node tests/pickup-placement-scenes.mjs path/to/a/copied-save.json
```

The save argument is optional. The renderer check uses an isolated browser
profile, visits all five levels and writes its report/screenshots under
`temp_work/pickup-placement-2026-10-09/`. It does not touch the active game
profile or produce a build.

The initial run passed five focused unit checks and the six rendered cases
(the copied castle save, plus five fresh levels), with no browser/HTTP
errors. The saved and fresh castle placement records matched exactly.
Evidence is retained in `temp_work/pickup-placement-2026-10-09/`:

- `native-research/`: annotated executable excerpts;
- `source-audit.json` and `audit-source.py`: all original/imported entities;
- `inspection.json` and `before-save.png`: original reproduction;
- `scenes-1791571688428/`: corrected screenshots and all 437 placement records;
- `unit-tests.log`: bounds, fallback, attachment/save and rendering checks.
