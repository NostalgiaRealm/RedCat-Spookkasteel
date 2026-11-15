// DirectInput (DINPUT.DLL!DirectInputCreateA) for RcHcGame.dat: the system keyboard and mouse.
// The COM plumbing follows the A2 Racer 4 host. Keyboard state is indexed by DIK scan code.

const S_OK = 0;
const DIERR_UNSUPPORTED = 0x80004001 | 0;

// Windows virtual-key code -> DirectInput key code (DIK_*)
const VK_TO_DIK = new Uint8Array(256);
(() => {
  const set = (vk, dik) => { VK_TO_DIK[vk] = dik; };
  set(0x1B, 0x01); set(0x08, 0x0E); set(0x09, 0x0F); set(0x0D, 0x1C); set(0x20, 0x39);
  set(0x10, 0x2A); set(0xA0, 0x2A); set(0xA1, 0x36);            // shift
  set(0x11, 0x1D); set(0xA2, 0x1D); set(0xA3, 0x9D);            // control
  set(0x12, 0x38); set(0xA4, 0x38); set(0xA5, 0xB8);            // alt
  set(0x14, 0x3A); set(0x90, 0x45); set(0x91, 0x46); set(0x13, 0xC5);
  '1234567890'.split('').forEach((c, k) => set(c.charCodeAt(0), 0x02 + k));
  'QWERTYUIOP'.split('').forEach((c, k) => set(c.charCodeAt(0), 0x10 + k));
  'ASDFGHJKL'.split('').forEach((c, k) => set(c.charCodeAt(0), 0x1E + k));
  'ZXCVBNM'.split('').forEach((c, k) => set(c.charCodeAt(0), 0x2C + k));
  set(0xBD, 0x0C); set(0xBB, 0x0D); set(0xDB, 0x1A); set(0xDD, 0x1B); set(0xBA, 0x27); set(0xDE, 0x28);
  set(0xC0, 0x29); set(0xDC, 0x2B); set(0xBC, 0x33); set(0xBE, 0x34); set(0xBF, 0x35);
  for (let k = 0; k < 10; k++) set(0x70 + k, 0x3B + k);         // F1..F10
  set(0x7A, 0x57); set(0x7B, 0x58);
  set(0x25, 0xCB); set(0x26, 0xC8); set(0x27, 0xCD); set(0x28, 0xD0);
  set(0x24, 0xC7); set(0x23, 0xCF); set(0x21, 0xC9); set(0x22, 0xD1); set(0x2D, 0xD2); set(0x2E, 0xD3);
  [0x52, 0x4F, 0x50, 0x51, 0x4B, 0x4C, 0x4D, 0x47, 0x48, 0x49].forEach((dik, k) => set(0x60 + k, dik));   // numpad 0..9
  set(0x6A, 0x37); set(0x6B, 0x4E); set(0x6D, 0x4A); set(0x6E, 0x53); set(0x6F, 0xB5);
})();
export { VK_TO_DIK };

function slots(count, entries) {
  const out = new Array(count).fill(null);
  for (const [k, name, n, fn] of entries) out[k] = [name, n, fn];
  return out;
}

export function installDinput(m, host) {
  const { u8, u32, i32 } = m;
  const noop = () => S_OK;
  const release = (self) => Math.max(--self.refs, 0);
  const KEYBOARD = 0x6F1D2B61, MOUSE = 0x6F1D2B60;
  const devices = { [KEYBOARD]: { kind: 'keyboard' }, [MOUSE]: { kind: 'mouse' } };
  const DEV = 'IDirectInputDeviceA';

  m.defineInterface(DEV, slots(18, [
    [0, 'QueryInterface', 2, (self, riid, pOut) => { self.refs++; u32[pOut >> 2] = self.addr; return S_OK; }],
    [1, 'AddRef', 0, (self) => ++self.refs],
    [2, 'Release', 0, release],
    [3, 'GetCapabilities', 1, (self, p) => {
      const size = u32[p >> 2];
      u8.fill(0, p + 4, p + size);
      u32[(p + 4) >> 2] = 1;                                   // DIDC_ATTACHED
      if (self.kind === 'mouse') { u32[(p + 8) >> 2] = 0x0112; u32[(p + 12) >> 2] = 3; u32[(p + 16) >> 2] = 3; }
      else { u32[(p + 8) >> 2] = 0x0403; u32[(p + 16) >> 2] = 101; }
      return S_OK;
    }],
    [5, 'GetProperty', 2, () => DIERR_UNSUPPORTED],
    [6, 'SetProperty', 2, (self, prop, p) => { if (prop === 1 && p) self.bufferSize = u32[(p + 16) >> 2]; return S_OK; }],
    [7, 'Acquire', 0, (self) => { self.acquired = true; return S_OK; }],
    [8, 'Unacquire', 0, (self) => { self.acquired = false; return S_OK; }],
    [9, 'GetDeviceState', 2, (self, size, p) => {
      const user = host.user;
      user.pump();
      u8.fill(0, p, p + size);
      if (self.kind === 'keyboard') {
        for (let vk = 0; vk < 256; vk++) {
          const dik = VK_TO_DIK[vk];
          if (dik && (user.keys[vk] & 0x80) && dik < size) u8[p + dik] = 0x80;
        }
      } else {
        const ms = user.mouse;
        i32[p >> 2] = ms.dx; i32[(p + 4) >> 2] = ms.dy; i32[(p + 8) >> 2] = ms.dz;
        ms.dx = 0; ms.dy = 0; ms.dz = 0;
        if (size >= 16) { u8[p + 12] = ms.buttons & 1 ? 0x80 : 0; u8[p + 13] = ms.buttons & 2 ? 0x80 : 0; u8[p + 14] = ms.buttons & 0x10 ? 0x80 : 0; }
      }
      return S_OK;
    }],
    [10, 'GetDeviceData', 4, (self, cb, pData, pCount) => { if (pCount) u32[pCount >> 2] = 0; return S_OK; }],
    [11, 'SetDataFormat', 1, noop],
    [12, 'SetEventNotification', 1, noop],
    [13, 'SetCooperativeLevel', 2, noop],
  ]));
  m.defineInterface('IDirectInputA', slots(8, [
    [0, 'QueryInterface', 2, (self, riid, pOut) => { self.refs++; u32[pOut >> 2] = self.addr; return S_OK; }],
    [1, 'AddRef', 0, (self) => ++self.refs],
    [2, 'Release', 0, release],
    [3, 'CreateDevice', 3, (self, guid, pOut) => {
      const d = devices[u32[guid >> 2]];
      if (!d) { host.log('DirectInput CreateDevice: unknown device ' + u32[guid >> 2].toString(16)); u32[pOut >> 2] = 0; return 0x80040154 | 0; }
      if (!d.addr) m.newObject(DEV, d); else d.refs++;
      u32[pOut >> 2] = d.addr;
      return S_OK;
    }],
    [4, 'EnumDevices', 4, noop],
  ]));
  host.dinput = {};
  m.newObject('IDirectInputA', host.dinput);
  m.api('DINPUT.DLL!DirectInputCreateA', 4, (hinst, ver, pOut) => {
    host.dinput.refs++;
    u32[pOut >> 2] = host.dinput.addr;
    return S_OK;
  });
}
