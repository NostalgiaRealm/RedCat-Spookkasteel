// An isolated storage regression fixture, not campaign-completion evidence.
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir, writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import assert from 'node:assert/strict';

const out = `temp_work/death-save-2026-10-18/run-${Date.now()}`;
await mkdir(out, {recursive: true});
await mkdir('temp_work/t', {recursive: true});
const env = {...process.env, TMPDIR: 'temp_work/t'};
const port = 4582;
const server = spawn(process.execPath, ['tools/serve.mjs'], {env: {...env, PORT: String(port)}, stdio: ['ignore', 'pipe', 'inherit']});
await new Promise((ok, fail) => {server.stdout.once('data', ok); server.once('error', fail);});
let context;
const report = {out, checks: []}, errors = [];
try {
  context = await chromium.launchPersistentContext(resolve(out, 'profile'), {
    executablePath: process.env.CHROME_PATH || '/usr/bin/google-chrome', headless: true, env,
    viewport: {width: 960, height: 640}, args: ['--use-angle=gl', '--autoplay-policy=no-user-gesture-required'],
  });
  const page = await context.newPage();
  page.on('pageerror', error => errors.push(String(error)));
  await page.addInitScript(() => {
    localStorage.setItem('redcat.settings.v1', JSON.stringify({autoIntro: false, fullscreen: false, touchControls: 'off'}));
    let callbacks = [], now = performance.now();
    window.requestAnimationFrame = callback => {callbacks.push(callback); return callbacks.length;};
    window.__testFrame = seconds => {
      now = Math.max(now, performance.now()) + seconds * 1000;
      const current = callbacks; callbacks = [];
      for (const callback of current) callback(now);
    };
    HTMLCanvasElement.prototype.requestPointerLock = () => Promise.resolve();
    window.__closeRequests = 0;
    window.close = () => {window.__closeRequests++;};
  });
  await page.goto(`http://127.0.0.1:${port}/?skipIntro`);
  await page.waitForFunction(() => window.__redcat, null, {polling: 100});
  await page.evaluate(async () => {
    const app = __redcat;
    // Silence menu voice delays only; normal button handlers remain installed.
    app.playerMenu.audio.say = async () => true;
    await app.startLevel(0); app.pause();
    const game = app.gameplay;
    for (const player of game.scripts.players.values()) player.stop();
    game.scripts.cutscene = false; game.scripts.camera = null;
    for (const object of game.objects) if (['enemy', 'trigger', 'fairy'].includes(object.kind)) object.enabled = false;
    // Natively the last attempt is played at 0 lives; the life is deducted at respawn.
    game.state.lives = 0;
    // A real living latest save and populated IndexedDB recovery timeline.
    for (let minute = 0; minute <= 2; minute++) {
      app.recovery.advance(60); game.state.score = 100 + minute;
      app.saveGame(true); await app.recovery.flush();
    }
    window.__livingBytes = localStorage.getItem(app.profiles.key('redcat.save.v1'));
    window.__recoveryBytes = JSON.stringify(app.recovery.state);
    window.__saveCalls = {snapshot: 0, capture: 0, write: 0};
    const snapshot = game.snapshot.bind(game), capture = app.recovery.capture.bind(app.recovery);
    game.snapshot = (...args) => {__saveCalls.snapshot++; return snapshot(...args);};
    app.recovery.capture = (...args) => {__saveCalls.capture++; return capture(...args);};
    const setItem = Storage.prototype.setItem;
    Storage.prototype.setItem = function (key, value) {
      if (key === app.profiles.key('redcat.save.v1')) __saveCalls.write++;
      return setItem.call(this, key, value);
    };
    window.__originalSetItem = setItem;
    app.resume(); game.hitCooldown = 0; game.damage(100);
  });
  const preserved = async label => {
    const state = await page.evaluate(async () => {
      const a = __redcat; await a.recovery.flush();
      return {latestUnchanged: localStorage.getItem('redcat.save.v1') === __livingBytes,
        recoveryUnchanged: JSON.stringify(a.recovery.state) === __recoveryBytes,
        calls: {...__saveCalls}, health: a.gameplay?.state.health, lives: a.gameplay?.state.lives,
        toast: document.getElementById('toast').textContent, mode: a.mode};
    });
    report.checks.push({label, ...state});
    assert.equal(state.latestUnchanged, true, `${label}: last living save is preserved`);
    assert.equal(state.recoveryUnchanged, true, `${label}: recovery history is preserved`);
    assert.deepEqual(state.calls, {snapshot: 0, capture: 0, write: 0}, `${label}: reject before serialization or storage`);
    return state;
  };
  await page.keyboard.press('F5');
  const manual = await preserved('F5 while dead');
  assert.equal(manual.health, 0); assert.equal(manual.lives, 0);
  assert.match(manual.toast, /niet opgeslagen/i);
  await page.screenshot({path: `${out}/dead-F5-preserved.png`});

  assert.equal(await page.evaluate(() => __redcat.saveGame(true)), false);
  assert.equal((await preserved('silent direct save')).toast, manual.toast);
  // One delayed rendered frame advances the real autosave/recovery clocks by
  // a minute, but only the normal capped physics step of the death animation.
  report.autosaveClock = await page.evaluate(() => {
    const before = __redcat.recovery.clock;
    __testFrame(61);
    return {before, after: __redcat.recovery.clock, captureDue: __redcat.recovery.needsCapture};
  });
  assert.ok(report.autosaveClock.after - report.autosaveClock.before >= 60, 'normal playing frame advances both save clocks');
  assert.equal(report.autosaveClock.captureDue, true, 'rejected death save leaves the due living recovery capture pending');
  assert.equal((await preserved('autosave and due recovery capture')).toast, manual.toast);
  await page.keyboard.press('Escape');
  assert.equal((await preserved('pause silent save')).toast, manual.toast);
  await page.locator('#save').click();
  assert.match((await preserved('pause Save button')).toast, /niet opgeslagen/i);
  await page.locator('#return-menu').click();
  assert.equal((await preserved('return to menu')).toast, manual.toast);
  await page.evaluate(() => window.dispatchEvent(new Event('beforeunload')));
  await preserved('beforeunload');
  await page.locator('#open-quit').click(); await page.locator('#quit-yes').click();
  await page.waitForFunction(() => __closeRequests === 1, null, {polling: 100});
  await preserved('confirmed quit');
  await page.keyboard.press('Escape');

  const other = await page.evaluate(() => __redcat.profiles.create('Save test'));
  await page.locator('#open-players').click();
  await page.locator(`[data-player-id="${other.id}"]`).click(); await page.locator('#player-select').click();
  await page.waitForFunction(id => __redcat.profiles.activeId === id && !__redcat.playerMenu.openDialog, other.id, {polling: 100});
  report.deadSwitch = await page.evaluate(() => ({active: __redcat.profiles.activeId,
    worldRetired: __redcat.world === null, latestUnchanged: localStorage.getItem('redcat.save.v1') === __livingBytes,
    newSave: localStorage.getItem(__redcat.profiles.key('redcat.save.v1')),
    recoveryEntries: __redcat.recovery.state.checkpoints.length}));
  assert.equal(report.deadSwitch.latestUnchanged, true);
  assert.equal(report.deadSwitch.worldRetired, true);
  assert.equal(report.deadSwitch.newSave, null); assert.equal(report.deadSwitch.recoveryEntries, 0);

  // A living save failure still blocks profile switching rather than silently
  // discarding that player's unsaved progress.
  await page.evaluate(async () => {await __redcat.startLevel(0); __redcat.pause();});
  await page.locator('#return-menu').click();
  await page.evaluate(() => {
    const key = __redcat.profiles.key('redcat.save.v1');
    Storage.prototype.setItem = function (name, value) {
      if (name === key) throw new DOMException('Fixture quota failure', 'QuotaExceededError');
      return __originalSetItem.call(this, name, value);
    };
  });
  await page.locator('#open-players').click(); await page.locator('[data-player-id="legacy"]').click();
  await page.locator('#player-select').click();
  await page.waitForFunction(() => !__redcat.playerMenu.busy, null, {polling: 100});
  report.livingFailure = await page.evaluate(() => ({active: __redcat.profiles.activeId,
    worldPresent: !!__redcat.world, dialog: !!__redcat.playerMenu.openDialog,
    message: document.getElementById('player-list-status').textContent}));
  assert.equal(report.livingFailure.active, other.id); assert.equal(report.livingFailure.worldPresent, true);
  assert.equal(report.livingFailure.dialog, true); assert.match(report.livingFailure.message, /Wisselen is afgebroken/);
  await page.evaluate(() => {Storage.prototype.setItem = __originalSetItem;});
  await page.locator('#player-select').click();
  await page.waitForFunction(() => __redcat.profiles.activeId === 'legacy' && !__redcat.playerMenu.openDialog, null, {polling: 100});
  assert.equal(await page.evaluate(() => localStorage.getItem('redcat.save.v1') === __livingBytes), true);

  // Explicit old-format death-animation fixture: newly writing a dead save is
  // blocked, but older saves with a remaining life must still load and respawn.
  report.legacyLoad = await page.evaluate(async () => {
    const save = JSON.parse(__livingBytes);
    save.game.state.health = 0; save.game.state.lives = 2;
    save.game.playerReaction = {phase: 'death', age: .4};
    delete save.playerAnimation;
    localStorage.setItem('redcat.save.v1', JSON.stringify(save));
    const loaded = await __redcat.loadSave();
    return {loaded, health: __redcat.gameplay.state.health, lives: __redcat.gameplay.state.lives,
      phase: __redcat.gameplay.playerReaction?.phase, age: __redcat.gameplay.playerReaction?.age};
  });
  assert.deepEqual(report.legacyLoad, {loaded: true, health: 0, lives: 2, phase: 'death', age: .4});
  await page.evaluate(async () => {for (let i = 0; i < 35; i++) {__testFrame(.05); await new Promise(r => setTimeout(r, 0));}});
  report.respawn = await page.evaluate(() => ({health: __redcat.gameplay.state.health,
    lives: __redcat.gameplay.state.lives, phase: __redcat.gameplay.playerReaction?.phase,
    position: [...__redcat.world.player.position], checkpoint: [...__redcat.gameplay.checkpoint.position]}));
  assert.equal(report.respawn.health, 10); assert.equal(report.respawn.lives, 2); assert.equal(report.respawn.phase, 'respawn');
  assert.deepEqual(report.respawn.position, report.respawn.checkpoint.map((v, i) => v + (i === 1 ? 1 : 0)));
  await page.keyboard.press('F5'); await page.evaluate(() => __redcat.recovery.flush());
  report.respawnSave = await page.evaluate(() => ({health: JSON.parse(localStorage.getItem('redcat.save.v1')).game.state.health,
    lives: JSON.parse(localStorage.getItem('redcat.save.v1')).game.state.lives,
    message: document.getElementById('toast').textContent}));
  assert.equal(report.respawnSave.health, 10); assert.equal(report.respawnSave.lives, 2);
  assert.equal(report.respawnSave.message, 'Je avontuur is opgeslagen.');
  await page.screenshot({path: `${out}/living-respawn-saved.png`});
  assert.deepEqual(errors, []);
  report.passed = true;
  console.log(`PASS death-save protection, all save entry points, dead profile switch, living write failure, legacy death load and new respawn save. ${out}`);
} catch (error) {
  report.failure = error.stack;
  throw error;
} finally {
  await writeFile(`${out}/report.json`, JSON.stringify({...report, errors}, null, 2));
  await context?.close(); server.kill();
}
