import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,readFile,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

import {sceneOutput} from './support/scene-output.mjs';
// Optional copied save is loaded only in an isolated browser profile.
const save=process.argv[2]?JSON.parse(await readFile(process.argv[2],'utf8')):null;
const out=path.resolve(sceneOutput(`temp_work/graveyard-wall-gap/scenes-${Date.now()}`));
await mkdir(out,{recursive:true});
// A relative TMPDIR keeps Chromium's Unix socket path below its length limit.
const env={...process.env,TMPDIR:sceneOutput('temp_work')};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
let context;
try {
  context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,env,
    viewport:{width:1280,height:800},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await context.newPage(),errors=[];
  page.on('pageerror',error=>errors.push(error.stack));
  page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
  await page.addInitScript(saved=>{
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
    localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,volume:0,resolution:'native',autoIntro:false}));
    if(saved)localStorage.setItem('redcat.save.v1',JSON.stringify(saved));
  },save);
  await page.goto(base+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const loaded=await page.evaluate(async restored=>{
    const app=window.__redcat,ok=await(restored?app.loadSave():app.startLevel(2));
    app.pause();document.getElementById('pause').hidden=true;return ok;
  },!!save);
  assert.equal(loaded,true);
  const result=await page.evaluate(async()=>{
    const THREE=await import('three'),app=window.__redcat,w=app.world;
    w.camera.position.set(1108.360273121337,611.4031797722935,-2006.801178591357);
    w.camera.lookAt(1009.8941621388993,562.0186400007009,-1903.9444239784862);
    w.camera.aspect=1.6;w.camera.updateProjectionMatrix();
    w.updateRenderResidency();await w.geometryStream.settle();w.updateRenderResidency();
    const trim=w.geometryStream.chunks.filter(c=>c.group.model===0&&w.level.textures[c.group.texture].name==='hek_door');
    const gates=w.geometryStream.chunks.filter(c=>c.group.model!==0&&w.level.textures[c.group.texture].name==='hek_door');
    const gateTests=gates.map(c=>({model:c.group.model,flags:c.group.flags,alphaTest:c.material.material.alphaTest}));
    const target=new THREE.WebGLRenderTarget(960,600),after=new Uint8Array(960*600*4),before=new Uint8Array(after.length);
    const pixels=buffer=>{w.renderer.setRenderTarget(target);w.renderer.render(w.scene,w.camera);w.renderer.readRenderTargetPixels(target,0,0,960,600,buffer);w.renderer.setRenderTarget(null);};
    const capture=()=>{w.renderer.render(w.scene,w.camera);return w.renderer.domElement.toDataURL('image/png').split(',')[1];};
    pixels(after);const afterImage=capture();
    const saved=trim.map(c=>c.material.material.alphaTest);
    trim.forEach(c=>{c.material.material.alphaTest=.5;c.material.material.needsUpdate=true;});
    pixels(before);const beforeImage=capture();
    trim.forEach((c,i)=>{c.material.material.alphaTest=saved[i];c.material.material.needsUpdate=true;});
    let filledPixels=0;
    for(let i=0;i<before.length;i+=4)if(Math.abs(before[i]-after[i])+Math.abs(before[i+1]-after[i+1])+Math.abs(before[i+2]-after[i+2])>3)filledPixels++;
    target.dispose();
    // Verify both authored strips are present and solid to the renderer.
    const ray=new THREE.Raycaster(),probes=[];
    for(const x of [836,1028]){
      const point=new THREE.Vector3(x,600,-1840);
      ray.set(w.camera.position,point.clone().sub(w.camera.position).normalize());
      const hit=ray.intersectObjects(trim.map(c=>c.mesh))[0];
      probes.push({x,hit:!!hit,alphaTest:hit?.object.material.alphaTest,point:hit?.point.toArray()});
    }
    return {trim:trim.map(c=>({flags:c.group.flags,alphaTest:c.material.material.alphaTest,faces:c.spans.map(s=>s[0]),vertices:c.count,resident:c.resident,inView:c.inView})),gateTests,filledPixels,probes,beforeImage,afterImage};
  });
  for(const key of ['beforeImage','afterImage']){await writeFile(path.join(out,key+'.png'),Buffer.from(result[key],'base64'));delete result[key];}
  await writeFile(path.join(out,'report.json'),JSON.stringify({result,errors},null,2)+'\n');
  assert.equal(result.trim.length,1);
  assert.deepEqual(result.trim[0],{flags:0,alphaTest:0,faces:[920,921],vertices:12,resident:true,inView:true});
  assert.ok(result.filledPixels>100,JSON.stringify(result));
  for(const probe of result.probes){assert.equal(probe.hit,true);assert.equal(probe.alphaTest,0);}
  assert.ok(result.gateTests.length>=4);
  for(const gate of result.gateTests){assert.ok(gate.flags&16);assert.equal(gate.alphaTest,.5);}
  assert.deepEqual(errors,[]);
  console.log(`PASS: both opaque wall strips restored (${result.filledPixels} changed pixels); original fence cutouts retained.\n${out}`);
} finally {await context?.close();server.kill();}
