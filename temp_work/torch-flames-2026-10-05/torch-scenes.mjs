import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const work='current_work/torch-flames-2026-10-05';
const out=`${work}/scenes`,port='4386',env={...process.env,TMPDIR:`${work}/t`};
await mkdir(out,{recursive:true});await mkdir(env.TMPDIR,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:port},stdio:['ignore','pipe','inherit']});
await new Promise((r,j)=>{server.stdout.once('data',r);server.once('error',j);});
const fixtures=[
 {name:'castle-jester',level:1,ids:['AdamAnyActor271','AdamAnyActor273'],camera:[-81,281,-2960],look:[-81,274,-3262]},
 {name:'graveyard-entrance',level:2,ids:['AdamAnyActor132','AdamAnyActor133'],camera:[1616,74,3390],look:[1616,69,3115]},
 {name:'caves-static-entrance',level:3,ids:['AdamAnyActor30','AdamAnyActor31','AdamAnyActor32','AdamAnyActor33'],camera:[-545,80,2830],look:[-440,54,2530]}
];
const errors=[],reports=[];let browser;
try{
 browser=await chromium.launch({executablePath:'/usr/bin/google-chrome',headless:true,env,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required',`--crash-dumps-dir=${out}`]});
 for(const phase of ['baseline','after']){
  const page=await browser.newPage({viewport:{width:1280,height:720}});
  page.on('pageerror',e=>errors.push({phase,error:e.stack}));
  page.on('console',m=>{if(m.type()==='error'&&/shader|WebGLProgram|VALIDATE_STATUS/i.test(m.text()))errors.push({phase,error:m.text()});});
  // Baseline disables only the new manager; all pre-existing authored flames
  // and current renderer/lighting remain at exactly the same camera and time.
  if(phase==='baseline')await page.route('**/src/torch-flames.js',route=>route.fulfill({contentType:'application/javascript',body:'export class TorchFlames {constructor(){this.records=[];this.synthetic=[];this.lights=[];this.bindings=new Map();}update(){}position(){return null;}enabled(){return true;}direction(){return null;}}'}));
  await page.addInitScript(()=>{localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false}));});
  await page.goto(`http://127.0.0.1:${port}/?skipIntro`);await page.waitForFunction(()=>window.__redcat);
  for(const fixture of fixtures){
   console.log(`${phase}: ${fixture.name}`);
   const report=await page.evaluate(async({fixture,phase})=>{
    const a=window.__redcat;if(!await a.startLevel(fixture.level))throw Error('Level load failed');a.pause();document.getElementById('pause').hidden=true;
    const w=a.world,g=a.gameplay,THREE=await import('three');
    for(const p of g.scripts.players.values())p.stop();g.scripts.camera=null;g.scripts.cutscene=false;
    w.camera.position.fromArray(fixture.camera);w.camera.lookAt(...fixture.look);
    w.player.position=[fixture.camera[0],fixture.camera[1]-60,fixture.camera[2]];
    w.syncModels();w.syncActors(0);w.syncPlayer(0,{});w.updateRenderResidency();await w.geometryStream.settle();
    const ids=new Set(fixture.ids),flameKey='flame03.bmp|a_flame.bmp';
    const authored=[...w.effects.entries.values()].filter(s=>s.object.entity.classname==='EffectSpoutEntity'&&`${s.object.entity.BitmapFileName}|${s.object.entity.BitmapAlphaFileName}`.toLowerCase()===flameKey&&!s.object.id.startsWith('torch-flame:'));
    const actorState=id=>{
     const actor=w.actorInstances.get(id),mesh=actor.userData.mesh;
     mesh.updateWorldMatrix(true,false);
     const verts=mesh.geometry.attributes.position,tip=new THREE.Vector3();
     if(actor.userData.entity.ActorFileName.toLowerCase()==='htorch.act')for(const i of [51,52,53])tip.add(new THREE.Vector3().fromBufferAttribute(verts,i).multiplyScalar(1/3));
     tip.applyMatrix4(mesh.matrixWorld);
     const record=w.effects.torches.records.find(r=>r.object.id===id);
     const nearest=record?w.effects.entries.get(record.emitter.id):authored.map(s=>({s,d:s.object.position.reduce((sum,p,i)=>sum+(p-tip.toArray()[i])**2,0)})).sort((a,b)=>a.d-b.d)[0]?.s;
     return {id,visible:actor.visible,animated:!!actor.userData.animator,tip:tip.toArray(),actorPosition:actor.position.toArray(),record:record?{emitter:record.emitter.id,active:record.active,position:[...record.position],light:[...record.light.position],lightSubmitted:w.effects.lights.includes(record.light),particles:nearest?.particles.length}:null,
       nearestAuthored:nearest?{id:nearest.object.id,origin:[...nearest.object.position],renderPosition:[...w.effects.position(nearest.object)],particles:nearest.particles.length}:null};
    };
    for(let i=0;i<120;i++){g.time+=1/60;w.syncActors(1/60);w.effects.update(1/60);}
    const frames=[];
    for(let i=0;i<121;i++){g.time+=1/60;w.syncActors(1/60);w.effects.update(1/60);frames.push({frame:i,actors:fixture.ids.map(actorState)});}
    w.render();
    return {phase,fixture,records:w.effects.torches.records.map(r=>({id:r.object.id,emitter:r.emitter.id})),synthetic:w.effects.torches.synthetic.length,authoredFlames:authored.length,entries:w.effects.entries.size,pointLightSlots:w.effects.pointLights.length,flameBatchCount:w.effects.batches.get(flameKey)?.count,frames};
   },{fixture,phase});
   reports.push(report);await writeFile(`${out}/${phase}-${fixture.name}.json`,JSON.stringify(report,null,2));
   await page.screenshot({path:`${out}/${phase}-${fixture.name}.png`});
  }
  await page.close();
 }
 await writeFile(`${out}/report.json`,JSON.stringify({reports,errors},null,2));
 const castle=reports.find(r=>r.phase==='after'&&r.fixture.level===1),grave=reports.find(r=>r.phase==='after'&&r.fixture.level===2),caves=reports.find(r=>r.phase==='after'&&r.fixture.level===3);
 assert.equal(castle.records.length,8);assert.equal(castle.synthetic,8);assert.equal(grave.records.length,24);assert.equal(grave.synthetic,8);assert.equal(caves.records.length,0);assert.equal(caves.synthetic,0);
 for(const r of [castle,grave]){
  assert.equal(new Set(r.records.map(x=>x.emitter)).size,r.records.length,'every hand has exactly one flame');
  assert.equal(r.pointLightSlots,8,'fixed dynamic light budget');
  for(const id of r.fixture.ids){
   const samples=r.frames.map(f=>f.actors.find(a=>a.id===id));
   assert.ok(samples.every(a=>a.record.active&&a.record.particles>0&&a.record.lightSubmitted));
   assert.ok(Math.max(...samples.map(a=>a.record.position[0]))-Math.min(...samples.map(a=>a.record.position[0]))>10,'torch flame follows lateral animation');
   for(const a of samples){assert.ok(Math.hypot(...a.record.position.map((v,i)=>v-a.tip[i]-(i===1?3:0)))<1e-4,'emitter attached to visible wick cap');assert.deepEqual(a.record.position,a.record.light);}
  }
 }
 for(const id of caves.fixture.ids){const samples=caves.frames.map(f=>f.actors.find(a=>a.id===id));assert.ok(samples.every(a=>!a.animated&&!a.record));assert.ok(samples.every(a=>JSON.stringify(a.actorPosition)===JSON.stringify(samples[0].actorPosition)));}
 assert.equal(caves.authoredFlames,10);assert.deepEqual(errors,[]);
 console.log('PASS focused torch scenes: exact animated wick/light attachment, no duplicate flames, static Caves unchanged, fixed light budget, no browser/shader errors.');
}finally{await browser?.close();server.kill();}
