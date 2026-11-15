// What is in a screenshot, for the checks that must not pass with a black or frozen picture
// (gpu-memory-check.mjs, render-check.mjs). Reads the PNG files Playwright writes: 8 bits per
// channel, RGB or RGBA, not interlaced.
import zlib from 'node:zlib';

/** A PNG file's pixels: { width, height, channels, data } with `channels` bytes per pixel, rows from the top. */
export function decodePng(file) {
  if (file.readUInt32BE(0) !== 0x89504E47) throw new Error('not a PNG file');
  let width = 0, height = 0, channels = 0;
  const parts = [];
  for (let o = 8; o < file.length;) {
    const n = file.readUInt32BE(o), type = file.toString('latin1', o + 4, o + 8);
    if (type === 'IHDR') {
      width = file.readUInt32BE(o + 8); height = file.readUInt32BE(o + 12);
      const depth = file[o + 16], colour = file[o + 17];
      channels = colour === 6 ? 4 : colour === 2 ? 3 : 0;
      if (depth !== 8 || !channels || file[o + 20]) throw new Error(`PNG of a kind this reader does not know (depth ${depth}, colour ${colour}, interlace ${file[o + 20]})`);
    } else if (type === 'IDAT') parts.push(file.subarray(o + 8, o + 8 + n));
    o += 12 + n;
  }
  const raw = zlib.inflateSync(Buffer.concat(parts)), stride = width * channels;
  const data = new Uint8Array(height * stride);
  for (let y = 0; y < height; y++) {
    const filter = raw[y * (stride + 1)], src = y * (stride + 1) + 1, dst = y * stride;
    for (let x = 0; x < stride; x++) {
      const a = x >= channels ? data[dst + x - channels] : 0, b = y ? data[dst + x - stride] : 0, c = y && x >= channels ? data[dst + x - stride - channels] : 0;
      let v = raw[src + x];
      if (filter === 1) v += a; else if (filter === 2) v += b; else if (filter === 3) v += (a + b) >> 1;
      else if (filter === 4) { const p = a + b - c, pa = Math.abs(p - a), pb = Math.abs(p - b), pc = Math.abs(p - c); v += pa <= pb && pa <= pc ? a : pb <= pc ? b : c; }
      data[dst + x] = v;
    }
  }
  return { width, height, channels, data };
}

/**
 * What a picture shows, in percent of its pixels: lit (any channel over 24: not black), white
 * (all three over 240), and the number of different colours among a thousand pixels spread over
 * it. A game picture is mostly lit, hardly white, and has hundreds of colours.
 */
export function pictureStats(png) {
  const { width, height, channels, data } = png, n = width * height;
  let lit = 0, white = 0;
  for (let k = 0; k < n; k++) {
    const r = data[k * channels], g = data[k * channels + 1], b = data[k * channels + 2];
    if (r > 24 || g > 24 || b > 24) lit++;
    if (r > 240 && g > 240 && b > 240) white++;
  }
  const colours = new Set();
  for (let k = 0; k < 1000; k++) { const p = Math.floor((k + 0.5) * n / 1000) * channels; colours.add((data[p] >> 3) << 10 | (data[p + 1] >> 3) << 5 | (data[p + 2] >> 3)); }
  return { lit: +(lit * 100 / n).toFixed(1), white: +(white * 100 / n).toFixed(1), colours: colours.size };
}

/** The share of pixels, in percent, that differ between two pictures of the same size by more than 16 in a channel. */
export function pictureDiff(a, b) {
  if (a.width !== b.width || a.height !== b.height || a.channels !== b.channels) return 100;
  let d = 0;
  const n = a.width * a.height, c = a.channels;
  for (let k = 0; k < n; k++) if (Math.abs(a.data[k * c] - b.data[k * c]) > 16 || Math.abs(a.data[k * c + 1] - b.data[k * c + 1]) > 16 || Math.abs(a.data[k * c + 2] - b.data[k * c + 2]) > 16) d++;
  return +(d * 100 / n).toFixed(1);
}
