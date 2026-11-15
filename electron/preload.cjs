// What the page may ask of the desktop shell (electron/main.cjs). The name and the shape are the
// JavaScript port's (window.desktop); this port needs only the two below: exporting and importing
// a player go through the page's own download and file input, full screen through the page's own
// request, which the shell answers with a full-screen window.
const { contextBridge, ipcRenderer } = require('electron');
contextBridge.exposeInMainWorld('desktop', Object.freeze({
  quit: () => ipcRenderer.invoke('app:quit'),
  platform: process.platform,
}));
