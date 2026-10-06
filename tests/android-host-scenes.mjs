import assert from 'node:assert/strict';
import {spawn} from 'node:child_process';
import {mkdir, mkdtemp, writeFile} from 'node:fs/promises';
import path from 'node:path';
import {fileURLToPath} from 'node:url';
import {chromium} from 'playwright';

// Browser integration with a simulated native endpoint; this is not a device test.
// Keep profiles, screenshots and reports as evidence under current_work.
const root = fileURLToPath(new URL('../', import.meta.url));
const evidence = path.join(root, 'current_work/android-initial-2026-10-06');
await mkdir(evidence, {recursive: true});
const output = await mkdtemp(path.join(evidence, 'host-scenes-'));
// Chromium's Unix socket path limit requires a short, relative temp path.
process.chdir(root);
process.env.TMPDIR = 'current_work';
process.env.TMP = 'current_work';
process.env.TEMP = 'current_work';
const nativeOnly = process.env.ANDROID_TEST_SCOPE === 'native';
const report = {kind: 'browser-simulated-android-host', scope: nativeOnly ? 'native' : 'all', checks: [], errors: [], samples: {}};
const check = name => { report.checks.push(name); console.log(`PASS ${name}`); };
const server = spawn(process.execPath, ['tools/serve.mjs'], {
  cwd: root, env: {...process.env, PORT: process.env.ANDROID_TEST_PORT || '0'}, stdio: ['ignore', 'pipe', 'pipe'],
});
let serverLog = '';
server.stderr.on('data', chunk => { serverLog += chunk; });
const address = await new Promise((resolve, reject) => {
  let text = '';
  server.stdout.on('data', chunk => {
    serverLog += chunk; text += chunk;
    const match = text.match(/http:\/\/127\.0\.0\.1:\d+/);
    if (match) resolve(match[0]);
  });
  server.once('error', reject);
  server.once('exit', code => reject(new Error(`Fixture server exited (${code}): ${serverLog}`)));
});
let context;
const openContext = async (label, mobile) => chromium.launchPersistentContext(path.join(output, `${label}-profile`), {
  executablePath: process.env.CHROME_PATH || '/usr/bin/google-chrome', headless: true,
  args: ['--use-angle=gl', '--autoplay-policy=document-user-activation-required',
    '--disable-features=PreloadMediaEngagementData,MediaEngagementBypassAutoplayPolicies'],
  viewport: mobile ? {width: 1280, height: 720} : {width: 960, height: 540},
  deviceScaleFactor: 2, isMobile: mobile, hasTouch: mobile,
});
const lifecycle = (page, active) => page.evaluate(active => window.__androidEvent({type: 'lifecycle', active}), active);
const visibility = (page, hidden) => page.evaluate(hidden => window.__androidVisibility(hidden), hidden);
const back = page => page.evaluate(() => window.__androidEvent({type: 'back'}));
const videoState = page => page.evaluate(() => {
  const video = document.getElementById('intro-video'), button = document.getElementById('intro-play');
  return {mode: window.__redcat.mode, currentTime: video.currentTime, paused: video.paused,
    source: video.getAttribute('src'), button: button.textContent, buttonHidden: button.hidden};
});
const sampleGame = page => page.evaluate(() => {
  const app = window.__redcat;
  return {mode: app.mode, counters: {...window.__androidHarness.counters}, recoveryClock: app.recovery.clock,
    scriptTime: app.gameplay.scripts.time, position: [...app.world.player.position],
    save: localStorage.getItem('redcat.save.v1'), input: app.readInput(), audioPaused: app.audio.paused,
    audioContext: app.audio.context?.state, playingSounds: [...app.audio.sounds].filter(record => !record.element.paused).length};
});

try {
  context = await openContext('android', true);
  const page = await context.newPage();
  page.setDefaultTimeout(20000);
  page.on('pageerror', error => report.errors.push(`android: ${error}`));
  await page.addInitScript(() => {
    const harness = window.__androidHarness = {messages: [], events: [], fullscreenCalls: 0, hidden: false, counters: {saveWrites: 0}};
    // Model visibility arriving before Android's lifecycle callback. Only this
    // native fixture overrides document.hidden; ordinary browser cases do not.
    Object.defineProperty(document, 'hidden', {configurable: true, get: () => harness.hidden});
    window.__androidVisibility = hidden => {
      harness.hidden = hidden;
      harness.events.push({direction: 'visibility', hidden});
      document.dispatchEvent(new Event('visibilitychange'));
    };
    window.__androidEvent = detail => {
      harness.events.push({direction: 'native-to-web', ...detail});
      window.dispatchEvent(new CustomEvent('redcat:android', {detail}));
    };
    window.RedCatAndroid = {postMessage(serialized) {
      const message = JSON.parse(serialized);
      harness.messages.push(message);
      harness.events.push({direction: 'web-to-native', ...message});
      if (message.type === 'ready') {
        harness.beforeReadyReply = {mode: window.__redcat?.mode, videoSource: document.getElementById('intro-video').getAttribute('src')};
        // Match the asynchronous Android round trip instead of re-entering main.js.
        setTimeout(() => window.__androidEvent({type: 'lifecycle', active: true}), 0);
      }
    }};
    const requestFullscreen = Element.prototype.requestFullscreen;
    Element.prototype.requestFullscreen = function (...args) {
      harness.fullscreenCalls++;
      return requestFullscreen.apply(this, args);
    };
    const setItem = Storage.prototype.setItem;
    Storage.prototype.setItem = function (key, value) {
      if (key === 'redcat.save.v1') harness.counters.saveWrites++;
      return setItem.call(this, key, value);
    };
  });
  await page.goto(address);
  await page.waitForFunction(() => window.__redcat && document.getElementById('intro-video').currentTime > .2);
  report.samples.handshake = await page.evaluate(() => ({
    beforeReply: window.__androidHarness.beforeReadyReply,
    readyMessages: window.__androidHarness.messages.filter(message => message.type === 'ready').length,
    fullscreen: window.__androidHarness.messages.filter(message => message.type === 'fullscreen'),
    canvas: {width: document.getElementById('game').width, height: document.getElementById('game').height},
    touch: window.__redcat.touchEnabled, preference: window.__redcat.settings.touchControls,
    resolution: window.__redcat.settings.resolution, desktop: !!window.desktop,
  }));
  assert.deepEqual(report.samples.handshake.beforeReply, {mode: 'menu', videoSource: null});
  assert.equal(report.samples.handshake.readyMessages, 1);
  assert.equal(report.samples.handshake.desktop, false);
  assert.equal(report.samples.handshake.touch, true);
  assert.equal(report.samples.handshake.preference, 'auto');
  assert.equal(report.samples.handshake.resolution, 'native');
  assert.ok(report.samples.handshake.canvas.width * report.samples.handshake.canvas.height <= 1280 * 720);
  assert.deepEqual(report.samples.handshake.fullscreen, [{type: 'fullscreen', enabled: true}]);
  check('native ready handshake gates startup; automatic touch and Android pixel budget remain active');

  await lifecycle(page, false);
  const suspendedIntro = await videoState(page);
  assert.equal(suspendedIntro.mode, 'intro');
  assert.equal(suspendedIntro.paused, true);
  assert.equal(suspendedIntro.button, 'Verder kijken');
  assert.equal(suspendedIntro.buttonHidden, false);
  await page.waitForTimeout(250);
  assert.equal((await videoState(page)).currentTime, suspendedIntro.currentTime);
  await lifecycle(page, true);
  await page.waitForTimeout(250);
  const foregroundIntro = await videoState(page);
  assert.equal(foregroundIntro.paused, true);
  assert.equal(foregroundIntro.currentTime, suspendedIntro.currentTime);
  await page.getByRole('button', {name: 'Verder kijken', exact: true}).click();
  await page.waitForFunction(time => {
    const video = document.getElementById('intro-video');
    return !video.paused && video.currentTime > time + .1;
  }, suspendedIntro.currentTime);
  report.samples.intro = {suspended: suspendedIntro, foreground: foregroundIntro, resumed: await videoState(page)};
  check('native suspension preserves intro position; foreground waits for Verder kijken');
  await visibility(page, true);
  const hiddenIntro = await videoState(page);
  await page.locator('#intro-play').click();
  await page.waitForTimeout(150);
  assert.deepEqual(await videoState(page), hiddenIntro, 'intro action cannot resume while hidden before native lifecycle changes');
  await visibility(page, false);
  assert.equal((await videoState(page)).paused, true);
  await page.locator('#intro-play').click();
  await page.waitForFunction(time => document.getElementById('intro-video').currentTime > time + .1, hiddenIntro.currentTime);
  report.samples.introVisibilityRace = hiddenIntro;
  check('visibility-first intro suspension blocks its resume action until visible');
  await page.locator('#skip-intro').click();

  await page.locator('#open-settings').click();
  await page.locator('#fullscreen').uncheck();
  await page.locator('#apply-settings').click();
  assert.deepEqual(await page.evaluate(() => window.__androidHarness.messages.filter(message => message.type === 'fullscreen').at(-1)),
    {type: 'fullscreen', enabled: false});
  await page.locator('#open-settings').click();
  await page.locator('#fullscreen').check();
  await page.locator('#apply-settings').click();
  assert.deepEqual(await page.evaluate(() => window.__androidHarness.messages.filter(message => message.type === 'fullscreen').at(-1)),
    {type: 'fullscreen', enabled: true});
  assert.equal(await page.evaluate(() => window.__androidHarness.fullscreenCalls), 0);
  assert.equal(await page.evaluate(() => !!document.fullscreenElement), false);
  check('fullscreen settings reach the native bridge without calling HTML fullscreen');

  assert.equal(await page.evaluate(() => window.__redcat.startLevel(0)), true);
  await page.waitForFunction(() => window.__redcat.mode === 'playing' && window.__redcat.world.geometryStream.readyForView);
  await page.evaluate(() => {
    const app = window.__redcat, counters = window.__androidHarness.counters;
    for (const [object, method, counter] of [[app.world, 'update', 'updates'], [app.world, 'render', 'renders'],
      [app.audio, 'update', 'audioUpdates'], [app.recovery, 'capture', 'captures']]) {
      counters[counter] = 0;
      const original = object[method];
      object[method] = function (...args) { counters[counter]++; return original.apply(this, args); };
    }
  });
  await page.waitForFunction(() => window.__androidHarness.counters.updates > 1 && window.__androidHarness.counters.renders > 1);
  await back(page);
  assert.equal(await page.evaluate(() => window.__redcat.mode), 'paused');
  assert.equal(await page.locator('#pause').isVisible(), true);
  assert.equal(await page.evaluate(() => window.__redcat.audio.paused), true);
  await page.locator('#resume').click();
  await page.waitForFunction(() => window.__redcat.mode === 'playing');
  check('Level 1 loads and native Back pauses the real game');

  await page.keyboard.down('KeyW');
  const heldTouch = await page.evaluate(() => window.__redcat.touchControls.context.cutscene ? '#touch-skip' : '#touch-jump');
  await page.locator(heldTouch).dispatchEvent('pointerdown', {pointerId: 19, pointerType: 'touch', button: 0, clientX: 10, clientY: 10});
  assert.equal(await page.evaluate(() => window.__redcat.readInput().forward), 1);
  assert.equal(await page.evaluate(() => window.__redcat.touchControls.pointers.size), 1);
  await lifecycle(page, false);
  await page.evaluate(() => window.__redcat.recovery.flush());
  await page.waitForFunction(() => !window.__redcat.audio.context || window.__redcat.audio.context.state === 'suspended');
  const frozen = await sampleGame(page);
  assert.equal(frozen.mode, 'paused');
  assert.equal(frozen.audioPaused, true);
  assert.equal(frozen.playingSounds, 0);
  assert.ok(Object.values(frozen.input).every(value => value === 0 || value === false));
  assert.equal(await page.evaluate(() => window.__redcat.touchControls.pointers.size), 0);
  assert.equal(JSON.parse(frozen.save).level, 'lvl00a');
  await page.waitForTimeout(350);
  assert.deepEqual(await sampleGame(page), frozen, 'background must not simulate, render, advance recovery/audio, or write more saves');
  await page.evaluate(() => window.__redcat.resume());
  assert.equal(await page.evaluate(() => window.__redcat.mode), 'paused', 'inactive host refuses resume');
  await page.keyboard.up('KeyW');
  await lifecycle(page, true);
  await page.waitForTimeout(250);
  const foreground = await sampleGame(page);
  assert.equal(foreground.mode, 'paused');
  assert.equal(foreground.audioPaused, true);
  assert.equal(foreground.recoveryClock, frozen.recoveryClock);
  assert.equal(foreground.counters.updates, frozen.counters.updates);
  assert.equal(foreground.counters.saveWrites, frozen.counters.saveWrites);
  assert.ok(foreground.counters.renders > frozen.counters.renders, 'foreground can render the paused scene');
  await page.locator('#resume').click();
  await page.waitForFunction(previous => window.__androidHarness.counters.updates > previous && !window.__redcat.audio.paused, frozen.counters.updates);
  report.samples.suspension = {frozen, foreground, resumed: await sampleGame(page)};
  check('native background freezes simulation, rendering, audio and save clocks, clears held input, and requires explicit resume');
  await visibility(page, true);
  await page.evaluate(() => window.__redcat.recovery.flush());
  await page.waitForFunction(() => !window.__redcat.audio.context || window.__redcat.audio.context.state === 'suspended');
  const visibilityFrozen = await sampleGame(page);
  assert.equal(visibilityFrozen.mode, 'paused');
  await page.evaluate(() => window.__redcat.resume());
  await page.waitForTimeout(250);
  assert.deepEqual(await sampleGame(page), visibilityFrozen, 'hidden document stays frozen even while native active remains true');
  await visibility(page, false);
  await page.waitForFunction(previous => window.__androidHarness.counters.renders > previous, visibilityFrozen.counters.renders);
  const visibilityForeground = await sampleGame(page);
  assert.equal(visibilityForeground.mode, 'paused');
  assert.equal(visibilityForeground.counters.updates, visibilityFrozen.counters.updates);
  assert.equal(visibilityForeground.recoveryClock, visibilityFrozen.recoveryClock);
  assert.equal(visibilityForeground.audioPaused, true);
  report.samples.visibilityRace = {hidden: visibilityFrozen, foreground: visibilityForeground};
  await page.locator('#resume').click();
  await page.waitForFunction(() => window.__redcat.mode === 'playing');
  check('visibility-first gameplay suspension blocks resume; visibility restoration renders a paused scene');
  await back(page);
  await page.screenshot({path: path.join(output, 'android-paused.png')});
  await back(page);
  assert.equal(await page.evaluate(() => window.__redcat.mode), 'menu');
  await page.evaluate(() => window.__redcat.recovery.flush());

  let releaseLevel;
  const levelGate = new Promise(resolve => { releaseLevel = resolve; });
  let enteredLevel;
  const levelRequested = new Promise(resolve => { enteredLevel = resolve; });
  const levelRoute = '**/data/levels/lvl00a/level.json';
  await page.route(levelRoute, async route => { enteredLevel(); await levelGate; await route.continue(); });
  await page.evaluate(() => { window.__hiddenLevelLoad = window.__redcat.startLevel(0); });
  await levelRequested;
  assert.equal(await page.evaluate(() => window.__redcat.mode), 'loading');
  await visibility(page, true);
  releaseLevel();
  assert.equal(await page.evaluate(() => window.__hiddenLevelLoad), true);
  await page.unroute(levelRoute);
  await page.evaluate(async () => {
    const app = window.__redcat;
    await app.recovery.flush();
    window.__hiddenCompletionRenders = 0;
    const render = app.world.render;
    app.world.render = function (...args) { window.__hiddenCompletionRenders++; return render.apply(this, args); };
  });
  const hiddenCompletion = await sampleGame(page);
  assert.equal(hiddenCompletion.mode, 'paused');
  assert.equal(hiddenCompletion.audioPaused, true);
  assert.equal(hiddenCompletion.playingSounds, 0);
  await page.evaluate(() => window.__redcat.resume());
  await page.waitForTimeout(250);
  assert.deepEqual(await sampleGame(page), hiddenCompletion);
  assert.equal(await page.evaluate(() => window.__hiddenCompletionRenders), 0);
  await visibility(page, false);
  await page.waitForFunction(() => window.__hiddenCompletionRenders > 0);
  assert.equal(await page.evaluate(() => window.__redcat.mode), 'paused');
  assert.equal(await page.evaluate(() => window.__redcat.audio.paused), true);
  report.samples.hiddenLevelCompletion = {level: 'lvl00a', mode: hiddenCompletion.mode,
    backgroundRenders: 0, foregroundRenders: await page.evaluate(() => window.__hiddenCompletionRenders)};
  check('a level finishing loading while hidden remains paused and silent until explicitly resumed');
  await page.locator('#return-menu').click();
  await page.evaluate(() => window.__redcat.recovery.flush());

  // Delay a real IndexedDB write, then verify native quit follows its completion.
  await page.evaluate(() => {
    const app = window.__redcat, harness = window.__androidHarness;
    const gate = new Promise(resolve => { window.__releaseQuitSave = resolve; });
    const write = app.recovery.storage.write.bind(app.recovery.storage);
    app.recovery.storage.write = async state => {
      harness.events.push({type: 'recovery-write-start'});
      await gate;
      await write(state);
      harness.events.push({type: 'recovery-write-complete'});
    };
    app.recovery.advance(60);
  });
  await back(page);
  await page.waitForFunction(() => window.__androidHarness.events.some(event => event.type === 'recovery-write-start'));
  await page.waitForTimeout(150);
  assert.equal(await page.evaluate(() => window.__androidHarness.messages.some(message => message.type === 'quit')), false);
  await page.evaluate(() => window.__releaseQuitSave());
  await page.waitForFunction(() => window.__androidHarness.messages.some(message => message.type === 'quit'));
  report.samples.bridge = await page.evaluate(() => window.__androidHarness);
  const events = report.samples.bridge.events;
  assert.ok(events.findIndex(event => event.type === 'quit') > events.findIndex(event => event.type === 'recovery-write-complete'));
  assert.ok(report.samples.bridge.messages.some(message => message.type === 'keep-awake' && message.enabled));
  assert.ok(report.samples.bridge.messages.some(message => message.type === 'keep-awake' && !message.enabled));
  assert.equal(await page.locator('#fatal').isVisible(), false);
  check('native quit waits for the latest real recovery write; keep-awake follows activity');
  await context.close(); context = null;

  for (const mobile of nativeOnly ? [] : [false, true]) {
    const label = mobile ? 'mobile-browser' : 'desktop-browser';
    context = await openContext(label, mobile);
    const browserPage = await context.newPage();
    if (mobile) await browserPage.setViewportSize({width: 390, height: 844});
    browserPage.setDefaultTimeout(25000);
    browserPage.on('pageerror', error => report.errors.push(`${label}: ${error}`));
    await browserPage.addInitScript(() => {
      window.__browserFullscreenCalls = 0;
      const requestFullscreen = Element.prototype.requestFullscreen;
      Element.prototype.requestFullscreen = function (...args) {
        window.__browserFullscreenCalls++;
        return requestFullscreen.apply(this, args);
      };
    });
    await browserPage.goto(address);
    await browserPage.waitForFunction(() => window.__redcat && document.getElementById('intro-video').currentTime > .2);
    assert.equal(await browserPage.evaluate(() => 'RedCatAndroid' in window), false);
    assert.equal(await browserPage.evaluate(() => window.__redcat.touchEnabled), mobile);
    assert.equal(await browserPage.evaluate(() => document.fullscreenElement), null);
    await browserPage.locator('#intro-play').click();
    await browserPage.waitForFunction(() => !!document.fullscreenElement && !document.getElementById('intro-video').muted);
    assert.ok(await browserPage.evaluate(() => window.__browserFullscreenCalls > 0));
    await browserPage.locator('#skip-intro').click();
    await browserPage.locator('#open-settings').click();
    await browserPage.locator('#fullscreen').uncheck();
    await browserPage.locator('#auto-intro').uncheck();
    await browserPage.locator('#apply-settings').click();
    await browserPage.waitForFunction(() => !document.fullscreenElement && !window.__redcat.settings.fullscreen);
    check(`${label}: no bridge, real intro playback and gesture-based HTML fullscreen remain intact`);

    for (const preference of ['off', 'on', 'auto']) {
      await browserPage.locator('#open-settings').click();
      await browserPage.locator('#touch-controls-setting').selectOption(preference);
      await browserPage.locator('#apply-settings').click();
      assert.equal(await browserPage.evaluate(() => window.__redcat.touchEnabled), preference === 'on' || preference === 'auto' && mobile);
    }
    const browser = report.samples[label] = await browserPage.evaluate(() => ({
      hasBridge: 'RedCatAndroid' in window, mode: window.__redcat.mode, touch: window.__redcat.touchEnabled,
      resolution: window.__redcat.settings.resolution, width: document.getElementById('game').width,
      height: document.getElementById('game').height, innerWidth, innerHeight, pixelRatio: devicePixelRatio,
    }));
    assert.equal(browser.mode, 'menu');
    assert.equal(browser.touch, mobile);
    assert.equal(browser.resolution, 'native');
    assert.equal(browser.width, Math.min(7680, Math.round(browser.innerWidth * browser.pixelRatio)));
    assert.equal(browser.height, Math.min(4320, Math.round(browser.innerHeight * browser.pixelRatio)));
    assert.ok(browser.width * browser.height > 1280 * 720, 'browser keeps its existing native resolution branch');
    check(`${label}: touch settings and uncapped native DPR resolution remain unchanged`);

    await browserPage.locator('#start').click();
    await browserPage.waitForFunction(() => window.__redcat.mode === 'playing' && window.__redcat.world.geometryStream.readyForView,
      null, {timeout: 45000});
    await browserPage.keyboard.press('KeyP');
    assert.equal(await browserPage.locator('#pause').isVisible(), true);
    assert.equal(await browserPage.evaluate(() => window.__redcat.audio.paused), true);
    await browserPage.locator('#resume').click();
    await browserPage.waitForFunction(() => window.__redcat.mode === 'playing' && !window.__redcat.audio.paused);
    await browserPage.evaluate(async label => {
      const app = window.__redcat;
      app.pause();
      app.gameplay.variables.set('android-host-browser-regression', label);
      app.recovery.advance(60);
      app.saveGame(true);
      await app.recovery.flush();
    }, label);
    await browserPage.screenshot({path: path.join(output, `${label}-paused.png`)});
    await browserPage.reload();
    await browserPage.waitForFunction(() => window.__redcat);
    const persisted = await browserPage.evaluate(async () => {
      const app = window.__redcat;
      await app.recovery.ready;
      return {mode: app.mode, fullscreen: app.settings.fullscreen, intro: app.settings.autoIntro,
        touch: app.settings.touchControls, latest: JSON.parse(localStorage.getItem('redcat.save.v1')),
        recovery: app.recovery.state.checkpoints.at(-1)?.save};
    });
    assert.equal(persisted.mode, 'menu');
    assert.equal(persisted.fullscreen, false);
    assert.equal(persisted.intro, false);
    assert.equal(persisted.touch, 'auto');
    assert.equal(persisted.latest.level, 'lvl00a');
    assert.equal(persisted.recovery.level, 'lvl00a');
    assert.equal(new Map(persisted.latest.game.variables).get('android-host-browser-regression'), label);
    assert.equal(new Map(persisted.recovery.game.variables).get('android-host-browser-regression'), label);
    await browserPage.locator('#continue').click();
    await browserPage.waitForFunction(() => window.__redcat.mode === 'playing', null, {timeout: 45000});
    assert.equal(await browserPage.evaluate(() => window.__redcat.gameplay.variables.get('android-host-browser-regression')), label);
    assert.equal(await browserPage.locator('#fatal').isVisible(), false);
    report.samples[label].persistence = {level: persisted.latest.level, marker: label,
      settingsRestored: true, localStorageRestored: true, indexedDBRestored: true};
    check(`${label}: Level 1 pause/resume and localStorage plus IndexedDB persistence survive reload and Continue`);
    await context.close(); context = null;
  }
  assert.deepEqual(report.errors, []);
} catch (error) {
  report.failure = error.stack || String(error);
  throw error;
} finally {
  await writeFile(path.join(output, 'report.json'), `${JSON.stringify(report, null, 2)}\n`);
  await writeFile(path.join(output, 'server.log'), serverLog);
  await context?.close();
  server.kill();
  console.log(`Browser integration evidence: ${output}`);
}
