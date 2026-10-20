const { contextBridge, ipcRenderer } = require('electron');
contextBridge.exposeInMainWorld('desktop', Object.freeze({
  applyDisplay: options => ipcRenderer.invoke('display:apply', options),
  exportSave: payload => ipcRenderer.invoke('save:export', payload),
  quit: () => ipcRenderer.invoke('app:quit'),
  platform: process.platform
}));
