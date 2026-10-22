import {_electron as electron} from 'playwright';
import assert from 'node:assert/strict';
import fs from 'node:fs/promises';
import path from 'node:path';
const output='temp_work/release-0.9.9-publish';
const app=await electron.launch({executablePath:path.resolve('dist/linux-unpacked/redcat-spookkasteel'),args:['--ozone-platform=x11',`--user-data-dir=${output}/profile`],timeout:45000});
const errors=[];
try{
 const page=await app.firstWindow();page.on('pageerror',e=>errors.push(e.message));
 await page.waitForFunction(()=>window.__redcat,{timeout:45000});
 const version=await app.evaluate(({app})=>app.getVersion());assert.equal(version,'0.9.9');
 if(await page.locator('#intro').isVisible())await page.locator('#skip-intro').click();
 const levels=[];
 for(const level of [0]){
 const started=await page.evaluate(async level=>await window.__redcat.startLevel(level),level);assert.notEqual(started,false);
 await page.waitForFunction(()=>window.__redcat.mode==='playing',{timeout:60000});
 await page.waitForTimeout(1500);
 await page.screenshot({path:`${output}/linux-level-${level}.png`});
 levels.push({level,mode:await page.evaluate(()=>window.__redcat.mode)});
 }
 assert.deepEqual(errors,[]);
 await fs.writeFile(`${output}/linux-smoke.json`,JSON.stringify({version,levels,errors},null,2)+'\n');
 console.log({version,levels,errors});
}finally{await app.close();}
