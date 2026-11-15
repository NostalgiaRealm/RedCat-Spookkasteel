// WINMM as far as RcHcGame.dat uses it: the millisecond clock and the joystick, which maps to the
// first connected gamepad. platform.joystick() -> null | { x, y, z, r, buttons, pov } with axes in
// 0..65535 (32767 = centre), pov in hundredths of a degree or 0xFFFF.
// The platform reports no joystick (worker.js), and that is on purpose: the game reduces the two axes to four
// booleans at centre +- 10 percent of the range before anything else sees them (0x5A6440 -> 0x5A61F0, the 0.1
// from 0x5A5DD0), so this path cannot give a gradual walk. A controller goes through the keys and
// source/host/move.js instead (docs/research/input.md).
export function installWinmm(m, host) {
  const { u8, u16, u32 } = m;
  const W = 'WINMM.DLL!';
  m.api(W + 'timeGetTime', 0, () => host.nowMs() >>> 0);
  const JOYERR_UNPLUGGED = 167, JOYERR_PARMS = 165;
  m.api(W + 'joyGetDevCapsA', 3, (id, p, size) => {
    const j = id === 0 && host.joystick ? host.joystick() : null;
    if (!j) return id === 0 ? JOYERR_UNPLUGGED : JOYERR_PARMS;
    u8.fill(0, p, p + size);
    u16[p >> 1] = 1; u16[(p + 2) >> 1] = 1;
    m.writeCStr(p + 4, 'Gamepad', 32);
    // wXmin, wXmax, wYmin, wYmax, wZmin, wZmax, wNumButtons, wPeriodMin, wPeriodMax
    const v = [0, 65535, 0, 65535, 0, 65535, 8, 10, 1000];
    for (let k = 0; k < v.length; k++) u32[(p + 36 + k * 4) >> 2] = v[k];
    if (size >= 0x194) {
      const w = [0, 65535, 0, 65535, 0, 65535, 0x3F, 8, 4, 32];    // R, U, V ranges, caps, max axes, axes, max buttons
      for (let k = 0; k < w.length; k++) u32[(p + 72 + k * 4) >> 2] = w[k];
    }
    return 0;
  });
  m.api(W + 'joyGetPosEx', 2, (id, p) => {
    const j = id === 0 && host.joystick ? host.joystick() : null;
    if (!j) return id === 0 ? JOYERR_UNPLUGGED : JOYERR_PARMS;
    // JOYINFOEX: dwSize, dwFlags, dwXpos, dwYpos, dwZpos, dwRpos, dwUpos, dwVpos, dwButtons, dwButtonNumber, dwPOV
    u32[(p + 8) >> 2] = j.x; u32[(p + 12) >> 2] = j.y; u32[(p + 16) >> 2] = j.z === undefined ? 32767 : j.z;
    u32[(p + 20) >> 2] = j.r === undefined ? 32767 : j.r; u32[(p + 24) >> 2] = 32767; u32[(p + 28) >> 2] = 32767;
    u32[(p + 32) >> 2] = j.buttons >>> 0;
    let n = 0;
    for (let b = j.buttons >>> 0; b; b &= b - 1) n++;
    u32[(p + 36) >> 2] = n;
    u32[(p + 40) >> 2] = j.pov === undefined ? 0xFFFF : j.pov;
    return 0;
  });
}
