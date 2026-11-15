// KERNEL32 from the Maisy's Playhouse host, used here for RcHcGame.dat (kernel32x.js adds what
// this game needs on top). Originally: KERNEL32 (and the few ADVAPI32/SHELL32/COMDLG32/WINSPOOL
// calls) as far as Maisy.exe and its plug-ins use them. Process/locale/time parts are adapted from the A2 Racer 4 host (win32.js);
// modules, resources, moveable handles, profile/registry and the allocator are new for Maisy.
import { GameExit } from './machine.js';
import { normalizePath } from './vfs.js';
import { editIni, readIni, latin1Decode, latin1Encode } from './ini.js';

const INVALID_HANDLE = 0xFFFFFFFF;
export const GAME_DIR = 'C:\\REDCAT';

/**
 * Heap for every allocation API. Small blocks come from per-size free lists; large blocks from an
 * address-ordered free list with coalescing, so scene loads and unloads do not grow memory forever.
 * Block header (16 bytes before the pointer): [capacity, requested size, magic, 0].
 */
export class Heap {
  constructor(m, base, limit) {
    this.m = m;
    this.bump = base;
    this.highWater = base;
    this.limit = limit;
    this.small = new Map();
    this.large = [];            // free blocks [addr, size] sorted by addr (addr = header start)
    this.pageBump = limit;
    this.bytesInUse = 0;
  }

  alloc(size, zero = false) {
    const m = this.m;
    const n = Math.max(16, (size + 15) & ~15);
    let p = 0;
    let fresh = false;
    if (n <= 1024) {
      const list = this.small.get(n);
      if (list && list.length) p = list.pop();
    } else {
      const L = this.large;
      let best = -1;
      for (let k = 0; k < L.length; k++) {
        if (L[k][1] >= n + 16 && (best < 0 || L[k][1] < L[best][1])) {
          best = k;
          if (L[k][1] === n + 16) break;
        }
      }
      if (best >= 0) {
        const blk = L[best];
        p = blk[0] + 16;
        const rest = blk[1] - (n + 16);
        if (rest >= 1024 + 32) {
          blk[0] += n + 16;
          blk[1] = rest;
          m.u32[(p - 16) >> 2] = n;
        } else {
          L.splice(best, 1);
          m.u32[(p - 16) >> 2] = blk[1] - 16;
        }
      }
    }
    if (!p) {
      p = this.bump + 16;
      this.bump = p + n;
      if (this.bump >= this.pageBump) throw new Error('out of game memory (heap ' + (this.bytesInUse >> 20) + ' MB in use)');
      m.u32[(p - 16) >> 2] = n;
      // memory above the high-water mark has never been handed out and is still zero
      fresh = p - 16 >= this.highWater;
      if (this.bump > this.highWater) this.highWater = this.bump;
    }
    m.u32[(p - 12) >> 2] = size;
    m.u32[(p - 8) >> 2] = 0x48454150;
    this.bytesInUse += m.u32[(p - 16) >> 2];
    if (zero && !fresh) m.u8.fill(0, p, p + n);
    return p;
  }

  valid(p) {
    return p > 16 && p < this.bump && this.m.u32[(p - 8) >> 2] === 0x48454150;
  }

  sizeOf(p) {
    return this.m.u32[(p - 12) >> 2];
  }

  release(p) {
    if (!p) return;
    const m = this.m;
    if (!this.valid(p)) return;   // double free or foreign pointer: ignore, as HeapFree fails softly
    const n = m.u32[(p - 16) >> 2];
    m.u32[(p - 8) >> 2] = 0;
    this.bytesInUse -= n;
    if (n <= 1024) {
      let list = this.small.get(n);
      if (!list) this.small.set(n, list = []);
      list.push(p);
      return;
    }
    const L = this.large;
    const a = p - 16;
    let lo = 0;
    let hi = L.length;
    while (lo < hi) {
      const mid = (lo + hi) >> 1;
      if (L[mid][0] < a) lo = mid + 1; else hi = mid;
    }
    let blk = [a, n + 16];
    if (lo < L.length && a + blk[1] === L[lo][0]) {
      blk[1] += L[lo][1];
      L.splice(lo, 1);
    }
    if (lo > 0 && L[lo - 1][0] + L[lo - 1][1] === a) {
      L[lo - 1][1] += blk[1];
      blk = L[lo - 1];
    } else {
      L.splice(lo, 0, blk);
    }
    if (blk[0] + blk[1] === this.bump) {
      // the top block goes back to the bump area
      this.bump = blk[0];
      L.splice(L.indexOf(blk), 1);
    }
  }

  realloc(p, size, zero = false) {
    const m = this.m;
    const cap = m.u32[(p - 16) >> 2];
    const oldSize = m.u32[(p - 12) >> 2];
    if (size <= cap) {
      m.u32[(p - 12) >> 2] = size;
      if (zero && size > oldSize) m.u8.fill(0, p + oldSize, p + size);
      return p;
    }
    const q = this.alloc(Math.max(size, size < 65536 ? size * 2 : size + (size >> 2)), false);
    m.u32[(q - 12) >> 2] = size;
    m.u8.copyWithin(q, p, p + Math.min(oldSize, size));
    if (zero) m.u8.fill(0, q + oldSize, q + size);
    this.release(p);
    return q;
  }

  /** Page-aligned block for VirtualAlloc, zero on first use. */
  pages(size) {
    const n = (size + 0xFFFF) & ~0xFFFF;
    this.pageBump -= n;
    if (this.pageBump <= this.bump) throw new Error('out of game memory (pages)');
    return this.pageBump;
  }
}

export function installKernel32(m, host) {
  const { vfs } = host;
  const { u8, u16, u32 } = m;
  const L = m.layout;
  const heap = new Heap(m, L.HEAP_BASE, L.MEM_PAGES * 65536);
  host.heap = heap;
  host.lastError = 0;
  const setErr = (e) => { host.lastError = e; };
  const handles = host.handles = new Map();
  let nextHandle = 0x100;
  host.newHandle = (obj) => { const h = nextHandle; nextHandle += 4; handles.set(h, obj); return h; };
  const K = 'KERNEL32.DLL!';
  const A = 'ADVAPI32.DLL!';

  const cmdLineStr = host.commandLine || '"' + GAME_DIR + '\\RcHcGame.dat"';
  const cmdLine = m.lowAlloc(cmdLineStr.length + 1);
  m.writeCStr(cmdLine, cmdLineStr);
  const envBlock = m.lowAlloc(8);
  let curDir = GAME_DIR;

  // --- process and CRT start-up ---------------------------------------------
  m.api(K + 'GetVersion', 0, () => 0xC0000004 | 0);    // Windows 95: major 4, minor 0, high bit = Win9x
  m.api(K + 'GetVersionExA', 1, (p) => {
    u32[(p + 4) >> 2] = 4;
    u32[(p + 8) >> 2] = 0;
    u32[(p + 12) >> 2] = 950;
    u32[(p + 16) >> 2] = 1;   // VER_PLATFORM_WIN32_WINDOWS
    u8[p + 20] = 0;
    return 1;
  });
  m.api(K + 'GetProcessVersion', 1, () => 0x00040000);
  m.api(K + 'GetCommandLineA', 0, () => cmdLine);
  m.api(K + 'GetStartupInfoA', 1, (p) => {
    u8.fill(0, p, p + 68);
    u32[p >> 2] = 68;
    return 0;
  });
  m.api(K + 'ExitProcess', 1, (code) => { throw new GameExit(code); });
  m.api(K + 'TerminateProcess', 2, (h, code) => { throw new GameExit(code); });
  m.api(K + 'FatalAppExitA', 2, (a, msg) => { throw new Error('FatalAppExit: ' + m.cstr(msg)); });
  m.api(K + 'GetCurrentProcess', 0, () => 0xFFFFFFFF);
  m.api(K + 'GetCurrentThread', 0, () => 0xFFFFFFFE);
  m.api(K + 'GetCurrentThreadId', 0, () => 1);
  m.api(K + 'GetLastError', 0, () => host.lastError);
  m.api(K + 'SetLastError', 1, (e) => { host.lastError = e; return 0; });
  m.api(K + 'SetErrorMode', 1, () => 0);
  m.api(K + 'SetUnhandledExceptionFilter', 1, () => 0);
  m.api(K + 'UnhandledExceptionFilter', 1, () => 0);
  m.api(K + 'SetConsoleCtrlHandler', 2, () => 1);
  m.api(K + 'RaiseException', 4, (code, flags, n, args) => {
    // C++ throw (0xE06D7363) or SEH. See docs/recompiler.md, Exceptions.
    return host.raiseException(code, flags, n, args);
  });
  m.api(K + 'RtlUnwind', 4, (frame, ip, rec, ret) => host.rtlUnwind(frame, ip, rec, ret));
  m.api(K + 'IsBadWritePtr', 2, (p) => (p < 0x10000 ? 1 : 0));
  m.api(K + 'IsBadReadPtr', 2, (p) => (p < 0x10000 ? 1 : 0));
  m.api(K + 'IsBadCodePtr', 1, (p) => (m.isCode(p) ? 0 : 1));
  m.api(K + 'SetHandleCount', 1, (n) => n);
  m.api(K + 'GetStdHandle', 1, () => 0);
  m.api(K + 'SetStdHandle', 2, () => 1);
  m.api(K + 'GetEnvironmentStrings', 0, () => envBlock);
  m.api(K + 'GetEnvironmentStringsW', 0, () => envBlock);
  m.api(K + 'FreeEnvironmentStringsA', 1, () => 1);
  m.api(K + 'FreeEnvironmentStringsW', 1, () => 1);
  m.api(K + 'SetEnvironmentVariableA', 2, () => 1);
  m.api(K + 'ExpandEnvironmentStringsA', 3, (src, dst, n) => {
    const s = m.cstr(src);
    if (dst && n) m.writeCStr(dst, s, n);
    return s.length + 1;
  });
  m.api(K + 'GetSystemInfo', 1, (p) => {
    u8.fill(0, p, p + 36);
    u32[(p + 4) >> 2] = 4096;
    u32[(p + 8) >> 2] = 0x00010000;
    u32[(p + 12) >> 2] = 0x7FFEFFFF;
    u32[(p + 16) >> 2] = 1;
    u32[(p + 20) >> 2] = 1;
    u32[(p + 24) >> 2] = 586;
    u32[(p + 28) >> 2] = 65536;
    u16[(p + 32) >> 1] = 5;
    return 0;
  });
  m.api(K + 'GlobalMemoryStatus', 1, (p) => {
    const free = Math.max(0, heap.pageBump - heap.bump);
    u32[p >> 2] = 32;
    u32[(p + 4) >> 2] = 50;
    u32[(p + 8) >> 2] = 64 << 20;
    u32[(p + 12) >> 2] = Math.min(free, 48 << 20);
    u32[(p + 16) >> 2] = 256 << 20;
    u32[(p + 20) >> 2] = Math.min(free, 128 << 20);
    u32[(p + 24) >> 2] = 2047 << 20;
    u32[(p + 28) >> 2] = Math.min(free, 1024 << 20);
    return 0;
  });
  m.api(K + 'MulDiv', 3, (a, b, c) => {
    a |= 0; b |= 0; c |= 0;
    if (!c) return -1;
    const r = (a * b) / c;
    return (r >= 0 ? Math.floor(r + 0.5) : Math.ceil(r - 0.5)) | 0;
  });
  m.api(K + 'InterlockedIncrement', 1, (p) => (u32[p >> 2] = (u32[p >> 2] + 1) >>> 0) | 0);
  m.api(K + 'InterlockedDecrement', 1, (p) => (u32[p >> 2] = (u32[p >> 2] - 1) >>> 0) | 0);
  m.api(K + 'InitializeCriticalSection', 1, () => 0);
  m.api(K + 'DeleteCriticalSection', 1, () => 0);
  m.api(K + 'EnterCriticalSection', 1, () => 0);
  m.api(K + 'LeaveCriticalSection', 1, () => 0);
  const tls = [];
  m.api(K + 'TlsAlloc', 0, () => { tls.push(0); return tls.length - 1; });
  m.api(K + 'TlsFree', 1, () => 1);
  m.api(K + 'TlsGetValue', 1, (i) => { host.lastError = 0; return tls[i] | 0; });
  m.api(K + 'TlsSetValue', 2, (i, v) => { tls[i] = v; return 1; });

  // Threads and events. The player never starts a thread as far as static analysis shows
  // (original-game-decompiled/annotations/key_functions.md); if it does, this fails loudly.
  m.api(K + 'CreateThread', 6, () => { throw new Error('CreateThread: the title started a thread; not supported'); });
  m.api(K + 'ExitThread', 1, () => { throw new Error('ExitThread'); });
  m.api(K + 'ResumeThread', 1, () => 0);
  m.api(K + 'SuspendThread', 1, () => 0);
  m.api(K + 'SetThreadPriority', 2, () => 1);
  m.api(K + 'CreateEventA', 4, (sec, manual, initial) => host.newHandle({ type: 'event', set: !!initial, manual: !!manual }));
  m.api(K + 'SetEvent', 1, (h) => { const e = handles.get(h); if (e) e.set = true; return 1; });
  m.api(K + 'WaitForSingleObject', 2, (h, ms) => {
    const e = handles.get(h);
    if (e && e.type === 'event') {
      if (e.set) { if (!e.manual) e.set = false; return 0; }
      if (ms === 0xFFFFFFFF) throw new Error('WaitForSingleObject would block forever on an event');
      host.sleep(ms);
      return 0x102;
    }
    return 0;
  });
  m.api(K + 'DuplicateHandle', 7, (sp, h, tp, out) => { if (out) u32[out >> 2] = h; return 1; });
  m.api(K + 'Sleep', 1, (ms) => { host.sleep(ms); return 0; });

  // --- heap -------------------------------------------------------------------
  m.api(K + 'HeapCreate', 3, () => 1);
  m.api(K + 'HeapDestroy', 1, () => 1);
  m.api(K + 'HeapAlloc', 3, (h, flags, size) => heap.alloc(size, (flags & 8) !== 0));
  m.api(K + 'HeapFree', 3, (h, flags, p) => { heap.release(p); return 1; });
  m.api(K + 'HeapReAlloc', 4, (h, flags, p, size) => heap.realloc(p, size, (flags & 8) !== 0));
  m.api(K + 'HeapSize', 3, (h, flags, p) => heap.sizeOf(p));
  m.api(K + 'VirtualAlloc', 4, (addr, size) => (addr || heap.pages(size)));
  m.api(K + 'VirtualFree', 3, (addr, size, type) => {
    if (type & 0x4000 && size) u8.fill(0, addr, addr + size);
    return 1;
  });

  // Global/Local memory. GMEM_MOVEABLE (2) blocks get a real handle: an 8-byte entry
  // [pointer, lock count | flags] in a table, so GlobalReAlloc can move the data while the
  // handle stays valid, as the title's Mac-style handle code expects. Fixed blocks are pointers.
  const HT_BASE = m.lowAlloc(0x80000);
  const HT_END = HT_BASE + 0x80000;
  let htNext = HT_BASE;
  const htFree = [];
  const isHandle = (h) => h >= HT_BASE && h < HT_END;
  const gAlloc = (flags, size) => {
    const zero = (flags & 0x40) !== 0;
    if (!(flags & 2)) return heap.alloc(size, zero);
    let h = htFree.pop();
    if (!h) {
      h = htNext;
      htNext += 8;
      if (htNext > HT_END) throw new Error('out of memory handles');
    }
    u32[h >> 2] = heap.alloc(size, zero);
    u32[(h + 4) >> 2] = 0;
    return h;
  };
  const gLock = (h) => {
    if (!isHandle(h)) return h;
    u32[(h + 4) >> 2]++;
    return u32[h >> 2];
  };
  const gUnlock = (h) => {
    if (!isHandle(h)) return 1;
    if (u32[(h + 4) >> 2] > 0) u32[(h + 4) >> 2]--;
    return u32[(h + 4) >> 2] ? 1 : 0;
  };
  const gFree = (h) => {
    if (!h) return 0;
    if (isHandle(h)) {
      heap.release(u32[h >> 2]);
      u32[h >> 2] = 0;
      htFree.push(h);
    } else heap.release(h);
    return 0;
  };
  const gSize = (h) => {
    const p = isHandle(h) ? u32[h >> 2] : h;
    return p && heap.valid(p) ? heap.sizeOf(p) : 0;
  };
  const gReAlloc = (h, size, flags) => {
    if (flags & 0x80) return h;             // GMEM_MODIFY: only attributes change
    const zero = (flags & 0x40) !== 0;
    if (isHandle(h)) {
      u32[h >> 2] = u32[h >> 2] ? heap.realloc(u32[h >> 2], size, zero) : heap.alloc(size, zero);
      return h;
    }
    return heap.realloc(h, size, zero);
  };
  const gHandle = (p) => {
    // pointer -> handle: scan is rare (GlobalHandle is used by the C runtime's GlobalFreePtr style macros)
    for (let h = HT_BASE; h < htNext; h += 8) if (u32[h >> 2] === p) return h;
    return p;
  };
  host.globalLock = gLock;
  host.globalUnlock = gUnlock;
  host.globalAlloc = gAlloc;
  host.globalSize = gSize;
  host.globalFree = gFree;
  for (const pre of ['Global', 'Local']) {
    m.api(K + pre + 'Alloc', 2, gAlloc);
    m.api(K + pre + 'Lock', 1, gLock);
    m.api(K + pre + 'Unlock', 1, gUnlock);
    m.api(K + pre + 'Free', 1, gFree);
    m.api(K + pre + 'Size', 1, gSize);
    m.api(K + pre + 'ReAlloc', 3, gReAlloc);
    m.api(K + pre + 'Handle', 1, gHandle);
    m.api(K + pre + 'Flags', 1, (h) => (isHandle(h) ? u32[(h + 4) >> 2] & 0xFF : 0));
  }
  const atoms = new Map();
  const atomNames = new Map();
  let nextAtom = 0xC000;
  host.addAtom = (s) => {
    const k = s.toUpperCase();
    if (!atoms.has(k)) { atoms.set(k, nextAtom); atomNames.set(nextAtom, s); nextAtom++; }
    return atoms.get(k);
  };
  host.atomName = (a) => atomNames.get(a);
  m.api(K + 'GlobalAddAtomA', 1, (p) => (p < 0x10000 ? p : host.addAtom(m.cstr(p))));
  m.api(K + 'GlobalDeleteAtom', 1, () => 0);
  m.api(K + 'GlobalGetAtomNameA', 3, (a, p, n) => m.writeCStr(p, atomNames.get(a) || '', n));

  // --- time ---------------------------------------------------------------------
  const msNow = () => host.nowMs() >>> 0;
  m.api(K + 'QueryPerformanceFrequency', 1, (p) => { u32[p >> 2] = 1000000; u32[(p + 4) >> 2] = 0; return 1; });
  m.api(K + 'QueryPerformanceCounter', 1, (p) => {
    const t = Math.floor(host.nowMs() * 1000);
    u32[p >> 2] = t % 4294967296;
    u32[(p + 4) >> 2] = Math.floor(t / 4294967296);
    return 1;
  });
  m.api(K + 'GetTickCount', 0, msNow);
  const writeSystemTime = (p, d) => {
    u16[p >> 1] = d.getUTCFullYear();
    u16[(p + 2) >> 1] = d.getUTCMonth() + 1;
    u16[(p + 4) >> 1] = d.getUTCDay();
    u16[(p + 6) >> 1] = d.getUTCDate();
    u16[(p + 8) >> 1] = d.getUTCHours();
    u16[(p + 10) >> 1] = d.getUTCMinutes();
    u16[(p + 12) >> 1] = d.getUTCSeconds();
    u16[(p + 14) >> 1] = d.getUTCMilliseconds();
  };
  // one Date for both: the game asks for the time every frame, and a new object each time is garbage on a thread
  // that is only collected when its heap's allowance is used up
  const clock = new Date(0);
  const nowDate = () => { clock.setTime(host.wallClockMs()); return clock; };
  m.api(K + 'GetSystemTime', 1, (p) => { writeSystemTime(p, nowDate()); return 0; });
  m.api(K + 'GetLocalTime', 1, (p) => {
    const d = nowDate();
    d.setTime(d.getTime() - d.getTimezoneOffset() * 60000);
    writeSystemTime(p, d);
    return 0;
  });
  const writeFileTime = (p, ms) => {
    const t = BigInt(Math.floor(ms)) * 10000n + 116444736000000000n;
    u32[p >> 2] = Number(t & 0xFFFFFFFFn);
    u32[(p + 4) >> 2] = Number(t >> 32n);
  };
  const copy8 = (a, b) => { u32[b >> 2] = u32[a >> 2]; u32[(b + 4) >> 2] = u32[(a + 4) >> 2]; return 1; };
  m.api(K + 'FileTimeToLocalFileTime', 2, copy8);
  m.api(K + 'LocalFileTimeToFileTime', 2, copy8);
  m.api(K + 'FileTimeToSystemTime', 2, (a, b) => {
    const t = (BigInt(u32[(a + 4) >> 2]) << 32n) | BigInt(u32[a >> 2]);
    writeSystemTime(b, new Date(Number((t - 116444736000000000n) / 10000n)));
    return 1;
  });
  m.api(K + 'SystemTimeToFileTime', 2, (a, b) => {
    const d = Date.UTC(u16[a >> 1], u16[(a + 2) >> 1] - 1, u16[(a + 6) >> 1], u16[(a + 8) >> 1], u16[(a + 10) >> 1], u16[(a + 12) >> 1], u16[(a + 14) >> 1]);
    writeFileTime(b, d);
    return 1;
  });
  m.api(K + 'GetTimeZoneInformation', 1, (p) => { u8.fill(0, p, p + 172); return 0; });

  // --- locale -------------------------------------------------------------------
  m.api(K + 'GetACP', 0, () => 1252);
  m.api(K + 'GetOEMCP', 0, () => 437);
  m.api(K + 'GetCPInfo', 2, (cp, p) => { u8.fill(0, p, p + 18); u32[p >> 2] = 1; u8[p + 4] = 0x3F; return 1; });
  m.api(K + 'IsValidCodePage', 1, () => 1);
  m.api(K + 'IsValidLocale', 2, () => 1);
  m.api(K + 'GetUserDefaultLCID', 0, () => 0x0409);
  m.api(K + 'GetThreadLocale', 0, () => 0x0409);
  const LOCALE = { 0x0E: '.', 0x0F: ',', 0x10: '3;0', 0x1D: '/', 0x1E: ':', 0x1F: 'M/d/yy', 0x20: 'dddd, MMMM dd, yyyy', 0x1003: 'h:mm:ss tt', 0x28: 'AM', 0x29: 'PM', 0x1004: '1252', 0x0B: '437', 0x01: '0409', 0x1001: 'English', 0x1002: 'United States', 0x03: 'ENU' };
  m.api(K + 'GetLocaleInfoA', 4, (lc, t, p, n) => {
    const s = LOCALE[t & 0xFFFF] || '';
    if (!n) return s.length + 1;
    m.writeCStr(p, s, n);
    return Math.min(s.length + 1, n);
  });
  m.api(K + 'GetLocaleInfoW', 4, (lc, t, p, n) => {
    const s = LOCALE[t & 0xFFFF] || '';
    if (!n) return s.length + 1;
    for (let k = 0; k < Math.min(s.length, n - 1); k++) m.view.setUint16(p + k * 2, s.charCodeAt(k), true);
    m.view.setUint16(p + Math.min(s.length, n - 1) * 2, 0, true);
    return Math.min(s.length + 1, n);
  });
  m.api(K + 'MultiByteToWideChar', 6, (cp, fl, src, cb, dst, cw) => {
    let n = cb;
    if (n === 0xFFFFFFFF) { n = 0; while (u8[src + n]) n++; n++; }
    if (!cw) return n;
    n = Math.min(n, cw);
    for (let k = 0; k < n; k++) m.view.setUint16(dst + k * 2, u8[src + k], true);
    return n;
  });
  m.api(K + 'WideCharToMultiByte', 8, (cp, fl, src, cw, dst, cb) => {
    let n = cw;
    if (n === 0xFFFFFFFF) { n = 0; while (m.view.getUint16(src + n * 2, true)) n++; n++; }
    if (!cb) return n;
    n = Math.min(n, cb);
    for (let k = 0; k < n; k++) {
      const c = m.view.getUint16(src + k * 2, true);
      u8[dst + k] = c < 256 ? c : 0x3F;
    }
    return n;
  });
  const ctype1 = (c) => {
    let f = 0;
    if (c >= 0x41 && c <= 0x5A) f |= 0x81 | 0x100;
    if (c >= 0x61 && c <= 0x7A) f |= 0x82 | 0x100;
    if (c >= 0x30 && c <= 0x39) f |= 0x84;
    if (c === 0x20 || (c >= 9 && c <= 13)) f |= 0x08;
    if (c === 0x20) f |= 0x40;
    if (c < 0x20 || c === 0x7F) f |= 0x20;
    if ((c >= 0x21 && c <= 0x2F) || (c >= 0x3A && c <= 0x40) || (c >= 0x5B && c <= 0x60) || (c >= 0x7B && c <= 0x7E)) f |= 0x10;
    if ((c >= 0x41 && c <= 0x46) || (c >= 0x61 && c <= 0x66)) f |= 0x80;
    if (c >= 0xC0 && c <= 0xDE && c !== 0xD7) f |= 0x101;
    if (c >= 0xDF && c <= 0xFF && c !== 0xF7) f |= 0x102;
    return f;
  };
  const strTypeA = (t, src, n, out) => {
    if (n === 0xFFFFFFFF) n = 0x7FFFFFFF;
    for (let k = 0; k < n; k++) {
      const c = u8[src + k];
      m.view.setUint16(out + k * 2, ctype1(c), true);
      if (!c && n === 0x7FFFFFFF) break;
    }
    return 1;
  };
  m.api(K + 'GetStringTypeA', 5, (lc, t, src, n, out) => strTypeA(t, src, n, out));
  m.api(K + 'GetStringTypeExA', 5, (lc, t, src, n, out) => strTypeA(t, src, n, out));
  m.api(K + 'GetStringTypeW', 4, (t, src, n, out) => {
    if (n === 0xFFFFFFFF) n = 0x7FFFFFFF;
    for (let k = 0; k < n; k++) {
      const c = m.view.getUint16(src + k * 2, true);
      m.view.setUint16(out + k * 2, ctype1(c), true);
      if (!c && n === 0x7FFFFFFF) break;
    }
    return 1;
  });
  const lcmapChar = (c, fl) => {
    if (fl & 0x200 && ((c >= 0x61 && c <= 0x7A) || (c >= 0xE0 && c <= 0xFE && c !== 0xF7))) return c - 32;
    if (fl & 0x100 && ((c >= 0x41 && c <= 0x5A) || (c >= 0xC0 && c <= 0xDE && c !== 0xD7))) return c + 32;
    return c;
  };
  m.api(K + 'LCMapStringA', 6, (lc, fl, src, n, dst, cb) => {
    if (n === 0xFFFFFFFF) { n = 0; while (u8[src + n]) n++; n++; }
    if (!cb) return n;
    n = Math.min(n, cb);
    for (let k = 0; k < n; k++) u8[dst + k] = lcmapChar(u8[src + k], fl);
    return n;
  });
  m.api(K + 'LCMapStringW', 6, (lc, fl, src, n, dst, cb) => {
    if (n === 0xFFFFFFFF) { n = 0; while (m.view.getUint16(src + n * 2, true)) n++; n++; }
    if (!cb) return n;
    n = Math.min(n, cb);
    for (let k = 0; k < n; k++) m.view.setUint16(dst + k * 2, lcmapChar(m.view.getUint16(src + k * 2, true), fl), true);
    return n;
  });
  const latin1At = (p, n) => { let s = ''; for (let k = 0; k < n; k++) s += String.fromCharCode(u8[p + k]); return s; };
  host.latin1At = latin1At;
  m.api(K + 'CompareStringA', 6, (lc, fl, a, na, b, nb) => {
    const sa = na === 0xFFFFFFFF ? m.cstr(a) : latin1At(a, na);
    const sb = nb === 0xFFFFFFFF ? m.cstr(b) : latin1At(b, nb);
    const x = fl & 1 ? sa.toLowerCase() : sa;
    const y = fl & 1 ? sb.toLowerCase() : sb;
    return x < y ? 1 : x > y ? 3 : 2;
  });
  m.api(K + 'CompareStringW', 6, () => 2);
  m.api(K + 'lstrlenA', 1, (p) => { if (!p) return 0; let n = 0; while (u8[p + n]) n++; return n; });
  m.api(K + 'lstrcpyA', 2, (d, s) => { let k = 0; do { u8[d + k] = u8[s + k]; } while (u8[s + k++]); return d; });
  m.api(K + 'lstrcpynA', 3, (d, s, n) => {
    if (!n) return d;
    let k = 0;
    while (k < n - 1 && u8[s + k]) { u8[d + k] = u8[s + k]; k++; }
    u8[d + k] = 0;
    return d;
  });
  m.api(K + 'lstrcatA', 2, (d, s) => { let e = d; while (u8[e]) e++; let k = 0; do { u8[e + k] = u8[s + k]; } while (u8[s + k++]); return d; });
  const cmp = (a, b) => (a < b ? -1 : a > b ? 1 : 0);
  m.api(K + 'lstrcmpA', 2, (a, b) => cmp(m.cstr(a), m.cstr(b)));
  m.api(K + 'lstrcmpiA', 2, (a, b) => cmp(m.cstr(a).toLowerCase(), m.cstr(b).toLowerCase()));
  m.api(K + 'FormatMessageA', 7, (fl, src, id, lang, buf, n) => {
    const s = 'Error ' + id;
    if (fl & 0x100) { const p = heap.alloc(s.length + 1); m.writeCStr(p, s); u32[buf >> 2] = p; } else m.writeCStr(buf, s, n);
    return s.length;
  });

  // --- modules and resources ----------------------------------------------------
  const mods = m.meta.modules.map((x) => ({ ...x, loaded: !x.isDll, refs: 0 }));
  host.modules = mods;
  const MAIN = mods[0];
  const modByBase = (h) => (h ? mods.find((x) => x.base === h) : MAIN);
  host.modByBase = modByBase;
  const SYSTEM = new Map();          // fake handles for system DLLs that exist on a Windows 95 machine
  for (const [k, name] of ['KERNEL32', 'USER32', 'GDI32', 'ADVAPI32', 'WINMM', 'COMDLG32', 'SHELL32', 'COMCTL32', 'WINSPOOL'].entries()) SYSTEM.set(name, 0x7F000000 + k * 0x10000);
  const modulePath = (x) => GAME_DIR + '\\' + x.file;
  m.api(K + 'GetModuleHandleA', 1, (p) => {
    if (!p) return MAIN.base;
    const n = m.cstr(p).split(/[\\/]/).pop().toUpperCase();
    const x = mods.find((y) => y.file.toUpperCase() === n || y.file.toUpperCase() === n + '.EXE');
    if (x && x.loaded) return x.base;
    return SYSTEM.get(n.replace(/\.(DLL|DRV)$/, '')) || 0;
  });
  m.api(K + 'GetModuleFileNameA', 3, (h, p, n) => m.writeCStr(p, modulePath(modByBase(h) || MAIN), n));
  m.api(K + 'LoadLibraryA', 1, (p) => {
    const full = m.cstr(p);
    const n = full.split(/[\\/]/).pop().toUpperCase();
    const x = mods.find((y) => y.isDll && y.file.toUpperCase() === n);
    if (x) {
      x.refs++;
      if (!x.loaded) {
        x.loaded = true;
        host.log('LoadLibrary ' + full + ' -> ' + x.name + ' at ' + x.base.toString(16));
        if (x.entry && !m.call(x.entry, [x.base, 1, 0])) {   // DllMain(DLL_PROCESS_ATTACH)
          x.loaded = false;
          setErr(1114);
          return 0;
        }
      }
      return x.base;
    }
    const virt = host.virtualLibs.get(n);
    if (virt) { host.log('LoadLibrary ' + full + ' -> host library'); return virt.handle; }
    const sys = SYSTEM.get(n.replace(/\.(DLL|DRV)$/, ''));
    if (sys) return sys;
    // Not part of this build: QuickTime (QTIM32/CMGR32), Video for Windows (MSVFW32), CTL3D32, version.dll...
    host.log('LoadLibrary ' + full + ' -> not available');
    host.missingLibraries.add(n);
    setErr(126);
    return 0;
  });
  host.missingLibraries = new Set();
  // DLLs implemented by the host: name (upper case) -> { handle, procs: Map(name -> thunk address) }
  host.virtualLibs = host.virtualLibs || new Map();
  m.api(K + 'FreeLibrary', 1, () => 1);
  m.api(K + 'GetProcAddress', 2, (h, name) => {
    for (const v of host.virtualLibs.values()) {
      if (v.handle === h) {
        const fn = name >= 0x10000 ? v.procs.get(m.cstr(name)) : 0;
        if (!fn) host.log('GetProcAddress ' + (name >= 0x10000 ? m.cstr(name) : '#' + name) + ' -> not in host library');
        return fn || 0;
      }
    }
    const x = mods.find((y) => y.base === h);
    if (x) {
      const e = name < 0x10000 ? x.exports.find((y) => y[0] === name) : x.exports.find((y) => y[1] === m.cstr(name));
      return e ? e[2] : 0;
    }
    for (const [dll, base] of SYSTEM) {
      if (base === h && name >= 0x10000) {
        const full = dll + (dll === 'WINSPOOL' ? '.DRV!' : '.DLL!') + m.cstr(name);
        if (m._ids.has(full) && m.bound.has(full)) return L.THUNK_BASE + m._ids.get(full);
        host.log('GetProcAddress ' + full + ' -> not available');
        return 0;
      }
    }
    return 0;
  });

  // Resources are read from the module image in memory (PE resource directory).
  const resDir = (x) => {
    const pe = x.base + u32[(x.base + 0x3C) >> 2];
    return u32[(pe + 24 + 96 + 2 * 8) >> 2] ? x.base + u32[(pe + 24 + 96 + 2 * 8) >> 2] : 0;
  };
  const resName = (root, p) => {
    // p: offset of a counted UTF-16 string
    const n = u16[(root + p) >> 1];
    let s = '';
    for (let k = 0; k < n; k++) s += String.fromCharCode(m.view.getUint16(root + p + 2 + k * 2, true));
    return s;
  };
  const resFind = (root, dir, key) => {
    // key: number (id) or string (name). Returns the entry's offset field or 0.
    const named = u16[(dir + 12) >> 1];
    const ids = u16[(dir + 14) >> 1];
    for (let k = 0; k < named + ids; k++) {
      const e = dir + 16 + k * 8;
      const nm = u32[e >> 2];
      if (typeof key === 'number') {
        if (!(nm & 0x80000000) && nm === key) return u32[(e + 4) >> 2];
      } else if ((nm & 0x80000000) && resName(root, nm & 0x7FFFFFFF).toUpperCase() === key) return u32[(e + 4) >> 2];
    }
    return 0;
  };
  const resKey = (p) => {
    if (p < 0x10000) return p;
    const s = m.cstr(p);
    return s[0] === '#' ? parseInt(s.slice(1), 10) : s.toUpperCase();
  };
  host.findResource = (hMod, name, type) => {
    const x = modByBase(hMod);
    if (!x) return 0;
    const root = resDir(x);
    if (!root) return 0;
    let o = resFind(root, root, type);
    if (!(o & 0x80000000)) return 0;
    o = resFind(root, root + (o & 0x7FFFFFFF), name);
    if (!(o & 0x80000000)) return 0;
    const dir = root + (o & 0x7FFFFFFF);
    if (u16[(dir + 12) >> 1] + u16[(dir + 14) >> 1] === 0) return 0;
    const first = u32[(dir + 16 + 4) >> 2];      // first language
    return root + first;                          // -> IMAGE_RESOURCE_DATA_ENTRY
  };
  /** Returns {ptr, size} of a resource, or null. name/type: id or upper-case string. */
  host.resource = (hMod, name, type) => {
    const e = host.findResource(hMod, name, type);
    if (!e) return null;
    const x = modByBase(hMod);
    return { ptr: x.base + u32[e >> 2], size: u32[(e + 4) >> 2], entry: e, module: x };
  };
  const rsrcModule = new Map();
  m.api(K + 'FindResourceA', 3, (hMod, name, type) => {
    const e = host.findResource(hMod, resKey(name), resKey(type));
    if (e) rsrcModule.set(e, modByBase(hMod));
    else setErr(1814);
    return e;
  });
  m.api(K + 'LoadResource', 2, (hMod, e) => {
    if (!e) return 0;
    const x = rsrcModule.get(e) || modByBase(hMod);
    return x.base + u32[e >> 2];
  });
  m.api(K + 'LockResource', 1, (p) => p);
  m.api(K + 'SizeofResource', 2, (hMod, e) => (e ? u32[(e + 4) >> 2] : 0));

  // --- files --------------------------------------------------------------------
  const full = (p) => normalizePath(p, curDir);
  host.fullPath = full;
  const openFile = (path, access, disp) => {
    const write = (access & 0x40000000) !== 0;
    const st = vfs.stat(path);
    if (!st && (disp === 3 || disp === 5)) { setErr(2); return INVALID_HANDLE; }
    if (st && st.dir) { setErr(5); return INVALID_HANDLE; }
    if (st && disp === 1) { setErr(80); return INVALID_HANDLE; }
    // Files of the original installation are mounted read-only. Opening one for writing makes a
    // private in-memory copy (kept by the platform), so the installation itself is never changed.
    if (write && st && st.readOnly) vfs.makeWritable(st);
    const f = { type: 'file', path, pos: 0, write, st: null };
    if (disp === 2 || disp === 5 || !st) vfs.create(path);
    f.st = vfs.stat(path);
    setErr(0);
    return host.newHandle(f);
  };
  m.api(K + 'CreateFileA', 7, (pName, access, share, sec, disp) => {
    const path = full(m.cstr(pName));
    const h = openFile(path, access, disp);
    if (h !== INVALID_HANDLE && /\.WAV$/i.test(path)) host.lastWav = path;      // for the sound trace (dsound.js)
    if (host.traceFiles) host.log('CreateFile ' + path + ' disp ' + disp + ' -> ' + (h === INVALID_HANDLE ? 'not found' : h));
    return h;
  });
  const readAt = (f, buf, n) => {
    const size = vfs.size(f.st);
    const got = Math.max(0, Math.min(n, size - f.pos));
    if (got) vfs.read(f.st, f.pos, got, u8, buf);
    f.pos += got;
    return got;
  };
  const writeAt = (f, buf, n) => {
    vfs.write(f.st, f.pos, u8.subarray(buf, buf + n));
    f.pos += n;
    f.dirty = true;
    return n;
  };
  m.api(K + 'ReadFile', 5, (h, buf, n, pGot) => {
    const f = handles.get(h);
    if (!f || f.type !== 'file') { setErr(6); if (pGot) u32[pGot >> 2] = 0; return 0; }
    const got = readAt(f, buf, n);
    if (pGot) u32[pGot >> 2] = got;
    return 1;
  });
  m.api(K + 'WriteFile', 5, (h, buf, n, pDone) => {
    const f = handles.get(h);
    if (!f || f.type !== 'file') {
      if (pDone) u32[pDone >> 2] = n;      // stdout/stderr of the C runtime
      if (n) host.log('[stdout] ' + latin1At(buf, Math.min(n, 400)));
      return 1;
    }
    writeAt(f, buf, n);
    if (pDone) u32[pDone >> 2] = n;
    return 1;
  });
  const seek = (f, dist, method) => {
    const base = method === 0 ? 0 : method === 1 ? f.pos : vfs.size(f.st);
    const np = base + dist;
    if (np < 0) { setErr(131); return -1; }
    f.pos = np;
    return np;
  };
  m.api(K + 'SetFilePointer', 4, (h, dist, pHigh, method) => {
    const f = handles.get(h);
    if (!f || f.type !== 'file') { setErr(6); return 0xFFFFFFFF; }
    const r = seek(f, dist | 0, method);
    if (r >= 0) setErr(0);
    return r >>> 0;
  });
  m.api(K + 'SetEndOfFile', 1, (h) => { const f = handles.get(h); if (f) { vfs.truncate(f.st, f.pos); f.dirty = true; } return 1; });
  m.api(K + 'FlushFileBuffers', 1, (h) => { const f = handles.get(h); if (f && f.dirty) { vfs.flush(f.st); f.dirty = false; } return 1; });
  m.api(K + 'GetFileSize', 2, (h, pHigh) => {
    const f = handles.get(h);
    if (pHigh) u32[pHigh >> 2] = 0;
    return f && f.type === 'file' ? vfs.size(f.st) : 0xFFFFFFFF;
  });
  m.api(K + 'GetFileType', 1, (h) => (handles.has(h) ? 1 : 0));
  m.api(K + 'GetFileTime', 4, (h, c, a, w) => {
    for (const p of [c, a, w]) if (p) writeFileTime(p, Date.UTC(1999, 6, 15, 16, 3));
    return 1;
  });
  m.api(K + 'SetFileTime', 4, () => 1);
  m.api(K + 'LockFile', 5, () => 1);
  m.api(K + 'UnlockFile', 5, () => 1);
  m.api(K + 'CloseHandle', 1, (h) => {
    const f = handles.get(h);
    if (f && f.type === 'file' && f.dirty) vfs.flush(f.st);
    handles.delete(h);
    return 1;
  });
  m.api(K + 'DeleteFileA', 1, (p) => (vfs.remove(full(m.cstr(p))) ? 1 : (setErr(2), 0)));
  m.api(K + 'MoveFileA', 2, (a, b) => (vfs.rename(full(m.cstr(a)), full(m.cstr(b))) ? 1 : (setErr(2), 0)));
  m.api(K + 'GetFileAttributesA', 1, (p) => {
    const st = vfs.stat(full(m.cstr(p)));
    if (!st) { setErr(2); return 0xFFFFFFFF; }
    return st.dir ? 0x10 : st.readOnly ? 0x01 : 0x20;
  });
  m.api(K + 'SetFileAttributesA', 2, () => 1);
  m.api(K + 'GetCurrentDirectoryA', 2, (n, p) => m.writeCStr(p, curDir, n));
  m.api(K + 'GetSystemDirectoryA', 2, (p, n) => m.writeCStr(p, 'C:\\WINDOWS\\SYSTEM', n));
  // The game asks for the full path of ".\Settings\GAME.INI" every frame while a world is played (seen in the Node
  // runner, return address 0x60D770). The answer to the name asked last is kept and the name compared in memory, so
  // a repeated question makes no strings (reading the name alone made one per character).
  let lastName = null, lastDir = '', lastFull = '';
  const sameName = (p) => { if (!lastName) return false; for (let k = 0; k < lastName.length; k++) if (u8[p + k] !== lastName[k]) return false; return u8[p + lastName.length] === 0; };
  m.api(K + 'GetFullPathNameA', 4, (pName, n, buf, pFile) => {
    let s;
    if (curDir === lastDir && sameName(pName)) s = lastFull;
    else {
      const name = m.cstr(pName);
      s = full(name);
      lastName = new Uint8Array(name.length);
      for (let k = 0; k < name.length; k++) lastName[k] = u8[pName + k];
      lastDir = curDir; lastFull = s;
    }
    m.writeCStr(buf, s, n);
    if (pFile) u32[pFile >> 2] = buf + s.lastIndexOf('\\') + 1;
    return s.length;
  });
  m.api(K + 'GetShortPathNameA', 3, (src, dst, n) => { const s = m.cstr(src); m.writeCStr(dst, s, n); return s.length; });
  m.api(K + 'GetTempFileNameA', 4, (dir, pre, uniq, out) => { m.writeCStr(out, 'C:\\WINDOWS\\TEMP\\' + m.cstr(pre) + '0001.TMP'); return 1; });
  m.api(K + 'GetDriveTypeA', 1, (p) => {
    const r = (p ? m.cstr(p) : curDir).slice(0, 1).toUpperCase();
    const d = vfs.drives[r];
    return d ? d.type : 1;       // 3 fixed, 5 CD-ROM, 1 no root
  });
  m.api(K + 'GetVolumeInformationA', 8, (pRoot, pName, nName, pSerial, pMaxLen, pFlags, pFs, nFs) => {
    const r = (pRoot ? m.cstr(pRoot) : curDir).slice(0, 1).toUpperCase();
    const d = vfs.drives[r];
    if (!d) { setErr(21); return 0; }
    if (pName) m.writeCStr(pName, d.label, nName);
    if (pSerial) u32[pSerial >> 2] = d.serial;
    if (pMaxLen) u32[pMaxLen >> 2] = d.type === 5 ? 110 : 255;
    if (pFlags) u32[pFlags >> 2] = d.type === 5 ? 0x80000 : 6;
    if (pFs) m.writeCStr(pFs, d.type === 5 ? 'CDFS' : 'FAT', nFs);
    return 1;
  });
  m.api(K + 'GetDiskFreeSpaceA', 5, (pRoot, a, b, c, d) => {
    u32[a >> 2] = 8; u32[b >> 2] = 512; u32[c >> 2] = 50000; u32[d >> 2] = 100000;
    return 1;
  });
  m.api(K + 'DeviceIoControl', 8, () => { setErr(1); return 0; });   // no VWIN32/CD-ROM ioctl: callers fall back
  const finds = new Map();
  const fillFind = (p, e) => {
    u8.fill(0, p, p + 318);
    u32[p >> 2] = e.dir ? 0x10 : 0x20;
    for (const o of [4, 12, 20]) writeFileTime(p + o, Date.UTC(1999, 6, 15, 16, 3));
    u32[(p + 32) >> 2] = e.size;
    m.writeCStr(p + 44, e.name, 260);
    m.writeCStr(p + 304, e.name.length <= 12 ? e.name : '', 14);
  };
  m.api(K + 'FindFirstFileA', 2, (pName, pData) => {
    const pattern = full(m.cstr(pName));
    const list = vfs.find(pattern);
    if (host.traceFiles) host.log('FindFirstFile ' + pattern + ' -> ' + list.length);
    if (!list.length) { setErr(2); return INVALID_HANDLE; }
    const h = host.newHandle({ type: 'find', list, k: 1 });
    fillFind(pData, list[0]);
    return h;
  });
  m.api(K + 'FindNextFileA', 2, (h, pData) => {
    const f = handles.get(h);
    if (!f || f.k >= f.list.length) { setErr(18); return 0; }
    fillFind(pData, f.list[f.k++]);
    return 1;
  });
  m.api(K + 'FindClose', 1, (h) => { handles.delete(h); return 1; });
  // 16-bit style file calls used by the plug-ins and OpenFile.
  m.api(K + '_lopen', 2, (p, mode) => openFile(full(m.cstr(p)), mode & 3 ? 0xC0000000 : 0x80000000, 3));
  m.api(K + '_lcreat', 2, (p) => openFile(full(m.cstr(p)), 0xC0000000, 2));
  m.api(K + '_lclose', 1, (h) => { const f = handles.get(h); if (f && f.dirty) vfs.flush(f.st); handles.delete(h); return 0; });
  const lread = (h, buf, n) => { const f = handles.get(h); return f ? readAt(f, buf, n) : -1; };
  const lwrite = (h, buf, n) => { const f = handles.get(h); return f ? writeAt(f, buf, n) : -1; };
  m.api(K + '_lread', 3, lread);
  m.api(K + '_hread', 3, lread);
  m.api(K + '_hwrite', 3, lwrite);
  m.api(K + '_llseek', 3, (h, off, org) => { const f = handles.get(h); return f ? seek(f, off | 0, org) : -1; });
  m.api(K + 'OpenFile', 3, (pName, pOf, style) => {
    const path = full(m.cstr(pName));
    if (pOf) { u8.fill(0, pOf, pOf + 136); u8[pOf] = 136; m.writeCStr(pOf + 8, path, 128); }
    if (style & 0x4000) return vfs.stat(path) ? 1 : (setErr(2), -1);          // OF_EXIST
    if (style & 0x0200) return vfs.remove(path) ? 1 : -1;                      // OF_DELETE
    const h = openFile(path, style & 3 ? 0xC0000000 : 0x80000000, style & 0x1000 ? 2 : 3);
    return h === INVALID_HANDLE ? -1 : h;
  });
  m.api(K + 'WinExec', 2, (p) => { host.log('WinExec ' + m.cstr(p) + ' ignored'); return 2; });

  // --- profile files and registry: one persisted key/value store -----------------
  const store = host.settingsStore;      // Map<string,string>, persisted by the platform
  const iniKey = (file, sec, key) => 'ini|' + file.toUpperCase() + '|' + sec.toUpperCase() + '|' + key.toUpperCase();
  const iniGet = (file, sec, key, def) => { const v = store.get(iniKey(file, sec, key)); return v === undefined ? def : v; };
  const iniName = (p) => (p ? m.cstr(p).split(/[\\/]/).pop() : 'WIN.INI');
  m.api(K + 'GetPrivateProfileStringA', 6, (sec, key, def, buf, n, file) => {
    const v = sec && key ? iniGet(iniName(file), m.cstr(sec), m.cstr(key), def ? m.cstr(def) : '') : '';
    return m.writeCStr(buf, v, n);
  });
  m.api(K + 'GetPrivateProfileIntA', 4, (sec, key, def, file) => {
    const v = iniGet(iniName(file), m.cstr(sec), m.cstr(key), null);
    const n = v === null ? NaN : parseInt(v, 10);
    return Number.isNaN(n) ? def : n;
  });
  m.api(K + 'WritePrivateProfileStringA', 4, (sec, key, val, file) => {
    if (!sec || !key) return 1;
    const k = iniKey(iniName(file), m.cstr(sec), m.cstr(key));
    if (val) store.set(k, m.cstr(val)); else store.delete(k);
    host.saveSettings();
    return 1;
  });
  m.api('USER32.DLL!GetProfileStringA', 5, (sec, key, def, buf, n) => m.writeCStr(buf, iniGet('WIN.INI', m.cstr(sec), m.cstr(key), def ? m.cstr(def) : ''), n));

  const regKeys = new Map();
  const ROOTS = { 0x80000000: 'HKCR', 0x80000001: 'HKCU', 0x80000002: 'HKLM', 0x80000003: 'HKU' };
  const regPath = (h, sub) => {
    const base = ROOTS[h] || regKeys.get(h);
    if (base === undefined) return null;
    const s = sub ? m.cstr(sub).replace(/^\\+|\\+$/g, '') : '';
    return (s ? base + '\\' + s : base).toUpperCase();
  };
  const regExists = (path) => {
    if (store.has('regkey|' + path)) return true;
    for (const k of store.keys()) if (k.startsWith('reg|' + path + '|') || k.startsWith('regkey|' + path + '\\')) return true;
    return false;
  };
  const regOpen = (h, sub, out, create) => {
    const path = regPath(h, sub);
    if (path === null) return 6;
    if (!create && !regExists(path)) return 2;
    if (create && !store.has('regkey|' + path)) { store.set('regkey|' + path, '1'); host.saveSettings(); }
    const k = 0x52000000 + regKeys.size * 4 + 4;
    regKeys.set(k, path);
    u32[out >> 2] = k;
    return 0;
  };
  m.api(A + 'RegOpenKeyA', 3, (h, sub, out) => regOpen(h, sub, out, false));
  m.api(A + 'RegOpenKeyExA', 5, (h, sub, opt, sam, out) => regOpen(h, sub, out, false));
  m.api(A + 'RegCreateKeyA', 3, (h, sub, out) => regOpen(h, sub, out, true));
  m.api(A + 'RegCreateKeyExA', 9, (h, sub, r, cls, opt, sam, sec, out, disp) => { if (disp) u32[disp >> 2] = 1; return regOpen(h, sub, out, true); });
  m.api(A + 'RegCloseKey', 1, (h) => { regKeys.delete(h); return 0; });
  const regRead = (path, name, pType, pData, pSize) => {
    const v = store.get('reg|' + path + '|' + name.toUpperCase());
    if (v === undefined) return 2;
    const [type, payload] = [v.slice(0, 1), v.slice(2)];
    let bytes;
    if (type === 's') { bytes = new Uint8Array(payload.length + 1); for (let k = 0; k < payload.length; k++) bytes[k] = payload.charCodeAt(k) & 255; } else if (type === 'd') { bytes = new Uint8Array(new Uint32Array([Number(payload)]).buffer); } else bytes = Uint8Array.from(payload.split(',').filter(Boolean).map(Number));
    if (pType) u32[pType >> 2] = type === 's' ? 1 : type === 'd' ? 4 : 3;
    if (pSize) {
      const room = u32[pSize >> 2];
      u32[pSize >> 2] = bytes.length;
      if (pData) { if (room < bytes.length) return 234; u8.set(bytes, pData); }
    }
    return 0;
  };
  const regWrite = (path, name, type, pData, size) => {
    let v;
    if (type === 1 || type === 2) v = 's:' + m.cstr(pData);
    else if (type === 4) v = 'd:' + u32[pData >> 2];
    else v = 'b:' + Array.from(u8.subarray(pData, pData + size)).join(',');
    store.set('reg|' + path + '|' + name.toUpperCase(), v);
    host.saveSettings();
    return 0;
  };
  m.api(A + 'RegQueryValueExA', 6, (h, name, r, pType, pData, pSize) => { const p = regPath(h, 0); return p === null ? 6 : regRead(p, name ? m.cstr(name) : '', pType, pData, pSize); });
  m.api(A + 'RegQueryValueA', 4, (h, sub, pData, pSize) => { const p = regPath(h, sub); return p === null ? 6 : regRead(p, '', 0, pData, pSize); });
  m.api(A + 'RegSetValueExA', 6, (h, name, r, type, pData, size) => { const p = regPath(h, 0); return p === null ? 6 : regWrite(p, name ? m.cstr(name) : '', type, pData, size); });
  m.api(A + 'RegSetValueA', 5, (h, sub, type, pData) => { const p = regPath(h, sub); return p === null ? 6 : regWrite(p, '', 1, pData, 0); });
  m.api(A + 'RegDeleteKeyA', 2, () => 0);
  m.api(A + 'RegDeleteValueA', 2, (h, name) => { const p = regPath(h, 0); if (p !== null) { store.delete('reg|' + p + '|' + m.cstr(name).toUpperCase()); host.saveSettings(); } return 0; });
  // Save states (snapshot.js): the allocator, open files and the files the game has written.
  const PLAYER_FILE = /\\SETTINGS\\PLAYER(\d+)\.INI$/i;
  // What the menu owns in a player's file and may have changed since the state was made: the
  // name (Spelerlijst) and the two volumes (Instellingen; the original menu writes them when it
  // starts the game, RcHcMenu.dat 0x566768). These stay as they are now; the rest of the file is
  // the state's, with the game it belongs to.
  // And the keys (Instellingen -> Toetsen instellen writes the [KeyBinds] lines of the form's actions,
  // source/web/keybinds.js). The game holds its bindings in memory, read from the file when a world is set
  // up (0x4D5E74 -> 0x53DC20), so a state brings the keys of its day along: when a line differs, the file
  // gets the menu's and host.keysChanged asks for the game's own loader before the next pass (move.js).
  const BIND_KEYS = ['MoveForward', 'MoveBack', 'TurnLeft', 'TurnRight', 'MoveLeft', 'MoveRight', 'Fire', 'Jump', 'Walk', 'Weapon1', 'Weapon2', 'Weapon3'].map((k) => ['KeyBinds', k]);
  const MENU_KEYS = [['General', 'PlayerName'], ['Sound', 'MusicVolume'], ['Sound', 'SoundVolume'], ...BIND_KEYS];
  const keepMenuKeys = (saved, now) => {
    const nowText = latin1Decode(now);
    let text = latin1Decode(saved), changed = false;
    for (const [sec, key] of MENU_KEYS) { const v = readIni(nowText, sec, key); if (v !== undefined && readIni(text, sec, key) !== v) { text = editIni(text, sec, key, v); changed = true; if (sec === 'KeyBinds') host.keysChanged = true; if (sec === 'Sound') host.volumesChanged = true; } }      // volumesChanged: volume.js hands the menu's volumes to the game's own setters
    return changed ? latin1Encode(text) : saved;
  };
  const bin2str = (b) => { let t = ''; for (let k = 0; k < b.length; k += 8192) t += String.fromCharCode.apply(null, b.subarray(k, k + 8192)); return t; };
  const str2bin = (t) => { const b = new Uint8Array(t.length); for (let k = 0; k < t.length; k++) b[k] = t.charCodeAt(k); return b; };
  if (host.snap) host.snap.add('kernel32', () => ({
    heap: { bump: heap.bump, highWater: heap.highWater, small: [...heap.small].map(([k, v]) => [k, v.slice()]), large: heap.large.map((x) => x.slice()), pageBump: heap.pageBump, bytesInUse: heap.bytesInUse },
    nextHandle, curDir, lastError: host.lastError,
    handles: [...handles].filter(([, f]) => f && f.type === 'file').map(([h, f]) => [h, { path: f.path, pos: f.pos, write: f.write }]),
    files: [...vfs.files.values()].filter((f) => f.data && !f.readOnly).map((f) => [f.path, bin2str(f.data.subarray(0, f.size)), !!f.persist]),
  }), (st) => {
    Object.assign(heap, { bump: st.heap.bump, highWater: st.heap.highWater, pageBump: st.heap.pageBump, bytesInUse: st.heap.bytesInUse });
    heap.small = new Map(st.heap.small.map(([k, v]) => [k, v.slice()]));
    heap.large = st.heap.large.map((x) => x.slice());
    nextHandle = st.nextHandle; curDir = st.curDir; host.lastError = st.lastError;
    // The written files. The state's copies are the truth for this game's own files and for
    // the player who is playing (host.options.launch.player; 1 without, as ini.js). Every
    // other Player<N>.ini on the drive belongs to somebody else and stays as the booted game
    // got it from the platform: an old copy from the state would put that player's progress
    // back, and bring back a player who was deleted since. Nothing of those is written out.
    const own = (host.options.launch || {}).player || 1;
    const booted = new Map();
    for (const f of [...vfs.files.values()]) if (f.data && !f.readOnly) { booted.set(f.path, { data: f.data.slice(0, f.size), persist: !!f.persist }); vfs.files.delete(f.path); }
    for (const [path, text, persist] of st.files) {
      let data = str2bin(text);
      const pl = PLAYER_FILE.exec(path);
      if (pl && Number(pl[1]) !== own) continue;
      if (pl && booted.has(path)) data = keepMenuKeys(data, booted.get(path).data);
      vfs.add(path, data, { persist });
      if (persist && vfs.onPersist && !/\.LOG$/.test(path)) vfs.onPersist(path, data);
    }
    for (const [path, f] of booted) { const pl = PLAYER_FILE.exec(path); if (pl && Number(pl[1]) !== own) vfs.add(path, f.data, { persist: f.persist }); }
    handles.clear();
    for (const [h, f] of st.handles) { const stt = vfs.stat(f.path); if (stt) handles.set(h, { type: 'file', path: f.path, pos: f.pos, write: f.write, st: stt }); }
  }, {
    // what load() and the memory ranges of a state depend on (snapshot.js check()): refused here, nothing is written
    check: (st) => {
      const h = st.heap, int = Number.isInteger;
      if (!h || !int(h.bump) || !int(h.highWater) || !int(h.pageBump) || !int(h.bytesInUse) || !Array.isArray(h.small) || !Array.isArray(h.large)) return 'heap';
      if (h.highWater < L.HEAP_BASE || h.bump < L.HEAP_BASE || h.bump > heap.limit || h.pageBump > heap.limit || h.pageBump & 0xFFF || ((h.highWater + 0xFFF) & ~0xFFF) > h.pageBump) return 'heap bounds';
      if (!int(st.nextHandle) || typeof st.curDir !== 'string' || !Array.isArray(st.handles) || !Array.isArray(st.files)) return 'files';
      if (!st.files.every((f) => Array.isArray(f) && typeof f[0] === 'string' && typeof f[1] === 'string')) return 'file list';
      if (!st.handles.every((x) => Array.isArray(x) && int(x[0]) && x[1] && typeof x[1].path === 'string')) return 'handle list';
      return null;
    },
  });
  m.api(A + 'GetFileSecurityA', 5, () => 0);
  m.api(A + 'SetFileSecurityA', 3, () => 1);
}
