// KERNEL32 additions for RcHcGame.dat on top of kernel32.js.
import { normalizePath } from './vfs.js';
import { editIni, latin1Decode, latin1Encode } from './ini.js';

export function installKernel32x(m, host) {
  const { u8, u32 } = m;
  const { vfs } = host;
  const K = 'KERNEL32.DLL!';
  const full = (p) => host.fullPath(p);

  m.api(K + 'CreateDirectoryA', 2, (p) => { vfs.mkdir(full(m.cstr(p))); return 1; });
  m.api(K + 'OutputDebugStringA', 1, (p) => { if (host.traceDebug) host.log('[debug] ' + m.cstr(p).replace(/\s+$/, '')); return 0; });
  // No console: the C runtime's _getch/_kbhit paths get "no console".
  m.api(K + 'GetConsoleMode', 2, () => 0);
  m.api(K + 'SetConsoleMode', 2, () => 0);
  m.api(K + 'GetNumberOfConsoleInputEvents', 2, (h, p) => { if (p) u32[p >> 2] = 0; return 0; });
  m.api(K + 'PeekConsoleInputA', 4, (h, buf, n, pRead) => { if (pRead) u32[pRead >> 2] = 0; return 0; });
  m.api(K + 'ReadConsoleInputA', 4, (h, buf, n, pRead) => { if (pRead) u32[pRead >> 2] = 0; return 0; });
  m.api(K + 'EnumSystemLocalesA', 2, () => 1);
  const fileTime = (p, ms) => {
    const t = BigInt(Math.floor(ms)) * 10000n + 116444736000000000n;
    u32[p >> 2] = Number(t & 0xFFFFFFFFn); u32[(p + 4) >> 2] = Number(t >> 32n);
  };
  m.api(K + 'GetSystemTimeAsFileTime', 1, (p) => { fileTime(p, host.wallClockMs()); return 0; });
  m.api(K + 'GetFileInformationByHandle', 2, (h, p) => {
    const f = host.handles.get(h);
    if (!f || f.type !== 'file') { host.lastError = 6; return 0; }
    u8.fill(0, p, p + 52);
    u32[p >> 2] = 0x20;                              // FILE_ATTRIBUTE_ARCHIVE
    const t = Date.UTC(2000, 9, 2, 12, 0, 0);
    fileTime(p + 4, t); fileTime(p + 12, t); fileTime(p + 20, t);
    u32[(p + 28) >> 2] = vfs.drives.C.serial;
    u32[(p + 36) >> 2] = vfs.size(f.st) >>> 0;
    u32[(p + 40) >> 2] = 1;
    return 1;
  });

  // The game parses its INI files itself and writes single values with WritePrivateProfileString
  // (RcHcGame.dat 0x5AD1A0), so the write has to edit the real file text.
  m.api(K + 'WritePrivateProfileStringA', 4, (pSec, pKey, pVal, pFile) => {
    if (!pFile) return 0;
    const name = m.cstr(pFile);
    // A bare file name means the Windows directory; the game always passes a path.
    const path = /[\\/]/.test(name) ? full(name) : normalizePath('C:\\WINDOWS\\' + name);
    if (!pSec) return 1;                             // flush request
    const sec = m.cstr(pSec);
    const key = pKey ? m.cstr(pKey) : null;
    const val = pVal ? m.cstr(pVal) : null;
    const old = vfs.readAll(path);
    const bytes = latin1Encode(editIni(old ? latin1Decode(old) : '', sec, key, val));
    vfs.add(path, bytes, { persist: true });
    if (vfs.onPersist) vfs.onPersist(path, bytes);
    if (host.traceFiles) host.log(`ini write ${path} [${sec}] ${key}=${val}`);
    return 1;
  });
}
