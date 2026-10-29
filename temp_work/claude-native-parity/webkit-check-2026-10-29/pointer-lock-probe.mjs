// Check (29 October 2026): how this WebKit and Chromium answer a pointer-lock
// request made without a click (as the game does when a chapter has loaded),
// and whether the next Escape key reaches the page.
import {webkit, chromium} from 'playwright';
const which = process.argv[2] || 'webkit';
const browser = which === 'chromium'
  ? await chromium.launch({executablePath: process.env.CHROME_PATH, headless: true})
  : await webkit.launch({headless: true});
const page = await browser.newPage();
await page.setContent('<canvas id="c" width="200" height="200"></canvas>');
const out = await page.evaluate(async () => {
  const log = [], c = document.getElementById('c');
  for (const type of ['pointerlockchange', 'pointerlockerror']) document.addEventListener(type, () => log.push(`${type} locked=${!!document.pointerLockElement}`));
  window.__keys = [];
  window.addEventListener('keydown', e => window.__keys.push(e.code));
  let result;
  try { const p = c.requestPointerLock(); result = p ? await Promise.race([p.then(() => 'resolved', e => `rejected: ${e.name}`), new Promise(r => setTimeout(() => r('still pending after 2 s'), 2000))]) : 'no promise'; }
  catch (e) { result = `threw: ${e.name}`; }
  return {result, log, locked: !!document.pointerLockElement};
});
await page.keyboard.press('Escape');
await page.keyboard.press('Escape');
out.keysAfterTwoEscapes = await page.evaluate(() => window.__keys);
console.log(which, browser.version(), JSON.stringify(out));
await browser.close();
