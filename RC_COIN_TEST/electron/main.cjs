const path = require('node:path');
const { pathToFileURL } = require('node:url');
const { labRoot, configureEnvironment } = require('./runtime.cjs');
const runtime = configureEnvironment();
const { app, BrowserWindow, Menu, net, protocol, session } = require('electron');

app.setName('RC Coin Test');
app.setPath('userData', runtime.profile);
app.setPath('sessionData', runtime.session);
app.setPath('temp', runtime.tmp);
app.setPath('crashDumps', runtime.crashes);
app.setAppLogsPath(runtime.logs);
app.commandLine.appendSwitch('disk-cache-dir', runtime.cache);
app.commandLine.appendSwitch('force-color-profile', 'srgb');
// Keep caller-supplied Ozone and GPU options intact.
protocol.registerSchemesAsPrivileged([{
  scheme: 'rc-coin',
  privileges: { standard: true, secure: true, supportFetchAPI: true, stream: true },
}]);

const localURL = value => {
  try {
    const url = new URL(value);
    return url.protocol === 'rc-coin:' && url.host === 'lab' && !url.username && !url.password;
  } catch { return false; }
};
let window;

app.whenReady().then(() => {
  protocol.handle('rc-coin', async request => {
    if (!localURL(request.url)) return new Response('Not found', { status: 404 });
    let filename;
    try {
      const url = new URL(request.url);
      filename = path.resolve(labRoot, '.' + decodeURIComponent(url.pathname === '/' ? '/index.html' : url.pathname));
    } catch { return new Response('Invalid path', { status: 400 }); }
    const relative = path.relative(labRoot, filename);
    if (!relative || relative === '..' || relative.startsWith('..' + path.sep) || path.isAbsolute(relative)) {
      return new Response('Not found', { status: 404 });
    }
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
    resizable: true, title: 'RC Coin Test', backgroundColor: '#172029',
    webPreferences: { contextIsolation: true, nodeIntegration: false, sandbox: true },
  });
  window.webContents.setWindowOpenHandler(() => ({ action: 'deny' }));
  window.webContents.on('will-navigate', (event, url) => {
    if (!localURL(url)) event.preventDefault();
  });
  window.webContents.on('before-input-event', (event, input) => {
    if (input.type === 'keyDown' && !input.isAutoRepeat && input.key === 'F11') {
      event.preventDefault();
      window.setFullScreen(!window.isFullScreen());
    }
  });
  return window.loadURL('rc-coin://lab/index.html');
}).catch(error => { console.error(error); app.quit(); });

app.on('window-all-closed', () => app.quit());
