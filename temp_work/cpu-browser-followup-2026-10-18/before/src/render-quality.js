// Scale only the 3D drawing buffer; HTML menus and HUD retain window resolution.
export function normalizeRenderScale(value) {
  return Number.isFinite(value) ? Math.max(25, Math.min(300, value)) : 100;
}
export function scaledRenderSize(width, height, scale) {
  return [Math.max(1, Math.round(width * scale)), Math.max(1, Math.round(height * scale))];
}
export class RenderQuality {
  constructor() { this.reset(); }
  reset() { this.reductions = 0; this.resetSample(); }
  resetSample() { this.elapsed = 0; this.frames = 0; this.lowSeconds = 0; this.warmup = 2; this.fps = null; }
  scale(percent = 100) { return Math.max(.25, normalizeRenderScale(percent) / 100 - .25 * this.reductions); }
  sample(dt, active, percent = 100) {
    if (!active || !Number.isFinite(dt) || dt <= 0 || dt > 1) { this.resetSample(); return false; }
    if (this.warmup > 0) { this.warmup -= dt; return false; }
    this.elapsed += dt; this.frames++;
    if (this.elapsed < 1) return false;
    this.fps = this.frames / this.elapsed;
    this.lowSeconds = this.fps < 30 ? this.lowSeconds + this.elapsed : 0;
    this.elapsed = 0; this.frames = 0;
    if (this.lowSeconds >= 3 && this.scale(percent) > .25) {
      this.reductions++; this.resetSample(); return true;
    }
    return false;
  }
}
