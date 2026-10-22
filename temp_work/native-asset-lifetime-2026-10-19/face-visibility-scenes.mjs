import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

const output=path.resolve('temp_work/native-asset-lifetime-2026-10-19/render');
process.env.TMPDIR='temp_work/native-asset-lifetime-2026-10-19/scratch';
await mkdir(output,{recursive:true});await mkdir(process.env.TMPDIR,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const report={views:[],errors:[]};let browser;
try {
 const url=await new Promise((resolve,reject)=>{server.stdout.once('data',data=>resolve(String(data).trim().split(' ').at(-1)));server.once('error',reject);});
 browser=await chromium.launchPersistentContext(output+'/profile',{executablePath:'/usr/bin/google-chrome',headless:true,viewport:{width:960,height:540},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await browser.newPage();page.on('pageerror',e=>report.errors.push(e.stack));
 page.on('console',message=>{if(message.type()==='error')report.errors.push(message.text());});
 await page.addInitScript(()=>{
  localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,touchControls:'on',resolution:'960x540'}));
  localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  const raf=requestAnimationFrame;window.requestAnimationFrame=fn=>raf(time=>{if(window.manualFrames&&fn.name==='frame')return;fn(time);});
 });
 await page.goto(url+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 for(const index of [0,1,2,3,4]) {
  const result=await page.evaluate(async index=>{
   const app=window.__redcat;await app.startLevel(index);app.pause();window.manualFrames=true;
   const w=app.world,g=app.gameplay,T=await import('three'),s=w.geometryStream;
   for(const p of g.scripts.players.values())p.stop();g.scripts.cutscene=false;g.scripts.camera=null;g.scripts.pendingCutsceneStop=null;
   w.updateCamera(1,true);w.syncModels();w.syncActors(0);
   const start=w.camera.position.clone(),rotation=w.camera.quaternion.clone();
   const boss=g.objects.find(o=>o.kind==='enemy'&&o.boss)||g.find('brutus')[0]||g.objects.filter(o=>o.kind==='enemy').at(-1);
   const views=[{name:'start',camera:start.toArray(),rotation:rotation.toArray()},
    {name:'boss',camera:boss.position.map((v,i)=>v+[0,120,450][i]),target:boss.position}];
   if(index===2)views.push({name:'sky-seam',camera:[1562.5387369791667,116,-1890.79052734375],target:[1562.5387369791667,180,-2190.79052734375]});
   const state=JSON.stringify(g.snapshot()),results=[];
   for(const view of views) {
    w.camera.position.fromArray(view.camera);if(view.rotation)w.camera.quaternion.fromArray(view.rotation);else w.camera.lookAt(...view.target);
    await s.settle();w.actorResidency.update(w.actorRoots,w.camera,performance.now()/1000);await w.actorResidency.settle?.();
    w.updateRenderResidency();w.effects.update(0);
    let expected=0,submitted=0,fullVertices=0,mixed=0;
    for(const c of s.chunks.filter(c=>c.resident&&c.inView&&c.group.model===0&&!c.sky)) {
     const wanted=[];let offset=0;
     for(const [face,,count]of c.spans){if(!s.visibility.active||!s.referencedFaces[face]||s.visibility.faces[face])for(let i=0;i<count;i++)wanted.push(offset+i);offset+=count;}
     const got=Array.from(c.mesh.geometry.index.array.slice(0,c.mesh.geometry.drawRange.count));
     if(JSON.stringify(wanted)!==JSON.stringify(got))throw new Error('Face-index mismatch in '+w.id);
     expected+=wanted.length;submitted+=got.length;fullVertices+=c.count;if(got.length<c.count)mixed++;
    }
    const rt=new T.WebGLRenderTarget(640,360),render=()=>{
     w.renderer.setRenderTarget(rt);w.renderer.render(w.scene,w.camera);
     const pixels=new Uint8Array(640*360*4);w.renderer.readRenderTargetPixels(rt,0,0,640,360,pixels);
     const info={triangles:w.renderer.info.render.triangles,calls:w.renderer.info.render.calls};w.renderer.setRenderTarget(null);return {pixels,...info};
    };
    const filtered=render();w.renderer.render(w.scene,w.camera);const image=w.renderer.domElement.toDataURL();
    const saved=[];for(const c of s.chunks)if(c.resident&&c.inView&&c.group.model===0&&!c.sky){const geom=c.mesh.geometry;saved.push([geom,geom.index,geom.drawRange.count]);geom.setIndex(null);geom.setDrawRange(0,c.count);}
    const baseline=render();w.renderer.render(w.scene,w.camera);const before=w.renderer.domElement.toDataURL();
    for(const [geom,idx,count]of saved){geom.setIndex(idx);geom.setDrawRange(0,count);}rt.dispose();
    let changedPixels=0,maxDelta=0;for(let i=0;i<filtered.pixels.length;i+=4){let delta=0;for(let a=0;a<3;a++)delta+=Math.abs(filtered.pixels[i+a]-baseline.pixels[i+a]);maxDelta=Math.max(maxDelta,delta);if(delta>30)changedPixels++;}
    results.push({id:w.id,name:view.name,camera:view.camera,active:s.visibility.active,leaf:s.visibility.lastLeaf,expected,submitted,fullVertices,mixed,changedPixels,maxDelta,pixels:640*360,filtered:{triangles:filtered.triangles,calls:filtered.calls},baseline:{triangles:baseline.triangles,calls:baseline.calls},image,before});
   }
   if(state!==JSON.stringify(g.snapshot()))throw new Error('Rendering changed gameplay state');
   return results;
  },index);
  for(const view of result){for(const key of ['image','before']){await writeFile(output+`/${view.id}-${view.name}-${key}.png`,Buffer.from(view[key].split(',')[1],'base64'));delete view[key];}report.views.push(view);console.log(JSON.stringify(view));}
 }
 assert.deepEqual(report.errors,[]);
 for(const view of report.views){assert.equal(view.expected,view.submitted);assert.ok(view.filtered.triangles<=view.baseline.triangles);assert.ok(view.changedPixels/view.pixels<.015,JSON.stringify(view));}
}finally{await writeFile(output+'/report.json',JSON.stringify(report,null,2)+'\n');await browser?.close();server.kill();}
