// Takes over what the JavaScript port of this game left in the visitor's browser when this port
// is opened at the same address: its settings, its players with their progress, and the saved
// game of each player (legacy.js has the rules; docs/legacy-saves.md the reasons).
//
// Safety rules, all of them kept by this file:
//   - The old data is only read. No key that starts with "redcat." is written or removed and no
//     "redcat-recovery-saves" database is created, upgraded or changed. The old version, kept
//     at <this address>/classic/, goes on working with exactly what it had.
//   - Every player is taken over once. What happened is noted under MARK; a second visit, a
//     second tab or a later change in the old version does not import again or overwrite what
//     was played here since.
//   - A failure leaves this port as it would be without the old data, and is tried again at
//     the next visit.
import { store } from './persist.js';
import { readLegacy, convertPlayer, convertSettings, playerScores, newestCheckpoint, oldRecoveryDb, WORLD_TITLES, FIRST_PLAYER } from './legacy.js';

const MARK = 'rcspook-recomp.legacy.v1';
/** Where the old version lives when it is kept next to this one, relative to the page. */
export const CLASSIC_PATH = 'classic/';

const readMark = () => {
  try { const m = JSON.parse(store.get(MARK) || 'null'); if (m && typeof m === 'object') return { settings: m.settings || null, players: m.players && typeof m.players === 'object' ? m.players : {}, scores: !!m.scores, skippedSettings: m.skippedSettings || [] }; } catch (e) { /* start empty */ }
  return { settings: null, players: {}, scores: false, skippedSettings: [] };
};
const writeMark = (m) => store.set(MARK, JSON.stringify(m));
const oldGet = (key) => { try { return localStorage.getItem(key); } catch (e) { return null; } };

/**
 * The old settings as this port's, when this port has none of its own yet. Called by settings.js
 * before it reads its values, so that the very first page already has them. Returns true when
 * settings were taken over.
 */
export function importLegacySettings(KEY, DEFAULTS) {
  try {
    const mark = readMark();
    if (mark.settings || store.get(KEY) !== null) return false;
    const legacy = readLegacy(oldGet);
    if (!legacy || !legacy.settings) return false;
    const { values, skipped } = convertSettings(legacy.settings, DEFAULTS);
    store.set(KEY, JSON.stringify(values));
    mark.settings = new Date().toISOString(); mark.skippedSettings = skipped;
    writeMark(mark);
    return true;
  } catch (e) { console.warn('[overname] de instellingen van de vorige versie konden niet worden overgenomen', e); return false; }
}

/**
 * The recovery history of a player of the old port ({ clock, anchor, checkpoints }), or null.
 * Read only, and never created: a database that does not exist yet is not left behind (the old
 * code expects its own layout in it).
 */
function readRecovery(id) {
  return new Promise(async (resolve) => {
    const name = oldRecoveryDb(id);
    try {
      if (typeof indexedDB === 'undefined') { resolve(null); return; }
      if (indexedDB.databases) { const list = await indexedDB.databases(); if (!list.some((d) => d.name === name)) { resolve(null); return; } }
      const r = indexedDB.open(name);               // no version: opens what is there as it is
      r.onupgradeneeded = () => { try { r.transaction.abort(); } catch (e) { /* already ended */ } };     // it was not there: undo
      r.onerror = () => resolve(null);
      r.onblocked = () => resolve(null);
      r.onsuccess = () => {
        const db = r.result;
        try {
          if (!db.objectStoreNames.contains('history')) { db.close(); resolve(null); return; }
          const t = db.transaction('history', 'readonly'), g = t.objectStore('history').get('rolling');
          g.onsuccess = () => { db.close(); resolve(g.result || null); };
          g.onerror = () => { db.close(); resolve(null); };
        } catch (e) { try { db.close(); } catch (x) { /* closed */ } resolve(null); }
      };
    } catch (e) { resolve(null); }
  });
}

/** The address of the old version when it is kept next to this one and answers, else null. */
export async function classicAddress() {
  try {
    const url = new URL(CLASSIC_PATH, document.baseURI);
    const r = await fetch(new URL('index.html', url), { method: 'HEAD', cache: 'no-store' });
    return r.ok ? url.href : null;
  } catch (e) { return null; }
}

/** True when the old version left a saved game for at least one player (for the link in the settings). */
export function hasLegacyData() { try { return readLegacy(oldGet) !== null; } catch (e) { return false; } }

/**
 * Players, progress and scores. Call when the player template is loaded and store.ready has
 * resolved (game.ready), before the menu shows its player list.
 *   players      source/web/players.js
 *   note(n)      the menu's own record for player n (unlocked worlds, the note about the old save)
 *   addScore     ({ name, score }) into the menu's highscore table
 *   setHaunted   () when somebody had finished the adventure
 *   keep         () writes the menu's records
 * Returns { imported: [...], skipped: [...] } when something was taken over now, else null.
 */
export async function importLegacyPlayers({ players, note, addScore, setHaunted, keep }) {
  let legacy = null;
  try { legacy = readLegacy(oldGet); } catch (e) { legacy = null; }
  if (!legacy) return null;
  const mark = readMark();
  const report = { imported: [], skipped: [] };
  let changed = false;
  for (const p of legacy.players) {
    if (mark.players[p.id]) continue;
    try {
      let save = p.save, fromRecovery = false;
      if (!save) { const cp = newestCheckpoint(await readRecovery(p.id)); if (cp) { save = cp; fromRecovery = true; } }
      // The old version makes a first player "Speler 1" for every visitor. Somebody who never
      // played has nothing to take over: he gets this port's own first visit.
      const untouched = !save && p.id === FIRST_PLAYER && legacy.players.length === 1 && p.saveText === 'none' && !(p.progress && (p.progress.highestUnlocked > 0 || p.progress.earnedSkills > 0 || (p.progress.playedLevels || []).length));
      if (untouched) { mark.players[p.id] = { n: 0, at: new Date().toISOString(), nothing: true }; changed = true; continue; }
      const c = convertPlayer(p, legacy.settings, { save, fromRecovery });
      const n = players.create(c.name);
      if (!n) { report.skipped.push({ name: c.name, why: 'no-room' }); continue; }       // eight players here already: tried again next time
      players.set(n, c.entries);
      const rec = note(n);
      rec.unlocked = Math.max(rec.unlocked || 0, c.unlocked);
      if (c.flight) rec.flight = true;
      if (c.legacy) rec.legacy = { world: c.world, level: c.legacy.level, savedAt: c.legacy.savedAt, midWorld: c.legacy.midWorld, done: c.adventureDone, had: c.legacy.had, fromRecovery };
      if (c.adventureDone) setHaunted();
      if (p.active && !players.current) players.current = n;
      mark.players[p.id] = { n, at: new Date().toISOString(), level: c.legacy ? c.legacy.level : null, savedAt: c.legacy ? c.legacy.savedAt : null };
      report.imported.push({ n, name: c.name, world: c.world, worldTitle: WORLD_TITLES[c.world - 1], adventureDone: c.adventureDone, state: c.state, legacy: c.legacy, notes: c.notes, unlocked: c.unlocked });
      changed = true;
    } catch (e) {
      console.warn('[overname] een speler van de vorige versie kon niet worden overgenomen', e);
      report.skipped.push({ name: p.name, why: 'error' });
    }
  }
  if (!mark.scores) {
    try {
      // a player's best score of an earlier adventure, when it is higher than what he has now
      const now = new Map(report.imported.map((r) => [r.name, r.state ? r.state.score : 0]));
      for (const row of playerScores(legacy.highscores)) if (!(now.get(row.name) >= row.score)) addScore(row);
      mark.scores = true; changed = true;
    } catch (e) { console.warn('[overname] de highscores van de vorige versie konden niet worden overgenomen', e); }
  }
  if (changed) { keep(); writeMark(mark); }
  return report.imported.length || report.skipped.length ? report : null;
}

/** The text of the notice after an import, as lines. */
export function reportLines(report) {
  const lines = [];
  for (const r of report.imported) {
    if (r.adventureDone) lines.push(`${r.name}: avontuur uitgespeeld, ${r.state.score} punten. Alle griezelplekken zijn vrij in Snelspel.`);
    else if (r.state && r.legacy && r.legacy.midWorld) lines.push(`${r.name}: ${r.worldTitle}, ${r.state.lives} levens, ${r.state.score} punten. Je begint ${r.worldTitle} opnieuw.`);
    else if (r.state) lines.push(`${r.name}: verder bij ${r.worldTitle}, ${r.state.lives} levens, ${r.state.score} punten.`);
    else lines.push(`${r.name}: nog geen opgeslagen avontuur.`);
  }
  for (const s of report.skipped) lines.push(s.why === 'no-room' ? `${s.name}: de spelerlijst is vol; maak plaats en open de pagina opnieuw.` : `${s.name}: kon niet worden overgenomen.`);
  return lines;
}
