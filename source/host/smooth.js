// The 4-bit channels of a 4444 texture, given back the smoothness the 8-bit bitmap had: the render
// driver's flag smoothSprites (source/host/fixes.js; off = the original's steps). Picture only: it works
// on the bytes the driver hands the renderer and never on game memory.
//
// Why. The engine keeps a bitmap with an alpha bitmap as 8 bits of colour index plus 8 bits of alpha and
// writes it into the only surface with alpha the driver offers, A4R4G4B4, as (value >> 4) per channel
// (checked against the original files for seven of the fairy's bitmaps: every texel equal,
// docs/research/effects-low-end.md 7). A soft edge that took 240 levels in the file has 16 on the
// surface, and enlarged over half a screen each level is a visible contour (her halo, fleuri.bmp).
//
// What. Level a of a channel stands for the values 16a to 16a + 15 of the file. Where a texel and its
// eight neighbours are within one level of each other (a slope the 4 bits could not follow), the
// value is found by repeated averaging with the neighbours, kept inside the sixteen values its
// level allows; one closing pass does the same for texels whose neighbours are within two levels
// (the steeper foot of such a slope, which would otherwise keep a kink beside the smoothed part).
// Everywhere else (a drawn edge, a letter, a cut-out: three levels or more between neighbours) the
// texel keeps a * 17, which is what the driver draws without this. So no texel ever leaves what
// the game's data says, the largest change is 15 of 255, and a hard edge stays hard.
// Both numbers were chosen against the 88 original alpha bitmaps (docs/research/effects-low-end.md 7):
// moving every texel made most of them worse than leaving them alone.

let N = new Uint8Array(0), LO = new Uint8Array(0), HI = new Uint8Array(0), FREE = new Uint8Array(0);
let A = new Float32Array(0), B = new Float32Array(0);

/** How often to average for a level of this width: a quarter of it, 8 to 32. A wide level has wide slopes; measured against the files (effects-low-end.md 7). */
export const smoothPasses = (w) => Math.max(8, Math.min(32, w >> 2));

/**
 * One channel of one level. src[s ..]: w * h texels of 16 bits; the channel is (texel >> shift) & 15.
 * out: RGBA bytes of the level, where out[k * 4 + o] already is level * 17; changed in place.
 * Returns the number of texels that got another value.
 */
export function smoothChannel(src, s, w, h, shift, out, o, passes) {
  const n = w * h;
  if (N.length < n) { N = new Uint8Array(n); LO = new Uint8Array(n); HI = new Uint8Array(n); FREE = new Uint8Array(n); A = new Float32Array(n); B = new Float32Array(n); }
  // the lowest and highest level among a texel and its two neighbours in the row
  for (let y = 0, k = 0; y < h; y++) {
    for (let x = 0; x < w; x++, k++) N[k] = (src[s + k] >> shift) & 15;
    for (let x = 0, q = y * w; x < w; x++, q++) {
      const a = N[x ? q - 1 : q], b = N[q], c = N[x < w - 1 ? q + 1 : q];
      LO[q] = a < b ? (a < c ? a : c) : (b < c ? b : c); HI[q] = a > b ? (a > c ? a : c) : (b > c ? b : c);
    }
  }
  // ... and of the three rows. FREE: 1 when all nine are within one level, 2 when within two, else 0; the work is where it is not 1 by all being equal
  let x0 = w, x1 = -1, y0 = h, y1 = -1;
  for (let y = 0, k = 0; y < h; y++) {
    const up = y ? -w : 0, dn = y < h - 1 ? w : 0;
    for (let x = 0; x < w; x++, k++) {
      let lo = LO[k], hi = HI[k];
      if (LO[k + up] < lo) lo = LO[k + up]; if (LO[k + dn] < lo) lo = LO[k + dn];
      if (HI[k + up] > hi) hi = HI[k + up]; if (HI[k + dn] > hi) hi = HI[k + dn];
      const d = hi - lo;
      FREE[k] = d <= 1 ? 1 : d === 2 ? 2 : 0;
      if (d === 1 || d === 2) { if (x < x0) x0 = x; if (x > x1) x1 = x; if (y < y0) y0 = y; if (y > y1) y1 = y; }
      A[k] = N[k] * 17;
    }
  }
  if (x1 < 0) return 0;
  // a change travels one texel per pass
  x0 = Math.max(0, x0 - passes - 1); x1 = Math.min(w - 1, x1 + passes + 1); y0 = Math.max(0, y0 - passes - 1); y1 = Math.min(h - 1, y1 + passes + 1);
  const r0 = Math.max(0, y0 - 1), r1 = Math.min(h - 1, y1 + 1);
  for (let it = 0; it <= passes; it++) {
    const most = it < passes ? 1 : 2;
    for (let y = r0; y <= r1; y++) for (let x = x0, q = y * w + x0; x <= x1; x++, q++) B[q] = (A[x ? q - 1 : q] + A[q] + A[x < w - 1 ? q + 1 : q]) * (1 / 3);
    for (let y = y0; y <= y1; y++) {
      const up = y ? -w : 0, dn = y < h - 1 ? w : 0;
      for (let x = x0, q = y * w + x0; x <= x1; x++, q++) {
        if (!FREE[q] || FREE[q] > most) continue;
        const v = (B[q + up] + B[q] + B[q + dn]) * (1 / 3), lo = N[q] << 4;
        A[q] = v < lo ? lo : v > lo + 15 ? lo + 15 : v;
      }
    }
  }
  let changed = 0;
  for (let y = y0; y <= y1; y++) for (let x = x0, q = y * w + x0; x <= x1; x++, q++) {
    if (!FREE[q]) continue;
    const v = Math.round(A[q]);
    if (out[q * 4 + o] !== v) { out[q * 4 + o] = v; changed++; }
  }
  return changed;
}
