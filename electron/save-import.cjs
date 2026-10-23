const path = require('node:path');
const {TextDecoder} = require('node:util');
const {trustedExportSender} = require('./save-export.cjs');

const MAX_SAVE_IMPORT_BYTES = 32 * 1024 * 1024;

// Bound the actual read as well as the initial stat: a file can change after
// selection, and an unchecked readFile would allocate its entire contents.
async function readSaveDocument(filename, openFile, stillCurrent = () => true) {
  if (path.extname(filename).toLowerCase() !== '.json') {
    throw new Error('Kies een opgeslagen RedCat-avontuur als JSON-bestand.');
  }
  const file = await openFile(filename, 'r');
  try {
    const info = await file.stat();
    if (!info.isFile() || !info.size || info.size > MAX_SAVE_IMPORT_BYTES) {
      throw new Error('Het importbestand is ongeldig of te groot (maximaal 32 MiB).');
    }
    const parts = [], buffer = Buffer.allocUnsafe(64 * 1024);
    let bytes = 0;
    while (stillCurrent()) {
      const {bytesRead} = await file.read(buffer, 0, Math.min(buffer.length, MAX_SAVE_IMPORT_BYTES + 1 - bytes), null);
      if (!bytesRead) break;
      bytes += bytesRead;
      if (bytes > MAX_SAVE_IMPORT_BYTES) throw new Error('Het importbestand is te groot (maximaal 32 MiB).');
      parts.push(Buffer.from(buffer.subarray(0, bytesRead)));
    }
    if (!stillCurrent()) return {canceled: true};
    if (!bytes) throw new Error('Het importbestand is leeg.');
    let text;
    try { text = new TextDecoder('utf-8', {fatal: true}).decode(Buffer.concat(parts, bytes)); }
    catch { throw new Error('Het importbestand bevat geen geldige UTF-8-tekst.'); }
    return {text, filename: path.basename(filename)};
  } finally { await file.close(); }
}

// No renderer-supplied paths are accepted. Only the OS file picker chooses a
// document; parsing and transactional profile restoration happen in the app.
function createSaveImporter({getWindow, dialog, openFile}) {
  let busy = false;
  return async event => {
    const win = getWindow();
    if (!trustedExportSender(event, win)) throw new Error('Importeren is alleen beschikbaar vanuit het spel.');
    if (busy) throw new Error('Er is al een importvenster geopend.');
    busy = true;
    let navigated = false;
    const onNavigate = (_event, _url, _inPlace, isMainFrame) => { if (isMainFrame !== false) navigated = true; };
    const onGone = () => { navigated = true; };
    const contents = win.webContents;
    const stillCurrent = () => !navigated && getWindow() === win && trustedExportSender(event, win);
    contents.on?.('did-start-navigation', onNavigate);
    contents.on?.('render-process-gone', onGone);
    try {
      const result = await dialog.showOpenDialog(win, {
        title: 'Opgeslagen avontuur importeren', buttonLabel: 'Importeren',
        filters: [{name: 'RedCat-avontuur (JSON)', extensions: ['json']}],
        properties: ['openFile'],
      });
      if (result.canceled || !stillCurrent()) return {canceled: true};
      if (result.filePaths?.length !== 1) throw new Error('Kies precies één JSON-bestand.');
      return await readSaveDocument(result.filePaths[0], openFile, stillCurrent);
    } finally {
      contents.removeListener?.('did-start-navigation', onNavigate);
      contents.removeListener?.('render-process-gone', onGone);
      busy = false;
    }
  };
}

module.exports = {MAX_SAVE_IMPORT_BYTES, readSaveDocument, createSaveImporter};
