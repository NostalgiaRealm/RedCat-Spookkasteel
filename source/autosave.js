export const AUTOSAVE_INTERVAL_SECONDS = 60;

// Advance only while playing, using elapsed wall time rather than the capped
// physics step. Slow frames must not turn a minute into several minutes.
export class AutosaveClock {
  constructor() { this.reset(); }
  reset() { this.remaining = AUTOSAVE_INTERVAL_SECONDS; }
  update(seconds, save) {
    if (!Number.isFinite(seconds) || seconds < 0) return false;
    this.remaining -= seconds;
    if (this.remaining > 0) return false;
    const saved = save() === true;
    // One snapshot, even after a long frame. Failed writes retry with a short
    // backoff, rather than hammering localStorage on every animation frame.
    this.remaining = saved ? AUTOSAVE_INTERVAL_SECONDS : 5;
    return saved;
  }
}
