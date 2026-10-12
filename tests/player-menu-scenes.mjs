// Isolated storage only; screenshots/logs are retained in the project workspace.
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir, writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import assert from 'node:assert/strict';

const output = 'temp_work/player-profiles';
await mkdir(output, {recursive: true});
process.env.TMPDIR = output; // Relative path avoids Linux's Unix-socket length limit.
const server = spawn(process.execPath, ['tools/serve.mjs'], {env: {...process.env, PORT: '4293'}, stdio: ['ignore', 'pipe', 'inherit']});
await new Promise((ok, fail) => {server.stdout.once('data', ok); server.once('error', fail);});
let browser;
const report = {}, errors = [];
try {
  browser = await chromium.launchPersistentContext(resolve(output, `profile-${Date.now()}`), {executablePath: process.env.CHROME_PATH || '/usr/bin/google-chrome', headless: true,
    viewport: {width: 1280, height: 900}, args: ['--use-angle=swiftshader', '--enable-unsafe-swiftshader', '--autoplay-policy=no-user-gesture-required']});
  const context = browser, page = await context.newPage();
  page.on('pageerror', error => errors.push(String(error)));
  page.on('response', response => {if (response.status() >= 400) errors.push(`${response.status()} ${response.url()}`);});
  await page.addInitScript(() => {
    if (!localStorage.getItem('profile-test-seeded')) {
      localStorage.setItem('redcat.settings.v1', JSON.stringify({fullscreen: false, autoIntro: false, touchControls: 'on', difficulty: 'Hard', noClip: true}));
      localStorage.setItem('redcat.progress.v1', JSON.stringify({version: 1, highestUnlocked: 4, earnedSkills: 6, playedLevels: ['lvl00a']}));
      localStorage.setItem('redcat.touch-intro-hint.v1', 'true');
      localStorage.setItem('profile-test-seeded', 'true');
    }
    window.__voices = []; window.__heldClips = []; window.__holdVoice = false;
    const NativeAudio = window.Audio;
    window.Audio = class {
      constructor(url) {
        if (!/assets\/voices\/(rcmn|mn_red)/.test(url)) return new NativeAudio(url);
        this.url = url; this.volume = 1; this.currentTime = 0;
      }
      load() {}
      play() {
        window.__voices.push(this.url);
        if (window.__holdVoice) window.__heldClips.push(this);
        else queueMicrotask(() => this.onended?.());
        return Promise.resolve();
      }
      pause() {}
    };
  });
  const url = 'http://127.0.0.1:4293/?skipIntro';
  await page.goto(url); await page.waitForFunction(() => window.__redcat);
  await page.evaluate(async () => {
    await document.fonts.ready;
    await Promise.all(['editbgnd', 'messbgnd', '00040000', '00040001', '02170000', '02170001', '02230000', '02230001'].map(name => new Promise((ok, fail) => {
      const img = new Image(); img.onload = ok; img.onerror = fail; img.src = `assets/menu/${name}.png`;
    })));
  });
  assert.match(await page.locator('#current-player').textContent(), /Speler 1/);
  assert.equal(await page.locator('.level-card:disabled').count(), 0);
  await page.screenshot({path: `${output}/menu-desktop.png`});
  await page.locator('#open-players').click();
  assert.equal(await page.evaluate(() => __voices.at(-1)), 'assets/voices/rcmn13.wav');
  await page.screenshot({path: `${output}/list-desktop.png`});

  // Await the entire native announcement, then the name-prompt voice.
  await page.evaluate(() => {__holdVoice = true;});
  await page.locator('#player-add').click();
  assert.equal(await page.locator('#player-name-dialog').evaluate(d => d.open), false);
  assert.equal(await page.evaluate(() => __voices.at(-1)), 'assets/voices/mn_red26.wav');
  await page.evaluate(() => {__holdVoice = false; __heldClips.at(-1).onended();});
  await page.waitForFunction(() => document.querySelector('#player-name-dialog').open);
  assert.equal(await page.evaluate(() => __voices.at(-1)), 'assets/voices/rcmn7.wav');
  await page.locator('#player-name').fill('Rick');
  await page.screenshot({path: `${output}/new-player-desktop.png`});
  await page.locator('#player-name-save').click();
  assert.equal(await page.evaluate(() => __voices.at(-1)), 'assets/voices/rcmn1.wav');
  assert.equal(await page.evaluate(() => __redcat.profiles.activeId), 'legacy', 'row selection is pending until OK');
  const rick = await page.evaluate(() => __redcat.profiles.list().find(p => p.name === 'Rick').id);
  await page.locator('#player-cancel').click();
  assert.equal(await page.evaluate(() => __redcat.profiles.activeId), 'legacy');

  const snapshot = async (score, advance = 60) => page.evaluate(async ({score, advance}) => {
    const app = __redcat; app.pause(); app.recovery.advance(advance);
    app.gameplay.state.score = score; app.saveGame(true); await app.recovery.flush();
    return {score: app.gameplay.state.score, skills: app.gameplay.state.skill, difficulty: app.gameplay.difficulty,
      db: app.recovery.storage.name, history: app.recovery.choices().map(c => c.save?.game.state.score ?? null)};
  }, {score, advance});
  const openPlayers = async () => {await page.locator('#open-players').click();};
  const choose = async id => {
    await page.locator(`[data-player-id="${id}"]`).click(); await page.locator('#player-select').click();
    await page.waitForFunction(id => __redcat.profiles.activeId === id && !document.querySelector('#player-list').open, id);
  };
  const backToMenu = async () => {await page.evaluate(() => __redcat.pause()); await page.locator('#return-menu').click();};

  assert.equal(await page.evaluate(async () => {await __redcat.startLevel(0); __redcat.pause();return document.querySelector('#fatal').hidden ? 'ok' : document.querySelector('#fatal-message').textContent;}), 'ok');
  report.legacy = await snapshot(111); report.legacyLater = await snapshot(222, 120);
  await backToMenu(); await openPlayers(); await choose(rick);
  assert.equal(await page.evaluate(() => __redcat.world), null);
  assert.equal(await page.evaluate(() => __redcat.saveGame(true)), false, 'retired world cannot save into another player');
  assert.equal(await page.locator('.level-card:disabled').count(), 4);
  assert.equal(await page.locator('#continue').isVisible(), false);
  assert.deepEqual(await page.evaluate(() => ({difficulty: __redcat.settings.difficulty, noClip: __redcat.settings.noClip,
    hints: localStorage.getItem(__redcat.profiles.key('redcat.touch-intro-hint.v1')), history: __redcat.recovery.choices().map(c => !!c.save)})),
  {difficulty: 'Normal', noClip: false, hints: null, history: [false, false, false]});
  await page.evaluate(async () => {await __redcat.startLevel(0); __redcat.pause();});
  report.rick = await snapshot(777); report.rickLater = await snapshot(888, 120);
  assert.equal(report.rick.skills, 0); assert.notEqual(report.legacy.db, report.rick.db);
  await backToMenu(); await openPlayers(); await choose('legacy');
  assert.equal(await page.locator('.level-card:disabled').count(), 0);
  assert.equal(await page.evaluate(() => __redcat.settings.difficulty), 'Hard');
  assert.equal(await page.evaluate(() => __redcat.settings.noClip), true);
  assert.equal(await page.evaluate(() => __redcat.recovery.choices()[0].save.game.state.score), 111);
  await page.locator('#open-recovery').click(); await page.locator('[data-recovery-minutes="2"]').click();
  await page.waitForFunction(() => ['playing', 'paused'].includes(__redcat.mode), null, {timeout: 90000});
  await page.evaluate(() => __redcat.pause());
  assert.equal(await page.evaluate(() => __redcat.gameplay.state.score), 111);
  assert.equal(await page.evaluate(() => __redcat.gameplay.state.skill), report.legacy.skills);
  await backToMenu(); await openPlayers(); await choose(rick);
  await page.reload(); await page.waitForFunction(() => window.__redcat);
  assert.equal(await page.evaluate(() => __redcat.profiles.activeId), rick);
  await page.locator('#continue').click();
  await page.waitForFunction(() => ['playing', 'paused'].includes(__redcat.mode), null, {timeout: 90000});
  await page.evaluate(() => __redcat.pause());
  assert.equal(await page.evaluate(() => __redcat.gameplay.state.score), 888);
  assert.equal(await page.evaluate(() => __redcat.gameplay.state.skill), 0);
  assert.equal(await page.evaluate(() => __redcat.recovery.choices()[0].save.game.state.score), 777);
  await backToMenu(); await openPlayers();
  await page.locator('[data-player-id="legacy"]').click(); await page.locator('#player-remove').click();
  await page.waitForFunction(() => document.querySelector('#player-delete-dialog').open);
  assert.deepEqual(await page.evaluate(() => __voices.slice(-2)), ['assets/voices/mn_red27.wav', 'assets/voices/rcmn8.wav']);
  await page.screenshot({path: `${output}/delete-player-desktop.png`});
  await page.locator('#player-delete-no').click();
  assert.equal(await page.evaluate(() => __voices.at(-1)), 'assets/voices/rcmn4.wav');
  assert.equal(await page.evaluate(() => __redcat.profiles.list().length), 2);
  await page.locator('#player-remove').click(); await page.locator('#player-delete-yes').click();
  await page.waitForFunction(() => !document.querySelector('#player-delete-dialog').open);
  assert.equal(await page.evaluate(() => __voices.at(-1)), 'assets/voices/rcmn3.wav');
  assert.equal(await page.evaluate(() => localStorage.getItem('redcat.save.v1')), null);
  assert.equal(await page.evaluate(() => JSON.parse(localStorage.getItem(__redcat.profiles.key('redcat.save.v1'))).game.state.score), 888);
  assert.equal(await page.locator('#player-remove').isDisabled(), true);
  const databases = await page.evaluate(async () => (await indexedDB.databases()).map(db => db.name));
  assert(!databases.includes('redcat-recovery-saves')); assert(databases.includes(report.rick.db));
  await page.locator('#player-cancel').click();

  for (const [width, height] of [[390, 844], [320, 568], [844, 390]]) {
    await page.setViewportSize({width, height}); await page.screenshot({path: `${output}/menu-${width}x${height}.png`});
    await openPlayers();
    await page.screenshot({path: `${output}/list-${width}x${height}.png`});
    assert(await page.locator('#player-cancel').isVisible());
    assert.equal(await page.evaluate(() => document.documentElement.scrollWidth <= innerWidth), true);
    await page.locator('#player-add').click(); await page.locator('#player-name').fill('Rick');
    await page.locator('#player-name-save').click();
    assert.match(await page.locator('#player-name-status').textContent(), /al een speler/);
    await page.keyboard.press('Escape'); await page.keyboard.press('Escape');
  }
  // Cancel while a native pre-prompt voice is still speaking: it must not reopen.
  await openPlayers(); await page.evaluate(() => {__holdVoice = true;}); await page.locator('#player-add').click();
  await page.keyboard.press('Escape');
  await page.evaluate(() => {__holdVoice = false; __heldClips.forEach(clip => clip.onended?.());});
  assert.equal(await page.locator('#player-name-dialog').evaluate(d => d.open), false);
  assert.deepEqual(errors, []);
  report.passed = true; report.errors = errors;
  await writeFile(`${output}/report.json`, JSON.stringify(report, null, 2));
  console.log('Player menu voices, real saves/recovery isolation, abilities, difficulty, deletion and responsive layout passed.');
} finally {await writeFile(`${output}/errors.json`, JSON.stringify({errors, report}, null, 2));await browser?.close(); server.kill();}
