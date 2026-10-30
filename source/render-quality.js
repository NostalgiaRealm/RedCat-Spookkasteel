// Scale only the 3D drawing buffer; HTML menus and HUD retain window resolution.
export function normalizeRenderScale(value) {
  return Number.isFinite(value) ? Math.max(25, Math.min(300, value)) : 100;
}
export function scaledRenderSize(width, height, scale) {
  return [Math.max(1, Math.round(width * scale)), Math.max(1, Math.round(height * scale))];
}
// Lower-cost rendering choices for phones and tablets; main.js fills this in
// before the first level loads.
export const renderProfile = {anisotropy: 8, coronaRaysPerFrame: 8};
// three's exact curve runs pow() for every pixel. This sqrt form stays within
// about one byte of it, and keeps the exact linear segment near black.
const EXACT_SRGB_OUTPUT = 'vec4( mix( pow( value.rgb, vec3( 0.41666 ) ) * 1.055 - vec3( 0.055 ), value.rgb * 12.92, vec3( lessThanEqual( value.rgb, vec3( 0.0031308 ) ) ) ), value.a )';
const FAST_SRGB_OUTPUT = 'vec4( mix( max( 0.585122381 * sqrt( value.rgb ) + 0.783140355 * sqrt( sqrt( value.rgb ) ) - 0.368262736 * sqrt( sqrt( sqrt( value.rgb ) ) ), vec3( 0.0 ) ), value.rgb * 12.92, vec3( lessThanEqual( value.rgb, vec3( 0.0031308 ) ) ) ), value.a )';
export function fastSrgbOutput(chunk) {
  if (!chunk.includes(EXACT_SRGB_OUTPUT)) throw new Error('Unknown sRGB output chunk');
  return chunk.replace(EXACT_SRGB_OUTPUT, FAST_SRGB_OUTPUT);
}
// A 90/120 Hz phone would otherwise render the whole game up to twice as often,
// heating it into throttling. Display frames between 60 Hz deadlines are
// skipped; movement already follows elapsed time.
export class FrameLimiter {
  constructor(interval = 1000 / 60) { this.interval = interval; this.due = -Infinity; }
  ready(now) {
    if (now < this.due - 1.5) return false;
    this.due += this.interval;
    // After a slow frame, restart the cadence instead of catching up.
    if (this.due < now) this.due = now + this.interval;
    return true;
  }
}
export class RenderQuality {
  constructor() { this.reset(); }
  reset() { this.reductions = 0; this.resetSample(); }
  resetSample() { this.elapsed = 0; this.frames = 0; this.lowSeconds = 0; this.warmup = 2; this.fps = null; }
  scalePercent(percent = 100) { return Math.max(25, normalizeRenderScale(percent) - 25 * this.reductions); }
  scale(percent = 100) { return this.scalePercent(percent) / 100; }
  updateSettings(dt, active, settings) {
    if (!this.sample(dt, active, settings.renderScale, settings.msaa)) return false;
    // Commit the actual scale, so the renderer, menu and saved preference share
    // one value. Clear the offset to avoid applying this reduction twice.
    settings.renderScale = this.scalePercent(settings.renderScale);
    settings.msaa = 0;
    this.reductions = 0;
    return true;
  }
  sample(dt, active, percent = 100, msaa = 0) {
    if (!active || !Number.isFinite(dt) || dt <= 0 || dt > 1) { this.resetSample(); return false; }
    if (this.warmup > 0) { this.warmup -= dt; return false; }
    this.elapsed += dt; this.frames++;
    if (this.elapsed < 1) return false;
    this.fps = this.frames / this.elapsed;
    this.lowSeconds = this.fps < 30 ? this.lowSeconds + this.elapsed : 0;
    this.elapsed = 0; this.frames = 0;
    if (this.lowSeconds >= 3 && (this.scale(percent) > .25 || msaa > 0)) {
      // At minimum scale, disabling MSAA can still relieve GPU pressure.
      if (this.scale(percent) > .25) this.reductions++;
      this.resetSample(); return true;
    }
    return false;
  }
}
