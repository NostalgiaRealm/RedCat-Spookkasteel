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
    this.exportSequence = 0;
    this.exports = new Map();
    this.imports = new Map();
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
      else if (message?.type === 'export-result') {
        const pending = this.exports.get(message.id);
        if (!pending) return;
        this.exports.delete(message.id);
        if (message.canceled === true) pending.resolve(false);
        else if (message.ok === true) pending.resolve({saved:true});
        else pending.reject(new Error(message.error || 'Het avontuur kon niet worden geëxporteerd.'));
      } else if (message?.type === 'import-result') {
        const pending = this.imports.get(message.id);
        if (!pending) return;
        this.imports.delete(message.id);
        if (message.canceled === true) pending.resolve({canceled:true});
        else if (message.ok === true && typeof message.filename === 'string' && /\.json$/i.test(message.filename) &&
            typeof message.text === 'string' && message.text.length > 0 &&
            new TextEncoder().encode(message.text).length <= 32 * 1024 * 1024) {
          pending.resolve({text:message.text,filename:message.filename});
        } else pending.reject(new Error(message.error || 'Het avontuur kon niet worden geïmporteerd.'));
      }
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
  exportSave({filename, text} = {}) {
    if (!this.enabled || !this.listener) return Promise.reject(new Error('Android-export is niet beschikbaar.'));
    if (this.exports.size) return Promise.reject(new Error('Er is al een exportvenster geopend.'));
    if (this.imports.size) return Promise.reject(new Error('Er is al een importvenster geopend.'));
    if (typeof filename !== 'string' || !/^RedCat-Spookkasteel-[A-Za-z0-9_-]{1,100}\.json$/.test(filename) ||
        typeof text !== 'string' || !text.length || new TextEncoder().encode(text).length > 32 * 1024 * 1024) {
      return Promise.reject(new Error('Het exportbestand is ongeldig of te groot (maximaal 32 MiB).'));
    }
    const id = `save-${++this.exportSequence}`;
    return new Promise((resolve, reject) => {
      this.exports.set(id, {resolve, reject});
      try { this.send({type:'export-save', id, filename, text}); }
      catch (error) { this.exports.delete(id); reject(error); }
    });
  }
  importSave() {
    if (!this.enabled || !this.listener) return Promise.reject(new Error('Android-import is niet beschikbaar.'));
    if (this.imports.size || this.exports.size) return Promise.reject(new Error('Er is al een bestandsvenster geopend.'));
    const id = `import-${++this.exportSequence}`;
    return new Promise((resolve, reject) => {
      this.imports.set(id, {resolve, reject});
      try { this.send({type:'import-save', id}); }
      catch (error) { this.imports.delete(id); reject(error); }
    });
  }
  dispose() {
    if (this.listener) this.window.removeEventListener('redcat:android', this.listener);
    this.listener = null;
    for (const pending of this.exports.values()) pending.reject(new Error('Het exportvenster is gesloten.'));
    this.exports.clear();
    for (const pending of this.imports.values()) pending.reject(new Error('Het importvenster is gesloten.'));
    this.imports.clear();
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
