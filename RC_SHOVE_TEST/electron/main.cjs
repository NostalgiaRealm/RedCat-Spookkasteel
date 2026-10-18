const { app, BrowserWindow, Menu, net, protocol, session } = require('electron');
const path = require('node:path');
const { pathToFileURL } = require('node:url');
const { labRoot, configureEnvironment } = require('./runtime.cjs');
const runtime = configureEnvironment();

app.setName('RC Shove Test');
app.setPath('userData', runtime.profile);
app.setPath('sessionData', runtime.session);
app.setPath('temp', runtime.tmp);
app.setPath('crashDumps', runtime.crashes);
app.setAppLogsPath(runtime.logs);
app.commandLine.appendSwitch('disk-cache-dir', runtime.cache);
app.commandLine.appendSwitch('force-color-profile', 'srgb');
if (process.platform === 'linux' && !app.commandLine.hasSwitch('use-angle')) {
  app.commandLine.appendSwitch('use-angle', 'gl');
}
// Ozone is deliberately untouched: npm start -- --ozone-platform=wayland
// supplies the platform before Electron initializes its native window system.
protocol.registerSchemesAsPrivileged([{
  scheme: 'rc-shove',
  privileges: { standard: true, secure: true, supportFetchAPI: true, stream: true },
}]);

const localURL = url => {
  try { const parsed = new URL(url); return parsed.protocol === 'rc-shove:' && parsed.host === 'lab'; }
  catch { return false; }
};
let window;

app.whenReady().then(() => {
  protocol.handle('rc-shove', async request => {
    if (!localURL(request.url)) return new Response('Not found', { status: 404 });
    let filename;
    try {
      const url = new URL(request.url);
      filename = path.resolve(labRoot, '.' + decodeURIComponent(url.pathname === '/' ? '/index.html' : url.pathname));
    } catch { return new Response('Invalid path', { status: 400 }); }
    const relative = path.relative(labRoot, filename);
    if (!relative || relative.startsWith('..') || path.isAbsolute(relative)) return new Response('Not found', { status: 404 });
    try {
      const response = await net.fetch(pathToFileURL(filename).href);
      const headers = new Headers(response.headers);
      headers.set('Content-Security-Policy', "default-src 'self'; script-src 'self' 'unsafe-inline'; style-src 'self' 'unsafe-inline'; img-src 'self' data: blob:; connect-src 'self'; object-src 'none'; frame-src 'none'; base-uri 'self'");
      return new Response(response.body, { status: response.status, headers });
    } catch { return new Response('Not found', { status: 404 }); }
  });
  session.defaultSession.setPermissionRequestHandler((contents, permission, callback) => {
    callback(permission === 'pointerLock' && localURL(contents.getURL()));
  });
  session.defaultSession.setPermissionCheckHandler((contents, permission) => {
    return permission === 'pointerLock' && !!contents && localURL(contents.getURL());
  });
  Menu.setApplicationMenu(null);
  window = new BrowserWindow({
    width: 1280, height: 800, minWidth: 800, minHeight: 540,
    resizable: true, title: 'RC Shove Test', backgroundColor: '#172029',
    webPreferences: { contextIsolation: true, nodeIntegration: false, sandbox: true },
  });
  window.webContents.setWindowOpenHandler(() => ({ action: 'deny' }));
  window.webContents.on('will-navigate', (event, url) => {
    if (!localURL(url)) event.preventDefault();
  });
  window.webContents.on('before-input-event', (event, input) => {
    if (input.type !== 'keyDown' || input.isAutoRepeat) return;
    if (input.key === 'F11') {
      event.preventDefault();
      window.setFullScreen(!window.isFullScreen());
    } else if (input.key === 'Escape') {
      window.webContents.executeJavaScript('document.exitPointerLock?.()').catch(() => {});
    }
  });
  window.loadURL('rc-shove://lab/index.html');
}).catch(error => { console.error(error); app.quit(); });

app.on('window-all-closed', () => app.quit());
