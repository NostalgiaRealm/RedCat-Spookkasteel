import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4201'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try{
 browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
 const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[],requests=[];
 page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});page.on('request',r=>requests.push(r.url()));
 await page.goto('http://127.0.0.1:4201/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 const result=await page.evaluate(async()=>{
  const app=window.__redcat;await app.startLevel(3);app.pause();document.getElementById('pause').hidden=true;
  const w=app.world,g=app.gameplay,h=g.scripts,{WebGLRenderTarget}=await import('three');
  for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=true;
  const doors=['door_left_to_mainlab','door_right_to_mainlab'].map(n=>g.find(n)[0]);
  w.redcat.visible=false;w.camera.position.set(0,50,2090);w.camera.lookAt(0,40,1883);w.syncModels();w.render();
  const allDoors=g.objects.filter(o=>o.kind==='door'),samples=[];
  const check=label=>{
   w.syncModels();w.render();const missing=[];let textured=0;
   for(const door of allDoors)for(const mesh of w.modelMeshes.get(door.modelIndex)||[]){
    const range=mesh.geometry.drawRange,group=w.level.groups.find(o=>o.model===door.modelIndex&&o.start===range.start);
    if(!group||range.count!==group.count)missing.push(door.id);
    if(mesh.material.map?.image?.width>0)textured++;
   }
   samples.push({label,missing,textured,times:doors.map(o=>h.players.get(o.id).time)});
  };
  check('closed');
  const target=new WebGLRenderTarget(320,180),withDoors=new Uint8Array(320*180*4),withoutDoors=new Uint8Array(withDoors.length);
  const previous=w.renderer.getRenderTarget();w.renderer.setRenderTarget(target);w.render();w.renderer.readRenderTargetPixels(target,0,0,320,180,withDoors);
  for(const door of doors)for(const mesh of w.modelMeshes.get(door.modelIndex))mesh.visible=false;
  w.render();w.renderer.readRenderTargetPixels(target,0,0,320,180,withoutDoors);
  let artworkPixels=0;for(let i=0;i<withDoors.length;i+=4)if(withDoors[i]!==withoutDoors[i]||withDoors[i+1]!==withoutDoors[i+1]||withDoors[i+2]!==withoutDoors[i+2])artworkPixels++;
  for(const door of doors)for(const mesh of w.modelMeshes.get(door.modelIndex))mesh.visible=true;
  w.renderer.setRenderTarget(previous);target.dispose();
  g.command(doors[0],'open');h.update(.25);check('opening');h.update(.75);check('open');
  for(const door of doors)g.command(door,'close');h.update(.6);check('closing-after-half-second');h.update(.4);check('closed-again');
  const cameraBefore=w.camera.position.toArray();w.camera.position.set(-712,40,3148);w.camera.lookAt(-712,40,2900);check('other-room');
  w.camera.position.fromArray(cameraBefore);w.camera.lookAt(0,40,1883);w.render();
  return {artworkPixels,doorCount:allDoors.length,samples,pvsPresent:!!w.visibility,skyMasks:w.skyBoundaryMeshes.length,error:h.vm.lastError};
 });
 assert.equal(result.pvsPresent,false);assert.equal(result.skyMasks,0);assert.ok(result.artworkPixels>200,JSON.stringify(result));
 assert.ok(result.doorCount>10);assert.ok(result.samples.every(s=>s.missing.length===0&&s.textured>0),JSON.stringify(result));assert.equal(result.error,null);
 assert.equal(requests.some(url=>url.includes('/data/visibility/')),false);assert.deepEqual(errors,[]);
 await mkdir('artifacts',{recursive:true});await page.screenshot({path:'artifacts/cave-door-artwork-restored.png'});
 await writeFile('artifacts/cave-door-artwork-scenes.json',JSON.stringify({result,errors},null,2)+'\n');
 console.log(`PASS cave door artwork (${result.artworkPixels} visible pixels), all ${result.doorCount} door draw ranges through motion/view changes, no PVS or cave sky masks.`);
}finally{await browser?.close();server.kill();}
