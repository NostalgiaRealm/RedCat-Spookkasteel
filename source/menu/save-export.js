// Export and import of one player (Spelerlijst → Exporteren / Importeren), as the JavaScript port
// had it (its save-export.js, save-import.js), for what this port keeps of a player.
//
// What lasts of a player here is small and does not depend on the build: his file
// Settings\Player<N>.ini (the world his adventure is at, what he has when he enters it, his keys
// and volumes) and the menu's own record (worlds opened, free flight, last Snelspel). That is what
// an export file holds. The saved place inside a world is a save state: 45 to 63 MB that only the
// build that made it can load (source/host/snapshot.js). It is not in the file; after an import
// the adventure starts at the beginning of the world it is at, which is what the original game
// does for a player who comes back.
//
// Two files can be imported:
//   - this port's own:      { format: 'redcat-spookkasteel-recomp-player', formatVersion: 1,
//                             exportedAt, player: { name }, playerIni, menu: { unlocked, flight, quickWorld, quickDifficulty } }
//   - the JavaScript port's: { format: 'redcat-spookkasteel-save', formatVersion: 1, exportedAt,
//                             player: { name }, save, progress, options }. Converted with the rules
//                             of the take-over (../web/legacy.js convertPlayer, docs/legacy-saves.md):
//                             a game saved inside a world starts that world again.
// An imported file is somebody's text that ends up in a file the original game code reads. So
// nothing of it is written as it is: only known sections and keys are taken, each value checked
// against what the game itself writes, and put into the destination player's own file. His name
// and display settings stay; the adventure, the difficulty, the two volumes and the keys are the
// file's. A key line must be one the game's own key list can read (../web/keybinds.js), and a
// line the template has a key on cannot be emptied. No key may stand twice in a section (the test
// would see the first, the file would get the last), and what belongs together (health and its
// maximum, mirror parts, potions) is tested on the file as the import leaves it: a value the file
// does not bring is the new player's.
//
// Pure functions (no browser, no storage): also run under Node by tools/legacy-check.mjs.
import { editIni } from '../host/ini.js';
import { validSave, convertPlayer, WORLD_TITLES } from '../web/legacy.js';
import { keyName } from '../web/keybinds.js';

export const EXPORT_FORMAT = 'redcat-spookkasteel-recomp-player', EXPORT_VERSION = 1;
export const CLASSIC_FORMAT = 'redcat-spookkasteel-save', CLASSIC_VERSION = 1;
export const MAX_IMPORT_BYTES = 32 * 1024 * 1024;        // the JavaScript port's limit: its file holds a whole saved game
const MAX_INI = 64 * 1024, MAX_LINES = 1200, MAX_LINE = 240;

const obj = (v) => !!v && typeof v === 'object' && !Array.isArray(v);
const bad = (what) => new Error(`Dit exportbestand bevat ongeldige spelgegevens (${what}).`);

/** The file a player is exported to: { filename, text, bundle }. */
export function createExport({ name, ini, menu = {}, exportedAt = new Date() }) {
  if (typeof ini !== 'string' || !ini) throw new Error('Deze speler heeft geen spelersbestand om te exporteren.');
  const date = exportedAt instanceof Date ? exportedAt : new Date(exportedAt);
  if (!Number.isFinite(date.getTime())) throw new Error('De exportdatum is ongeldig.');
  const stamp = date.toISOString();
  const bundle = {
    format: EXPORT_FORMAT, formatVersion: EXPORT_VERSION, exportedAt: stamp,
    player: { name: String(name || '') },
    playerIni: ini,
    menu: { unlocked: Number.isInteger(menu.unlocked) ? menu.unlocked : 0, flight: menu.flight === true, quickWorld: Number.isInteger(menu.quickWorld) ? menu.quickWorld : 0, quickDifficulty: Number.isInteger(menu.quickDifficulty) ? menu.quickDifficulty : null },
  };
  const safe = bundle.player.name.normalize('NFKD').replace(/[̀-ͯ]/g, '').replace(/[^A-Za-z0-9_-]+/g, '_').replace(/^_+|_+$/g, '').slice(0, 40) || 'Speler';
  return { filename: `RedCat-Spookkasteel-${safe}-${stamp.replace(/:/g, '').replace(/\.\d{3}Z$/, 'Z')}.json`, text: JSON.stringify(bundle, null, 2) + '\n', bundle };
}

// --- what may come out of an imported player file ------------------------------------------
// [section pattern, { key (lower case): test of the value }]. Numbers are what the game writes:
// "3", "10.000000". The limits are the game's own where known (docs/research/cheats-and-player.md
// 1.3 and 2.2: health up to 20, 5 mirror parts, 100 potions, abilities a mask of five bits, lives
// never negative in a file: the game leaves the state at the door of the world there).
const NUMBER = /^-?\d{1,9}(\.\d{1,6})?$/;
const num = (lo, hi, whole = true) => (v) => NUMBER.test(v) && (!whole || /^-?\d+(\.0+)?$/.test(v)) && Number(v) >= lo && Number(v) <= hi;
const flag = num(0, 1);
const STATE = {
  health: num(0.000001, 20, false), maxhealth: num(1, 20, false), life: num(0, 999), skill: num(0, 31),
  maxmirrorpart: num(0, 5), mirrorpart: num(0, 5), maxmagicpotion: num(0, 100), magicpotion: num(0, 100), score: num(0, 9999999),
};
const WORLD_RULES = { ...STATE, completed: flag, timeplayedseconds: num(0, 1e8, false), grobberskilled: num(0, 1e6), secretsfound: num(0, 1e6), shotshit: num(0, 1e7), shotstotal: num(0, 1e7), enemieskilled: num(0, 1e6) };
const ADVENTURE_SECTIONS = ['Level1', 'SubLevel1_1', 'SubLevel1_2', 'SubLevel1_3', 'SubLevel1_4', 'SubLevel1_5', 'Player'];
const RULES = new Map([
  ['general', ['General', { difficultylevel: num(0, 2) }]],
  ['sound', ['Sound', { musicvolume: num(0, 100, false), soundvolume: num(0, 100, false) }]],
  ['keybinds', ['KeyBinds', null]],          // any key the template has, a value of printable characters (below)
  ['level1', ['Level1', { currentsublevel: (v) => v === '' || /^SubLevel1_[1-5]$/.test(v), completed: flag, lastplayeddatetime: (v) => v.length <= 80 && !/[^\x20-\x7e\xa0-\xff]/.test(v), haskeyitem1: flag, haskeyitem2: flag, haskeyitem3: flag, haskeyitem4: flag, haskeyitem5: flag }]],
  ...[1, 2, 3, 4, 5].map((w) => [`sublevel1_${w}`, [`SubLevel1_${w}`, WORLD_RULES]]),
  ['player', ['Player', { ...STATE, totalscore: num(0, 99999999) }]],
]);
const isAdventure = (name) => ADVENTURE_SECTIONS.some((s) => s.toLowerCase() === name.toLowerCase());

const sections = (text) => {
  const out = [];
  let cur = null;
  for (const line of text.split(/\r?\n/)) {
    const m = /^\s*\[(.*)\]\s*$/.exec(line);
    if (m) { cur = { name: m[1], keys: [] }; out.push(cur); continue; }
    const eq = line.indexOf('=');
    if (cur && eq > 0 && !/^\s*;/.test(line)) cur.keys.push([line.slice(0, eq).trim(), line.slice(eq + 1).trim()]);
  }
  return out;
};

/**
 * The entries [[section, key, value], ...] an imported player file may set, checked one by one.
 * Sections and keys that are not listed are left out; a listed key with a value the game would
 * not write refuses the whole file. template: the text of PlayerDef.ini.
 */
export function checkedEntries(ini, template) {
  if (typeof ini !== 'string' || !ini.length || ini.length > MAX_INI) throw bad('spelersbestand');
  if (/[^\t\n\r\x20-\x7e\xa0-\xff]/.test(ini)) throw bad('tekens in het spelersbestand');
  const lines = ini.split(/\r?\n/);
  if (lines.length > MAX_LINES || lines.some((l) => l.length > MAX_LINE)) throw bad('regels in het spelersbestand');
  return checkedList(sections(ini), template);
}
/** A [KeyBinds] value the game can read: combinations of its own key names, joined with + and separated by commas. */
const bindingOk = (value) => value.split(',').every((alt) => alt.length > 0 && alt.split('+').every((n) => keyName(n) !== ''));
/** The same tests for sections [{ name, keys: [[key, value], ...] }, ...] (the JavaScript port's converted file comes in this way). */
function checkedList(list, template) {
  const tpl = sections(template || '');
  const tplKeys = (name) => (tpl.find((s) => s.name.trim().toLowerCase() === name.toLowerCase()) || { keys: [] }).keys;
  const binds = new Map(tplKeys('KeyBinds').map(([k, v]) => [k.toLowerCase(), [k, v]]));
  const out = [], seen = new Set();
  for (const sec of list) {
    const rule = RULES.get(sec.name.trim().toLowerCase());
    if (!rule) continue;
    const name = rule[0];
    if (seen.has(name)) throw bad(`[${name}] staat er twee keer in`);
    seen.add(name);
    const keys = new Set();
    for (const [key, value] of sec.keys) {
      if (!/^[A-Za-z][A-Za-z0-9_]{0,39}$/.test(key)) continue;
      const lower = key.toLowerCase();
      if (rule[1] === null ? binds.has(lower) : !!rule[1][lower]) { if (keys.has(lower)) throw bad(`${name}.${key} staat er twee keer in`); keys.add(lower); }
      if (rule[1] === null) {
        if (!binds.has(lower)) continue;
        const [spelled, shipped] = binds.get(lower);
        // the game's own key names only; a line the new player has a key on is not emptied
        if (!/^[\x21-\x7e]{0,40}$/.test(value) || (value === '' ? shipped !== '' : !bindingOk(value))) throw bad(`${name}.${key}`);
        out.push([name, spelled, value]);
        continue;
      }
      const test = rule[1][lower];
      if (!test) continue;
      if (!test(value)) throw bad(`${name}.${key}`);
      out.push([name, key, value]);
    }
  }
  // what belongs together, on the file as applyImport leaves it: the new player's value where the file brings none
  const get = (s, k) => {
    const e = out.find((q) => q[0].toLowerCase() === s.toLowerCase() && q[1].toLowerCase() === k);
    if (e) return Number(e[2]);
    const t = tplKeys(s).find(([key]) => key.toLowerCase() === k);
    return t && NUMBER.test(t[1]) ? Number(t[1]) : null;
  };
  for (const s of ADVENTURE_SECTIONS.slice(1)) {
    const h = get(s, 'health'), mh = get(s, 'maxhealth'), m = get(s, 'mirrorpart'), mm = get(s, 'maxmirrorpart'), p = get(s, 'magicpotion'), mp = get(s, 'maxmagicpotion');
    if (s === 'Player' && h !== null && mh !== null && h > mh) throw bad(`${s}.Health`);
    if (m !== null && mm !== null && m > mm) throw bad(`${s}.MirrorPart`);
    if (p !== null && mp !== null && p > mp) throw bad(`${s}.MagicPotion`);
  }
  if (!out.some((e) => isAdventure(e[0]))) throw bad('geen voortgang');
  return out;
}

const worldOf = (entries) => { const e = entries.find((q) => /^Level1$/i.test(q[0]) && /^CurrentSubLevel$/i.test(q[1])); const m = e && /^SubLevel1_([1-5])$/.exec(e[2]); return m ? Number(m[1]) : 1; };
const doneIn = (entries) => entries.some((q) => /^SubLevel1_5$/i.test(q[0]) && /^Completed$/i.test(q[1]) && Number(q[2]) === 1);
const cleanName = (name) => [...String(typeof name === 'string' ? name : '').replace(/[^\x20-\x7e\xa0-\xff]/g, '').trim()].slice(0, 12).join('') || 'Speler';

/**
 * Reads an export file. Throws an Error with a Dutch message for anything that is not a usable
 * file. Returns
 *   { kind: 'recomp' | 'classic', name, exportedAt, entries, menu: { unlocked, flight, quickWorld, quickDifficulty, legacy },
 *     world, worldTitle, adventureDone, midWorld }
 * where entries are checked lines for the player file (see applyImport) and midWorld says that a
 * game of the JavaScript port was saved inside that world (it starts the world again here).
 */
export function parseImport(text, template) {
  if (typeof text !== 'string') throw new Error('Het exportbestand kan niet als tekst worden gelezen.');
  if (text.length > MAX_IMPORT_BYTES) throw new Error('Het exportbestand is te groot (maximaal 32 MiB).');
  let bundle;
  try { bundle = JSON.parse(text.replace(/^﻿/, '')); } catch (e) { throw new Error('Dit bestand is geen geldig JSON-exportbestand van RedCat Spookkasteel.'); }
  if (!obj(bundle) || (bundle.format !== EXPORT_FORMAT && bundle.format !== CLASSIC_FORMAT)) throw bad('bestandsformaat');
  if (bundle.formatVersion !== (bundle.format === EXPORT_FORMAT ? EXPORT_VERSION : CLASSIC_VERSION)) throw new Error('Deze versie van het exportbestand wordt niet ondersteund. Gebruik een passende versie van RedCat Spookkasteel.');
  if (typeof bundle.exportedAt !== 'string' || !Number.isFinite(Date.parse(bundle.exportedAt))) throw bad('exportdatum');
  if (!obj(bundle.player)) throw bad('speler');
  const name = cleanName(bundle.player.name);
  const int = (v, lo, hi, def) => (Number.isInteger(v) && v >= lo && v <= hi ? v : def);

  if (bundle.format === EXPORT_FORMAT) {
    const entries = checkedEntries(bundle.playerIni, template);
    const m = obj(bundle.menu) ? bundle.menu : {};
    const world = worldOf(entries), adventureDone = doneIn(entries);
    return {
      kind: 'recomp', name, exportedAt: bundle.exportedAt, entries,
      menu: { unlocked: Math.max(int(m.unlocked, 0, 5, 0), adventureDone ? 5 : world), flight: m.flight === true, quickWorld: int(m.quickWorld, 0, 5, 0), quickDifficulty: int(m.quickDifficulty, 0, 2, null), legacy: null },
      world, worldTitle: WORLD_TITLES[world - 1], adventureDone, midWorld: false,
    };
  }

  // the JavaScript port's file: its own test of a saved game, then the rules of the take-over
  if (!obj(bundle.save) || bundle.save.version !== 1 || !obj(bundle.save.game) || bundle.save.game.version !== 1) throw new Error('Deze versie van het opgeslagen avontuur wordt niet ondersteund.');
  if (!validSave(bundle.save)) throw bad('save');
  const progress = obj(bundle.progress) && bundle.progress.version === 1 ? bundle.progress : null;
  const options = obj(bundle.options) ? bundle.options : null;
  const c = convertPlayer({ id: 'import', name, options, progress, save: bundle.save, saveText: 'valid' }, null, { save: bundle.save });
  if (!c.state) throw bad('save');
  return {
    kind: 'classic', name, exportedAt: bundle.exportedAt, entries: classicEntries(c.entries, template),
    menu: { unlocked: c.unlocked, flight: !!c.flight, quickWorld: 0, quickDifficulty: null, legacy: { world: c.world, level: c.legacy.level, savedAt: c.legacy.savedAt, midWorld: c.legacy.midWorld, done: c.adventureDone, had: c.legacy.had, fromRecovery: false, imported: true } },
    world: c.world, worldTitle: WORLD_TITLES[c.world - 1], adventureDone: c.adventureDone, midWorld: c.legacy.midWorld,
  };
}

/**
 * The converted entries of a JavaScript port file, through the tests every imported line gets. An entry the
 * rules do not know is one of the converter's own (GameType) and stays as the converter made it.
 */
function classicEntries(entries, template) {
  const text = entries.map(([s, k, v]) => [s, k, String(v)]), by = new Map();
  for (const [s, k, v] of text) { if (!by.has(s)) by.set(s, { name: s, keys: [] }); by.get(s).keys.push([k, v]); }
  const checked = checkedList([...by.values()], template);
  const known = (s, k) => { const rule = RULES.get(s.toLowerCase()); return !!rule && (rule[1] === null || !!rule[1][k.toLowerCase()]); };
  return text.filter(([s, k]) => !known(s, k)).concat(checked);
}

/**
 * The destination player's file after an import: his own file (name, display, controls), with
 * the adventure's sections ([Level1], [SubLevel1_1..5], [Player]) as a new player has them and
 * the imported entries on top. current: his file's text now; template: PlayerDef.ini.
 */
export function applyImport(current, template, entries) {
  // a section: its heading line and what follows up to the next heading (a value may hold a bracket: WeaponPrev=[)
  const heading = (line) => /^\s*\[.*\]\s*$/.test(line);
  const cut = (text, name) => {
    const lines = text.split(/\r?\n/);
    const from = lines.findIndex((l) => heading(l) && l.trim().slice(1, -1).toLowerCase() === name.toLowerCase());
    if (from < 0) return null;
    let to = from + 1;
    while (to < lines.length && !heading(lines[to])) to++;
    return { lines, from, to };
  };
  let text = current;
  for (const s of ADVENTURE_SECTIONS) {
    const now = cut(text, s), fresh = cut(template, s);
    if (!now) continue;
    now.lines.splice(now.from, now.to - now.from, ...(fresh ? fresh.lines.slice(fresh.from, fresh.to) : []));
    text = now.lines.join('\r\n');
  }
  for (const [s, k, v] of entries) text = editIni(text, s, k, String(v));
  return text;
}
