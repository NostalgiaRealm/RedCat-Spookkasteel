import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {readFile,writeFile} from 'node:fs/promises';
import path from 'node:path';
const out=path.resolve('temp_work/pickup-placement-2026-10-09'),env={...process.env,TMPDIR:'temp_work'};
const save=JSON.parse(await readFile(path.join(out,'live-autosave.json'),'utf8'));
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
let context;
try {
 context=await chromium.launchPersistentContext(path.join(out,'profile-inspect'),{executablePath:'/usr/bin/google-chrome',headless:true,env,viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await context.newPage(),errors=[];page.on('pageerror',e=>errors.push(e.stack));
 await page.addInitScript(save=>{localStorage.setItem('redcat.save.v1',JSON.stringify(save));localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,volume:0,resolution:'native',autoIntro:false}));},save);
 await page.goto(base+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(async()=>{const a=window.__redcat;await a.loadSave();a.pause();document.getElementById('pause').hidden=true;});
 const result=await page.evaluate(async()=>{
  const a=window.__redcat,w=a.world,g=a.gameplay,T=await import('three');
  w.syncActors(0);w.updateRenderResidency();await w.geometryStream.settle();w.updateRenderResidency();w.scene.updateMatrixWorld(true);w.renderer.render(w.scene,w.camera);
  const items=g.objects.filter(o=>o.kind==='pickup').sort((a,b)=>Math.hypot(...a.position.map((v,i)=>v-w.player.position[i]))-Math.hypot(...b.position.map((v,i)=>v-w.player.position[i]))).slice(0,8).map(o=>{
   const actor=w.actorInstances.get(o.id),box=actor?new T.Box3().setFromObject(actor):null,p=o.position;
   return {id:o.id,position:p,entity:o.entity,collected:o.collected,actorPosition:actor?.position.toArray(),bounds:box&&[box.min.toArray(),box.max.toArray()],actorAge:o.actorAge,pointFloor:w.collider.trace([p[0],p[1]+1,p[2]],[p[0],p[1]-3200,p[2]],[0,0,0],[0,0,0],w.physicalModels,null),boxFloor:box&&w.collider.trace([p[0],p[1]+1,p[2]],[p[0],p[1]-3200,p[2]],box.min.clone().sub(actor.position).toArray(),box.max.clone().sub(actor.position).toArray(),w.physicalModels,null)};
  });
  return {player:w.player.position,camera:w.camera.position.toArray(),quaternion:w.camera.quaternion.toArray(),items};
 });
 await page.screenshot({path:path.join(out,'before-save.png')});await writeFile(path.join(out,'inspection.json'),JSON.stringify({result,errors},null,2));console.log(JSON.stringify({result,errors},null,2));
} finally {await context?.close();server.kill();}
