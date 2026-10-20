import {readCampaignProgress, validAdventureSave} from './campaign-progress.js';
import {normalizeDifficulty} from './difficulty.js';
import {normalizePlayerName} from './player-profiles.js';

export const SAVE_EXPORT_FORMAT = 'redcat-spookkasteel-save';
export const SAVE_EXPORT_VERSION = 1;

function copyJSON(value) {
  try {
    return JSON.parse(JSON.stringify(value, (_key, item) => {
      if (typeof item === 'number' && !Number.isFinite(item) ||
          ['bigint', 'function', 'symbol'].includes(typeof item)) throw new TypeError('Non-JSON value');
      return item;
    }));
  } catch {
    throw new Error('Het opgeslagen avontuur bevat ongeldige gegevens en kan niet worden geëxporteerd.');
  }
}

/** Only the chosen player's current save and campaign/options enter this file. */
export function createSaveExport({playerName, save, progress, options, exportedAt = new Date()} = {}) {
  if (!validAdventureSave(save)) throw new Error('Deze speler heeft nog geen geldig opgeslagen avontuur om te exporteren.');
  const name = normalizePlayerName(playerName);
  const snapshot = copyJSON(save);
  if (!validAdventureSave(snapshot)) throw new Error('Het opgeslagen avontuur kan niet worden geëxporteerd.');
  const date = exportedAt instanceof Date ? exportedAt : new Date(exportedAt);
  if (!Number.isFinite(date.getTime())) throw new Error('De exportdatum is ongeldig.');
  const timestamp = date.toISOString();
  const bundle = {
    format: SAVE_EXPORT_FORMAT,
    formatVersion: SAVE_EXPORT_VERSION,
    exportedAt: timestamp,
    player: {name},
    save: snapshot,
    progress: readCampaignProgress(progress, snapshot),
    options: {
      difficulty: normalizeDifficulty(options?.difficulty ?? snapshot.game.difficulty),
      noClip: options?.noClip === true,
    },
  };
  const safeName = name.normalize('NFKD').replace(/[\u0300-\u036f]/g, '')
    .replace(/[^A-Za-z0-9_-]+/g, '_').replace(/^_+|_+$/g, '').slice(0, 40) || 'Speler';
  const stamp = timestamp.replace(/:/g, '').replace(/\.\d{3}Z$/, 'Z');
  return {
    filename: `RedCat-Spookkasteel-${safeName}-${stamp}.json`,
    text: JSON.stringify(bundle, null, 2) + '\n',
    bundle,
  };
}

/** Native wrappers can supply their save-file picker; browsers download a Blob. */
export async function downloadSaveExport(exported, {
  exportFile = null, document = globalThis.document, urlApi = globalThis.URL,
  BlobClass = globalThis.Blob, defer = callback => setTimeout(callback, 1000),
} = {}) {
  const {filename, text} = exported || {};
  if (typeof filename !== 'string' || !filename || /[\\/]/.test(filename) || typeof text !== 'string') {
    throw new Error('Het exportbestand is ongeldig.');
  }
  if (exportFile) {
    const result = await exportFile({filename, text});
    if (result === false || result?.canceled || result?.cancelled) return {status: 'cancelled', filename};
    return {status: 'saved', filename};
  }
  const blob = new BlobClass([text], {type: 'application/json;charset=utf-8'});
  const url = urlApi.createObjectURL(blob);
  const anchor = document.createElement('a');
  anchor.href = url; anchor.download = filename; anchor.hidden = true;
  try {
    document.body.append(anchor); anchor.click();
  } finally {
    anchor.remove();
    // Give the browser download handoff time to consume the Blob before release.
    defer(() => urlApi.revokeObjectURL(url));
  }
  return {status: 'downloaded', filename};
}
