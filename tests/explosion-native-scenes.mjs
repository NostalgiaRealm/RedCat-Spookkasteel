import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const port=process.env.EFFECT_PORT||'4290';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:port},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));
  page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  page.on('console',m=>{if(m.type()==='error')errors.push(m.text());});
  await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4})));
  await page.goto(`http://127.0.0.1:${port}/?skipIntro`);await page.waitForFunction(()=>window.__redcat);
  const source=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(2);app.pause();document.getElementById('pause').hidden=true;
    const w=app.world,g=app.gameplay,h=g.scripts;
    for(const motion of h.players.values())motion.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=false;
    for(const o of g.objects)if(['enemy','trigger','fairy'].includes(o.kind))o.enabled=false;
    const object=g.find('AdamAnyActor72')[0];
    if(!object)throw new Error('Missing authored graveyard brcrate actor AdamAnyActor72');
    const position=object.effectPosition();
    w.updateCamera=()=>{};w.player.noClip=true;w.player.position=[position[0]+100,position[1],position[2]+200];w.player.update=()=>{};
    w.camera.position.set(position[0]+180,position[1]+100,position[2]+240);w.camera.lookAt(...position);
    window.__explosionFixture={w,g,object,input:{forward:0,right:0,turn:0,jump:false,attack:false,use:false}};
    g.destroy(object);w.effects.update(0);w.render();
    const effect=g.explosions.find(e=>e.sourceId===object.id);window.__explosionFixture.birth=effect.birth;
    return {id:object.id,actor:object.entity.ActorName||object.entity.ActorFile,position,settings:object.actorSettings,explosion:effect};
  });
  const frames=[];
  for(const time of [.15,.45,1,2,5,8]) {
    frames.push(await page.evaluate(time=>{
      const {w,g,object,input,birth}=window.__explosionFixture;
      let maxUpdate=0;
      while(g.time-birth<time-1e-9){const start=performance.now();w.update(1/60,input);maxUpdate=Math.max(maxUpdate,performance.now()-start);}
      w.render();
      const batches=[...w.effects.batches].filter(([key])=>key.startsWith('explosie')||key.startsWith('smoke_'));
      const bitmapBatches=batches.map(([key,b])=>({key,count:b.count,instances:b.mesh.geometry.instanceCount,visible:b.mesh.visible,texture:b.mesh.material.uniforms.map.value.image?.src,opacity:Array.from(b.colors.array.slice(0,b.count*4)).filter((_,i)=>i%4===3)}));
      // Compare actual rendered pixels with only explosion/smoke quads hidden.
      // Fragments and the level remain identical, so nonzero pixels prove the
      // original sprite batches are visible rather than merely allocated.
      const gl=w.renderer.getContext(),width=gl.drawingBufferWidth,height=gl.drawingBufferHeight;
      const before=new Uint8Array(width*height*4),after=new Uint8Array(before.length);
      gl.readPixels(0,0,width,height,gl.RGBA,gl.UNSIGNED_BYTE,before);
      const visibility=batches.map(([,b])=>b.mesh.visible);for(const [,b]of batches)b.mesh.visible=false;
      w.render();gl.readPixels(0,0,width,height,gl.RGBA,gl.UNSIGNED_BYTE,after);
      batches.forEach(([,b],i)=>b.mesh.visible=visibility[i]);w.render();
      let changedPixels=0;for(let i=0;i<before.length;i+=4)if(Math.abs(before[i]-after[i])+Math.abs(before[i+1]-after[i+1])+Math.abs(before[i+2]-after[i+2])>5)changedPixels++;
      const effects=w.effects.destructibles;
      return {time,age:g.time-birth,health:object.health,bitmapBatches,changedPixels,maxUpdate,
        blastCohorts:effects.blasts.length,smokeCohortParticles:effects.blasts.reduce((n,b)=>n+b.smoke.length,0),fragments:effects.particles.length,
        fragmentPositions:effects.particles.map(p=>p.position),draws:w.renderer.info.render.calls,scriptError:g.scripts.vm.lastError};
    },time));
    if([.15,.45,2].includes(time))await page.screenshot({path:`artifacts/explosion-native-${time}.png`});
  }
  await writeFile('artifacts/explosion-native-scenes.json',JSON.stringify({source,frames,errors},null,2)+'\n');
  const count=(frame,prefix)=>frame.bitmapBatches.filter(b=>b.key.startsWith(prefix)).reduce((n,b)=>n+b.count,0);
  assert.equal(source.explosion.settings.explosion.SizePercentage,25,'fixture uses authored crate explosion size');
  assert.ok(count(frames[0],'explosie')>0,'original explosion artwork is submitted');
  assert.equal(count(frames[0],'smoke_'),0,'native smoke waits 200ms');
  assert.ok(count(frames[1],'smoke_')>0,'delayed native smoke appears');
  assert.ok(frames.slice(0,4).every(f=>f.changedPixels>0),'blast and smoke draw visible pixels');
  assert.ok(frames.some(f=>f.fragments>0),'real crate creates its original fragments');
  assert.ok(frames.every(f=>f.fragmentPositions.flat().every(Number.isFinite)));
  assert.equal(frames.at(-1).fragments,0,'fragments retire');
  assert.equal(frames.at(-1).blastCohorts,0,'smoke cohorts retire');
  assert.equal(count(frames.at(-1),'smoke_'),0);assert.equal(count(frames.at(-1),'explosie'),0);
  assert.ok(frames.every(f=>f.bitmapBatches.every(b=>b.count===b.instances)),'GPU batches match native cohort counts');
  assert.ok(frames.every(f=>f.scriptError===null));assert.deepEqual(errors,[]);
  console.log(JSON.stringify({frames:frames.map(({bitmapBatches,fragmentPositions,...f})=>({...f,blastSprites:count({bitmapBatches},'explosie'),smokeSprites:count({bitmapBatches},'smoke_')})),errors},null,2));
}finally{await browser?.close();server.kill();}
