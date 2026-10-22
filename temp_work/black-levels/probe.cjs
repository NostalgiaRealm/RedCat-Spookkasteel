const {app,BrowserWindow}=require('electron');
const path=require('node:path');
app.commandLine.appendSwitch('force-color-profile','srgb');
app.commandLine.appendSwitch('use-angle','gl');
app.whenReady().then(()=>{const win=new BrowserWindow({width:800,height:600,autoHideMenuBar:true,backgroundColor:'#000000'});win.loadFile(path.join(__dirname,'probe.html'));});
