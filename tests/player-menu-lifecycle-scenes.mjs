import {createSceneOutput} from './scene-menu.mjs';
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir, writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import assert from 'node:assert/strict';

const out = createSceneOutput('player-menu-lifecycle-scenes');
await mkdir(out, {recursive: true});
const server = spawn(process.execPath, ['tools/serve.mjs'], {env: {...process.env, PORT: '4294'}, stdio: ['ignore', 'pipe', 'inherit']});
await new Promise((ok, fail) => {server.stdout.once('data', ok); server.once('error', fail);});
let context; const errors = [];
try {
  context = await chromium.launchPersistentContext(resolve(out, `lifecycle-profile-${Date.now()}`), {
    executablePath: process.env.CHROME_PATH || '/usr/bin/google-chrome', headless: true,
    viewport: {width: 844, height: 390}, args: ['--use-angle=swiftshader', '--enable-unsafe-swiftshader', '--autoplay-policy=no-user-gesture-required'],
  });
  const page = await context.newPage(); page.on('pageerror', error => errors.push(String(error)));
  await page.addInitScript(() => {
    localStorage.setItem('redcat.settings.v1', JSON.stringify({autoIntro: false, fullscreen: false, touchControls: 'on'}));
  });
  await page.goto('http://127.0.0.1:4294/?skipIntro'); await page.waitForFunction(() => window.__redcat);
  // Native recordings were checked separately. This scenario isolates pending
  // writes, active deletion, and the full eight-player layout.
  await page.evaluate(() => {__redcat.playerMenu.audio.say = async () => true;});
  await page.evaluate(async () => {await __redcat.startLevel(0); __redcat.pause();});
  await page.locator('#return-menu').click();
  const next = await page.evaluate(async () => {
    const app = __redcat; await app.recovery.flush();
    const next = app.profiles.create('Eva');
    const storage = app.recovery.storage, write = storage.write.bind(storage);
    const gate = new Promise(resolve => {window.__releaseRecovery = resolve;});
    storage.write = async state => {await gate; return write(state);};
    app.recovery.advance(60); app.gameplay.state.score = 4321;
    app.saveGame(true); return next;
  });
  await page.locator('#open-players').click(); await page.locator(`[data-player-id="${next.id}"]`).click();
  await page.locator('#player-select').click();
  assert.equal(await page.evaluate(() => __redcat.playerMenu.busy), true);
  assert.equal(await page.evaluate(() => __redcat.profiles.activeId), 'legacy', 'switch must drain original writes before committing');
  assert.equal(await page.evaluate(() => __redcat.saveGame(true)), false, 'in-flight switch blocks stray saves');
  await page.keyboard.press('Escape'); assert.equal(await page.locator('#player-list').evaluate(d => d.open), true);
  await page.evaluate(() => __releaseRecovery());
  await page.waitForFunction(id => __redcat.profiles.activeId === id && !document.querySelector('#player-list').open, next.id);
  assert.equal(await page.evaluate(() => JSON.parse(localStorage.getItem('redcat.save.v1')).game.state.score), 4321);
  assert.equal(await page.evaluate(() => localStorage.getItem(__redcat.profiles.key('redcat.save.v1'))), null);
  assert.equal(await page.evaluate(() => __redcat.recovery.state.checkpoints.length), 0);

  // Deleting the currently selected player first selects another owner, closes
  // that player's database, then cleans only the removed player's data.
  await page.locator('#open-players').click(); await page.locator('#player-remove').click();
  await page.locator('#player-delete-yes').click();
  await page.waitForFunction(() => !document.querySelector('#player-delete-dialog').open);
  assert.equal(await page.evaluate(() => __redcat.profiles.activeId), 'legacy');
  assert.equal(await page.evaluate(() => __redcat.recovery.state.checkpoints.at(-1).save.game.state.score), 4321);
  assert.equal(await page.evaluate(() => __redcat.originalMenu.getState().hasSave), true);
  const names = await page.evaluate(async () => (await indexedDB.databases()).map(db => db.name));
  assert(!names.includes(`redcat-recovery-saves-${next.id}`));

  await page.evaluate(() => {
    for (let i = 2; i <= 8; i++) __redcat.profiles.create(`Speler ${i}`);
    __redcat.playerMenu.render();
  });
  assert.equal(await page.locator('.player-choice').count(), 8);
  assert.equal(await page.locator('#player-add').isDisabled(), true);
  await page.screenshot({path: `${out}/list-eight-landscape.png`});
  for (const id of ['player-select', 'player-cancel']) {
    const box = await page.locator(`#${id}`).boundingBox();
    assert(box.y >= 0 && box.y + box.height <= 390, `${id} must stay in the short landscape viewport`);
  }
  await page.locator('[data-player-id]').last().scrollIntoViewIfNeeded();
  await page.locator('[data-player-id]').last().click();
  assert.equal(await page.locator('.player-choice[aria-pressed=true] span').textContent(), 'Speler 8');
  await page.keyboard.press('Escape'); assert.equal(await page.evaluate(() => __redcat.profiles.activeId), 'legacy');
  await page.setViewportSize({width: 320, height: 568}); await page.locator('#open-players').click();
  await page.locator('[data-player-id]').last().scrollIntoViewIfNeeded();
  await page.screenshot({path: `${out}/list-eight-portrait.png`});
  assert.equal(await page.evaluate(() => document.documentElement.scrollWidth <= innerWidth), true);
  assert.deepEqual(errors, []);
  await writeFile(`${out}/lifecycle-report.json`, JSON.stringify({passed: true, errors, pendingSaveScore: 4321, activeDeletion: true, eightPlayerLayouts: true}, null, 2));
  console.log('Pending recovery switch, active deletion and eight-player short landscape/portrait layout passed.');
} finally {await context?.close(); server.kill();}
