// Check (29 October 2026): trace what happens around the first Escape after
// Het Bos starts on the live website: key events in the capture phase from
// page start (TRACE_URL selects another server), pointer-lock calls and results, fullscreen, open dialogs and
// page focus. Usage: node escape-trace.mjs webkit|chromium [delayMs]
import {webkit, chromium} from 'playwright';
const which = process.argv[2] || 'webkit', delay = +(process.argv[3] || 2000);
const browser = which === 'chromium'
  ? await chromium.launch({executablePath: process.env.CHROME_PATH, headless: true, args: ['--use-angle=gl']})
  : await webkit.launch({headless: true});
const context = await browser.newContext({viewport: {width: 1024, height: 768}});
await context.addInitScript(() => {
  const t0 = performance.now(), log = window.__trace = [], add = s => log.push(`${Math.round(performance.now() - t0)} ${s}`);
  for (const type of ['keydown', 'keyup']) window.addEventListener(type, e => { if (e.code === 'Escape') add(`${type} Escape prevented=${e.defaultPrevented} mode=${window.__redcat?.mode}`); }, true);
  for (const type of ['pointerlockchange', 'pointerlockerror', 'fullscreenchange', 'blur', 'focus']) (type === 'blur' || type === 'focus' ? window : document).addEventListener(type, () => add(`${type} locked=${!!document.pointerLockElement} hasFocus=${document.hasFocus()}`));
  const original = Element.prototype.requestPointerLock;
  Element.prototype.requestPointerLock = function (...args) {
    add(`requestPointerLock on #${this.id} activation=${navigator.userActivation?.isActive}`);
    const result = original.apply(this, args);
    result?.then?.(() => add('lock resolved'), e => add(`lock rejected ${e.name}`));
    return result;
  };
  document.addEventListener('cancel', e => add(`dialog cancel #${e.target.id}`), true);
  document.addEventListener('close', e => add(`dialog close #${e.target.id}`), true);
});
const page = await context.newPage();
try {
  await page.goto(process.env.TRACE_URL || 'https://games.nostalgiarealm.com/redcatspookkasteel/?skipIntro');
  await page.waitForFunction(() => window.__redcat?.mode === 'menu', null, {timeout: 60000});
  for (const label of ['Avontuur', 'Volgende']) await page.getByText(label, {exact: true}).first().click();
  await page.getByText('Normaal', {exact: true}).first().waitFor({state: 'visible'});
  await page.getByText('Volgende', {exact: true}).first().click();
  await page.getByText('Start!', {exact: true}).first().click();
  await page.waitForFunction(() => window.__redcat.mode === 'playing', null, {timeout: 120000});
  await page.evaluate(() => window.__trace.push('-- playing'));
  await page.waitForTimeout(delay);
  const state = () => page.evaluate(() => ({mode: window.__redcat.mode, hasFocus: document.hasFocus(), active: document.activeElement?.id || document.activeElement?.tagName,
    openDialogs: [...document.querySelectorAll('dialog[open]')].map(d => d.id), fullscreen: !!document.fullscreenElement, locked: !!document.pointerLockElement}));
  const before = await state();
  await page.evaluate(() => window.__trace.push('-- pressing Escape'));
  await page.keyboard.press('Escape');
  await page.waitForTimeout(800);
  const after = await state();
  await page.evaluate(() => window.__trace.push('-- pressing Escape again'));
  await page.keyboard.press('Escape');
  await page.waitForTimeout(800);
  console.log(JSON.stringify({browser: `${which} ${browser.version()}`, delay, before, after, final: await state(), trace: await page.evaluate(() => window.__trace.filter(l => !/^\d+ (blur|focus)/.test(l) || true))}, null, 1));
} finally { await browser.close(); }
