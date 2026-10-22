import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,readFile,writeFile} from 'node:fs/promises';
import path from 'node:path';
const out=path.resolve('temp_work/graveyard-wall-gap');
const env={...process.env,TMPDIR:"temp_work"};
const saved=JSON.parse(await readFile(path.join(out,'live-autosave.json'),'utf8'));
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
let context;
try {
 context=await chromium.launchPersistentContext(path.join(out,'profile-inspect'),{executablePath:'/usr/bin/google-chrome',headless:true,env,viewport:{width:1920,height:1200},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await context.newPage();const errors=[];page.on('pageerror',e=>errors.push(e.stack));
 await page.addInitScript(save=>{localStorage.setItem('redcat.save.v1',JSON.stringify(save));localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,volume:0,resolution:'native',autoIntro:false}));},saved);
 await page.goto(base+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(async()=>{await window.__redcat.loadSave();window.__redcat.pause();document.getElementById('pause').hidden=true;});
 const result=await page.evaluate(async()=>{
  const app=window.__redcat,w=app.world,g=app.gameplay,THREE=await import('three');
  await w.geometryStream.settle();w.updateRenderResidency();w.renderer.render(w.scene,w.camera);
  const eye=w.camera.position.toArray();const chunks=w.geometryStream.chunks.filter(c=>c.bounds.distanceToPoint(w.camera.position)<600).map(c=>({model:c.group.model,texture:w.level.textures[c.group.texture],group:c.group,min:c.bounds.min.toArray(),max:c.bounds.max.toArray(),visible:c.mesh.visible,layers:c.mesh.layers.mask,resident:c.resident,spans:c.spans}));
  const ray=new THREE.Raycaster();const picks=[];
  for(const [x,y] of [[800,300],[812,450],[805,620],[1238,325],[1000,300],[500,400]]){
   ray.setFromCamera(new THREE.Vector2(x/1920*2-1,1-y/1200*2),w.camera);ray.layers.enableAll();
   picks.push({pixel:[x,y],hits:ray.intersectObjects([...w.modelMeshes.values()].flat()).slice(0,8).map(h=>({distance:h.distance,point:h.point.toArray(),face:h.faceIndex,model:h.object.userData.model,group:h.object.userData.worldChunk?.group}))});
  }
  return {position:w.player.position,camera:eye,quaternion:w.camera.quaternion.toArray(),settings:app.settings,chunks,picks,poses:[...g.scripts.modelTransforms]};
 });
 await page.screenshot({path:path.join(out,'before-save.png')});
 await writeFile(path.join(out,'inspection.json'),JSON.stringify({result,errors},null,2));
 console.log(JSON.stringify({position:result.position,camera:result.camera,settings:result.settings,picks:result.picks,nearChunks:result.chunks.length,errors},null,2));
} finally {await context?.close();server.kill();}
