// One launcher for the checks that open a browser:  --browser chromium|firefox|webkit  (default chromium).
//
//   import { launch, engine, isChromium, chromiumOnly, notRun, canPatch, notRunSummary, escThroughFullscreen, DEV_URL } from './browsers.mjs';
//   const browser = await launch({ args: [...flags for Chromium...] });
//   const context = await browser.newContext({ ... });      // as Playwright's, in every engine
//
// Chromium gets Playwright's own Browser, untouched: the checks run there exactly as they did.
// What the other two cannot do is never passed over in silence: every part that is left out or
// replaced prints a line "not run in <engine>: ..." (notRun, chromiumOnly), and notRunSummary()
// counts them at the end. These are Playwright's builds: its Firefox, and the Linux build of
// WebKit, which is Safari's engine and NOT Safari on a Mac or an iPhone.
//
// Firefox (Playwright's build):
//   - no isMobile: a context that asks for it gets a Firefox for Android user agent with touch
//     (the port's phone rule reads the user agent); devicePixelRatio and a phone's viewport rules
//     are not emulated;
//   - no CDP (touch through Input.dispatchTouchEvent, process memory): chromiumOnly() around it;
//   - context.route() does not see what a worker imports (source/render/*, source/host/*): a change
//     made that way would silently not apply, so ask canPatch(file) first and leave the part out;
//   - the window's `load` event may never come after a page that just stopped a game (a menu voice
//     of the page being left stays in the load group; verdict in docs/LLM_GUIDE.md "Other browsers"),
//     so goto() waits for 'domcontentloaded', and a goto that reports "interrupted by another
//     navigation" (about:blank from the isolated page) goes on with a printed line.
// WebKit (Playwright's Linux build):
//   - WebGL in a worker is switched off in this build (it is on in Safari): every context is a
//     browser of its own with --features=+AllowWebGLInWorkers and a throwaway profile under
//     tools/out/browser-profiles/, and only the first page of a context has it; a profile is removed
//     when its context closes, at the end of the process whatever ended it, and at the next launch
//     when the process that made it is gone;
//   - isMobile keeps a Mac user agent, and the port's phone rule reads the user agent: a context
//     that asks for isMobile without a user agent gets an iPhone's (maxTouchPoints stays 0);
//   - its web process dies at random while a world is drawn (PLAN.md milestone 31): every death
//     prints "web process died in webkit", and a check that ends because of it says so at its end,
//     so that it is not read as a failure of the port;
//   - AudioContext.resume() holds the page's main thread for seconds in this build (GStreamer),
//     so a click that ends a pause returns late: actions and waits without a time of their own get
//     WEBKIT_TIMEOUT instead of Playwright's 30 s;
//   - no CDP either.
// Firefox and WebKit: Esc on a page in full screen leaves full screen and does not reach the page,
// as in a real browser (Playwright's Chromium hands the key to the page): escThroughFullscreen(page).
// Needs Playwright, taken from PLAYWRIGHT_DIR (default: the A2 Racer 4 project's node_modules).
import fs from 'node:fs';
import path from 'node:path';
import { createRequire } from 'node:module';
import { fileURLToPath } from 'node:url';
export { DEV_PORT, DEV_URL } from './dev-port.mjs';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const require = createRequire(path.join(process.env.PLAYWRIGHT_DIR || path.resolve(ROOT, '../../A2 Racer 4/node_modules'), 'x.js'));
const ENGINES = ['chromium', 'firefox', 'webkit'];
const at = process.argv.indexOf('--browser');
export const engine = at < 0 ? 'chromium' : process.argv[at + 1];
if (!ENGINES.includes(engine)) { console.error(`--browser ${engine}: one of ${ENGINES.join(', ')}`); process.exit(2); }
export const isChromium = engine === 'chromium';
let pw = null;
/** Playwright itself, for what the launcher does not cover. */
export const playwright = () => pw || (pw = require('playwright'));

const left = [];
/** Says that a part of a check is left out in this engine. Returns false, so `if (!chromiumOnly(...)) return;` reads well. */
export function notRun(what) { console.log(`     not run in ${engine}: ${what}`); left.push(what); return false; }
const once = new Set();
const notRunOnce = (what) => { if (!once.has(what)) { once.add(what); notRun(what); } };
/** true in Chromium; elsewhere prints the "not run" line for `what` and returns false. */
export const chromiumOnly = (what) => isChromium || notRun(what);
/** Whether a change to source/<file> made with context.route() reaches the browser (see above). */
export const canPatch = (file) => !(engine === 'firefox' && /^(render|host)\//.test(file));
export const notRunCount = () => left.length;
/** One line at the end of a check, when anything was left out. */
export function notRunSummary() { if (left.length) console.log(`${left.length} part(s) not run in ${engine}: see the "not run in ${engine}" lines above`); }

const IPHONE = 'Mozilla/5.0 (iPhone; CPU iPhone OS 18_0 like Mac OS X) AppleWebKit/605.1.15 (KHTML, like Gecko) Version/18.0 Mobile/15E148 Safari/604.1';
const WEBKIT_TIMEOUT = 90000;
const FIREFOX_PHONE = 'Mozilla/5.0 (Android 14; Mobile; rv:146.0) Gecko/146.0 Firefox/146.0';
function firefoxContext(options = {}) {
  const { isMobile, ...rest } = options;
  if (isMobile) {
    notRunOnce('phone emulation (isMobile, a phone\'s devicePixelRatio and viewport rules); a Firefox for Android user agent with touch stands in');
    return { ...rest, userAgent: FIREFOX_PHONE, hasTouch: true };
  }
  if (rest.userAgent && /Android/.test(rest.userAgent) && /Chrome\//.test(rest.userAgent)) rest.userAgent = FIREFOX_PHONE;
  return rest;
}
function firefoxPage(page) {
  const goto = page.goto.bind(page);
  page.goto = async (address, options = {}) => {
    try { return await goto(address, { waitUntil: 'domcontentloaded', ...options }); }
    catch (e) {
      if (!/interrupted by another navigation|NS_BINDING_ABORTED/.test(String(e && e.message))) throw e;
      console.log(`     (firefox: goto ${address} reported "interrupted by another navigation"; going on)`);
      await page.waitForLoadState('domcontentloaded', { timeout: 15000 }).catch(() => {});
      return null;
    }
  };
  return page;
}

/**
 * For a check that presses Esc on a dialog while the page may be in full screen and means the page's
 * Esc: outside Chromium such an Esc is pressed once to leave full screen first (with a printed line).
 * Not for a check of what leaving full screen itself does.
 */
export function escThroughFullscreen(page) {
  if (isChromium) return page;
  const press = page.keyboard.press.bind(page.keyboard);
  page.keyboard.press = async (key, options) => {
    if (key === 'Escape' && await page.evaluate(() => !!document.fullscreenElement).catch(() => false)) {
      console.log(`     (${engine}: the page is in full screen, where the browser keeps the first Esc: pressed once to leave it, then again for the page)`);
      // the page must have heard that full screen is gone before the next key: the three Escs of a check come within
      // milliseconds, and a fullscreenchange that arrives after the dialog closed is taken for the player's Esc in a game
      await page.evaluate(() => { window.__fullScreenLeft = new Promise((done) => { const heard = () => { if (!document.fullscreenElement) { document.removeEventListener('fullscreenchange', heard); done(true); } }; document.addEventListener('fullscreenchange', heard); setTimeout(() => done(false), 5000); }); });
      await press(key, options);
      if (!await page.evaluate(() => window.__fullScreenLeft).catch(() => false)) console.log(`     (${engine}: full screen was not left within 5 s of that Esc)`);
      await page.waitForTimeout(100);
    }
    return press(key, options);
  };
  return page;
}

// WebKit: throwaway profiles, and the deaths of its web process
const PROFILES = path.join(ROOT, 'tools/out/browser-profiles');
const mine = new Set();
let deaths = 0, cleaning = false;
const alive = (pid) => { try { process.kill(pid, 0); return true; } catch (e) { return e.code === 'EPERM'; } };
function sweepProfiles() {
  let names = [];
  try { names = fs.readdirSync(PROFILES); } catch (e) { return; }
  for (const name of names) {
    const m = /^webkit-(\d+)-\d+$/.exec(name);
    if (m && Number(m[1]) !== process.pid && !alive(Number(m[1]))) fs.rmSync(path.join(PROFILES, name), { recursive: true, force: true });
  }
}
function atExit() {
  if (cleaning) return;
  cleaning = true;
  process.on('exit', (code) => {
    for (const dir of mine) { try { fs.rmSync(dir, { recursive: true, force: true }); } catch (e) { /* in use: the next launch sweeps it */ } }
    if (deaths && code) console.log(`this check ended with exit code ${code} after ${deaths} death(s) of the web process in webkit (Playwright's Linux build, not Safari; PLAN.md milestone 31): what stopped or failed after a death is not a result about the port`);
  });
  for (const signal of ['SIGINT', 'SIGTERM', 'SIGHUP']) process.on(signal, () => process.exit(130));
}
function watchDeath(page) {
  page.on('crash', () => { deaths++; console.log(`     web process died in webkit (${page.url().replace(/^https?:\/\/[^/]+/, '') || 'no address'}): this build, see PLAN.md milestone 31`); });
  return page;
}
/** How often WebKit's web process died under this check. */
export const webProcessDeaths = () => deaths;

let profiles = 0;
/**
 * A browser of the engine chosen with --browser. args: flags for Chromium only (GL backend, autoplay);
 * autoplay without a click is given to Firefox through its preferences when the flags ask for it.
 */
// WebKit has no mute switch: its sound server addresses point nowhere, so it finds no output device.
const SILENT_ENV = { ...process.env, PULSE_SERVER: 'unix:/nonexistent/pulse', PIPEWIRE_REMOTE: 'nonexistent-pipewire', PIPEWIRE_RUNTIME_DIR: '/nonexistent', ALSA_CONFIG_PATH: '/nonexistent/alsa.conf' };

export async function launch({ args = [], headless = true } = {}) {
  // No check may be heard: the browsers these tools start are silent (the owner's own sound keeps playing).
  if (isChromium) return playwright().chromium.launch({ headless, args: ['--mute-audio', ...args] });
  if (engine === 'firefox') {
    const autoplay = args.some((a) => /autoplay-policy=no-user-gesture-required/.test(a));
    const real = await playwright().firefox.launch({ headless, firefoxUserPrefs: { 'webgl.force-enabled': true, 'media.volume_scale': '0.0', ...(autoplay ? { 'media.autoplay.default': 0, 'media.autoplay.blocking_policy': 0 } : {}) } });
    return {
      engine, real,
      async newContext(options) {
        const context = await real.newContext(firefoxContext(options));
        const newPage = context.newPage.bind(context);
        context.newPage = async () => firefoxPage(await newPage());
        return context;
      },
      close: () => real.close(),
      version: () => real.version(),
    };
  }
  // WebKit: a persistent context per newContext(), because the feature flag only reaches those
  const open = new Set();
  sweepProfiles(); atExit();
  return {
    engine,
    async newContext(options = {}) {
      const dir = path.join(PROFILES, `webkit-${process.pid}-${++profiles}`);
      fs.rmSync(dir, { recursive: true, force: true }); fs.mkdirSync(dir, { recursive: true });
      mine.add(dir);
      if (options.isMobile && !options.userAgent) {
        notRunOnce('phone emulation as a phone has it (isMobile keeps a Mac user agent in this build, and maxTouchPoints stays 0); an iPhone user agent stands in');
        options = { ...options, userAgent: IPHONE };
      }
      const context = await playwright().webkit.launchPersistentContext(dir, { headless, args: ['--features=+AllowWebGLInWorkers'], env: SILENT_ENV, ...options });
      context.setDefaultTimeout(WEBKIT_TIMEOUT);
      for (const p of context.pages()) watchDeath(p);
      context.on('page', watchDeath);
      const first = context.pages()[0];
      let given = false;
      const newPage = context.newPage.bind(context);
      context.newPage = async () => {
        if (!given && first) { given = true; return first; }
        notRunOnce('WebGL in a worker on a second page of one context (this Linux build gives it to the first page only): what such a page draws');
        return newPage();
      };
      const close = context.close.bind(context);
      context.close = async () => { open.delete(context); try { await close(); } catch (e) { /* gone */ } fs.rmSync(dir, { recursive: true, force: true }); mine.delete(dir); };
      open.add(context);
      return context;
    },
    async close() { for (const c of [...open]) await c.close(); },
    version: () => 'WebKit (Playwright, Linux build)',
  };
}
