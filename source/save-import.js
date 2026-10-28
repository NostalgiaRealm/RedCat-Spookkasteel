import {LEVEL_IDS, readCampaignProgress, validAdventureSave} from './campaign-progress.js';
import {normalizePlayerName} from './player-profiles.js';
import {SAVE_EXPORT_FORMAT, SAVE_EXPORT_VERSION} from './save-export.js';

export const MAX_SAVE_IMPORT_BYTES = 32 * 1024 * 1024;
const MAX_DEPTH = 64, MAX_NODES = 1000000, MAX_ARRAY = 100000, MAX_STRING = 65536;
const forbidden = new Set(['__proto__', 'prototype', 'constructor']);
// The five original compiled scripts are fixed assets. Refuse a foreign VM
// before replacing a working save: DaviVM.restore requires this same identity.
const SCRIPTS = Object.freeze({
  lvl00a: ['467e9d49f12dfb282eb3e490a6592079575cfa4b435113ff35e05a49572a25f3', 0],
  lvl01a: ['7741589599a6ab9918752c102e3801e612711e3e9b49679e6f7846ebeb8485a5', 0],
  lvl02a: ['0a415a5e8f8826eed1ce20c64f5e435fae0f5acd68509cd9f5afa96edf424101', 5],
  lvl03a: ['0ab97b8a9def14a6ed5eedf30ea3b715f3fcc7a3208459873f0daec548c90bab', 0],
  lvl04a: ['88e583a669d48e9b2c5b3957c9c0a75016540b7e4d6e801a63d3eee0f9370526', 2],
});
const record = value => value !== null && typeof value === 'object' && !Array.isArray(value);
const finite = value => typeof value === 'number' && Number.isFinite(value);
const label = value => typeof value === 'string' && value.length > 0 && value.length <= 512;
const vector = (value, size = 3) => Array.isArray(value) && value.length === size && value.every(v => finite(v) && Math.abs(v) <= 1e7);
const fail = path => {throw new Error(`Dit exportbestand bevat ongeldige spelgegevens (${path}).`);};
function requireValue(ok, path) {if (!ok) fail(path);}
function optional(object, key, check, path, nullable = false) {
  if (object[key] !== undefined && !(nullable && object[key] === null)) requireValue(check(object[key]), `${path}.${key}`);
}
function objectArray(value, path, maximum = 8192) {
  requireValue(Array.isArray(value) && value.length <= maximum && value.every(record), path);
}
function pairs(value, path) {requireValue(Array.isArray(value) && value.every(p => Array.isArray(p) && p.length === 2 && (typeof p[0] === 'string' || finite(p[0]))), path);}

// Check before cloning: JSON.stringify would silently replace Infinity and
// execute getters/toJSON in a direct caller's object. Parsed files never have
// either, but importAdventure also accepts a bundle from application code.
function inspectJSON(value) {
  let count = 0;
  const seen = new Set();
  function visit(item, depth) {
    if (++count > MAX_NODES || depth > MAX_DEPTH) fail('te veel of te diep geneste gegevens');
    if (item === null || typeof item === 'boolean') return;
    if (typeof item === 'number') {requireValue(finite(item), 'getal'); return;}
    if (typeof item === 'string') {requireValue(item.length <= MAX_STRING, 'te lange tekst'); return;}
    requireValue(typeof item === 'object' && !seen.has(item), 'JSON');
    const array = Array.isArray(item), prototype = Object.getPrototypeOf(item);
    requireValue(array ? prototype === Array.prototype : prototype === Object.prototype || prototype === null, 'JSON-object');
    if (array) requireValue(item.length <= MAX_ARRAY, 'te lange lijst');
    seen.add(item);
    for (const key of Reflect.ownKeys(item)) {
      if (array && key === 'length') continue;
      requireValue(typeof key === 'string' && !forbidden.has(key), 'onveilige veldnaam');
      const descriptor = Object.getOwnPropertyDescriptor(item, key);
      requireValue(descriptor.enumerable && Object.hasOwn(descriptor, 'value'), 'JSON-veld');
      visit(descriptor.value, depth + 1);
    }
    // Sparse arrays are not JSON arrays: serialization changes holes to null.
    if (array) requireValue(Object.keys(item).length === item.length, 'onvolledige lijst');
    seen.delete(item);
  }
  visit(value, 0);
}

function checkScripts(scripts, level) {
  requireValue(record(scripts) && scripts.version === 1 && record(scripts.vm) && scripts.vm.version === 1, 'save.game.scripts');
  const vm = scripts.vm;
  requireValue(vm.script === SCRIPTS[level][0] && record(vm.globals), 'save.game.scripts.vm');
  for (let index = 0; index < SCRIPTS[level][1]; index++) {
    const value = vm.globals[`37:${index}`];
    requireValue(record(value) && value.type === 2 && finite(value.value), 'save.game.scripts.vm.globals');
  }
  for (const [key, value] of Object.entries(vm.globals)) {
    requireValue(record(value) && ([1, 2].includes(value.type) && finite(value.value) || value.type === 3 && typeof value.value === 'string' || value.type === 4 && (value.value === null || typeof value.value === 'string')), `save.game.scripts.vm.globals.${key}`);
  }
  for (const key of ['replayLevel', 'cutscene', 'playerVisible', 'enemiesFrozen', 'weaponsEnabled', 'combatThreats', 'combatBoss']) optional(scripts, key, v => typeof v === 'boolean', 'save.game.scripts');
  optional(scripts, 'time', finite, 'save.game.scripts');
  optional(scripts, 'keyItems', v => Array.isArray(v) && v.every(item => typeof item === 'string'), 'save.game.scripts');
  for (const key of ['missions', 'poses']) if (scripts[key] !== undefined) pairs(scripts[key], `save.game.scripts.${key}`);
  if (scripts.poses) for (const [, pose] of scripts.poses) requireValue(record(pose) && vector(pose.origin) && vector(pose.translation) && vector(pose.rotation, 4), 'save.game.scripts.poses');
  if (scripts.motions !== undefined) {
    objectArray(scripts.motions, 'save.game.scripts.motions');
    for (const motion of scripts.motions) {
      requireValue(label(motion.id), 'save.game.scripts.motions.id');
      for (const key of ['time', 'from', 'to', 'speed', 'loopFrom', 'loopTo']) optional(motion, key, finite, 'save.game.scripts.motions', true);
    }
  }
  for (const key of ['camera', 'subtitle', 'pendingCutsceneStop', 'portalTransition', 'musicState']) optional(scripts, key, record, 'save.game.scripts', true);
  const camera = scripts.camera;
  if (camera) {
    requireValue(vector(camera.position) && vector(camera.offset) && Array.isArray(camera.points) && camera.points.every(point => vector(point)) && ['mode', 'start', 'duration'].every(key => finite(camera[key])), 'save.game.scripts.camera');
    for (const key of ['position', 'targetPosition', 'offset']) optional(camera, key, vector, 'save.game.scripts.camera', true);
    optional(camera, 'points', v => Array.isArray(v) && v.every(point => vector(point)), 'save.game.scripts.camera');
    for (const key of ['mode', 'start', 'duration', 'manualPitch', 'returnPitch']) optional(camera, key, finite, 'save.game.scripts.camera');
  }
  if (scripts.subtitle) requireValue(typeof scripts.subtitle.text === 'string' && finite(scripts.subtitle.until) && (scripts.subtitle.voice == null || label(scripts.subtitle.voice)), 'save.game.scripts.subtitle');
  if (scripts.musicState) {
    optional(scripts.musicState, 'sound', label, 'save.game.scripts.musicState');
    optional(scripts.musicState, 'mode', label, 'save.game.scripts.musicState');
  }
  if (scripts.pendingCutsceneStop) requireValue(finite(scripts.pendingCutsceneStop.fade), 'save.game.scripts.pendingCutsceneStop');
  if (scripts.portalTransition) requireValue(label(scripts.portalTransition.id) && finite(scripts.portalTransition.serial) && typeof scripts.portalTransition.fromVisible === 'boolean', 'save.game.scripts.portalTransition');
}

function checkSave(save) {
  requireValue(validAdventureSave(save) && vector(save.position), 'save');
  for (const key of ['lastSafe']) optional(save, key, vector, 'save');
  optional(save, 'noClip', v => typeof v === 'boolean', 'save');
  for (const key of ['playerMotion', 'playerAnimation', 'audio']) optional(save, key, record, 'save', true);
  const game = save.game;
  for (const [key, value] of Object.entries(game.state)) requireValue(finite(value) && Math.abs(value) <= Number.MAX_SAFE_INTEGER, `save.game.state.${key}`);
  optional(game, 'difficulty', v => ['Easy', 'Normal', 'Hard'].includes(v), 'save.game');
  optional(game, 'completed', v => typeof v === 'boolean', 'save.game');
  for (const key of ['time', 'healthVersion', 'environmentFeedbackCooldown', 'hitCooldown', 'respawnProtection', 'hurtSoundUntil', 'hurtRandomState', 'attackCooldown', 'playerAttackSerial', 'playerAttackUntil', 'nextProjectileId']) optional(game, key, finite, 'save.game');
  for (const key of ['debriefing', 'checkpoint', 'hazards', 'footstepState', 'playerReaction', 'playerCharge', 'pendingPlayerAttack', 'spoutEffects', 'entryState']) optional(game, key, record, 'save.game', true);
  if (game.checkpoint) requireValue(vector(game.checkpoint.position) && finite(game.checkpoint.orientation), 'save.game.checkpoint');
  if (game.debriefing) {
    requireValue(game.debriefing.version === 1 && game.debriefing.level === save.level, 'save.game.debriefing');
    objectArray(game.debriefing.rows, 'save.game.debriefing.rows', 4);
  }
  if (game.variables !== undefined) pairs(game.variables, 'save.game.variables');
  for (const key of ['objects', 'projectiles', 'projectileImpacts', 'rewardEffects', 'explosionDamage', 'explosions', 'gargoyleBlasts']) {
    if (game[key] === undefined) continue;
    objectArray(game[key], `save.game.${key}`);
    for (const item of game[key]) {
      for (const name of ['position', 'velocity', 'lastSeenPosition']) optional(item, name, vector, `save.game.${key}`, true);
    }
  }
  if (game.objects) {
    const ids = new Set();
    for (const object of game.objects) {
      requireValue(label(object.id) && !ids.has(object.id), 'save.game.objects.id'); ids.add(object.id);
      for (const key of ['enabled', 'visible', 'collected', 'open', 'locked', 'switchedOn', 'inside', 'grounded', 'alerted', 'animationLoop']) optional(object, key, v => typeof v === 'boolean', 'save.game.objects');
      for (const key of ['health', 'openFraction', 'triggerCount', 'switchCount', 'yaw', 'volume', 'motionSpeed', 'actorAge', 'animationUntil', 'attackTimer', 'velocityY', 'salvoRemaining']) optional(object, key, finite, 'save.game.objects');
      for (const key of ['animationPose', 'machinePose', 'fairyState', 'knightDebrisState', 'pendingAttack', 'nativeShooter', 'boss', 'ambush', 'flightDetour', 'batContact', 'patrol', 'pursuit', 'teleporterState']) optional(object, key, record, 'save.game.objects', true);
      optional(object, 'rotation', vector, 'save.game.objects');
      if (object.pursuit) {
        optional(object.pursuit, 'route', v => Array.isArray(v) && v.every(label), 'save.game.objects.pursuit');
        optional(object.pursuit, 'goal', vector, 'save.game.objects.pursuit');
      }
    }
  }
  if (game.scripts !== undefined && game.scripts !== null) checkScripts(game.scripts, save.level);
  if (save.audio) {
    requireValue(save.audio.version === 1 && save.audio.level === save.level, 'save.audio');
    for (const key of ['sounds', 'dialogue']) objectArray(save.audio[key], `save.audio.${key}`, key === 'sounds' ? 512 : 128);
    if (save.audio.musicPositions !== undefined) pairs(save.audio.musicPositions, 'save.audio.musicPositions');
    for (const sound of save.audio.sounds) requireValue(label(sound.sound) && ['music', 'effects', 'voices'].includes(sound.channel), 'save.audio.sounds');
  }
}

/** Validate before exposing any imported progress; return a detached snapshot. */
export function validateSaveImport(bundle) {
  inspectJSON(bundle);
  requireValue(record(bundle) && bundle.format === SAVE_EXPORT_FORMAT, 'bestandsformaat');
  if (bundle.formatVersion !== SAVE_EXPORT_VERSION) throw new Error('Deze versie van het exportbestand wordt niet ondersteund. Gebruik een passende versie van RedCat Spookkasteel.');
  requireValue(typeof bundle.exportedAt === 'string' && Number.isFinite(Date.parse(bundle.exportedAt)), 'exportdatum');
  requireValue(record(bundle.player), 'speler');
  const name = normalizePlayerName(bundle.player.name);
  if (bundle.save?.version !== 1 || bundle.save?.game?.version !== 1) throw new Error('Deze versie van het opgeslagen avontuur wordt niet ondersteund.');
  checkSave(bundle.save);
  const progress = bundle.progress, options = bundle.options;
  requireValue(record(progress) && progress.version === 1 && Number.isInteger(progress.highestUnlocked) && progress.highestUnlocked >= 0 && progress.highestUnlocked < LEVEL_IDS.length, 'voortgang');
  optional(progress, 'earnedSkills', v => Number.isInteger(v) && v >= 0 && v <= 31, 'voortgang');
  optional(progress, 'playedLevels', v => Array.isArray(v) && v.every(id => LEVEL_IDS.includes(id)), 'voortgang');
  requireValue(record(options) && ['Easy', 'Normal', 'Hard'].includes(options.difficulty) && typeof options.noClip === 'boolean', 'spelopties');
  const text = JSON.stringify(bundle);
  if (new TextEncoder().encode(text).byteLength > MAX_SAVE_IMPORT_BYTES) throw new Error('Het exportbestand is te groot (maximaal 32 MiB).');
  return {format: SAVE_EXPORT_FORMAT, formatVersion: SAVE_EXPORT_VERSION, exportedAt: bundle.exportedAt,
    player: {name}, save: JSON.parse(JSON.stringify(bundle.save)), progress: readCampaignProgress(progress, bundle.save),
    options: {difficulty: options.difficulty, noClip: options.noClip}};
}

export function parseSaveImport(text) {
  if (typeof text !== 'string') throw new Error('Het exportbestand kan niet als tekst worden gelezen.');
  if (text.length > MAX_SAVE_IMPORT_BYTES || new TextEncoder().encode(text).byteLength > MAX_SAVE_IMPORT_BYTES) throw new Error('Het exportbestand is te groot (maximaal 32 MiB).');
  let bundle;
  try {bundle = JSON.parse(text.replace(/^\uFEFF/, ''));}
  catch {throw new Error('Dit bestand is geen geldig JSON-exportbestand van RedCat Spookkasteel.');}
  return validateSaveImport(bundle);
}
