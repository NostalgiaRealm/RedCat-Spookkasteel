import {chromium, devices} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir, writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import assert from 'node:assert/strict';

// Focused browser smoke: one forest scene, real Chromium multi-touch input,
// and the menus needed to operate it without a physical keyboard or mouse.
const port = Number(process.env.TOUCH_TEST_PORT || 4197);
const origin = `http://127.0.0.1:${port}`;
process.env.TMPDIR = 'current_work';
const artifacts = resolve(`current_work/touch-scenes-${Date.now()}`);
const report = {errors: [], checks: []};
const server = spawn(process.execPath, ['tools/serve.mjs'], {
  env: {...process.env, PORT: String(port)}, stdio: ['ignore', 'pipe', 'inherit'],
});
await new Promise((resolve, reject) => {
  server.stdout.once('data', resolve); server.once('error', reject);
  server.once('exit', code => reject(new Error(`Touch test server exited: ${code}`)));
});

let browser;
function check(name) {report.checks.push(name); console.log(`PASS ${name}`);}
async function instrument(context, desktop = false) {
  await context.addInitScript(({desktop}) => {
    window.__pointerLockRequests = 0;
    Element.prototype.requestPointerLock = function() {
      window.__pointerLockRequests++; return Promise.resolve();
    };
    window.__touchPointerIds = {};
    document.addEventListener('pointerdown', event => {
      if(event.pointerType === 'touch')window.__touchPointerIds[event.target.id] = event.pointerId;
    }, true);
    if(desktop)window.desktop = {applyDisplay: async () => {}, quit() {}};
  }, {desktop});
}
async function openPage(context) {
  const page = await context.newPage();
  page.on('pageerror', error => report.errors.push(error.stack || String(error)));
  page.on('response', response => {
    if(response.status() >= 400)report.errors.push(`${response.status()} ${response.url()}`);
  });
  await page.goto(`${origin}/?skipIntro`);
  await page.waitForFunction(() => window.__redcat?.touchControls && window.__redcat?.readInput);
  return page;
}
async function tap(page, selector) {await page.locator(selector).tap();}
async function center(page, selector) {
  const box = await page.locator(selector).boundingBox();
  assert.ok(box, `${selector} must have a visible hit area`);
  return {x: Math.round(box.x + box.width / 2), y: Math.round(box.y + box.height / 2)};
}
class Fingers {
  constructor(client) {this.client = client; this.points = new Map();}
  async send(type) {
    await this.client.send('Input.dispatchTouchEvent', {
      type, touchPoints: [...this.points].map(([id, point]) => ({id, ...point, radiusX: 5, radiusY: 5, force: 1})),
    });
  }
  async down(id, point) {this.points.set(id, point); await this.send('touchStart');}
  async move(id, point) {this.points.set(id, point); await this.send('touchMove');}
  async up(id) {
    // Chromium interprets points on touchEnd as the contacts to release;
    // an empty list ends every contact, unlike touchStart/touchMove snapshots.
    const point = this.points.get(id); this.points.delete(id);
    await this.client.send('Input.dispatchTouchEvent', {type: 'touchEnd', touchPoints: [{id, ...point}]});
  }
  async release() {this.points.clear(); await this.send('touchEnd');}
}
async function neutral(page, label) {
  const input = await page.evaluate(() => window.__redcat.readInput());
  for(const key of ['forward', 'right', 'turn'])assert.equal(input[key], 0, `${label}: ${key}`);
  for(const key of ['jump', 'descend', 'walk', 'attack', 'use'])assert.equal(input[key], false, `${label}: ${key}`);
}
async function setting(page, value, fromPause = false, touch = true) {
  const activate = selector => touch ? tap(page, selector) : page.locator(selector).click();
  await activate(fromPause ? '#pause-settings' : '#open-settings');
  await page.locator('#touch-controls-setting').selectOption(value);
  await activate('#apply-settings');
  await page.locator('#settings').waitFor({state: 'hidden'});
}
async function layout(page, name) {
  const result = await page.evaluate(() => {
    const vertical = window.__redcat.settings.noClip ? 'touch-descend' : 'touch-walk';
    const ids = ['touch-move', 'touch-jump', 'touch-attack', vertical, 'touch-camera', 'game-menu'];
    return {
      viewport: [innerWidth, innerHeight],
      overflow: document.documentElement.scrollWidth > innerWidth + 1,
      controls: ids.map(id => {
        const element = document.getElementById(id), r = element.getBoundingClientRect();
        return {id, x: r.x, y: r.y, width: r.width, height: r.height, hidden: !element.getClientRects().length};
      }),
    };
  });
  assert.equal(result.overflow, false, `${name}: horizontal page overflow`);
  for(const r of result.controls) {
    assert.equal(r.hidden, false, `${name}: ${r.id} visible`);
    assert.ok(r.width >= 40 && r.height >= 40, `${name}: ${r.id} touch target ${r.width}×${r.height}`);
    assert.ok(r.x >= -1 && r.y >= -1 && r.x + r.width <= result.viewport[0] + 1 && r.y + r.height <= result.viewport[1] + 1,
      `${name}: ${r.id} lies outside viewport: ${JSON.stringify(r)}`);
  }
  await page.screenshot({path: `${artifacts}/touch-${name}.png`});
  report[name] = result;
}
async function targetMeterScreenshot(page, name) {
  // Keep only target selection fixed for one screenshot; the ordinary HUD
  // renderer and responsive layout still execute through the real frame loop.
  await page.evaluate(() => {
    const world = window.__redcat.world;
    window.__touchTargetingBefore = {update: world.updateTargeting, target: world.targeting.target, locked: world.targeting.locked};
    world.updateTargeting = () => {};
    const enemy = window.__redcat.gameplay.objects.find(object => object.kind === 'enemy');
    world.targeting.target = {...enemy, enabled: false, health: 6, maxHealth: 10};
    world.targeting.locked = true;
    window.__redcat.renderHud();
  });
  await page.screenshot({path: `${artifacts}/touch-${name}-target-meter.png`});
  await page.evaluate(() => {
    const world = window.__redcat.world, before = window.__touchTargetingBefore;
    world.updateTargeting = before.update; world.targeting.target = before.target; world.targeting.locked = before.locked;
    delete window.__touchTargetingBefore;
  });
}

try {
  await mkdir(artifacts, {recursive: true});
  const profile = await chromium.launchPersistentContext(resolve(artifacts, 'browser-profile'), {
    executablePath: process.env.CHROME_PATH || '/usr/bin/google-chrome', headless: true,
    args: ['--use-angle=gl'],
  });
  browser = profile.browser();
  const context = await browser.newContext({
    ...devices['Pixel 7'], viewport: {width: 390, height: 844}, deviceScaleFactor: 1,
  });
  await instrument(context);
  const page = await openPage(context), client = await context.newCDPSession(page), fingers = new Fingers(client);
  assert.equal(await page.evaluate(() => window.__redcat.touchEnabled), true);
  assert.equal(await page.evaluate(() => window.__redcat.settings.touchControls), 'auto');
  await page.screenshot({path: `${artifacts}/touch-menu-portrait.png`});
  await tap(page, '#open-help');
  assert.equal(await page.locator('#help').isVisible(), true);
  await tap(page, '#close-help');
  await tap(page, '#play-intro');
  await page.waitForFunction(() => window.__redcat.mode === 'intro');
  await page.waitForFunction(() => !document.getElementById('intro-video').paused);
  await tap(page, '#skip-intro');
  await page.waitForFunction(() => window.__redcat.mode === 'menu');
  check('mobile automatically enables touch; help and original intro work by touch');

  await tap(page, '#open-settings');
  const scrollBefore = await page.locator('#settings .panel').evaluate(el => el.scrollTop);
  await fingers.down(1, {x: 210, y: 680});
  for(let y = 620; y >= 220; y -= 80)await fingers.move(1, {x: 210, y});
  await fingers.release();
  await page.waitForTimeout(200);
  const scrollAfter = await page.locator('#settings .panel').evaluate(el => el.scrollTop);
  assert.ok(scrollAfter > scrollBefore, `settings scroll responds to touch: ${scrollBefore} → ${scrollAfter}`);
  await tap(page, '#open-cheats');
  assert.equal(await page.locator('#cheat-supplies').isDisabled(), true);
  await tap(page, '#back-cheats');
  await page.locator('#touch-controls-setting').selectOption('off');
  if(await page.locator('#auto-intro').isChecked())await tap(page, '#auto-intro');
  await tap(page, '#apply-settings');
  await page.reload(); await page.waitForFunction(() => window.__redcat?.readInput);
  assert.equal(await page.evaluate(() => window.__redcat.touchEnabled), false);
  assert.equal(await page.evaluate(() => window.__redcat.settings.touchControls), 'off');
  check('settings scroll by touch and the Off override survives reload');

  await tap(page, '#start');
  await page.waitForFunction(() => window.__redcat.mode === 'playing', {}, {timeout: 90000});
  assert.equal(await page.locator('#touch-controls').isVisible(), false);
  assert.equal(await page.locator('#game-menu').isVisible(), true);
  await tap(page, '#game-menu');
  await page.waitForFunction(() => window.__redcat.mode === 'paused');
  await setting(page, 'auto', true);
  await tap(page, '#resume');
  await page.locator('#touch-controls').waitFor({state: 'visible'});
  await page.locator('#cutscene-skip').waitFor({state: 'visible'});
  const skip = await center(page, '#touch-skip');
  await fingers.down(1, skip);
  await page.waitForFunction(() => Number(document.getElementById('cutscene-skip').getAttribute('aria-valuenow')) >= 25);
  assert.equal(await page.evaluate(() => window.__redcat.gameplay.scripts.cutscene), true);
  await fingers.release();
  await page.waitForFunction(() => document.getElementById('cutscene-skip').getAttribute('aria-valuenow') === '0');
  await page.evaluate(() => {
    const host = window.__redcat.gameplay.scripts, skip = host.skipCutscene.bind(host);
    document.getElementById('touch-skip').addEventListener('pointerdown', () => {window.__touchSkipStart = performance.now();});
    host.skipCutscene = (...args) => {window.__touchSkipMilliseconds = performance.now() - window.__touchSkipStart; return skip(...args);};
  });
  await fingers.down(1, skip);
  await page.waitForFunction(() => Number(document.getElementById('cutscene-skip').getAttribute('aria-valuenow')) >= 45);
  await page.screenshot({path: `${artifacts}/touch-cutscene-hold.png`});
  await page.waitForFunction(() => !window.__redcat.gameplay.scripts.cutscene, {}, {timeout: 15000});
  await fingers.release();
  report.skipMilliseconds = await page.evaluate(() => window.__touchSkipMilliseconds);
  assert.ok(report.skipMilliseconds >= 1900 && report.skipMilliseconds < 3000, `touch skip took ${report.skipMilliseconds}ms`);
  check('mobile menu remains available with controls Off; real two-second touch hold skips the authored intro');

  // Keep this forest smoke deterministic: stop story timers and hazards after
  // verifying their real intro, then unlock the weapon through the existing API.
  await page.evaluate(() => {
    const app = window.__redcat, host = app.gameplay.scripts;
    host.update = () => {}; host.cutscene = false; host.camera = null; host.weaponsEnabled = true;
    for(const object of app.gameplay.objects)if(object.kind === 'enemy' || object.kind === 'trigger')object.enabled = false;
    app.gameplay.state.skill |= 1;
    document.body.classList.remove('in-cutscene'); document.getElementById('subtitle').hidden = true;
    window.__touchAttacks = 0; window.__touchJumps = 0;
    const onEvent = app.gameplay.onEvent;
    app.gameplay.onEvent = event => {
      if(event.type === 'attack')window.__touchAttacks++;
      if(event.type === 'jump')window.__touchJumps++;
      onEvent(event);
    };
  });
  await page.waitForTimeout(450);
  await layout(page, 'portrait');
  await targetMeterScreenshot(page, 'portrait');
  await tap(page, '#touch-camera');
  assert.equal(await page.evaluate(() => window.__redcat.settings.camera), 'first');
  await tap(page, '#touch-camera');
  assert.equal(await page.evaluate(() => window.__redcat.settings.camera), 'third');
  await tap(page, '#touch-walk');
  assert.equal(await page.evaluate(() => window.__redcat.readInput().walk), true);
  await tap(page, '#touch-walk');
  assert.equal(await page.evaluate(() => window.__redcat.readInput().walk), false);
  await page.waitForFunction(() => window.__redcat.world.player.grounded);
  const jumpStart = await page.evaluate(() => window.__redcat.world.player.position[1]);
  await fingers.down(1, await center(page, '#touch-jump'));
  await page.waitForFunction(start => window.__touchJumps > 0 && window.__redcat.world.player.position[1] > start + 5, jumpStart);
  await fingers.release();
  check('touch jump executes grounded collision movement and emits the normal jump event');

  await tap(page, '#game-menu'); await tap(page, '#pause-settings'); await tap(page, '#open-cheats');
  await tap(page, '#cheat-noclip');
  assert.equal(await page.locator('#cheat-noclip').isChecked(), true);
  const score = await page.evaluate(() => window.__redcat.gameplay.state.score);
  await tap(page, '#cheat-supplies');
  assert.equal(await page.evaluate(() => window.__redcat.gameplay.state.score), score + 9000);
  await tap(page, '#back-cheats'); await tap(page, '#apply-settings'); await tap(page, '#resume');
  await page.locator('#touch-descend').waitFor({state: 'visible'});
  check('touch camera, slow-walk toggle and pause/settings/cheats navigation');

  const move = await center(page, '#touch-move'), look = await center(page, '#touch-look');
  const jump = await center(page, '#touch-jump'), attack = await center(page, '#touch-attack');
  const before = await page.evaluate(() => ({position: [...window.__redcat.world.player.position], yaw: window.__redcat.world.yaw, pitch: window.__redcat.world.pitch}));
  await fingers.down(1, move); await fingers.move(1, {x: move.x + 22, y: move.y - 42});
  await fingers.down(2, look); await fingers.move(2, {x: look.x - 35, y: look.y + 22});
  await fingers.down(3, jump); await fingers.down(4, attack);
  const held = await page.evaluate(() => window.__redcat.readInput());
  assert.ok(held.forward > .3 && held.right > .1, JSON.stringify(held));
  assert.equal(held.jump, true); assert.equal(held.attack, true); assert.equal(held.use, false);
  assert.ok(Math.hypot(held.forward, held.right) <= 1.001, 'joystick diagonal is normalized');
  await page.waitForFunction(() => window.__touchAttacks > 0);
  assert.equal(await page.locator('#touch-use, #touch-options, #touch-tools, #touch-save, #touch-load').count(), 0, 'obsolete touch controls are absent');
  const after = await page.evaluate(() => ({position: [...window.__redcat.world.player.position], yaw: window.__redcat.world.yaw, pitch: window.__redcat.world.pitch, attacks: window.__touchAttacks}));
  assert.ok(Math.hypot(...after.position.map((v, i) => v - before.position[i])) > 5, 'real player movement');
  assert.ok(after.position[1] > before.position[1], 'jump button flies upward in no-clip');
  assert.notEqual(after.yaw, before.yaw); assert.notEqual(after.pitch, before.pitch);
  await fingers.up(3);
  const partial = await page.evaluate(() => window.__redcat.readInput());
  assert.equal(partial.jump, false); assert.equal(partial.attack, true); assert.equal(partial.use, false);
  assert.ok(partial.forward > .3, 'releasing jump keeps another finger moving');
  await fingers.release(); await neutral(page, 'all four fingers released');
  report.multitouch = {held, before, after};
  check('four simultaneous fingers move/look/jump/fire and release independently');

  const descend = await center(page, '#touch-descend');
  const high = await page.evaluate(() => window.__redcat.world.player.position[1]);
  await fingers.down(1, descend); await page.waitForTimeout(160); await fingers.release();
  assert.ok(await page.evaluate(() => window.__redcat.world.player.position[1]) < high - 5);
  await fingers.down(1, attack);
  await page.evaluate(() => {
    const el = document.getElementById('touch-attack');
    el.dispatchEvent(new PointerEvent('pointercancel', {bubbles: true, pointerType: 'touch', pointerId: window.__touchPointerIds['touch-attack']}));
  });
  await neutral(page, 'pointer cancellation'); await fingers.release();

  await page.evaluate(() => {
    const app = window.__redcat, p = app.world.player.position;
    app.gameplay.scripts.camera = {mode: 2, points: [], start: 0, position: [p[0] + 300, p[1] + 200, p[2] + 300], targetPosition: [...p], offset: [0, 0, 0]};
    app.world.updateCamera(1, true);
  });
  const fixedBefore = await page.evaluate(() => [window.__redcat.world.yaw, window.__redcat.world.pitch]);
  await fingers.down(1, look); await fingers.move(1, {x: look.x - 60, y: look.y + 40}); await fingers.release();
  assert.deepEqual(await page.evaluate(() => [window.__redcat.world.yaw, window.__redcat.world.pitch]), fixedBefore);
  await page.evaluate(() => {window.__redcat.gameplay.scripts.camera = null; window.__redcat.world.updateCamera(1, true);});
  check('no-clip descend, pointercancel and authored fixed-camera look suppression');

  await fingers.down(1, move); await fingers.move(1, {x: move.x, y: move.y - 42});
  await fingers.down(2, attack); await page.evaluate(() => window.__redcat.pause());
  await neutral(page, 'pause clears input'); await fingers.release();
  await tap(page, '#save');
  const saved = await page.evaluate(() => JSON.parse(localStorage.getItem('redcat.save.v1')));
  await page.evaluate(() => {window.__redcat.world.player.position[0] += 700;});
  await tap(page, '#load-save');
  await page.waitForFunction(() => window.__redcat.mode === 'playing', {}, {timeout: 90000});
  const loaded = await page.evaluate(() => [...window.__redcat.world.player.position]);
  assert.ok(Math.hypot(...loaded.map((v, i) => v - saved.position[i])) < 2, 'pause load restores saved position');
  await neutral(page, 'load clears input');
  check('pause clears held controls; save/load work through visible touch menus');

  await fingers.down(1, await center(page, '#touch-move'));
  await fingers.move(1, {x: move.x, y: move.y - 42}); await fingers.down(2, await center(page, '#touch-attack'));
  await page.setViewportSize({width: 844, height: 390});
  await page.waitForFunction(() => innerWidth === 844 && window.__redcat.readInput().forward === 0, {}, {timeout: 3000});
  await neutral(page, 'orientation resize clears input'); await fingers.release();
  await layout(page, 'landscape');
  await targetMeterScreenshot(page, 'landscape');
  await tap(page, '#game-menu'); await tap(page, '#pause-settings');
  await page.locator('#touch-controls-setting').scrollIntoViewIfNeeded();
  await page.screenshot({path: `${artifacts}/touch-settings-landscape.png`});
  await tap(page, '#apply-settings'); await tap(page, '#resume');
  await fingers.down(1, await center(page, '#touch-attack'));
  // Simulate the browser's visibility lifecycle event (the hidden property is
  // read-only); native touch delivery is independently covered above.
  await page.evaluate(() => {
    Object.defineProperty(document, 'hidden', {configurable: true, get: () => true});
    document.dispatchEvent(new Event('visibilitychange'));
    delete document.hidden;
  });
  await neutral(page, 'visibility loss clears input'); await fingers.release();
  assert.equal(await page.evaluate(() => window.__redcat.mode), 'paused');
  await tap(page, '#resume');
  await page.evaluate(() => {
    window.__compatibilityMouse = [];
    window.addEventListener('mousedown', event => {
      window.__compatibilityMouse.push({fromTouch: !!event.sourceCapabilities?.firesTouchEvents, attack: window.__redcat.readInput().attack});
    });
  });
  await page.touchscreen.tap(200, 145);
  const compatibility = await page.evaluate(() => window.__compatibilityMouse);
  assert.ok(compatibility.some(event => event.fromTouch), 'canvas tap emits a real compatibility mouse event');
  assert.ok(compatibility.every(event => !event.attack), 'compatibility mouse event never sets attack');
  await neutral(page, 'compatibility mouse events from canvas touch');
  assert.equal(await page.evaluate(() => window.__pointerLockRequests), 0);
  report.compatibilityMouse = compatibility;
  check('orientation and visibility loss clear input; landscape UI fits; touch never requests pointer lock');

  await page.setViewportSize({width: 320, height: 568});
  await page.waitForFunction(() => innerWidth === 320);
  await layout(page, 'small-portrait');
  await tap(page, '#game-menu');
  await tap(page, '#return-menu');
  await tap(page, '#start-over');
  assert.equal(await page.locator('#new-adventure-warning').evaluate(element => element.open), true);
  await tap(page, '#cancel-new-adventure');
  assert.equal(await page.evaluate(() => window.__redcat.mode), 'menu');
  check('320px portrait controls fit and touch can cancel the new-adventure warning');
  await context.close();

  const desktop = await browser.newContext({viewport: {width: 1280, height: 720}});
  await instrument(desktop);
  const desktopPage = await openPage(desktop);
  assert.equal(await desktopPage.evaluate(() => window.__redcat.touchEnabled), false, 'desktop UA does not auto-enable touch');
  await setting(desktopPage, 'on', false, false);
  assert.equal(await desktopPage.evaluate(() => window.__redcat.touchEnabled), true, 'forced On works on desktop');
  await desktopPage.reload(); await desktopPage.waitForFunction(() => window.__redcat?.readInput);
  assert.equal(await desktopPage.evaluate(() => window.__redcat.touchEnabled), true, 'forced On persists');
  await desktop.close();
  const electron = await browser.newContext({...devices['Pixel 7'], viewport: {width: 390, height: 844}, deviceScaleFactor: 1});
  await instrument(electron, true);
  const electronPage = await openPage(electron);
  assert.equal(await electronPage.evaluate(() => window.__redcat.touchEnabled), false, 'Electron bridge suppresses auto touch even with mobile emulation');
  await setting(electronPage, 'on');
  assert.equal(await electronPage.evaluate(() => window.__redcat.touchEnabled), true, 'explicit override works with Electron bridge');
  await electron.close();
  check('desktop detection, persistent forced On and Electron auto suppression');
  assert.deepEqual(report.errors, []);
  await writeFile(`${artifacts}/touch-scenes.json`, JSON.stringify(report, null, 2) + '\n');
  console.log(`PASS ${report.checks.length} focused touch integration groups; ${artifacts}/touch-scenes.json`);
} catch(error) {
  report.failure = error.stack || String(error);
  const failedPage = browser?.contexts().flatMap(context => context.pages()).find(page => !page.isClosed());
  await failedPage?.screenshot({path: `${artifacts}/touch-failure.png`}).catch(() => {});
  await writeFile(`${artifacts}/touch-scenes.json`, JSON.stringify(report, null, 2) + '\n');
  throw error;
} finally {
  await browser?.close(); server.kill();
}
