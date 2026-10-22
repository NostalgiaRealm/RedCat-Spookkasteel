import fs from 'node:fs';
import vm from 'node:vm';
import {createRequire} from 'node:module';
import assert from 'node:assert/strict';
const require=createRequire(import.meta.url),opened=[];let handler,ready;
class BrowserWindow {constructor(){this.webContents={setWindowOpenHandler:f=>handler=f,on(){}};}loadURL(){}}
const electron={app:{commandLine:{appendSwitch(){},hasSwitch(){return true;}},whenReady(){return {then:f=>ready=f};},on(){}},BrowserWindow,protocol:{registerSchemesAsPrivileged(){},handle(){}},screen:{getPrimaryDisplay:()=>({workAreaSize:{width:1280,height:720}})},Menu:{setApplicationMenu(){}},ipcMain:{handle(){}},shell:{openExternal:async u=>{opened.push(u);}},net:{}};
vm.runInNewContext(fs.readFileSync('electron/main.cjs','utf8'),{require:n=>n==='electron'?electron:require(n),__dirname:process.cwd()+'/electron',process,console,setTimeout,clearTimeout,Response});
ready();
const html=fs.readFileSync('index.html','utf8');
const expected=[...html.matchAll(/href="(https:[^"]+)"/g)].map(m=>m[1]);
const android=fs.readFileSync('android/app/src/main/java/com/nostalgiarealm/redcatspookkasteel/GameUrls.kt','utf8');
const androidLinks=new Set([...android.match(/externalLinks = setOf\(([\s\S]*?)\)/)[1].matchAll(/"([^"]+)"/g)].map(m=>m[1]));
for(const url of expected){assert.equal(handler({url}).action,'deny');assert.equal(opened.at(-1),url);assert.ok(androidLinks.has(url));}
const count=opened.length;
for(const url of ['https://github.com/NostalgiaRealm/RedCat-Spookkasteel.evil','https://github.com.evil.example/NostalgiaRealm/RedCat-Spookkasteel','file:///etc/passwd','javascript:alert(1)']){
  assert.equal(handler({url}).action,'deny');assert.ok(!androidLinks.has(url));
}
assert.equal(opened.length,count);
const report={ok:true,desktopHandlerExecuted:true,androidAllowlistChecked:true,androidDeviceTest:false,links:expected};
fs.writeFileSync('temp_work/enemy-parity-2026-10-13/about-links-report.json',JSON.stringify(report,null,2)+'\n');
console.log(report);
