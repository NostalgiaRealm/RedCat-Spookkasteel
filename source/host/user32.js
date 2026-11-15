// USER32 as far as RcHcGame.dat uses it: one top-level game window, its message queue, keyboard
// and mouse state, cursor position. Written for this game; the message plumbing follows the
// Maisy's Playhouse host. The game has no child windows and no menus.

const WM = {
  CREATE: 0x01, DESTROY: 0x02, MOVE: 0x03, SIZE: 0x05, ACTIVATE: 0x06, SETFOCUS: 0x07, KILLFOCUS: 0x08,
  PAINT: 0x0F, CLOSE: 0x10, QUIT: 0x12, SHOWWINDOW: 0x18, ACTIVATEAPP: 0x1C, NCCREATE: 0x81, NCDESTROY: 0x82,
  KEYDOWN: 0x100, KEYUP: 0x101, CHAR: 0x102, SYSKEYDOWN: 0x104, SYSKEYUP: 0x105,
  MOUSEMOVE: 0x200, LBUTTONDOWN: 0x201, LBUTTONUP: 0x202, RBUTTONDOWN: 0x204, RBUTTONUP: 0x205,
  MBUTTONDOWN: 0x207, MBUTTONUP: 0x208,
};

export function installUser32(m, host) {
  const { u8, u16, u32, i32 } = m;
  const U = 'USER32.DLL!';
  const classes = new Map();     // upper-case name -> { wndProc, ... }
  const windows = new Map();     // hwnd -> window
  let nextHwnd = 0x00010010;
  const queue = [];
  const user = host.user = {
    queue, windows, classes, WM,
    keys: new Uint8Array(256),      // bit 0x80 = down, bit 1 = pressed since the last GetAsyncKeyState
    mouse: { x: 320, y: 240, buttons: 0, dx: 0, dy: 0, dz: 0 },
    main: null,
    quit: false,
    clip: null,
    cursorVisible: true,
  };
  const DESKTOP = 0x00010000;
  const screenW = () => host.screen.width;
  const screenH = () => host.screen.height;

  const sendMessage = (hwnd, msg, wp, lp) => {
    const w = windows.get(hwnd);
    if (!w || !w.wndProc) return 0;
    if (host.traceMsg) host.log(`send ${msg.toString(16)} wp=${(wp >>> 0).toString(16)} lp=${(lp >>> 0).toString(16)}`);
    return m.call(w.wndProc, [hwnd, msg, wp, lp]);
  };
  user.sendMessage = sendMessage;
  user.post = (hwnd, msg, wp, lp) => queue.push({ hwnd, msg, wp, lp });

  /** Turns platform input events into key state and window messages. */
  const VK_SHIFT = 0x10, VK_CONTROL = 0x11, VK_MENU = 0x12;
  const pump = () => {
    const events = host.input && host.input.poll ? host.input.poll() : null;
    if (!events) return;
    const w = user.main;
    const hwnd = w ? w.hwnd : 0;
    for (const e of events) {
      switch (e.type) {
        case 'keydown': {
          const repeat = (user.keys[e.vk] & 0x80) !== 0;
          user.keys[e.vk] |= 0x81;
          if (host.onKey) host.onKey(e.vk, true, e);
          const alt = (user.keys[VK_MENU] & 0x80) !== 0 && e.vk !== VK_MENU;
          queue.push({ hwnd, msg: alt ? WM.SYSKEYDOWN : WM.KEYDOWN, wp: e.vk, lp: (1 | ((e.scan || 0) << 16) | (repeat ? 0x40000000 : 0) | (alt ? 0x20000000 : 0)) >>> 0, ch: e.ch || 0 });
          break;
        }
        case 'keyup':
          user.keys[e.vk] &= ~0x80;
          if (host.onKey) host.onKey(e.vk, false, e);
          queue.push({ hwnd, msg: WM.KEYUP, wp: e.vk, lp: (1 | ((e.scan || 0) << 16) | 0xC0000000) >>> 0 });
          break;
        case 'move':
          // relative (pointer lock): the cursor moves by the delta; absolute: it is placed there.
          // The game re-centres the cursor with SetCursorPos after reading it (window code 0x5A9FA0).
          if (e.dx !== undefined) { user.mouse.x += e.dx; user.mouse.y += e.dy; user.mouse.dx += e.dx; user.mouse.dy += e.dy; }
          else { user.mouse.dx += e.x - user.mouse.x; user.mouse.dy += e.y - user.mouse.y; user.mouse.x = e.x; user.mouse.y = e.y; }
          queue.push({ hwnd, msg: WM.MOUSEMOVE, wp: user.mouse.buttons, lp: ((user.mouse.y & 0xFFFF) << 16 | (user.mouse.x & 0xFFFF)) >>> 0 });
          break;
        case 'down':
        case 'up': {
          const down = e.type === 'down';
          const bit = [1, 2, 0x10][e.button || 0];
          const vk = [1, 2, 4][e.button || 0];
          if (down) { user.mouse.buttons |= bit; user.keys[vk] |= 0x81; } else { user.mouse.buttons &= ~bit; user.keys[vk] &= ~0x80; }
          if (e.x !== undefined) { user.mouse.x = e.x; user.mouse.y = e.y; }
          const msg = [down ? WM.LBUTTONDOWN : WM.LBUTTONUP, down ? WM.RBUTTONDOWN : WM.RBUTTONUP, down ? WM.MBUTTONDOWN : WM.MBUTTONUP][e.button || 0];
          queue.push({ hwnd, msg, wp: user.mouse.buttons, lp: ((user.mouse.y & 0xFFFF) << 16 | (user.mouse.x & 0xFFFF)) >>> 0 });
          break;
        }
        case 'wheel':
          user.mouse.dz += e.dz || 0;
          break;
        case 'activate':
          if (hwnd) queue.push({ hwnd, msg: WM.ACTIVATEAPP, wp: e.active ? 1 : 0, lp: 0 });
          break;
        case 'close':
          if (hwnd) queue.push({ hwnd, msg: WM.CLOSE, wp: 0, lp: 0 });
          break;
        default:
          break;
      }
    }
  };
  user.pump = pump;

  m.api(U + 'RegisterClassA', 1, (p) => {
    const name = u32[(p + 36) >> 2];
    const c = {
      style: u32[p >> 2], wndProc: u32[(p + 4) >> 2], wndExtra: u32[(p + 12) >> 2],
      name: name >= 0x10000 ? m.cstr(name) : '#' + name,
    };
    classes.set(c.name.toUpperCase(), c);
    if (host.traceWin) host.log(`RegisterClass "${c.name}" wndProc=${c.wndProc.toString(16)} style=${c.style.toString(16)}`);
    return 0xC000 + classes.size;
  });

  m.api(U + 'CreateWindowExA', 12, (exStyle, pClass, pName, style, x, y, w, h, parent, menu, inst, param) => {
    const cname = pClass >= 0x10000 ? m.cstr(pClass) : '#' + pClass;
    const c = classes.get(cname.toUpperCase());
    if (!c) { host.log('CreateWindowEx: unknown class ' + cname); host.lastError = 1407; return 0; }
    const CW = 0x80000000;
    const win = {
      hwnd: nextHwnd, cls: c, wndProc: c.wndProc, style, exStyle, title: pName ? m.cstr(pName) : '',
      x: (x | 0) === (CW | 0) ? 0 : x | 0, y: (y | 0) === (CW | 0) ? 0 : y | 0,
      w: (w | 0) === (CW | 0) ? screenW() : w | 0, h: (h | 0) === (CW | 0) ? screenH() : h | 0,
      longs: new Map(), visible: false, update: true,
    };
    nextHwnd += 0x10;
    windows.set(win.hwnd, win);
    if (!user.main) user.main = win;
    if (host.traceWin) host.log(`CreateWindowEx "${cname}" "${win.title}" style=${(style >>> 0).toString(16)} ex=${(exStyle >>> 0).toString(16)} ${win.x},${win.y} ${win.w}x${win.h} -> ${win.hwnd.toString(16)}`);
    // CREATESTRUCT on the game stack side: keep it in low memory
    const cs = user.createStruct || (user.createStruct = m.lowAlloc(48));
    u32[cs >> 2] = param; u32[(cs + 4) >> 2] = inst; u32[(cs + 8) >> 2] = menu; u32[(cs + 12) >> 2] = parent;
    i32[(cs + 16) >> 2] = win.h; i32[(cs + 20) >> 2] = win.w; i32[(cs + 24) >> 2] = win.y; i32[(cs + 28) >> 2] = win.x;
    u32[(cs + 32) >> 2] = style; u32[(cs + 36) >> 2] = pName; u32[(cs + 40) >> 2] = pClass; u32[(cs + 44) >> 2] = exStyle;
    if (sendMessage(win.hwnd, WM.NCCREATE, 0, cs) === 0) { windows.delete(win.hwnd); if (user.main === win) user.main = null; return 0; }
    if ((sendMessage(win.hwnd, WM.CREATE, 0, cs) | 0) === -1) { windows.delete(win.hwnd); if (user.main === win) user.main = null; return 0; }
    if (style & 0x10000000) showWindow(win, 5);
    return win.hwnd;
  });

  const showWindow = (win, cmd) => {
    const was = win.visible;
    const show = cmd !== 0;
    win.visible = show;
    if (show && !was) {
      sendMessage(win.hwnd, WM.SHOWWINDOW, 1, 0);
      if (!user.active) {
        user.active = win;
        sendMessage(win.hwnd, WM.ACTIVATEAPP, 1, 0);
        sendMessage(win.hwnd, WM.ACTIVATE, 1, 0);
        sendMessage(win.hwnd, WM.SETFOCUS, 0, 0);
      }
      sendMessage(win.hwnd, WM.SIZE, 0, ((win.h & 0xFFFF) << 16 | (win.w & 0xFFFF)) >>> 0);
      sendMessage(win.hwnd, WM.MOVE, 0, ((win.y & 0xFFFF) << 16 | (win.x & 0xFFFF)) >>> 0);
    }
    return was ? 1 : 0;
  };
  m.api(U + 'ShowWindow', 2, (hwnd, cmd) => { const w = windows.get(hwnd); return w ? showWindow(w, cmd) : 0; });
  m.api(U + 'UpdateWindow', 1, (hwnd) => {
    const w = windows.get(hwnd);
    if (w && w.update && w.visible) { sendMessage(hwnd, WM.PAINT, 0, 0); w.update = false; }
    return 1;
  });
  const destroyWindow = (hwnd) => {
    const w = windows.get(hwnd);
    if (!w) return 0;
    sendMessage(hwnd, WM.DESTROY, 0, 0);
    sendMessage(hwnd, WM.NCDESTROY, 0, 0);
    windows.delete(hwnd);
    if (user.main === w) user.main = null;
    if (user.active === w) user.active = null;
    return 1;
  };
  m.api(U + 'DestroyWindow', 1, destroyWindow);
  m.api(U + 'DefWindowProcA', 4, (hwnd, msg, wp, lp) => {
    if (host.onDefWindowProc) host.onDefWindowProc(hwnd, msg, wp, lp);
    switch (msg) {
      case WM.NCCREATE: return 1;
      case WM.CLOSE: destroyWindow(hwnd); return 0;
      case WM.PAINT: { const w = windows.get(hwnd); if (w) w.update = false; return 0; }
      default: return 0;
    }
  });

  const fillMsg = (p, q) => {
    u32[p >> 2] = q.hwnd; u32[(p + 4) >> 2] = q.msg; u32[(p + 8) >> 2] = q.wp; u32[(p + 12) >> 2] = q.lp;
    u32[(p + 16) >> 2] = host.nowMs() >>> 0; i32[(p + 20) >> 2] = user.mouse.x; i32[(p + 24) >> 2] = user.mouse.y;
  };
  m.api(U + 'PeekMessageA', 5, (pMsg, hwnd, lo, hi, flags) => {
    pump();
    if (host.onPeek) host.onPeek(queue.length);
    let k = -1;
    for (let j = 0; j < queue.length; j++) {
      const q = queue[j];
      if (hwnd && q.hwnd !== hwnd && q.msg !== WM.QUIT) continue;
      if ((lo || hi) && (q.msg < lo || q.msg > hi)) continue;
      k = j;
      break;
    }
    if (k < 0) return 0;
    const q = queue[k];
    fillMsg(pMsg, q);
    if (flags & 1) { queue.splice(k, 1); user.last = q; }
    if (host.traceMsg) host.log(`peek msg ${q.msg.toString(16)} wp=${(q.wp >>> 0).toString(16)}`);
    return 1;
  });
  m.api(U + 'TranslateMessage', 1, (pMsg) => {
    const msg = u32[(pMsg + 4) >> 2];
    if (msg !== WM.KEYDOWN) return 0;
    const q = user.last;
    const ch = q && q.ch ? q.ch : 0;
    if (ch) queue.unshift({ hwnd: u32[pMsg >> 2], msg: WM.CHAR, wp: ch, lp: u32[(pMsg + 12) >> 2] });
    return ch ? 1 : 0;
  });
  m.api(U + 'DispatchMessageA', 1, (pMsg) => sendMessage(u32[pMsg >> 2], u32[(pMsg + 4) >> 2], u32[(pMsg + 8) >> 2], u32[(pMsg + 12) >> 2]));
  m.api(U + 'SendMessageA', 4, (hwnd, msg, wp, lp) => sendMessage(hwnd, msg, wp, lp));
  m.api(U + 'PostQuitMessage', 1, (code) => { user.quit = true; queue.push({ hwnd: 0, msg: WM.QUIT, wp: code, lp: 0 }); return 0; });

  m.api(U + 'GetAsyncKeyState', 1, (vk) => {
    pump();
    const s = user.keys[vk & 0xFF];
    user.keys[vk & 0xFF] = s & 0x80;
    return ((s & 0x80) ? 0x8000 : 0) | (s & 1);
  });

  const setRect = (p, l, t, r, b) => { i32[p >> 2] = l; i32[(p + 4) >> 2] = t; i32[(p + 8) >> 2] = r; i32[(p + 12) >> 2] = b; };
  m.api(U + 'GetClientRect', 2, (hwnd, p) => {
    const w = windows.get(hwnd);
    if (w) setRect(p, 0, 0, w.w, w.h); else setRect(p, 0, 0, screenW(), screenH());
    return 1;
  });
  m.api(U + 'GetWindowRect', 2, (hwnd, p) => {
    const w = windows.get(hwnd);
    if (w) setRect(p, w.x, w.y, w.x + w.w, w.y + w.h); else setRect(p, 0, 0, screenW(), screenH());
    return 1;
  });
  m.api(U + 'AdjustWindowRect', 3, () => 1);     // the port's window has no frame: client area = window
  m.api(U + 'ClientToScreen', 2, (hwnd, p) => {
    const w = windows.get(hwnd);
    if (w) { i32[p >> 2] += w.x; i32[(p + 4) >> 2] += w.y; }
    return 1;
  });
  m.api(U + 'SetWindowPos', 7, (hwnd, after, x, y, cx, cy, flags) => {
    const w = windows.get(hwnd);
    if (!w) return 0;
    if (!(flags & 2)) { w.x = x | 0; w.y = y | 0; }
    if (!(flags & 1)) {
      const changed = w.w !== (cx | 0) || w.h !== (cy | 0);
      w.w = cx | 0; w.h = cy | 0;
      if (changed && w.visible) sendMessage(hwnd, WM.SIZE, 0, ((w.h & 0xFFFF) << 16 | (w.w & 0xFFFF)) >>> 0);
    }
    if (flags & 0x40) showWindow(w, 5);
    if (host.traceWin) host.log(`SetWindowPos ${w.x},${w.y} ${w.w}x${w.h} flags=${flags.toString(16)}`);
    return 1;
  });
  m.api(U + 'GetSystemMetrics', 1, (n) => {
    switch (n) {
      case 0: return screenW();      // SM_CXSCREEN
      case 1: return screenH();      // SM_CYSCREEN
      case 19: return 2;             // SM_MOUSEPRESENT... (SM_CMOUSEBUTTONS is 43)
      case 43: return 3;
      default: return 0;             // no caption, frame or menu sizes: the window is the screen
    }
  });
  m.api(U + 'GetDesktopWindow', 0, () => DESKTOP);
  m.api(U + 'GetWindowLongA', 2, (hwnd, idx) => {
    const w = windows.get(hwnd);
    if (!w) return 0;
    switch (idx | 0) {
      case -16: return w.style;
      case -20: return w.exStyle;
      case -4: return w.wndProc;
      default: return w.longs.get(idx | 0) || 0;
    }
  });
  m.api(U + 'SetWindowLongA', 3, (hwnd, idx, v) => {
    const w = windows.get(hwnd);
    if (!w) return 0;
    let old;
    switch (idx | 0) {
      case -16: old = w.style; w.style = v; break;
      case -20: old = w.exStyle; w.exStyle = v; break;
      case -4: old = w.wndProc; w.wndProc = v; break;
      default: old = w.longs.get(idx | 0) || 0; w.longs.set(idx | 0, v); break;
    }
    return old;
  });
  m.api(U + 'SetFocus', 1, (hwnd) => { const old = user.focus || 0; user.focus = hwnd; return old; });

  // Painting: the game draws through the render driver, never through a window DC.
  m.api(U + 'GetDC', 1, (hwnd) => host.gdi.screenDC(hwnd));
  m.api(U + 'ReleaseDC', 2, () => 1);
  m.api(U + 'BeginPaint', 2, (hwnd, ps) => {
    u8.fill(0, ps, ps + 64);
    u32[ps >> 2] = host.gdi.screenDC(hwnd);
    const w = windows.get(hwnd);
    if (w) { setRect(ps + 8, 0, 0, w.w, w.h); w.update = false; }
    return u32[ps >> 2];
  });
  m.api(U + 'EndPaint', 2, () => 1);
  m.api(U + 'GetUpdateRect', 3, (hwnd, p) => {
    const w = windows.get(hwnd);
    if (!w || !w.update) return 0;
    if (p) setRect(p, 0, 0, w.w, w.h);
    return 1;
  });

  // Cursor
  m.api(U + 'LoadCursorA', 2, (inst, name) => 0x00020000 + (name & 0xFFFF));
  m.api(U + 'LoadIconA', 2, (inst, name) => 0x00030000 + (name & 0xFFFF));
  m.api(U + 'SetCursor', 1, (h) => { const old = user.cursor || 0; user.cursor = h; if (host.cursorChanged) host.cursorChanged(h); return old; });
  m.api(U + 'GetCursorPos', 1, (p) => { pump(); i32[p >> 2] = user.mouse.x; i32[(p + 4) >> 2] = user.mouse.y; return 1; });
  m.api(U + 'SetCursorPos', 2, (x, y) => {
    // The game recentres the pointer to read relative movement. The host keeps relative deltas
    // itself (pointer lock in the browser), so only the reported position changes.
    user.mouse.x = x | 0; user.mouse.y = y | 0;
    return 1;
  });
  m.api(U + 'ClipCursor', 1, (p) => { user.clip = p ? [i32[p >> 2], i32[(p + 4) >> 2], i32[(p + 8) >> 2], i32[(p + 12) >> 2]] : null; if (host.cursorClip) host.cursorClip(user.clip); return 1; });

  // Save states: the window and its class; pending input is dropped on load.
  if (host.snap) host.snap.add('user32', () => ({
    nextHwnd, createStruct: user.createStruct || 0, cursor: user.cursor || 0, focus: user.focus || 0,
    main: user.main ? user.main.hwnd : 0, active: user.active ? user.active.hwnd : 0, mouse: [user.mouse.x, user.mouse.y],
    classes: [...classes],
    windows: [...windows.values()].map((w) => ({ ...w, cls: w.cls.name, longs: [...w.longs] })),
  }), (st) => {
    nextHwnd = st.nextHwnd; user.createStruct = st.createStruct; user.cursor = st.cursor; user.focus = st.focus;
    classes.clear(); for (const [k, v] of st.classes) classes.set(k, v);
    windows.clear();
    for (const w of st.windows) windows.set(w.hwnd, { ...w, cls: classes.get(w.cls.toUpperCase()), longs: new Map(w.longs) });
    user.main = windows.get(st.main) || null; user.active = windows.get(st.active) || null;
    queue.length = 0; user.keys.fill(0);
    Object.assign(user.mouse, { x: st.mouse[0], y: st.mouse[1], buttons: 0, dx: 0, dy: 0, dz: 0 });
  });

  // Message boxes and dialogs
  m.api(U + 'MessageBoxA', 4, (hwnd, pText, pCap, type) => host.messageBox(pText ? m.cstr(pText) : '', pCap ? m.cstr(pCap) : '', type));
  m.api(U + 'DialogBoxParamA', 5, (inst, tmpl, parent, proc, param) => {
    host.log(`DialogBoxParam template ${tmpl >= 0x10000 ? m.cstr(tmpl) : '#' + tmpl}: not shown`);
    return 2;      // IDCANCEL: no dialog was shown
  });
  // Only reached without -game (the BSP picker of the ad-hoc mode, 0x4C2B50): answer "cancelled".
  m.api('COMDLG32.DLL!GetOpenFileNameA', 1, () => { host.log('GetOpenFileName: there is no file dialog in this port'); return 0; });
  m.api(U + 'EndDialog', 2, () => 1);
  m.api(U + 'GetDlgItem', 2, () => 0);
  m.api(U + 'SendDlgItemMessageA', 5, () => 0);
  m.api(U + 'DrawTextA', 5, (hdc, pStr, n, pRect, fmt) => host.gdi.drawText(hdc, pStr, n | 0, pRect, fmt));
}
