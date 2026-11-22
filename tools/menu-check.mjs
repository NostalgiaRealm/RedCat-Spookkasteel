#!/usr/bin/env node
// Walks the menu in headless Chromium (software WebGL) and saves screenshots: the leader and the
// intro of a first visit, player creation, Hoofdmenu, Highscores, Snelspel, Instellingen and its
// pages, Help, Stoppen, Avontuur -> Moeilijkheid -> Startinfo -> Start, the running game, the
// settings over the game, back to the menu, continuing, a finished adventure with its outro;
// the two volume sliders and the sound levels they give (docs/research/menu-audio.md).
// Then again on a phone-sized touch screen, a portrait phone, once without cross-origin
// isolation, and once in a browser that refuses sound before a click ("gesture"). Not a test
// suite: it prints what it checked and the screenshots are meant to be looked at. The server
// must be running:
//   node tools/serve.mjs
//   node tools/menu-check.mjs [--url http://127.0.0.1:4221/] [--browser chromium|firefox|webkit] [--out tools/out/menu] [--only desktop,phone,portrait,isolation,gesture,tabs | tower] [--game-wait 15000] [--gpu]
// Needs Playwright, taken from PLAYWRIGHT_DIR (default: the A2 Racer 4 project's node_modules).
import fs from 'node:fs';
import path from 'node:path';
import { fileURLToPath } from 'node:url';
import { launch, isChromium, notRun, notRunSummary, escThroughFullscreen, DEV_URL } from './browsers.mjs';

const ROOT = path.resolve(path.dirname(fileURLToPath(import.meta.url)), '..');
const opt = (name, def) => { const k = process.argv.indexOf('--' + name); return k < 0 ? def : process.argv[k + 1]; };
const url = opt('url', DEV_URL);
const outDir = path.resolve(opt('out', path.join(ROOT, 'tools/out/menu')));
const only = opt('only', 'desktop,phone,portrait,isolation,gesture,tabs').split(',');
const gameWait = Number(opt('game-wait', 15000));
fs.mkdirSync(outDir, { recursive: true });
// screenshots of an earlier run of the same parts would only confuse
const PREFIX = { desktop: 'desktop-', phone: 'telefoon-', portrait: 'staand-', isolation: 'zonder-isolatie-', gesture: 'eerst-klikken-' };
for (const f of fs.readdirSync(outDir)) if (f.endsWith('.png') && only.some((part) => PREFIX[part] && f.startsWith(PREFIX[part]))) fs.unlinkSync(path.join(outDir, f));

const gpu = process.argv.includes('--gpu');
if (!isChromium && gpu) notRun('--gpu (a Chromium flag for its GL backend)');
const glArgs = ['--ignore-gpu-blocklist', ...(gpu ? ['--use-angle=gl'] : ['--use-angle=swiftshader', '--enable-unsafe-swiftshader'])];
// sound without a click is allowed here; the "gesture" part uses a second browser with the usual policy
const browser = await launch({ args: ['--autoplay-policy=no-user-gesture-required', ...glArgs] });
let failed = 0;
const check = (ok, what, detail = '') => { if (!ok) failed++; console.log(`${ok ? '  ok  ' : ' FAIL '} ${what}${detail ? '  [' + detail + ']' : ''}`); };

async function open(name, contextOptions, { strip = false, from = browser } = {}) {
  const context = await from.newContext(contextOptions);
  // (Esc here always means the page's Esc: outside Chromium a page in full screen does not get the first one)
  const page = escThroughFullscreen(await context.newPage());
  const problems = [];
  page.on('console', (m) => { if (m.type() === 'error') problems.push('console: ' + m.text().slice(0, 300)); });
  page.on('pageerror', (e) => problems.push('pageerror: ' + e.message));
  page.on('response', (r) => { if (r.status() >= 400) problems.push(`HTTP ${r.status()} ${r.url()}`); });
  const requested = new Set();
  page.on('request', (r) => requested.add(r.url().split('/').pop()));
  // the same page without the isolation headers, as a plain web server would send it
  if (strip) await page.route((u) => u.origin + u.pathname === url, async (route) => { const r = await route.fetch(); const headers = { ...r.headers() }; delete headers['cross-origin-opener-policy']; delete headers['cross-origin-embedder-policy']; await route.fulfill({ response: r, headers }); });
  const shot = async (file) => { const f = path.join(outDir, `${name}-${file}.png`); await page.screenshot({ path: f }); console.log('  shot', path.relative(ROOT, f)); };
  const act = contextOptions.hasTouch ? (sel) => page.tap(sel) : (sel) => page.click(sel);
  const visible = (sel) => page.waitForSelector(sel, { state: 'visible', timeout: 20000 });
  const pageName = () => page.evaluate(() => window.__menu.page);
  /** What the movie overlay is doing. */
  const movie = () => page.evaluate(() => { const m = window.__menu, v = document.getElementById('menu-movie-video'); const r = v.getBoundingClientRect(); return { mode: m.mode, name: m.movies.name, state: m.movies.state, time: v.currentTime, paused: v.paused, muted: v.muted, volume: v.volume, box: [r.x, r.y, r.width, r.height].map(Math.round), hint: !document.getElementById('menu-movie-hint').hidden, menuHidden: document.getElementById('menu').hidden, music: !!m.audio.source || m.audio.musicWanted, cursor: getComputedStyle(document.getElementById('menu-movie')).cursor }; });
  const moviePlaying = (which) => page.waitForFunction((w) => window.__menu.movies.name === w && window.__menu.movies.state === 'playing' && document.getElementById('menu-movie-video').currentTime > 0.3, which, { timeout: 20000 });
  const report = () => { check(problems.length === 0, `${name}: no errors or failed requests`, problems.slice(0, 6).join(' | ')); };
  return { context, page, shot, act, visible, pageName, movie, moviePlaying, report, problems, requested };
}

/** First visit: the Spelerlijst opens with the name prompt. Creates the player and chooses it. */
async function createPlayer(t, name) {
  await t.visible('#player-name-dialog[open]');
  await t.shot('01-eerste-bezoek-naam');
  await t.page.fill('#player-name', name);
  await t.act('#player-name-save');
  await t.visible('#player-list[open] .player-choice');
  await t.shot('02-spelerlijst');
  await t.act('#player-select');
  await t.page.waitForSelector('#player-list:not([open])', { state: 'attached' });
  const text = await t.page.textContent('#native-menu-description');
  check(text.includes(`Hallo ${name}.`), 'player created and chosen', text.slice(0, 40));
}
async function choose(t, choice) { await t.act(`[data-menu-choice="${choice}"]`); await t.act('#native-next'); }
async function waitForGame(t, label) {
  await t.page.waitForFunction(() => document.documentElement.classList.contains('game-running'), null, { timeout: 90000 });
  await t.page.waitForTimeout(gameWait);
  await t.shot(label);
  const state = await t.page.evaluate(() => ({ running: window.RecompGame.running, crash: window.__crash ? window.__crash.message : null, menuHidden: document.getElementById('menu').hidden, mode: window.__menu.mode, frames: window.RecompGame.stats ? window.RecompGame.stats.fps : null }));
  check(state.running && !state.crash && state.menuHidden && state.mode === 'game', `${label}: game running, menu hidden`, JSON.stringify(state));
}
/** Amplitude of a slider value, as docs/research/menu-audio.md has it. */
const amp = (p) => { const v = Math.max(-4000, Math.min(-100, -Math.round(10 ** (2 + (100 - p) / 100 * (Math.log10(4000) - 2))))); return 10 ** (v / 2000); };
const near = (a, b) => Math.abs(a - b) < 0.0006;
/** The two sliders of the first Instellingen page and the levels they give. Leaves the player at Muziek 40, Geluidseffecten 60. */
async function soundChecks(t) {
  const audio = () => t.page.evaluate(() => { const a = window.__menu.audio; return { gain: a.gain ? a.gain.gain.value : null, clip: a.lastClipVolume, music: a.musicVolume, effects: a.effectsVolume, starts: a.musicStarts }; });
  const slider = (id) => t.page.$eval(id, (e) => Number(e.value));
  let keys = await t.page.evaluate(() => window.__menu.soundKeys());
  check(keys.MusicVolume === '80' && keys.SoundVolume === '80', 'a new player has MusicVolume 80 and SoundVolume 80 in his file', JSON.stringify(keys));
  await t.act('#open-settings');
  await t.visible('#settings[open] #volume-music');
  check(await slider('#volume-music') === 80 && await slider('#volume-effects') === 80 && near((await audio()).gain, amp(80)), 'Instellingen: Muziek and Geluidseffecten at 80, music amplitude 0.786', JSON.stringify(await audio()));
  await t.page.waitForTimeout(400);
  await t.shot('05a-instellingen-schuiven');
  // keys, and the music follows at once
  await t.page.focus('#volume-music');
  await t.page.keyboard.press('End');
  const top = await audio();
  await t.page.keyboard.press('Home');
  const bottom = await audio();
  for (let k = 0; k < 8; k++) await t.page.keyboard.press('PageDown');
  const mid = await audio();
  check(near(top.gain, 0.8913) && near(bottom.gain, 0.01) && near(mid.gain, 0.7861) && mid.music === 80, 'curve on the live music gain: 100 -> 0.891, 0 -> 0.010 (not silent), 80 -> 0.786', [top.gain, bottom.gain, mid.gain].map((x) => x.toFixed(4)).join(' '));
  await t.page.keyboard.press('ArrowRight'); await t.page.keyboard.press('ArrowUp'); await t.page.keyboard.press('ArrowUp'); await t.page.keyboard.press('PageUp');
  check(await slider('#volume-music') === 69, 'keys: End, Home, PgDn +10, Right +1, Up -1, PgUp -10', String(await slider('#volume-music')));
  // the mouse: a click on the track is one step of 10 towards it, dragging the needle gives any value
  const box = await (await t.page.$('#volume-music')).boundingBox();
  await t.page.mouse.click(box.x + box.width - 4, box.y + box.height / 2);
  const up = await slider('#volume-music');
  await t.page.mouse.click(box.x + 3, box.y + box.height / 2);
  await t.page.mouse.click(box.x + 3, box.y + box.height / 2);
  const down = await slider('#volume-music');
  check(up === 79 && down === 59, 'a click on the track: +10 right of the needle, -10 left of it', `${up} ${down}`);
  await t.page.keyboard.press('Home');
  const px = (local) => box.x + local * box.width / 206;          // the slider is 206 wide in its own pixels, the needle 37
  await t.page.mouse.move(px(18.5), box.y + box.height / 2);
  await t.page.mouse.down();
  const seen = new Set();
  for (let x = 18.5; x <= 103.5; x += 0.5) { await t.page.mouse.move(px(x), box.y + box.height / 2); seen.add(await slider('#volume-music')); }
  await t.page.mouse.up();
  check(await slider('#volume-music') === 50 && seen.size === 51 && near((await audio()).gain, amp(50)), 'dragging the needle 85 of its 169 pixels: every value from 0 to 50, music follows', `${await slider('#volume-music')} ${seen.size}`);
  await t.shot('05b-instellingen-muziek-50');
  // Geluidseffecten: the clip of a move still plays at the value before the move
  await t.page.waitForTimeout(1300);
  await t.page.focus('#volume-effects');
  await t.page.keyboard.press('PageDown');
  const moved = await audio();
  await t.page.waitForTimeout(1300);
  await t.page.keyboard.press('ArrowRight');
  const next = await audio();
  check(moved.effects === 90 && near(moved.clip, amp(80)) && next.effects === 91 && near(next.clip, amp(90)), 'Geluidseffecten: the clip of a move plays at the previous value, the next one at the new', `${moved.clip} ${next.clip}`);
  // Annuleren: the clip, then both values from when the form opened; nothing written
  await t.page.waitForTimeout(1300);
  await t.act('#close-settings');
  await t.page.waitForSelector('#settings:not([open])', { state: 'attached' });
  const during = await audio();
  await t.page.waitForTimeout(1700);
  const back = await audio();
  keys = await t.page.evaluate(() => window.__menu.soundKeys());
  check(near(during.clip, amp(91)) && near(during.gain, amp(50)) && near(back.gain, amp(80)) && back.effects === 80 && keys.MusicVolume === '80' && keys.SoundVolume === '80', 'Annuleren: its clip at the slider value, then Muziek and Geluidseffecten as they were', JSON.stringify({ during, back, keys }));
  // OK keeps them: in the player's file, where the game reads them
  await t.act('#open-settings');
  await t.visible('#settings[open] #volume-music');
  check(await slider('#volume-music') === 80 && await slider('#volume-effects') === 80, 'the form opens with the kept values again');
  await t.page.focus('#volume-music'); await t.page.keyboard.press('Home');
  for (let k = 0; k < 4; k++) await t.page.keyboard.press('PageDown');
  await t.page.waitForTimeout(1300);
  await t.page.focus('#volume-effects'); await t.page.keyboard.press('Home');
  for (let k = 0; k < 6; k++) await t.page.keyboard.press('PageDown');
  await t.page.waitForTimeout(1300);
  await t.act('#apply-settings');
  await t.page.waitForSelector('#settings:not([open])', { state: 'attached' });
  const kept = await audio();
  keys = await t.page.evaluate(() => window.__menu.soundKeys());
  check(keys.MusicVolume === '40' && keys.SoundVolume === '60' && near(kept.gain, amp(40)) && near(kept.clip, amp(60)), 'OK: [Sound] MusicVolume 40 and SoundVolume 60 in the player file, music at 0.349, the OK clip at 0.605', JSON.stringify({ kept, keys }));
  check(kept.starts === 1, 'the music was never stopped and started again by all this', String(kept.starts));
  await t.page.waitForTimeout(1300);
}
async function settingsPages(t, prefix) {
  await t.act('#open-settings');
  await t.visible('#settings[open] #apply-settings');
  await t.shot(prefix + '-instellingen');
  await t.act('#open-advanced-settings');
  await t.visible('#resolution');
  await t.shot(prefix + '-geavanceerd');
  const sizes = await t.page.$$eval('#resolution option', (o) => o.map((x) => x.value));
  check(sizes.includes('auto') && sizes.includes('1024x768') && sizes.includes('1920x1080'), 'Resolutie: Auto, 4:3 and 16:9 sizes', sizes.join(' '));
  await t.page.selectOption('#msaa', '2');
  await t.page.selectOption('#resolution', '1280x720');
  await t.act('[data-settings-page="advanced"] [data-settings-action="back"]');
  await t.act('#open-more-settings');
  await t.visible('#touch-controls-setting');
  await t.shot(prefix + '-meer-instellingen');
  await t.page.setChecked('#show-fps', true);
  await t.act('[data-settings-page="more"] [data-settings-action="back"]');
  await t.act('#open-cheats');
  await t.visible('#cheat-unlock-levels');
  check(await t.page.isDisabled('#cheat-supplies') && await t.page.isDisabled('#cheat-god'), 'Cheats: supplies and immortality disabled without a game');
  // free flight is also a choice that is kept per player: it can be set without a game, and is put back here
  await t.page.setChecked('#cheat-noclip', true);
  check(await t.page.evaluate(() => { const m = window.__menu.memo, n = window.RecompGame.players.current; return !!(m.players[n] && m.players[n].flight); }), 'Cheats: free flight is kept as the player\'s choice');
  await t.page.setChecked('#cheat-noclip', false);
  check(await t.page.evaluate(() => { const m = window.__menu.memo, n = window.RecompGame.players.current; return !(m.players[n] && m.players[n].flight); }), 'Cheats: and switched off again');
  await t.page.setChecked('#cheat-unlock-levels', true);
  await t.shot(prefix + '-cheats');
  await t.act('[data-settings-page="cheats"] [data-settings-action="back"]');
  await t.act('#apply-settings');
  await t.page.waitForSelector('#settings:not([open])', { state: 'attached' });
  const s = await t.page.evaluate(() => window.RecompGame.settings.all());
  check(s.msaa === 2 && s.resolution === '1280x720' && s.showFps === true && s.unlockAll === true, 'OK wrote the settings', JSON.stringify(s));
}

// ---------------------------------------------------------------------------------------------
if (only.includes('desktop')) {
  console.log('desktop 1280x960');
  const t = await open('desktop', { viewport: { width: 1280, height: 960 } });
  await t.page.goto(url);
  check(await t.page.evaluate(() => self.crossOriginIsolated), 'page is cross-origin isolated');
  // every start: the Davilex leader, then the intro, then the Hoofdmenu; any key or mouse button ends one movie
  await t.moviePlaying('davilex');
  let m = await t.movie();
  check(m.menuHidden && !m.music && !m.muted && !m.paused && m.cursor === 'none', 'leader plays first, with sound, menu and music not there yet, pointer hidden', JSON.stringify(m));
  check(m.box.join() === '0,0,1280,960', 'the movie fills the 4:3 area of the menu', m.box.join());
  await t.shot('00-leader');
  await t.page.keyboard.press('Shift');
  await t.moviePlaying('intronl');
  await t.page.waitForTimeout(2500);
  m = await t.movie();
  check(m.name === 'intronl' && m.state === 'playing' && m.menuHidden && !m.music, 'a key ends the leader, the intro follows', JSON.stringify(m));
  await t.shot('00-intro');
  await t.page.mouse.click(400, 300, { button: 'right' });
  await t.page.waitForFunction(() => window.__menu.mode === 'menu', null, { timeout: 10000 });
  m = await t.movie();
  check(!m.name && !m.menuHidden && m.music, 'a mouse button ends the intro: Hoofdmenu and music', JSON.stringify(m));
  await t.page.waitForFunction(() => window.__menu.audio.musicPlaying, null, { timeout: 15000 }).catch(() => {});
  check(near(await t.page.evaluate(() => window.__menu.audio.gain.gain.value), amp(80)), 'nobody chosen yet: the music plays at 80');
  await createPlayer(t, 'Rick');
  await t.shot('03-hoofdmenu');
  await t.page.waitForFunction(() => window.__menu.audio.musicPlaying, null, { timeout: 15000 }).catch(() => {});
  check(await t.page.evaluate(() => window.__menu.audio.musicPlaying), 'menu music plays after the first click');
  await soundChecks(t);

  await choose(t, 'highscores');
  await t.visible('#native-score-table tbody tr');
  const rows = await t.page.$$eval('#native-score-table tbody tr', (r) => r.map((x) => [...x.cells].map((c) => c.textContent)));
  check(rows.length === 10 && rows.some((r) => r[0] === 'Rick'), 'Highscores: ten rows with the player', rows.map((r) => r.join('/')).join(' '));
  await t.shot('04-highscores');
  await t.act('#native-previous');

  await choose(t, 'quickplay');
  await t.visible('#level-list .level-card');
  let cards = await t.page.$$eval('#level-list .level-card', (c) => c.map((x) => !x.disabled));
  check(cards.length === 5 && cards[0] && !cards[1] && !cards[4], 'Snelspel: only the first Griezelplek is open for a new player', cards.join(' '));
  await t.shot('05-griezelplek-vergrendeld');
  await t.act('#native-previous');

  await settingsPages(t, '06');
  await choose(t, 'quickplay');
  cards = await t.page.$$eval('#level-list .level-card', (c) => c.map((x) => !x.disabled));
  check(cards.every(Boolean), 'Snelspel: every Griezelplek open with the unlock cheat', cards.join(' '));
  await t.act('#level-list .level-card[data-level="2"]');
  await t.shot('07-griezelplek-ontgrendeld');
  await t.act('#native-previous');
  await t.page.evaluate(() => { const s = window.RecompGame.settings; s.set('unlockAll', false); s.set('resolution', 'auto'); s.set('msaa', 4); });

  await t.act('#native-help');
  await t.visible('#native-help-viewer[open] #native-help-content h2');
  await t.shot('08-help');
  check((await t.page.$$('#native-help-topics button')).length >= 30, 'Help: the topics of the original help are listed');
  await t.act('#native-help-close');

  await t.act('#open-quit');
  await t.visible('#quit-confirmation[open]');
  await t.shot('09-stoppen');
  await t.act('#quit-no');

  // keyboard: arrow keys walk the buttons, Enter presses, Escape goes back
  await t.page.focus('[data-menu-choice="adventure"]');
  await t.page.keyboard.press('ArrowDown'); await t.page.keyboard.press('Enter');
  check(await t.page.getAttribute('[data-menu-choice="quickplay"]', 'aria-pressed') === 'true', 'keyboard: ArrowDown + Enter chooses Snelspel');
  await t.page.focus('#native-next'); await t.page.keyboard.press('Enter');
  check(await t.pageName() === 'quickplay', 'keyboard: Enter on Volgende opens the page');
  await t.page.keyboard.press('Escape');
  check(await t.pageName() === 'home', 'keyboard: Escape goes back');

  // controller: a simulated standard gamepad. The first press only hands the menu to the controller
  // (as in the old project); then d-pad down twice from Avontuur, and A
  await t.page.evaluate(() => {
    const pad = { connected: true, mapping: 'standard', index: 0, id: 'menu-check', axes: [0, 0, 0, 0], buttons: Array.from({ length: 17 }, () => ({ pressed: false, value: 0 })) };
    Object.defineProperty(navigator, 'getGamepads', { value: () => [pad], configurable: true });
    window.__pad = pad;
  });
  const padTap = async (b) => { await t.page.evaluate((k) => { window.__pad.buttons[k].pressed = true; }, b); await t.page.waitForTimeout(120); await t.page.evaluate((k) => { window.__pad.buttons[k].pressed = false; }, b); await t.page.waitForTimeout(120); };
  await t.page.focus('[data-menu-choice="adventure"]');
  await t.page.waitForTimeout(150);
  await padTap(13); await padTap(13); await padTap(13); await padTap(0);
  check(await t.page.getAttribute('[data-menu-choice="highscores"]', 'aria-pressed') === 'true' && await t.page.evaluate(() => document.body.classList.contains('controller-input')), 'controller: d-pad and A choose Highscores');
  await t.page.evaluate(() => { delete navigator.getGamepads; });
  await t.page.waitForTimeout(150);
  await t.page.mouse.move(640, 300);

  await choose(t, 'adventure');
  check(await t.pageName() === 'difficulty', 'Avontuur, new player: Moeilijkheid first');
  await t.act('.native-difficulty[data-difficulty="0"]');
  await t.shot('10-moeilijkheid');
  await t.act('#native-next');
  check(await t.pageName() === 'startinfo', 'then Startinfo');
  await t.shot('11-startinfo');
  await t.page.evaluate(() => { const g = window.RecompGame, start = g.start; window.__atStart = null; g.start = function (...a) { window.__atStart = { keys: window.__menu.soundKeys(), music: !!window.__menu.audio.source }; g.start = start; return start.apply(this, a); }; });
  const startsBefore = await t.page.evaluate(() => window.__menu.audio.musicStarts);
  await t.act('#native-start');
  await t.page.waitForTimeout(600);
  const launching = await t.page.evaluate(() => ({ music: !!window.__menu.audio.source, menuHidden: document.getElementById('menu').hidden, started: !!window.__atStart, clip: window.__menu.audio.lastClipVolume }));
  check(launching.music && !launching.menuHidden && !launching.started && near(launching.clip, amp(60)) && startsBefore === 1, 'Start: the clip plays first (at the effects volume), the music still on, the game not started yet; the music never stopped in the menu', JSON.stringify({ launching, startsBefore }));
  await t.page.waitForFunction(() => window.__atStart, null, { timeout: 15000 });
  await t.page.waitForTimeout(300);
  await t.shot('12-laden');
  await waitForGame(t, '13-spel');
  const atStart = await t.page.evaluate(() => window.__atStart);
  check(atStart.keys.MusicVolume === '40' && atStart.keys.SoundVolume === '60' && !atStart.music, 'before game.start: the two volumes are in the player file and the menu music has stopped', JSON.stringify(atStart));
  const p = await t.page.evaluate(() => window.RecompGame.players.get(window.RecompGame.players.current));
  check(p.difficulty === 0 && p.gameType === 0, 'the chosen difficulty and the adventure are in the player file', JSON.stringify(p));
  check(await t.page.evaluate(() => !window.__menu.audio.source), 'menu music stopped');

  // settings over the game
  await t.page.keyboard.press('F10');
  await t.visible('#settings[open] #settings-stop-game');
  check(!(await t.page.isVisible('#volume-music')) && !(await t.page.isVisible('#volume-effects')), 'over a game the two sliders are not shown');
  await t.shot('14-spel-instellingen-f10');
  // the port's master volume does work there
  await t.act('#open-more-settings');
  await t.page.$eval('#volume', (e) => { e.value = '50'; e.dispatchEvent(new Event('input', { bubbles: true })); });
  await t.act('[data-settings-page="more"] [data-settings-action="ok"]');
  await t.page.waitForSelector('#settings:not([open])', { state: 'attached' });
  check(await t.page.evaluate(() => window.RecompGame.settings.get('volume') === 50 && window.RecompGame.running), 'the master volume can be set over the game');
  await t.page.keyboard.press('F10');
  await t.visible('#settings[open] #settings-stop-game');
  await t.act('#open-cheats');
  check(!(await t.page.isDisabled('#cheat-supplies')) && !(await t.page.isDisabled('#cheat-noclip')), 'Cheats: supplies and flight enabled in a game');
  await t.act('#cheat-supplies');
  await t.shot('15-spel-cheats');
  await t.page.keyboard.press('Escape');                 // back to the first page
  await t.visible('#apply-settings');
  await t.page.keyboard.press('Escape');                 // closes, the game goes on
  await t.page.waitForSelector('#settings:not([open])', { state: 'attached' });
  await t.page.waitForTimeout(2500);
  await t.shot('16-spel-na-cheat');
  const cheat = await t.page.evaluate(() => window.RecompGame.cheats.state);
  check(await t.page.evaluate(() => window.RecompGame.running) && !!cheat && cheat.potions === 100 && cheat.score >= 9000, 'game runs on after the settings closed, with the supplies of the cheat', JSON.stringify(cheat));

  await t.act('#menu-gear');
  await t.visible('#settings[open] #settings-stop-game');
  await t.act('#settings-stop-game');
  // (90 s: in Playwright's WebKit the AudioContext's resume() holds the main thread for seconds when a pause ends, and the state is taken after that)
  await t.page.waitForFunction(() => window.__menu.mode === 'menu' && !document.getElementById('menu').hidden, null, { timeout: 90000 });
  await t.page.waitForFunction(() => window.__menu.audio.musicPlaying, null, { timeout: 15000 }).catch(() => {});
  const again = await t.page.evaluate(() => { const a = window.__menu.audio; return { starts: a.musicStarts, time: a.musicTime, gain: a.gain.gain.value }; });
  check(again.starts === 2 && again.time < 5 && near(again.gain, 0.5 * amp(40)), 'back from the game: the music starts again from its beginning, at the player\'s 40 times the master volume', JSON.stringify(again));
  await t.page.waitForTimeout(3500);
  await t.shot('17-terug-in-menu');
  const info = await t.page.evaluate(() => window.RecompGame.saveInfo(window.RecompGame.players.current));
  check(!!info, 'Spel stoppen left a save state', JSON.stringify(info));

  await choose(t, 'adventure');
  check(await t.pageName() === 'startinfo', 'Avontuur, returning player: straight to Startinfo');
  await t.shot('18-startinfo-verder');
  // Meer opties: the world again from its beginning (the original's own way to go on), asked first
  await t.act('#native-start-extras summary');
  const extras = await t.page.evaluate(() => ['open-recovery', 'start-world-over', 'start-over'].map((id) => { const el = document.getElementById(id); return el.hidden ? null : el.textContent; }));
  check(extras[1] === 'Het Bos opnieuw beginnen' && extras[2] === 'Opnieuw beginnen', 'Meer opties: the world again, and a new adventure', JSON.stringify(extras));
  await t.act('#start-world-over');
  await t.visible('#menu-restart[open]');
  const ask = await t.page.textContent('#menu-restart-question');
  check(/^Weet je zeker dat je Het Bos opnieuw wil beginnen\? Je opgeslagen plek in deze wereld/.test(ask) && /Je begint de wereld zoals je hem binnenkwam\.$/.test(ask), 'the world again: the question says what is lost', ask);
  await t.shot('18b-wereld-opnieuw');
  await t.act('#menu-restart-no');
  check(await t.page.evaluate(async () => !!(await window.RecompGame.saveInfo(window.RecompGame.players.current)) && window.__menu.mode === 'menu'), 'the world again, Nee: nothing happens, the save state stays');
  await t.act('#start-world-over');
  await t.visible('#menu-restart[open]');
  await t.act('#menu-restart-yes');
  await t.page.waitForFunction(() => document.documentElement.classList.contains('game-running'), null, { timeout: 90000 });
  await t.page.waitForTimeout(2500);
  const anew = await t.page.evaluate(async () => ({ save: await window.RecompGame.saveInfo(window.RecompGame.players.current), status: document.getElementById('status').textContent, notice: window.RecompGame.notice, running: window.RecompGame.running }));
  check(anew.running && anew.save === null && !/geladen/.test(anew.status) && !anew.notice, 'the world again, Ja: the save state is gone and the world starts from its beginning, without a line about a lost place', JSON.stringify(anew));
  // (Spel stoppen leaves a save state again for what follows)
  await t.page.keyboard.press('F10');
  await t.visible('#settings[open] #settings-stop-game');
  check(await t.page.evaluate(() => !document.getElementById('settings-load-save').hidden && document.getElementById('settings-load-save').disabled), 'settings over a game without a saved place: "Opgeslagen plek laden" is there, switched off');
  await t.act('#settings-stop-game');
  // (90 s: in Playwright's WebKit the AudioContext's resume() holds the main thread for seconds when a pause ends, and the state is taken after that)
  await t.page.waitForFunction(() => window.__menu.mode === 'menu' && !document.getElementById('menu').hidden, null, { timeout: 90000 });
  await choose(t, 'adventure');
  check(await t.pageName() === 'startinfo', 'and Avontuur goes on from the new save state');
  await t.act('#native-start');
  await waitForGame(t, '19-spel-verder');
  await t.page.evaluate(() => window.RecompGame.stop());
  await t.page.waitForFunction(() => window.__menu.mode === 'menu', null, { timeout: 30000 });
  await t.page.waitForTimeout(500);
  check(await t.page.evaluate(() => document.getElementById('stats').textContent === '' && !!window.__menu.audio.source), 'back in the menu: music again, the frame counter gone');

  // Opnieuw beginnen: the adventure and its save state are thrown away after a confirmation
  // (the adventure had reached its third world: those Griezelplekken stay open in Snelspel afterwards)
  await t.page.evaluate(() => { const g = window.RecompGame; g.players.set(g.players.current, [['Level1', 'CurrentSubLevel', 'SubLevel1_3'], ['Level1', 'Completed', 1]]); });
  await choose(t, 'adventure');
  await t.act('#native-start-extras summary');
  await t.act('#start-over');
  await t.visible('#menu-restart[open]');
  check((await t.page.textContent('#menu-restart-question')).startsWith('Weet je het zeker dat je een nieuw avontuur wil beginnen?'), 'Opnieuw beginnen asks with the original text');
  await t.shot('20-opnieuw-beginnen');
  await t.act('#menu-restart-yes');
  await t.page.waitForFunction(() => window.__menu.page === 'difficulty', null, { timeout: 10000 }).catch(() => {});
  const fresh = await t.page.evaluate(async () => ({ page: window.__menu.page, save: await window.RecompGame.saveInfo(window.RecompGame.players.current), world: window.RecompGame.players.get(window.RecompGame.players.current).world }));
  check(fresh.page === 'difficulty' && fresh.save === null && fresh.world === 1, 'Opnieuw beginnen: no save state, back at Moeilijkheid', JSON.stringify(fresh));
  await t.act('#native-previous');
  await choose(t, 'quickplay');
  const openCards = await t.page.$$eval('#level-list .level-card', (c) => c.map((x) => !x.disabled));
  const noted = await t.page.evaluate(() => { const m = window.__menu.memo, n = window.RecompGame.players.current; return m.players[n].unlocked; });
  check(openCards.join() === 'true,true,true,false,false' && noted === 3, 'a new adventure keeps the Griezelplekken that were reached open in Snelspel', `${openCards.join(' ')}; noted ${noted}`);
  await t.shot('20b-griezelplek-na-opnieuw');
  await t.act('#native-previous');

  // a crash of the game brings the menu back with the message
  await t.page.evaluate(() => window.dispatchEvent(new CustomEvent('recomp-exit', { detail: { how: 'crash', info: { message: 'Proef van tools/menu-check.mjs: RuntimeError: unreachable' } } })));
  await t.visible('#menu-fatal[open]');
  await t.shot('21-fout');
  await t.act('#menu-fatal-close');

  // a finished adventure: the game comes back with [SubLevel1_5] Completed set (faked here, the
  // way the game leaves it) -> the outro, once; the score goes into the table, every Griezelplek opens
  await choose(t, 'adventure');
  await t.act('#native-next');
  await t.act('#native-start');
  await t.page.waitForFunction(() => document.documentElement.classList.contains('game-running'), null, { timeout: 90000 });
  await t.page.waitForTimeout(6000);
  await t.page.evaluate(() => { const g = window.RecompGame, n = g.players.current; g.onExit = () => { g.onExit = null; g.players.set(n, [['SubLevel1_5', 'Completed', 1], ['Player', 'TotalScore', 4321]]); }; g.stop(); });
  await t.moviePlaying('outronl');
  await t.page.waitForTimeout(2000);
  m = await t.movie();
  check(m.name === 'outronl' && m.menuHidden && !m.music && !m.muted, 'back from a finished adventure: the outro, before menu and music', JSON.stringify(m));
  await t.shot('22-outro');
  await t.page.keyboard.press('Escape');
  await t.page.waitForFunction(() => window.__menu.mode === 'menu', null, { timeout: 10000 });
  const done = await t.page.evaluate(async () => { const g = window.RecompGame, n = g.players.current, p = g.players.get(n), memo = window.__menu.memo; return { haunted: memo.haunted, table: memo.highscores.slice(0, 3).map((e) => e.name + ' ' + e.score), world: p.world, completed5: p.completed[4], total: p.totalScore, save: await g.saveInfo(n), choice: document.querySelector('[data-menu-choice="adventure"]').getAttribute('aria-pressed') }; });
  check(done.haunted === true && done.table[0] === 'Rick 4321' && done.world === 1 && !done.completed5 && done.total === 0 && done.save === null && done.choice === 'true', 'after the outro: HAUNTED, the score in the table, the adventure back at its beginning', JSON.stringify(done));
  await choose(t, 'highscores');
  const top = await t.page.$$eval('#native-score-table tbody tr', (r) => r.slice(0, 2).map((x) => [...x.cells].map((c) => c.textContent).join('/')));
  check(top[0] === 'Rick/4321/Klaar!', 'Highscores: the finished adventure is the first row', top.join(' '));
  await t.shot('23-highscores-na-outro');
  await t.act('#native-previous');
  await choose(t, 'quickplay');
  cards = await t.page.$$eval('#level-list .level-card', (c) => c.map((x) => !x.disabled));
  check(cards.every(Boolean) && await t.page.evaluate(() => window.RecompGame.settings.get('unlockAll') === false), 'Snelspel: every Griezelplek is open after a finished adventure', cards.join(' '));
  await t.act('#native-previous');
  // once: the next adventure starts at Moeilijkheid and its end shows no outro
  await choose(t, 'adventure');
  check(await t.pageName() === 'difficulty', 'the next Avontuur is a new one');
  await t.act('#native-next');
  await t.act('#native-start');
  await t.page.waitForFunction(() => document.documentElement.classList.contains('game-running'), null, { timeout: 90000 });
  await t.page.waitForTimeout(4000);
  await t.page.evaluate(() => window.RecompGame.stop());
  await t.page.waitForFunction(() => window.__menu.mode === 'menu', null, { timeout: 30000 });
  m = await t.movie();
  check(!m.name && !m.menuHidden, 'no outro after the next game', JSON.stringify(m));

  // a second player keeps his own progress
  await t.act('#open-players');
  await t.visible('#player-list[open]');
  await t.act('#player-add');
  await t.visible('#player-name-dialog[open]');
  await t.page.fill('#player-name', 'rick');
  await t.act('#player-name-save');
  check((await t.page.textContent('#player-name-status')).includes('al een speler'), 'a second player cannot take the same name');
  await t.page.fill('#player-name', 'Fleuriefee12');
  await t.act('#player-name-save');
  await t.page.waitForSelector('#player-name-dialog:not([open])', { state: 'attached' });
  await t.shot('24-spelerlijst-twee');
  await t.act('#player-select');
  await t.page.waitForSelector('#player-list:not([open])', { state: 'attached' });
  const other = await t.page.evaluate(() => ({ keys: window.__menu.soundKeys(), gain: window.__menu.audio.gain.gain.value }));
  check(other.keys.MusicVolume === '80' && other.keys.SoundVolume === '80' && near(other.gain, 0.5 * amp(80)), 'the volumes are per player: the second one has 80 and 80, and the music follows', JSON.stringify(other));
  await choose(t, 'adventure');
  check(await t.pageName() === 'difficulty', 'the new second player starts at Moeilijkheid');
  await t.act('#native-previous');
  // and can be removed again
  await t.act('#open-players');
  await t.visible('#player-list[open]');
  await t.act('#player-remove');
  await t.visible('#player-delete-dialog[open]');
  await t.shot('25-speler-verwijderen');
  await t.act('#player-delete-yes');
  await t.page.waitForSelector('#player-delete-dialog:not([open])', { state: 'attached' });
  const left = await t.page.evaluate(() => ({ list: window.RecompGame.players.list().map((x) => x.name), current: window.RecompGame.players.current }));
  check(left.list.length === 1 && left.list[0] === 'Rick' && left.current === 1, 'removed: the other player is current again', JSON.stringify(left));
  check(near(await t.page.evaluate(() => window.__menu.audio.gain.gain.value), 0.5 * amp(40)), 'and the music is at his 40 again');
  // Exporteren and Importeren: one player's file and the menu's record of him, as a JSON file
  await t.page.evaluate(() => { const g = window.RecompGame; g.players.set(1, [['Level1', 'CurrentSubLevel', 'SubLevel1_2'], ['Level1', 'Completed', 1], ['SubLevel1_1', 'Completed', 1], ['Player', 'Life', 5], ['Player', 'TotalScore', 2500], ['Player', 'Skill', 3], ['KeyBinds', 'Jump', 'Enter']]); const m = window.__menu.memo; (m.players[1] = m.players[1] || {}).flight = true; });
  const [download] = await Promise.all([t.page.waitForEvent('download'), t.act('#player-export')]);
  const exported = path.join(outDir, 'export-' + download.suggestedFilename());
  await download.saveAs(exported);
  const bundle = JSON.parse(fs.readFileSync(exported, 'utf8'));
  check(/^RedCat-Spookkasteel-Rick-\d{4}-\d\d-\d\dT\d{6}Z\.json$/.test(download.suggestedFilename()) && bundle.format === 'redcat-spookkasteel-recomp-player' && bundle.formatVersion === 1 && bundle.player.name === 'Rick' && /CurrentSubLevel=SubLevel1_2/.test(bundle.playerIni) && bundle.menu.flight === true && bundle.menu.unlocked >= 3 && !('data' in bundle) && fs.statSync(exported).size < 20000, 'Exporteren: a small JSON file with the player\'s file and the menu\'s record, no save state', `${download.suggestedFilename()}, ${fs.statSync(exported).size} bytes`);
  check((await t.page.textContent('#player-list-status')).startsWith('Het exportbestand is aan je browserdownloads toegevoegd.'), 'Exporteren says where the file went', await t.page.textContent('#player-list-status'));
  // a new player to import into
  await t.act('#player-add');
  await t.visible('#player-name-dialog[open]');
  await t.page.fill('#player-name', 'Kopie');
  await t.act('#player-name-save');
  await t.page.waitForSelector('#player-name-dialog:not([open])', { state: 'attached' });
  await t.shot('25b-spelerlijst-exporteren-importeren');
  const pick = async (file) => { const [chooser] = await Promise.all([t.page.waitForEvent('filechooser'), t.act('#player-import')]); await chooser.setFiles(file); };
  // a file that is not an export, and one with a value the game never writes: refused, nothing changes
  const junk = path.join(outDir, 'export-geen-export.json'), wrong = path.join(outDir, 'export-verkeerd.json');
  fs.writeFileSync(junk, 'dit is geen export');
  fs.writeFileSync(wrong, JSON.stringify({ ...bundle, playerIni: bundle.playerIni.replace(/(\[Player\][^\[]*?Life=)5/, '$1-1') }));
  await pick(junk);
  await t.page.waitForFunction(() => /geen geldig JSON-exportbestand/.test(document.getElementById('player-list-status').textContent), null, { timeout: 5000 }).catch(() => {});
  check((await t.page.textContent('#player-list-status')) === 'Dit bestand is geen geldig JSON-exportbestand van RedCat Spookkasteel.' && !(await t.page.evaluate(() => document.getElementById('player-import-dialog').open)), 'Importeren: a file that is no export is refused', await t.page.textContent('#player-list-status'));
  await pick(wrong);
  await t.page.waitForFunction(() => /ongeldige spelgegevens/.test(document.getElementById('player-list-status').textContent), null, { timeout: 5000 }).catch(() => {});
  check((await t.page.textContent('#player-list-status')) === 'Dit exportbestand bevat ongeldige spelgegevens (Player.Life).' && await t.page.evaluate(() => window.RecompGame.players.get(2).world === 1 && window.RecompGame.players.get(2).lives === 3), 'Importeren: a value the game never writes (Life=-1) refuses the file; the player is untouched', await t.page.textContent('#player-list-status'));
  await pick(exported);
  await t.visible('#player-import-dialog[open]');
  const q = await t.page.evaluate(() => [document.getElementById('player-import-question').textContent, document.getElementById('player-import-note').textContent]);
  check(q[0] === 'Wil je het avontuur van Rick importeren voor speler Kopie?' && q[1] === 'Het avontuur in dit bestand is bij Het Kasteel.', 'Importeren asks first, naming both players and the world', q.join(' / '));
  await t.shot('25c-importeren-vraag');
  check(await t.page.evaluate(() => window.RecompGame.players.get(2).world === 1), 'nothing is written before the answer');
  await t.act('#player-import-yes');
  await t.page.waitForSelector('#player-import-dialog:not([open])', { state: 'attached' });
  const got = await t.page.evaluate(() => { const g = window.RecompGame, p = g.players.get(2), f = 'C:\\REDCAT\\SETTINGS\\PLAYER2.INI', m = window.__menu.memo.players[2]; return { name: p.name, world: p.world, lives: p.lives, total: p.totalScore, skill: g.files.iniGet(f, 'Player', 'Skill'), jump: g.files.iniGet(f, 'KeyBinds', 'Jump'), prev: g.files.iniGet(f, 'KeyBinds', 'WeaponPrev'), menuKey: g.files.iniGet(f, 'KeyBinds', 'Menu'), unlocked: m.unlocked, flight: m.flight, current: g.players.current, status: document.getElementById('player-list-status').textContent }; });
  check(got.name === 'Kopie' && got.world === 2 && got.lives === 5 && got.total === 2500 && got.skill === '3' && got.jump === 'Enter' && got.prev === '[' && got.menuKey === 'Escape' && got.unlocked >= 3 && got.flight === true && got.current === 1, 'Importeren, Ja: the adventure, the keys and the menu\'s record are the file\'s; the name and the current player stay', JSON.stringify(got));
  check(got.status === 'Het avontuur is geïmporteerd. Kies OK en start daarna het avontuur om verder te spelen.', 'Importeren says what to do next', got.status);
  // away with the copy again, and the first player as he was for what follows
  await t.page.evaluate(() => { const b = [...document.querySelectorAll('#player-choices button')].find((x) => x.dataset.playerId === '2'); b.click(); });
  await t.act('#player-remove');
  await t.visible('#player-delete-dialog[open]');
  await t.act('#player-delete-yes');
  await t.page.waitForSelector('#player-delete-dialog:not([open])', { state: 'attached' });
  await t.page.evaluate(() => { const g = window.RecompGame; g.players.set(1, [['Level1', 'CurrentSubLevel', 'SubLevel1_1'], ['Level1', 'Completed', 0], ['SubLevel1_1', 'Completed', 0], ['Player', 'Life', 3], ['Player', 'TotalScore', 0], ['Player', 'Skill', 0], ['KeyBinds', 'Jump', 'Space']]); window.__menu.memo.players[1].flight = false; });
  await t.act('#player-cancel');

  await t.act('#open-quit');
  await t.visible('#quit-confirmation[open]');
  await t.act('#quit-yes');
  await t.page.waitForTimeout(250);
  check(await t.page.evaluate(() => !!window.__menu.audio.source && document.getElementById('menu-quit-done').hidden), 'Stoppen -> Ja: the music plays on under the two clips');
  await t.visible('#menu-quit-done');
  check(await t.page.evaluate(() => !window.__menu.audio.source), 'and stops when the menu ends');
  await t.shot('26-gestopt');
  check((await t.page.textContent('#menu-quit-done')).includes('Je kunt dit venster sluiten'), 'Stoppen -> Ja: the closing state');
  const voices = ['rcmn9.wav', 'rcmn10.wav', 'rcmn11.wav', 'rcmn12.wav', 'rcmn5.wav', 'rcmn6.wav', 'rcmn30.wav', 'mn_red02.wav', 'rcmn32.wav', 'rcmn13.wav', 'mn_red24.wav', 'mn_in01.wav', 'mn_red21.wav', 'mn_red23.wav', 'rcmn35.wav', 'menumuz.wav', 'davilex.webm', 'intronl.webm', 'outronl.webm'];
  const missing = voices.filter((v) => !t.requested.has(v));
  check(missing.length === 0, 'the music, the voices and the movies of the walk were requested', missing.join(' '));
  t.report();
  await t.context.close();
  await towerEnd();
} else if (only.includes('tower')) await towerEnd();      // --only tower: that last part of the desktop walk alone

/**
 * The end of the game as the game itself makes it: the Tower is finished with the game's own command
 * "nextsave" (game+0x68; what the Tower's entity Trigger24, TargetSubLevel "nextsave", gives when the
 * witch's last scene reaches its moment "nextsave": lvl04a entities and script), and the page has to do
 * the rest from what the game wrote. The game thread gets two test keys for that, put into worker.js
 * as the page fetches it (as tools/savestate-check.mjs does): virtual key 0xEA gives the command, 0xEB
 * gives it and lets the game thread fail at the top of its next pass, after the game wrote the player's
 * file. Nothing of it is in the port.
 *   Snelspel on the Tower (opened by the cheat):  the outro and nothing else (the original shows none: RcHcMenu.dat 0x565214 case 1)
 *   Avontuur at the Tower:                        the outro, HAUNTED, the adventure closed
 *   Avontuur, the game dies after the last world: the outro all the same, then the message (failed until 2026-11-22)
 */
async function towerEnd() {
  console.log('desktop 1280x960: the game finishes the Tower');
  const t = await open('desktop-einde', { viewport: { width: 1280, height: 960 } });
  const AT = "  post({ t: 'running', later });\n";
  await t.context.route('**/source/web/worker.js', async (route) => {
    const r = await route.fetch(); const body = await r.text();
    if (!body.includes(AT)) check(false, 'the test keys find their place in worker.js');
    await route.fulfill({ response: r, body: body.replace(AT, `  { const tm = game.m, raw = platform.input.poll; let ask = 0, die = false;
    platform.input.poll = () => { const ev = raw(); if (!ev) return ev; return ev.filter((e) => { const mine = (e.type === 'keydown' || e.type === 'keyup') && (e.vk === 0xEA || e.vk === 0xEB); if (mine && e.type === 'keydown') ask = e.vk; return !mine; }); };
    game.host.mainLoop.beforePass.push(() => { if (die) throw new Error('Proef van tools/menu-check.mjs: het spel valt uit na de laatste wereld'); if (!ask) return; const what = ask; ask = 0; const u32 = tm.u32, app = u32[0x6B915C >> 2], g = app ? u32[(app + 0x3A4) >> 2] : 0; if (!g) return;
      tm.call(0x4040F0, [0x694A68, 8], g + 0x68); if (what === 0xEB) die = true; }); }\n` + AT) });
  });
  await t.page.goto(url + '?skipintro');
  await createPlayer(t, 'Rick');
  const key = (vk, ms = 150) => t.page.evaluate(async ([v, d]) => { const g = window.RecompGame; g.input.key(v, true); await new Promise((r) => setTimeout(r, d)); g.input.key(v, false); }, [vk, ms]);
  const playing = async () => { await t.page.waitForFunction(() => window.RecompGame.running && window.RecompGame.framesDrawn > 120, null, { timeout: 180000 }); await t.page.waitForTimeout(1500); };
  /** Gives the command, answers the results screen with the fire key, and returns what the page was told and what the game left in the file at that moment. */
  const finish = async (vk) => {
    await t.page.evaluate(() => { const g = window.RecompGame; window.__end = null; g.onExit = (how) => { g.onExit = null; const p = g.players.get(g.players.current); window.__end = { how, gameType: p.gameType, world: p.world, completed5: p.completed[4] }; }; });
    await key(vk);
    for (let k = 0; k < 80 && await t.page.evaluate(() => window.RecompGame.running); k++) { await key(17, 200); await t.page.waitForTimeout(500); }
    await t.page.waitForFunction(() => window.__end, null, { timeout: 30000 }).catch(() => {});
    return t.page.evaluate(() => window.__end);
  };
  const state = () => t.page.evaluate(async () => { const g = window.RecompGame, n = g.players.current, p = g.players.get(n), m = window.__menu; return { mode: m.mode, movie: m.movies.name, haunted: !!m.memo.haunted, gameType: p.gameType, world: p.world, completed5: p.completed[4], save: await g.saveInfo(n), fatal: document.getElementById('menu-fatal').open }; });
  const toTower = () => t.page.evaluate(() => { const g = window.RecompGame; g.players.set(g.players.current, [['Level1', 'CurrentSubLevel', 'SubLevel1_5'], ['Level1', 'Completed', 1]]); });

  // Snelspel: a new player has one Griezelplek; the cheat opens the cards and leaves the adventure where it is
  await choose(t, 'quickplay');
  let cards = await t.page.$$eval('#level-list .level-card', (c) => c.map((x) => !x.disabled));
  await t.page.evaluate(() => window.RecompGame.settings.set('unlockAll', true));
  await t.page.waitForFunction(() => [...document.querySelectorAll('#level-list .level-card')].every((x) => !x.disabled), null, { timeout: 5000 }).catch(() => {});
  const open5 = await t.page.$$eval('#level-list .level-card', (c) => c.map((x) => !x.disabled));
  check(cards.join() === 'true,false,false,false,false' && open5.every(Boolean) && (await state()).world === 1, 'the cheat "alle griezelplekken" opens the five cards of Snelspel; the adventure stays at its first world', `${cards.join(' ')} -> ${open5.join(' ')}`);
  await t.act('#level-list .level-card:nth-child(5)');
  await t.act('#native-next');
  if (await t.pageName() !== 'startinfo') await t.act('#native-next');
  await t.act('#native-start');
  await playing();
  let end = await finish(0xEA);
  check(!!end && end.how === 'exit' && end.gameType === 1, 'Snelspel on the Tower: the game ends by itself when its last world is finished', JSON.stringify(end));
  // Not the original's (it looks only after an adventure): here the port's cheat opens the Tower's
  // card for anybody, so the film is shown, and nothing else.
  await t.moviePlaying('outronl').catch(() => {});
  let mq = await t.movie();
  check(mq.name === 'outronl' && mq.state === 'playing' && mq.menuHidden, 'after a won Snelspel on the Tower the outro plays (the port\'s own rule: its cheat opens that card)', JSON.stringify(mq));
  await t.page.keyboard.press('Escape');
  await t.page.waitForFunction(() => window.__menu.mode === 'menu' && !document.getElementById('menu').hidden, null, { timeout: 30000 }).catch(() => {});
  let s = await state();
  check(s.mode === 'menu' && !s.haunted && s.world === 1 && !s.completed5, 'and nothing else follows: the adventure as it was, no HAUNTED', JSON.stringify(s));
  check(await t.page.evaluate(() => document.querySelector('[data-menu-choice="quickplay"]').getAttribute('aria-pressed')) === 'true', 'and the Hoofdmenu comes back with Snelspel chosen');
  await t.page.evaluate(() => window.RecompGame.settings.set('unlockAll', false));

  // Avontuur at the Tower: the game writes [SubLevel1_5] Completed and quits; the page shows the outro
  await toTower();
  await choose(t, 'adventure');
  check(await t.pageName() === 'startinfo', 'an adventure at the Tower goes on from Startinfo');
  await t.act('#native-start');
  await playing();
  end = await finish(0xEA);
  check(!!end && end.how === 'exit' && end.gameType === 0 && end.completed5 === true && end.world === 5, 'Avontuur, the Tower finished: the game itself leaves [SubLevel1_5] Completed in the player\'s file and ends', JSON.stringify(end));
  await t.moviePlaying('outronl').catch(() => {});
  let m = await t.movie();
  check(m.name === 'outronl' && m.state === 'playing' && m.menuHidden && !m.muted, 'and the outro plays, with sound, before the menu', JSON.stringify(m));
  await t.shot('03-outro-na-de-toren');
  await t.page.keyboard.press('Escape');
  await t.page.waitForFunction(() => window.__menu.mode === 'menu', null, { timeout: 10000 }).catch(() => {});
  s = await state();
  check(s.mode === 'menu' && s.haunted && s.world === 1 && !s.completed5 && s.save === null && !s.fatal, 'after it: HAUNTED, the adventure back at its beginning, no save state (the table: the desktop walk above, with a score)', JSON.stringify(s));

  // The same, but the game dies right after its last world (as when memory runs out on the way out):
  // the original's menu does not know how the game ended, only what is in the file
  await toTower();
  await choose(t, 'adventure');
  await t.act('#native-start');
  await playing();
  const errorsBefore = t.problems.length;
  end = await finish(0xEB);
  check(!!end && end.how === 'crash' && end.gameType === 0 && end.completed5 === true, 'Avontuur, the game fails after it finished the Tower: the file has [SubLevel1_5] Completed, the page is told of a crash', JSON.stringify(end));
  await t.moviePlaying('outronl').catch(() => {});
  m = await t.movie();
  check(m.name === 'outronl' && m.state === 'playing' && m.menuHidden, 'the outro plays all the same', JSON.stringify(m));
  await t.page.keyboard.press('Escape');
  await t.page.waitForFunction(() => window.__menu.mode === 'menu', null, { timeout: 10000 }).catch(() => {});
  s = await state();
  check(s.mode === 'menu' && s.fatal && s.world === 1 && !s.completed5, 'then the menu with the message about the crash; the adventure is closed', JSON.stringify(s));
  if (s.fatal) await t.act('#menu-fatal-close');
  // (the crash that was asked for is in the console: not a fault of the page)
  t.problems.splice(errorsBefore, t.problems.length - errorsBefore, ...t.problems.slice(errorsBefore).filter((x) => !/Proef van tools\/menu-check\.mjs/.test(x)));
  t.report();
  await t.context.close();
}

if (only.includes('phone')) {
  console.log('phone 844x390, touch');
  const t = await open('telefoon', { viewport: { width: 844, height: 390 }, isMobile: true, hasTouch: true, deviceScaleFactor: 2 });
  await t.page.goto(url);
  // a tap ends a movie
  await t.moviePlaying('davilex');
  await t.page.touchscreen.tap(300, 200);
  await t.moviePlaying('intronl');
  await t.shot('00-intro');
  await t.page.touchscreen.tap(500, 100);
  await t.page.waitForFunction(() => window.__menu.mode === 'menu', null, { timeout: 10000 });
  check(true, 'two taps end the leader and the intro');
  await createPlayer(t, 'Tineke');
  await t.shot('03-hoofdmenu');
  const sizes = await t.page.$$eval('#menu button:not([hidden])', (b) => b.filter((x) => x.getClientRects().length).map((x) => { const r = x.getBoundingClientRect(); return [x.id || x.textContent, Math.round(r.width), Math.round(r.height)]; }));
  check(sizes.every((s) => s[2] >= 40), 'Hoofdmenu buttons are at least 40 px high', sizes.map((s) => s.join(':')).join(' '));
  await choose(t, 'highscores');
  await t.shot('04-highscores');
  await t.act('#native-previous');
  // the sliders by touch: a tap on the track is one step of 10
  await t.act('#open-settings');
  await t.visible('#settings[open] #volume-music');
  const track = await (await t.page.$('#volume-music')).boundingBox();
  await t.page.touchscreen.tap(track.x + track.width - 3, track.y + track.height / 2);
  await t.page.touchscreen.tap(track.x + 3, track.y + track.height / 2);
  await t.page.touchscreen.tap(track.x + 3, track.y + track.height / 2);
  check(await t.page.$eval('#volume-music', (e) => Number(e.value)) === 70 && track.height >= 36, 'Muziek by touch: taps on the track move it by 10', `${await t.page.$eval('#volume-music', (e) => e.value)} ${Math.round(track.width)}x${Math.round(track.height)}`);
  await t.act('#close-settings');
  await t.page.waitForSelector('#settings:not([open])', { state: 'attached' });
  await t.page.waitForTimeout(1500);
  check(await t.page.evaluate(() => window.__menu.audio.musicVolume === 80 && window.__menu.soundKeys().MusicVolume === '80'), 'and Annuleren puts 80 back');
  await settingsPages(t, '05');
  await t.act('#open-players');
  await t.visible('#player-list[open]');
  await t.page.waitForTimeout(300);
  await t.shot('06-spelerlijst');
  await t.act('#player-cancel');
  await choose(t, 'quickplay');
  await t.act('#level-list .level-card[data-level="1"]');
  await t.shot('07-griezelplek');
  await t.act('#native-next');
  await t.act('.native-difficulty[data-difficulty="2"]');
  await t.shot('08-moeilijkheid');
  await t.act('#native-next');
  await t.shot('09-startinfo');
  check((await t.page.textContent('#native-start-control-label')) === 'Aanraakscherm', 'Startinfo shows the touch screen as input');
  await t.act('#native-start');
  await waitForGame(t, '10-spel');
  const p = await t.page.evaluate(() => window.RecompGame.players.get(window.RecompGame.players.current));
  check(p.gameType === 1 && p.difficulty === 2, 'Snelspel and its difficulty are in the player file', JSON.stringify(p));
  const g = await t.page.$eval('#menu-gear', (e) => { const r = e.getBoundingClientRect(); return [Math.round(r.left), Math.round(r.top), Math.round(r.width), Math.round(r.height), getComputedStyle(e).display, window.innerHeight]; });
  // at the right edge under the game's HUD rows, which end 20 percent down (port.css; tools/input-check.mjs looks at the HUD itself)
  check(g[4] !== 'none' && g[2] >= 40 && g[0] > 780 && g[1] > g[5] * 0.2 && g[1] < g[5] * 0.35, 'gear button at the right edge under the HUD, 40 px or more', g.join(' '));
  await t.act('#menu-gear');
  await t.visible('#settings[open] #settings-stop-game');
  await t.shot('11-spel-instellingen');
  // what a Snelspel writes into the player's file does not count for the adventure (faked: progress, a finished last world, a score)
  await t.page.evaluate(() => { const g = window.RecompGame, n = g.players.current; g.onExit = () => { g.onExit = null; g.players.set(n, [['Level1', 'CurrentSubLevel', 'SubLevel1_3'], ['SubLevel1_5', 'Completed', 1], ['Player', 'TotalScore', 777]]); }; });
  await t.act('#settings-stop-game');
  // (90 s: in Playwright's WebKit the AudioContext's resume() holds the main thread for seconds when a pause ends, and the state is taken after that)
  await t.page.waitForFunction(() => window.__menu.mode === 'menu' && !document.getElementById('menu').hidden, null, { timeout: 90000 });
  const after = await t.page.evaluate(() => ({ ...window.RecompGame.players.get(window.RecompGame.players.current), movie: window.__menu.movies.name, choice: document.querySelector('[data-menu-choice="quickplay"]').getAttribute('aria-pressed') }));
  check(after.difficulty === 1 && after.world === 1 && !after.completed[4] && after.totalScore === 0 && !after.movie, 'after a Snelspel the adventure is as it was (difficulty, world, score) and there is no outro', JSON.stringify(after));
  check(after.choice === 'true', 'the Hoofdmenu comes back with Snelspel chosen');
  await t.page.waitForTimeout(1000);
  await t.shot('12-terug-in-menu');
  t.report();
  await t.context.close();
}

if (only.includes('portrait')) {
  console.log('portrait phone 390x844, touch');
  const t = await open('staand', { viewport: { width: 390, height: 844 }, isMobile: true, hasTouch: true, deviceScaleFactor: 2 });
  await t.page.goto(url);
  await t.moviePlaying('davilex');
  await t.shot('00-leader');
  check((await t.movie()).box.join() === '0,276,390,293', 'the movie is as wide as the screen, 4:3', (await t.movie()).box.join());
  await t.page.touchscreen.tap(200, 400); await t.moviePlaying('intronl'); await t.page.touchscreen.tap(200, 400);
  await createPlayer(t, 'Gyda');
  await t.shot('03-hoofdmenu');
  await choose(t, 'quickplay');
  await t.shot('04-griezelplek');
  await t.act('#native-previous');
  await t.act('#open-settings');
  await t.visible('#settings[open] #apply-settings');
  await t.shot('05-instellingen');
  await t.act('#open-more-settings');
  await t.visible('#touch-controls-setting');
  await t.shot('06-meer-instellingen');
  await t.act('[data-settings-page="more"] [data-settings-action="cancel"]');
  t.report();
  await t.context.close();
}

if (only.includes('isolation')) {
  console.log('without the isolation headers');
  const t = await open('zonder-isolatie', { viewport: { width: 1280, height: 960 } }, { strip: true });
  await t.page.goto(url + '?skipintro');
  check(!(await t.page.evaluate(() => self.crossOriginIsolated)), 'page is not cross-origin isolated');
  await createPlayer(t, 'Paul');
  check((await t.page.textContent('#menu-notice')).includes('kan in deze browser niet starten'), 'the notice says that the game cannot start in this browser');
  // with the old version kept next to this one (classic/), the notice offers it
  const classicThere = await t.page.evaluate(() => fetch(new URL('classic/index.html', document.baseURI), { method: 'HEAD', cache: 'no-store' }).then((r) => r.ok, () => false));
  await t.page.waitForTimeout(500);
  const offered = await t.page.evaluate(() => { const a = document.querySelector('#menu-notice a'); return a ? a.href : null; });
  check(classicThere ? !!offered && offered.endsWith('/classic/') : offered === null, classicThere ? 'and offers the old version at classic/' : 'no old version is served here, so none is offered', offered || '');
  await choose(t, 'adventure');
  await t.act('#native-next');
  check(await t.page.isDisabled('#native-start'), 'Start is disabled');
  await t.shot('01-melding');
  t.report();
  await t.context.close();

  // the movies are not there (the original: not on the CD): the menu comes without them, without a message
  const n = await open('zonder-films', { viewport: { width: 800, height: 600 } });
  await n.page.route('**/assets/media/**', (route) => route.fulfill({ status: 404, body: 'not found' }));
  await n.page.goto(url);
  await n.page.waitForFunction(() => window.__menu.mode === 'menu', null, { timeout: 15000 }).catch(() => {});
  const state = await n.movie();
  check(state.mode === 'menu' && !state.name && !state.menuHidden && !n.problems.some((x) => x.startsWith('pageerror')), 'missing movies are passed over', JSON.stringify(state));
  await n.context.close();
}

if (only.includes('gesture')) {
  console.log('a browser that refuses sound before a click');
  const strict = await launch({ args: glArgs });
  const t = await open('eerst-klikken', { viewport: { width: 1280, height: 720 } }, { from: strict });
  // the port's master volume at 40 percent
  await t.page.addInitScript(() => { try { if (!localStorage.getItem('rcspook-recomp.settings.v1')) localStorage.setItem('rcspook-recomp.settings.v1', JSON.stringify({ volume: 40 })); } catch (e) { /* no storage */ } });
  await t.page.goto(url);
  await t.page.waitForFunction(() => window.__menu.movies.state === 'waiting', null, { timeout: 20000 });
  let m = await t.movie();
  check(m.name === 'davilex' && m.paused && m.hint && m.menuHidden && !m.music && !m.muted, 'no sound allowed yet: the black first screen waits, nothing plays muted', JSON.stringify(m));
  await t.shot('01-wacht-op-klik');
  await t.page.mouse.click(640, 360);
  await t.moviePlaying('davilex');
  m = await t.movie();
  check(!m.paused && !m.muted && Math.abs(m.volume - 0.4) < 0.001 && !m.hint, 'the first click starts the leader with sound at the master volume and does not end it', JSON.stringify(m));
  check(m.box.join() === '160,0,960,720', 'black bars beside the 4:3 picture in a wide window', m.box.join());
  await t.shot('02-leader');
  // left alone, the leader ends and the intro follows by itself
  await t.moviePlaying('intronl');
  check(true, 'the leader ends by itself and the intro follows');
  // any button of a controller ends a movie as a key does (a simulated gamepad)
  await t.page.evaluate(() => {
    const pad = { connected: true, mapping: 'standard', index: 0, id: 'menu-check', axes: [0, 0, 0, 0], buttons: Array.from({ length: 17 }, () => ({ pressed: false, value: 0 })) };
    Object.defineProperty(navigator, 'getGamepads', { value: () => [pad], configurable: true });
    window.__pad = pad;
  });
  await t.page.waitForTimeout(300);
  check((await t.movie()).name === 'intronl', 'the intro is still on');
  await t.page.evaluate(() => { window.__pad.buttons[9].pressed = true; });
  await t.page.waitForFunction(() => window.__menu.mode === 'menu', null, { timeout: 10000 });
  await t.page.evaluate(() => { window.__pad.buttons[9].pressed = false; delete navigator.getGamepads; });
  check(true, 'a controller button ends the intro');
  await t.visible('#player-name-dialog[open]');
  await t.shot('03-menu');
  check(await t.page.evaluate(() => window.__menu.audio.musicWanted), 'then the Hoofdmenu with its music');
  t.report();
  await t.context.close();
  await strict.close();
}

// ---------------------------------------------------------------------------------------------
// Two tabs of one browser: a tab that was open earlier must not write its old copy of the players' files over
// what the other tab made (source/web/persist.js, files.js). Once as a browser does it, and once with the
// 'storage' event kept from the first tab, so that only the re-read before a write is left.
if (only.includes('tabs')) {
  console.log('--- two tabs');
  for (const events of [true, false]) {
    const context = await browser.newContext({ viewport: { width: 800, height: 600 } });
    const menu = async (page) => { await page.goto(url + '?skipintro=1'); await page.waitForFunction(() => window.__menu && window.__menu.mode === 'menu' && window.RecompGame, null, { timeout: 30000 }); };
    const list = (page) => page.evaluate(() => window.RecompGame.players.list().map((p) => `${p.number}:${p.name}:w${p.world}`).join(' '));
    const A = await context.newPage();
    if (!events) await A.addInitScript(() => window.addEventListener('storage', (e) => e.stopImmediatePropagation(), true));
    await menu(A);
    await A.evaluate(async () => { const g = window.RecompGame; g.players.create('Anna'); g.players.current = 1; await new Promise((r) => setTimeout(r, 300)); });
    await menu(A);
    const B = await context.newPage();
    await menu(B);
    await B.evaluate(async () => { const g = window.RecompGame; g.players.create('Bob'); g.players.set(1, [['Level1', 'CurrentSubLevel', 'SubLevel1_3'], ['SubLevel1_1', 'Completed', 1], ['SubLevel1_2', 'Completed', 1]]); await new Promise((r) => setTimeout(r, 500)); });
    const seen = await list(A);
    if (events) check(seen === '1:Anna:w3 2:Bob:w1', 'the tab that was open sees what the other tab wrote (a second player, the adventure further)', seen);
    else check(seen === '1:Anna:w1', '(the storage event kept away: the first tab still has its old copy)', seen);
    await A.evaluate(async () => { const g = window.RecompGame; g.players.set(1, [['Sound', 'MusicVolume', 70]]); await new Promise((r) => setTimeout(r, 500)); });
    await B.close();
    const C = await context.newPage(); await menu(C);
    const after = await list(C), volume = await C.evaluate(() => /^MusicVolume=(.*)$/m.exec(window.RecompGame.players.text(1))[1]);
    check(after === '1:Anna:w3 2:Bob:w1' && Number(volume) === 70, `${events ? '' : 'without the event: '}a write of the first tab changes its own value only: the second player and the progress are still there`, `${after}, MusicVolume ${volume}`);
    await context.close();
  }
}
await browser.close();
notRunSummary();
console.log(failed ? `${failed} check(s) failed` : 'all checks passed');
process.exit(failed ? 1 : 0);
