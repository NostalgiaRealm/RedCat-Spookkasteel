const { app, BrowserWindow, ipcMain, protocol, net, screen, Menu, shell } = require('electron');
const path = require('node:path');
const { pathToFileURL } = require('node:url');
const aboutLinks = new Set([
  'https://ko-fi.com/nostalgiarealm',
  'https://www.nostalgiarealm.com/',
  'https://www.youtube.com/@Nostalgia_Realm'
]);
// A local secure origin lets the same frontend run in desktop and future mobile shells.
protocol.registerSchemesAsPrivileged([{ scheme: 'redcat', privileges: { standard: true, secure: true, supportFetchAPI: true, stream: true } }]);
// The original artwork is sRGB; use the same output space on every desktop.
app.commandLine.appendSwitch('force-color-profile','srgb');
if (process.platform === 'linux') {
  // Ozone chooses the native window system before the main script executes.
  // Never change ozone-platform here: doing so can create a Wayland window
  // while Chromium's presenter expects an X11 XID (the blank 'window 1' bug).
  // The launcher supplies --ozone-platform=x11 before Electron starts.
  if (!app.commandLine.hasSwitch('use-angle')) app.commandLine.appendSwitch('use-angle', process.env.REDCAT_GPU || 'gl');
}
let win;
app.whenReady().then(() => {
  const root = path.resolve(__dirname, '..');
  protocol.handle('redcat', request => {
    const url = new URL(request.url);
    const filename = path.resolve(root, '.' + decodeURIComponent(url.pathname === '/' ? '/index.html' : url.pathname));
    if (url.host !== 'game' || !filename.startsWith(root + path.sep)) return new Response('Not found', { status: 404 });
    return net.fetch(pathToFileURL(filename).href);
  });
  Menu.setApplicationMenu(null);
  const area = screen.getPrimaryDisplay().workAreaSize;
  win = new BrowserWindow({
    width: Math.min(1366, area.width), height: Math.min(850, area.height), minWidth: 800, minHeight: 540,
    title: 'RedCat Spookkasteel', backgroundColor: '#101920',
    webPreferences: { preload: path.join(__dirname, 'preload.cjs'), contextIsolation: true, nodeIntegration: false, sandbox: true }
  });
  win.webContents.setWindowOpenHandler(({ url }) => {
    if (aboutLinks.has(url)) shell.openExternal(url).catch(error => console.error('Could not open About link:', error));
    return { action: 'deny' };
  });
  win.webContents.on('will-navigate', (event, url) => { if (!url.startsWith('redcat://game/')) event.preventDefault(); });
  ipcMain.handle('display:apply', async (_event, options) => {
    if (!options || typeof options.fullscreen !== 'boolean') throw new Error('Invalid display options');
    const width = Number(options.width), height = Number(options.height);
    if (!Number.isInteger(width) || !Number.isInteger(height) || width < 640 || width > 7680 || height < 480 || height > 4320) throw new Error('Invalid resolution');
    if(win.isFullScreen()!==options.fullscreen) {
      // Electron emits leave-full-screen before X11's window manager restores
      // the window. Wait for its configure/resize event before changing size.
      await new Promise(resolve=>{
        const event=options.fullscreen?'enter-full-screen':'leave-full-screen';
        const done=()=>{clearTimeout(timer);win.removeListener(event,changed);win.removeListener('resize',resized);resolve();};
        let changedState=false;
        const changed=()=>{changedState=true;};
        const resized=()=>{if(changedState&&win.isFullScreen()===options.fullscreen)done();};
        const timer=setTimeout(done,1200);win.once(event,changed);win.on('resize',resized);win.setFullScreen(options.fullscreen);
      });
      if(win.isFullScreen()!==options.fullscreen)throw new Error('Het bureaublad kon de schermmodus niet wijzigen.');
    }
    if (!options.fullscreen) {
      const outer=win.getBounds(),inner=win.getContentBounds();
      const work=screen.getDisplayMatching(outer).workArea;
      // Content bounds can still describe the old fullscreen surface for a tick.
      const targetWidth=Math.min(width+Math.max(0,outer.width-inner.width),work.width);
      const targetHeight=Math.min(height+Math.max(0,outer.height-inner.height),work.height-40);
      // One bounds request avoids center() overwriting an unacknowledged X11 resize.
      win.setBounds({x:work.x+Math.floor((work.width-targetWidth)/2),y:work.y+Math.floor((work.height-targetHeight)/2),width:targetWidth,height:targetHeight});
    }
    return { fullscreen: win.isFullScreen(), size: win.getContentSize() };
  });
  ipcMain.handle('app:quit', () => app.quit());
  win.loadURL('redcat://game/index.html');
});
app.on('window-all-closed', () => app.quit());
