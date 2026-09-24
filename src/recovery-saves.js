import {validAdventureSave} from './campaign-progress.js';

export const RECOVERY_MINUTES = Object.freeze([2, 5, 10]);
const INTERVAL = 60, WINDOW = 600, MAX_CHECKPOINTS = 11, EPSILON = 1e-6;
const validClock = value => Number.isFinite(value) && value >= 0 && value <= Number.MAX_SAFE_INTEGER;
const clone = value => structuredClone(value);
const recoverable = save => validAdventureSave(save) && save.game.state.health > 0;

// Keep the complete rolling history in one record. An IndexedDB transaction
// replaces it atomically; a quota or write failure leaves the previous record.
// This is deliberately separate from the existing latest-save localStorage key.
export class IndexedDBRecoveryStorage {
  constructor({indexedDB = globalThis.indexedDB, name = 'redcat-recovery-saves'} = {}) {
    this.indexedDB = indexedDB;
    this.name = name;
    this.database = null;
    this.opening = null;
  }

  open() {
    if (this.database) return Promise.resolve(this.database);
    if (this.opening) return this.opening;
    this.opening = new Promise((resolve, reject) => {
      if (!this.indexedDB) return reject(new Error('IndexedDB is unavailable.'));
      const request = this.indexedDB.open(this.name, 1);
      let rejected = false;
      request.onupgradeneeded = () => {
        if (!request.result.objectStoreNames.contains('history')) request.result.createObjectStore('history');
      };
      request.onerror = () => reject(request.error || new Error('Cannot open recovery saves.'));
      request.onblocked = () => {
        rejected = true;
        reject(new Error('Recovery saves are open in another incompatible game window.'));
      };
      request.onsuccess = () => {
        const database = request.result;
        if (rejected) { database.close(); return; }
        this.database = database;
        database.onversionchange = () => { database.close(); this.database = null; this.opening = null; };
        resolve(database);
      };
    }).catch(error => { this.opening = null; throw error; });
    return this.opening;
  }

  async read() {
    const database = await this.open();
    return new Promise((resolve, reject) => {
      const transaction = database.transaction('history', 'readonly');
      const request = transaction.objectStore('history').get('rolling');
      let result;
      request.onsuccess = () => { result = request.result; };
      transaction.oncomplete = () => resolve(result ?? null);
      transaction.onerror = transaction.onabort = () => reject(transaction.error || request.error || new Error('Cannot read recovery saves.'));
    });
  }

  async write(state) {
    const database = await this.open();
    return new Promise((resolve, reject) => {
      const transaction = database.transaction('history', 'readwrite');
      transaction.objectStore('history').put(state, 'rolling');
      transaction.oncomplete = () => resolve();
      transaction.onerror = transaction.onabort = () => reject(transaction.error || new Error('Cannot write recovery saves.'));
    });
  }
}

function readState(stored) {
  if (stored == null) return {clock: 0, anchor: 0, checkpoints: []};
  if (!validClock(stored.clock) || !validClock(stored.anchor) || stored.anchor > stored.clock || !Array.isArray(stored.checkpoints)) {
    throw new Error('Invalid recovery save history.');
  }
  // Bound both validation and retained snapshots, including externally damaged
  // data. A corrupt individual checkpoint never becomes a menu load option.
  let checkpoints = stored.checkpoints.slice(-MAX_CHECKPOINTS).filter(entry =>
    entry && validClock(entry.at) && entry.at >= stored.anchor && entry.at <= stored.clock + EPSILON && recoverable(entry.save));
  checkpoints.sort((a, b) => a.at - b.at);
  checkpoints = checkpoints.filter((entry, index) => index === 0 || entry.at > checkpoints[index - 1].at + EPSILON);
  const newest = checkpoints.at(-1)?.at ?? 0;
  checkpoints = checkpoints.filter(entry => entry.at >= newest - WINDOW - EPSILON);
  return clone({clock: stored.clock, anchor: stored.anchor, checkpoints});
}

export class RecoverySaves {
  constructor({storage = new IndexedDBRecoveryStorage(), onError = () => {}} = {}) {
    this.storage = storage;
    this.onError = onError;
    this.state = {clock: 0, anchor: 0, checkpoints: []};
    this.baseClock = 0;
    this.elapsed = 0;
    this.retryAfter = 0;
    this.pending = 0;
    this.available = false;
    this.canReset = false;
    this.resetPending = false;
    this.ready = this.load();
    this.queue = this.ready;
  }

  report(error) { try { this.onError(error); } catch { /* Reporting must not break saving. */ } }

  async load() {
    try {
      const stored = await this.storage.read();
      this.canReset = true;
      this.state = readState(stored);
      this.baseClock = this.state.clock;
      this.available = true;
      return true;
    } catch (error) {
      this.report(error);
      return false;
    }
  }

  get clock() { return this.baseClock + this.elapsed; }

  advance(seconds) {
    // Only the playing loop calls this: menus, paused time and time while the
    // game is closed must not expire the snapshots needed to escape a deadlock.
    if (!Number.isFinite(seconds) || seconds < 0 || !validClock(this.clock + seconds)) return;
    this.elapsed += seconds;
  }

  bucket(clock) {
    return this.state.anchor + Math.floor((clock - this.state.anchor + EPSILON) / INTERVAL) * INTERVAL;
  }

  get needsCapture() {
    if ((!this.available && !(this.canReset && this.resetPending)) || this.pending || this.elapsed < this.retryAfter) return false;
    if (this.resetPending) return true;
    const newest = this.state.checkpoints.at(-1);
    return !newest || this.bucket(this.clock) >= newest.at + INTERVAL - EPSILON;
  }

  capture(save, {reset = false} = {}) {
    // Copy at the call site, before awaiting IndexedDB: the running game can
    // mutate its state while this immutable checkpoint is waiting to be written.
    let snapshot;
    try {
      if (!recoverable(save)) { this.retryAfter = this.elapsed + 5; return Promise.resolve(false); }
      snapshot = clone(save);
    } catch (error) {
      this.report(error);
      this.retryAfter = this.elapsed + 5;
      return Promise.resolve(false);
    }
    const elapsed = this.elapsed;
    this.pending++;
    const operation = this.queue.then(async () => {
      if (reset) this.resetPending = true;
      if (!this.available && !(this.canReset && this.resetPending)) return false;
      const clock = this.baseClock + elapsed;
      const previous = this.resetPending ? [] : this.state.checkpoints;
      const anchor = previous.length ? this.state.anchor : clock;
      // Fixed minute buckets prevent render-frame jitter from pruning the
      // ten-minute entry just before its replacement exists. A late frame gets
      // one real snapshot; we never invent intermediate saves for missed time.
      const at = previous.length ? this.bucket(clock) : clock;
      if (previous.length && at < previous.at(-1).at + INTERVAL - EPSILON) return false;
      const checkpoints = [...previous.filter(entry => entry.at >= at - WINDOW - EPSILON), {at, save: snapshot}].slice(-MAX_CHECKPOINTS);
      const next = {clock, anchor, checkpoints};
      try {
        await this.storage.write(clone(next));
        this.state = next;
        this.available = true;
        this.resetPending = false;
        this.retryAfter = 0;
        return true;
      } catch (error) {
        this.report(error);
        this.retryAfter = this.elapsed + 5;
        return false;
      }
    }).finally(() => { this.pending--; });
    // A storage adapter must not leave later saves attached to a rejected queue.
    this.queue = operation.catch(error => { this.report(error); return false; });
    return this.queue;
  }

  choices() {
    const checkpoints = this.state.checkpoints;
    const newest = checkpoints.at(-1);
    return RECOVERY_MINUTES.map(minutes => {
      const target = newest ? newest.at - minutes * INTERVAL : -Infinity;
      const entry = checkpoints.findLast(checkpoint => checkpoint !== newest && checkpoint.at <= target + EPSILON && checkpoint.at > target - INTERVAL + EPSILON);
      return entry ? {minutes, save: clone(entry.save), ageSeconds: newest.at - entry.at, at: entry.at} : {minutes, save: null};
    });
  }

  async flush() { await this.queue; }
}
