import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import assert from 'node:assert/strict';

// Use an isolated browser/save profile and retain every result for comparison.
process.env.TMPDIR='current_work';
const output=resolve(`current_work/world-streaming-2026-09-30/transitions-${Date.now()}`);
await mkdir(output,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4313'},stdio:['ignore','pipe','inherit']});
let browser;
const report={errors:[]};
try {
  await new Promise((done,fail)=>{server.stdout.once('data',done);server.once('error',fail);});
  browser=await chromium.launchPersistentContext(resolve(output,'browser-profile'),{executablePath:'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl'],viewport:{width:960,height:540}});
  const page=await browser.newPage();
  page.on('pageerror',error=>report.errors.push(error.stack));
  page.on('response',response=>{if(response.status()>=400)report.errors.push(`${response.status()} ${response.url()}`);});
  await page.addInitScript(()=>{
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
    localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,volume:0,camera:'third',touchControls:'on'}));
  });
  await page.goto('http://127.0.0.1:4313/?skipIntro');
  await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(3);app.pause();document.getElementById('pause').hidden=true;
    const w=app.world,g=app.gameplay,h=g.scripts;
    for(const player of h.players.values())player.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=true;
    w.redcat.visible=false;
    const T=await import('three'),stream=w.geometryStream;
    const {WORLD_STREAMING}=await import('./src/world-streaming.js');
    const doors=['door_left_to_mainlab','door_right_to_mainlab'].map(name=>g.find(name)[0]);
    const doorChunks=stream.chunks.filter(chunk=>doors.some(door=>door.modelIndex===chunk.group.model));
    const roots=()=>[...w.actorInstances.values(),...Array.from(w.bossMachines.values(),machine=>machine.root)];
    let evictionClock=performance.now()/1000;
    const move=async(position,target)=>{
      w.camera.position.fromArray(position);w.camera.lookAt(...target);w.syncModels();
      await stream.settle();evictionClock+=WORLD_STREAMING.retainSeconds+1;stream.update(evictionClock);
      w.actorResidency?.update(roots(),w.camera,evictionClock);
      w.renderer.render(w.scene,w.camera);
      return {gpu:{...w.renderer.info.memory},stream:{...stream.stats}};
    };
    const clear=async()=>move([20000,10000,20000],[22000,10000,22000]);
    const artwork=()=>{
      const rt=new T.WebGLRenderTarget(320,180),before=new Uint8Array(320*180*4),after=new Uint8Array(before.length);
      w.renderer.setRenderTarget(rt);w.renderer.render(w.scene,w.camera);w.renderer.readRenderTargetPixels(rt,0,0,320,180,before);
      const visibility=doorChunks.map(chunk=>chunk.mesh.visible);for(const chunk of doorChunks)chunk.mesh.visible=false;
      w.renderer.render(w.scene,w.camera);w.renderer.readRenderTargetPixels(rt,0,0,320,180,after);
      doorChunks.forEach((chunk,index)=>chunk.mesh.visible=visibility[index]);w.renderer.setRenderTarget(null);rt.dispose();
      let pixels=0;for(let i=0;i<before.length;i+=4)if(Math.abs(before[i]-after[i])+Math.abs(before[i+1]-after[i+1])+Math.abs(before[i+2]-after[i+2])>15)pixels++;
      w.renderer.render(w.scene,w.camera);return pixels;
    };
    window.__streamTransitions={doors,doorChunks,move,clear,artwork};
  });

  report.doors=await page.evaluate(async()=>{
    const {world:w,gameplay:g}=window.__redcat,{doors,doorChunks,move,clear,artwork}=window.__streamTransitions,h=g.scripts;
    const samples=[];
    const sample=label=>({label,artworkPixels:artwork(),doors:doors.map(door=>({name:door.name||door.id,time:h.players.get(door.id)?.time,
      chunks:doorChunks.filter(chunk=>chunk.group.model===door.modelIndex).map(chunk=>({resident:chunk.resident,count:chunk.mesh.geometry.attributes.position.count,expected:chunk.count,textured:!!chunk.mesh.material.map?.image?.width,position:chunk.mesh.position.toArray(),rotation:chunk.mesh.quaternion.toArray()}))}))});
    await move([0,50,2090],[0,40,1883]);samples.push(sample('closed'));
    const firstGeometries=doorChunks.map(chunk=>chunk.mesh.geometry);
    await clear();const evicted=doorChunks.every(chunk=>!chunk.resident&&chunk.mesh.geometry===chunk.empty);
    await move([0,50,2090],[0,40,1883]);samples.push(sample('closed-reloaded'));
    const replaced=doorChunks.every((chunk,index)=>chunk.mesh.geometry!==firstGeometries[index]);
    for(const door of doors)g.command(door,'open');h.update(.25);w.syncModels();
    await w.geometryStream.settle();samples.push(sample('opening'));
    const openingPose=doorChunks.map(chunk=>[...chunk.mesh.position.toArray(),...chunk.mesh.quaternion.toArray()]);
    await clear();await move([0,50,2090],[0,40,1883]);samples.push(sample('opening-reloaded'));
    const posePreserved=doorChunks.every((chunk,index)=>[...chunk.mesh.position.toArray(),...chunk.mesh.quaternion.toArray()].every((value,axis)=>Math.abs(value-openingPose[index][axis])<1e-7));
    for(const door of doors)g.command(door,'close');h.update(2);w.syncModels();await w.geometryStream.settle();samples.push(sample('closed-again'));
    return {evicted,replaced,posePreserved,samples,scriptError:h.vm.lastError};
  });
  assert.equal(report.doors.evicted,true);assert.equal(report.doors.replaced,true);assert.equal(report.doors.posePreserved,true);
  assert.equal(report.doors.scriptError,null);
  for(const sample of report.doors.samples){assert.ok(sample.artworkPixels>200,JSON.stringify(sample));assert.ok(sample.doors.every(door=>door.chunks.length&&door.chunks.every(chunk=>chunk.resident&&chunk.textured&&chunk.count===chunk.expected)),JSON.stringify(sample));}
  assert.notDeepEqual(report.doors.samples[0].doors.map(door=>door.chunks.map(chunk=>chunk.rotation)),report.doors.samples[2].doors.map(door=>door.chunks.map(chunk=>chunk.rotation)),'The opening test must actually move the doors');
  await page.screenshot({path:resolve(output,'caves-doors-reloaded.png')});

  report.cycles=await page.evaluate(async()=>{
    const {move,clear}=window.__streamTransitions,cycles=[];
    for(let cycle=0;cycle<4;cycle++) {
      const evicted=await clear(),entry=await move([0,50,2090],[0,40,1883]);
      await clear();const boss=await move([0,90,-1850],[0,40,-2104]);
      cycles.push({cycle,evicted,entry,boss});
    }
    await move([0,50,2090],[0,40,1883]);return cycles;
  });
  for(const room of ['entry','boss'])for(const resource of ['geometries','textures']) {
    const counts=report.cycles.slice(1).map(cycle=>cycle[room].gpu[resource]);
    assert.ok(Math.max(...counts)-Math.min(...counts)<=2,`${room} GPU ${resource} grows: ${counts}`);
  }
  assert.ok(report.cycles.every(cycle=>cycle.evicted.stream.residentChunks===0),'The eviction view must actually release the world chunks');
  assert.ok(report.cycles.every(cycle=>cycle.entry.gpu.geometries>cycle.evicted.gpu.geometries));

  report.wait=await page.evaluate(()=>{
    const app=window.__redcat,w=app.world,stream=w.geometryStream;
    const chunk=stream.chunks.filter(chunk=>chunk.inView&&chunk.resident&&!chunk.sky).sort((a,b)=>b.count-a.count)[0];
    if(!chunk)throw new Error('No visible world texture for delayed-loading test');
    const key=chunk.group.texture,original=stream.textures.load;
    let release;const gate=new Promise(resolve=>{release=resolve;});
    stream.textures.load=async texture=>{if(texture===key)await gate;return original(texture);};
    for(const other of stream.chunks)if(!other.sky&&other.group.texture===key)stream.unload(other);
    // Keep the deliberate camera view stable after simulation resumes.
    const updateCamera=w.updateCamera;w.updateCamera=()=>{};w.player.noClip=true;
    window.__streamTransitions.finishWait=()=>{stream.textures.load=original;release();};
    window.__streamTransitions.restoreCamera=()=>{w.updateCamera=updateCamera;};
    stream.update();app.resume();
    return {texture:key,textureFile:w.level.textures[key].file,before:{gameTime:app.gameplay.time,recoveryClock:app.recovery.clock}};
  });
  await page.waitForFunction(()=>window.__redcat.audio.paused&&!document.getElementById('loading').hidden&&window.__redcat.mode==='playing',null,{timeout:10000});
  report.wait.held=await page.evaluate(()=>({gameTime:window.__redcat.gameplay.time,recoveryClock:window.__redcat.recovery.clock,audioPaused:window.__redcat.audio.paused,loading:!document.getElementById('loading').hidden,title:document.getElementById('loading-title').textContent}));
  await page.waitForTimeout(500);
  report.wait.later=await page.evaluate(()=>({gameTime:window.__redcat.gameplay.time,recoveryClock:window.__redcat.recovery.clock,audioPaused:window.__redcat.audio.paused,loading:!document.getElementById('loading').hidden}));
  assert.equal(report.wait.held.gameTime,report.wait.before.gameTime);assert.equal(report.wait.held.recoveryClock,report.wait.before.recoveryClock);
  assert.equal(report.wait.later.gameTime,report.wait.held.gameTime);assert.equal(report.wait.later.recoveryClock,report.wait.held.recoveryClock);
  assert.equal(report.wait.later.audioPaused,true);assert.equal(report.wait.later.loading,true);
  await page.screenshot({path:resolve(output,'delayed-texture-loading-overlay.png')});
  await page.evaluate(()=>window.__streamTransitions.finishWait());
  await page.waitForFunction(before=>window.__redcat.gameplay.time>before&&!window.__redcat.audio.paused&&document.getElementById('loading').hidden,report.wait.held.gameTime,{timeout:15000});
  report.wait.resumed=await page.evaluate(()=>{
    const app=window.__redcat,result={gameTime:app.gameplay.time,recoveryClock:app.recovery.clock,audioPaused:app.audio.paused,loading:!document.getElementById('loading').hidden,readyForView:app.world.geometryStream.readyForView};
    app.pause();window.__streamTransitions.restoreCamera();return result;
  });
  assert.ok(report.wait.resumed.recoveryClock>report.wait.held.recoveryClock);assert.equal(report.wait.resumed.readyForView,true);
  assert.deepEqual(report.errors,[]);
  console.log(JSON.stringify(report,null,2));
  console.log(`World streaming transitions passed: ${output}`);
}finally {
  await writeFile(resolve(output,'report.json'),JSON.stringify(report,null,2));
  await browser?.close();server.kill();
}
