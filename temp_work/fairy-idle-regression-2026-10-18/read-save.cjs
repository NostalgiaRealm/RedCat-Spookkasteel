const {app,protocol,BrowserWindow}=require('electron');
protocol.registerSchemesAsPrivileged([{scheme:'redcat',privileges:{standard:true,secure:true,supportFetchAPI:true}}]);
app.whenReady().then(async()=>{protocol.handle('redcat',()=>new Response('<html><title>Isolated saved-state inspection</title></html>',{headers:{'Content-Type':'text/html'}}));const w=new BrowserWindow({show:false});await w.loadURL('redcat://game/index.html');});
