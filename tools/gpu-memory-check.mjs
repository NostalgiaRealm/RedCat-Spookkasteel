#!/usr/bin/env node
// Memory check of the picture's way to the screen: starts a world in headless Chromium and
// watches, second by second, the memory of the browser's GPU process and of the page's own
// process, the frame rate and the number of frames the render worker drew. A frame that is not
// freed shows as memory that keeps growing: before the render worker existed every frame leaked
// a full-size surface (about 500 MB per second at 1920x1080). The save-state check in the Node
// runner cannot see any of this. The server must be running (node tools/serve.mjs).
//   node tools/gpu-memory-check.mjs [--url http://127.0.0.1:4221/] [--browser chromium|firefox|webkit] [--world 1] [--seconds 60] [--angle gl|swiftshader]
//        [--torch castle|yard] [--fixes handTorches=0]
// --torch: RedCat is put among hand torches first (tools/torch-place.mjs; the Castle's hall of hands or the Graveyard's
// entrance), so that the measurement covers their lights and flames: at a world's start no hand is in reach.
//        [--size 1920x1080] [--dpr 1] [--mobile] [--msaa N] [--pause] [--min-fps N] [--name w1-gl] [--out tools/out/gpu-memory]
// --angle gl uses the machine's GPU: the GPU process's video memory is then read from the kernel's
//   per-process DRM counters (/proc/<pid>/fdinfo; amdgpu, i915 and xe have them). With swiftshader
//   (no GPU) the picture's memory is ordinary memory of the GPU process.
// --pause pauses the game for five seconds at one third of the run and hides the tab for five
//   seconds at two thirds: memory must not grow and the game must go on afterwards. Hiding is
//   played to the page (document.hidden and its event): a page driven by Playwright stays visible
//   to the browser itself, so what a browser does with a really hidden tab is not covered.
// Passes when, after the first ten seconds: no memory figure grew by more than 10 percent plus
// 48 MB (lowest of the last five seconds against the lowest of the first five), the GPU process's
// video memory never stood more than half as high again plus 32 MB above its resting level, the game drew at
// least 50 frames (10 with swiftshader) in every second it was running but two, it did not stop, and the picture
// at the end shows the game and moves: frames are counted where they are replayed, whatever they
// drew, so the canvas is photographed (<name>.png), RedCat is turned for half a second and it is
// photographed again (<name>-turned.png); a black or standing picture fails. The page takes a
// save state every minute, which shows as one slow second and a passing rise of the page's memory.
// The series is in <name>.json.
// Needs Playwright, taken from PLAYWRIGHT_DIR (default: the A2 Racer 4 project's node_modules).
import fs from 'node:fs';
import path from 'node:path';
import { fileURLToPath } from 'node:url';
import { PLACES, routeTorchPlace } from './torch-place.mjs';
import { decodePng, pictureStats, pictureDiff } from './picture.mjs';
import { launch, chromiumOnly, notRunSummary, DEV_URL } from './browsers.mjs';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const opt = (n, d) => { const k = process.argv.indexOf('--' + n); return k < 0 ? d : process.argv[k + 1]; };
const has = (n) => process.argv.includes('--' + n);
const torch = opt('torch', '') ? PLACES[opt('torch', '')] : null;
if (opt('torch', '') && !torch) throw new Error('--torch castle or yard');
const world = torch ? String(torch.world) : opt('world', '1'), seconds = Number(opt('seconds', 60)), angle = opt('angle', 'gl');
const [vw, vh] = opt('size', '1920x1080').split('x').map(Number);
const name = opt('name', torch ? `torch-${opt('torch')}-${angle}${opt('fixes', '') ? '-' + opt('fixes').replace(/\W+/g, '') : ''}` : `w${world}-${angle}`);
const outDir = path.resolve(opt('out', path.join(ROOT, 'tools/out/gpu-memory')));
const url = opt('url', DEV_URL);
const minFps = Number(opt('min-fps', angle === 'swiftshader' ? 10 : 50));          // software rendering: 40 fps at 1920x1080 with 4 samples here
fs.mkdirSync(outDir, { recursive: true });

// The memory of the browser's processes is asked through Chromium's CDP (SystemInfo.getProcessInfo): the check is that measurement.
if (!chromiumOnly('the whole check (the browser\'s GPU and page processes are found through CDP SystemInfo.getProcessInfo)')) { notRunSummary(); process.exit(0); }
const args = ['--autoplay-policy=no-user-gesture-required', '--ignore-gpu-blocklist', ...(angle === 'swiftshader' ? ['--use-angle=swiftshader', '--enable-unsafe-swiftshader'] : ['--use-angle=' + angle])];
const browser = await launch({ args });
const mobile = has('mobile');
const context = await browser.newContext({ viewport: { width: vw, height: vh }, deviceScaleFactor: Number(opt('dpr', 1)), isMobile: mobile, hasTouch: mobile });
const page = await context.newPage();
const errors = [];
page.on('console', (m) => { if (m.type() === 'error') { errors.push(m.text().slice(0, 300)); console.log('[error]', m.text().slice(0, 300)); } });
page.on('pageerror', (e) => { errors.push(e.message); console.log('[pageerror]', e.message); });
if (has('msaa')) await page.addInitScript((msaa) => { try { const k = 'rcspook-recomp.settings.v1'; localStorage.setItem(k, JSON.stringify({ ...JSON.parse(localStorage.getItem(k) || '{}'), msaa })); } catch (e) { /* the default then */ } }, Number(opt('msaa')));
const cdp = await browser.newBrowserCDPSession();
let placed = null;
const torchPatched = torch ? await routeTorchPlace(context, torch) : null;
if (torch) placed = new Promise((resolve) => { page.on('console', (m) => { const t = m.text(); if (/torch-place done/.test(t)) resolve(t.slice(t.indexOf('{'))); }); setTimeout(() => resolve(null), torch.wait); });
await page.goto(`${url}?autostart=1&world=${world}${opt('fixes', '') ? '&fixes=' + encodeURIComponent(opt('fixes')) : ''}`);

// --- what a process holds ------------------------------------------------------------------------
const rd = (f) => { try { return fs.readFileSync(f, 'utf8'); } catch (e) { return ''; } };
const kb = (s, key) => { const m = new RegExp('^' + key + ':\\s+(\\d+) kB', 'm').exec(s); return m ? Number(m[1]) : 0; };
/** Video memory of a process in KiB by the kernel's DRM counters, one entry per client (a client's files all report the same). */
const drm = (pid) => {
  const seen = new Set(), out = {};
  try {
    for (const fd of fs.readdirSync(`/proc/${pid}/fdinfo`)) {
      const s = rd(`/proc/${pid}/fdinfo/${fd}`);
      const id = /drm-client-id:\s*(\d+)/.exec(s);
      if (!id || seen.has(id[1])) continue;
      seen.add(id[1]);
      for (const m of s.matchAll(/^(drm-(?:total|resident)-[\w-]+):\s*(\d+)\s*(\w*)/gm)) out[m[1]] = (out[m[1]] || 0) + Number(m[2]) * (m[3] === 'KiB' ? 1 : m[3] === 'MiB' ? 1024 : 1 / 1024);
    }
  } catch (e) { /* the process is gone, or the kernel has no such counters */ }
  return out;
};
const MB = (kib) => Math.round(kib / 1024);
const sample = async () => {
  const row = { gpuRss: 0, gpuVram: null, gpuResidentCpu: null, rendererRss: 0 };
  for (const p of (await cdp.send('SystemInfo.getProcessInfo')).processInfo) {
    const rss = kb(rd(`/proc/${p.id}/status`), 'VmRSS');
    if (p.type === 'renderer') row.rendererRss += MB(rss);
    else if (p.type === 'GPU') {
      row.gpuRss = MB(rss);
      const d = drm(p.id);
      if ('drm-total-vram' in d) { row.gpuVram = MB(d['drm-total-vram'] + (d['drm-total-gtt'] || 0)); row.gpuResidentCpu = MB(d['drm-resident-cpu'] || 0); }
    }
  }
  return row;
};

// --- the run ---------------------------------------------------------------------------------------
await page.waitForFunction(() => window.RecompGame && window.RecompGame.running, null, { timeout: 180000 });
const torchReport = torch ? await placed : null;
if (torch) console.log(`${torch.what}: ${torchReport || 'RedCat was NOT put in place'}`);
const state = () => page.evaluate(() => ({ frames: window.RecompGame.framesDrawn, fps: window.RecompGame.stats ? window.RecompGame.stats.fps : null, size: window.RecompGame.stats ? `${window.RecompGame.stats.width}x${window.RecompGame.stats.height}x${window.RecompGame.stats.samples}` : '', running: window.RecompGame.running, paused: window.RecompGame.paused, hidden: document.hidden, crash: window.__crash ? window.__crash.message : null }));
const pauseAt = has('pause') ? Math.floor(seconds / 3) : -1, hideAt = has('pause') ? Math.floor(seconds * 2 / 3) : -1;
const hide = (hidden) => page.evaluate((h) => {
  Object.defineProperty(document, 'hidden', { configurable: true, get: () => h });
  Object.defineProperty(document, 'visibilityState', { configurable: true, get: () => (h ? 'hidden' : 'visible') });
  document.dispatchEvent(new Event('visibilitychange'));
}, hidden);
const series = [];
let lastFrames = 0, lastWall = Date.now();
console.log('  s  GPU video MB  GPU RSS MB  page RSS MB  fps  frames/s  drawing size');
for (let s = 0; s <= seconds; s++) {
  const row = { s, ...(await sample()), ...(await state()) };
  const wall = Date.now();
  row.framesPerSecond = s ? Math.round((row.frames - lastFrames) * 1000 / (wall - lastWall)) : null;
  lastFrames = row.frames; lastWall = wall;
  series.push(row);
  console.log(`${String(s).padStart(3)}  ${String(row.gpuVram === null ? '-' : row.gpuVram).padStart(12)}  ${String(row.gpuRss).padStart(10)}  ${String(row.rendererRss).padStart(11)}  ${String(row.fps).padStart(3)}  ${String(row.framesPerSecond === null ? '' : row.framesPerSecond).padStart(8)}  ${row.size}${row.paused ? '  paused' : ''}${row.hidden ? '  hidden' : ''}`);
  if (row.crash || !row.running) break;
  if (row.gpuRss > 6000 || (row.gpuVram || 0) > 6000) { console.log('stopped: the GPU process is over 6 GB'); break; }
  if (s === pauseAt) await page.evaluate(() => window.RecompGame.setPaused(true));
  if (s === pauseAt + 5) await page.evaluate(() => window.RecompGame.setPaused(false));
  if (s === hideAt) await hide(true);
  if (s === hideAt + 5) await hide(false);
  await page.waitForTimeout(Math.max(0, 1000 - (Date.now() - wall)));
}
// what is on the canvas, and whether it still follows the game
const photo = async (file) => { await page.locator('#screen').screenshot({ path: file }); return decodePng(fs.readFileSync(file)); };
let picture = null, turned = null;
if ((await state()).running) {
  picture = await photo(path.join(outDir, name + '.png'));
  await page.evaluate(() => window.RecompGame.input.key(0x25, true)); await page.waitForTimeout(500); await page.evaluate(() => window.RecompGame.input.key(0x25, false));
  await page.waitForTimeout(200);
  turned = await photo(path.join(outDir, name + '-turned.png'));
}
const last = await state();
fs.writeFileSync(path.join(outDir, name + '.json'), JSON.stringify({ url, args, world, viewport: [vw, vh], dpr: Number(opt('dpr', 1)), mobile, errors, series }, null, 1));
await browser.close();

// --- the verdict -----------------------------------------------------------------------------------
let failed = 0;
const check = (ok, what, detail = '') => { console.log(`${ok ? 'ok  ' : 'FAIL'} ${what}${detail ? ' (' + detail + ')' : ''}`); if (!ok) failed++; };
const steady = series.filter((r) => r.s >= 10);
const flat = (key, label) => {
  const v = steady.map((r) => r[key]).filter((x) => x !== null);
  if (!v.length) { console.log(`     ${label}: not available here`); return; }
  // lowest against lowest: a save state or a collection that falls in one of the seconds passes, a leak lifts them all
  const base = Math.min(...v.slice(0, 5)), end = Math.min(...v.slice(-5));
  check(end <= base * 1.1 + 48, `${label} does not grow`, `${base} MB after 10 s, ${end} MB at the end, at most ${Math.max(...v)} MB`);
  // and no passing peak far above the resting level (the picture's memory only; the page's rises with every save state).
  // Found 2026-11-14: a phone-shaped window (915x412, device pixel ratio 3) went from 47 to 139 MB for five seconds
  // when the first-time hint appeared, because of the thin see-through border round its rounded box.
  if (key === 'gpuVram') check(Math.max(...v) <= base * 1.5 + 32, `${label} has no peak far above its resting level`, `resting ${base} MB, highest ${Math.max(...v)} MB, allowed ${Math.round(base * 1.5 + 32)} MB`);
};
if (torch) { const t = torchReport ? JSON.parse(torchReport) : null, off = /handTorches=0|^off$/.test(opt('fixes', '')); check(torchPatched() && !!t && (off ? !t.hands : t.hands > 0 && t.lights >= 1), off ? 'RedCat stood among the hand torches, flag off: nothing of them in the game thread' : 'RedCat stood among the hand torches: hands found and lights in the scene', torchReport || ''); }
check(series.length === seconds + 1 && last.running && !last.crash, 'the game ran to the end of the measurement', last.crash || '');
if (picture) {
  const p = pictureStats(picture), moved = pictureDiff(picture, turned);
  check(p.lit > 40 && p.colours > 40 && p.white < 50, 'the canvas shows the game', `${p.lit}% of it lit, ${p.white}% white, ${p.colours} colours among 1000 pixels`);
  check(moved > 0.3, 'and the picture follows the game: it changed when RedCat turned', `${moved}% of the pixels`);
}
if (steady.length) {
  flat('gpuVram', 'video memory of the GPU process');
  if (steady.some((r) => r.gpuResidentCpu !== null)) check(steady.every((r) => !r.gpuResidentCpu || r.gpuResidentCpu < 64), 'none of it was moved out to main memory', `at most ${Math.max(...steady.map((r) => r.gpuResidentCpu || 0))} MB`);
  flat('gpuRss', 'memory of the GPU process');
  flat('rendererRss', 'memory of the page and its workers');
  // a second counts when the game ran through all of it: not paused or hidden at either end
  const live = steady.filter((r, k) => k > 0 && !r.paused && !r.hidden && !steady[k - 1].paused && !steady[k - 1].hidden);
  const slow = live.filter((r) => r.framesPerSecond < minFps);
  check(live.length > 0 && slow.length <= 2, `at least ${minFps} frames drawn in every running second but two`, `${Math.min(...live.map((r) => r.framesPerSecond))} to ${Math.max(...live.map((r) => r.framesPerSecond))} per second; the game reports ${Math.min(...live.map((r) => r.fps))} to ${Math.max(...live.map((r) => r.fps))} fps${slow.length ? '; slow at s=' + slow.map((r) => r.s).join(',') : ''}`);
  if (has('pause')) {
    check(series.some((r) => r.paused && !r.hidden) && series.some((r) => r.hidden), 'the game was paused and the tab was hidden', `${series.filter((r) => r.paused && !r.hidden).length} and ${series.filter((r) => r.hidden).length} samples`);
    // from the second sample of a stop on: the frame that was under way when it began is done
    const during = series.filter((r, k) => k > 1 && r.paused && series[k - 1].paused && series[k - 2].paused).map((r) => r.framesPerSecond);
    check(during.length > 2 && Math.max(...during) === 0, 'a paused or hidden game draws nothing', `${during.length} samples`);
  }
}
console.log(`screenshot: ${path.relative(ROOT, path.join(outDir, name + '.png'))}; series: ${path.relative(ROOT, path.join(outDir, name + '.json'))}`);
process.exit(failed ? 1 : 0);
