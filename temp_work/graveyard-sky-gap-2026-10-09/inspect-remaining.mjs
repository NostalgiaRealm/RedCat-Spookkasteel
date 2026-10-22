import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {readFile,writeFile} from 'node:fs/promises';
import path from 'node:path';
const out=path.resolve('temp_work/graveyard-sky-gap-2026-10-09');
const env={...process.env,TMPDIR:'temp_work'};
const saved=JSON.parse(await readFile(path.join(out,'live-autosave.json'),'utf8'));
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
let context;
try {
 context=await chromium.launchPersistentContext(path.join(out,'profile-remaining'),{executablePath:'/usr/bin/google-chrome',headless:true,env,viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await context.newPage();const errors=[];page.on('pageerror',e=>errors.push(e.stack));
 await page.addInitScript(save=>{localStorage.setItem('redcat.save.v1',JSON.stringify(save));localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,volume:0,resolution:'native',autoIntro:false}));},saved);
 await page.goto(base+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(async()=>{await window.__redcat.loadSave();window.__redcat.pause();document.getElementById('pause').hidden=true;});
 const result=await page.evaluate(async()=>{
  const app=window.__redcat,w=app.world,g=app.gameplay,THREE=await import('three');
  w.updateRenderResidency();await w.geometryStream.settle();w.updateRenderResidency();w.syncActors(0);w.scene.updateMatrixWorld(true);w.renderer.render(w.scene,w.camera);
  const visible=o=>o.visible&&(!o.parent||visible(o.parent));
  const objects=[];w.scene.traverse(o=>{if((o.isMesh||o.isSprite)&&visible(o)&&o.layers.test(w.camera.layers))objects.push(o);});
  const ray=new THREE.Raycaster();const picks=[];
  for(const [x,y] of [[618,331],[618,334],[604,379],[601,379],[624,321]]){
   ray.setFromCamera(new THREE.Vector2(x/1280*2-1,1-y/720*2),w.camera);ray.layers.enableAll();
   picks.push({pixel:[x,y],hits:ray.intersectObjects(objects,false).slice(0,9).map(h=>{
    let o=h.object;while(o.parent&&o.parent!==w.scene)o=o.parent;
    const actor=[...w.actorInstances].find(([,v])=>v===o);
    return {distance:h.distance,point:h.point.toArray(),face:h.faceIndex,objectName:h.object.name,type:h.object.type,uuid:h.object.uuid,rootUuid:o.uuid,rootName:o.name,model:h.object.userData.model,actorId:actor?.[0],actorInfo:actor?g.objects.find(a=>a.id===actor[0]):undefined,group:h.object.userData.worldChunk?.group,material:h.object.material?.type,depthTest:h.object.material?.depthTest};
   })});
  }
  const masks=w.skyBoundaryMeshes.map(m=>({group:m.userData.worldChunk.group,spans:m.userData.worldChunk.spans,min:m.userData.worldChunk.min,max:m.userData.worldChunk.max,visible:m.visible,mask:m.layers.mask,resident:m.userData.worldChunk.resident}));
  return {position:w.player.position,camera:w.camera.position.toArray(),quaternion:w.camera.quaternion.toArray(),direction:w.camera.getWorldDirection(new THREE.Vector3()).toArray(),settings:app.settings,picks,masks,stream:w.geometryStream.stats};
 });
 await page.screenshot({path:path.join(out,'remaining.png')});
 await writeFile(path.join(out,'remaining.json'),JSON.stringify({result,errors},null,2));
 console.log(JSON.stringify({position:result.position,camera:result.camera,direction:result.direction,settings:result.settings,picks:result.picks,errors},null,2));
} finally {await context?.close();server.kill();}
