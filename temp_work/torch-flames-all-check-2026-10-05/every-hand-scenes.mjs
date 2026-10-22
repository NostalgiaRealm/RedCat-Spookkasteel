import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const work='current_work/torch-flames-all-check-2026-10-05',out=`${work}/scenes`,port='4387';
const env={...process.env,TMPDIR:`${work}/t`};
await mkdir(out,{recursive:true});await mkdir(env.TMPDIR,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:port},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;const errors=[],reports=[];
try {
 browser=await chromium.launch({executablePath:'/usr/bin/google-chrome',headless:true,env,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required',`--crash-dumps-dir=${out}`]});
 const page=await browser.newPage({viewport:{width:1280,height:720}});
 page.on('pageerror',error=>errors.push(error.stack));
 page.on('console',message=>{if(message.type()==='error'&&/shader|WebGLProgram|VALIDATE_STATUS/i.test(message.text()))errors.push(message.text());});
 await page.addInitScript(()=>{localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false}));});
 await page.goto(`http://127.0.0.1:${port}/?skipIntro`);await page.waitForFunction(()=>window.__redcat);
 for(const level of [1,2]) {
  const ids=await page.evaluate(async level=>{
   const a=window.__redcat;if(!await a.startLevel(level))throw Error('Failed to load level');a.pause();document.getElementById('pause').hidden=true;
   for(const p of a.gameplay.scripts.players.values())p.stop();a.gameplay.scripts.camera=null;a.gameplay.scripts.cutscene=false;
   return a.gameplay.objects.filter(o=>o.entity.ActorFileName?.toLowerCase()==='htorch.act').map(o=>o.id);
  },level);
  for(const id of ids) {
   console.log(`Checking level ${level+1}: ${id}`);
   const result=await page.evaluate(async({level,id})=>{
    const a=window.__redcat,w=a.world,g=a.gameplay,THREE=await import('three');
    const actor=w.actorInstances.get(id),object=g.objects.find(o=>o.id===id),animator=actor.userData.animator;
    // Keep all authored motion settings. Visit each hand nearby so both the
    // normal pose sampling and the bounded live light selection run.
    w.camera.position.set(object.position[0],object.position[1]+10,object.position[2]+100);
    w.camera.lookAt(...object.position);w.player.position=[object.position[0],object.position[1]-30,object.position[2]+100];
    w.syncModels();w.syncActors(0);w.syncPlayer(0,{});w.updateRenderResidency();await w.geometryStream.settle();
    const record=w.effects.torches.records.find(r=>r.object.id===id);
    const state=w.effects.entries.get(record?.emitter.id);
    const samples=[],dt=1/30,period=animator.clip.duration/animator.timeScale;
    for(let i=0;i<60;i++){g.time+=dt;w.syncActors(dt);w.effects.update(dt);}
    const frames=Math.ceil(period/dt)+2;
    for(let i=0;i<frames;i++){
     g.time+=dt;w.syncActors(dt);w.effects.update(dt);
     const mesh=actor.userData.mesh;mesh.updateWorldMatrix(true,false);
     const tip=new THREE.Vector3();for(const vertex of [51,52,53])tip.add(new THREE.Vector3().fromBufferAttribute(mesh.geometry.attributes.position,vertex).multiplyScalar(1/3));tip.applyMatrix4(mesh.matrixWorld);
     const gpuIndex=w.effects.lightPositions.findIndex((position,index)=>w.effects.lightRadii[index]===record.light.radius&&position.distanceTo(new THREE.Vector3(...record.light.position))<1e-6);
     samples.push({time:animator.time,actorAge:object.actorAge,visible:actor.visible,active:record.active,tip:tip.toArray(),emitter:[...record.position],light:[...record.light.position],particles:state.particles.length,lightSubmitted:w.effects.lights.includes(record.light),gpuIndex});
    }
    w.render();
    return {level,id,motion:object.entity.MotionName,motionSpeed:object.entity.MotionSpeed,clip:animator.clip.name,timeScale:animator.timeScale,period,actorOrigin:object.position,records:w.effects.torches.records.filter(r=>r.object.id===id).length,emitter:record.emitter.id,bindings:w.effects.torches.records.filter(r=>r.emitter.id===record.emitter.id).length,pointLightSlots:w.effects.pointLights.length,samples};
   },{level,id});
   reports.push(result);await writeFile(`${out}/level-${level+1}-${id}.json`,JSON.stringify(result,null,2));
   if(id==='AdamAnyActor131')await page.screenshot({path:`${out}/empty-motion-fallback-${id}.png`});
  }
 }
 await writeFile(`${out}/report.json`,JSON.stringify({reports,errors},null,2));
 assert.equal(reports.length,32);assert.equal(reports.filter(r=>r.level===1).length,8);assert.equal(reports.filter(r=>r.level===2).length,24);
 for(const result of reports){
  const label=`level ${result.level+1} ${result.id}`;
  assert.equal(result.records,1,label+' single torch');assert.equal(result.bindings,1,label+' single emitter');assert.equal(result.pointLightSlots,8,label+' fixed light budget');
  assert.equal(result.clip,'anim',label+' actual clip');assert.equal(result.timeScale,Number(result.motionSpeed),label+' authored speed');
  assert.ok(new Set(result.samples.map(s=>s.time)).size>10,label+' clock advances');
  const span=axis=>Math.max(...result.samples.map(s=>s.tip[axis]))-Math.min(...result.samples.map(s=>s.tip[axis]));
  assert.ok(Math.hypot(span(0),span(2))>10,label+' lateral movement');
  for(const sample of result.samples){
   assert.ok(sample.visible&&sample.active&&sample.particles>0&&sample.lightSubmitted,label+' visible lit flame');
   assert.ok(sample.gpuIndex>=0,label+' light selected for actual rendering');
   assert.ok(Math.hypot(...sample.emitter.map((value,index)=>value-sample.tip[index]-(index===1?3:0)))<1e-4,label+' visible wick alignment');
   assert.deepEqual(sample.light,sample.emitter,label+' attached moving light');
  }
 }
 assert.deepEqual(errors,[]);
 const summary=reports.map(r=>({level:r.level+1,id:r.id,emitter:r.emitter,motion:r.motion,actualClip:r.clip,speed:r.timeScale,secondsSampled:r.samples.length/30,minimumParticles:Math.min(...r.samples.map(s=>s.particles)),allGpuSelected:r.samples.every(s=>s.gpuIndex>=0)}));
 await writeFile(`${out}/summary.json`,JSON.stringify({passed:true,count:32,summary,errors},null,2));
 console.log('PASS all 32 hand torches: authored motion, moving wick/flame/light, selected GPU lights, no duplicate emitters, no browser errors.');
}finally {await browser?.close();server.kill();}
