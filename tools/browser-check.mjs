#!/usr/bin/env node
// Browser smoke check: opens the page in headless Chromium (software WebGL), starts a world and
// saves screenshots. Not a test suite. The server must be running (node tools/serve.mjs).
//   node tools/browser-check.mjs [--url http://127.0.0.1:4221/] [--browser chromium|firefox|webkit] [--world 1] [--size 1280x960] [--out tools/out/browser]
//        [--steps "wait:15000;shot:a;key:ArrowUp,1500;shot:b"] [--gpu]
// Steps: wait:ms, shot:name, key:Code,holdMs, touch:x,y,holdMs (with --mobile), eval:js, goto:query (same browser profile), state
// Needs Playwright, taken from PLAYWRIGHT_DIR (default: the A2 Racer 4 project's node_modules).
import fs from 'node:fs';
import path from 'node:path';
import { fileURLToPath } from 'node:url';
import { launch, isChromium, chromiumOnly, notRun, notRunSummary, DEV_URL } from './browsers.mjs';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const opt = (name, def) => { const k = process.argv.indexOf('--' + name); return k < 0 ? def : process.argv[k + 1]; };
const [w, h] = opt('size', '1280x960').split('x').map(Number);
const outDir = path.resolve(opt('out', path.join(ROOT, 'tools/out/browser')));
const url = opt('url', DEV_URL);
const steps = opt('steps', 'wait:12000;shot:1;wait:8000;shot:2;state').split(';').filter(Boolean);
fs.mkdirSync(outDir, { recursive: true });

const gpu = process.argv.includes('--gpu');
if (!isChromium && gpu) notRun('--gpu (a Chromium flag for its GL backend)');
const browser = await launch({ args: ['--autoplay-policy=no-user-gesture-required', '--ignore-gpu-blocklist', ...(gpu ? ['--use-angle=gl'] : ['--use-angle=swiftshader', '--enable-unsafe-swiftshader'])] });
const mobile = process.argv.includes('--mobile');
const context = await browser.newContext({ viewport: { width: w, height: h }, isMobile: mobile, hasTouch: mobile, deviceScaleFactor: mobile ? 2 : 1 });
const page = await context.newPage();
const logs = [];
page.on('console', (m) => { const t = m.text(); logs.push(t); if (m.type() === 'error' || process.argv.includes('--verbose')) console.log('[' + m.type() + ']', t.slice(0, 400)); });
page.on('pageerror', (e) => console.log('[pageerror]', e.message));
await page.goto(`${url}?autostart=1&world=${opt('world', 1)}&scale=${opt('scale', 2)}${process.argv.includes('--log') ? '&log=1' : ''}`);
console.log('isolated:', await page.evaluate(() => self.crossOriginIsolated));
for (const step of steps) {
  const k = step.indexOf(':');
  const cmd = k < 0 ? step : step.slice(0, k), arg = k < 0 ? '' : step.slice(k + 1);
  if (cmd === 'wait') await page.waitForTimeout(Number(arg));
  else if (cmd === 'shot') { const f = path.join(outDir, arg + '.png'); await page.screenshot({ path: f }); console.log('shot', f); }
  else if (cmd === 'key') { const [code, hold] = arg.split(','); await page.keyboard.down(code); await page.waitForTimeout(Number(hold || 100)); await page.keyboard.up(code); console.log('key', code); }
  else if (cmd === 'touch' && !chromiumOnly(`step touch:${arg} (CDP Input.dispatchTouchEvent)`)) continue;
  else if (cmd === 'touch') { const [x, y, hold] = arg.split(',').map(Number); const cdp = await context.newCDPSession(page); await cdp.send('Input.dispatchTouchEvent', { type: 'touchStart', touchPoints: [{ x, y, id: 1 }] }); await page.waitForTimeout(hold || 100); await cdp.send('Input.dispatchTouchEvent', { type: 'touchEnd', touchPoints: [] }); console.log('touch', x, y); }
  else if (cmd === 'goto') { await page.goto(`${url}?${arg}`); console.log('goto', arg); }
  else if (cmd === 'eval') console.log('eval:', JSON.stringify(await page.evaluate(arg)));
  else if (cmd === 'state') console.log('state:', JSON.stringify(await page.evaluate(() => ({ status: document.getElementById('status').textContent, stats: document.getElementById('stats').textContent, crash: window.__crash || null }))));
}
if (process.argv.includes('--dump-log')) fs.writeFileSync(path.join(outDir, 'console.log'), logs.join('\n'));
notRunSummary();
await browser.close();
