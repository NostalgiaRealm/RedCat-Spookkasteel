import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import assert from 'node:assert/strict';

process.env.TMPDIR='current_work';
const output=resolve(`current_work/gargoyle-native-2026-09-28/render-${Date.now()}`);await mkdir(output,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4308'},stdio:['ignore','pipe','inherit']});
await new Promise((done,fail)=>{server.stdout.once('data',done);server.once('error',fail);});
let browser;
try {
 browser=await chromium.launchPersistentContext(resolve(output,'browser-profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl'],viewport:{width:1280,height:720}});
 const page=await browser.newPage(),errors=[];page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
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
  // The real tower actor and its authored shoot pose provide the mouth.
  const target=[o.position[0]+260,o.position[1]+10,o.position[2]+60];
  o.yaw=Math.atan2(target[0]-o.position[0],target[2]-o.position[2]);
  g.enemyAnimation(o,'attack',g.enemyDuration(o,'attack'));g.time+=g.enemyDuration(o,'attack')*.67;
  w.player.position=target;w.syncActors(0);w.syncPlayer(0,{});g.projectiles=[];g.gargoyleBlasts=[];g.enemyProjectile(o,target);
  const shot=g.projectiles[0],muzzle=[...shot.position],image={};
  // Side angle makes both the animated mouth and full blast shape reviewable.
  w.camera.position.set(o.position[0]+210,o.position[1]+160,o.position[2]+330);
  w.camera.lookAt(o.position[0]+130,o.position[1]+60,o.position[2]+30);w.camera.updateMatrixWorld();
  const snap=name=>{w.render();image[name]=w.renderer.domElement.toDataURL('image/png');};
  for(let i=0;i<19;i++)g.updateProjectiles(1/60,[10000,0,0]);
  const key='kaboom.bmp|kaboom_a.bmp';w.syncProjectiles();w.effects.update(0);
  const batch=w.effects.beamBatches.get(key);batch.mesh.visible=false;
  delete shot.visualEffect;w.syncProjectiles();snap('before-standard-pellet');
  shot.visualEffect='gargoyleBlast';w.syncProjectiles();w.effects.update(0);snap('after-native-blast');
  const nativeQuads=batch.count,positions=Array.from(batch.positions.array.slice(0,nativeQuads*18));
  const renderer=w.renderer,rt=new THREE.WebGLRenderTarget(640,360);rt.texture.colorSpace=THREE.SRGBColorSpace;
  const pixels=visible=>{batch.mesh.visible=visible;renderer.setRenderTarget(rt);renderer.render(w.scene,w.camera);const out=new Uint8Array(640*360*4);renderer.readRenderTargetPixels(rt,0,0,640,360,out);return out;};
  const empty=pixels(false),blast=pixels(true);let visiblePixels=0;
  for(let i=0;i<empty.length;i+=4)if(Math.abs(empty[i]-blast[i])+Math.abs(empty[i+1]-blast[i+1])+Math.abs(empty[i+2]-blast[i+2])>18)visiblePixels++;
  renderer.setRenderTarget(null);rt.dispose();
  const saved=g.snapshot();w.effects.update(0);w.syncProjectiles();const redrawStable=JSON.stringify(saved)===JSON.stringify(g.snapshot());
  g.restore(saved);w.effects.update(0);const restoreSameGeometry=JSON.stringify(positions)===JSON.stringify(Array.from(batch.positions.array.slice(0,batch.count*18)));
  h.enemiesFrozen=true;g.updateProjectiles(2,target);w.effects.update(0);const freezeSameGeometry=JSON.stringify(positions)===JSON.stringify(Array.from(batch.positions.array.slice(0,batch.count*18)));h.enemiesFrozen=false;
  for(let i=0;i<50;i++)g.updateProjectiles(1/60,[10000,0,0]);w.effects.update(0);w.syncProjectiles();
  return {enemy:o.id,muzzle,quadCount:nativeQuads,visiblePixels,redrawStable,restoreSameGeometry,freezeSameGeometry,retired:batch.count===0,noPellet:w.projectileMeshes.size===0,image};
 });
 for(const [name,url]of Object.entries(report.image))await writeFile(resolve(output,name+'.png'),Buffer.from(url.split(',')[1],'base64'));delete report.image;
 await writeFile(resolve(output,'report.json'),JSON.stringify({...report,errors},null,2));
 assert.deepEqual(errors,[]);assert.ok(report.quadCount>=3);assert.ok(report.visiblePixels>300,JSON.stringify(report));assert.ok(report.redrawStable&&report.restoreSameGeometry&&report.freezeSameGeometry&&report.retired&&report.noPellet);
 console.log(JSON.stringify({output,...report},null,2));
}finally{await browser?.close();server.kill();}
