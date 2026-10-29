// Check (29 October 2026): play the live website in Playwright's WebKit 26.0
// (the engine behind Safari, here its Linux build): intro, menu, Avontuur on
// Normaal, then Het Bos. Reports console errors, failed requests, media and
// audio state, and saves screenshots next to this script (the 29 October
// screenshots are in temp_work/scene-output/webkit-check-2026-10-29). Fresh isolated
// browser profile; nothing is kept afterwards.
import {webkit} from 'playwright';
import {fileURLToPath} from 'node:url';
import path from 'node:path';

const here = path.dirname(fileURLToPath(import.meta.url));
const url = process.argv[2] || 'https://games.nostalgiarealm.com/redcatspookkasteel/';
const headless = process.env.HEADED !== '1';
const shot = name => page.screenshot({path: path.join(here, `${name}.png`)});
const report = {url, browser: null, console: [], pageErrors: [], failed: [], steps: []};
const step = (name, data = {}) => { report.steps.push({name, ...data}); console.error(`-- ${name}`, JSON.stringify(data)); };

const browser = await webkit.launch({headless});
report.browser = browser.version();
const context = await browser.newContext({viewport: {width: 1024, height: 768}});
const page = await context.newPage();
page.on('console', m => { if (['error', 'warning'].includes(m.type())) report.console.push(`${m.type()}: ${m.text()}`); });
page.on('pageerror', e => report.pageErrors.push(String(e)));
page.on('requestfailed', r => report.failed.push(`${r.url()} ${r.failure()?.errorText}`));
page.on('response', r => { if (r.status() >= 400) report.failed.push(`${r.url()} HTTP ${r.status()}`); });

try {
  await page.goto(url, {waitUntil: 'load'});
  await page.waitForFunction(() => window.__redcat, null, {timeout: 30000});
  step('loaded', await page.evaluate(() => ({
    version: document.body.innerHTML.match(/Versie <strong>([0-9.]+)<\/strong>/)?.[1],
    webgl2: !!document.createElement('canvas').getContext('webgl2'),
    canPlay: {webm: document.createElement('video').canPlayType('video/webm; codecs="vp9"') || document.createElement('video').canPlayType('video/webm'),
      wav: document.createElement('audio').canPlayType('audio/wav')},
    mode: window.__redcat.mode})));
  await page.waitForTimeout(3000);
  step('intro', await page.evaluate(() => [...document.querySelectorAll('video')].map(v => ({
    src: v.currentSrc.split('/').pop(), readyState: v.readyState, paused: v.paused, time: +v.currentTime.toFixed(1), error: v.error?.code ?? null}))));
  await shot('1-intro');
  const skip = page.getByText('Overslaan', {exact: false}).first();
  if (await skip.isVisible().catch(() => false)) await skip.click();
  await page.getByText('Avontuur', {exact: true}).first().waitFor({state: 'visible', timeout: 30000});
  await shot('2-menu');
  await page.getByText('Avontuur', {exact: true}).first().click();
  await page.getByText('Volgende', {exact: true}).first().click();
  await page.getByText('Normaal', {exact: true}).first().waitFor({state: 'visible'});
  await page.getByText('Volgende', {exact: true}).first().click();
  await page.getByText('Start!', {exact: true}).first().waitFor({state: 'visible'});
  await shot('3-startinfo');
  await page.getByText('Start!', {exact: true}).first().click();
  await page.waitForFunction(() => window.__redcat.mode === 'playing', null, {timeout: 120000});
  await page.waitForTimeout(8000);
  await shot('4-het-bos');
  step('playing', await page.evaluate(async () => {
    const a = window.__redcat.audio, music = [];
    for (const [u, p] of a.musicBufferCache) music.push(await p.then(b => ({file: decodeURIComponent(u.split('/').pop()), seconds: +b.duration.toFixed(1)}), e => ({file: u, error: String(e)})));
    const sounds = [...a.sounds].map(r => ({name: r.name, channel: r.channel, paused: r.element?.paused, error: r.element?.error?.code ?? null}));
    const resources = performance.getEntriesByType('resource');
    return {mode: window.__redcat.mode, level: window.__redcat.gameplay?.level?.id, fps: window.__redcat.world?.fps ?? null,
      audioContext: a.context?.state ?? 'none', sampleRate: a.context?.sampleRate, music,
      soundCount: sounds.length, soundErrors: sounds.filter(s => s.error !== null), soundNames: [...new Set(sounds.map(s => s.name))],
      resources: resources.length};
  }));
  await page.keyboard.press('Escape');
  await page.waitForTimeout(1000);
  step('paused', {mode: await page.evaluate(() => window.__redcat.mode)});
  await shot('5-paused');
} catch (error) {
  report.error = String(error);
  await shot('error').catch(() => {});
} finally {
  await browser.close();
  console.log(JSON.stringify(report, null, 2));
}
