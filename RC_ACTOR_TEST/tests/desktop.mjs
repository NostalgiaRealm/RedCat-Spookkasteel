import assert from 'node:assert/strict';
import {createRequire} from 'node:module';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
const require=createRequire(import.meta.url);
const {labRoot,configureEnvironment}=require('../electron/runtime.cjs');
const runtime=configureEnvironment();
const {_electron}=await import('playwright');
const evidence=path.resolve(labRoot,'../temp_work/actor-test-2026-10-13/verification');
await mkdir(evidence,{recursive:true});
let app;
try{
  app=await _electron.launch({args:[labRoot,'--ozone-platform=wayland'],env:process.env});
  const page=await app.firstWindow(),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));
  await page.waitForFunction(()=>window.__actorTest,null,{timeout:30000});
  const profile=await app.evaluate(({app})=>({profile:app.getPath('userData'),temp:app.getPath('temp'),ozone:app.commandLine.getSwitchValue('ozone-platform')}));
  assert.equal(profile.profile,runtime.profile);assert.equal(profile.temp,runtime.tmp);assert.equal(profile.ozone,'wayland');
  const url=new URL(page.url());
  assert.equal(url.protocol,'rc-actor:');assert.equal(url.host,'lab');
  const actors=await page.evaluate(()=>window.__actorTest.snapshot().actors);
  assert.equal(actors.length,26,'Thirteen complete comparison pairs must load');
  assert.ok(actors.every(actor=>typeof actor.actor==='string'&&actor.actor.length),'Every actor must have its original name');
  assert.equal(actors.filter(actor=>actor.role==='used').length,13);
  assert.deepEqual(actors.find(actor=>actor.actor==='max-turret').parts,['turbot','turtop','brcrate','maxd']);
  assert.equal(new Set(actors.map(actor=>actor.id)).size,actors.length,'Actor instance IDs must be unique');
  assert.ok(await page.locator('#hud').isVisible(),'Original HUD canvas must be visible');
  await page.waitForFunction(()=>{
    const canvas=document.getElementById('hud');
    if(!canvas?.width||!canvas?.height)return false;
    const pixels=canvas.getContext('2d').getImageData(0,0,canvas.width,canvas.height).data;
    for(let i=3;i<pixels.length;i+=4)if(pixels[i]>0)return true;
    return false;
  },null,{timeout:10000});
  await page.screenshot({path:path.join(evidence,'electron-wayland.png')});
  assert.deepEqual(errors,[]);
  await writeFile(path.join(evidence,'electron-wayland.json'),JSON.stringify({passed:true,...profile,actors,originalHudVisible:true},null,2)+'\n');
  console.log('PASS isolated Electron Wayland launch, local protocol, original HUD and actors',profile);
}finally{await app?.close();}
