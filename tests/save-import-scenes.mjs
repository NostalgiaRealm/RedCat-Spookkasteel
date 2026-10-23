import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir, writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const out = 'temp_work/save-import-2026-10-22';
await mkdir(out, {recursive: true}); process.env.TMPDIR = out;
const server = spawn(process.execPath, ['tools/serve.mjs'], {env: {...process.env, PORT: '0'}, stdio: ['ignore', 'pipe', 'inherit']});
const url = await new Promise((ok, fail) => {
  let output = '';
  server.stdout.on('data', data => {output += data; const match = output.match(/http:\/\/127\.0\.0\.1:\d+/); if (match) ok(match[0]);});
  server.once('error', fail); server.once('exit', code => fail(new Error(`Server exited: ${code}`)));
});
let browser; const errors = [], checks = [];
try {
  browser = await chromium.launch({executablePath: process.env.CHROME_PATH || '/usr/bin/google-chrome', headless: true,
    args: ['--use-angle=swiftshader', '--enable-unsafe-swiftshader', '--autoplay-policy=no-user-gesture-required']});
  const context = await browser.newContext({viewport: {width: 844, height: 390}});
  const page = await context.newPage(); page.setDefaultTimeout(30000);
  page.on('pageerror', error => errors.push(String(error)));
  await page.addInitScript(() => {
    if (!localStorage.getItem('redcat.settings.v1')) localStorage.setItem('redcat.settings.v1', JSON.stringify({autoIntro: false, fullscreen: false, touchControls: 'on'}));
  });
  await page.goto(url + '/?skipIntro'); await page.waitForFunction(() => window.__redcat);
  await page.evaluate(() => {__redcat.playerMenu.audio.say = async () => true;});
  await page.evaluate(async () => {await __redcat.startLevel(0); __redcat.pause();});
  const exported = await page.evaluate(async () => {
    const {createSaveExport} = await import('./src/save-export.js');
    __redcat.gameplay.state.score = 111;
    __redcat.saveGame(true); await __redcat.recovery.flush();
    return createSaveExport({playerName: 'Backup', save: JSON.parse(localStorage.getItem('redcat.save.v1')),
      progress: JSON.parse(localStorage.getItem('redcat.progress.v1')), options: {difficulty: 'hard', noClip: false}});
  });
  await page.locator('#return-menu').click();
  const before = await page.evaluate(async () => {
    __redcat.gameplay.state.score = 999; __redcat.saveGame(true); await __redcat.recovery.flush();
    const other = __redcat.profiles.create('Andere');
    return {other, save: localStorage.getItem('redcat.save.v1'), shared: localStorage.getItem('redcat.settings.v1'), recovery: JSON.stringify(__redcat.recovery.state)};
  });
  const pick = async text => {
    const chooserPromise = page.waitForEvent('filechooser'); await page.locator('#player-import').click();
    const chooser = await chooserPromise;
    await chooser.setFiles(text === null ? [] : {name: 'RedCat-backup.json', mimeType: 'application/json', buffer: Buffer.from(text)});
    if (text === null) await page.locator('input[data-save-import]').evaluate(input => input.dispatchEvent(new Event('cancel'))).catch(() => {});
    await page.waitForFunction(() => !__redcat.playerMenu.busy);
  };
  const primary = () => page.evaluate(() => localStorage.getItem('redcat.save.v1'));
  await page.locator('#open-players').click();
  await pick(null); assert.equal(await primary(), before.save);
  await pick('{broken'); assert.equal(await primary(), before.save);
  assert.equal(await page.locator('#player-import-dialog').evaluate(d => d.open), false);
  checks.push('Canceled picker and malformed file leave the saved adventure intact');
  await pick(exported.text);
  assert.equal(await primary(), before.save, 'reading a backup must not commit it');
  assert.match(await page.locator('#player-import-question').textContent(), /Backup/);
  await page.locator('#player-import-no').click(); assert.equal(await primary(), before.save);
  checks.push('Import requires explicit confirmation');

  await page.locator(`[data-player-id="${before.other.id}"]`).click(); await pick(exported.text);
  await page.locator('#player-import-yes').click(); await page.waitForFunction(() => !__redcat.playerMenu.busy);
  assert.equal(await primary(), before.save);
  assert.equal(await page.evaluate(() => __redcat.profiles.activeId), 'legacy');
  assert.equal(await page.evaluate(() => __redcat.gameplay.state.score), 999);
  assert.equal(await page.evaluate(id => JSON.parse(localStorage.getItem(__redcat.profiles.key('redcat.save.v1', id))).game.state.score, before.other.id), 111);
  checks.push('Import into another player neither switches profiles nor changes the live adventure');

  await page.locator('[data-player-id="legacy"]').click(); await pick(exported.text);
  for (const viewport of [{width: 844, height: 390}, {width: 320, height: 568}]) {
    await page.setViewportSize(viewport);
    await page.locator('#player-import-yes').scrollIntoViewIfNeeded();
    const bounds = await page.locator('#player-import-yes').boundingBox();
    assert(bounds.x >= 0 && bounds.x + bounds.width <= viewport.width && bounds.y >= 0 && bounds.y + bounds.height <= viewport.height);
    assert.equal(await page.evaluate(() => document.documentElement.scrollWidth <= innerWidth), true);
  }
  await page.setViewportSize({width: 844, height: 390});
  await page.evaluate(async () => {
    const storage = __redcat.recovery.storage, write = storage.write.bind(storage);
    const gate = new Promise(resolve => {window.__releaseImportRecovery = resolve;});
    storage.write = async state => {
      // Capture the complete pending record: import must retain this last
      // checkpoint too after draining the write, not only the older state.
      window.__pendingImportRecovery = JSON.stringify(state);
      await gate; return write(state);
    };
    __redcat.recovery.advance(60); __redcat.saveGame(true);
  });
  await page.locator('#player-import-yes').click();
  assert.equal(await page.evaluate(() => __redcat.playerMenu.busy), true);
  assert.equal(await page.evaluate(() => __redcat.saveGame(true)), false, 'pending import blocks stale writes');
  await page.keyboard.press('Escape'); assert.equal(await page.locator('#player-import-dialog').evaluate(d => d.open), true);
  await page.evaluate(() => __releaseImportRecovery());
  await page.waitForFunction(() => !__redcat.playerMenu.busy);
  assert.equal(await page.evaluate(() => __redcat.world), null);
  assert.equal(await page.evaluate(() => __redcat.saveGame(true)), false, 'retired world cannot overwrite import');
  assert.equal(JSON.parse(await primary()).game.state.score, 111);
  assert.equal(await page.evaluate(() => JSON.stringify(__redcat.recovery.state)),
    await page.evaluate(() => __pendingImportRecovery));
  assert.equal(await page.evaluate(() => __redcat.recovery.state.checkpoints.at(-1).save.game.state.score), 999);
  assert.equal(await page.evaluate(() => localStorage.getItem('redcat.settings.v1')), before.shared);
  checks.push('Active import drains pending captures, retires the old world and keeps recovery history and global settings');

  await page.locator('#player-select').click();
  await page.waitForFunction(() => !document.querySelector('#player-list').open);
  await page.locator('#native-next').click(); await page.waitForFunction(() => !document.querySelector('#native-start').hidden);
  assert.equal(await page.locator('#native-start-score').textContent(), '111');
  await page.locator('#native-start').click();
  await page.waitForFunction(() => __redcat.mode === 'playing', null, {timeout: 60000});
  await page.evaluate(() => __redcat.pause());
  assert.equal(await page.evaluate(() => __redcat.gameplay.state.score), 111);
  checks.push('Imported full engine snapshot starts through the ordinary adventure menu');
  await page.locator('#return-menu').click(); await page.reload(); await page.waitForFunction(() => window.__redcat);
  assert.equal(JSON.parse(await primary()).game.state.score, 111);
  assert.equal(await page.evaluate(id => JSON.parse(localStorage.getItem(__redcat.profiles.key('redcat.save.v1', id))).game.state.score, before.other.id), 111);
  checks.push('Both imported player saves survive a browser reload');
  const olderTab = await context.newPage(); olderTab.on('pageerror', error => errors.push(String(error)));
  await olderTab.goto(url + '/?skipIntro'); await olderTab.waitForFunction(() => window.__redcat);
  await olderTab.evaluate(async () => {await __redcat.loadSave(); __redcat.pause(); __redcat.gameplay.state.score = 2222;});
  const previousLoad = await olderTab.evaluate(() => performance.timeOrigin);
  await page.evaluate(() => {__redcat.playerMenu.audio.say = async () => true;});
  await page.locator('#open-players').click(); await pick(exported.text); await page.locator('#player-import-yes').click();
  await page.waitForFunction(() => !__redcat.playerMenu.busy);
  await olderTab.waitForFunction(previous => performance.timeOrigin !== previous && window.__redcat, previousLoad);
  assert.equal(await olderTab.evaluate(() => __redcat.world), null);
  assert.equal(JSON.parse(await primary()).game.state.score, 111);
  checks.push('An older game tab reloads safely and cannot overwrite the imported adventure');
  assert.deepEqual(errors, []);
  await writeFile(`${out}/browser-report.json`, JSON.stringify({passed: true, checks, errors}, null, 2) + '\n');
  console.log(checks.join('\n'));
} finally {await browser?.close(); server.kill();}
