#!/usr/bin/env node
// Rebuilds the legacy browser-storage fixtures in this folder.
//
// The fixtures are CONSTRUCTED, not captured from a browser. For every schema generation this script
// exports that revision of the JavaScript port with `git archive` (read-only on the port's repository),
// imports the port's own modules in Node and drives them the way source/main.js does. Everything that
// needs the WebGL world, the audio mixer or the DOM is written by hand from the code and marked below
// with HAND-BUILT. See README.md in this folder and docs/research/legacy-storage.md.
//
//   node tests/fixtures/legacy/build-fixtures.mjs [--repo <RCSPOOK_NEW checkout>] [--work <scratch dir>]
//
// Defaults: --repo ../RCSPOOK_NEW (next to this project), --work tools/out/legacy-research/export.
// The port's node_modules (three.js) must be installed in the --repo checkout.
import {execFileSync} from 'node:child_process';
import {existsSync, mkdirSync, readFileSync, writeFileSync, symlinkSync, lstatSync} from 'node:fs';
import path from 'node:path';
import {fileURLToPath, pathToFileURL} from 'node:url';

const here = path.dirname(fileURLToPath(import.meta.url));
const project = path.resolve(here, '../../..');
const option = name => { const i = process.argv.indexOf(name); return i > 0 ? process.argv[i + 1] : null; };
const repo = path.resolve(option('--repo') || path.join(project, '../RCSPOOK_NEW'));
const work = path.resolve(option('--work') || path.join(project, 'tools/out/legacy-research/export'));

const LEVELS = ['lvl00a', 'lvl01a', 'lvl02a', 'lvl03a', 'lvl04a'];
const GENERATIONS = [
  {file: 'gen0-0.9.1-untagged.json', rev: 'cc9e61106', dir: 'src', span: 'untagged import of 0.9.1 (commit cc9e61106)'},
  {file: 'gen1-v0.9.3.json', rev: 'v0.9.3', dir: 'src', span: 'v0.9.3 – v0.9.5'},
  {file: 'gen2-v0.9.7.json', rev: 'v0.9.7', dir: 'src', span: 'v0.9.7'},
  {file: 'gen3-v0.9.8.json', rev: 'v0.9.8', dir: 'src', span: 'v0.9.8 – v1.0.0'},
  {file: 'gen4-v1.0.1.json', rev: 'v1.0.1', dir: 'src', span: 'v1.0.1'},
  {file: 'gen5-v1.0.8-two-players.json', rev: 'v1.0.8', dir: 'source', span: 'v1.0.2 – v1.0.8'},
];
// Fixed identifiers and times, so a rebuild gives the same files.
const SECOND_PLAYER_ID = 'p_6f1d2c3a-9b4e-4c7d-8a21-0e5f3b7c9d10';      // shape of generateId(): 'p_' + crypto.randomUUID()
const IMPORT_REVISION = 'p_0b7e4a92-3c1d-4f6a-9e58-2d4c6b8a0f13';       // importAdventure() stores another generateId()
const SESSION_START = Date.parse('2026-10-30T18:00:00.000Z');

// ---------------------------------------------------------------------------------------------------
// Exporting a revision of the port
function exportRevision(gen) {
  const out = path.join(work, gen.rev);
  if (!existsSync(path.join(out, gen.dir, 'main.js'))) {
    mkdirSync(out, {recursive: true});
    const paths = [gen.dir, 'data/dialogue/nl.json', ...LEVELS.flatMap(id => [`data/levels/${id}/level.json`, `data/davi/${id}.json`, `data/motions/${id}.json`])];
    const tar = execFileSync('git', ['-C', repo, 'archive', gen.rev, ...paths], {maxBuffer: 1 << 30});
    execFileSync('tar', ['-x', '-C', out], {input: tar});
  }
  // gameplay.js reaches three.js through actor-placement.js; resolve it from the port's own install.
  const modules = path.join(work, 'node_modules');
  let linked = true; try { lstatSync(modules); } catch { linked = false; }
  if (!linked) symlinkSync(path.join(repo, 'node_modules'), modules, 'dir');
  return out;
}

// Property names of the first object literal after `start`, in source order (depth 1 only).
function literalKeys(source, start) {
  const from = source.indexOf('{', source.indexOf(start) + start.length - 1);
  const keys = []; let depth = 0, segment = from + 1, quote = null;
  for (let i = from; i < source.length; i++) {
    const c = source[i];
    if (quote) { if (c === '\\') i++; else if (c === quote) quote = null; continue; }
    if (c === '\'' || c === '"' || c === '`') { quote = c; continue; }
    if ('{[('.includes(c)) depth++;
    else if ('}])'.includes(c)) depth--;
    if ((c === ',' && depth === 1) || depth === 0) {
      const name = source.slice(segment, i).match(/^\s*([A-Za-z_$][\w$]*)/);
      if (name) keys.push(name[1]);
      segment = i + 1;
      if (depth === 0) break;
    }
  }
  return keys;
}

async function loadRevision(gen) {
  const out = exportRevision(gen), dir = path.join(out, gen.dir);
  const module = name => import(pathToFileURL(path.join(dir, name)).href);
  const optional = name => existsSync(path.join(dir, name)) ? module(name) : Promise.resolve(null);
  const main = readFileSync(path.join(dir, 'main.js'), 'utf8');
  const env = {
    gen, main,
    json: relative => JSON.parse(readFileSync(path.join(out, relative), 'utf8')),
    ...(await module('gameplay.js')), ...(await module('script-host.js')),
    campaign: await module('campaign-progress.js'),
    autosave: await module('autosave.js'),
    collision: await module('collision.js'),
    animation: await optional('player-animation.js'),
    debriefing: await optional('debriefing.js'),
    recovery: await optional('recovery-saves.js'),
    profiles: await optional('player-profiles.js'),
    highscores: await optional('menu-highscores.js'),
    bindings: await optional('control-bindings.js'),
    hints: await optional('touch-intro-hint.js'),
    fairy: await optional('fairy-effects.js'),
    // What this revision's main.js does, read from its own text.
    has: {
      campaignSkills: /gameplay\.state\.skill\|=campaignSkills\(campaign\)/.test(main),
      replay: /isCampaignLevelReplay\(campaign,index/.test(main),
      adventureSkillReset: /if\(!save&&!quickplay\)gameplay\.state\.skill=0/.test(main),
      entryState: /gameplay\.entryState=\{\.\.\.gameplay\.state\}/.test(main),
      skillEvent: /event\.type==='skill'/.test(main),
      noDeadSaves: /if\(gameplay\.state\.health<=0\)\{if\(!silent\)toast/.test(main),
      startupOptions: /store\(PROGRESS_KEY,campaign\);store\(PLAYER_OPTIONS_KEY/.test(main),
    },
    defaults: Function(`return (${main.match(/const DEFAULTS=(\{[^;]*\});/)[1]})`)(),
    saveKeys: literalKeys(main, main.includes('function adventureSnapshot(){return {') ? 'function adventureSnapshot(){return {' : 'store(SAVE_KEY,{'),
  };
  return env;
}

// ---------------------------------------------------------------------------------------------------
// A browser profile: localStorage plus the IndexedDB databases the port opened
class Browser {
  constructor() { this.items = new Map(); this.databases = new Map(); }
  // Web Storage, as much as player-profiles.js uses.
  get length() { return this.items.size; }
  key(index) { return [...this.items.keys()][index] ?? null; }
  getItem(key) { return this.items.get(key) ?? null; }
  setItem(key, value) { this.items.set(key, String(value)); }
  removeItem(key) { this.items.delete(key); }
  // IndexedDBRecoveryStorage (recovery-saves.js) replaced by its two calls: get('rolling') / put(state,'rolling').
  recoveryStorage(name) {
    if (!this.databases.has(name)) this.databases.set(name, null);        // open() creates the database and its store
    return {read: async () => structuredClone(this.databases.get(name)), write: async state => { this.databases.set(name, structuredClone(state)); }};
  }
  dump(meta) {
    return {_meta: meta, localStorage: Object.fromEntries(this.items),
      indexedDB: Object.fromEntries([...this.databases].map(([name, state]) => [name, {history: state === null ? [] : [{key: 'rolling', value: state}]}]))};
  }
}

// ---------------------------------------------------------------------------------------------------
// One browser tab of one revision of the port: what source/main.js keeps in memory and writes
class Tab {
  constructor(env, browser) {
    this.env = env; this.browser = browser; this.clock = SESSION_START;
    this.profiles = env.profiles ? new env.profiles.PlayerProfiles({storage: browser, idFactory: () => SECOND_PLAYER_ID}) : null;
    this.playerKeys = new Set(['redcat.save.v1', 'redcat.progress.v1', 'redcat.player-options.v1', 'redcat.adventure-revision.v1',
      ...(env.hints ? [env.hints.TOUCH_INTRO_HINT_KEY, env.hints.DESKTOP_INTRO_HINT_KEY] : [])]);
    // main.js start-up: settings = {...DEFAULTS, ...stored}, then the normalised additions of this revision.
    this.settings = {...env.defaults, ...(this.read('redcat.settings.v1') || {})};
    if (env.bindings) { this.settings.controlBindings = env.bindings.normalizeControlBindings(this.settings.controlBindings); this.settings.controlDevice ||= 'keyboard'; }
    this.autosave = new env.autosave.AutosaveClock();
    this.activate();
    // Last line of main.js: the progress (and from v0.9.8 the player options) are written on every page load.
    this.store('redcat.progress.v1', this.campaign);
    if (env.has.startupOptions) this.store('redcat.player-options.v1', {difficulty: this.settings.difficulty, noClip: this.settings.noClip});
  }
  key(base) { return this.playerKeys.has(base) && this.profiles ? this.profiles.key(base) : base; }
  read(base) { try { return JSON.parse(this.browser.getItem(this.key(base)) || 'null'); } catch { return null; } }
  store(base, value) {
    if (base === 'redcat.settings.v1' && this.profiles) this.browser.setItem(this.profiles.key('redcat.player-options.v1'), JSON.stringify({difficulty: value.difficulty, noClip: value.noClip}));
    this.browser.setItem(this.key(base), JSON.stringify(value)); return true;
  }
  // Start-up and selectPlayer(): read the active player's progress, options and recovery history.
  activate() {
    const {env} = this;
    this.campaign = env.campaign.readCampaignProgress(this.read('redcat.progress.v1'), this.read('redcat.save.v1'));
    if (this.profiles) { const options = this.read('redcat.player-options.v1') || {}; this.settings.difficulty = options.difficulty ?? 'Normal'; this.settings.noClip = options.noClip === true; }
    this.recovery = env.recovery ? new env.recovery.RecoverySaves({storage: this.browser.recoveryStorage(this.profiles ? this.profiles.recoveryDatabase() : 'redcat-recovery-saves')}) : null;
    this.pending = Promise.resolve();
  }
  async selectPlayer(id) {
    if (this.scene?.game.state.health > 0) this.saveGame();
    this.store('redcat.player-options.v1', {difficulty: this.settings.difficulty, noClip: this.settings.noClip});
    await this.pending; await this.recovery?.flush();
    this.profiles.select(id); this.scene = null; this.activate(); await this.recovery?.ready;
  }

  // startLevel() of main.js, without the renderer.
  async startLevel(levelId, {progress = null, newAdventure = false, quickplay = false, resetRecovery = false} = {}) {
    const {env} = this, index = LEVELS.indexOf(levelId);
    const level = env.json(`data/levels/${levelId}/level.json`), program = env.json(`data/davi/${levelId}.json`), motions = env.json(`data/motions/${levelId}.json`);
    const resetSkills = env.has.replay && newAdventure && index === 0 && !progress;
    const replayLevel = env.has.replay && !resetSkills && env.campaign.isCampaignLevelReplay(this.campaign, index, {save: null});
    await this.recovery?.ready;
    const game = new env.Gameplay(level, {onEvent: event => this.event(event), deferInit: true, difficulty: this.settings.difficulty});
    if (env.has.adventureSkillReset && !quickplay) game.state.skill = 0;
    if (progress) { const skill = game.state.skill; Object.assign(game.state, progress, {potions: 0, skill: skill | (Number(progress.skill) | 0)}); }
    if (env.has.campaignSkills && !resetSkills) game.state.skill |= env.campaign.campaignSkills(this.campaign);
    if (env.has.entryState) game.entryState = {...game.state};
    this.store('redcat.settings.v1', this.settings);
    const host = new env.ScriptHost(game, program, {motions, dialogue: env.json('data/dialogue/nl.json'), isDialoguePlaying: () => false, ...(env.has.replay ? {replayLevel} : {})});
    const spawn = [...level.spawn.position];
    this.scene = {game, host, level, levelId, position: spawn, yaw: -Number(level.spawn.orientation || 0) * Math.PI / 6, time: 0, idle: 0, loops: new Map()};
    host.initialize();
    const initial = this.snapshot();
    if (this.recovery) await this.recovery.capture(initial, {reset: resetRecovery});
    if (resetSkills) this.campaign = env.campaign.readCampaignProgress({...this.campaign, earnedSkills: game.state.skill});
    if (env.has.replay) this.campaign = env.campaign.recordPlayedCampaignLevel(this.campaign, levelId, {newAdventure: resetSkills});
    if (env.has.replay) this.store('redcat.progress.v1', this.campaign);
    // v0.9.3+: an adventure started from the menu stores its first save here. 0.9.1 stores nothing until the first save.
    if (resetRecovery && env.recovery) this.store('redcat.save.v1', initial);
    this.autosave.reset();
    return this.scene;
  }

  // handleGameEvent() of main.js, storage-related branches only.
  event(event) {
    const {env} = this;
    if (event.type === 'skill' && env.has.skillEvent) { this.campaign = env.campaign.earnCampaignSkill(this.campaign, event.skill); this.store('redcat.progress.v1', this.campaign); }
    if (event.type === 'savepoint') this.savepoint = true;                 // queueMicrotask(()=>saveGame(true))
    // scriptedSound(): a looping EffectSound keeps a voice until the script stops it (used by handBuiltAudio()).
    if (event.type === 'scriptSound' && event.id && this.scene) {
      if (event.stop || !event.loop) this.scene.loops.delete(event.id);
      else this.scene.loops.set(event.id, {...event, startedAt: this.scene.time});
    }
    if (event.type === 'levelComplete') {
      env.debriefing?.awardLevelSummary?.(this.scene.game);
      this.campaign = env.campaign.completeCampaignLevel(this.campaign, this.scene.levelId); this.store('redcat.progress.v1', this.campaign); this.saveGame();
    }
  }

  // adventureSnapshot() of main.js. `game` is the port's own Gameplay.snapshot().
  snapshot() {
    const {env, scene} = this, {game} = scene;
    const player = new env.collision.PlayerController({}, scene.position, [0]); player.grounded = true;
    // HAND-BUILT stand-ins for what the renderer and the sound code leave on the game before a snapshot:
    // the rendered actors' age (world.js) and the footstep phase (gameplay-audio.js). Values as in the port's
    // own browser-test reports, see README.md.
    for (const object of game.objects) if (object.kind === 'actor' || object.kind === 'pickup') object.actorAge = game.time;
    if (env.saveKeys.includes('playerMotion')) game.footstepState = {phase: 0, side: 0};
    const values = {
      version: 1, level: scene.levelId, position: [...scene.position], lastSafe: [...scene.position],
      playerMotion: player.snapshotMotion?.(),
      // HAND-BUILT (needs the rendered actor): snapshotPlayerAnimation() = {motion, reactionPhase, attackSerial, pose: animator.snapshot()}.
      playerAnimation: {motion: motionState(env, player), reactionPhase: null, attackSerial: null,
        pose: {name: 'idle', time: Number((scene.idle % 4).toFixed(3)), rate: 1, loop: true, transition: null}},
      noClip: false, yaw: scene.yaw, pitch: 0.16,
      game: game.snapshot(),
      audio: handBuiltAudio(scene),
      savedAt: new Date(this.clock + Math.round(scene.time * 1000)).toISOString(),
    };
    return Object.fromEntries(env.saveKeys.map(name => [name, values[name]]));
  }
  saveGame() {
    const {env, scene} = this;
    if (!scene) return false;
    if (env.has.noDeadSaves && scene.game.state.health <= 0) return false;
    const save = this.snapshot();
    this.store('redcat.save.v1', save);
    if (this.recovery) this.pending = this.recovery.capture(save);
    this.autosave.reset(); return true;
  }

  // The frame loop while playing: scripts, gameplay, autosave and recovery clocks (main.js frame()).
  async play(seconds, target = null, speed = 150) {
    const {scene} = this, dt = 0.05;
    const near = (a, b) => Math.hypot(a[0] - b[0], a[1] - b[1], a[2] - b[2]) < 90;       // no renderer: nothing far away is seen
    for (let elapsed = 0; elapsed < seconds - 1e-9; elapsed += dt) {
      if (target) {
        const delta = target.map((value, i) => value - scene.position[i]), length = Math.hypot(...delta);
        if (length > 1) { const step = Math.min(length, speed * dt); scene.position = scene.position.map((value, i) => value + delta[i] / length * step); scene.yaw = Math.atan2(-delta[0], -delta[2]); }
        else scene.idle += dt;
      } else scene.idle += dt;
      this.recovery?.advance(dt);
      scene.host.update(dt);
      scene.game.update(dt, [...scene.position], {lineOfSight: near, forward: [-Math.sin(scene.yaw), 0, -Math.cos(scene.yaw)]});
      scene.time += dt;
      if (this.savepoint) { this.savepoint = false; this.saveGame(); }
      this.autosave.update(dt, () => this.saveGame());
      if (this.recovery?.needsCapture) this.saveGame();
      await this.pending;
      if (scene.game.completed) break;
    }
  }
}

function motionState(env, player) {
  const state = {};
  env.animation?.playerMotion?.(state, player, {forward: 0, right: 0}, 0.05, 0);
  return state;
}
// HAND-BUILT from GameAudio.saveState() (audio.js): the chapter music and the looping EffectSound voices the
// scripts have started. Field set and order as serialize() writes them; currentTime is an approximation
// (the builder does not know the length of the WAV files).
function handBuiltAudio(scene) {
  const soundName = value => String(value || '').replace(/^.*[\\/]/, '').toLowerCase();          // audio.js soundName()
  const voice = (key, sourceId, channel, sound, volume, position, spatial, started, minReplayDelay = 0, maxReplayDelay = 0) => ({
    key, sourceId, group: null, channel, sound: soundName(sound), volume, position, followSource: false, spatial, loop: true,
    playbackRate: 1, nativeFrequency: false, minReplayDelay, maxReplayDelay, wait: null,
    currentTime: Number(((scene.time - started) % 6).toFixed(3)), fadeGain: 1, fade: null});
  const sounds = [], music = scene.host.musicState;
  if (music?.sound && !music.stop) sounds.push(voice('music', music.id, 'music', music.sound, 1, null, false, 0));
  for (const [id, event] of scene.loops) sounds.push(voice(`effect:${id}`, id, 'effects', event.sound, event.volume ?? 1,
    event.spatial ? [...event.position] : null, !!event.spatial, event.startedAt, event.minReplayDelay || 0, event.maxReplayDelay || 0));
  return {version: 1, level: scene.levelId, sounds, musicPositions: [], dialogue: []};
}

// ---------------------------------------------------------------------------------------------------
// What the "player" does. Only entry points the game itself uses are called.
const distance = (a, b) => Math.hypot(a[0] - b[0], a[1] - b[1], a[2] - b[2]);
async function explore(tab, {pickups = 8, seconds = 45} = {}) {
  const {scene} = tab, {game, host} = scene;
  await tab.play(2);
  if (host.cutscene) host.skipCutscene({onStep() {}});                     // the hold-to-skip input
  // Walk to the nearest pickups one after another (straight lines: there is no collision world here).
  // Gameplay.update() collects what the player touches; an item it leaves (0.9.1-0.9.5: health at full health) stays.
  const visited = new Set();
  for (let n = 0; n < pickups; n++) {
    const next = game.objects.filter(object => object.kind === 'pickup' && object.enabled && !object.collected && object.subtype !== 'mirror' && !visited.has(object))
      .sort((a, b) => distance(a.position, scene.position) - distance(b.position, scene.position))[0];
    if (!next) break;
    visited.add(next);
    await tab.play(Math.min(12, distance(next.position, scene.position) / 150 + .3), next.position);
  }
  // Open the nearest closed door and shoot the nearest ordinary enemy (Gameplay.hurtEnemy is the projectile-hit path).
  const door = game.objects.filter(object => object.kind === 'door' && object.enabled && !object.open && !object.locked)
    .sort((a, b) => distance(a.position, scene.position) - distance(b.position, scene.position))[0];
  if (door) game.setDoor(door, true);
  const enemy = game.objects.filter(object => object.kind === 'enemy' && object.enabled && object.health > 0 && !['maxj', 'maxd', 'witch', 'brutusm', 'brutusb'].includes(object.enemyType))
    .sort((a, b) => distance(a.position, scene.position) - distance(b.position, scene.position))[0];
  if (enemy) game.hurtEnemy(enemy, enemy.health);
  // Reach the first save point: the script native RcSetSavePoint(name, orientation).
  const savePoint = game.objects.find(object => object.kind === 'savepoint');
  if (savePoint) {
    await tab.play(Math.min(20, distance(savePoint.position, scene.position) / 150 + .3), savePoint.position);
    host.callNative('rcsetsavepoint', [savePoint.entity.DaviName || savePoint.id, 3]);
    await tab.play(.1);
  }
  await tab.play(seconds, null);
  tab.saveGame();                                                          // pause() saves
  await tab.pending; await tab.recovery?.flush();
}

// ---------------------------------------------------------------------------------------------------
async function build(gen) {
  const env = await loadRevision(gen), browser = new Browser();
  const tab = new Tab(env, browser), settings = tab.settings, notes = [];
  // A visitor who changed a few settings (Instellingen > OK stores the whole object).
  Object.assign(settings, {volume: 0.45, sensitivity: 1.2, autoIntro: false, fullscreen: false});
  if ('renderScale' in settings) settings.renderScale = 75;
  if ('showFps' in settings) settings.showFps = true;
  if ('msaa' in settings) settings.msaa = 0;
  if ('musicVolume' in settings) settings.musicVolume = 0.7;
  tab.store('redcat.settings.v1', settings);

  if (gen.rev !== 'v1.0.8') {
    // Speler 1 / the single pre-profile player: a new adventure, somewhere in Het Bos.
    await tab.startLevel('lvl00a', {newAdventure: true, resetRecovery: true});
    if (env.hints) tab.store(env.hints.DESKTOP_INTRO_HINT_KEY, true);     // OpeningHint.remember() after the forest opening
    tab.scene.host.callNative('rcenableskill', [0]);                      // the first fairy's reward (script native RcEnableSkill)
    await explore(tab);
    notes.push('one player, new adventure, saved in lvl00a after about a minute of play');
    if (tab.profiles) {
      // A second player who was selected once and never played: options key and an empty recovery database only.
      const second = tab.profiles.create('Mila'), first = tab.profiles.activeId;
      await tab.selectPlayer(second.id); await tab.selectPlayer(first);
      notes.push('second player "Mila" selected once, never played');
    }
    if (env.highscores) {
      // Opening Highscores stores the table with the active player's best score.
      tab.store(env.highscores.HIGHSCORES_KEY, env.highscores.recordHighscore(tab.read(env.highscores.HIGHSCORES_KEY), tab.profiles.active, tab.read('redcat.save.v1')));
      notes.push('Highscores page opened once');
    }
  } else {
    // Player 1 ("Speler 1", id legacy): adventure. Het Bos is finished through the mirror pickup, then Het Kasteel is entered and played.
    await tab.startLevel('lvl00a', {newAdventure: true, resetRecovery: true});
    tab.store(env.hints.DESKTOP_INTRO_HINT_KEY, true);
    tab.scene.host.callNative('rcenableskill', [0]);
    await explore(tab, {pickups: 10, seconds: 20});
    const forest = tab.scene, mirror = forest.game.objects.find(object => object.subtype === 'mirror');
    await tab.play(.2, mirror.position, 1e6); forest.game.pickup(mirror);
    for (let n = 0; n < 400 && !forest.game.completed; n++) { await tab.play(.25); if (forest.host.cutscene) forest.host.skipCutscene({onStep() {}}); }
    const byScript = forest.game.completed;
    if (!byScript) forest.host.callNative('rcnextlevel', ['lvl01a']);       // the script native that ends a chapter
    if (!forest.game.completed) throw new Error('The forest did not complete.');
    notes.push(byScript ? 'lvl00a ended through the mirror pickup and its own script' : 'lvl00a ended through the script native RcNextLevel');
    tab.clock += Math.round(forest.time * 1000) + 12000;                    // debriefing
    await tab.startLevel('lvl01a', {progress: {...forest.game.state}});
    await explore(tab, {pickups: 12, seconds: 50});
    const fairy = tab.scene.game.objects.find(object => object.entity.classname === 'Fairy');
    // HAND-BUILT like tests/save-import.test.mjs: a fairy effect's saved state comes from the renderer's NativeFairyEffect.
    if (fairy && env.fairy) { const effect = new env.fairy.NativeFairyEffect({origin: [...fairy.position], waypoints: [[...fairy.position]], seed: 42}); effect.advance(.5); fairy.fairyState = effect.snapshot(); tab.saveGame(); await tab.pending; }
    // An imported backup at some earlier time left this player's adventure revision (PlayerProfiles.importAdventure()).
    browser.setItem(tab.profiles.key('redcat.adventure-revision.v1'), JSON.stringify(IMPORT_REVISION));
    notes.push('player 1 "Speler 1" (legacy): adventure, lvl00a completed, saved mid lvl01a; adventure revision present');

    // Player 2: started an adventure in Het Bos, went back to the menu, then chose Snelspel > Het Bos on Makkelijk.
    // The Snelspel replaced her adventure save and recovery history (the confirmation dialog, resetRecovery).
    const second = tab.profiles.create('Mila');
    await tab.selectPlayer(second.id);
    tab.clock += 3600000;
    await tab.startLevel('lvl00a', {newAdventure: true, resetRecovery: true});
    tab.store(env.hints.DESKTOP_INTRO_HINT_KEY, true);
    tab.scene.host.callNative('rcenableskill', [0]);
    await explore(tab, {pickups: 4, seconds: 10});
    tab.clock += Math.round(tab.scene.time * 1000) + 20000;                 // returnMenu() saved; some time in the menu
    settings.difficulty = 'Easy'; tab.store('redcat.settings.v1', settings);  // the menu's Moeilijkheid page (setDifficulty)
    await tab.startLevel('lvl00a', {quickplay: true, resetRecovery: true});
    await explore(tab, {pickups: 6, seconds: 15});
    tab.store(env.highscores.HIGHSCORES_KEY, env.highscores.recordHighscore(tab.read(env.highscores.HIGHSCORES_KEY), tab.profiles.active, tab.read('redcat.save.v1')));
    notes.push('player 2 "Mila" (active): short adventure in lvl00a, then a Snelspel (quick play) of lvl00a on Easy that replaced it; scripts.replayLevel true');
  }
  await tab.pending; await tab.recovery?.flush();
  const dump = browser.dump({
    constructed: true,
    warning: 'Built from the port\'s code by build-fixtures.mjs. Not captured from a browser.',
    generation: gen.file.slice(0, 4), builtFrom: gen.rev, validFor: gen.span,
    indexedDBVersion: env.recovery ? 1 : null, scenario: notes,
  });
  const text = compact(dump);
  writeFileSync(path.join(here, gen.file), text);
  return {file: gen.file, keys: Object.keys(dump.localStorage), databases: Object.keys(dump.indexedDB), bytes: Buffer.byteLength(text)};
}

// One line per localStorage key and per IndexedDB record: readable in a diff, values otherwise compact.
function compact(dump) {
  const lines = ['{', ` "_meta": ${JSON.stringify(dump._meta)},`, ' "localStorage": {'];
  const keys = Object.keys(dump.localStorage);
  keys.forEach((key, i) => lines.push(`  ${JSON.stringify(key)}: ${JSON.stringify(dump.localStorage[key])}${i < keys.length - 1 ? ',' : ''}`));
  lines.push(' },', ' "indexedDB": {');
  const names = Object.keys(dump.indexedDB);
  names.forEach((name, i) => {
    lines.push(`  ${JSON.stringify(name)}: {"history": [`);
    dump.indexedDB[name].history.forEach((record, j, all) => lines.push(`   ${JSON.stringify(record)}${j < all.length - 1 ? ',' : ''}`));
    lines.push(`  ]}${i < names.length - 1 ? ',' : ''}`);
  });
  lines.push(' }', '}');
  return lines.join('\n') + '\n';
}

for (const gen of GENERATIONS) {
  const result = await build(gen);
  console.log(`${result.file}: ${(result.bytes / 1024).toFixed(0)} KiB, localStorage [${result.keys.join(', ')}], indexedDB [${result.databases.join(', ')}]`);
}
