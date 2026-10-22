import assert from 'node:assert/strict';
import {spawn} from 'node:child_process';
import {mkdir, writeFile, readFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import {chromium} from 'playwright';

// Source-only menu/input verification. All saves belong to disposable isolated
// profiles; the user's running Chromium profile is never opened or modified.
const base = 'temp_work/native-menu-restoration-2026-10-20/compatibility';
const output = `${base}/run-${new Date().toISOString().replace(/[:.]/g, '-')}`;
await mkdir(output, {recursive: true});
const port = Number(process.env.NATIVE_MENU_TEST_PORT || 4387);
const report = {checks: [], pageErrors: [], badResponses: [], screenshots: [], voices: []};
report.scope=process.env.NATIVE_MENU_CASES||'all';
const check = name => {report.checks.push(name); console.log(`PASS ${name}`);};
const server = spawn(process.execPath, ['tools/serve.mjs'], {
  env: {...process.env, PORT: String(port), TMPDIR: 'temp_work'},
  stdio: ['ignore', 'pipe', 'pipe'],
});
let serverLog = '';
server.stdout.on('data', data => {serverLog += data;});
server.stderr.on('data', data => {serverLog += data;});
await new Promise((ok, fail) => {
  server.stdout.on('data', data => {if (String(data).includes('RedCat:')) ok();});
  server.once('error', fail); server.once('exit', code => fail(new Error(`Server exited ${code}: ${serverLog}`)));
});
let context, page;
const fixtureSave = {
  version: 1, level: 'lvl02a', position: [0, 0, 0], yaw: 0, pitch: 0,
  game: {version: 1, level: 'lvl02a', difficulty: 'Hard', state: {health: 10, score: 1234, skill: 6}},
};
async function launch(label, saved) {
  context = await chromium.launchPersistentContext(resolve(output, `${label}-profile`), {
    executablePath: process.env.CHROME_PATH || '/usr/bin/google-chrome',
    headless: true, viewport: {width: 1280, height: 900}, deviceScaleFactor: 1,
    downloadsPath: resolve(output, 'downloads'), acceptDownloads: true,
    hasTouch: true, env: {...process.env, TMPDIR: 'temp_work'},
    args: ['--use-angle=swiftshader', '--enable-unsafe-swiftshader', '--autoplay-policy=no-user-gesture-required'],
  });
  await context.addInitScript(({saved, fixtureSave}) => {
    if (localStorage.getItem('native-menu-fixture')) return;
    localStorage.setItem('native-menu-fixture', '1');
    localStorage.setItem('redcat.settings.v1', JSON.stringify({
      autoIntro: false, fullscreen: false, volume: 0, touchControls: 'on',
      resolution: 'native', renderScale: 25,
    }));
    if (saved) {
      localStorage.setItem('redcat.save.v1', JSON.stringify(fixtureSave));
      localStorage.setItem('redcat.progress.v1', JSON.stringify({
        version: 1, highestUnlocked: 2, earnedSkills: 6, playedLevels: ['lvl00a', 'lvl01a', 'lvl02a'],
      }));
    }
  }, {saved, fixtureSave});
  page = await context.newPage();
  page.on('pageerror', error => report.pageErrors.push({label, message: String(error)}));
  page.on('response', response => {
    if (response.status() >= 400) report.badResponses.push({label, url: response.url(), status: response.status()});
  });
  await page.goto(`http://127.0.0.1:${port}/?skipIntro`);
  await page.waitForFunction(() => window.__redcat?.playerMenu, null, {timeout: 30000});
  await page.evaluate(() => {
    window.__menuVoiceCalls = [];
    // Test UI routing without waiting through every original spoken sentence.
    // MenuAudio's actual completion/cancellation remains covered by unit tests.
    window.__redcat.playerMenu.audio.say = async files => {window.__menuVoiceCalls.push([...files]); return true;};
  });
  assert.equal(await menuPage(), 'home');
}
async function closeContext(label) {
  report.voices.push({label, calls: await page.evaluate(() => window.__menuVoiceCalls || [])});
  await context.close(); context = null; page = null;
}
async function menuPage() {return page.locator('.native-menu-frame').getAttribute('data-page');}
async function expectPage(name) {
  await page.waitForFunction(name => document.querySelector('.native-menu-frame')?.dataset.page === name, name);
}
async function screenshot(name) {
  const path = `${output}/${name}.png`;
  await page.screenshot({path}); report.screenshots.push(path);
}
async function home() {
  for (let attempts = 0; await menuPage() !== 'home' && attempts < 6; attempts++) {
    await page.locator('#native-previous').click();
  }
  await expectPage('home');
}
async function chooseHome(choice) {
  await home(); await page.locator(`[data-menu-choice="${choice}"]`).click();
  await page.locator('#native-next').click();
}
async function range(id, value) {
  await page.locator(`#${id}`).evaluate((element, value) => {
    element.value = String(value);
    element.dispatchEvent(new Event('input', {bubbles: true}));
    element.dispatchEvent(new Event('change', {bubbles: true}));
  }, value);
}
async function expandExtraSettings() {
  const details = page.locator('#native-settings-advanced');
  if (await details.count() && !await details.evaluate(element => element.open)) await page.locator('#open-advanced-settings').click();
}
async function requireInViewport(selector, name) {
  await page.locator(selector).scrollIntoViewIfNeeded();
  const box = await page.locator(selector).boundingBox();
  const viewport = page.viewportSize();
  assert.ok(box && box.width > 0 && box.height > 0, `${name} has visible dimensions`);
  assert.ok(box.x >= -1 && box.y >= -1 &&
    box.x + box.width <= viewport.width + 1 && box.y + box.height <= viewport.height + 1,
  `${name} fits ${viewport.width}×${viewport.height}: ${JSON.stringify(box)}`);
}
async function checkedImages() {
  const broken = await page.locator('#menu img').evaluateAll(images => images
    .filter(image => image.getClientRects().length && (!image.complete || !image.naturalWidth))
    .map(image => image.src));
  assert.deepEqual(broken, [], 'visible original menu artwork loads');
}

try {
  if(report.scope!=='fresh'){
  await launch('saved-adventure', true);
  const rawSave = await page.evaluate(() => localStorage.getItem('redcat.save.v1'));
  const unchanged = async () => assert.equal(await page.evaluate(() => localStorage.getItem('redcat.save.v1')), rawSave);
  await screenshot('home-desktop');
  await checkedImages();
  await page.locator('#native-help').click();
  await page.locator('#native-help-content h2').waitFor();
  assert.equal(await page.locator('#native-help-content h2').textContent(),'Hoofdmenu');
  assert.equal(await page.locator('#native-help-topics [data-topic]').count(),38);
  await page.locator('#native-help-search').fill('geluidseffecten');
  assert.ok(await page.locator('#native-help-topics [data-topic]').count()>0);
  assert.ok(await page.locator('#native-help-topics [data-topic]').count()<38);
  await page.locator('#native-help-topics [data-topic="h_soundeffects"]').click();
  assert.match(await page.locator('#native-help-content').textContent(),/geluidseffecten/);
  await page.locator('#native-help-back').click();
  assert.equal(await page.locator('#native-help-content h2').textContent(),'Hoofdmenu');
  await page.locator('#native-help-close').click();
  check('Original Help exposes all 38 topics, searches their text, and navigates back to the contextual topic.');

  await chooseHome('quickplay'); await expectPage('quickplay');
  assert.equal(await page.locator('.level-card:disabled').count(), 2);
  for (const level of ['lvl00a', 'lvl01a', 'lvl02a']) {
    await page.locator(`[data-level="${level}"]`).click();
    assert.equal(await page.locator('#new-adventure-warning').evaluate(element => element.open), false);
    assert.equal(await page.locator(`[data-level="${level}"]`).getAttribute('aria-pressed'), 'true');
    await unchanged();
  }
  await screenshot('quickplay-desktop');
  await page.locator('#native-next').click(); await expectPage('difficulty');
  await page.locator('[data-difficulty="Easy"]').click();
  await page.locator('#native-next').click(); await expectPage('startinfo');
  assert.equal(await page.locator('#native-start-level').textContent(), 'Het Kerkhof');
  assert.equal(await page.locator('#native-start-difficulty').textContent(), 'Makkelijk');
  assert.equal(await page.locator('#play-level').isVisible(), true);
  await screenshot('startinfo-replay');
  await page.locator('#play-level').click();
  await page.locator('#new-adventure-warning').waitFor({state: 'visible'});
  await unchanged();
  await page.locator('#cancel-new-adventure').click();
  await unchanged();
  check('Home → Snelspel → difficulty → Startinfo; selection only announces; replay confirmation preserves the existing save when cancelled.');

  await chooseHome('adventure');
  await expectPage('startinfo');
  assert.equal(await page.locator('#native-start-level').textContent(), 'Het Kerkhof');
  assert.equal(await page.locator('#native-start-difficulty').textContent(), 'Moeilijk');
  await unchanged();
  check('Continuing an adventure previews its saved chapter and saved difficulty.');

  await page.locator('#start-over').click();
  for (let attempts = 0; !await page.locator('#new-adventure-warning').evaluate(element => element.open) && attempts < 4; attempts++) {
    const current = await menuPage();
    if (current === 'startinfo') await page.locator('#native-start').click();
    else await page.locator('#native-next').click();
  }
  await page.locator('#new-adventure-warning').waitFor({state: 'visible'});
  await page.locator('#cancel-new-adventure').click(); await unchanged();
  check('Opnieuw retains explicit overwrite confirmation and cancellation leaves the old save intact.');

  await home();
  await page.locator('#open-players').click();
  await page.locator('#player-add').click();
  await page.locator('#player-name-dialog').waitFor({state: 'visible'});
  await page.locator('#player-name').fill('Menu Test');
  await page.locator('#player-name-save').click();
  const newId = await page.locator('#player-choices [aria-pressed="true"]').getAttribute('data-player-id');
  assert.ok(newId && newId !== 'legacy');
  await page.locator('#player-select').click();
  await page.waitForFunction(id => __redcat.profiles.activeId === id && !document.querySelector('#player-list').open, newId);
  await expectPage('home');
  await chooseHome('adventure');
  assert.equal(await menuPage(), 'difficulty', 'new player starts with difficulty selection');
  await home();
  await page.locator('#open-players').click();
  await page.locator('[data-player-id="legacy"]').click();
  await page.locator('#player-select').click();
  await page.waitForFunction(() => __redcat.profiles.activeId === 'legacy' && !document.querySelector('#player-list').open);
  await unchanged();
  await page.evaluate(({id,save})=>{
    save.level='lvl00a';save.game.level='lvl00a';save.game.state.score=543;
    localStorage.setItem(__redcat.profiles.key('redcat.save.v1',id),JSON.stringify(save));
  },{id:newId,save:fixtureSave});
  await page.locator('#open-players').click();
  await page.locator(`[data-player-id="${newId}"]`).click();
  const downloadEvent=page.waitForEvent('download');
  await page.locator('#player-export').click();
  const download=await downloadEvent;
  const exportPath=resolve(output,'export-inactive-player.json');
  await download.saveAs(exportPath);
  const bundle=JSON.parse(await readFile(exportPath,'utf8'));
  assert.equal(bundle.format,'redcat-spookkasteel-save');
  assert.equal(bundle.player.name,'Menu Test');
  assert.equal(bundle.save.game.state.score,543);
  assert.equal(bundle.save.level,'lvl00a');
  assert.equal(await page.evaluate(()=>__redcat.profiles.activeId),'legacy');
  await unchanged();
  check('Exporteren downloads the selected inactive player’s complete JSON without switching players or replacing the active save.');
  await page.locator('#player-remove').click();
  await page.locator('#player-delete-dialog').waitFor({state: 'visible'});
  await page.locator('#player-delete-yes').click();
  await page.locator('#player-delete-dialog').waitFor({state: 'hidden'});
  await page.locator('#player-cancel').click();
  await unchanged();
  check('Spelerlijst create/select/delete keeps the original profile and its saved adventure separate.');

  await chooseHome('highscores');
  await expectPage('highscores');
  assert.ok(await page.locator('#native-score-table tbody tr').count() > 0);
  await screenshot('highscores-desktop');
  await home();
  await page.locator('#open-quit').click();
  await page.locator('#quit-confirmation').waitFor({state: 'visible'});
  await page.locator('#quit-no').click();
  assert.equal(await page.locator('#quit-confirmation').evaluate(element => element.open), false);
  await unchanged();
  check('Highscores displays rows and Stoppen → Nee returns without changing saves.');

  for (const [width, height] of [[800, 600], [390, 844], [844, 390]]) {
    await page.setViewportSize({width, height});
    for (const selector of ['#open-settings', '#open-players', '#open-quit', '#native-help', '#native-next']) {
      await requireInViewport(selector, selector);
    }
    await screenshot(`home-${width}x${height}`);
    await chooseHome('quickplay');
    for (const level of ['lvl00a', 'lvl01a', 'lvl02a']) await requireInViewport(`[data-level="${level}"]`, level);
    await screenshot(`quickplay-${width}x${height}`);
    await home();
  }
  check('Original home and unlocked level cards remain reachable at 800×600, portrait and landscape mobile sizes.');
  await closeContext('saved-adventure');
  }

  await launch('fresh-adventure', false);
  await page.locator('#open-settings').click();
  await page.locator('#native-settings-help').click();
  await page.locator('#native-help-content h2').waitFor();
  assert.equal(await page.locator('#native-help-content h2').textContent(),'Instellingenmenu');
  await page.locator('#native-help-close').click();
  await expandExtraSettings();
  const settingsIds = ['touch-controls-setting', 'difficulty', 'resolution', 'render-scale', 'show-fps', 'fullscreen',
    'camera-mode', 'fov', 'sensitivity', 'volume', 'volume-effects', 'volume-music', 'auto-intro', 'open-cheats',
    'open-help', 'open-about', 'open-key-settings'];
  for (const id of settingsIds) assert.equal(await page.locator(`#${id}`).count(), 1, `retained setting ${id}`);
  await page.locator('#touch-controls-setting').selectOption('on');
  await page.locator('#resolution').selectOption('native');
  await range('render-scale', 25);
  await range('fov', 70);
  await range('sensitivity', 1.2);
  await range('volume-effects', .45);
  await range('volume-music', .25);
  await page.locator('#show-fps').check();
  await page.locator('#fullscreen').uncheck();

  await page.locator('#open-key-settings').click();
  await page.locator('#key-binding-jump').click();
  await page.keyboard.press('KeyE');
  assert.match(await page.locator('#key-binding-status').textContent(), /al gebruikt/);
  await page.keyboard.press('Escape');
  assert.equal(await page.locator('#key-settings').evaluate(element => element.open), true, 'Escape cancels capture first');
  await page.locator('#key-binding-jump').click(); await page.keyboard.press('KeyZ');
  await page.locator('#cancel-key-settings').click();
  await page.locator('#open-key-settings').click();
  assert.equal(await page.locator('#key-binding-jump').textContent(), 'Spatie', 'Cancel discards draft');
  await page.locator('#key-binding-jump').click(); await page.keyboard.press('KeyZ');
  await page.locator('#key-binding-use').click(); await page.keyboard.press('KeyR');
  await page.locator('#key-binding-camera').click(); await page.keyboard.press('KeyC');
  await page.locator('#apply-key-settings').click();
  await page.locator('#key-settings').waitFor({state: 'hidden'});
  await page.locator('#apply-settings').click();
  const settings = await page.evaluate(() => JSON.parse(localStorage.getItem('redcat.settings.v1')));
  assert.equal(settings.effectsVolume, .45); assert.equal(settings.musicVolume, .25);
  assert.equal(settings.fov, 70); assert.equal(settings.sensitivity, 1.2);
  assert.equal(settings.touchControls, 'on'); assert.equal(settings.showFps, true);
  assert.deepEqual(settings.controlBindings.jump, ['KeyZ']);
  assert.deepEqual(settings.controlBindings.use, ['KeyR']);
  await page.locator('#open-settings').click();
  await page.locator('#open-key-settings').click();
  assert.equal(await page.locator('#key-binding-jump').textContent(), 'Z');
  assert.equal(await page.locator('#key-binding-use').textContent(), 'R');
  assert.equal(await page.locator('#key-binding-camera').textContent(), 'C');
  await screenshot('key-settings');
  await page.locator('#cancel-key-settings').click();
  await page.locator('#close-settings').click();
  check('All added settings remain present; independent volume and graphics preferences save; key remapping validates duplicates, discards Cancel, and applies OK.');

  await chooseHome('adventure'); await expectPage('difficulty');
  await page.locator('[data-difficulty="Normal"]').click();
  await page.locator('#native-next').click(); await expectPage('startinfo');
  assert.equal(await page.locator('#native-start-level').textContent(), 'Het Bos');
  assert.equal(await page.locator('#new-adventure-warning').evaluate(element => element.open), false);
  await page.locator('#native-start').click();
  await page.waitForFunction(() => __redcat.mode === 'playing' || __redcat.mode === 'error', null, {timeout: 120000});
  assert.equal(await page.evaluate(() => __redcat.mode), 'playing');
  assert.equal(await page.evaluate(() => __redcat.world.id), 'lvl00a');
  check('A fresh adventure starts the real Forest through the restored menu without an overwrite warning.');

  // Isolate input from long authored opening cinematics; this is a menu/input
  // regression fixture and does not claim a new campaign playthrough.
  await page.evaluate(() => {
    const app = __redcat;
    for (const player of app.gameplay.scripts.players.values()) player.stop();
    app.gameplay.scripts.cutscene = false;
    app.gameplay.scripts.update = () => {};
    app.audio.pause();
  });
  await page.waitForFunction(() => !__redcat.touchControls.context.cutscene);
  await page.keyboard.down('KeyZ');
  assert.equal(await page.evaluate(() => __redcat.readInput().jump), true);
  await page.keyboard.up('KeyZ');
  await page.keyboard.down('Space');
  assert.equal(await page.evaluate(() => __redcat.readInput().jump), false);
  await page.keyboard.up('Space');
  await page.keyboard.down('KeyR');
  assert.equal(await page.evaluate(() => __redcat.readInput().use), true);
  await page.keyboard.up('KeyR');
  await page.keyboard.down('KeyW');
  assert.equal(await page.evaluate(() => __redcat.readInput().forward), 1);
  await page.keyboard.up('KeyW');
  for (const selector of ['#touch-move', '#touch-jump', '#touch-attack', '#touch-camera', '#touch-walk', '#game-menu']) {
    assert.equal(await page.locator(selector).isVisible(), true, selector);
  }
  await page.setViewportSize({width: 844, height: 390});
  for (const selector of ['#touch-move', '#touch-jump', '#touch-attack', '#touch-camera', '#touch-walk', '#game-menu']) {
    await requireInViewport(selector, selector);
  }
  const jump = await page.locator('#touch-jump').boundingBox();
  await page.mouse.move(jump.x + jump.width / 2, jump.y + jump.height / 2);
  await page.mouse.down();
  assert.equal(await page.evaluate(() => __redcat.readInput().jump), true, 'touch input is independent of keyboard remap');
  await page.mouse.up();
  await screenshot('touch-gameplay-landscape');
  await page.locator('#game-menu').click();
  assert.equal(await page.evaluate(() => __redcat.mode), 'paused');
  for (const selector of ['#resume', '#save', '#load-save', '#pause-recovery', '#pause-settings']) {
    assert.equal(await page.locator(selector).isVisible(), true);
  }
  await page.locator('#return-menu').click(); await expectPage('home');
  assert.equal(await page.evaluate(() => __redcat.mode), 'menu');
  check('Remapped gameplay keys and untouched WASD work; touch controls stay visible and functional; Menu retains pause/save/load/settings and returns home.');
  await closeContext('fresh-adventure');

  assert.deepEqual(report.pageErrors, []);
  assert.deepEqual(report.badResponses, []);
  report.passed = true;
} catch (error) {
  report.failure = error.stack || String(error);
  if (page) {
    await screenshot('failure').catch(() => {});
    report.finalState = await page.evaluate(() => ({
      mode: window.__redcat?.mode,
      page: document.querySelector('.native-menu-frame')?.dataset.page,
      openDialogs: [...document.querySelectorAll('dialog[open]')].map(element => element.id),
      fatal: document.querySelector('#fatal-message')?.textContent,
    })).catch(() => null);
  }
  throw error;
} finally {
  await writeFile(`${output}/report.json`, JSON.stringify(report, null, 2) + '\n');
  await writeFile(`${output}/server.log`, serverLog);
  await context?.close(); server.kill();
  console.log(`Report: ${output}/report.json`);
}
