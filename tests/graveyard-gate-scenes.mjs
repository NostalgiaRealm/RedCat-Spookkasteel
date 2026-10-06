import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,readFile,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

// Optional save is copied into this isolated browser, never the live game.
const save=process.argv[2]?JSON.parse(await readFile(process.argv[2],'utf8')):null;
const out=path.resolve(`current_work/graveyard-gate-2026-10-04/scenes-${Date.now()}`);
await mkdir(out,{recursive:true});
const env={...process.env,TMPDIR:'current_work'};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'4338'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let context;
try {
  context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,env,
    viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await context.newPage(),errors=[];
  page.on('pageerror',error=>errors.push(error.stack));
  page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.addInitScript(saved=>{
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
    if(saved)localStorage.setItem('redcat.save.v1',JSON.stringify(saved));
  },save);
  await page.goto('http://127.0.0.1:4338/?skipIntro');
  await page.waitForFunction(()=>window.__redcat);
  assert.equal(await page.evaluate(restored=>restored?window.__redcat.loadSave():window.__redcat.startLevel(2),!!save),true);
  const result=await page.evaluate(async()=>{
    const THREE=await import('three'),app=window.__redcat,w=app.world,g=app.gameplay,h=g.scripts;
    app.pause();document.getElementById('pause').hidden=true;
    const gates=g.find('hekacteur'),gate=gates[0],crate=g.find('brcrate_hek')[0];
    const root=w.actorInstances.get(gate.id),mesh=root.userData.mesh;
    const capture=()=>{w.renderer.render(w.scene,w.camera);return w.renderer.domElement.toDataURL('image/png').split(',')[1];};
    const currentSaveView=capture();
    for(const motion of h.players.values())motion.stop();
    h.cutscene=false;h.camera=null;h.enemiesFrozen=true;
    // The actual gate shell has correctly wound outward faces. Do not delete
    // the opposite surface: players must still see it from the other side.
    const p=mesh.geometry.attributes.position,n=mesh.geometry.attributes.normal,indices=mesh.geometry.index;
    let outward=0;
    for(let i=0;i<indices.count;i+=3){
      const a=new THREE.Vector3().fromBufferAttribute(p,indices.getX(i));
      const b=new THREE.Vector3().fromBufferAttribute(p,indices.getX(i+1));
      const c=new THREE.Vector3().fromBufferAttribute(p,indices.getX(i+2));
      if(b.sub(a).cross(c.sub(a)).dot(new THREE.Vector3().fromBufferAttribute(n,indices.getX(i)))>0)outward++;
    }
    const sides=mesh.material.map(m=>m.side),views=[];
    for(const sign of [1,-1]){
      w.camera.position.set(3645,15,1461+sign*200);w.camera.lookAt(3568,-5,1461);
      w.updateRenderResidency();await w.geometryStream.settle();w.syncActors(0);
      const target=new THREE.WebGLRenderTarget(640,360),front=new Uint8Array(640*360*4),doubled=new Uint8Array(front.length),hidden=new Uint8Array(front.length);
      const render=buffer=>{w.renderer.render(w.scene,w.camera);w.renderer.readRenderTargetPixels(target,0,0,640,360,buffer);};
      w.renderer.setRenderTarget(target);render(front);
      mesh.material.forEach(m=>{m.side=THREE.DoubleSide;m.needsUpdate=true;});render(doubled);
      w.renderer.setRenderTarget(null);const before=capture();
      mesh.material.forEach((m,i)=>{m.side=sides[i];m.needsUpdate=true;});
      w.renderer.setRenderTarget(target);root.visible=false;render(hidden);root.visible=true;
      w.renderer.setRenderTarget(null);target.dispose();const after=capture();
      const changed=buffer=>{let count=0;for(let i=0;i<front.length;i+=4)if(Math.abs(front[i]-buffer[i])+Math.abs(front[i+1]-buffer[i+1])+Math.abs(front[i+2]-buffer[i+2])>3)count++;return count;};
      views.push({side:sign===1?'front':'back',before,after,duplicatePixelsRemoved:changed(doubled),gatePixels:changed(hidden)});
    }
    const collision=w.collider.actors.find(a=>a.id===gate.id),blockedBefore=collision.active();
    const initialHealth={gate:gate.health,crate:crate.health};
    // Exercise the real projectile-hit handler and compiled crate command.
    g.playerProjectileHit(crate,{damage:1,type:0});w.syncActors(0);w.effects.update(.025);
    const fragments=w.effects.destructibles.particles.filter(p=>p.actor==='hekdoor_s1');
    const destroyed={gate:gate.health,crate:crate.health,visible:root.visible,blocks:collision.active(),
      explosions:g.explosions.filter(e=>[gate.id,crate.id].includes(e.sourceId)).length,
      fragments:fragments.length,fragmentSides:fragments.flatMap(p=>p.materials.map(m=>m.side)),scriptError:h.vm.lastError};
    app.saveGame(true);await app.loadSave();app.pause();document.getElementById('pause').hidden=true;
    const restoredGate=app.gameplay.find('hekacteur')[0],restoredRoot=app.world.actorInstances.get(restoredGate.id);
    const restored={health:restoredGate.health,visible:restoredRoot.visible,blocks:app.world.collider.actors.find(a=>a.id===restoredGate.id).active()};
    return {level:w.id,gateCount:gates.length,triangles:indices.count/3,outward,sides,currentSaveView,views,initialHealth,blockedBefore,destroyed,restored};
  });
  await writeFile(path.join(out,'current-save.png'),Buffer.from(result.currentSaveView,'base64'));delete result.currentSaveView;
  for(const view of result.views)for(const key of ['before','after']){await writeFile(path.join(out,`${view.side}-${key}.png`),Buffer.from(view[key],'base64'));delete view[key];}
  await writeFile(path.join(out,'report.json'),JSON.stringify({result,errors},null,2)+'\n');
  assert.equal(result.gateCount,1);assert.equal(result.triangles,24);assert.equal(result.outward,24);
  assert.ok(result.sides.every(side=>side===0));
  for(const view of result.views){assert.ok(view.duplicatePixelsRemoved>200,JSON.stringify(view));assert.ok(view.gatePixels>500,JSON.stringify(view));}
  assert.equal(result.blockedBefore,true);assert.equal(result.initialHealth.crate,1);
  assert.deepEqual(result.destroyed,{gate:0,crate:0,visible:false,blocks:false,explosions:2,fragments:2,fragmentSides:[0,0],scriptError:null});
  assert.deepEqual(result.restored,{health:0,visible:false,blocks:false});assert.deepEqual(errors,[]);
  console.log('PASS graveyard gate: one surface from either side, crate destruction, two original fragments, collision removal and save restoration.');
  console.log(out);
} finally {await context?.close();server.kill();}
