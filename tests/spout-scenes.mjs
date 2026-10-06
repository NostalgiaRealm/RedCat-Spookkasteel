import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

// Only native generic smoke/flame emitters are advanced. Music and sound
// scheduling is outside this fixture; the desktop profile is never opened.
const work='current_work/native-spouts-2026-10-05',out=path.resolve(`${work}/scenes-${Date.now()}`),temp=`${work}/t`;
await mkdir(out,{recursive:true});await mkdir(temp,{recursive:true});
const env={...process.env,TMPDIR:temp},port=process.env.SPOUT_PORT||'4394';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:port},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let context;
try{
 context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,env,
  viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required',`--crash-dumps-dir=${out}`]});
 const page=await context.newPage(),errors=[];
 page.on('pageerror',e=>errors.push(e.stack));page.on('console',m=>{if(m.type()==='error'&&/shader|webgl|gl_invalid|program/i.test(m.text()))errors.push(m.text());});
 page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
 await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4})));
 await page.goto(`http://127.0.0.1:${port}/?skipIntro`);await page.waitForFunction(()=>window.__redcat);
 const results=[];
 const fixtures=process.env.SPOUT_FIXTURES?JSON.parse(process.env.SPOUT_FIXTURES):[{level:0,name:'ufo_rook',seconds:60},{level:1,name:'torch26_spout26',seconds:12},{level:3,name:'watersplash01',seconds:12},{level:4,name:'ketel04',seconds:12}];
 for(const fixture of fixtures){
  const result=await page.evaluate(async fixture=>{
   const THREE=await import('three'),app=window.__redcat;await app.startLevel(fixture.level);app.pause();document.getElementById('pause').hidden=true;
   const w=app.world,g=app.gameplay,fx=w.effects;for(const p of g.scripts.players.values())p.stop();g.scripts.cutscene=false;g.scripts.camera=null;
   const object=g.find(fixture.name)[0],state=fx.entries.get(object.id),e=object.entity,key=`${e.BitmapFileName}|${e.BitmapAlphaFileName}`.toLowerCase(),batch=fx.batches.get(key);
   w.camera.position.set(object.position[0]+75,object.position[1]+45,object.position[2]+125);w.camera.lookAt(object.position[0],object.position[1]+20,object.position[2]);w.updateRenderResidency();await w.geometryStream.settle();
   object.enabled=true;for(let i=0;i<400;i++)fx.update(.025);w.render();
   const radialViews=[];
   if(fixture.level===0){
    // Exercise the actual shared spout shader with one original smoke sprite;
    // exactly vertical views used to make radial cross products degenerate.
    const probeScene=new THREE.Scene();probeScene.background=new THREE.Color(0);
    const probe=batch.mesh.clone();probe.geometry=batch.mesh.geometry.clone();probe.material=batch.mesh.material.clone();probe.material.depthTest=false;probe.frustumCulled=false;probe.geometry.instanceCount=1;
    for(const [name,values]of [['effectPosition',[0,0,0]],['effectSize',[40,40]],['effectColor',[1,1,1,1]],['effectNativeSpout',[1]]]){const a=probe.geometry.attributes[name];a.array.set(values);a.needsUpdate=true;}
    probeScene.add(probe);const camera=new THREE.PerspectiveCamera(45,1,.1,1000),target=new THREE.WebGLRenderTarget(128,128);
    for(const [name,eye]of [['front',[0,0,100]],['above',[50,70,100]],['below',[50,-70,100]],['vertical-above',[0,100,0]],['vertical-below',[0,-100,0]]]){
     camera.position.fromArray(eye);camera.up.set(0,eye[0]===0&&eye[2]===0?0:1,eye[0]===0&&eye[2]===0?1:0);camera.lookAt(0,0,0);camera.updateMatrixWorld(true);
     w.renderer.setRenderTarget(target);w.renderer.render(probeScene,camera);const pixels=new Uint8Array(128*128*4);w.renderer.readRenderTargetPixels(target,0,0,128,128,pixels);let colored=0;for(let i=0;i<pixels.length;i+=4)if(pixels[i]+pixels[i+1]+pixels[i+2]>3)colored++;
     radialViews.push({name,colored,glError:w.renderer.getContext().getError()});
    }
    w.renderer.setRenderTarget(null);target.dispose();probe.geometry.dispose();probe.material.dispose();
   }
   const serial=()=>state.spout.serial,particles=()=>JSON.stringify(state.particles);
   const rendered=()=>JSON.stringify({count:batch.count,positions:Array.from(batch.positions.array.slice(0,batch.count*3)),sizes:Array.from(batch.sizes.array.slice(0,batch.count*2)),colors:Array.from(batch.colors.array.slice(0,batch.count*4))});
   const resources=()=>({resources:w.resources.size,geometries:w.renderer.info.memory.geometries,textures:w.renderer.info.memory.textures,programs:w.renderer.info.programs.length,children:w.scene.children.length,batchGeometry:batch.mesh.geometry.uuid,batchMaterial:batch.mesh.material.uuid,batchTexture:batch.mesh.material.uniforms.map.value.uuid});
   const beforePause={particles:particles(),rendered:rendered(),serial:serial(),clock:state.clock,age:state.age};for(let i=0;i<180;i++)fx.update(0);
   const pause={sameParticles:particles()===beforePause.particles,sameDraw:rendered()===beforePause.rendered,sameSerial:serial()===beforePause.serial,sameClock:state.clock===beforePause.clock,sameAge:state.age===beforePause.age};
   const target=new THREE.WebGLRenderTarget(320,180),before=new Uint8Array(320*180*4),after=new Uint8Array(before.length);
   w.renderer.setRenderTarget(target);w.renderer.render(w.scene,w.camera);w.renderer.readRenderTargetPixels(target,0,0,320,180,before);batch.mesh.visible=false;w.renderer.render(w.scene,w.camera);w.renderer.readRenderTargetPixels(target,0,0,320,180,after);batch.mesh.visible=true;w.renderer.setRenderTarget(null);target.dispose();
   let pixels=0;for(let i=0;i<before.length;i+=4)if(Math.abs(before[i]-after[i])+Math.abs(before[i+1]-after[i+1])+Math.abs(before[i+2]-after[i+2])>3)pixels++;
   w.render();const image=w.renderer.domElement.toDataURL('image/png').split(',')[1],liveBefore=state.particles.length,serialBefore=serial();
   object.enabled=false;fx.update(.025);const tail={particles:state.particles.length,serial:serial(),active:state.active};
   for(let i=0;i<Math.ceil((Number(e.LifeSecondsMax)+.1)/.025);i++)fx.update(.025);
   const drained={particles:state.particles.length,serial:serial()};object.enabled=true;for(let i=0;i<40;i++)fx.update(.025);
   const restarted={particles:state.particles.length,active:state.active};
   for(let i=0;i<400;i++)fx.update(.025);w.render();const resourceBefore=resources(),poolBefore=[...(state.spout?.pool||[])],limit=15;
   let maximum=0,minCount=Infinity,allEmitterMaximum=0,maxPoolLength=0;
   for(let i=0;i<Math.ceil(fixture.seconds/.025);i++){fx.update(.025);maximum=Math.max(maximum,state.particles.length);for(const entry of fx.entries.values())if(entry.object.entity.classname==='EffectSpoutEntity'){allEmitterMaximum=Math.max(allEmitterMaximum,entry.particles.length);maxPoolLength=Math.max(maxPoolLength,entry.spout?.pool?.length||0);}minCount=Math.min(minCount,state.particles.length);if(i%200===0){w.render();await new Promise(resolve=>setTimeout(resolve,0));}}
   w.render();const resourceAfter=resources(),poolReused=poolBefore.length===15&&poolBefore.every((particle,i)=>state.spout.pool[i]===particle),glError=w.renderer.getContext().getError();
   return {fixture,id:object.id,key,source:e,radialViews,paused:pause,pixels,liveBefore,serialBefore,tail,drained,restarted,maximum,minCount,allEmitterMaximum,maxPoolLength,limit,resourceBefore,resourceAfter,poolReused,glError,image};
  },fixture);
  await writeFile(path.join(out,`${fixture.name}.png`),Buffer.from(result.image,'base64'));delete result.image;results.push(result);
 }
 const hands=process.env.SPOUT_HANDS==='0'?null:await page.evaluate(async()=>{
  const app=window.__redcat,{handTorchTip}=await import('/src/torch-flames.js');await app.startLevel(2);app.pause();document.getElementById('pause').hidden=true;
  const w=app.world,g=app.gameplay,fx=w.effects;for(const p of g.scripts.players.values())p.stop();g.scripts.cutscene=false;g.scripts.camera=null;
  const record=fx.torches.records[0];if(!record)throw new Error('Original hand torch missing');
  const state=fx.entries.get(record.emitter.id),origin=record.position;w.camera.position.set(origin[0]+80,origin[1]+35,origin[2]+100);w.camera.lookAt(...origin);w.updateRenderResidency();await w.geometryStream.settle();
  const samples=[],tips=[],spawnDistances=[];
  for(let i=0;i<180;i++){
   const previous=new Map(state.particles.map(p=>[p,{birth:p.birth,age:p.age}]));w.syncActors(.025);fx.update(.025);const expected=handTorchTip(record.actor).toArray();expected[1]+=3;
   tips.push([...record.position]);samples.push(Math.hypot(...record.position.map((v,j)=>v-expected[j])));
   for(const p of state.particles){const old=previous.get(p);if(!old||p.birth!==old.birth||Number.isFinite(p.age)&&p.age<old.age)if(p.position)spawnDistances.push(Math.hypot(...p.position.map((v,j)=>v-record.position[j])));}
  }
  const ordinary=[...fx.entries.values()].find(s=>s.object.entity.classname==='EffectSpoutEntity'&&s.object.entity.BitmapFileName?.toLowerCase()==='flame03.bmp'&&!fx.torches.bindings.has(s.object.id));
  const displacement=Math.max(...tips.map(t=>Math.hypot(...t.map((v,j)=>v-tips[0][j]))));w.render();
  return {handId:record.object.id,emitterId:record.emitter.id,synthetic:record.emitter.id.startsWith('torch-flame:'),maxTipError:Math.max(...samples),displacement,spawnDistances,particles:state.particles.length,ordinary:ordinary?{id:ordinary.object.id,particles:ordinary.particles.length,position:fx.position(ordinary.object),authored:ordinary.object.position}:null,glError:w.renderer.getContext().getError(),image:w.renderer.domElement.toDataURL('image/png').split(',')[1]};
 });
 if(hands){await writeFile(path.join(out,'moving-hand-torch.png'),Buffer.from(hands.image,'base64'));delete hands.image;}
 await writeFile(path.join(out,'report.json'),JSON.stringify({results,hands,errors},null,2)+'\n');
 for(const r of results){for(const view of r.radialViews){assert.ok(view.colored>20,JSON.stringify(view));assert.equal(view.glError,0);}assert.ok(Object.values(r.paused).every(Boolean),JSON.stringify(r.paused));assert.ok(r.pixels>10,JSON.stringify({fixture:r.fixture,pixels:r.pixels}));assert.ok(r.liveBefore>0);assert.ok(r.tail.particles>0);assert.equal(r.tail.serial,r.serialBefore);assert.equal(r.tail.active,false);assert.equal(r.drained.particles,0);assert.equal(r.drained.serial,r.serialBefore);assert.ok(r.restarted.active&&r.restarted.particles>0);assert.ok(r.maximum<=r.limit,`${r.maximum}>${r.limit}`);assert.ok(r.minCount>0);assert.ok(r.allEmitterMaximum<=15);assert.equal(r.maxPoolLength,15);assert.ok(r.poolReused);assert.deepEqual(r.resourceAfter,r.resourceBefore);assert.equal(r.glError,0);}
 if(hands){assert.ok(hands.displacement>1);assert.ok(hands.maxTipError<1e-6);assert.ok(hands.spawnDistances.length>0&&Math.max(...hands.spawnDistances)<10);assert.ok(hands.particles>0);assert.ok(hands.ordinary?.particles>0);assert.deepEqual(hands.ordinary.position,hands.ordinary.authored);assert.equal(hands.glError,0);}assert.deepEqual(errors,[]);
 console.log('PASS original smoke/flame artwork renders, pause is inert, disabled particles drain then restart, long-run particle/resources stay bounded, and moving hand flames follow their wick while ordinary torches keep authored positions.');console.log(out);
}finally{await context?.close();server.kill();}
