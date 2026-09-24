import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4300'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));
  page.on('console',m=>{if(m.type()==='error'&&/shader|WebGLProgram|VALIDATE_STATUS/i.test(m.text()))errors.push(m.text());});
  await page.addInitScript(()=>localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false})));
  await page.goto('http://127.0.0.1:4300/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const report=await page.evaluate(async()=>{
    const app=window.__redcat;if(!await app.startLevel(0))throw new Error('Forest load failed');
    app.pause();document.getElementById('pause').hidden=true;
    const w=app.world,g=app.gameplay,THREE=await import('three');
    for(const motion of g.scripts.players.values())motion.stop();g.scripts.camera=null;g.scripts.cutscene=false;
    w.camera.position.set(-1103,-90,2480);w.camera.lookAt(-1103,65,2750);
    w.syncModels();w.syncActors(0);w.syncPlayer(0,{});w.effects.update(0);w.syncActorLighting(w.effects.lights);
    const trees=[...w.actorInstances].filter(([,actor])=>actor.userData.template?.data.source==='tree.act');
    const samples=trees.map(([id,actor])=>({id,position:actor.position.toArray(),ambient:actor.userData.mesh.userData.actorLighting.uniforms.actorAmbient.value.toArray()}));
    const states=trees.map(([,actor])=>actor.userData.mesh.userData.actorLighting);
    const target=new THREE.WebGLRenderTarget(640,360);target.texture.colorSpace=THREE.SRGBColorSpace;
    const renderer=w.renderer,old=renderer.getRenderTarget();
    const capture=()=>{const pixels=new Uint8Array(640*360*4);renderer.setRenderTarget(target);renderer.render(w.scene,w.camera);renderer.readRenderTargetPixels(target,0,0,640,360,pixels);return pixels;};
    for(const state of states)state.uniforms.actorAmbient.value.setRGB(0,0,0);
    const before=capture();w.syncActorLighting(w.effects.lights);const after=capture();
    let restoredPixels=0,brightness=0;
    for(let i=0;i<before.length;i+=4){
      const increase=after[i]+after[i+1]+after[i+2]-before[i]-before[i+1]-before[i+2];
      if(increase>15){restoredPixels++;brightness+=(after[i]+after[i+1]+after[i+2])/3;}
    }
    const queries=w.actorFloorLighting.stats.queries,visits=w.actorFloorLighting.stats.nodeVisits;
    for(let frame=0;frame<60;frame++)w.syncActorLighting(w.effects.lights);
    const repeatedQueries=w.actorFloorLighting.stats.queries-queries,repeatedVisits=w.actorFloorLighting.stats.nodeVisits-visits;
    const positionsUnchanged=trees.every(([,actor],i)=>actor.position.toArray().every((v,k)=>v===samples[i].position[k]));
    renderer.setRenderTarget(old);target.dispose();w.render();
    return {samples,restoredPixels,meanLitBrightness:brightness/Math.max(1,restoredPixels),repeatedQueries,repeatedVisits,positionsUnchanged};
  });
  assert.equal(report.samples.length,60);
  assert.ok(report.samples.every(s=>s.ambient.some(v=>v>0)),JSON.stringify(report.samples));
  assert.ok(report.restoredPixels>1000,JSON.stringify(report));
  assert.ok(report.meanLitBrightness>15,JSON.stringify(report));
  assert.equal(report.repeatedQueries,0);assert.equal(report.repeatedVisits,0);
  assert.equal(report.positionsUnchanged,true);assert.deepEqual(errors,[]);
  await page.screenshot({path:'artifacts/forest-corner-trees-fixed.png'});
  await writeFile('artifacts/forest-tree-lighting-scenes.json',JSON.stringify(report,null,2)+'\n');
  console.log(`PASS 60 forest corner trees lit; ${report.restoredPixels} restored pixels, brightness ${report.meanLitBrightness.toFixed(1)}, no repeat BSP queries.`);
}finally{await browser?.close();server.kill();}
