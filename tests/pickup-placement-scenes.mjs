import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,readFile,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';
const out=path.resolve(`temp_work/pickup-placement-2026-10-09/scenes-${Date.now()}`);
await mkdir(out,{recursive:true});
const env={...process.env,TMPDIR:'temp_work'},save=process.argv[2]?JSON.parse(await readFile(process.argv[2],'utf8')):null;
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
let context;
try {
 context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,env,viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await context.newPage(),errors=[];page.on('pageerror',e=>errors.push(e.stack));
 page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
 await page.addInitScript(saved=>{
  localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,volume:0,resolution:'native',autoIntro:false}));
  if(saved)localStorage.setItem('redcat.save.v1',JSON.stringify(saved));
 },save);
 await page.goto(base+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 const results=[];
 for(const index of [...(save?[-1]:[]),0,1,2,3,4]) {
  const result=await page.evaluate(async index=>{
   const app=window.__redcat,ok=await(index<0?app.loadSave():app.startLevel(index));app.pause();document.getElementById('pause').hidden=true;
   const w=app.world,g=app.gameplay,T=await import('three');
   w.syncModels();w.syncActors(0);await w.geometryStream.settle();w.updateRenderResidency();w.scene.updateMatrixWorld(true);w.renderer.render(w.scene,w.camera);
   const items=g.objects.filter(o=>o.kind==='pickup').map(o=>{
    const actor=w.actorInstances.get(o.id),p=g.objectPosition(o),box=new T.Box3().setFromObject(actor);
    return {id:o.id,kind:o.subtype,origin:o.entity.Origin,anchor:o.position,position:p,actorPosition:actor.position.toArray(),bounds:[box.min.toArray(),box.max.toArray()],placement:o.pickupPlacement,model:o.entity.Model};
   });
   return {ok,level:g.level.id,restored:index<0,items};
  },index);
  await page.screenshot({path:path.join(out,result.restored?'after-save.png':result.level+'.png')});
  results.push(result);
  await writeFile(path.join(out,'report.json'),JSON.stringify({results,errors},null,2)+'\n');
  assert.equal(result.ok,true);
  assert.ok(result.items.every(o=>o.placement&&o.actorPosition.every((v,i)=>Math.abs(v-o.position[i])<1e-6)));
  console.log(result.level,result.restored?'saved':'fresh','items',result.items.length,'supported',result.items.filter(o=>o.placement.supported).length,'embedded',result.items.filter(o=>o.placement.startSolid).map(o=>o.id).join(','));
 }
 assert.deepEqual(results.filter(r=>!r.restored).map(r=>r.items.length),[40,78,123,154,42]);
 const potion=results.find(r=>r.level==='lvl01a').items.find(o=>o.id==='ItemPotion27');
 assert.ok(Math.abs(potion.position[1]-(-30.06936900019646))<.1,JSON.stringify(potion));
 if(save) {
  const fresh=results.find(r=>r.level===save.level&&!r.restored),restored=results.find(r=>r.restored);
  assert.deepEqual(restored.items.map(o=>[o.id,o.placement]),fresh.items.map(o=>[o.id,o.placement]),'floor placement is independent of saved time, props and platform pose');
 }
 assert.deepEqual(errors,[]);
 console.log('PASS pickup placement in all five levels; '+out);
} finally {await context?.close();server.kill();}
