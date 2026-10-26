from pathlib import Path
root=Path.cwd()
def edit(name,pairs):
 p=root/name;s=p.read_text()
 for old,new in pairs:
  if old not in s:raise SystemExit(f'Missing expected text in {name}: {old[:80]}')
  s=s.replace(old,new)
 p.write_text(s)
edit('docs/intentional-fixes-and-findings.md',[(
 'There is no second **Avontuur/Snelspel** mode selector.',
 'The restored **Avontuur/Snelspel** menu routes share one campaign/save system rather than independent game modes; visited-level history determines replay behavior.')])
edit('docs/campaign-menu-native.md',[(
 '**Instellingen → Cheats → Alle levels vrijspelen**',
 '**Instellingen → Meer instellingen → Cheats → Alle levels vrijspelen**'),(
 'migration, difficulty controls and one-minute autosave. Screenshots are saved in\n`artifacts/campaign-menu-{locked,unlocked}.png` and\n`artifacts/difficulty-settings.png`. No browser/HTTP errors occurred.',
 'migration, difficulty controls and one-minute autosave. It follows the current\noriginal-menu page flow. Each run retains its report and captures in\n`temp_work/campaign-settings-scenes/run-<timestamp>/`. The corresponding\nfocused run passed again on 26 October 2026 without browser/HTTP errors.'),(
 'Evidence is retained in `temp_work/new-adventure-skills-2026-10-03/`.',
 'Original feature evidence is retained in\n`temp_work/new-adventure-skills-2026-10-03/`. Current-menu runs write to\n`temp_work/new-adventure-skills-scenes/run-<timestamp>/`; the 26 October 2026\nrun passed using the restored menu controls.'),(
 'Historical flat-menu verification: `node tests/new-adventure-warning-scenes.mjs`. This checked',
 'Historical flat-menu verification: `tests/new-adventure-warning-scenes.mjs`. This checked'),(
 'Those historical selectors and primary-button colors predate the restored\noriginal menu.',
 'Those historical selectors and primary-button colors predate the restored\noriginal menu. That script now stops immediately with directions to the current\nchecks; its explicit `--historical-flat-menu` opt-in is only for an old source\nsnapshot, not the present menu.')])
edit('docs/player-profiles-native.md',[(
 'Implemented in the source, without generating new packages. Open **Spelerlijst**',
 'Open **Spelerlijst**'),(
 'an eight-player list in short landscape and portrait windows. Evidence is retained in\n`temp_work/player-profiles/`. No original user saves are changed by these checks.',
 'an eight-player list in short landscape and portrait windows. These scene\nchecks use the shared [current-menu navigation helper](../tests/scene-menu.mjs).\nBoth passed again on 26 October 2026. Each run retains its report and captures\nin `temp_work/player-menu-scenes/run-<timestamp>/` or\n`temp_work/player-menu-lifecycle-scenes/run-<timestamp>/`; original feature\nevidence remains in `temp_work/player-profiles/`. No original user saves are\nchanged by these checks.')])
edit('docs/autosave.md',[(
 'application/browser storage. **Verder spelen**, **Opgeslagen avontuur laden**,\nand F9 still load that current save.',
 'application/browser storage. In the original menu, choose **Avontuur →\nVolgende → Start!** to continue it. **Opgeslagen avontuur laden** in the pause\nmenu and F9 also load that current save.'),(
 'Choose **Eerder opgeslagen avontuur laden** from the main menu or pause menu.',
 'From the main menu, choose **Avontuur → Volgende → Meer opties → Eerder\nopgeslagen avontuur laden** (a new player also passes through Moeilijkheid).\nThe pause menu offers **Eerder opgeslagen avontuur laden** directly.'),(
 'The browser check uses real IndexedDB',
 'The recovery browser check follows the current original-menu flow through\n[shared navigation helpers](../tests/scene-menu.mjs), writing evidence to\n`temp_work/recovery-menu-scenes/run-<timestamp>/`. It passed again on\n26 October 2026. It uses real IndexedDB')])
p=root/'docs/original-menu-native.md';s=p.read_text()
s=s.replace('real OS dialog and an Android device/document provider still needs platform\nvalidation.', 'real desktop OS dialog and a physical Android device/document provider still\nneed target-device validation. Later Android debug-emulator checks and release\nartifact boundaries are listed in [platform status](portability.md); they are\nnot a claim of physical-device provider verification.')
s+='''

## Maintaining current menu scene checks

The menu was restored after several earlier browser tests were written. Active
scene checks now share [tests/scene-menu.mjs](../tests/scene-menu.mjs), which
navigates the visible Hoofdmenu, Snelspel, Moeilijkheid, Startinfo, Meer opties
and Meer instellingen controls using normal clicks or touch taps. It does not
change game storage or bypass menu handlers. Avoid reintroducing the removed
flat-menu `#start`/`#continue` controls just to satisfy an old test.

Choose only the check for the changed feature:

| Concern | Current scene check |
| --- | --- |
| Chapter selection and delayed overwrite warning | `node tests/level-selection-menu-scenes.mjs` |
| Player separation, voices, switching and deletion | `node tests/player-menu-scenes.mjs`, `node tests/player-menu-lifecycle-scenes.mjs` |
| New-adventure ability reset and cancellation | `node tests/new-adventure-skills-scenes.mjs` |
| Tutorial suppression for replayed chapters | `node tests/replayed-level-intros-scenes.mjs` |
| Recovery-save loading and timeline retention | `node tests/recovery-menu-scenes.mjs` |
| Chapter unlocks, difficulty and automatic saving | `node tests/campaign-settings-scenes.mjs` |
| Explicit unlock cheat | `node tests/cheat-unlock-levels-scenes.mjs` |
| Actual touch input and menu navigation | `node tests/touch-scenes.mjs` |
| Browser hosting beneath a URL prefix | `node tests/web-subpath-scenes.mjs` |

These scripts keep each run's browser profile, reports and captures in
`temp_work/<test-name>/run-<timestamp>/`. They default to a software WebGL
renderer for reproducible headless functional checks; `REDCAT_TEST_ANGLE`
selects another backend when appropriate. Their timings are not hardware
performance measurements, and these tests do not validate packaged releases.

`tests/new-adventure-warning-scenes.mjs` preserves the old flat-menu
presentation assertions as historical evidence. Running it normally now fails
immediately with current-check pointers instead of launching a browser and
waiting for controls that no longer exist. Its explicit historical opt-in is
only for an old source snapshot. The `#start` in
`tests/pickup-audio-tail-scenes.mjs` is a button in that test's deliberately
isolated audio fixture and remains valid; it is not the removed game menu.
'''
p.write_text(s)
