import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';
const out=path.resolve('temp_work/graveyard-sky-gap-2026-10-09/cave-door-check');await mkdir(out,{recursive:true});
const env={...process.env,TMPDIR:'temp_work'};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
let context;
try {
 context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,env,viewport:{width:960,height:540},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await context.newPage(),errors=[];page.on('pageerror',e=>errors.push(e.stack));
 await page.addInitScript(()=>{localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,volume:0,autoIntro:false}));});
 await page.goto(base+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 const samples=await page.evaluate(async()=>{
  const app=window.__redcat;await app.startLevel(3);app.pause();document.getElementById('pause').hidden=true;
  const w=app.world,g=app.gameplay,h=g.scripts,T=await import('three');
  for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;w.redcat.visible=false;
  const doors=['door_left_to_mainlab','door_right_to_mainlab'].map(name=>g.find(name)[0]),stream=w.geometryStream;
  w.camera.position.set(0,50,2090);w.camera.lookAt(0,40,1883);
  const rt=new T.WebGLRenderTarget(320,180);
  const pixels=()=>{const bytes=new Uint8Array(320*180*4);w.renderer.setRenderTarget(rt);w.renderer.render(w.scene,w.camera);w.renderer.readRenderTargetPixels(rt,0,0,320,180,bytes);w.renderer.setRenderTarget(null);return bytes;};
  const sample=async label=>{
   w.syncModels();await stream.settle();w.updateRenderResidency();const chunks=stream.chunks.filter(c=>doors.some(d=>d.modelIndex===c.group.model));
   const before=pixels(),states=chunks.map(c=>c.mesh.visible);chunks.forEach(c=>c.mesh.visible=false);const after=pixels();chunks.forEach((c,i)=>c.mesh.visible=states[i]);
   let artwork=0;for(let i=0;i<before.length;i+=4)if(Math.abs(before[i]-after[i])+Math.abs(before[i+1]-after[i+1])+Math.abs(before[i+2]-after[i+2])>15)artwork++;
   return {label,artwork,doors:doors.map(d=>({name:d.name,model:d.modelIndex,pvsVisible:stream.movingModels.get(d.modelIndex).pvsVisible,chunks:chunks.filter(c=>c.group.model===d.modelIndex).map(c=>({layer:c.mesh.layers.mask,rotation:c.mesh.quaternion.toArray()}))}))};
  };
  const samples=[await sample('closed')];for(const d of doors)g.command(d,'open');h.update(.25);samples.push(await sample('opening'));rt.dispose();return samples;
 });
 await writeFile(path.join(out,'report.json'),JSON.stringify({samples,errors},null,2));
 assert.deepEqual(errors,[]);for(const s of samples){assert.ok(s.artwork>200);for(const d of s.doors){assert.equal(d.pvsVisible,true);assert.ok(d.chunks.every(c=>c.layer===1));}}
 assert.notDeepEqual(samples[0].doors.map(d=>d.chunks.map(c=>c.rotation)),samples[1].doors.map(d=>d.chunks.map(c=>c.rotation)));
 console.log('PASS cave laboratory door artwork stays visible while the authored motion opens them.',JSON.stringify(samples));
} finally {await context?.close();server.kill();}
