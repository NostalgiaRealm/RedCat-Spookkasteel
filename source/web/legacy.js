// What the JavaScript port of this game left in a visitor's browser, and what it becomes here.
// Pure functions: no browser, no storage of its own, so the same code runs in the checks under
// Node. The stored formats of every released version are described in
// docs/research/legacy-storage.md; the rules of the conversion in docs/legacy-saves.md.
//
// Nothing here writes to the old data. The old keys all start with "redcat." (localStorage) or
// "redcat-recovery-saves" (IndexedDB); this port's own keys start with "rcspook-recomp".
import { bindingsFromLegacy, cameraCodes } from './keybinds.js';
export const LEVEL_IDS = ['lvl00a', 'lvl01a', 'lvl02a', 'lvl03a', 'lvl04a'];
export const OLD = {
  players: 'redcat.players.v1', settings: 'redcat.settings.v1', highscores: 'redcat.highscores.v1',
  save: 'redcat.save.v1', progress: 'redcat.progress.v1', options: 'redcat.player-options.v1',
};
export const FIRST_PLAYER = 'legacy';         // the port's id of the player who existed before it had a player list
const DEFAULT_NAME = 'Speler 1';
const NAME_MAX = 12;

/** The key of a per-player value: bare for the first player, prefixed for the others (player-profiles.js key()). */
export const oldKey = (base, id) => (id === FIRST_PLAYER ? base : `redcat.player.${id}.${base}`);
/** The recovery database of a player (recovery-saves.js). */
export const oldRecoveryDb = (id) => (id === FIRST_PLAYER ? 'redcat-recovery-saves' : `redcat-recovery-saves-${id}`);

const parse = (text) => { if (typeof text !== 'string') return undefined; try { return JSON.parse(text); } catch (e) { return undefined; } };
const obj = (v) => !!v && typeof v === 'object' && !Array.isArray(v);
const num = (v, def) => (Number.isFinite(v) ? v : def);
const clamp = (v, lo, hi) => Math.min(hi, Math.max(lo, v));

/** The port's own test of a saved game (campaign-progress.js validAdventureSave). */
export function validSave(save) {
  return obj(save) && save.version === 1 && LEVEL_IDS.includes(save.level) && Array.isArray(save.position) && save.position.length === 3 &&
    save.position.every(Number.isFinite) && Number.isFinite(save.yaw) && Number.isFinite(save.pitch) &&
    obj(save.game) && save.game.version === 1 && save.game.level === save.level && obj(save.game.state) && Number.isFinite(save.game.state.health);
}

/**
 * Reads what the port left. get(key) returns the stored text or null. Never throws.
 * Returns null when there is nothing of the port, else
 *   { settings, players: [{ id, name, active, options, progress, save, saveText: 'none' | 'valid' | 'unreadable' }], highscores }
 */
export function readLegacy(get) {
  const read = (key) => { try { return get(key); } catch (e) { return null; } };
  const settings = parse(read(OLD.settings));
  const listText = read(OLD.players), list = parse(listText);
  let entries = null, activeId = FIRST_PLAYER;
  if (obj(list) && list.version === 1 && Array.isArray(list.players)) {
    entries = [];
    const seen = new Set();
    for (const p of list.players) {
      if (!obj(p) || typeof p.id !== 'string' || seen.has(p.id) || !(p.id === FIRST_PLAYER || /^p_[a-z0-9_-]{8,80}$/.test(p.id))) continue;
      seen.add(p.id);
      entries.push({ id: p.id, name: typeof p.name === 'string' && p.name.trim() ? p.name.trim() : DEFAULT_NAME });
    }
    if (typeof list.activeId === 'string' && seen.has(list.activeId)) activeId = list.activeId; else if (entries.length) activeId = entries[0].id;
  }
  // Before the port had a player list (up to 0.9.7) there was one unnamed player with the bare keys.
  // The same holds when the list is unreadable: the bare keys are still that player's.
  const bare = [OLD.save, OLD.progress, OLD.options].some((k) => read(k) !== null);
  if (!entries || !entries.length) entries = bare || obj(settings) ? [{ id: FIRST_PLAYER, name: DEFAULT_NAME }] : [];
  else if (bare && !entries.some((e) => e.id === FIRST_PLAYER) && read(OLD.save) !== null) entries.push({ id: FIRST_PLAYER, name: DEFAULT_NAME, orphan: true });
  if (!entries.length && listText === null && !obj(settings) && read(OLD.highscores) === null) return null;

  const players = entries.map((e) => {
    const saveRaw = read(oldKey(OLD.save, e.id)), save = parse(saveRaw);
    const progress = parse(read(oldKey(OLD.progress, e.id)));
    const options = parse(read(oldKey(OLD.options, e.id)));
    return {
      id: e.id, name: e.name, active: e.id === activeId, orphan: !!e.orphan,
      options: obj(options) ? options : null,
      progress: obj(progress) && progress.version === 1 ? progress : null,
      save: validSave(save) ? save : null,
      saveText: saveRaw === null ? 'none' : validSave(save) ? 'valid' : 'unreadable',
    };
  });
  const hs = parse(read(OLD.highscores));
  const highscores = obj(hs) && hs.version === 1 && Array.isArray(hs.entries) ? hs.entries.filter((r) => obj(r) && typeof r.name === 'string' && Number.isFinite(r.score)) : [];
  return { settings: obj(settings) ? settings : null, players, highscores };
}

const DIFFICULTY = { Easy: 0, Normal: 1, Hard: 2 };

/**
 * One player of the port as this port keeps a player. `save` may be the latest save or, when that
 * is missing or unreadable, the newest checkpoint of the recovery history (fromRecovery true).
 *
 * This port keeps a player the way the original game does: a file with the world the adventure
 * is at and what the player has at the start of that world. A game that was saved in the middle
 * of a world therefore continues at the start of that world, with what the player had when he
 * entered it. The rules, with the reasons, are in docs/legacy-saves.md.
 *
 * Returns { name, difficulty, world, adventureDone, state, unlocked, sound, sensitivity, legacy, entries }
 * where entries are the [section, key, value] lines for Settings\Player<N>.ini.
 */
export function convertPlayer(player, settings, { fromRecovery = false, save = player.save } = {}) {
  const notes = [];
  const progress = player.progress || {};
  const stored = obj(settings) ? settings : {};
  // difficulty: of the game in progress; else what the next new game would get; else (before 0.9.8,
  // first player only) the old shared setting
  const diffName = (save && save.game.difficulty) || (player.options && player.options.difficulty) || (player.id === FIRST_PLAYER ? stored.difficulty : null) || 'Normal';
  const difficulty = typeof diffName === 'string' && Object.prototype.hasOwnProperty.call(DIFFICULTY, diffName) ? DIFFICULTY[diffName] : 1;      // (own names only: 'constructor' is not a difficulty)
  let unlockedIndex = clamp(Math.floor(num(progress.highestUnlocked, 0)), 0, 4);
  let world = 1, adventureDone = false, state = null, legacy = null;

  if (save) {
    const L = LEVEL_IDS.indexOf(save.level), g = save.game;
    let cur = { ...g.state };
    // 0.9.1: a heart container was worth 1; from v0.9.3 it is worth 2 (gameplay.js restore)
    const fixHearts = (s) => {
      if (g.healthVersion === 2 || !(s.maxHealth > 10)) return s;
      const max = Math.min(20, 10 + 2 * (s.maxHealth - 10));
      return { ...s, health: num(s.health, 0) + (max - s.maxHealth), maxHealth: max };
    };
    cur = fixHearts(cur);
    const mid = !(g.completed === true);
    let start = cur, usedEntry = false;
    if (mid) {
      if (obj(g.entryState) && Number.isFinite(g.entryState.health)) { start = fixHearts({ ...g.entryState }); usedEntry = true; }
      else {
        // before v1.0.5 the state at the door of the world was not kept: take what the player has now,
        // without the mirror parts picked up in this world (they lie there again)
        const parts = Array.isArray(g.objects) ? g.objects.filter((o) => obj(o) && o.collected === true && typeof o.id === 'string' && /^ItemMirror/i.test(o.id)).length : 0;
        start = { ...cur, mirror: Math.max(0, num(cur.mirror, 0) - parts) };
        if (parts) notes.push('mirror-parts-of-this-world-removed');
      }
      world = L + 1;
    } else if (L >= 4) { world = 5; adventureDone = true; }
    else world = L + 2;
    // The world starts again, so what lies in it is there again: the mirror part and the heart
    // containers count as at the door of the world. What cannot be found twice in a way that
    // matters is kept at its best: the score and the lives of the moment of the save when they are
    // higher, and the health.
    const maxHealth = clamp(Math.round(num(start.maxHealth, 10)), 1, 20);
    let health = Math.ceil(Math.max(num(start.health, 0), num(cur.health, 0)));
    if (!(health > 0)) { health = maxHealth; notes.push('saved-without-health'); }
    state = {
      health: clamp(health, 1, maxHealth), maxHealth,
      lives: clamp(Math.round(Math.max(num(start.lives, 3), num(cur.lives, 0))), 0, 99),
      score: clamp(Math.round(Math.max(num(start.score, 0), num(cur.score, 0))), 0, 999999),
      mirror: clamp(Math.round(num(start.mirror, 0)), 0, 5),
      // abilities: what the game had, with what the adventure earned (the port adds that at every start of a world)
      skill: (Math.round(num(start.skill, 0)) | Math.round(num(cur.skill, 0)) | Math.round(num(progress.earnedSkills, 0))) & 31,
    };
    unlockedIndex = Math.max(unlockedIndex, adventureDone ? 4 : world - 1);
    legacy = {
      level: save.level, savedAt: typeof save.savedAt === 'string' ? save.savedAt : null,
      midWorld: mid, usedEntryState: usedEntry, fromRecovery,
      // what the player had at the moment of the save, for the note in the menu
      had: { lives: Math.round(num(cur.lives, 0)), score: Math.round(num(cur.score, 0)), potions: Math.round(num(cur.potions, 0)), mirror: Math.round(num(cur.mirror, 0)) },
    };
  } else if (player.saveText === 'unreadable') notes.push('save-unreadable');

  // The two volumes of the port were one for all players, 0..1 with 1 as the usual value; the
  // game's own are per player, 0..100 with 80 as the usual value, and its loudness goes with the
  // volume to the power 1.66 (docs/research/sound.md). A lowered volume keeps its loudness
  // relative to the usual one.
  const toSlider = (m) => clamp(Math.round(80 * Math.pow(clamp(m, 0, 1), 1 / 1.660964)), 0, 100);
  const sound = {
    music: Number.isFinite(stored.musicVolume) && stored.musicVolume < 1 ? toSlider(stored.musicVolume) : null,
    effects: Number.isFinite(stored.effectsVolume) && stored.effectsVolume < 1 ? toSlider(stored.effectsVolume) : null,
  };

  const entries = [['General', 'DifficultyLevel', difficulty], ['General', 'GameType', 0]];
  if (state) {
    entries.push(['Level1', 'CurrentSubLevel', `SubLevel1_${world}`], ['Level1', 'Completed', adventureDone ? 1 : 0]);
    for (let w = 1; w <= 5; w++) entries.push([`SubLevel1_${w}`, 'Completed', w < world || adventureDone ? 1 : 0]);
    entries.push(['Player', 'MaxHealth', state.maxHealth], ['Player', 'Health', state.health], ['Player', 'Life', state.lives],
      ['Player', 'Score', 0], ['Player', 'MagicPotion', 0], ['Player', 'MirrorPart', state.mirror], ['Player', 'Skill', state.skill], ['Player', 'TotalScore', state.score]);
  }
  if (sound.music !== null) entries.push(['Sound', 'MusicVolume', sound.music]);
  if (sound.effects !== null) entries.push(['Sound', 'SoundVolume', sound.effects]);

  // free flight: the saved game's own switch when there is one (the port lets it overrule the
  // player's option when a game is loaded), else the player's option, else (before v0.9.8, first
  // player) the old shared setting
  const flight = save ? save.noClip === true : player.options ? player.options.noClip === true : player.id === FIRST_PLAYER && stored.noClip === true;
  return {
    name: [...String(player.name || DEFAULT_NAME)].slice(0, NAME_MAX).join(''),
    difficulty, world, adventureDone, state, unlocked: unlockedIndex + 1, sound, flight, legacy, notes, entries,
  };
}

/**
 * The port's settings as this port's. Only what the visitor's stored settings contain is taken;
 * anything absent keeps this port's default. Returns { values, skipped: [names] }.
 */
export function convertSettings(stored, defaults) {
  const out = {}, skipped = [];
  if (!obj(stored)) return { values: out, skipped };
  // 'native' -> the window; 'full' (phones only there, as here) stays: somebody who chose every pixel of his screen keeps that
  if (typeof stored.resolution === 'string') out.resolution = /^\d{3,5}x\d{3,5}$/.test(stored.resolution) ? stored.resolution : stored.resolution === 'full' ? 'full' : 'auto';
  if (Number.isFinite(stored.renderScale)) out.renderScale = clamp(Math.round(stored.renderScale), 25, 200);
  if ([0, 2, 4, 8].includes(stored.msaa)) out.msaa = stored.msaa;
  // the port's own mark that a phone's 4 samples were switched off once: with it, the samples above are a choice (settings.js)
  if (stored.phoneMsaaChecked === true) out.phoneMsaaChecked = true;
  if (typeof stored.showFps === 'boolean') out.showFps = stored.showFps;
  if (typeof stored.fullscreen === 'boolean') out.fullscreen = stored.fullscreen;
  // master volume: the port's usual 0.6 is as loud as this port at 100 (docs/research/sound.md)
  if (Number.isFinite(stored.volume)) out.volume = clamp(Math.round(stored.volume / 0.6 * 100), 0, 100);
  if (typeof stored.autoIntro === 'boolean') out.intro = stored.autoIntro;
  const touch = stored.touchControls;
  if (touch === 'auto' || touch === 'on' || touch === 'off') out.touch = touch; else if (typeof touch === 'boolean') out.touch = touch ? 'on' : 'off';
  if (obj(stored.controlBindings)) { const keys = convertBindings(stored.controlBindings); if (keys) out.keys = keys; }
  // field of view: the port's 54 degrees is the original's, which is 0 here; anything else is the visitor's choice
  if (Number.isFinite(stored.fov) && stored.fov >= 45 && stored.fov <= 90) out.fov = Math.round(stored.fov) === 54 ? 0 : Math.round(stored.fov);
  if (Number.isFinite(stored.sensitivity) && stored.sensitivity >= 0.2 && stored.sensitivity <= 2) out.sensitivity = Math.round(stored.sensitivity * 100) / 100;
  if (stored.camera === 'first' || stored.camera === 'third') out.camera = stored.camera;
  for (const k of ['controlDevice']) if (stored[k] !== undefined) skipped.push(k);
  for (const k of Object.keys(out)) if (!(k in defaults)) delete out[k];
  return { values: out, skipped };
}

/**
 * The port's key bindings (settings key controlBindings) for this port's setting `keys`: the camera key, and the
 * stored bindings as they were (`legacy`), from which every player gets his keys (keybinds.js bindingsFromLegacy,
 * startBindings; menu.js adoptKeys). null when the stored value is not a set of bindings.
 */
export function convertBindings(bindings) {
  const taken = bindingsFromLegacy(bindings);
  if (!taken) return null;
  const legacy = {};
  for (const [action, list] of Object.entries(bindings)) if (Array.isArray(list) && list.length <= 8 && /^[A-Za-z0-9]{1,20}$/.test(action)) legacy[action] = list.filter((c) => typeof c === 'string').slice(0, 8);
  return { camera: cameraCodes(taken.binds), legacy };
}

/** The newest usable saved game in a recovery record ({ clock, anchor, checkpoints: [{ at, save }] }), or null. */
export function newestCheckpoint(record) {
  if (!obj(record) || !Array.isArray(record.checkpoints)) return null;
  const list = record.checkpoints.filter((c) => obj(c) && validSave(c.save) && c.save.game.state.health > 0);
  list.sort((a, b) => num(a.at, 0) - num(b.at, 0));
  return list.length ? list[list.length - 1].save : null;
}

/** Rows of the port's highscore table that belong to players (not its ten seeded names): [{ name, score }]. */
export const playerScores = (highscores) => highscores.filter((r) => typeof r.id === 'string' && r.id.startsWith('player:') && r.score > 0).map((r) => ({ name: [...r.name].slice(0, NAME_MAX).join(''), score: Math.round(r.score) }));

export const WORLD_TITLES = ['Het Bos', 'Het Kasteel', 'Het Kerkhof', 'De Grotten', 'De Toren'];
