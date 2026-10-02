import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import assert from 'node:assert/strict';

process.env.TMPDIR='current_work';
const output=resolve(`current_work/world-streaming-2026-09-30/render-${Date.now()}`);
await mkdir(output,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4312'},stdio:['ignore','pipe','inherit']});
let browser;
try {
 await new Promise((done,fail)=>{server.stdout.once('data',done);server.once('error',fail);});
 browser=await chromium.launchPersistentContext(resolve(output,'browser-profile'),{executablePath:'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl'],viewport:{width:960,height:540}});
 const page=await browser.newPage(),errors=[],reports=[];
 page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
 await page.addInitScript(()=>{
  localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,volume:0,camera:'third'}));
 });
 await page.goto('http://127.0.0.1:4312/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 const roomsOnly=process.argv.includes('--rooms-only');
 for(const level of roomsOnly?[0,2]:[0,1,2,3,4]) {
  await page.evaluate(async level=>{await window.__redcat.startLevel(level);window.__redcat.pause();},level);
  const cases=await page.evaluate(()=>{
   const w=window.__redcat.world,g=window.__redcat.gameplay;
   for(const p of g.scripts.players.values())p.stop();g.scripts.cutscene=false;g.scripts.camera=null;
   // Sample the start, a remote authored pickup and the boss courtyard/room.
   const boss=g.objects.find(o=>o.kind==='enemy'&&o.boss)||g.find('brutus')[0]||g.find('bonecollector')[0],remote=g.objects.filter(o=>o.kind==='pickup'&&o.position).sort((a,b)=>Math.hypot(...b.position.map((v,i)=>v-w.player.position[i]))-Math.hypot(...a.position.map((v,i)=>v-w.player.position[i])))[0];
   return [{name:'start',position:[...w.player.position]},...(remote?[{name:'remote',position:remote.position}]:[]),...(boss?[{name:'boss',position:boss.position}]:[]),...(w.id==='lvl02a'?[{name:'sky-boundary',position:[1562.5387369791667,116,-1890.79052734375],camera:[1562.5387369791667,116,-1890.79052734375],lookAt:[1562.5387369791667,180,-2190.79052734375]}]:[])];
  });
  for(const sample of cases) {
   if(roomsOnly&&!['boss','sky-boundary'].includes(sample.name))continue;
   const result=await page.evaluate(async sample=>{
    const app=window.__redcat,w=app.world,stream=w.geometryStream,T=await import('three');
    w.player.position=[...sample.position];w.player.position[1]+=3;w.yaw=0;w.pitch=.08;w.updateCamera(0,true);
    if(sample.name==='boss') {w.camera.position.fromArray(sample.position).add(new T.Vector3(0,100,500));w.camera.lookAt(...sample.position);}
    if(sample.camera){w.camera.position.fromArray(sample.camera);w.camera.lookAt(...sample.lookAt);}
    await stream.settle();stream.update(performance.now()/1000+10);
    // Leave effects, actor poses and lighting identical for both images.
    // Light both reference and streamed actors identically, including actors
    // deliberately omitted by the current view's conservative PVS selection.
    const isRendered=w.actorResidency.isRendered;w.actorResidency.isRendered=()=>true;w.effects.update(0);w.actorResidency.isRendered=isRendered;
    w.actorResidency.update([...w.actorInstances.values(),...Array.from(w.bossMachines.values(),m=>m.root)],w.camera,performance.now()/1000);
    const stats={...stream.stats},rt=new T.WebGLRenderTarget(640,360),render=()=>{
     w.renderer.setRenderTarget(rt);w.renderer.render(w.scene,w.camera);const pixels=new Uint8Array(640*360*4);
     w.renderer.readRenderTargetPixels(rt,0,0,640,360,pixels);const triangles=w.renderer.info.render.triangles,calls=w.renderer.info.render.calls;
     w.renderer.setRenderTarget(null);return {pixels,triangles,calls};
    };
    const streamed=render();w.renderer.render(w.scene,w.camera);const screenshot=w.renderer.domElement.toDataURL('image/png');
    // Temporarily recreate the previous full-level batches at the same pose.
    const update=stream.update;stream.update=()=>{};
    for(const c of stream.chunks)stream.request(c);
    await Promise.all([...stream.pending]);for(const ready of stream.ready)stream.activate(ready);stream.ready=[];
    const originals=[],saved=stream.chunks.map(c=>c.mesh.visible),vertices=new T.InterleavedBuffer(stream.source.vertices,11),frames=stream.source.frames&&new T.InterleavedBuffer(stream.source.frames,8);
    for(const [group,{material}]of stream.materials) {
     const geometry=new T.BufferGeometry();
     for(const [name,size,offset]of [['position',3,0],['normal',3,3],['uv',2,6],['color',3,8]])geometry.setAttribute(name,new T.InterleavedBufferAttribute(vertices,size,offset));
     if(stream.source.uv)geometry.setAttribute('uv1',new T.BufferAttribute(stream.source.uv,2));
     if(frames)for(const [name,size,offset]of [['nativeLightU',3,0],['nativeLightV',3,3],['nativeLightMinUV',2,6]])geometry.setAttribute(name,new T.InterleavedBufferAttribute(frames,size,offset));
     geometry.setDrawRange(group.start,group.count);
     const representative=stream.chunks.find(c=>c.group===group).mesh,mesh=new T.Mesh(geometry,material);
     mesh.position.copy(representative.position);mesh.quaternion.copy(representative.quaternion);mesh.visible=representative.visible;mesh.frustumCulled=false;mesh.renderOrder=representative.renderOrder;
     originals.push(mesh);w.scene.add(mesh);
    }
    for(const c of stream.chunks)c.mesh.visible=false;
    const actorLayers=[];
    for(const record of w.actorResidency.records.values())for(const entry of record.meshes){actorLayers.push([entry.mesh,entry.mesh.layers.mask]);entry.mesh.layers.mask=entry.layerMask;}
    const full=render();w.renderer.render(w.scene,w.camera);const reference=w.renderer.domElement.toDataURL('image/png');
    let differences=0;for(let i=0;i<full.pixels.length;i+=4)if(Math.abs(full.pixels[i]-streamed.pixels[i])+Math.abs(full.pixels[i+1]-streamed.pixels[i+1])+Math.abs(full.pixels[i+2]-streamed.pixels[i+2])>30)differences++;
    for(const mesh of originals){w.scene.remove(mesh);mesh.geometry.dispose();}
    for(const [mesh,mask]of actorLayers)mesh.layers.mask=mask;
    stream.chunks.forEach((c,i)=>c.mesh.visible=saved[i]);stream.update=update;stream.update(performance.now()/1000+10);rt.dispose();
    return {sample:sample.name,camera:w.camera.position.toArray(),stats,afterUnload:{...stream.stats},streamed:{triangles:streamed.triangles,calls:streamed.calls},full:{triangles:full.triangles,calls:full.calls},differentPixels:differences,totalPixels:640*360,screenshot,reference,decals:w.effects.decals.entries.size};
   },sample);
   for(const key of ['screenshot','reference']){await writeFile(resolve(output,`${level}-${sample.name}-${key}.png`),Buffer.from(result[key].split(',')[1],'base64'));delete result[key];}
   reports.push({level,...result});console.log(JSON.stringify({level,...result}));
   await writeFile(resolve(output,'report.json'),JSON.stringify({reports,errors},null,2));
  }
 }
 assert.deepEqual(errors,[]);
 for(const report of reports){assert.ok(report.differentPixels/report.totalPixels<.015,JSON.stringify(report));assert.ok(report.stats.residentVertices>0);}
 assert.ok(reports.filter(r=>r.sample==='start').every(r=>r.stats.residentVertices<r.stats.totalVertices*.8));
 console.log(`World streaming comparisons passed: ${output}`);
}finally{await browser?.close();server.kill();}
