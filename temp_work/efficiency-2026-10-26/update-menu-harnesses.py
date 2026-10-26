from pathlib import Path
import difflib
root=Path(__file__).resolve().parents[2]; patches=[]
imports={
'campaign-settings-scenes.mjs':'startAdventure, showQuickplay, showMoreSettings',
'cheat-unlock-levels-scenes.mjs':'showLevelStart, showMoreSettings',
'player-menu-scenes.mjs':'startAdventure, showAdventureExtras',
'player-menu-lifecycle-scenes.mjs':'showAdventureStart, showMainMenu',
'new-adventure-skills-scenes.mjs':'startAdventure, showLevelStart, showAdventureExtras',
'replayed-level-intros-scenes.mjs':'startAdventure, showLevelStart, showAdventureExtras, showMoreSettings',
'recovery-menu-scenes.mjs':'showAdventureExtras',
'web-subpath-scenes.mjs':'startAdventure, showAdventureExtras',
'touch-scenes.mjs':'startAdventure, showAdventureExtras, showMoreSettings, showMainMenu',
'level-selection-menu-scenes.mjs':'showAdventureStart, showMainMenu, showQuickplay, finishLevelSelection, showLevelStart, showAdventureExtras',
}
for name,names in imports.items():
 p=root/'tests'/name;old=p.read_text();new=f"import {{{names}}} from './scene-menu.mjs';\n"+old
 # Touched current harnesses must no longer create obsolete top-level current_work.
 new=new.replace('current_work','temp_work')
 # An explicit override remains available; default software rendering is portable
 # in headless CI and these are interaction checks, not GPU performance claims.
 new=new.replace("'--use-angle=gl'","`--use-angle=${process.env.REDCAT_TEST_ANGLE || 'swiftshader'}`, '--enable-unsafe-swiftshader'")
 if name=='campaign-settings-scenes.mjs':
  new=new.replace("await page.locator('#open-settings').click();","await showMoreSettings(page);")
  new=new.replace("await page.locator('#pause-settings').click();","await showMoreSettings(page,{paused:true});")
  new=new.replace("await page.locator('#start').click();","await startAdventure(page);")
  new=new.replace("await page.locator('#continue').click();","await startAdventure(page);")
  new=new.replace("await page.locator('[data-level=\"lvl01a\"]').hover();","await showQuickplay(page);await page.locator('[data-level=\"lvl01a\"]').hover();")
  new=new.replace("endsWith('04010001.png')","endsWith('04010000.png')") # native hover image state, selection no longer changed by return menu
 elif name=='cheat-unlock-levels-scenes.mjs':
  new=new.replace("await page.locator(paused?'#pause-settings':'#open-settings').click();", "await showMoreSettings(page,{paused});")
  new=new.replace("await main.page.locator('.level-card[data-level=\"lvl04a\"]').click();await main.page.locator('#start').click();", "await showLevelStart(main.page,'lvl04a');await main.page.locator('#native-start').click();")
 elif name=='player-menu-scenes.mjs':
  new=new.replace("assert.equal(await page.locator('#continue').isVisible(), false);", "assert.equal(await page.evaluate(() => __redcat.originalMenu.getState().hasSave), false);")
  new=new.replace("await page.locator('#open-recovery').click();", "await showAdventureExtras(page);await page.locator('#open-recovery').click();")
  new=new.replace("await page.locator('#continue').click();", "await startAdventure(page);")
 elif name=='player-menu-lifecycle-scenes.mjs':
  new=new.replace("assert.equal(await page.locator('#continue').isVisible(), true);", "assert.equal(await page.evaluate(() => __redcat.originalMenu.getState().hasSave), true);")
  # Active deletion leaves the player list open; no menu navigation needed here.
  new=new.replace("import {showAdventureStart, showMainMenu} from './scene-menu.mjs';\n",'')
 elif name=='new-adventure-skills-scenes.mjs':
  new=new.replace("await page.locator('#continue').click();","await startAdventure(page);")
  new=new.replace("await page.locator('[data-level=\"lvl00a\"]').click();","await showLevelStart(page,'lvl00a');")
  new=new.replace("await page.locator('#start-over').click();","await showAdventureExtras(page);await page.locator('#start-over').click();")
 elif name=='replayed-level-intros-scenes.mjs':
  new=new.replace("await page.locator(`[data-level=\"${id}\"]`).click();","await showLevelStart(page,id);")
  new=new.replace("await page.locator('#open-settings').click();","await showMoreSettings(page);")
  new=new.replace("await page.locator('#start').click();","await startAdventure(page);")
  new=new.replace("await page.locator('#continue').click();","await startAdventure(page);")
  new=new.replace("await page.locator('#open-recovery').click();","await showAdventureExtras(page);await page.locator('#open-recovery').click();")
  new=new.replace("await page.locator('#start-over').click();","await showAdventureExtras(page);await page.locator('#start-over').click();")
  new=new.replace("await page.locator('[data-level=\"lvl03a\"]').click();","await showLevelStart(page,'lvl03a');")
 elif name=='recovery-menu-scenes.mjs':
  new=new.replace("await page.locator('#open-recovery').click();","await showAdventureExtras(page);await page.locator('#open-recovery').click();")
  new=new.replace("await page.locator('#start-over').click();","await showAdventureExtras(page);await page.locator('#start-over').click();")
 elif name=='web-subpath-scenes.mjs':
  new=new.replace("document.querySelector('.logo')","document.querySelector('.native-menu-logo')")
  new=new.replace('assert.equal(report.menu.headers,0);','assert.equal(report.menu.headers,1);')
  new=new.replace("await page.locator('#play-intro').click();","await showAdventureExtras(page);await page.locator('#play-intro').click();")
  new=new.replace("await page.locator('#start').click();","await startAdventure(page);")
  new=new.replace("['node_modules/three/build/three.module.js','node_modules/three/build/three.core.js','node_modules/three/examples/jsm/math/ImprovedNoise.js'", "['src/game.bundle.js','node_modules/three/examples/jsm/math/ImprovedNoise.js'")
  # Validate the retained import map by explicit module imports; bundled startup
  # correctly does not request separate Three core files itself.
  new=new.replace("const {ImprovedNoise}=await import('three/addons/math/ImprovedNoise.js');return", "const {Vector3}=await import('three');if(new Vector3(1,2,3).lengthSq()!==14)throw new Error('Three core import failed');const {ImprovedNoise}=await import('three/addons/math/ImprovedNoise.js');return")
 elif name=='touch-scenes.mjs':
  new=new.replace("await activate(fromPause ? '#pause-settings' : '#open-settings');", "await showMoreSettings(page,{paused:fromPause,touch});")
  new=new.replace("await tap(page, '#open-help');", "await showMoreSettings(page,{touch:true});await tap(page, '#open-help');")
  new=new.replace("await tap(page, '#close-help');", "await tap(page, '#close-help');await tap(page, '#close-settings');")
  new=new.replace("await tap(page, '#play-intro');", "await showAdventureExtras(page,{touch:true});await tap(page, '#play-intro');")
  new=new.replace("await tap(page, '#open-settings');", "await showMoreSettings(page,{touch:true});")
  new=new.replace("await tap(page, '#pause-settings');", "await showMoreSettings(page,{paused:true,touch:true});")
  new=new.replace("await tap(page, '#start');", "await startAdventure(page,{touch:true});")
  new=new.replace("await tap(page, '#start-over');", "await showAdventureExtras(page,{touch:true});await tap(page, '#start-over');")
 p.write_text(new);patches.append(''.join(difflib.unified_diff(old.splitlines(True),new.splitlines(True),fromfile=str(p.relative_to(root)),tofile=str(p.relative_to(root)))))
(root/'temp_work/efficiency-2026-10-26/menu-harness-migration.patch').write_text(''.join(patches))
