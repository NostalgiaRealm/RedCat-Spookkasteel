// Entry of the page. The game API is in game.js; gamepad and touch input in their own modules.
// The simple start card (world, difficulty) is used when the page has one; a menu replaces it.
import { game } from './game.js';
import './gamepad.js';
import './touch.js';
import './hints.js';
import './skip.js';

const $ = (id) => document.getElementById(id);
const statusEl = $('status'), statsEl = $('stats');
let toastTimer = 0;
if (!game.onStatus) game.onStatus = (s, brief) => { if (!statusEl) return; statusEl.textContent = s; clearTimeout(toastTimer); if (brief) toastTimer = setTimeout(() => { if (statusEl.textContent === s) statusEl.textContent = ''; }, brief === true ? 2500 : brief); };
// The frame counter, as the JavaScript port's: "60 FPS" at the top right while a world is drawn, when the setting
// "FPS weergeven" is on. ?stats in the address shows the long line for development instead.
const showStats = (d) => {
  if (!statsEl) return;
  const on = game.running && !game.paused && d;
  statsEl.textContent = !on ? '' : params.has('stats') ? `${d.fps} fps · ${d.draws} draws/s · ${d.fetches} bestanden (${d.mb.toFixed(1)} MB)` : game.settings.get('showFps') ? `${d.fps} FPS` : '';
};
if (!game.onStats) game.onStats = showStats;
game.settings.onChange((key) => { if (key === 'showFps') showStats(game.stats); });
window.addEventListener('recomp-exit', () => showStats(null));
// a game that waits draws nothing: no number then (looked at twice a second; a pause comes from many places)
setInterval(() => { if (statsEl && statsEl.textContent && (!game.running || game.paused)) statsEl.textContent = ''; }, 500);
// The window is not in front: the game waits (game.js). One line says so.
window.addEventListener('recomp-blur', (e) => { if (game.onStatus) game.onStatus(e.detail.paused ? 'Het spel wacht tot dit venster weer vooraan staat.' : ''); });
const params = new URLSearchParams(location.search);
// a game that could not be started at all (the page's own files did not arrive): said, not left hanging on "Laden"
const startFailed = (error) => { console.error(error); game.onStatus('Het spel kon niet gestart worden: ' + (error && error.message ? error.message : error)); };

const card = $('card');
if (card) {
  // simple start card
  const ensurePlayer = async () => { await game.ready; if (!game.players.exists(1)) game.players.create('RedCat'); game.players.current = 1; };
  const go = async (resume) => {
    await ensurePlayer();
    card.hidden = true;
    game.start({ player: 1, world: Number($('world').value), difficulty: Number($('difficulty').value), adventure: $('mode').value === 'adventure', resume }).catch(startFailed);
  };
  game.onExit = (how, info) => { card.hidden = false; game.onStatus(how === 'crash' ? 'Fout: ' + info.message : 'Het spel is afgesloten.'); };
  $('start').addEventListener('click', () => go(false));
  $('continue').addEventListener('click', () => go(true));
  game.saveInfo(1).then((s) => { if (s) { $('continue').hidden = false; $('continue').title = new Date(s.savedAt).toLocaleString('nl-NL'); } });
  $('fullscreen').addEventListener('click', () => { const el = $('stage'); if (document.fullscreenElement) document.exitFullscreen(); else el.requestFullscreen().catch(() => {}); });
  if (!game.supported()) {
    const reason = game.unsupportedReason();
    console.warn(`[${reason}] ${game.unsupportedDetail()}`);
    game.onStatus(reason === 'isolation' ? 'Deze pagina heeft cross-origin isolation nodig (COOP/COEP-headers) voor gedeeld geheugen.'
      : reason === 'canvas' ? 'Deze browser kan een canvas niet aan een worker geven (transferControlToOffscreen ontbreekt); daarmee tekent het spel.'
      : 'Deze browser geeft geen WebGL 2 op een canvas buiten de pagina (OffscreenCanvas); daarmee tekent het spel.');
    $('start').disabled = true;
  }
}
// ?autostart=1&world=N[&continue=1]: straight into a world, for the checks in tools/ (works with or without a menu)
if (params.has('autostart')) {
  game.ready.then(() => {
    // a browser the game cannot run in: said above or by the menu, and no game is started only to end in the error dialog
    if (!game.supported()) { console.warn(`[${game.unsupportedReason()}] autostart: ${game.unsupportedDetail()}`); return; }
    if (!game.players.exists(1)) game.players.create('RedCat');
    game.players.current = 1;
    if (card) card.hidden = true;
    game.start({ player: 1, world: Number(params.get('world') || 1), difficulty: Number(params.get('difficulty') || 1), adventure: !params.has('quick'), resume: params.has('continue') }).catch(startFailed);
  });
}
// for the checks in tools/
window.__save = () => game.save();
Object.defineProperty(window, '__lastSave', { get: () => game.lastSave });
