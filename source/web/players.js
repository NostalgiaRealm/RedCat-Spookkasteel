// Players, as the original menu keeps them: one file Settings\Player<N>.ini per player, made from
// Settings\PlayerDef.ini. The game reads and writes these files itself (difficulty, progress,
// score); this module is what a menu needs on top. Up to eight players, names up to twelve
// characters, as in the original player list.
import { gameFiles, GAME_DIR } from './files.js';
import { latin1Decode } from '../host/ini.js';
import { store } from './persist.js';
import { settings } from './settings.js';
import { startBindings, bindingEntries } from './keybinds.js';

export const MAX_PLAYERS = 8, NAME_MAX = 12, WORLDS = 5;
export const WORLD_NAMES = ['Bos', 'Kasteel', 'Kerkhof', 'Grotten', 'Kasteeltoren'];
const CURRENT_KEY = 'rcspook-recomp.player';
const file = (n) => `${GAME_DIR}\\SETTINGS\\PLAYER${n}.INI`;
let template = null;      // text of PlayerDef.ini

// the camera key a player chose is kept by his number (setting `keys`, cameraBy): a number that is free again starts clean
const forgetCamera = (n) => { const keys = settings.get('keys') || {}; if (keys.cameraBy && keys.cameraBy[n] !== undefined) { const by = { ...keys.cameraBy }; delete by[n]; settings.set('keys', { ...keys, cameraBy: by }); } };

export const players = {
  /** Loads PlayerDef.ini from the original files. Call once before create(). */
  async init(baseUrl) {
    if (template !== null) return;
    // The page cannot make a player without it, so an answer that fails for a moment (a busy or
    // restarting server) is asked for again: three more times, after 0.3, 0.6 and 1.2 s.
    for (let attempt = 0; ; attempt++) {
      let status = 0;
      try {
        const r = await fetch(baseUrl + 'data/Settings/PlayerDef.ini');
        if (r.ok) { template = latin1Decode(new Uint8Array(await r.arrayBuffer())); return; }
        status = r.status;
      } catch (e) { status = 0; }
      const passing = status === 0 || status === 408 || status === 429 || status >= 500;
      if (!passing || attempt >= 3) throw new Error('PlayerDef.ini: ' + (status ? 'HTTP ' + status : 'geen antwoord'));
      await new Promise((done) => setTimeout(done, 300 << attempt));
    }
  },
  exists: (n) => gameFiles.has(file(n)),
  /** One player's data, read from its INI file, or null. world and completed come from the game's own progress keys. */
  get(n) {
    if (!players.exists(n)) return null;
    const f = file(n);
    const int = (sec, key, def = 0) => { const v = parseInt(gameFiles.iniGet(f, sec, key), 10); return Number.isFinite(v) ? v : def; };
    const cur = /SubLevel1_(\d)/i.exec(gameFiles.iniGet(f, 'Level1', 'CurrentSubLevel') || '');
    const completed = [];
    for (let w = 1; w <= WORLDS; w++) completed.push(int(`SubLevel1_${w}`, 'Completed') !== 0);
    return {
      number: n,
      name: gameFiles.iniGet(f, 'General', 'PlayerName') || '',
      difficulty: int('General', 'DifficultyLevel', 1),            // 0 easy, 1 normal, 2 hard
      gameType: int('General', 'GameType', 0),                     // 0 adventure, 1 quick play
      world: cur ? Math.min(WORLDS, Math.max(1, Number(cur[1]))) : 1,   // the world the adventure is at
      completed,                                                   // per world
      // The adventure is finished when its last world is: [SubLevel1_5] Completed, the key the
      // original menu looks at when a game comes back (RcHcMenu.dat 0x567694, docs/menu.md).
      // Not [Level1] Completed: the game sets that one at every change of world, the first too
      // (ChangeToSubLevel, 0x497C97: PUSH 1 / level settings 0x4F2570 / SetCompleted 0x4F31C0;
      // seen in the Node runner after world 1: CurrentSubLevel=SubLevel1_2, Completed=1).
      adventureDone: completed[WORLDS - 1],
      totalScore: int('Player', 'TotalScore'),
      score: int('Player', 'Score'),
      lives: int('Player', 'Life', 3),
    };
  },
  list() { const out = []; for (let n = 1; n <= MAX_PLAYERS; n++) { const p = players.get(n); if (p) out.push(p); } return out; },
  /** Creates a player in the first free slot. Returns its number, or 0 when all eight are taken. */
  create(name) {
    if (template === null) throw new Error('players.init() has not run');
    for (let n = 1; n <= MAX_PLAYERS; n++) {
      if (players.exists(n)) continue;
      gameFiles.writeText(file(n), template);
      forgetCamera(n);
      // the keys a player starts with here: the original's and the JavaScript port's next to them (keybinds.js)
      gameFiles.iniSet(file(n), [['General', 'PlayerName', String(name).slice(0, NAME_MAX)], ...bindingEntries(startBindings(settings.get('keys'), template).binds)]);
      return n;
    }
    return 0;
  },
  remove(n) { gameFiles.remove(file(n)); forgetCamera(n); if (players.current === n) players.current = 0; },
  rename(n, name) { if (players.exists(n)) gameFiles.iniSet(file(n), [['General', 'PlayerName', String(name).slice(0, NAME_MAX)]]); },
  /** The text of PlayerDef.ini, the file every new player starts from. */
  template: () => template,
  /** A player's whole file as text, or null; and putting a whole file in its place (export and import in the menu). */
  text: (n) => (players.exists(n) ? gameFiles.readText(file(n)) : null),
  setText(n, text) { if (players.exists(n)) gameFiles.writeText(file(n), text); },
  /** Sets values in a player's file: entries [[section, key, value], ...]. */
  set(n, entries) { if (players.exists(n)) gameFiles.iniSet(file(n), entries); },
  /** Puts the adventure back at world 1 with a fresh player state, keeping name and settings. */
  restartAdventure(n) {
    if (template === null || !players.exists(n)) return;
    const keep = ['General', 'Display', 'Sound', 'Mouse', 'KeyBinds', 'Keyboard'];
    // A section is its heading line and what follows up to the next heading line. By lines: a value
    // may hold a bracket ([KeyBinds] WeaponPrev=[), and cutting there lost the player's keys after it.
    const heading = (line) => /^\s*\[.*\]\s*$/.test(line);
    const cut = (lines, name) => {
      const from = lines.findIndex((l) => heading(l) && l.trim().slice(1, -1).toLowerCase() === name.toLowerCase());
      if (from < 0) return null;
      let to = from + 1;
      while (to < lines.length && !heading(lines[to])) to++;
      return [from, to];
    };
    const old = (gameFiles.readText(file(n)) || '').split(/\r?\n/), lines = template.split(/\r?\n/);
    for (const s of keep) { const o = cut(old, s), t = cut(lines, s); if (o && t) lines.splice(t[0], t[1] - t[0], ...old.slice(o[0], o[1])); }
    const text = lines.join('\r\n');
    gameFiles.writeText(file(n), text);
  },
  get current() { const n = Number(store.get(CURRENT_KEY) || 0); return players.exists(n) ? n : 0; },
  set current(n) { store.set(CURRENT_KEY, String(n || 0)); },
  /** Highest world a player may choose in quick play: the adventure's current world, or all when it is done. */
  unlockedWorlds(n) { const p = players.get(n); return p ? (p.adventureDone ? WORLDS : p.world) : 1; },
};
