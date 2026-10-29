// Check (29 October 2026): does Escape pause Het Bos on the live website in
// WebKit and in Chromium? Starts the chapter through the menus, then presses
// Escape at several moments and records the key event, the game mode and
// the cutscene state. Usage: node escape-pause-check.mjs webkit|chromium
import {webkit, chromium} from 'playwright';

const which = process.argv[2] || 'webkit';
const url = 'https://games.nostalgiarealm.com/redcatspookkasteel/?skipIntro';
const browser = which === 'chromium'
  ? await chromium.launch({executablePath: process.env.CHROME_PATH, headless: true, args: ['--use-angle=gl']})
  : await webkit.launch({headless: true});
const page = await (await browser.newContext({viewport: {width: 1024, height: 768}})).newPage();
const errors = [];
page.on('pageerror', e => errors.push(String(e)));
const state = () => page.evaluate(() => {
  const a = window.__redcat, h = a.gameplay?.scripts;
  return {mode: a.mode, cutscene: !!h?.cutscene, pauseHidden: document.getElementById('pause').hidden,
    pointerLock: !!document.pointerLockElement, focus: document.activeElement?.id || document.activeElement?.tagName};
});
const results = [];
try {
  await page.goto(url);
  await page.waitForFunction(() => window.__redcat?.mode === 'menu', null, {timeout: 60000});
  await page.evaluate(() => { window.__keys = []; window.addEventListener('keydown', e => window.__keys.push({code: e.code, key: e.key, trusted: e.isTrusted, mode: window.__redcat.mode}), true); });
  for (const label of ['Avontuur', 'Volgende']) await page.getByText(label, {exact: true}).first().click();
  await page.getByText('Normaal', {exact: true}).first().waitFor({state: 'visible'});
  await page.getByText('Volgende', {exact: true}).first().click();
  await page.getByText('Start!', {exact: true}).first().click();
  await page.waitForFunction(() => window.__redcat.mode === 'playing', null, {timeout: 120000});
  const started = Date.now();
  for (const at of [2000, 8000, 20000]) {
    await page.waitForTimeout(Math.max(0, started + at - Date.now()));
    const before = await state();
    await page.keyboard.press('Escape');
    await page.waitForTimeout(600);
    const after = await state();
    results.push({atMs: at, before, after, keys: await page.evaluate(() => window.__keys.splice(0))});
    if (after.mode === 'paused') { await page.keyboard.press('Escape'); await page.waitForTimeout(600); results.push({resumed: await state()}); }
  }
} catch (error) {
  results.push({error: String(error)});
} finally {
  console.log(JSON.stringify({browser: `${which} ${browser.version()}`, errors, results}, null, 1));
  await browser.close();
}
