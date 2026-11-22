// Entry of the menu: the original Hoofdmenu of RedCat Spookkasteel as the JavaScript port in
// ../RCSPOOK_NEW rebuilt it, wired to this project's page API (../web/game.js). See docs/menu.md.
//
//   Hoofdmenu -> Avontuur   -> (new player: Moeilijkheid ->) Startinfo -> game.start(adventure)
//             -> Snelspel   -> Griezelplek -> Moeilijkheid -> Startinfo -> game.start(quick play)
//             -> Highscores
//   Instellingen, Spelerlijst (with export and import of a player), Help, Stoppen; F10 or the gear
//   opens Instellingen over a running game (there also: the saved place again, an older one, Spel stoppen).
//   Startinfo -> Meer opties: an older saved place, the world again from its beginning, a new adventure.
//
// The menu is hidden while a game runs ('recomp-running') and comes back when it ends ('recomp-exit').
// Movies as in the original (RcHcMenu.dat, StartUp 0x565214): the Davilex leader and the intro
// before the Hoofdmenu at every start of the program, the outro when an adventure comes back
// finished. The menu music starts after them.
// Sound levels as in the original (docs/research/menu-audio.md): the music at the player's music
// volume, every clip at the player's effects volume; the music runs from after the movies until a
// game starts and begins again when the menu comes back.
import { keyGuard } from './key-guard.js';      // keep this the first import: see key-guard.js
import { game, VK } from '../web/game.js';
import { store } from '../web/persist.js';
import { keepStorage } from '../web/keep-storage.js';
import { importLegacyPlayers, reportLines, classicAddress } from '../web/legacy-import.js';
import { MAX_PLAYERS, NAME_MAX } from '../web/players.js';
import { MenuAudio, DEFAULT_VOLUME } from './menu-audio.js';
import { SliderAudio } from './slider-audio.js';
import { OriginalMenu } from './original-menu.js';
import { PlayerMenu } from './player-menu.js';
import { QuitMenu } from './quit-menu.js';
import { NativeHelp } from './native-help.js';
import { PORT_HELP } from './port-help.js';
import { SettingsMenu } from './settings-menu.js';
import { GamepadMenu } from './gamepad-menu.js';
import { GamepadNav } from './gamepad-nav.js';
import { highscoreRows, insertScore } from './highscores.js';
import { MoviePlayer } from './movie.js';
import { adventureKeys, restoreAdventureKeys, soundVolumes, setSoundVolumes, rawSoundKeys } from './player-file.js';
import { gdiSlider } from './gdi-slider.js';
import { createExport, parseImport, applyImport, MAX_IMPORT_BYTES } from './save-export.js';
import { touchEnabled } from '../web/touch.js';
import { adoptBindings } from '../web/keybinds.js';

const { players, settings } = game;
const $ = (id) => document.getElementById(id);
const params = new URLSearchParams(location.search);
// Settings\menu.ini [MENUSTRINGS] 53..57; world numbers 1..5 of the page API
const LEVELS = [{ name: 'Het Bos' }, { name: 'Het Kasteel' }, { name: 'Het Kerkhof' }, { name: 'De Grotten' }, { name: 'De Toren' }];
// For a visitor: the game cannot start here. The browser cannot give the page shared memory (it is
// too old, the page is shown inside another site's page, or the server does not send the headers),
// cannot hand a canvas to a worker, or has no WebGL 2 on such a canvas. For whoever runs the server,
// the console says which of these it is (game.unsupportedReason(), game.unsupportedDetail()).
const UNSUPPORTED = 'Het spel kan in deze browser niet starten. Probeer een recente versie van Chrome, Edge, Firefox of Safari.';

// --- what the menu remembers itself -------------------------------------------------------
// Per player number: the last Snelspel choices and, while a Snelspel is on, the adventure's part
// of the player's file to put back afterwards (player-file.js). For everybody, as the original
// keeps them in Settings\menu.ini: `haunted` (HAUNTED: an adventure was finished once, which opens
// every Griezelplek in Snelspel) and `highscores` (the table of [HIGHSCORES]).
const MEMO_KEY = 'rcspook-recomp.menu.v1';
let memo = { players: {} };
const readMemo = () => { memo = { players: {} }; try { const m = JSON.parse(store.get(MEMO_KEY) || 'null'); if (m && m.players && typeof m.players === 'object') memo = m; } catch (e) { /* start empty */ } };
readMemo();
store.onReplace(MEMO_KEY, readMemo);
// another tab of this page changed the players' files: show them (persist.js takes them over)
store.onReplace('rcspook-recomp.files.v1', () => { if (typeof mode !== 'undefined' && mode === 'menu' && typeof refreshMenu === 'function') { try { refreshSaves().then(refreshMenu); } catch (e) { /* the menu is not up yet */ } } });
const rec = (n) => (memo.players[n] || (memo.players[n] = {}));
const keep = () => store.set(MEMO_KEY, JSON.stringify(memo));
/**
 * Worlds a player has reached stay open in Snelspel, whatever happens to his adventure afterwards
 * (a new adventure, an imported one): the highest number is noted in the menu's record. The
 * JavaScript port kept unlocks apart from the saved game in the same way, and players taken over
 * from it already had this value. The original closes the cards again with a new adventure.
 */
function noteUnlocked(n) {
  if (!players.exists(n)) return;
  const r = rec(n), now = players.unlockedWorlds(n);
  if (!(r.unlocked >= now)) { r.unlocked = now; keep(); }
}

// (?autostart in a browser the game cannot run in starts nothing, ../web/main.js: an ordinary visit then, with the notice)
let mode = params.has('autostart') && game.supported() ? 'starting' : 'movie';    // 'movie', 'menu', 'starting', 'game', 'closed'
let lastGame = null;                                          // { player, adventure } of the game the menu started last
let saves = new Map();                                        // player number -> { savedAt, world, adventure }
const draft = { adventure: 1, quickplay: 1 };                 // choice on the Moeilijkheid page, per flow
let quickLevel = 0;                                           // Snelspel: chosen world index
let controllerActive = false;
let originalMenu = null, playerMenu = null, quitMenu = null, settingsMenu = null, nativeHelp = null;

const audio = new MenuAudio({ volume: settings.get('volume') / 100 });
const sliderAudio = new SliderAudio(audio);
// The two volumes belong to the player and live in his file. With nobody chosen yet the original
// has a fresh player object, 80 and 80; what is set then lasts until a player is chosen.
const nobody = { music: DEFAULT_VOLUME, effects: DEFAULT_VOLUME };
const volumes = {
  get: () => (players.current ? soundVolumes(players.current) : { ...nobody }),
  store(v) { if (players.current) setSoundVolumes(players, players.current, v); else Object.assign(nobody, v); },
};
/** The current player's volumes on the menu's sound: whenever the Hoofdmenu comes up (0x56084C) and when the player changes. */
function syncVolumes() { const v = volumes.get(); audio.setMusicVolume(v.music); audio.setEffectsVolume(v.effects); }
const when = (ms) => new Date(ms).toLocaleString('nl-NL', { day: 'numeric', month: 'long', hour: '2-digit', minute: '2-digit' });
const flow = () => (originalMenu && originalMenu.flow === 'quickplay' ? 'quickplay' : 'adventure');

function getState() {
  const n = players.current, p = n ? players.get(n) : null;
  const advSave = (p && saves.get(n)) || null;          // (game.saveInfo only knows adventure states)
  // RcHcMenu.dat 0x55E1EA: with HAUNTED every card is free
  // rec.unlocked: worlds a player taken over from the JavaScript port had already opened there
  const unlocked = settings.get('unlockAll') || memo.haunted ? LEVELS.length : p ? Math.min(LEVELS.length, Math.max(players.unlockedWorlds(n), (memo.players[n] || {}).unlocked || 0)) : 1;
  // a game of the JavaScript port that was saved inside a world: it starts that world again here
  const old = p && (memo.players[n] || {}).legacy;
  const oldNote = old && old.midWorld && !advSave && !p.adventureDone && p.world === old.world
    ? `Overgenomen uit de vorige versie: je begint ${LEVELS[old.world - 1].name} opnieuw, met je punten en levens.` : '';
  // an adventure is under way when the player got past the first world, left a save state in it,
  // or was taken over from the JavaScript port inside it
  // a save state that was thrown away when the menu read it (another build of the game, or damaged; ../web/game.js)
  const lostNote = p && !advSave && !p.adventureDone ? game.lostSaveNote(n, p.world) : '';
  const returning = !!p && !p.adventureDone && (p.world > 1 || !!advSave || !!oldNote);
  if (quickLevel >= unlocked) quickLevel = 0;
  return {
    name: p ? p.name : '', hasPlayer: !!p, returning,
    difficulty: draft[flow()], level: quickLevel, unlocked,
    savedLevel: p ? p.world - 1 : 0, savedDifficulty: p ? p.difficulty : 1, savedScore: p ? p.totalScore : 0,
    resumeNote: advSave ? `Je gaat verder vanaf je opgeslagen spel van ${when(advSave.savedAt)}.` : lostNote || oldNote,
    // Meer opties: with a saved place, the world can also be started from its beginning, as the
    // original does for a player who comes back; and an older saved place, when those are kept
    worldRestart: advSave && p && !p.adventureDone ? `${LEVELS[p.world - 1].name} opnieuw beginnen` : '',
    recovery: !!p && !p.adventureDone && !!settings.get('recovery'),
    canStart: game.supported() && mode === 'menu', touchEnabled: touchEnabled(), controllerActive, levels: LEVELS,
  };
}
function refreshMenu() {
  if (!originalMenu) return;
  if (originalMenu.page === 'quickplay') originalMenu.renderLevels();
  originalMenu.refresh();
}

/** The current player's defaults for the pages: his difficulty, his last Snelspel choices. */
function adoptPlayer() {
  const p = players.get(players.current), r = p ? rec(p.number) : {};
  draft.adventure = p ? p.difficulty : 1;
  draft.quickplay = Number.isInteger(r.quickDifficulty) ? r.quickDifficulty : draft.adventure;
  quickLevel = Math.max(0, Math.min(LEVELS.length - 1, (r.quickWorld || 1) - 1));
}

/**
 * Reads which players have a save state of their adventure. A state the page could not judge (the
 * game's lists did not arrive: a server that refuses for a moment) is asked about again a little
 * later, a few times, and before a game is started (launch): shown as "no state", a new adventure
 * would be started over it.
 */
let savesRetry = 0, savesTries = 0;
async function refreshSaves() {
  const next = new Map();
  let unknown = false;
  for (const p of players.list()) {
    const info = await game.saveInfo(p.number);
    if (info) next.set(p.number, { savedAt: info.savedAt, world: info.world, adventure: info.adventure !== false });
    else if (game.saveUnknown(p.number)) unknown = true;
  }
  saves = next;
  clearTimeout(savesRetry);
  if (!unknown) savesTries = 0;
  else if (++savesTries <= 6) savesRetry = setTimeout(() => { if (mode === 'menu') refreshSaves().then(refreshMenu); }, 5000);
}
/**
 * After a Snelspel (also one that was cut off by closing the page): the adventure's sections of
 * the player's file and its difficulty as they were before. game.start() writes the Snelspel
 * difficulty into DifficultyLevel, and the game writes progress and scores in a Snelspel too.
 */
function restoreAfterSnelspel() {
  for (const p of players.list()) {
    const r = rec(p.number);
    if (!r.before) continue;
    restoreAdventureKeys(players, p.number, r.before.keys);
    if (Number.isInteger(r.before.difficulty)) players.set(p.number, [['General', 'DifficultyLevel', r.before.difficulty]]);
    delete r.before;
  }
  keep();
}

// --- Spelerlijst: the game's own Player<N>.ini files ---------------------------------------
const sameName = (a, b) => a.toLocaleLowerCase('nl') === b.toLocaleLowerCase('nl');
const profiles = {
  max: MAX_PLAYERS, nameMax: NAME_MAX,
  list: () => players.list().map((p) => ({ id: p.number, name: p.name })),
  get activeId() { return players.current; },
  create(value) {
    const list = players.list();
    if (list.length >= MAX_PLAYERS) throw new Error('Er kunnen maximaal acht spelers in de Spelerlijst staan.');
    const name = String(value).normalize('NFC').trim().replace(/\s+/gu, ' ');
    if (!name) throw new Error('Vul een spelersnaam in.');
    // the player files are Latin-1 text
    if (/[^\x20-\x7e\xa0-\xff]/.test(name)) throw new Error('Deze spelersnaam bevat ongeldige tekens.');
    if (name.length > NAME_MAX) throw new Error(`Een spelersnaam mag maximaal ${NAME_MAX} tekens bevatten.`);
    if (list.some((p) => sameName(p.name, name))) throw new Error('Er is al een speler met deze naam. Kies een andere naam.');
    const n = players.create(name);
    if (!n) throw new Error('Er kon geen nieuwe speler worden aangemaakt. Probeer het opnieuw.');
    // a new player starts with both volumes at 80 (CreateNewPlayer 0x56643C, static.ini [DEFAULTSETTINGS])
    setSoundVolumes(players, n, { music: DEFAULT_VOLUME, effects: DEFAULT_VOLUME });
    // nothing of an earlier player with this number may come back
    memo.players[n] = {}; keep(); saves.delete(n); game.deleteSave(n);
    keepStorage();          // there is something to keep now, and this is a click in the menu
    return { id: n, name };
  },
};
async function selectPlayer(id) {
  if (!players.exists(id)) throw new Error('Deze speler bestaat niet meer.');
  players.current = id;
  adoptPlayer();
  originalMenu.home();
  syncVolumes();
  keepStorage();
}
async function removePlayer(id) {
  if (players.list().length <= 1) throw new Error('Maak eerst een andere speler aan.');
  const wasCurrent = players.current === id;
  players.remove(id);
  await game.deleteSave(id);
  delete memo.players[id]; saves.delete(id); keep();
  if (wasCurrent) { players.current = players.list()[0].number; adoptPlayer(); }
  originalMenu.home();
  syncVolumes();
}

// --- starting a game ------------------------------------------------------------------------
function showLoading(opts) {
  $('menu-loading-mode').textContent = opts ? (opts.adventure ? 'Avontuur' : 'Snelspel') : '';
  $('menu-loading-detail').textContent = opts ? `Bezig met het laden van ${LEVELS[opts.world - 1].name}` : '';
  $('menu-loading').hidden = false;
}
async function launch({ kind }) {
  const n = players.current, p = players.get(n);
  if (!p) { playerMenu.open(); return; }
  if (kind === 'restart' || kind === 'restart-world') { askRestart(kind === 'restart-world' ? 'world' : 'adventure'); return; }
  if (kind === 'recovery') { openRecovery(false); return; }
  if (!game.supported() || mode !== 'menu') return;
  // A save state that could not be judged when the menu read it: asked once more now. Still not
  // known: no game is started over it (the game could not fetch its lists either). Known and
  // good: an adventure the page offered as new is the one to go on with.
  if (game.saveUnknown(n)) {
    mode = 'starting';
    try { await refreshSaves(); } finally { mode = 'menu'; }
    refreshMenu();
    if (game.saveUnknown(n)) {
      $('menu-fatal-message').textContent = 'De bestanden van het spel zijn nu niet te bereiken. Probeer het over een ogenblik opnieuw.';
      $('menu-fatal-classic').hidden = true;
      $('menu-fatal').showModal(); $('menu-fatal-close').focus();
      return;
    }
    const found = saves.get(n);
    if (kind === 'new' && found && found.adventure && !p.adventureDone) kind = 'continue';
  }
  const r = rec(n), save = saves.get(n);
  let opts;
  if (kind === 'quickplay') {
    r.before = { keys: adventureKeys(n), difficulty: p.difficulty };
    r.quickWorld = quickLevel + 1; r.quickDifficulty = draft.quickplay;
    opts = { player: n, world: quickLevel + 1, difficulty: draft.quickplay, adventure: false };
  } else if (kind === 'new') {
    // a finished adventure starts again at the first world
    if (p.adventureDone) { noteUnlocked(n); players.restartAdventure(n); if (save) { await game.deleteSave(n); saves.delete(n); } }
    players.set(n, [['General', 'DifficultyLevel', draft.adventure]]);
    opts = { player: n, world: players.get(n).world, difficulty: draft.adventure, adventure: true };
  } else {
    // continue: from the save state when there is one, else from the start of the world the adventure is at.
    // 'world': from the start of that world although there is a save state (it was deleted on the question).
    opts = { player: n, world: p.world, difficulty: p.difficulty, adventure: true, resume: kind !== 'world' };
  }
  opts.flight = !!rec(n).flight;        // free flight is kept per player, as in the JavaScript port
  keep();
  // the game reads the two volumes from the player's file when it starts (the original menu
  // writes them at this point, 0x566768)
  setSoundVolumes(players, n, soundVolumes(n));
  lastGame = { player: n, adventure: opts.adventure, world: opts.world };
  mode = 'starting';
  $('menu').inert = true;               // the original's handler lets nothing else happen until the game starts
  // a browser only enters full screen from the click itself; ../web/game.js asks again at start
  if (settings.get('fullscreen') && !document.fullscreenElement && document.documentElement.requestFullscreen) document.documentElement.requestFullscreen({ navigationUI: 'hide' }).catch(() => {});
  // TfrmStartGame.BtnNextClick 0x55CCD8: the clip is played to its end with the music still on;
  // then the menu ends, and its music with it
  await Promise.race([audio.say([opts.adventure ? 'rcmn32.wav' : 'rcmn43.wav']), new Promise((res) => setTimeout(res, 6000))]);
  audio.stop();
  $('menu').hidden = true; $('menu').inert = false;
  showLoading(opts);
  try { await game.start(opts); }
  catch (error) { backToMenu('crash', { message: String(error && error.message ? error.message : error) }); }
}
// The question before an adventure (text of menu.ini MENUSTRINGS 36) or only its world is begun again.
const RESTART_TEXT = 'Weet je het zeker dat je een nieuw avontuur wil beginnen? Je huidige avontuur zal voor altijd verloren gaan.';
let restartWhat = 'adventure';
function askRestart(what = 'adventure') {
  const dialog = $('menu-restart'), p = players.get(players.current);
  if (dialog.open || !p) return;
  restartWhat = what;
  $('menu-restart-question').textContent = what === 'world'
    ? `Weet je zeker dat je ${LEVELS[p.world - 1].name} opnieuw wil beginnen? Je opgeslagen plek in deze wereld${settings.get('recovery') ? ' en je herstelpunten gaan' : ' gaat'} verloren. Je begint de wereld zoals je hem binnenkwam.`
    : RESTART_TEXT;
  dialog.showModal(); $('menu-restart-no').focus();
}
async function confirmRestart() {
  const n = players.current;
  $('menu-restart').close();
  audio.say(['rcmn3.wav']);
  if (!players.exists(n)) return;
  if (restartWhat === 'world') {
    // The world from its beginning, with what the player's own file says: what the original does
    // for a player who comes back. The game leaves the state at the door of the world in that file
    // (seen in the Node runner: closed in the middle of world 1 after a lost life and added points,
    // and after "Nee" on the retry screen, [Player] still had Life=3, Score=0).
    await game.deleteSave(n);
    saves.delete(n);
    refreshMenu();
    await launch({ kind: 'world' });
    return;
  }
  noteUnlocked(n);
  players.restartAdventure(n);
  await game.deleteSave(n);
  saves.delete(n);
  adoptPlayer();
  originalMenu.flow = 'adventure'; originalMenu.adventure = 'new';
  originalMenu.show('difficulty', { announce: false });
}
function cancelRestart() {
  if (!$('menu-restart').open) return;
  audio.say(['rcmn4.wav']); $('menu-restart').close(); $(restartWhat === 'world' ? 'start-world-over' : 'start-over').focus();
}

// --- older saved places (recovery points) -----------------------------------------------------
// "Eerder opgeslagen avontuur laden" on Startinfo (Meer opties) and "Eerder avontuur laden" in the
// settings over a running adventure: the dialog and its wording are the JavaScript port's. A point
// says its real age in playing time, not a promised one (source/web/recovery.js).
let recoveryInGame = false;
async function openRecovery(inGame) {
  const n = inGame && lastGame ? lastGame.player : players.current, dialog = $('recovery-saves');
  if (dialog.open || !players.exists(n)) return;
  recoveryInGame = inGame;
  $('recovery-options').replaceChildren();
  $('recovery-status').textContent = 'Herstelpunten laden…';
  dialog.showModal(); $('close-recovery').focus();
  const list = await game.recoveryInfo(n);
  if (!dialog.open) return;
  $('recovery-options').replaceChildren(...list.map((point) => {
    const button = document.createElement('button'); button.type = 'button'; button.className = 'recovery-choice'; button.dataset.recovery = point.id;
    const title = document.createElement('b'); title.textContent = point.minutes === 1 ? '1 minuut geleden' : `${point.minutes} minuten geleden`;
    const detail = document.createElement('small');
    detail.textContent = (LEVELS[point.world - 1] ? LEVELS[point.world - 1].name : 'Opgeslagen avontuur') + ' · ' + new Date(point.savedAt).toLocaleString('nl-NL', { dateStyle: 'short', timeStyle: 'short' });
    button.append(title, detail);
    button.addEventListener('click', () => loadRecovery(n, point));
    return button;
  }));
  $('recovery-status').textContent = list.length ? 'Het gekozen herstelpunt wordt je huidige avontuur.'
    : settings.get('recovery') ? 'Er is nog niet genoeg speeltijd opgeslagen. Herstelpunten worden tijdens het spelen bewaard.'
      : 'Herstelpunten staan uit. Je zet ze aan bij Instellingen → Meer instellingen.';
  const first = $('recovery-options').querySelector('button');
  if (first) first.focus();
}
function closeRecovery() { if ($('recovery-saves').open) { audio.say(['rcmn2.wav']); $('recovery-saves').close(); } }
async function loadRecovery(n, point) {
  const dialog = $('recovery-saves');
  if (!dialog.open) return;
  for (const b of $('recovery-options').querySelectorAll('button')) b.disabled = true;
  const said = `Avontuur van ongeveer ${point.minutes === 1 ? '1 minuut' : point.minutes + ' minuten'} geleden geladen.`;
  if (recoveryInGame) {
    // over a running game: that game makes way for the older place (the settings close with it: 'recomp-restart')
    dialog.close();
    await game.reload({ recovery: point.id, note: said });
    return;
  }
  $('recovery-status').textContent = 'Herstelpunt laden…';
  const ok = await game.loadRecovery(n, point.id);
  await refreshSaves();
  if (!ok || !saves.get(n)) { refreshMenu(); openRecoveryAgain(); return; }
  dialog.close();
  refreshMenu();
  await launch({ kind: 'continue' });
}
function openRecoveryAgain() { $('recovery-saves').close(); openRecovery(false).then(() => { if (!$('recovery-options').children.length) $('recovery-status').textContent = 'Dit herstelpunt is er niet meer.'; }); }

// --- Spelerlijst: Exporteren and Importeren (save-export.js) ------------------------------------
async function exportPlayer(id) {
  const p = players.get(id);
  if (!p) throw new Error('Deze speler bestaat niet meer.');
  noteUnlocked(id);
  const r = memo.players[id] || {};
  const file = createExport({ name: p.name, ini: players.text(id), menu: { unlocked: r.unlocked, flight: !!r.flight, quickWorld: r.quickWorld, quickDifficulty: r.quickDifficulty } });
  const url = URL.createObjectURL(new Blob([file.text], { type: 'application/json;charset=utf-8' }));
  const a = document.createElement('a');
  a.href = url; a.download = file.filename; a.hidden = true;
  try { document.body.append(a); a.click(); } finally { a.remove(); setTimeout(() => URL.revokeObjectURL(url), 1000); }
  // the place inside a world is a save state of this build of the game: it is not in the file
  return { status: 'downloaded', filename: file.filename, note: saves.get(id) ? 'Je opgeslagen plek binnen de wereld gaat niet mee: na importeren begint die wereld opnieuw.' : '' };
}
/** Lets the visitor pick a file and reads it: { canceled } or { bundle } (parseImport's result with a line for the question). */
function readImport() {
  return new Promise((resolve, reject) => {
    const input = document.createElement('input');
    input.type = 'file'; input.accept = '.json,application/json'; input.hidden = true; input.setAttribute('data-save-import', '');
    let done = false, reading = false, timer = 0;
    const finish = (result, error) => {
      if (done) return;
      done = true; clearTimeout(timer); window.removeEventListener('focus', focused); input.remove();
      if (error) reject(error); else resolve(result);
    };
    const chosen = async () => {
      if (done || reading) return;
      const file = input.files && input.files[0];
      if (!file) { finish({ canceled: true }); return; }
      reading = true;
      try {
        if (!/\.json$/i.test(file.name)) throw new Error('Kies een geëxporteerd JSON-bestand van RedCat Spookkasteel.');
        if (file.size > MAX_IMPORT_BYTES) throw new Error('Het importbestand is te groot (maximaal 32 MiB).');
        if (!file.size) throw new Error('Het importbestand is leeg.');
        const bundle = parseImport(await file.text(), players.template());
        bundle.note = bundle.adventureDone ? 'In dit bestand is het avontuur uitgespeeld.'
          : bundle.midWorld ? `Dit bestand komt uit de vorige versie van het spel: je begint ${bundle.worldTitle} opnieuw, met je punten en levens.`
            : `Het avontuur in dit bestand is bij ${bundle.worldTitle}.`;
        finish({ bundle });
      } catch (error) { finish(null, error); }
    };
    // a browser without the cancel event of a file input: when the window has the focus again and nothing was chosen
    const focused = () => { clearTimeout(timer); timer = setTimeout(chosen, 300); };
    input.addEventListener('change', chosen);
    input.addEventListener('cancel', () => finish({ canceled: true }));
    window.addEventListener('focus', focused);
    (document.querySelector('dialog[open]') || document.body).append(input);
    try { input.click(); } catch (error) { finish(null, error); }
  });
}
async function importPlayer(id, bundle) {
  if (!players.exists(id)) throw new Error('Deze speler bestaat niet meer.');
  if (mode !== 'menu') throw new Error('Importeren kan alleen vanuit het menu.');
  // the player's own file with the imported adventure in it; then nothing of his earlier adventure may come back
  players.setText(id, applyImport(players.text(id), players.template(), bundle.entries));
  await game.deleteSave(id);
  saves.delete(id);
  const m = bundle.menu;
  memo.players[id] = { unlocked: m.unlocked, flight: !!m.flight };
  if (m.quickWorld) memo.players[id].quickWorld = m.quickWorld;
  if (Number.isInteger(m.quickDifficulty)) memo.players[id].quickDifficulty = m.quickDifficulty;
  if (m.legacy) memo.players[id].legacy = m.legacy;
  // an adventure that was finished in the JavaScript port opens every Griezelplek, as its take-over does
  if (bundle.kind === 'classic' && bundle.adventureDone) memo.haunted = true;
  keep();
  noteUnlocked(id);
  if (players.current === id) { adoptPlayer(); syncVolumes(); }
  refreshMenu();
}

// --- the game ended (or could not start) -----------------------------------------------------
function closeDialogs() { for (const d of document.querySelectorAll('dialog.rc-menu[open]')) d.close(); }
async function backToMenu(how, info) {
  const last = lastGame;
  lastGame = null;
  if (settingsMenu.isOpen) settingsMenu.close();
  closeDialogs();
  mode = 'movie';                       // nothing can be started until the menu is back
  $('menu-loading').hidden = true; $('menu-quit-done').hidden = true;
  // the frame counter and the last status line of the game that ended
  if ($('stats')) $('stats').textContent = '';
  if (statusEl) statusEl.textContent = '';
  // A Snelspel on the Tower that was won (the game wrote [SubLevel1_5] Completed before its results
  // screen): read before the adventure's own sections are put back. See below for what follows.
  const wonTower = !!last && !last.adventure && last.world === LEVELS.length && (() => { const q = players.get(last.player); return !!q && q.completed[LEVELS.length - 1]; })();
  restoreAfterSnelspel();
  if (last) noteUnlocked(last.player);
  await refreshSaves();
  // The original (0x565214 with 0x564EEC, player file read by 0x567694): back from a game that the
  // menu started as an adventure (PREVSTATE 2), with [General] GameType 0 and
  // [SubLevel1_5] Completed set in the player's file: the outro, and the adventure is closed.
  // The game sets that key when the Tower's last scene gives the command "nextsave" (0x4FED00 from
  // ChangeToSubLevel 0x496D60), before its results screen, and then quits. How the game ended is
  // not asked: the launcher starts the menu again after every game and never looks at the exit code
  // (RedCat.exe 0x401250), so a game that died after it wrote the key (out of memory on the results
  // screen, say) gets its outro too; the message about the crash comes after it. Until 2026-11-22
  // a crash was left out here, and the next Avontuur then began a new adventure without outro,
  // HAUNTED or highscore. After a Snelspel nothing is looked at, the Tower included (case 1 of
  // 0x565214 does not call 0x564EEC; docs/menu.md).
  const p = last && last.adventure ? players.get(last.player) : null;
  if (p && p.gameType === 0 && p.completed[4]) {
    audio.stop();
    await movies.play(['outronl']);
    await closeAdventure(p);
  }
  // Not the original's: it shows no outro after a Snelspel, the Tower included. But there the
  // Tower's card only opens after a finished adventure, so whoever beats the witch in a Snelspel
  // has seen the end. Here the port's own cheat opens the card for anybody, and a player could
  // beat the witch without ever seeing how the story ends (reported on 2026-11-22). So: the film,
  // and nothing else - no HAUNTED, no highscore, the adventure stays where it was.
  else if (wonTower) { audio.stop(); await movies.play(['outronl']); }
  if (mode !== 'movie') return;         // a game was started meanwhile, without the menu
  mode = 'menu';
  adoptPlayer();
  $('menu').hidden = false; $('menu').inert = false;
  syncVolumes();                        // StartUp 0x565214: the music starts again at the player's own volume
  // the Hoofdmenu comes back with the choice of the game that was played (TfrmMainScreen.FormShow 0x560978)
  originalMenu.home({ focus: true, choice: last && !last.adventure ? 'quickplay' : 'adventure' });
  audio.showMenu();
  if (how === 'crash') {
    $('menu-fatal-message').textContent = (info && info.message) || 'Onbekende fout.';
    // the old version, when it is kept next to this one: for a browser or device this port fails on
    $('menu-fatal-classic').hidden = true;
    classicAddress().then((url) => { if (url) { $('menu-fatal-classic').href = url; $('menu-fatal-classic').hidden = false; } });
    $('menu-fatal').showModal(); $('menu-fatal-close').focus();
  }
}
/**
 * What the original does after the outro, whether it was watched to the end or not (0x564EEC):
 * HAUNTED is set, the player's TotalScore goes into the highscore table, and the player's
 * adventure is put back to its beginning. That also makes the outro play only once.
 */
async function closeAdventure(p) {
  memo.haunted = true;
  memo.highscores = insertScore(memo.highscores, { name: p.name, score: p.totalScore });
  keep();
  noteUnlocked(p.number);
  players.restartAdventure(p.number);
  await game.deleteSave(p.number);
  saves.delete(p.number);
}
window.addEventListener('recomp-running', () => {
  // also reached without the menu: ?autostart=1 in ../web/main.js
  mode = 'game';
  audio.stopMusic();
  closeDialogs();
  $('menu').hidden = true; $('menu-loading').hidden = true; $('menu-quit-done').hidden = true;
});
window.addEventListener('recomp-exit', (e) => { if (originalMenu) backToMenu(e.detail && e.detail.how, e.detail && e.detail.info); });
// a game that is started anew by the page itself (its save state could not be used after all): the loading screen again
window.addEventListener('recomp-restart', (e) => {
  mode = 'starting';
  if (settingsMenu && settingsMenu.isOpen) settingsMenu.close();
  closeDialogs();
  showLoading(e.detail && e.detail.launch && LEVELS[e.detail.launch.world - 1] ? e.detail.launch : null);
});

const statusEl = $('status');
let statusTimer = 0;
game.onStatus = (s, brief) => {
  // brief: true for 2.5 s, or a number of milliseconds
  if (statusEl) { statusEl.textContent = s; clearTimeout(statusTimer); if (brief) statusTimer = setTimeout(() => { if (statusEl.textContent === s) statusEl.textContent = ''; }, brief === true ? 2500 : brief); }
};
// a save state that lands after the game has ended: Startinfo should know about it
window.addEventListener('recomp-saved', () => { if (mode === 'menu') refreshSaves().then(refreshMenu); });
// A world reached is open in Snelspel from the moment it is reached, not from the next time the menu sees the
// player's file: an older place loaded in the game (Eerder avontuur laden, F9) puts that file back.
window.addEventListener('recomp-world', (e) => { if (e.detail && e.detail.adventure) noteUnlocked(e.detail.player); });

// --- Instellingen over a running game: F10 or the gear ----------------------------------------
const gear = document.createElement('button');
gear.id = 'menu-gear'; gear.type = 'button'; gear.title = 'Instellingen (F10)'; gear.setAttribute('aria-label', 'Instellingen');
gear.innerHTML = '<svg viewBox="0 0 24 24" aria-hidden="true"><circle cx="12" cy="12" r="7.5" fill="none" stroke="currentColor" stroke-width="5" stroke-dasharray="3.2 2.69"/><circle cx="12" cy="12" r="5.6" fill="none" stroke="currentColor" stroke-width="2.4"/></svg>';
$('stage').appendChild(gear);
function openGameSettings() {
  if (!game.running || !settingsMenu || document.querySelector('dialog.rc-menu[open]')) return;
  if (document.pointerLockElement) document.exitPointerLock();
  // the game must not keep walking: let go of every key that is down
  for (const code of keyGuard.held) { const vk = VK[code]; if (vk !== undefined) game.input.key(vk, false); }
  game.setPaused(true);
  audio.unlock();
  settingsMenu.open({ inGame: true });
}
gear.addEventListener('click', openGameSettings);
/** "Spel stoppen" in the in-game settings: a save state first, then the game's own way out. */
async function stopGame() {
  if (!game.running) return;
  game.onStatus('Het spel wordt opgeslagen en gestopt…');
  // (a save that fails says so too, and so does one that is not taken because RedCat has no
  // health or the game is already ending: no waiting for nothing, and the last good state stays)
  const stored = new Promise((res) => { for (const name of ['recomp-saved', 'recomp-save-failed', 'recomp-save-skipped']) window.addEventListener(name, res, { once: true }); setTimeout(res, 4000); });
  game.save();
  await stored;
  game.stop();
}
document.addEventListener('visibilitychange', () => { if (document.hidden) audio.pause(); else audio.resume(); });

// --- keyboard ----------------------------------------------------------------------------------
const keyboardNav = new GamepadMenu(), gamepadMenu = new GamepadMenu(), gamepadNav = new GamepadNav({ deadzone: () => settings.get('deadzone') });
const DIALOGS = ['controller-lost', 'native-help-viewer', 'menu-fatal', 'menu-restart', 'recovery-saves', 'player-import-dialog', 'player-delete-dialog', 'player-name-dialog', 'player-list', 'quit-confirmation', 'settings'];
function menuRoot() {
  for (const id of DIALOGS) if ($(id).open) return $(id);
  for (const id of ['menu-quit-done', 'menu']) if (!$(id).hidden) return $(id);
  return null;
}
function setControllerActive(active) {
  if (controllerActive === active) return;
  controllerActive = active;
  document.body.classList.toggle('controller-input', active);
  if (!active) gamepadMenu.reset();
  if (originalMenu && originalMenu.page === 'startinfo') originalMenu.refresh();
}
keyGuard.keydown = (e) => {
  if (e.isTrusted) { audio.unlock(); setControllerActive(false); }
  if (movies.active) {
    // any key ends a movie (TfrmIntro.FormKeyDown 0x564308); the browser keeps its own keys
    e.stopImmediatePropagation();
    if (!e.ctrlKey && !e.metaKey && !e.altKey && !/^F\d+$/.test(e.code)) e.preventDefault();
    if (!e.repeat) movies.press(true);
    return;
  }
  // Toetsen instellen is waiting for a key: it is that key, whatever it is
  if (settingsMenu && settingsMenu.keys.key(e)) return;
  const dialogOpen = !!document.querySelector('dialog.rc-menu[open]');
  if (game.running) {
    if (dialogOpen) {
      // keys are for the settings now, not for the game
      e.stopImmediatePropagation();
      if (e.code === 'F10') { e.preventDefault(); if (!e.repeat && menuRoot() === $('settings')) settingsMenu.cancel(); return; }
    } else {
      if (e.code === 'F10') { e.preventDefault(); e.stopImmediatePropagation(); if (!e.repeat) openGameSettings(); }
      return;
    }
  }
  if (!originalMenu || e.altKey || e.ctrlKey || e.metaKey) return;
  if (e.code === 'Escape' && !dialogOpen && mode === 'menu') { if (originalMenu.back()) e.preventDefault(); return; }
  // arrow keys walk the buttons, as the d-pad of a controller does
  const dir = { ArrowUp: 'up', ArrowDown: 'down', ArrowLeft: 'left', ArrowRight: 'right' }[e.key];
  const t = e.target;
  if (!dir || !(t === document.body || (t instanceof HTMLElement && /^(BUTTON|SUMMARY|DIALOG)$/.test(t.tagName)))) return;
  const root = menuRoot();
  if (!root) return;
  e.preventDefault();
  keyboardNav.update(root, {});
  keyboardNav.update(root, { [dir]: true });
};
keyGuard.keyup = (e) => { if (game.running && document.querySelector('dialog.rc-menu[open]')) e.stopImmediatePropagation(); };
window.addEventListener('pointerdown', (e) => { if (e.isTrusted) { audio.unlock(); setControllerActive(false); } }, { capture: true });
// a tap only counts as a user gesture when the finger lifts
window.addEventListener('pointerup', (e) => { if (e.isTrusted) audio.unlock(); }, { capture: true });

// --- controller in the menu -------------------------------------------------------------------
function controllerBack(root) {
  switch (root.id) {
    case 'native-help-viewer': nativeHelp.back(); break;
    case 'menu-fatal': $('menu-fatal').close(); break;
    case 'menu-restart': cancelRestart(); break;
    case 'recovery-saves': closeRecovery(); break;
    case 'player-import-dialog': case 'player-delete-dialog': case 'player-name-dialog': case 'player-list': playerMenu.back(root.id); break;
    case 'quit-confirmation': quitMenu.cancel(); break;
    case 'settings': if (settingsMenu.page === 'base') settingsMenu.cancel(); else if (settingsMenu.page === 'keys') settingsMenu.keys.back(); else settingsMenu.show('base'); break;
    case 'controller-lost': resumeAfterLoss(); break;
    case 'menu': originalMenu.back(); break;
    default: break;
  }
}
let lastPoll = 0, padWasDown = false, movieSeen = false;
function pollController(t) {
  requestAnimationFrame(pollController);
  const dt = Math.min(0.25, (t - lastPoll) / 1000) || 0;
  lastPoll = t;
  if (movies.active) {
    // any button of a controller counts as a key
    let down = false;
    try { for (const pad of (navigator.getGamepads ? navigator.getGamepads() : [])) if (pad && pad.connected && pad.buttons.some((b) => b.pressed)) down = true; } catch (e) { down = false; }
    // a button that was already down when the movie began does not count
    if (down && !padWasDown && movieSeen) movies.press(true);
    padWasDown = down; movieSeen = true;
    gamepadNav.reset();
    return;
  }
  movieSeen = false;
  // while a game runs the controller belongs to the game (../web/gamepad.js), except under a dialog of the
  // menu over it (Instellingen, the lost controller): the game is paused then and gets no input
  const over = game.running && !!document.querySelector('dialog.rc-menu[open]');
  const root = (!game.running || over) && originalMenu ? menuRoot() : null;
  const actions = gamepadNav.poll(dt, !!root && !document.hidden && document.hasFocus());
  if (!actions || !root) { if (!root) gamepadMenu.reset(); return; }
  if (actions.active) setControllerActive(true);
  // the lost controller's prompt has one answer, and any confirming or cancelling button gives it
  if (root.id === 'controller-lost' && (actions.confirm || actions.cancel)) { resumeAfterLoss(); return; }
  if (!controllerActive) return;
  if (actions.cancel) controllerBack(root);
  else { gamepadMenu.update(root, actions); gamepadMenu.scroll(root, actions.scroll * 650 * dt); }
}
window.addEventListener('recomp-gamepad', (e) => { if (!e.detail || !e.detail.connected) setControllerActive(false); });
// R3 on a controller opens Instellingen over the game, as F10 and the gear do
window.addEventListener('recomp-open-settings', () => { openGameSettings(); gamepadNav.reset(); });
// The controller that was being played with is gone (../web/gamepad.js): the game waits, as in the JavaScript
// port, until the player says go on, with a key, a click, a tap or a button of a controller.
function resumeAfterLoss() { if ($('controller-lost').open) $('controller-lost').close(); }
window.addEventListener('recomp-gamepad-lost', () => {
  if (!game.running || document.querySelector('dialog.rc-menu[open]')) return;
  if (document.pointerLockElement) document.exitPointerLock();
  for (const code of keyGuard.held) { const vk = VK[code]; if (vk !== undefined) game.input.key(vk, false); }
  game.setPaused(true);
  $('controller-lost').showModal();
  $('controller-lost-resume').focus({ preventScroll: true });
});
$('controller-lost-resume').addEventListener('click', resumeAfterLoss);
$('controller-lost').addEventListener('cancel', (e) => { e.preventDefault(); resumeAfterLoss(); });
$('controller-lost').addEventListener('close', () => { if (game.running) game.setPaused(false); });

// --- size ------------------------------------------------------------------------------------------
// The fixed-size forms (Instellingen, Spelerlijst, the prompts) follow the window like the
// 800 × 600 Hoofdmenu does. A portrait window reflows them instead (port.css).
const fit = () => {
  const w = window.innerWidth, h = window.innerHeight;
  const zoom = w / h <= 0.8 ? 1 : Math.max(0.5, Math.min(2.5, w / 800, h / 600));
  document.documentElement.style.setProperty('--form-zoom', zoom.toFixed(4));
  document.documentElement.style.setProperty('--panel-zoom', Math.max(1, zoom).toFixed(4));
};
fit();
window.addEventListener('resize', fit);

// --- movies ----------------------------------------------------------------------------------------
const movies = new MoviePlayer({ overlay: $('menu-movie'), video: $('menu-movie-video'), hint: $('menu-movie-hint'), volume: () => settings.get('volume') / 100 });
// Every start of the program begins with the Davilex leader and the intro (the launcher starts the
// menu with /FirstTime, which makes PREVSTATE 0: Config load 0x550F98, StartUp 0x565214). Not
// when a game is started without the menu, and not with ?skipintro (for the checks in tools/).
let opening = Promise.resolve();
if (mode === 'starting') { $('menu-movie').hidden = true; showLoading(null); }
else if (params.has('skipintro') || settings.get('intro') === false) $('menu-movie').hidden = true;      // the setting: somebody who switched the intro off in the JavaScript port keeps that
else opening = movies.play(['davilex', 'intronl']);

async function replayIntro() {
  if (mode !== 'menu' || game.running || movies.active || document.querySelector('dialog.rc-menu[open]')) return;
  mode = 'movie';                       // nothing can be started while it plays
  audio.stop();
  $('menu').hidden = true;
  try { await movies.play(['intronl']); } finally {
    mode = 'menu';
    $('menu').hidden = false;
    syncVolumes();
    audio.showMenu();
    $('play-intro-again').focus({ preventScroll: true });
  }
}

// --- artwork ---------------------------------------------------------------------------------------
// Hover and pressed states and the backgrounds of the other pages are separate bitmaps: fetch them
// ahead, so that a button does not blink empty the first time the pointer comes over it.
function preloadArtwork() {
  const files = ['adventur', 'difficul', 'quickpla', 'startgam', 'highscor', 'editbgnd', 'messbgnd', '00120000', '06150000', '06160000', '06170000', '06180000', '11010000', '11020000'];
  for (const paw of ['0004', '0006', '0212', '0213', '0216', '0217', '0219', '0222', '0223']) for (let k = 0; k < 3; k++) files.push(`${paw}000${k}`);
  for (let n = 0; n < 3; n++) for (let k = 0; k < 3; k++) files.push(`030${n}000${k}`);
  for (let n = 0; n < 5; n++) { files.push(`100${n}0000`); for (let k = 0; k < 5; k++) files.push(`040${n}000${k}`); }
  preloadArtwork.images = files.map((name) => { const img = new Image(); img.src = `assets/menu/${name}.png`; return img; });
}

// --- start ----------------------------------------------------------------------------------------
function notice(text) { $('menu-notice').textContent = text; $('menu-notice').hidden = !text; }
/** Adds the way to the old version to the notice, when it is kept next to this one (classic/): for a browser this port does not run in. */
function offerClassic() {
  classicAddress().then((url) => {
    if (!url || $('menu-notice').hidden || $('menu-notice').querySelector('a')) return;
    const a = document.createElement('a'); a.href = url; a.textContent = 'Speel de vorige versie';
    $('menu-notice').append(' ', a);
  });
}
/**
 * Players that existed before this port kept its keys in the player's file (an earlier build, or taken over
 * from the JavaScript port just now) get the keys a new player starts with, when their file still has the
 * original's own: W, A, S, D and Shift next to them, or what the visitor had bound in the JavaScript port.
 * A file somebody changed only loses the original's Walk=Alt, which is also the sidesteps' key, to Shift.
 * Once: the setting `keys` then carries v: 3 (v: 2 was in the defaults of an earlier build and marks nothing).
 */
function adoptKeys() {
  const keys = settings.get('keys') || {};
  if (keys.v === 3) return;
  const template = players.template();
  for (const p of players.list()) { const entries = adoptBindings(players.text(p.number), template, keys); if (entries) players.set(p.number, entries); }
  const camera = Array.isArray(keys.camera) && keys.camera.length ? keys.camera.filter((c) => typeof c === 'string') : ['KeyV'];
  settings.set('keys', { ...keys, v: 3, camera });
}
async function init() {
  // First: what the JavaScript port left here (players, progress, scores). The old data is only read.
  let taken = null;
  try {
    taken = await importLegacyPlayers({
      players, note: rec, keep,
      addScore: (row) => { memo.highscores = insertScore(memo.highscores, row); },
      setHaunted: () => { memo.haunted = true; },
    });
  } catch (error) { console.warn('[overname]', error); }
  adoptKeys();
  restoreAfterSnelspel();
  for (const p of players.list()) noteUnlocked(p.number);
  if (!params.has('autostart')) game.forgetSnelspel();
  await refreshSaves();
  adoptPlayer();
  nativeHelp = new NativeHelp({ audio, extra: PORT_HELP });
  originalMenu = new OriginalMenu({
    audio, getState,
    setDifficulty: (value) => { draft[flow()] = value; },
    setLevel: (index) => { quickLevel = index; },
    launch,
    scores: () => highscoreRows(players.list(), LEVELS, memo.highscores),
    help: (page) => nativeHelp.open(page === 'startinfo' ? `start-${originalMenu.flow}` : page),
    needPlayer: () => playerMenu.open(),
  });
  playerMenu = new PlayerMenu({ profiles, audio, selectPlayer, removePlayer, exportPlayer, readImport, importPlayer, canOpen: () => mode === 'menu' });
  quitMenu = new QuitMenu({
    dialog: $('quit-confirmation'), openButton: $('open-quit'), yesButton: $('quit-yes'), noButton: $('quit-no'), status: $('quit-status'), audio,
    // in the desktop app (electron/preload.cjs) Ja ends the program, as the original's did; a web page shows the closing state
    closeGame: async () => {
      if (window.desktop && typeof window.desktop.quit === 'function') { audio.stop(); await window.desktop.quit(); return; }
      mode = 'closed'; audio.stop(); $('menu').hidden = true; $('menu-quit-done').hidden = false; $('menu-quit-back').focus();
    },
  });
  settingsMenu = new SettingsMenu({
    game, audio, sliderAudio, volumes, help: (context) => nativeHelp.open(context),
    // free flight as the current player's kept choice (with nobody chosen: not kept)
    flightChoice: { get: () => !!(players.current && rec(players.current).flight), set: (on) => { if (players.current) { rec(players.current).flight = !!on; keep(); } } },
    onClose: (inGame) => { if (inGame) { game.setPaused(false); gear.blur(); } else refreshMenu(); },
    onStopGame: stopGame,
    // the saved place of the game that runs, again (as F9); and, in an adventure, an older one
    onLoadSave: () => { game.reload(); },
    onRecovery: (ask) => { const can = !!(lastGame && lastGame.adventure) && !!settings.get('recovery'); if (ask === 'available') return can; if (can) openRecovery(true); return can; },
  });
  $('close-recovery').addEventListener('click', closeRecovery);
  $('recovery-saves').addEventListener('cancel', (e) => { e.preventDefault(); closeRecovery(); });
  $('native-player-help').addEventListener('click', () => nativeHelp.open('players'));
  // "Bekijk de originele intro" (Startinfo → Meer opties), as in the JavaScript port: for whoever switched the
  // intro off or stopped it. The menu's music stops for it and starts again afterwards, as after a game.
  $('play-intro-again').addEventListener('click', replayIntro);
  $('menu-quit-back').addEventListener('click', () => { mode = 'menu'; $('menu-quit-done').hidden = true; $('menu').hidden = false; originalMenu.home({ focus: true }); syncVolumes(); audio.showMenu(); });
  for (const id of ['volume-music', 'volume-effects']) gdiSlider($(id), $(id).parentElement.querySelector('.gdi-slider-hit'));
  $('menu-restart-yes').addEventListener('click', confirmRestart);
  $('menu-restart-no').addEventListener('click', cancelRestart);
  $('menu-restart').addEventListener('cancel', (e) => { e.preventDefault(); cancelRestart(); });
  $('menu-fatal-close').addEventListener('click', () => $('menu-fatal').close());
  settings.onChange((key, value) => {
    if (key === 'volume') audio.setVolume(value / 100);
    else if (key === 'unlockAll' || key === 'touch' || key === 'recovery') refreshMenu();
  });
  requestAnimationFrame(pollController);
  setTimeout(preloadArtwork, 300);

  if (!game.supported()) { console.warn(`[${game.unsupportedReason()}] ${game.unsupportedDetail()}`); notice(UNSUPPORTED); offerClassic(); }
  await opening;
  if (mode !== 'movie') return;         // a game is being started without the menu
  // after the movies: the music, then the Hoofdmenu with its greeting (0x565214, 0x560978)
  // (the music starts at 80, and the Hoofdmenu then sets the current player's volume: 0x5652C5, 0x5608F5)
  mode = 'menu';
  $('menu').hidden = false;
  originalMenu.home();
  syncVolumes();
  audio.showMenu();
  // a first visit, or the chosen player is gone: the Spelerlijst comes first, as in the original
  if (!players.current) playerMenu.open();
  else keepStorage();          // a visitor who comes back makes or chooses no player: asked here, with the menu at rest
  if (taken) showTakenOver(taken);
}
/** After players of the JavaScript port were taken over: says what happened, once. */
async function showTakenOver(report) {
  const box = $('menu-legacy-message');
  box.replaceChildren(...reportLines(report).map((line) => { const p = document.createElement('p'); p.textContent = line; return p; }));
  const more = document.createElement('p');
  const classic = report.imported.some((r) => r.legacy && r.legacy.midWorld) ? await classicAddress() : null;
  more.textContent = classic ? 'Je opgeslagen spel van de vorige versie is bewaard. Daar kun je nog precies verder waar je was.' : 'Wat de vorige versie had opgeslagen, is bewaard gebleven.';
  box.append(more);
  $('menu-legacy-classic').hidden = !classic;
  if (classic) $('menu-legacy-classic').href = classic;
  $('menu-legacy-close').onclick = () => $('menu-legacy').close();
  if (!$('menu-legacy').open) $('menu-legacy').showModal();
}
game.ready.then(init).catch(async (error) => {
  console.error(error);
  await opening;
  $('menu').hidden = false;
  notice('Het menu kon niet starten: ' + (error && error.message ? error.message : error));
});

// for the checks in tools/
window.__menu = { get mode() { return mode; }, get page() { return originalMenu ? originalMenu.page : null; }, audio, movies, getState, soundKeys: () => (players.current ? rawSoundKeys(players.current) : null), get saves() { return saves; }, get memo() { return memo; } };
