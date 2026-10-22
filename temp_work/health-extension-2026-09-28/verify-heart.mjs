import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,readFile,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import assert from 'node:assert/strict';

process.env.TMPDIR='current_work';
const work=resolve('current_work/health-extension-2026-09-28');
const output=resolve(work,`render-${Date.now()}`);await mkdir(output);
const save=JSON.parse(await readFile(resolve(work,'live-autosave.json'),'utf8'));
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4307'},stdio:['ignore','pipe','inherit']});
await new Promise((done,fail)=>{server.stdout.once('data',done);server.once('error',fail);});
let browser;
try{
  browser=await chromium.launchPersistentContext(resolve(work,'browser-profile'),{
    executablePath:'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl'],viewport:{width:1280,height:720}});
  const page=await browser.newPage(),errors=[];page.on('pageerror',e=>errors.push(e.stack));
  await page.addInitScript(()=>{
    localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,volume:0}));
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  });
  await page.goto('http://127.0.0.1:4307/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const report=await page.evaluate(async save=>{
    const app=window.__redcat;if(!await app.startLevel(4,save))throw Error('Tower failed to load');app.pause();
    const w=app.world,g=app.gameplay,THREE=await import('three');
    const item=g.objects.find(o=>o.id==='ItemHart1'),actor=w.actorInstances.get(item.id),mesh=actor.userData.mesh;
    const original=await w.makeActor('ihart');original.position.copy(actor.position);original.quaternion.copy(actor.quaternion);w.scene.add(original);original.visible=false;
    w.camera.position.set(save.position[0],save.position[1]+35,save.position[2]+30);
    w.camera.lookAt(actor.position.x,actor.position.y+9,actor.position.z);
    const renderer=w.renderer,target=new THREE.WebGLRenderTarget(640,360),old=renderer.getRenderTarget();
    target.texture.colorSpace=THREE.SRGBColorSpace;
    const capture=()=>{w.syncActorLighting();renderer.setRenderTarget(target);renderer.render(w.scene,w.camera);const pixels=new Uint8Array(640*360*4);renderer.readRenderTargetPixels(target,0,0,640,360,pixels);return pixels;};
    const images={};
    const png=name=>{renderer.setRenderTarget(old);w.render();images[name]=renderer.domElement.toDataURL('image/png');};
    const visible=actor.visible;actor.visible=false;const empty=capture();
    original.visible=true;const before=capture();png('before-small-red-heart');original.visible=false;
    actor.visible=true;const after=capture();png('after-golden-heart');
    const colored=(image,color)=>{let count=0;for(let i=0;i<image.length;i+=4){const [r,green,b]=image.subarray(i,i+3);if(Math.abs(r-empty[i])+Math.abs(green-empty[i+1])+Math.abs(b-empty[i+2])>12&&color(r,green,b))count++;}return count;};
    const size=mesh.geometry.boundingBox.getSize(new THREE.Vector3()).multiply(mesh.scale).toArray();
    const rotation=actor.quaternion.toArray();w.syncActors(.1);const rotates=rotation.some((v,i)=>Math.abs(v-actor.quaternion.toArray()[i])>1e-6);
    const health=g.state.health,capacity=g.state.maxHealth,score=g.state.score;g.pickup(item);w.syncActors(0);
    renderer.setRenderTarget(old);target.dispose();
    return {visible,actorFile:item.actorFile,source:actor.userData.template.data.source,scale:mesh.scale.toArray(),size,rotates,
      originalRedPixels:colored(before,(r,g,b)=>r>g*1.5&&r>b*1.5),goldenPixels:colored(after,(r,g,b)=>r>60&&g>45&&g>b*1.7&&r>g*.8),
      collected:item.collected,hiddenAfterPickup:!actor.visible,healthUnchanged:g.state.health===health,capacityBefore:capacity,capacityAfter:g.state.maxHealth,scoreAdded:g.state.score-score,images};
  },save);
  const {images,...results}=report;for(const [name,url] of Object.entries(images))await writeFile(resolve(output,name+'.png'),Buffer.from(url.split(',')[1],'base64'));
  await writeFile(resolve(output,'report.json'),JSON.stringify({...results,errors},null,2));
  assert.deepEqual(errors,[]);assert.equal(results.visible,true);assert.equal(results.source,'hartcontainer.act');assert.deepEqual(results.scale,[3,3,3]);
  assert.ok(results.goldenPixels>100);assert.ok(results.originalRedPixels>10);assert.ok(results.rotates);
  assert.ok(results.collected&&results.hiddenAfterPickup&&results.healthUnchanged);assert.equal(results.capacityAfter,Math.min(20,results.capacityBefore+2));assert.equal(results.scoreAdded,75);
  console.log(JSON.stringify({output,...results},null,2));
}finally{await browser?.close();server.kill();}
