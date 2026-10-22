// Only the Android WebView injects this origin-restricted message endpoint.
// Do not impersonate window.desktop: browser/mobile behavior must stay active.
export class AndroidHost {
  constructor(window = globalThis.window) {
    this.window = window;
    this.bridge = window?.RedCatAndroid;
    this.enabled = typeof this.bridge?.postMessage === 'function';
    this.active = !this.enabled;
    this.keepAwake = null;
    this.listener = null;
  }

  connect({onSuspend = () => {}, onForeground = () => {}, onBack = () => {}} = {}) {
    if (!this.enabled || this.listener) return;
    this.listener = event => {
      const message = event.detail;
      if (message?.type === 'lifecycle' && typeof message.active === 'boolean') {
        const changed = this.active !== message.active;
        this.active = message.active;
        if (changed) (this.active ? onForeground : onSuspend)();
      } else if (message?.type === 'back' && this.active) onBack();
    };
    this.window.addEventListener('redcat:android', this.listener);
    this.send({type:'ready'});
  }

  send(message) {
    if (!this.enabled) return false;
    this.bridge.postMessage(JSON.stringify(message));
    return true;
  }

  setFullscreen(enabled) { return this.send({type:'fullscreen', enabled:!!enabled}); }
  setKeepAwake(enabled) {
    enabled = !!enabled && this.active;
    if (this.keepAwake === enabled) return;
    this.keepAwake = enabled;
    this.send({type:'keep-awake', enabled});
  }
  quit() { return this.send({type:'quit'}); }
  dispose() {
    if (this.listener) this.window.removeEventListener('redcat:android', this.listener);
    this.listener = null;
  }
}

// Automatic Android resolution is a pixel budget, not a device-resolution
// promise. Preserve aspect ratio on portrait screens and ultrawide phones.
export function androidRenderSize(width, height, pixelRatio = 1) {
  const safe = value => Number.isFinite(value) && value > 0 ? value : 1;
  const w = safe(width) * safe(pixelRatio), h = safe(height) * safe(pixelRatio);
  const scale = Math.min(1, 720 / Math.min(w,h), Math.sqrt((1280 * 720) / (w * h)));
  return [Math.max(1,Math.floor(w*scale)),Math.max(1,Math.floor(h*scale))];
}
