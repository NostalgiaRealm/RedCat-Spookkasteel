import {_electron as electron} from 'playwright';
import path from 'node:path';
import {execFileSync} from 'node:child_process';
import {writeFile} from 'node:fs/promises';
const dir=path.resolve('temp_work/black-levels');let app;
try{
 app=await electron.launch({executablePath:path.resolve('node_modules/electron/dist/electron'),args:[path.join(dir,'probe.cjs'),`--user-data-dir=${dir}/profile`,'--ozone-platform=wayland'],timeout:30000});
 const page=await app.firstWindow();await page.waitForLoadState();await page.waitForTimeout(700);
 await page.screenshot({path:path.join(dir,'electron-page.png')});
 await app.evaluate(({BrowserWindow})=>BrowserWindow.getAllWindows()[0].focus());
 execFileSync('spectacle',['-a','-b','-n','-o',path.join(dir,'wayland-window.png')],{timeout:10000});
 await writeFile(path.join(dir,'computed.json'),JSON.stringify(await page.evaluate(()=>({bars:getComputedStyle(document.getElementById('cinema-top')).backgroundColor,canvas:!!document.getElementById('probe').getContext('webgl2')})),null,2));
 console.log('Electron Wayland CSS/WebGL black probe captured.');
}finally{await app?.close();}
