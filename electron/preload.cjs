const { contextBridge, ipcRenderer } = require('electron');
contextBridge.exposeInMainWorld('desktop', Object.freeze({
  applyDisplay: options => ipcRenderer.invoke('display:apply', options),
  quit: () => ipcRenderer.invoke('app:quit'),
  platform: process.platform
}));
