const {app,BrowserWindow}=require('electron');
app.setPath('userData',"/mnt/Storage/Cloud/Games/RedCat_Spookkasteel_Rebuild_2026/RCSPOOK_NEW/temp_work/icoinl-tail-2026-10-13/electron-profile");
app.setPath('temp',"/mnt/Storage/Cloud/Games/RedCat_Spookkasteel_Rebuild_2026/RCSPOOK_NEW/temp_work/icoinl-tail-2026-10-13/browser-tmp");
app.commandLine.appendSwitch('autoplay-policy','no-user-gesture-required');
app.whenReady().then(()=>{const w=new BrowserWindow({width:640,height:360});w.loadURL("http://127.0.0.1:42317/");});
