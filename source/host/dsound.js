// DirectSound for RcHcGame.dat. Genesis3D loads DSOUND.DLL at run time (LoadLibraryA, then
// GetProcAddress "DirectSoundCreate"), so this is a host library, not an import.
// The COM plumbing follows the A2 Racer 4 host. Play state and positions run on the host clock,
// so they are the same with and without an audio device and can be saved and restored.
//   platform.audio (optional): { data(id, bytes, fmt), play(id, loop, offsetBytes), stop(id),
//     volume(id, hundredthsDb), pan(id, hundredthsDb), frequency(id, hz), free(id),
//     alias(id, ofId) (optional): buffer id has the samples buffer ofId was last sent }
// The sink starts every buffer at volume 0, pan 0 and its own rate, as DirectSound does for a new
// buffer. A buffer that starts otherwise (a duplicate, a restored one) must be announced with tell().
// Refusals follow the DirectSound documentation: a value out of range is DSERR_INVALIDPARAM and
// leaves the old value; a control the buffer was not created with is DSERR_CONTROLUNAVAIL. The
// engine does not start a sound whose volume, pan or frequency call failed (0x5C89F0, 0x5C8D80).

const S_OK = 0;
const DSERR_INVALIDPARAM = 0x80070057 | 0, DSERR_CONTROLUNAVAIL = 0x8878001E | 0;
const CTRL_FREQUENCY = 0x20, CTRL_PAN = 0x40, CTRL_VOLUME = 0x80;

function slots(count, entries) {
  const out = new Array(count).fill(null);
  for (const [k, name, n, fn] of entries) out[k] = [name, n, fn];
  return out;
}

export function installDsound(m, host) {
  const { u8, u16, u32, i32 } = m;
  const heap = host.heap;
  const sink = () => host.audio;
  const BUF = 'IDirectSoundBuffer';
  let nextId = 1;
  const ds = host.dsound = { buffers: new Set(), created: 0, events: null };
  // Trace (ds.events = [] switches it on): one record per call that changes what is heard.
  const ev = (b, what, extra) => { if (ds.events) ds.events.push({ t: Math.round(host.nowMs()), id: b.id, file: b.file || '', what, ...extra }); };

  const bytesPerSec = (b) => Math.max(1, b.frequency * b.blockAlign);
  const position = (b) => {
    if (!b.playing) return b.pos;
    const adv = Math.floor((host.nowMs() - b.startMs) * bytesPerSec(b) / 1000);
    let p = b.startPos + adv - (adv % b.blockAlign);
    if (b.loop) return p % b.size;
    if (p >= b.size) { b.playing = false; b.pos = 0; return 0; }
    return p;
  };
  const rebase = (b) => { if (b.playing) { b.startPos = position(b); b.startMs = host.nowMs(); } };
  const tell = (b) => { if (sink() && !b.primary) { sink().volume(b.id, b.volume); sink().pan(b.id, b.pan); sink().frequency(b.id, b.frequency); } };
  // Music continuity (fixes.js, flag musicContinuity; off = the original). When a fight or a scene
  // with its own music is over, the original starts the level's music again from its first note
  // (run: stopped at 20 s, played again from 0, docs/research/original-fixes.md), so with enemies
  // about one only ever hears its beginning. With the flag the level music goes on where it was
  // stopped: the position of its Stop is remembered, and the next Play of that buffer from 0 starts
  // there instead. The buffer is known by its file, "Level N - ....wav", and by being looped; the
  // game's own volume ramp is untouched, and GetCurrentPosition tells the game where it really is.
  const levelMusic = (b) => /\\LEVEL \d[^\\]*\.WAV$/i.test(b.file || '');
  const continuity = () => !!(host.fixes && host.fixes.flags.musicContinuity);
  const refuse = (b, what, v, code) => { ev(b, what, { v, refused: true }); return code; };
  ds.position = position;
  // While a scene is skipped (skip.js) the game's calls go on, but nothing is started on the sink:
  // the scene's voices and effects would all sound at once. Switching it on stops what the sink
  // plays, except the level's music when it is playing: that goes on at the sink untouched (`kept`),
  // so a skip leaves no hole in it and no jump (what is heard of it is then behind the place
  // DirectSound reports, by the game time skipped). Switching it off starts what DirectSound has
  // playing now, at its place, and stops the rest (the same step a restored save state takes,
  // resume below); with loopsOnly (a scene that was skipped to its end) only the loops: a sound
  // that plays once and began in or before the skipped span belongs to it and is not heard, a
  // line of speech, the fairy's going. DirectSound's own state of every buffer runs on as always.
  // Volume, pan, rate and new samples are passed on all the time, so the sink's view of every
  // buffer stays the game's. `kept` is not part of a save state.
  ds.muted = false;
  ds.mute = (on, loopsOnly) => {
    on = !!on;
    if (on === ds.muted) return;
    ds.muted = on;
    if (!sink()) return;
    for (const b of ds.buffers) {
      if (b.primary) continue;
      const p = position(b);
      if (on) { b.kept = !!(b.playing && b.loop && levelMusic(b)); if (!b.kept) sink().stop(b.id); }
      else { if (b.playing && (b.loop || !loopsOnly)) { if (!b.kept) sink().play(b.id, b.loop, p); } else sink().stop(b.id); b.kept = false; }
    }
  };

  m.defineInterface(BUF, slots(21, [
    [0, 'QueryInterface', 2, (self, riid, pOut) => { u32[pOut >> 2] = 0; return 0x80004002 | 0; }],
    [1, 'AddRef', 0, (self) => ++self.refs],
    [2, 'Release', 0, (self) => {
      if (--self.refs > 0) return self.refs;
      ev(self, 'release', { was: self.playing });
      if (sink() && !self.primary) sink().free(self.id);
      if (self.ptr && !self.shared) heap.release(self.ptr);
      ds.buffers.delete(self);
      m.objects.delete(self.addr);
      return 0;
    }],
    [3, 'GetCaps', 1, (self, p) => { u32[(p + 4) >> 2] = self.flags; u32[(p + 8) >> 2] = self.size; u32[(p + 12) >> 2] = 0; u32[(p + 16) >> 2] = 0; return S_OK; }],
    [4, 'GetCurrentPosition', 2, (self, pPlay, pWrite) => {
      const p = position(self);
      if (pPlay) u32[pPlay >> 2] = p;
      if (pWrite) u32[pWrite >> 2] = self.size ? (p + self.blockAlign * 512) % self.size : 0;
      return S_OK;
    }],
    [5, 'GetFormat', 3, (self, p, n, pWritten) => {
      if (p && n >= 16) {
        u16[p >> 1] = 1; u16[(p + 2) >> 1] = self.channels; u32[(p + 4) >> 2] = self.baseFrequency;
        u32[(p + 8) >> 2] = self.baseFrequency * self.blockAlign; u16[(p + 12) >> 1] = self.blockAlign; u16[(p + 14) >> 1] = self.bits;
        if (n >= 18) u16[(p + 16) >> 1] = 0;
      }
      if (pWritten) u32[pWritten >> 2] = 18;
      return S_OK;
    }],
    [6, 'GetVolume', 1, (self, p) => { i32[p >> 2] = self.volume; return S_OK; }],
    [7, 'GetPan', 1, (self, p) => { i32[p >> 2] = self.pan; return S_OK; }],
    [8, 'GetFrequency', 1, (self, p) => { u32[p >> 2] = self.frequency; return S_OK; }],
    [9, 'GetStatus', 1, (self, p) => { position(self); u32[p >> 2] = self.playing ? (self.loop ? 5 : 1) : 0; return S_OK; }],
    [10, 'Initialize', 2, () => S_OK],
    [11, 'Lock', 7, (self, off, size, p1, n1, p2, n2, flags) => {
      if (self.primary || !self.ptr) return 0x80070057 | 0;
      if (flags & 2) { off = 0; size = self.size; }                 // DSBLOCK_ENTIREBUFFER
      else if (flags & 1) off = self.size ? (position(self) + self.blockAlign * 512) % self.size : 0;   // DSBLOCK_FROMWRITECURSOR
      if (size > self.size) size = self.size;
      const first = Math.min(size, self.size - off);
      u32[p1 >> 2] = self.ptr + off; u32[n1 >> 2] = first;
      if (p2) u32[p2 >> 2] = size > first ? self.ptr : 0;
      if (n2) u32[n2 >> 2] = size - first;
      return S_OK;
    }],
    [12, 'Play', 3, (self, r1, pri, flags) => {
      if (self.primary) return S_OK;
      self.startPos = position(self);
      self.loop = (flags & 1) !== 0;
      if (self.resumeAt !== undefined && self.resumeAt !== null) {
        if (!self.playing && self.loop && self.startPos === 0 && continuity() && self.resumeAt < self.size) { self.startPos = self.resumeAt; ds.resumed = (ds.resumed || 0) + 1; }
        self.resumeAt = null;
      }
      self.kept = false;          // music the game itself starts again during a skip is the game's from there on
      ev(self, 'play', { loop: self.loop, from: self.startPos, volume: self.volume, pan: self.pan, hz: self.frequency, was: self.playing });
      self.playing = true;
      self.startMs = host.nowMs();
      ds.plays = (ds.plays || 0) + 1;
      if (sink() && !ds.muted) sink().play(self.id, self.loop, self.startPos);
      return S_OK;
    }],
    [13, 'SetCurrentPosition', 1, (self, pos) => {
      self.pos = pos - (pos % self.blockAlign);
      if (self.playing) { self.kept = false; ev(self, 'seek', { pos: self.pos }); }
      if (self.playing) { self.startPos = self.pos; self.startMs = host.nowMs(); if (sink() && !ds.muted) sink().play(self.id, self.loop, self.startPos); }
      return S_OK;
    }],
    [14, 'SetFormat', 1, () => S_OK],
    [15, 'SetVolume', 1, (self, v) => {
      v |= 0;
      if (self.primary) return S_OK;
      if (!(self.flags & CTRL_VOLUME)) return refuse(self, 'volume', v, DSERR_CONTROLUNAVAIL);
      if (v > 0 || v < -10000) return refuse(self, 'volume', v, DSERR_INVALIDPARAM);
      ev(self, 'volume', { v, playing: self.playing });
      self.volume = v;
      if (sink()) sink().volume(self.id, v);
      return S_OK;
    }],
    [16, 'SetPan', 1, (self, v) => {
      v |= 0;
      if (self.primary) return S_OK;
      if (!(self.flags & CTRL_PAN)) return refuse(self, 'pan', v, DSERR_CONTROLUNAVAIL);
      if (v > 10000 || v < -10000) return refuse(self, 'pan', v, DSERR_INVALIDPARAM);
      ev(self, 'pan', { v, playing: self.playing });
      self.pan = v;
      if (sink()) sink().pan(self.id, v);
      return S_OK;
    }],
    [17, 'SetFrequency', 1, (self, v) => {
      v >>>= 0;
      if (self.primary) return S_OK;
      if (!(self.flags & CTRL_FREQUENCY)) return refuse(self, 'frequency', v, DSERR_CONTROLUNAVAIL);
      if (v !== 0 && (v < 100 || v > 100000)) return refuse(self, 'frequency', v, DSERR_INVALIDPARAM);     // 0: the buffer's own rate
      rebase(self);
      ev(self, 'frequency', { v, playing: self.playing });
      self.frequency = v || self.baseFrequency;
      if (sink() && !self.primary) sink().frequency(self.id, self.frequency);
      return S_OK;
    }],
    [18, 'Stop', 0, (self) => {
      if (self.primary) return S_OK;
      self.pos = position(self);
      if (self.playing && self.loop && levelMusic(self)) self.resumeAt = self.pos;
      self.kept = false;
      ev(self, 'stop', { was: self.playing, pos: self.pos });
      self.playing = false;
      if (sink()) sink().stop(self.id);
      return S_OK;
    }],
    [19, 'Unlock', 4, (self) => {
      if (self.playing) ev(self, 'unlock-while-playing', {});
      if (sink() && !self.primary && self.ptr) { sink().data(self.id, u8.slice(self.ptr, self.ptr + self.size), { channels: self.channels, rate: self.baseFrequency, bits: self.bits, name: self.file || '' }); self.told = true; }
      return S_OK;
    }],
    [20, 'Restore', 0, () => S_OK],
  ]));

  const newBuffer = (b) => {
    b.id = nextId++;
    b.volume = b.volume || 0; b.pan = b.pan || 0; b.pos = 0; b.playing = false; b.loop = false;
    m.newObject(BUF, b);
    ds.buffers.add(b);
    ds.created++;
    return b;
  };
  m.defineInterface('IDirectSound', slots(11, [
    [0, 'QueryInterface', 2, (self, riid, pOut) => { u32[pOut >> 2] = 0; return 0x80004002 | 0; }],
    [1, 'AddRef', 0, (self) => ++self.refs],
    [2, 'Release', 0, (self) => Math.max(--self.refs, 0)],
    [3, 'CreateSoundBuffer', 3, (self, pDesc, pOut) => {
      const flags = u32[(pDesc + 4) >> 2];
      const b = { flags, primary: (flags & 1) !== 0, ptr: 0, size: 0, channels: 2, bits: 16, blockAlign: 4, baseFrequency: 22050, frequency: 22050 };
      const fmt = u32[(pDesc + 16) >> 2];
      if (fmt) {
        b.channels = u16[(fmt + 2) >> 1]; b.baseFrequency = u32[(fmt + 4) >> 2]; b.frequency = b.baseFrequency;
        b.blockAlign = u16[(fmt + 12) >> 1] || 1; b.bits = u16[(fmt + 14) >> 1];
      }
      if (!b.primary) {
        b.size = u32[(pDesc + 8) >> 2];
        b.ptr = heap.alloc(Math.max(4, b.size), true);
      }
      newBuffer(b);
      b.file = host.lastWav || '';
      ev(b, 'create', { flags: flags.toString(16), size: b.size, channels: b.channels, bits: b.bits, rate: b.baseFrequency, primary: b.primary });
      u32[pOut >> 2] = b.addr;
      return S_OK;
    }],
    [4, 'GetCaps', 1, (self, p) => {
      const size = u32[p >> 2];
      u8.fill(0, p + 4, p + size);
      u32[(p + 4) >> 2] = 0x0F1F;      // primary and secondary, mono/stereo, 8/16 bit, continuous rate
      u32[(p + 8) >> 2] = 100; u32[(p + 12) >> 2] = 100000; u32[(p + 16) >> 2] = 1;
      return S_OK;
    }],
    [5, 'DuplicateSoundBuffer', 2, (self, src, pOut) => {
      const s = m.objects.get(src);
      const b = newBuffer({ flags: s.flags, primary: false, ptr: s.ptr, shared: true, size: s.size, channels: s.channels, bits: s.bits, blockAlign: s.blockAlign, baseFrequency: s.baseFrequency, frequency: s.frequency, volume: s.volume, pan: s.pan });
      b.file = s.file;
      // A duplicate plays the original's memory. The sink has those samples already when the
      // original was sent after its last Unlock (told: not part of a save state, it is about the
      // sink): the duplicate then shares them instead of getting a second copy.
      if (sink() && b.ptr) {
        if (s.told && sink().alias) sink().alias(b.id, s.id);
        else sink().data(b.id, u8.slice(b.ptr, b.ptr + b.size), { channels: b.channels, rate: b.baseFrequency, bits: b.bits, name: b.file || '' });
        b.told = true;
      }
      tell(b);       // a duplicate starts with the original's volume, pan and frequency; the engine relies on it (0x5C8AB0 copies its own record of them)
      ev(b, 'duplicate', { of: s.id });
      u32[pOut >> 2] = b.addr;
      return S_OK;
    }],
    [6, 'SetCooperativeLevel', 2, () => S_OK],
    [7, 'Compact', 0, () => S_OK],
    [8, 'GetSpeakerConfig', 1, (self, p) => { u32[p >> 2] = 4; return S_OK; }],
    [9, 'SetSpeakerConfig', 1, () => S_OK],
    [10, 'Initialize', 1, () => S_OK],
  ]));
  // Save states: every sound buffer with its play state. PCM data is in game memory.
  const FIELDS = ['addr', 'refs', 'id', 'file', 'flags', 'primary', 'ptr', 'shared', 'size', 'channels', 'bits', 'blockAlign', 'baseFrequency', 'frequency', 'volume', 'pan', 'pos', 'playing', 'loop', 'startMs', 'startPos', 'resumeAt'];
  if (host.snap) host.snap.add('dsound', () => ({ nextId, created: ds.created, rootRefs: ds.root.refs, buffers: [...ds.buffers].map((b) => Object.fromEntries(FIELDS.map((k) => [k, b[k]]))) }), (st) => {
    for (const b of ds.buffers) { if (sink() && !b.primary) sink().free(b.id); m.objects.delete(b.addr); }
    ds.buffers.clear();
    ds.muted = false;
    nextId = st.nextId; ds.created = st.created; ds.root.refs = st.rootRefs;
    const sent = new Map();        // where the samples are in game memory -> the buffer that was sent with them
    for (const f of st.buffers) {
      const b = { ...f, iface: BUF };
      m.objects.set(b.addr, b);
      ds.buffers.add(b);
      if (sink() && !b.primary && b.ptr) {
        // an original and its duplicates are the same memory: sent once, shared by the others
        const first = sent.get(b.ptr);
        if (first && first.size === b.size && sink().alias) sink().alias(b.id, first.id);
        else { sink().data(b.id, u8.slice(b.ptr, b.ptr + b.size), { channels: b.channels, rate: b.baseFrequency, bits: b.bits, name: b.file || '' }); sent.set(b.ptr, b); }
        b.told = true;
        tell(b);
      }
    }
    // Called by the runtime after a restore (host.onRestored): starts what was playing when the state
    // was saved. Without a sink nothing is asked, so the virtual clock of the Node check is not moved.
    ds.resume = () => { for (const b of ds.buffers) { if (b.primary || !b.playing || !sink()) continue; const p = position(b); if (b.playing) sink().play(b.id, b.loop, p); } };
  }, { version: 2 });        // 2: resumeAt (music continuity)
  ds.root = {};
  m.newObject('IDirectSound', ds.root);
  const create = m.makeThunk('DSOUND.DLL!DirectSoundCreate', 12, (esp) => {
    const pOut = u32[(esp + 8) >> 2];
    ds.root.refs++;
    u32[pOut >> 2] = ds.root.addr;
    return S_OK;
  });
  host.virtualLibs.set('DSOUND.DLL', { handle: 0x7E100000, procs: new Map([['DirectSoundCreate', create]]) });
}
