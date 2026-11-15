// The desktop shell of the recompiled port: one window on the packaged site (dist/site, built by
// tools/package.mjs; inside a package it is the folder site/ next to this one).
//
// The page is served from inside the app, without a network port, by the scheme redcat: with the
// two headers that isolate it (it shares memory with its game thread; docs/hosting.md). The
// address is redcat://game/index.html and the profile folder is "redcat-spookkasteel-port": both
// are those of the JavaScript port's desktop app (../RCSPOOK_NEW/electron/main.cjs, versions up
// to 1.0.8), so this page finds that app's players and saved games in its own storage and takes
// them over as it does on the web site (source/web/legacy-import.js, docs/legacy-saves.md).
// The old data is only read.
const { app, BrowserWindow, ipcMain, protocol, net, screen, Menu, shell } = require('electron');
const path = require('node:path');
const fs = require('node:fs');
const { pathToFileURL } = require('node:url');

const SCHEME = 'redcat', HOST = 'game', ORIGIN = `${SCHEME}://${HOST}`;
const TITLE = 'RedCat Spookkasteel';
// The old app had no productName in its packaged package.json, so Electron named its profile
// folder after the package name. It is set here by name, whatever this package is called.
const PROFILE = 'redcat-spookkasteel-port';
const ISOLATION = {
  'Cross-Origin-Opener-Policy': 'same-origin',
  'Cross-Origin-Embedder-Policy': 'require-corp',
  'Cross-Origin-Resource-Policy': 'same-origin',
};
const TYPES = {
  html: 'text/html; charset=utf-8', js: 'text/javascript; charset=utf-8', mjs: 'text/javascript; charset=utf-8',
  css: 'text/css; charset=utf-8', json: 'application/json; charset=utf-8', wasm: 'application/wasm',
  png: 'image/png', jpg: 'image/jpeg', jpeg: 'image/jpeg', svg: 'image/svg+xml', ico: 'image/x-icon', bmp: 'image/bmp',
  wav: 'audio/wav', mp3: 'audio/mpeg', ogg: 'audio/ogg', webm: 'video/webm', mp4: 'video/mp4',
  txt: 'text/plain; charset=utf-8', md: 'text/plain; charset=utf-8',
};
const EXTERNAL = /^https:\/\//i;          // the only addresses handed to the system browser

// Before the app is ready: the scheme is an origin like https (standard, secure), may be fetched
// from, streams media, and keeps compiled scripts and the game module in the code cache.
protocol.registerSchemesAsPrivileged([{ scheme: SCHEME, privileges: { standard: true, secure: true, supportFetchAPI: true, stream: true, codeCache: true } }]);
// A profile given on the command line (--user-data-dir, every test) is left alone.
if (!app.commandLine.hasSwitch('user-data-dir')) app.setPath('userData', path.join(app.getPath('appData'), PROFILE));
// As the old app: the original artwork is sRGB on every desktop.
app.commandLine.appendSwitch('force-color-profile', 'srgb');
// The old app ran above the display refresh unless REDCAT_VSYNC=1. This port's game thread is
// ticked by the page's frames, so the display refresh is kept unless REDCAT_VSYNC=0 asks otherwise.
if (process.env.REDCAT_VSYNC === '0') app.commandLine.appendSwitch('disable-frame-rate-limit');
if (process.platform === 'linux') {
  // As the old app: never choose the ozone platform here (a Wayland window with an X11 presenter
  // is blank); start with --ozone-platform=x11 when the window stays empty.
  if (!app.commandLine.hasSwitch('use-angle')) app.commandLine.appendSwitch('use-angle', process.env.REDCAT_GPU || 'gl');
}

const packagedSite = path.join(__dirname, '..', 'site');
const root = fs.existsSync(path.join(packagedSite, 'index.html')) ? packagedSite : path.join(__dirname, '..', 'dist', 'site');

const answer = (status, text) => new Response(text, { status, headers: { ...ISOLATION, 'Content-Type': 'text/plain; charset=utf-8', 'Cache-Control': 'no-store' } });

/** One file of the site, with the isolation headers on every answer (the errors too). */
async function serve(request) {
  let url, rel;
  try { url = new URL(request.url); rel = decodeURIComponent(url.pathname); } catch { return answer(400, 'Bad request'); }
  if (url.host !== HOST) return answer(404, 'Not found');
  if (request.method !== 'GET' && request.method !== 'HEAD') return answer(405, 'Method not allowed');
  if (rel.endsWith('/')) rel += 'index.html';
  const file = path.resolve(root, '.' + rel);
  if (!file.startsWith(root + path.sep)) return answer(404, 'Not found');
  let info = null;
  try { info = await fs.promises.stat(file); } catch { /* not there */ }
  if (!info || !info.isFile()) return answer(404, 'Not found');
  const headers = { ...ISOLATION, 'Content-Type': TYPES[path.extname(file).slice(1).toLowerCase()] || 'application/octet-stream', 'Accept-Ranges': 'bytes', 'Cache-Control': 'no-cache' };
  if (request.method === 'HEAD') return new Response(null, { status: 200, headers: { ...headers, 'Content-Length': String(info.size) } });
  // A byte range (a movie being played or sought): the file is read whole through Node's file
  // calls, which also read inside the app's archive, and the asked part is sent. The last file is
  // kept, a movie is asked for in several parts.
  const range = /^bytes=(\d*)-(\d*)$/.exec(request.headers.get('range') || '');
  if (range && (range[1] || range[2])) {
    let start = range[1] ? Number(range[1]) : Math.max(0, info.size - Number(range[2]));
    let end = range[1] && range[2] ? Math.min(Number(range[2]), info.size - 1) : info.size - 1;
    if (start > end || start >= info.size) return new Response(null, { status: 416, headers: { ...ISOLATION, 'Content-Range': `bytes */${info.size}` } });
    try { if (ranged.file !== file || ranged.size !== info.size) { ranged.data = await fs.promises.readFile(file); ranged.file = file; ranged.size = info.size; } } catch { return answer(404, 'Not found'); }
    return new Response(ranged.data.subarray(start, end + 1), { status: 206, headers: { ...headers, 'Content-Range': `bytes ${start}-${end}/${info.size}`, 'Content-Length': String(end - start + 1) } });
  }
  // The file itself comes from Chromium's own file loader, which reads inside the app's archive.
  let got;
  try { got = await net.fetch(pathToFileURL(file).href, { bypassCustomProtocolHandlers: true }); } catch { return answer(404, 'Not found'); }
  return new Response(got.body, { status: 200, headers: { ...headers, 'Content-Length': String(info.size) } });
}
const ranged = { file: '', size: 0, data: null };

const fromGame = (event, win) => {
  if (!win || win.isDestroyed() || event.sender !== win.webContents || event.senderFrame !== win.webContents.mainFrame) return false;
  try { const u = new URL(event.senderFrame.url); return u.protocol === SCHEME + ':' && u.host === HOST; } catch { return false; }
};

let win = null;
if (!app.requestSingleInstanceLock()) app.quit();
else {
  app.on('second-instance', () => { if (win && !win.isDestroyed()) { if (win.isMinimized()) win.restore(); win.show(); win.focus(); } });
  app.whenReady().then(() => {
    if (process.env.REDCAT_DESKTOP_DEBUG === '1') console.log(JSON.stringify({ userData: app.getPath('userData'), defaultUserData: path.join(app.getPath('appData'), PROFILE), site: root, version: app.getVersion(), electron: process.versions.electron }));
    const icons = [path.join(__dirname, '..', 'assets', 'icons'), path.join(__dirname, '..', '..', 'RCSPOOK_NEW', 'assets', 'icons')].find((d) => fs.existsSync(path.join(d, 'redcat.png')));
    const icon = icons ? path.join(icons, process.platform === 'win32' ? 'redcat.ico' : 'redcat.png') : undefined;
    if (process.platform === 'darwin' && icon) app.dock?.setIcon(icon);
    protocol.handle(SCHEME, serve);
    Menu.setApplicationMenu(null);
    const area = screen.getPrimaryDisplay().workAreaSize;
    win = new BrowserWindow({
      width: Math.min(1366, area.width), height: Math.min(850, area.height), minWidth: 800, minHeight: 540,
      title: TITLE, backgroundColor: '#101920', icon,
      webPreferences: { preload: path.join(__dirname, 'preload.cjs'), contextIsolation: true, nodeIntegration: false, sandbox: true },
    });
    win.on('page-title-updated', (event) => event.preventDefault());
    win.on('closed', () => { win = null; });
    // Nothing but the game is shown in the window; a link to a web site opens in the system browser.
    win.webContents.setWindowOpenHandler(({ url }) => {
      if (EXTERNAL.test(url)) shell.openExternal(url).catch((error) => console.error('Could not open the link:', error));
      return { action: 'deny' };
    });
    win.webContents.on('will-navigate', (event, url) => {
      if (url.startsWith(ORIGIN + '/')) return;
      event.preventDefault();
      if (EXTERNAL.test(url)) shell.openExternal(url).catch((error) => console.error('Could not open the link:', error));
    });
    // Ja in the Stoppen dialog (source/menu/menu.js, closeGame) ends the program, as the original's did.
    ipcMain.handle('app:quit', (event) => { if (!fromGame(event, win)) throw new Error('Afsluiten is alleen beschikbaar vanuit het spel.'); app.quit(); });
    win.loadURL(ORIGIN + '/index.html');
  });
  app.on('window-all-closed', () => app.quit());
}
