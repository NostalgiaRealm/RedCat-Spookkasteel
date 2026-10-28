import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,readFile,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

import {sceneOutput} from './support/scene-output.mjs';
const save=process.argv[2]?JSON.parse(await readFile(process.argv[2],'utf8')):null;
const out=path.resolve(sceneOutput(`temp_work/graveyard-sky-gap-2026-10-09/scenes-${Date.now()}`));
await mkdir(out,{recursive:true});
const env={...process.env,TMPDIR:sceneOutput('temp_work')};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
let context;
try {
  context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,env,
    viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await context.newPage(),errors=[];
  page.on('pageerror',error=>errors.push(error.stack));
  page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
  await page.addInitScript(saved=>{
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
    localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,volume:0,resolution:'native',autoIntro:false}));
    if(saved)localStorage.setItem('redcat.save.v1',JSON.stringify(saved));
  },save);
  await page.goto(base+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  assert.equal(await page.evaluate(async restore=>{
    const app=window.__redcat,ok=await(restore?app.loadSave():app.startLevel(2));
    app.pause();document.getElementById('pause').hidden=true;return ok;
  },!!save),true);
  const result=await page.evaluate(async()=>{
    const THREE=await import('three'),app=window.__redcat,w=app.world,stream=w.geometryStream;
    // Streaming computes visibility from the camera matrices: update them, let the
    // stream pick the view's chunks, load them, then update residency once more.
    const refresh=async()=>{w.camera.updateMatrixWorld(true);w.updateRenderResidency();await stream.settle();w.updateRenderResidency();};
    w.camera.position.set(2240.679048124565,105.26586600094487,528.412264482492);
    w.camera.lookAt(w.camera.position.clone().add(new THREE.Vector3(-.6429578465301031,.2000013569987305,-.7393271703272096)));
    w.syncModels();w.syncActors(0);await refresh();
    const camera=w.camera.position.clone(),quaternion=w.camera.quaternion.clone();
    const target=new THREE.WebGLRenderTarget(1280,720);
    const pixels=()=>{const bytes=new Uint8Array(1280*720*4);w.renderer.setRenderTarget(target);w.renderer.render(w.scene,w.camera);w.renderer.readRenderTargetPixels(target,0,0,1280,720,bytes);w.renderer.setRenderTarget(null);return bytes;};
    const image=()=>{w.renderer.render(w.scene,w.camera);return w.renderer.domElement.toDataURL('image/png').split(',')[1];};
    const models=()=>[50,51].map(id=>({id,pvsVisible:stream.movingModels.get(id).pvsVisible,chunks:stream.chunks.filter(c=>c.group.model===id).map(c=>({layer:c.mesh.layers.mask,inView:c.inView,resident:c.resident}))}));
    const fixedBoundsVisible=stream.boundsVisible,modelBoxes=new Set([...stream.movingModels.values()].map(m=>m.bounds)),views=[],images={};
    // The old renderer predates the room masks too: its bypass also skipped them for these fences.
    const fixedRoomBounds=stream.roomBoundsAllowed,fenceBoxes=new Set(stream.chunks.filter(c=>[50,51].includes(c.group.model)).map(c=>c.bounds));
    for(const dx of [0,-8,8]) {
      w.camera.position.copy(camera).add(new THREE.Vector3(dx,0,0));w.camera.quaternion.copy(quaternion);
      // Recreate only the old moving-model bypass, keeping static PVS/sky and
      // all scene transforms identical. Nearby residency is not visibility.
      stream.boundsVisible=box=>modelBoxes.has(box)||fixedBoundsVisible.call(stream,box);
      stream.roomBoundsAllowed=box=>fenceBoxes.has(box)||fixedRoomBounds.call(stream,box);await refresh();
      const before=pixels();if(!dx)images.before=image();
      stream.boundsVisible=fixedBoundsVisible;stream.roomBoundsAllowed=fixedRoomBounds;await refresh();
      const after=pixels(),modelStates=models();if(!dx)images.after=image();
      const children=w.scene.children.map(o=>[o,o.visible]);children.forEach(([o])=>o.visible=false);
      const sky=pixels();children.forEach(([o,visible])=>o.visible=visible);
      let changed=0,skyRestored=0,foregroundChanged=0,remainingGapPixels=0;
      for(let i=0;i<before.length;i+=4) {
        const diff=Math.max(...[0,1,2].map(c=>Math.abs(before[i+c]-after[i+c])));
        if(diff<=3)continue;
        changed++;
        if(Math.max(...[0,1,2].map(c=>Math.abs(after[i+c]-sky[i+c])))<=3)skyRestored++;
        if(Math.floor(i/4/1280)<320)foregroundChanged++;
      }
      if(!dx)for(let y=316;y<384;y++)for(let x=603;x<626;x++){
        const i=((719-y)*1280+x)*4;
        if(Math.max(...[0,1,2].map(c=>Math.abs(after[i+c]-sky[i+c])))>3)remainingGapPixels++;
      }
      views.push({dx,leaf:stream.visibility.lastLeaf,changed,skyRestored,foregroundChanged,remainingGapPixels,models:modelStates});
    }
    // The same fences remain visible on approach and at a partially open pose.
    w.camera.position.set(932,592,-1100);w.camera.lookAt(932,592,-840);await refresh();
    const gateChunks=stream.chunks.filter(c=>[50,51].includes(c.group.model));
    const gateArtwork=()=>{
      const before=pixels(),states=gateChunks.map(c=>c.mesh.visible);gateChunks.forEach(c=>c.mesh.visible=false);
      const after=pixels();gateChunks.forEach((c,i)=>c.mesh.visible=states[i]);
      let changed=0;for(let i=0;i<before.length;i+=4)if(Math.max(...[0,1,2].map(c=>Math.abs(before[i+c]-after[i+c])))>3)changed++;
      return changed;
    };
    const gates={closed:{models:models(),pixels:gateArtwork()}};images.gatesClosed=image();
    for(const id of [50,51]) {
      const origin=new THREE.Vector3(...w.level.collision.models[id].origin),rotation=new THREE.Quaternion().setFromAxisAngle(new THREE.Vector3(0,1,0),id===50?Math.PI/4:-Math.PI/4);
      const offset=origin.clone().sub(origin.clone().applyQuaternion(rotation));
      for(const c of gateChunks.filter(c=>c.group.model===id)){c.mesh.position.copy(offset);c.mesh.quaternion.copy(rotation);}
    }
    await refresh();gates.opening={models:models(),pixels:gateArtwork()};images.gatesOpening=image();
    target.dispose();return {views,gates,images};
  });
  for(const [name,data]of Object.entries(result.images))await writeFile(path.join(out,name+'.png'),Buffer.from(data,'base64'));
  delete result.images;
  await writeFile(path.join(out,'report.json'),JSON.stringify({result,errors},null,2)+'\n');
  for(const view of result.views){
    assert.ok(view.changed>30,JSON.stringify(view));assert.equal(view.skyRestored,view.changed,'every removed fence pixel becomes sky');
    assert.equal(view.foregroundChanged,0,'nearby lower scenery stays unchanged');
    assert.equal(view.remainingGapPixels,0,'the reported gap contains only sky');
    for(const model of view.models){assert.equal(model.pvsVisible,false);assert.ok(model.chunks.every(c=>c.layer===2&&!c.inView));}
  }
  for(const gate of Object.values(result.gates)){
    assert.ok(gate.pixels>500,JSON.stringify(gate));
    for(const model of gate.models){assert.equal(model.pvsVisible,true);assert.ok(model.chunks.some(c=>c.layer===1&&c.inView));}
  }
  assert.deepEqual(errors,[]);
  console.log(JSON.stringify(result,null,2));console.log(`PASS graveyard sky gap, three camera positions, visible/partly open gates; no browser/HTTP errors.\n${out}`);
} finally {await context?.close();server.kill();}
