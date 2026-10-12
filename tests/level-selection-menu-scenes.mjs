import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir, writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import assert from 'node:assert/strict';

const output = 'temp_work/level-selection-menu';
await mkdir(output, {recursive: true}); process.env.TMPDIR = output;
const server = spawn(process.execPath, ['tools/serve.mjs'], {env: {...process.env, PORT: '4295'}, stdio: ['ignore', 'pipe', 'inherit']});
await new Promise((ok, fail) => {server.stdout.once('data', ok); server.once('error', fail);});
let context; const report = {checks: [], errors: []};
try {
  context = await chromium.launchPersistentContext(resolve(output, `profile-${Date.now()}`), {
    executablePath: process.env.CHROME_PATH || '/usr/bin/google-chrome', headless: true,
    viewport: {width: 1280, height: 900}, args: ['--use-angle=swiftshader', '--enable-unsafe-swiftshader'],
  });
  const page = await context.newPage(); page.on('pageerror', error => report.errors.push(String(error)));
  await page.addInitScript(() => {
    if (localStorage.getItem('selection-fixture')) return;
    localStorage.setItem('selection-fixture', 'true');
    localStorage.setItem('redcat.settings.v1', JSON.stringify({autoIntro: false, fullscreen: false, volume: 0}));
    localStorage.setItem('redcat.save.v1', JSON.stringify({version: 1, level: 'lvl02a', position: [0, 0, 0], yaw: 0, pitch: 0,
      game: {version: 1, level: 'lvl02a', state: {health: 10, score: 1234, skill: 6}}}));
    localStorage.setItem('redcat.progress.v1', JSON.stringify({version: 1, highestUnlocked: 2, earnedSkills: 6}));
  });
  await page.goto('http://127.0.0.1:4295/?skipIntro'); await page.waitForFunction(() => window.__redcat);
  await page.evaluate(() => {
    window.menuVoices = [];
    __redcat.playerMenu.audio.say = async files => {menuVoices.push(files); return true;};
  });
  const stored = await page.evaluate(() => localStorage.getItem('redcat.save.v1'));
  const unchanged = async () => assert.equal(await page.evaluate(() => localStorage.getItem('redcat.save.v1')), stored);
  assert.equal(await page.locator('#play-level').isVisible(), false);
  assert.equal(await page.locator('#continue').isVisible(), true);
  assert.equal(await page.locator('.level-card:disabled').count(), 2);

  for (const level of ['lvl00a', 'lvl01a', 'lvl02a']) {
    await page.locator(`[data-level="${level}"]`).click();
    assert.equal(await page.locator('#new-adventure-warning').evaluate(d => d.open), false);
    assert.equal(await page.locator('#play-level').isVisible(), true);
    assert.equal(await page.locator(`[data-level="${level}"]`).getAttribute('aria-pressed'), 'true');
    assert.equal(await page.evaluate(() => document.activeElement.dataset.level), level);
    assert.equal(await page.evaluate(() => __redcat.mode), 'menu'); await unchanged();
  }
  assert.deepEqual(await page.evaluate(() => menuVoices), [
    ['rcmn33.wav', 'rcmn38.wav'], ['rcmn34.wav', 'rcmn39.wav'], ['rcmn35.wav', 'rcmn40.wav'],
  ]);
  await page.locator('#play-level').click();
  await page.locator('#new-adventure-warning').waitFor({state: 'visible'});
  assert.equal(await page.locator('#confirm-new-adventure').textContent(), 'Het Kerkhof starten');
  await page.locator('#cancel-new-adventure').click();
  assert.equal(await page.evaluate(() => document.activeElement.id), 'play-level'); await unchanged();
  report.checks.push('Unlocked chapter selection only selects/announces; Level Spelen opens confirmation; cancel preserves the save and focus.');

  await page.locator('[data-level="lvl00a"]').focus(); await page.keyboard.press('Enter');
  assert.equal(await page.locator('#new-adventure-warning').evaluate(d => d.open), false);
  await page.locator('#play-level').click();
  assert.equal(await page.locator('#confirm-new-adventure').textContent(), 'Het Bos starten');
  await page.keyboard.press('Escape');
  await page.locator('#start-over').click();
  assert.equal(await page.locator('#confirm-new-adventure').textContent(), 'Nieuw avontuur starten');
  await page.keyboard.press('Escape'); await unchanged();
  report.checks.push('Keyboard selection, Forest replay and Start opnieuw retain their separate actions.');

  await page.setViewportSize({width: 390, height: 844});
  await page.locator('[data-level="lvl01a"]').click();
  await page.locator('#play-level').scrollIntoViewIfNeeded();
  await page.screenshot({path: `${output}/mobile-level-spelen.png`});
  const box = await page.locator('#play-level').boundingBox();
  assert(box.x >= 0 && box.x + box.width <= 390);
  await page.locator('#play-level').click();
  assert.equal(await page.locator('#confirm-new-adventure').textContent(), 'Het Kasteel starten');
  await page.locator('#cancel-new-adventure').click();

  const fresh = await page.evaluate(() => __redcat.profiles.create('Nieuw'));
  const choose = async id => {
    await page.locator('#open-players').click(); await page.locator(`[data-player-id="${id}"]`).click();
    await page.locator('#player-select').click();
    await page.waitForFunction(id => __redcat.profiles.activeId === id && !document.querySelector('#player-list').open, id);
  };
  await choose(fresh.id);
  assert.equal(await page.locator('#play-level').isVisible(), false);
  await page.locator('[data-level="lvl00a"]').click();
  assert.equal(await page.locator('#play-level').isVisible(), false);
  assert.equal(await page.locator('#start').isVisible(), true);
  assert.equal(await page.locator('#new-adventure-warning').evaluate(d => d.open), false);
  await choose('legacy');
  assert.equal(await page.locator('#play-level').isVisible(), false);
  assert.equal(await page.locator('#continue').isVisible(), true); await unchanged();
  report.checks.push('Mobile layout fits; fresh-player flow unchanged; replay selection resets on player switch.');

  // Verify confirmed launch targets the last chosen chapter, without loading an
  // unrelated full gameplay scene or overwriting the fixture's existing save.
  let requested;
  const levelRequest = new Promise(resolve => {requested = resolve;});
  await page.route('**/data/levels/*/level.json', route => {requested(route.request().url()); return new Promise(() => {});});
  await page.locator('[data-level="lvl00a"]').click();
  await page.locator('[data-level="lvl01a"]').click(); await page.locator('#play-level').click();
  await page.locator('#confirm-new-adventure').click();
  const requestedUrl = await levelRequest;
  assert(requestedUrl.endsWith('/data/levels/lvl01a/level.json'));
  assert.equal(await page.evaluate(() => __redcat.mode), 'loading'); await unchanged();
  report.checks.push('Confirm launches the last selected level; existing save remains intact while loading.');
  assert.deepEqual(report.errors, []); report.passed = true;
  console.log(report.checks.join('\n'));
} finally {
  await writeFile(`${output}/report.json`, JSON.stringify(report, null, 2));
  await context?.close(); server.kill();
}
