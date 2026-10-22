import {chromium} from 'playwright';
import assert from 'node:assert/strict';
import {writeFile} from 'node:fs/promises';
const browser=await chromium.connectOverCDP('http://127.0.0.1:9337');
const out='current_work/shove-investigation-2026-10-05';
try{
 const page=browser.contexts().flatMap(c=>c.pages()).find(p=>p.url().startsWith('rc-shove:'));
 const errors=[];page.on('pageerror',e=>errors.push(String(e)));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
 await page.reload();await page.waitForFunction(()=>window.__shoveTest);
 await page.evaluate(()=>{window.__shoveTest.paused=true;window.__shoveTest.reset();});
 await page.screenshot({path:out+'/lab-power-start.png'});
 const power=await page.evaluate(()=>{
  const t=window.__shoveTest;t.setMode('power');
  const before=t.snapshot();for(let i=0;i<240;i++)t.step(1/120,{forward:1,right:0});
  const walking=t.snapshot();for(let i=0;i<650;i++)t.step(1/120,{forward:1,right:0,powerMove:true});
  const pushing=t.snapshot();for(let i=0;i<240;i++)t.step(1/120,{forward:1,right:0});
  return {before,walking,pushing,released:t.snapshot()};
 });
 const pos=s=>s.models.find(m=>m.name==='crates03').position;
 assert.deepEqual(pos(power.before),pos(power.walking));assert.ok(pos(power.pushing)[2]>pos(power.walking)[2]+100);
 assert.ok(pos(power.pushing)[2]<=195.001);assert.deepEqual(pos(power.pushing),pos(power.released));
 await page.screenshot({path:out+'/lab-power-wall.png'});
 const native=await page.evaluate(()=>{
  const t=window.__shoveTest;t.setMode('native');const before=t.snapshot();
  Object.assign(t.player,{x:-290,y:0,z:-130});
  for(let i=0;i<540;i++)t.step(1/120,{forward:1,right:0});
  return {before,after:t.snapshot()};
 });
 assert.equal(native.after.completed,true);
 assert.deepEqual(native.after.models.slice(0,3).map((m,i)=>Math.round(m.position[2]-native.before.models[i].position[2])),[91,116,93]);
 await page.screenshot({path:out+'/lab-native-completed.png'});
 await page.evaluate(()=>{const t=window.__shoveTest;t.setMode('power');t.paused=false;});
 assert.deepEqual(errors,[]);
 await writeFile(out+'/lab-verification.json',JSON.stringify({power,native,errors,platform:'Actual Electron Wayland launch'},null,2));
 console.log('PASS actual Electron Wayland: renderer/assets, native touch button and all endpoints, Q crate push, no ordinary push, obstacle stop, release, reset.');
}finally{await browser.close();}
