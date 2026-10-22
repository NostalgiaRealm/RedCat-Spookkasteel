import {chromium} from 'playwright';
import assert from 'node:assert/strict';
import {writeFile} from 'node:fs/promises';
const browser=await chromium.connectOverCDP('http://127.0.0.1:9337');
try{
 const page=browser.contexts().flatMap(c=>c.pages()).find(p=>p.url().startsWith('rc-shove:'));
 await page.reload();await page.waitForFunction(()=>window.__shoveTest);
 await page.evaluate(()=>{const t=window.__shoveTest;t.reset();t.player.z=-29;});
 await page.keyboard.down('KeyQ');await page.keyboard.down('KeyW');await new Promise(r=>setTimeout(r,650));
 await page.keyboard.up('KeyW');await page.keyboard.up('KeyQ');
 const moved=await page.evaluate(()=>window.__shoveTest.models.find(m=>m.name==='crates03').pushOffset[2]);
 assert.ok(moved>20,`Keyboard Q+W moved only ${moved}`);
 const result=await page.evaluate(()=>{const t=window.__shoveTest;t.paused=true;for(let i=0;i<650;i++)t.step(1/120,{forward:1,right:0,powerMove:true});return {snapshot:t.snapshot(),text:document.querySelector('#status').textContent};});
 assert.match(result.text,/Krat in het vak/);
 await page.screenshot({path:'current_work/shove-investigation-2026-10-05/lab-power-success.png'});
 await page.evaluate(()=>{const t=window.__shoveTest;t.reset();t.paused=false;});
 await writeFile('current_work/shove-investigation-2026-10-05/keyboard-verification.json',JSON.stringify({moved,...result},null,2));
 console.log('PASS keyboard Q+W pushes; final obstacle position lies inside target; reset to default experiment.');
}finally{await browser.close();}
