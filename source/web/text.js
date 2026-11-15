// Glyph rasteriser for the browser: supplies what gdi32.js needs (metrics and 8-bit coverage per
// glyph) from canvas fonts. Works in a worker (OffscreenCanvas) and on the page.
// The game names its fonts in its settings files (Comic Sans MS for most text). A face the
// browser does not have falls back along FALLBACK; that changes the look of text, not its logic.
const FALLBACK = '"Comic Sans MS", "Comic Neue", "Chalkboard SE", "Comic Relief", cursive, sans-serif';

export function createTextRasteriser() {
  const canvas = typeof OffscreenCanvas !== 'undefined' ? new OffscreenCanvas(64, 64) : Object.assign(document.createElement('canvas'), { width: 64, height: 64 });
  const ctx = canvas.getContext('2d', { willReadFrequently: true });
  const cache = new Map();
  const css = (f) => {
    // CreateFont with a negative height asks for that character (em) height; a positive one is the
    // cell height, which includes internal leading.
    const px = f.cellHeight ? Math.max(1, Math.round(f.height * 0.87)) : f.height;
    return `${f.italic ? 'italic ' : ''}${f.weight >= 600 ? 'bold ' : ''}${px}px "${f.face}", ${FALLBACK}`;
  };
  const key = (f) => `${f.face}|${f.height}|${f.cellHeight ? 1 : 0}|${f.weight}|${f.italic}`;
  const entry = (f) => {
    const k = key(f);
    let e = cache.get(k);
    if (!e) {
      ctx.font = css(f);
      const mt = ctx.measureText('ÁMgjpqy|');
      const ascent = Math.ceil(mt.fontBoundingBoxAscent || mt.actualBoundingBoxAscent || f.height * 0.9);
      const descent = Math.ceil(mt.fontBoundingBoxDescent || mt.actualBoundingBoxDescent || f.height * 0.25);
      e = { font: css(f), metrics: { height: ascent + descent, ascent, descent }, glyphs: new Map() };
      cache.set(k, e);
    }
    return e;
  };
  // Windows-1252 code -> character
  const decoder = new TextDecoder('windows-1252');
  const chr = (code) => decoder.decode(new Uint8Array([code]));
  return {
    metrics: (f) => entry(f).metrics,
    glyph: (f, code) => {
      const e = entry(f);
      let g = e.glyphs.get(code);
      if (g) return g;
      ctx.font = e.font;
      const s = chr(code);
      const mt = ctx.measureText(s);
      const adv = Math.max(1, Math.round(mt.width));
      const left = Math.ceil(mt.actualBoundingBoxLeft || 0) + 1;
      const right = Math.ceil(mt.actualBoundingBoxRight || mt.width) + 1;
      const up = Math.ceil(mt.actualBoundingBoxAscent || 0) + 1;
      const down = Math.ceil(mt.actualBoundingBoxDescent || 0) + 1;
      const W = Math.max(1, left + right), H = Math.max(1, up + down);
      if (canvas.width < W || canvas.height < H) { canvas.width = Math.max(canvas.width, W); canvas.height = Math.max(canvas.height, H); ctx.font = e.font; }
      ctx.clearRect(0, 0, canvas.width, canvas.height);
      ctx.fillStyle = '#fff';
      ctx.textBaseline = 'alphabetic';
      ctx.fillText(s, left, up);
      const img = ctx.getImageData(0, 0, W, H).data;
      // tight black box
      let x0 = W, x1 = -1, y0 = H, y1 = -1;
      for (let y = 0; y < H; y++) for (let x = 0; x < W; x++) if (img[(y * W + x) * 4 + 3] > 8) { if (x < x0) x0 = x; if (x > x1) x1 = x; if (y < y0) y0 = y; if (y > y1) y1 = y; }
      if (x1 < 0) g = { w: 1, h: 1, ox: 0, oy: 1, adv, cov: new Uint8Array(1) };
      else {
        const w = x1 - x0 + 1, h = y1 - y0 + 1;
        const cov = new Uint8Array(w * h);
        for (let y = 0; y < h; y++) for (let x = 0; x < w; x++) cov[y * w + x] = img[((y + y0) * W + x + x0) * 4 + 3];
        g = { w, h, ox: x0 - left, oy: up - y0, adv, cov };
      }
      e.glyphs.set(code, g);
      return g;
    },
  };
}
