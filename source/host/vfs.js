// Virtual drive for the recompiled game (from the Maisy's Playhouse host). C:\REDCAT is the
// installed game folder; its original files are mounted read-only and copied on first write.
// Large read-only files are never held whole: a reader object fetches byte ranges on demand.

/** Upper-case absolute DOS path without trailing backslash (except a drive root). */
export function normalizePath(p, cwd = 'C:\\') {
  let s = String(p).replace(/\//g, '\\');
  if (/^[A-Za-z]:/.test(s)) {
    if (s.length === 2 || s[2] !== '\\') s = s.slice(0, 2) + '\\' + s.slice(2);
  } else if (s.startsWith('\\')) s = cwd.slice(0, 2) + s;
  else s = cwd.replace(/\\$/, '') + '\\' + s;
  const parts = [];
  for (const part of s.slice(3).split('\\')) {
    if (!part || part === '.') continue;
    if (part === '..') parts.pop();
    else parts.push(part);
  }
  return (s.slice(0, 2) + '\\' + parts.join('\\')).toUpperCase();
}

export class Vfs {
  constructor() {
    this.drives = {
      C: { type: 3, label: 'REDCAT', serial: 0x20001002 },
    };
    this.files = new Map();
    this.dirs = new Set(['C:\\']);
    this.display = new Map();    // upper-case path -> original spelling of the last component
    this.onPersist = null;       // (path, Uint8Array | null) => void, for writable files
  }

  _addDirs(path) {
    let k = path.lastIndexOf('\\');
    while (k > 2) {
      this.dirs.add(path.slice(0, k));
      k = path.lastIndexOf('\\', k - 1);
    }
  }

  /** Read-only file backed by reader.read(offset, length) -> Uint8Array (may be a view into a cache). */
  mount(path, size, reader) {
    const key = normalizePath(path);
    this.files.set(key, { path: key, size, reader, readOnly: true });
    this.display.set(key, path.replace(/\//g, '\\').split('\\').pop());
    this._addDirs(key);
  }

  /** In-memory file. persist: report writes through onPersist. */
  add(path, data, { readOnly = false, persist = false } = {}) {
    const key = normalizePath(path);
    this.files.set(key, { path: key, size: data.length, data, readOnly, persist });
    this.display.set(key, path.replace(/\//g, '\\').split('\\').pop());
    this._addDirs(key);
  }

  /**
   * A change to the bytes the game reads from a read-only original file, made as they are read
   * (fixes.js: a corrected value in a level's compiled script). The file itself is untouched.
   * Only applied while the bytes at `offset` are `expect`: another copy of the file is left alone.
   * Returns false when the file is not there.
   */
  patch(path, offset, expect, bytes) {
    const st = this.files.get(normalizePath(path));
    if (!st || expect.length !== bytes.length) return false;
    (st.patches || (st.patches = [])).push({ offset, expect: Uint8Array.from(expect), bytes: Uint8Array.from(bytes), ok: null });
    return true;
  }

  _patched(st, pos, n, dst, dstOff) {
    for (const p of st.patches) {
      if (p.offset + p.bytes.length <= pos || p.offset >= pos + n) continue;
      if (p.ok === null) {
        const have = new Uint8Array(p.expect.length);
        if (st.data) have.set(st.data.subarray(p.offset, p.offset + have.length)); else st.reader.read(p.offset, have.length, have, 0);
        p.ok = have.every((b, k) => b === p.expect[k]);
      }
      if (!p.ok) continue;
      for (let k = 0; k < p.bytes.length; k++) { const at = p.offset + k; if (at >= pos && at < pos + n) dst[dstOff + at - pos] = p.bytes[k]; }
    }
  }

  /** Turns a mounted read-only file into a writable in-memory copy (copy on write). */
  makeWritable(st) {
    if (!st.readOnly) return;
    if (!st.data) {
      const data = new Uint8Array(st.size);
      if (st.size) this.read(st, 0, st.size, data, 0);
      st.data = data;
      delete st.reader;
    }
    st.readOnly = false;
    st.persist = true;
  }

  /** Whole content of a file as bytes (a copy), or null. */
  readAll(path) {
    const st = this.files.get(path);
    if (!st) return null;
    const out = new Uint8Array(st.size);
    if (st.size) this.read(st, 0, st.size, out, 0);
    return out;
  }

  mkdir(path) {
    const key = normalizePath(path);
    this.dirs.add(key);
    this._addDirs(key);
  }

  stat(path) {
    const f = this.files.get(path);
    if (f) return f;
    if (this.dirs.has(path) || this.dirs.has(path + '\\')) return { path, dir: true, size: 0 };
    return null;
  }

  size(st) {
    return st.size;
  }

  read(st, pos, n, dst, dstOff) {
    if (st.data) dst.set(st.data.subarray(pos, pos + n), dstOff);
    else st.reader.read(pos, n, dst, dstOff);
    if (st.patches && st.readOnly) this._patched(st, pos, n, dst, dstOff);
  }

  create(path) {
    const drive = path[0];
    const persist = this.drives[drive] && this.drives[drive].type === 3;
    this.files.set(path, { path, size: 0, data: new Uint8Array(0), readOnly: false, persist });
    this.display.set(path, path.split('\\').pop());
    this._addDirs(path);
  }

  write(st, pos, bytes) {
    const end = pos + bytes.length;
    if (end > st.data.length) {
      const grown = new Uint8Array(Math.max(end, st.data.length * 2, 256));
      grown.set(st.data.subarray(0, st.size));
      st.data = grown;
    }
    st.data.set(bytes, pos);
    if (end > st.size) st.size = end;
  }

  truncate(st, size) {
    if (st.data) st.size = Math.min(st.size, size);
  }

  flush(st) {
    // the game's own run logs (AdamDebugNN.log and the like) are not worth keeping
    if (st.persist && this.onPersist && !/\.LOG$/.test(st.path)) this.onPersist(st.path, st.data.slice(0, st.size));
  }

  remove(path) {
    const f = this.files.get(path);
    if (!f || f.readOnly) return false;
    this.files.delete(path);
    if (f.persist && this.onPersist) this.onPersist(path, null);
    return true;
  }

  rename(a, b) {
    const f = this.files.get(a);
    if (!f || f.readOnly) return false;
    this.files.delete(a);
    f.path = b;
    this.files.set(b, f);
    this.display.set(b, b.split('\\').pop());
    if (f.persist && this.onPersist) {
      this.onPersist(a, null);
      this.onPersist(b, f.data.slice(0, f.size));
    }
    return true;
  }

  /** Directory listing for a pattern like C:\DIR\*.X32 (wildcards in the last component only). */
  find(pattern) {
    const k = pattern.lastIndexOf('\\');
    const dir = pattern.slice(0, k);
    const mask = pattern.slice(k + 1);
    const rx = new RegExp('^' + mask.replace(/[.+^${}()|[\]\\]/g, '\\$&').replace(/\*/g, '.*').replace(/\?/g, '.') + '$');
    const loose = mask === '*.*' || mask === '*';
    const out = [];
    const seen = new Set();
    const consider = (path, entry) => {
      const kk = path.lastIndexOf('\\');
      if (path.slice(0, kk) !== dir && !(kk === 2 && dir.length === 2)) return;
      const name = path.slice(kk + 1);
      if (!name || seen.has(name)) return;
      if (loose || rx.test(name)) {
        seen.add(name);
        out.push({ name: this.display.get(path) || name, size: entry ? entry.size : 0, dir: !entry });
      }
    };
    for (const [path, f] of this.files) consider(path, f);
    for (const d of this.dirs) consider(d, null);
    return out;
  }
}

/**
 * Block cache over a synchronous range fetcher: fetch(offset, length) -> Uint8Array.
 * Keeps at most maxBlocks blocks of blockSize bytes (LRU), so a 295 MB file costs a few MB.
 */
export class RangeReader {
  constructor(size, fetch, blockSize = 1 << 18, maxBlocks = 48) {
    this.size = size;
    this.fetch = fetch;
    this.blockSize = blockSize;
    this.maxBlocks = maxBlocks;
    this.blocks = new Map();
    this.bytesFetched = 0;
    this.requests = 0;
  }

  block(k) {
    let b = this.blocks.get(k);
    if (b) {
      this.blocks.delete(k);
      this.blocks.set(k, b);
      return b;
    }
    const off = k * this.blockSize;
    // read ahead: sequential streaming of scene data benefits from larger requests
    let run = 1;
    while (run < 4 && !this.blocks.has(k + run) && (k + run) * this.blockSize < this.size) run++;
    const len = Math.min(run * this.blockSize, this.size - off);
    const data = this.fetch(off, len);
    this.bytesFetched += len;
    this.requests++;
    for (let j = 0; j < run; j++) {
      const piece = data.subarray(j * this.blockSize, Math.min((j + 1) * this.blockSize, len));
      this.blocks.set(k + j, piece);
    }
    while (this.blocks.size > this.maxBlocks) this.blocks.delete(this.blocks.keys().next().value);
    return this.blocks.get(k);
  }

  read(pos, n, dst, dstOff) {
    const bs = this.blockSize;
    while (n > 0) {
      const k = Math.floor(pos / bs);
      const o = pos - k * bs;
      const b = this.block(k);
      const take = Math.min(n, b.length - o);
      if (take <= 0) throw new Error('read past end of file');
      dst.set(b.subarray(o, o + take), dstOff);
      pos += take;
      dstOff += take;
      n -= take;
    }
  }
}
