import {MAX_SAVE_IMPORT_BYTES} from './save-import.js';

/** Read only a user-selected file. Native hosts use their own document picker. */
export async function pickSaveImport({importFile = null, document = globalThis.document,
  window = globalThis.window, defer = callback => setTimeout(callback, 300), cancelDefer = clearTimeout} = {}) {
  if (importFile) return importFile();
  return new Promise((resolve, reject) => {
    const input = document.createElement('input');
    input.type = 'file'; input.accept = '.json,application/json'; input.hidden = true;
    input.setAttribute('data-save-import', '');
    let done = false, reading = false, timer;
    const finish = (result, error) => {
      if (done) return;
      done = true; cancelDefer(timer);
      window.removeEventListener('focus', focused); input.remove();
      if (error) reject(error); else resolve(result);
    };
    const chosen = async () => {
      if (done || reading) return;
      const file = input.files?.[0];
      if (!file) {finish({canceled: true}); return;}
      reading = true;
      try {
        if (!/\.json$/i.test(file.name)) throw new Error('Kies een geëxporteerd JSON-bestand van RedCat Spookkasteel.');
        if (file.size > MAX_SAVE_IMPORT_BYTES) throw new Error('Het importbestand is te groot (maximaal 32 MiB).');
        if (!file.size) throw new Error('Het importbestand is leeg.');
        finish({filename: file.name, text: await file.text()});
      } catch (error) {finish(null, error);}
    };
    // Modern browsers dispatch cancel. The focus fallback also releases the UI
    // in older browsers; allow their change event to arrive before checking.
    const focused = () => {cancelDefer(timer); timer = defer(chosen);};
    input.addEventListener('change', chosen);
    input.addEventListener('cancel', () => finish({canceled: true}));
    window.addEventListener('focus', focused);
    (document.querySelector('dialog[open]') || document.body).append(input);
    try {input.click();} catch (error) {finish(null, error);}
  });
}
