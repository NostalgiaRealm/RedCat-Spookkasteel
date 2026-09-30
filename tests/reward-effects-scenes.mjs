import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import assert from 'node:assert/strict';

// Keep the browser profile and diagnostic work in the user's persistent
// work directory, including after a machine restart.
const work=resolve('current_work');await mkdir(work,{recursive:true});
// A relative TMPDIR avoids Linux's 108-byte Unix socket pathname limit on
// the long storage mount path, while still placing all files under work.
process.env.TMPDIR='current_work';
const output=resolve(work,`reward-scenes-${new Date().toISOString().replace(/[:.]/g,'-')}`);await mkdir(output);
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4302'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  browser=await chromium.launchPersistentContext(resolve(work,'reward-effects-browser-profile'),{
    executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl'],viewport:{width:1280,height:720}});
  const page=await browser.newPage(),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));
  page.on('console',m=>{if(m.type()==='error'&&/shader|WebGLProgram|VALIDATE_STATUS/i.test(m.text()))errors.push(m.text());});
  await page.addInitScript(()=>localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false})));
  await page.goto('http://127.0.0.1:4302/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const report=await page.evaluate(async()=>{
    const app=window.__redcat;if(!await app.startLevel(0))throw new Error('Forest load failed');app.pause();
    const w=app.world,g=app.gameplay,THREE=await import('three');
    const {SCORE_TEXTURES,PICKUP_TEXTURE}=await import('./src/reward-effects.js');
    for(const motion of g.scripts.players.values())motion.stop();g.scripts.camera=null;g.scripts.cutscene=false;
    const target=new THREE.WebGLRenderTarget(640,360);target.texture.colorSpace=THREE.SRGBColorSpace;
    const renderer=w.renderer,old=renderer.getRenderTarget(),images={};
    const capture=()=>{const pixels=new Uint8Array(640*360*4);renderer.setRenderTarget(target);renderer.render(w.scene,w.camera);renderer.readRenderTargetPixels(target,0,0,640,360,pixels);return pixels;};
    const changed=(a,b)=>{let count=0;for(let i=0;i<a.length;i+=4)if(Math.abs(a[i]-b[i])+Math.abs(a[i+1]-b[i+1])+Math.abs(a[i+2]-b[i+2])>9)count++;return count;};
    const frame=()=>{w.syncModels();w.syncActors(0);w.effects.update(0);};
    const face=origin=>{w.camera.position.set(origin[0],origin[1]+90,origin[2]+180);w.camera.lookAt(origin[0],origin[1]+25,origin[2]);};
    const saveImage=name=>{renderer.setRenderTarget(old);renderer.render(w.scene,w.camera);images[name]=renderer.domElement.toDataURL('image/png');};
    const enemy=g.objects.find(o=>o.kind==='enemy'&&o.enemyType==='frog');
    const distance=o=>Math.hypot(...o.position.map((v,i)=>v-enemy.position[i]));
    const potion=g.objects.filter(o=>o.subtype==='potion'&&o.enabled&&!o.collected).sort((a,b)=>distance(a)-distance(b))[0];
    g.pickup(potion);const pickup=g.rewardEffects.at(-1);g.time=pickup.birth+.35;face(pickup.position);frame();
    const trail=w.effects.beamBatches.get(PICKUP_TEXTURE),score=w.effects.beamBatches.get(SCORE_TEXTURES[2]);
    const pickupCounts={trails:trail.count,scores:score.count};
    const withBoth=capture();trail.mesh.visible=false;score.mesh.visible=false;const without=capture();
    trail.mesh.visible=true;const trailOnly=capture();trail.mesh.visible=false;score.mesh.visible=true;const scoreOnly=capture();
    frame();saveImage('pickup');
    const vertices=Array.from(score.positions.array.slice(0,18));w.effects.update(0);
    const pausedStable=vertices.every((v,i)=>v===score.positions.array[i]);
    const snapshot=g.snapshot();g.restore(snapshot);frame();const restoredSame=changed(withBoth,capture())===0;
    // Remove the pickup after its native lifetime before testing defeat.
    g.time=pickup.birth+1.1;frame();const expiredPickup=trail.count===0&&score.count===0;
    const oldCentre=enemy.rewardPosition();enemy.position[0]+=25;
    g.destroy(enemy);const defeat=g.rewardEffects.at(-1),movedEnemyCentre=Math.abs(defeat.position[0]-oldCentre[0]-25)<1e-6;
    g.time=defeat.birth+.6;face(defeat.position);frame();
    const enemyScore=w.effects.beamBatches.get(SCORE_TEXTURES[1]);
    const enemyCounts={trails:trail.count,scores:enemyScore.count};const killed=capture();enemyScore.mesh.visible=false;const noScore=capture();frame();saveImage('enemy');
    g.time=defeat.birth+1.6;frame();const expiredEnemy=enemyScore.count===0;
    renderer.setRenderTarget(old);target.dispose();
    return {pickupCounts,enemyCounts,pickupPixels:changed(withBoth,without),trailPixels:changed(trailOnly,without),scorePixels:changed(scoreOnly,without),enemyScorePixels:changed(killed,noScore),pausedStable,restoredSame,expiredPickup,expiredEnemy,movedEnemyCentre,images};
  });
  const {images,...results}=report;
  for(const [name,data] of Object.entries(images))await writeFile(resolve(output,`reward-effects-${name}.png`),Buffer.from(data.split(',')[1],'base64'));
  await writeFile(resolve(output,'reward-effects-scenes.json'),JSON.stringify({...results,errors},null,2)+'\n');
  assert.deepEqual(errors,[]);assert.deepEqual(results.pickupCounts,{trails:5,scores:1});assert.deepEqual(results.enemyCounts,{trails:0,scores:1});
  for(const key of ['pickupPixels','trailPixels','scorePixels','enemyScorePixels'])assert.ok(results[key]>20,`${key}: ${results[key]}`);
  for(const key of ['pausedStable','restoredSame','expiredPickup','expiredEnemy','movedEnemyCentre'])assert.equal(results[key],true,key);
  console.log('PASS original pickup trails and score graphics render; defeat counter, pause, restore and expiry verified.',results,output);
}finally{await browser?.close();server.kill();}
