import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import assert from 'node:assert/strict';

process.env.TMPDIR='current_work';
const output=resolve(`current_work/gargoyle-transparency-2026-09-29/render-${Date.now()}`);
await mkdir(output,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4308'},stdio:['ignore','pipe','inherit']});
await new Promise((done,fail)=>{server.stdout.once('data',done);server.once('error',fail);});
let browser;
try {
 browser=await chromium.launchPersistentContext(resolve(output,'browser-profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl'],viewport:{width:1280,height:720}});
 const page=await browser.newPage(),errors=[];
 page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
 await page.addInitScript(()=>{
  localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,volume:0,camera:'third'}));
 });
 await page.goto('http://127.0.0.1:4308/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 const report=await page.evaluate(async()=>{
  const app=window.__redcat;await app.startLevel(4);app.pause();
  const w=app.world,g=app.gameplay,h=g.scripts,THREE=await import('three');
  for(const p of h.players.values())p.stop();h.cutscene=false;h.enemiesFrozen=false;h.camera=null;
  const o=g.objects.find(o=>o.enemyType==='gargoyle');o.enabled=true;o.visible=true;
  const target=[o.position[0]+260,o.position[1]+10,o.position[2]+60];
  o.yaw=Math.atan2(target[0]-o.position[0],target[2]-o.position[2]);
  g.enemyAnimation(o,'attack',g.enemyDuration(o,'attack'));g.time+=g.enemyDuration(o,'attack')*.67;
  w.player.position=target;w.syncActors(0);w.syncPlayer(0,{});g.projectiles=[];g.gargoyleBlasts=[];g.enemyProjectile(o,target);
  for(let i=0;i<19;i++)g.updateProjectiles(1/60,[10000,0,0]);
  w.camera.position.set(o.position[0]+210,o.position[1]+160,o.position[2]+330);
  w.camera.lookAt(o.position[0]+130,o.position[1]+60,o.position[2]+30);w.camera.updateMatrixWorld();
  w.syncProjectiles();w.effects.update(0);
  const batch=w.effects.beamBatches.get('kaboom.bmp|kaboom_a.bmp'),map=batch.mesh.material.map;
  const actualFlip=map.flipY,image={},quadCount=batch.count;
  for(const [name,flip]of [['before-flipped-mask',true],['after-native-mask',actualFlip]]){
   map.flipY=flip;map.needsUpdate=true;w.render();image[name]=w.renderer.domElement.toDataURL('image/png');
  }
  // Read the actual production batch over black and white backgrounds.
  // Their difference isolates transmission, independent of flame RGB.
  const scene=new THREE.Scene(),camera=new THREE.OrthographicCamera(-1,1,1,-1,.1,10);camera.position.z=2;
  const mesh=batch.mesh.clone();scene.add(mesh);
  batch.count=0;
  batch.addPoints([[-1,-1,0],[1,-1,0],[-1,1,0],[1,-1,0],[1,1,0],[-1,1,0]].map(p=>new THREE.Vector3(...p)),[1,1,1],1,1,0);
  batch.flush();
  const renderer=w.renderer,rt=new THREE.WebGLRenderTarget(128,128);rt.texture.colorSpace=THREE.LinearSRGBColorSpace;
  const render=background=>{
   scene.background=new THREE.Color(background);renderer.setRenderTarget(rt);renderer.render(scene,camera);
   const pixels=new Uint8Array(128*128*4);renderer.readRenderTargetPixels(rt,0,0,128,128,pixels);return pixels;
  };
  const sample=()=>{
   const black=render(0x000000),white=render(0xffffff);
   const transmission=y=>(white[(y*128+64)*4]-black[(y*128+64)*4])/255;
   return {tailTransmission:transmission(7),headTransmission:transmission(120)};
  };
  const corrected=sample();map.flipY=true;map.needsUpdate=true;const regressed=sample();
  map.flipY=actualFlip;map.needsUpdate=true;renderer.setRenderTarget(null);rt.dispose();w.effects.update(0);
  return {actualFlip,quadCount,corrected,regressed,image};
 });
 for(const [name,url]of Object.entries(report.image))await writeFile(resolve(output,name+'.png'),Buffer.from(url.split(',')[1],'base64'));
 delete report.image;await writeFile(resolve(output,'report.json'),JSON.stringify({...report,errors},null,2));
 assert.deepEqual(errors,[]);assert.equal(report.actualFlip,false);assert.ok(report.quadCount>=3);
 assert.ok(report.corrected.tailTransmission>.2,'scenery must remain visible through the red tail');
 assert.ok(report.corrected.headTransmission<.04,'the yellow head must retain its original brightness');
 assert.ok(report.regressed.tailTransmission<.04,'the old orientation must reproduce the opaque-tail regression');
 console.log(JSON.stringify({output,...report},null,2));
}finally{await browser?.close();server.kill();}
