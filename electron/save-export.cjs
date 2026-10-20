const MAX_SAVE_EXPORT_BYTES = 32 * 1024 * 1024;

function validateExportPayload(payload) {
  if (!payload || typeof payload.filename !== 'string' ||
      !/^RedCat-Spookkasteel-[A-Za-z0-9_-]{1,100}\.json$/.test(payload.filename) ||
      typeof payload.text !== 'string' || !payload.text.length ||
      Buffer.byteLength(payload.text, 'utf8') > MAX_SAVE_EXPORT_BYTES) {
    throw new Error('Het exportbestand is ongeldig of te groot (maximaal 32 MiB).');
  }
  let bundle;
  try { bundle = JSON.parse(payload.text); } catch { throw new Error('Het exportbestand bevat ongeldige JSON.'); }
  if (bundle?.format !== 'redcat-spookkasteel-save' || bundle.formatVersion !== 1 ||
      bundle.save?.version !== 1 || !bundle.save?.game || !Array.isArray(bundle.save.position) ||
      bundle.save.position.length !== 3 || !bundle.save.position.every(Number.isFinite) ||
      typeof bundle.player?.name !== 'string') {
    throw new Error('Het bestand is geen opgeslagen RedCat-avontuur.');
  }
  return {filename: payload.filename, text: payload.text};
}

function trustedExportSender(event, win) {
  if (!win || win.isDestroyed() || event?.sender !== win.webContents ||
      event.senderFrame !== win.webContents.mainFrame) return false;
  try {
    const url = new URL(event.senderFrame.url);
    return url.protocol === 'redcat:' && url.host === 'game' && !url.username && !url.password;
  } catch { return false; }
}

// The renderer supplies a suggested name and JSON, never an output path.
function createSaveExporter({getWindow, dialog, writeFile}) {
  let busy = false;
  return async (event, payload) => {
    const win = getWindow();
    if (!trustedExportSender(event, win)) throw new Error('Exporteren is alleen beschikbaar vanuit het spel.');
    if (busy) throw new Error('Er is al een exportvenster geopend.');
    const {filename, text} = validateExportPayload(payload);
    busy = true;
    try {
      const result = await dialog.showSaveDialog(win, {
        title: 'Opgeslagen avontuur exporteren',
        buttonLabel: 'Exporteren',
        defaultPath: filename,
        filters: [{name: 'RedCat-avontuur (JSON)', extensions: ['json']}],
        properties: ['showOverwriteConfirmation', 'createDirectory'],
      });
      if (result.canceled || !result.filePath || win.isDestroyed()) return {canceled: true};
      // This path comes exclusively from the native save dialog.
      await writeFile(result.filePath, text, {encoding: 'utf8'});
      return {saved: true};
    } finally { busy = false; }
  };
}

module.exports = {MAX_SAVE_EXPORT_BYTES, validateExportPayload, trustedExportSender, createSaveExporter};
