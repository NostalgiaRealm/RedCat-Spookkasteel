// GDI32 as far as RcHcGame.dat uses it. The game never draws to the screen through GDI: Genesis3D's
// font code (RcHcGame.dat 0x5BEA00, 0x5BEDD0, 0x5BFA00, 0x5BFF90, 0x5C0070) asks GDI for glyph
// bitmaps and metrics and for text drawn into an 8-bit DIB section, then copies the pixels into
// its own bitmaps. The platform's text rasteriser supplies the glyphs:
//   platform.text.metrics(font) -> { height, ascent, descent }
//   platform.text.glyph(font, code) -> { w, h, ox, oy, adv, cov: Uint8Array(w*h) 0..255 }
//     ox: left bearing, oy: top of the black box above the baseline (GLYPHMETRICS.gmptGlyphOrigin)
// font = { height (pixels, positive), weight, italic, face }

export function installGdi32(m, host) {
  const { u8, u16, u32, i32, i16 } = m;
  const G = 'GDI32.DLL!';
  const heap = host.heap;
  const objs = new Map();
  let next = 0x00500000;
  const add = (o) => { const h = next; next += 4; o.h = h; objs.set(h, o); return h; };
  const STOCK = 0x00400000;
  const gdi = host.gdi = { objs };
  const screen = add({ kind: 'dc', screen: true, textColor: 0, bkColor: 0xFFFFFF, bkMode: 2, font: null, bitmap: null });
  gdi.screenDC = () => screen;

  const fontOf = (dc) => (dc && dc.font) || { height: 16, weight: 400, italic: 0, face: 'System' };

  m.api(G + 'GetStockObject', 1, (n) => STOCK + n);
  m.api(G + 'CreateFontA', 14, (height, width, esc, orient, weight, italic, underline, strike, charset, outPrec, clipPrec, quality, pitch, pFace) => {
    let hgt = (height | 0) === 0 ? 16 : Math.abs(height | 0);
    const face = pFace ? m.cstr(pFace) : '';
    // A screen higher than 4:3 (source/host/shape.js; the original has no such mode): the game sizes its own fonts, all
    // Comic Sans MS, by the mode's HEIGHT, each screen when it is made (CAdamFont 0x4B09F0 with ftol(height * factor), the
    // height from CAdamEngine + 0x44: the loading screen 0x486872, the retry screen 0x489442, the results 0x48C6AA, the
    // game's start 0x527C20; run: -12, -24, -49, -23, -30 at 480 lines and -35, -71, -148, -68, -88 at 1422), while the
    // screen is no wider than 640: "Opnieuw proberen?" was three times as large and cut off at both sides. There such a
    // font gets the size it has at 480 lines. The engine's Verdana (-17 at every size) and Arial (by the width) are not
    // sized by the height and stay. Nothing changes at 4:3 or wider.
    const sc = host.screen;
    if (sc && sc.height * 640 > sc.width * 480 && /^comic sans ms$/i.test(face)) hgt = Math.max(1, Math.round(hgt * (sc.width / 640) / (sc.height / 480)));
    return add({ kind: 'font', height: hgt, cellHeight: (height | 0) > 0, weight: weight | 0, italic: italic & 0xFF, face });
  });
  m.api(G + 'CreatePalette', 1, (p) => {
    const n = u16[(p + 2) >> 1];
    return add({ kind: 'palette', entries: u8.slice(p + 4, p + 4 + n * 4) });
  });
  m.api(G + 'CreateCompatibleDC', 1, () => add({ kind: 'dc', textColor: 0, bkColor: 0xFFFFFF, bkMode: 2, font: null, bitmap: null }));
  m.api(G + 'DeleteDC', 1, (h) => (objs.delete(h) ? 1 : 0));
  m.api(G + 'DeleteObject', 1, (h) => {
    const o = objs.get(h);
    if (!o) return h >= STOCK && h < STOCK + 32 ? 1 : 0;
    if (o.kind === 'bitmap' && o.bits) heap.release(o.bits);
    objs.delete(h);
    return 1;
  });
  m.api(G + 'SelectObject', 2, (hdc, h) => {
    const dc = objs.get(hdc);
    const o = objs.get(h);
    if (!dc) return 0;
    if (!o) return h;       // a stock object, or the handle that an earlier select returned
    if (o.kind === 'font') { const old = dc.font ? dc.font.h : STOCK + 13; dc.font = o; return old; }
    if (o.kind === 'bitmap') { const old = dc.bitmap ? dc.bitmap.h : STOCK + 21; dc.bitmap = o; return old; }
    return h;
  });
  m.api(G + 'SetBkMode', 2, (hdc, mode) => { const dc = objs.get(hdc); if (!dc) return 0; const old = dc.bkMode; dc.bkMode = mode; return old; });
  m.api(G + 'SetBkColor', 2, (hdc, c) => { const dc = objs.get(hdc); if (!dc) return 0xFFFFFFFF; const old = dc.bkColor; dc.bkColor = c & 0xFFFFFF; return old; });
  m.api(G + 'SetTextColor', 2, (hdc, c) => { const dc = objs.get(hdc); if (!dc) return 0xFFFFFFFF; const old = dc.textColor; dc.textColor = c & 0xFFFFFF; return old; });

  m.api(G + 'CreateDIBSection', 6, (hdc, pbmi, usage, ppBits) => {
    const w = i32[(pbmi + 4) >> 2];
    const hRaw = i32[(pbmi + 8) >> 2];
    const bpp = u16[(pbmi + 14) >> 1];
    const pitch = ((w * bpp + 31) >> 5) << 2;
    const h = Math.abs(hRaw);
    const bits = heap.alloc(Math.max(4, pitch * h), true);
    const pal = bpp <= 8 ? u8.slice(pbmi + 40, pbmi + 40 + (1 << bpp) * 4) : null;    // RGBQUAD: b, g, r, 0
    if (ppBits) u32[ppBits >> 2] = bits;
    return add({ kind: 'bitmap', w, h, topDown: hRaw < 0, bpp, pitch, bits, pal });
  });

  // Save states: the game creates and deletes its fonts, DCs and DIB sections inside one call, so
  // between frames only the handle counter matters.
  if (host.snap) host.snap.add('gdi32', () => ({ next, enumBuf: gdi.enumBuf || 0 }), (st) => { next = st.next; gdi.enumBuf = st.enumBuf; });

  // --- text -------------------------------------------------------------------
  const widthOf = (font, p, n) => {
    let w = 0;
    for (let k = 0; k < n; k++) w += host.text.glyph(font, u8[p + k]).adv;
    return w;
  };
  m.api(G + 'GetTextExtentPoint32A', 4, (hdc, p, n, pSize) => {
    const font = fontOf(objs.get(hdc));
    const mt = host.text.metrics(font);
    i32[pSize >> 2] = widthOf(font, p, n | 0);
    i32[(pSize + 4) >> 2] = mt.height;
    return 1;
  });
  // EnumFontFamiliesEx: the game only asks whether a face exists (RcHcGame.dat 0x4B23E0). It
  // enumerates every family (empty lfFaceName) and its callback at 0x4B23A0 compares each
  // lfFaceName with the wanted name, returning 0 on a match. The faces its settings files name
  // are reported as present: the platform's rasteriser substitutes what it does not have.
  const FACES = ['Arial', 'Comic Sans MS', 'Courier New', 'Impact', 'Times New Roman', 'Verdana', 'Tahoma', 'MS Sans Serif', 'System'];
  m.api(G + 'EnumFontFamiliesExA', 5, (hdc, pLogFont, proc, lParam) => {
    const lf = gdi.enumBuf || (gdi.enumBuf = m.lowAlloc(512));
    const asked = pLogFont ? m.cstr(pLogFont + 28) : '';
    let r = 1;
    for (const face of asked ? [asked] : FACES) {
      u8.fill(0, lf, lf + 512);
      if (pLogFont) u8.copyWithin(lf, pLogFont, pLogFont + 28);
      m.writeCStr(lf + 28, face, 32);
      r = m.call(proc, [lf, lf + 256, 4, lParam]);
      if (!r) break;
    }
    return r;
  });

  const GGO_METRICS = 0, GGO_BITMAP = 1, GGO_GRAY8 = 6;
  m.api(G + 'GetGlyphOutlineA', 7, (hdc, ch, fmt, pgm, cb, buf) => {
    const dc = objs.get(hdc);
    const g = host.text.glyph(fontOf(dc), ch & 0xFF);
    u32[pgm >> 2] = g.w; u32[(pgm + 4) >> 2] = g.h;
    i32[(pgm + 8) >> 2] = g.ox; i32[(pgm + 12) >> 2] = g.oy;
    i16[(pgm + 16) >> 1] = g.adv; i16[(pgm + 18) >> 1] = 0;
    if (fmt === GGO_METRICS) return 0;
    if (fmt !== GGO_BITMAP && fmt !== GGO_GRAY8) return 0xFFFFFFFF;
    const pitch = fmt === GGO_BITMAP ? ((g.w + 31) >> 5) << 2 : (g.w + 3) & ~3;
    const size = pitch * g.h;
    if (!buf || !cb) return size;
    if (cb < size) return 0xFFFFFFFF;
    u8.fill(0, buf, buf + size);
    for (let y = 0; y < g.h; y++) {
      for (let x = 0; x < g.w; x++) {
        const c = g.cov[y * g.w + x];
        if (fmt === GGO_BITMAP) { if (c >= 128) u8[buf + y * pitch + (x >> 3)] |= 0x80 >> (x & 7); }
        else u8[buf + y * pitch + x] = (c * 64 + 127) / 255 | 0;      // 65 grey levels, 0..64
      }
    }
    return size;
  });

  // DrawText into the DIB section selected in a memory DC (0x5BFA00): opaque background colour,
  // text colour, both mapped to the nearest palette entry of the 8-bit section.
  const nearest = (bmp, rgb) => {
    const r = rgb & 0xFF, g = (rgb >> 8) & 0xFF, b = (rgb >> 16) & 0xFF;     // COLORREF: 0x00BBGGRR
    let best = 0, bd = Infinity;
    for (let k = 0; k < 256; k++) {
      const db = bmp.pal[k * 4] - b, dg = bmp.pal[k * 4 + 1] - g, dr = bmp.pal[k * 4 + 2] - r;
      const d = dr * dr + dg * dg + db * db;
      if (d < bd) { bd = d; best = k; }
    }
    return best;
  };
  gdi.drawText = (hdc, pStr, n, pRect, fmt) => {
    const dc = objs.get(hdc);
    const font = fontOf(dc);
    const mt = host.text.metrics(font);
    if (n < 0) { n = 0; while (u8[pStr + n]) n++; }
    const bmp = dc && dc.bitmap;
    const L = i32[pRect >> 2], T = i32[(pRect + 4) >> 2], R = i32[(pRect + 8) >> 2], B = i32[(pRect + 12) >> 2];
    const DT_CENTER = 1, DT_RIGHT = 2, DT_WORDBREAK = 0x10, DT_SINGLELINE = 0x20, DT_CALCRECT = 0x400;
    // split into lines
    const lines = [];
    let start = 0;
    const flush = (a, b) => lines.push([a, b]);
    if (fmt & DT_SINGLELINE) flush(0, n);
    else {
      let lineStart = 0, lastSpace = -1, w = 0;
      for (let k = 0; k < n; k++) {
        const c = u8[pStr + k];
        if (c === 13) continue;
        if (c === 10) { flush(lineStart, k); lineStart = k + 1; lastSpace = -1; w = 0; continue; }
        if (c === 32) lastSpace = k;
        w += host.text.glyph(font, c).adv;
        if ((fmt & DT_WORDBREAK) && w > R - L && lastSpace > lineStart) {
          flush(lineStart, lastSpace);
          lineStart = lastSpace + 1;
          k = lastSpace; lastSpace = -1; w = 0;
        }
      }
      flush(lineStart, n);
    }
    start = T;
    if (fmt & DT_CALCRECT) {
      let mw = 0;
      for (const [a, b] of lines) mw = Math.max(mw, widthOf(font, pStr + a, b - a));
      i32[(pRect + 8) >> 2] = L + mw; i32[(pRect + 12) >> 2] = T + lines.length * mt.height;
      return lines.length * mt.height;
    }
    if (!bmp || bmp.bpp !== 8) return lines.length * mt.height;
    const fg = nearest(bmp, dc.textColor), bg = nearest(bmp, dc.bkColor);
    const put = (x, y, v) => {
      if (x < L || x >= R || y < T || y >= B || x < 0 || y < 0 || x >= bmp.w || y >= bmp.h) return;
      const row = bmp.topDown ? y : bmp.h - 1 - y;
      u8[bmp.bits + row * bmp.pitch + x] = v;
    };
    let y = start;
    for (const [a, b] of lines) {
      const lw = widthOf(font, pStr + a, b - a);
      let x = fmt & DT_CENTER ? L + ((R - L - lw) >> 1) : fmt & DT_RIGHT ? R - lw : L;
      if (dc.bkMode === 2) for (let yy = 0; yy < mt.height; yy++) for (let xx = 0; xx < lw; xx++) put(x + xx, y + yy, bg);
      for (let k = a; k < b; k++) {
        const c = u8[pStr + k];
        if (c === 13 || c === 10) continue;
        const g = host.text.glyph(font, c);
        const gy = y + mt.ascent - g.oy;
        for (let yy = 0; yy < g.h; yy++) for (let xx = 0; xx < g.w; xx++) if (g.cov[yy * g.w + xx] >= 128) put(x + g.ox + xx, gy + yy, fg);
        x += g.adv;
      }
      y += mt.height;
    }
    return lines.length * mt.height;
  };
}
