import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4295'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',error=>errors.push(error.stack));
  page.on('console',message=>{if(message.type()==='error'&&/shader|WebGLProgram|VALIDATE_STATUS/i.test(message.text()))errors.push(message.text());});
  await page.addInitScript(()=>localStorage.setItem('redcat.settings.v1',JSON.stringify({touchControls:'on',autoIntro:false})));
  await page.goto('http://127.0.0.1:4295/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const report=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(0);app.pause();document.getElementById('pause').hidden=true;
    const world=app.world,game=app.gameplay,THREE=await import('three');
    for(const player of game.scripts.players.values())player.stop();game.scripts.cutscene=false;game.scripts.camera=null;
    for(const entry of world.effects.entries.values())entry.object.enabled=false;
    world.effects.update(0);world.syncActors(0);world.syncPlayer(0,{});
    const origin=world.player.position;world.camera.position.set(origin[0]+190,origin[1]+115,origin[2]+200);world.camera.lookAt(...origin.map((v,i)=>v+(i===1?30:0)));
    const target=new THREE.WebGLRenderTarget(640,360),renderer=world.renderer,old=renderer.getRenderTarget();
    const capture=()=>{const pixels=new Uint8Array(640*360*4);renderer.setRenderTarget(target);renderer.render(world.scene,world.camera);renderer.readRenderTargetPixels(target,0,0,640,360,pixels);return pixels;};
    const difference=(a,b)=>{let count=0,energy=0;for(let i=0;i<a.length;i+=4){const delta=Math.abs(a[i]-b[i])+Math.abs(a[i+1]-b[i+1])+Math.abs(a[i+2]-b[i+2]);if(delta>3)count++;energy+=delta;}return {count,energy};};
    const dark=capture();game.projectiles=[{id:'lighting-fixture',kind:'shot',position:origin.map((v,i)=>v+([30,60,15][i]))}];
    world.effects.update(0);const lit=capture(),shot=difference(dark,lit);
    const radius=world.effects.lights.find(l=>l.projectileId==='lighting-fixture')?.radius;
    game.projectiles=[];world.effects.update(0);const removed=difference(dark,capture());
    const heart=await world.makeActor('heart',{scale:4});heart.position.set(origin[0],origin[1]+80,origin[2]);world.scene.add(heart);
    game.time=0;world.effects.update(0);const red=capture();game.time=1;world.effects.update(0);const white=capture(),pulse=difference(red,white);
    // Render the actual source scene with both the original coloured actor and
    // a moving-light source; sprites still keep their white material colour.
    game.projectiles=[{id:'lighting-fixture',kind:'shot',position:origin.map((v,i)=>v+([30,60,15][i])),spriteFrame:0}];
    world.syncProjectiles();world.effects.update(0);renderer.setRenderTarget(old);target.dispose();world.render();
    return {shot,removed,pulse,radius,actorAmbient:heart.userData.mesh.userData.actorLighting.uniforms.actorAmbient.value.toArray(),spriteColor:world.projectileMeshes.get('lighting-fixture').material.color.getHex(),nativeLightCount:world.effects.lights.length};
  });
  assert.ok(report.shot.count>100,JSON.stringify(report));assert.equal(report.radius,200);
  assert.equal(report.removed.count,0,JSON.stringify(report));assert.ok(report.pulse.count>50,JSON.stringify(report));
  assert.deepEqual(report.actorAmbient,[1,1,1]);assert.equal(report.spriteColor,0xffffff);assert.deepEqual(errors,[]);
  await page.screenshot({path:'artifacts/actor-projectile-lighting.png'});
  await writeFile('artifacts/actor-projectile-lighting-scenes.json',JSON.stringify(report,null,2)+'\n');
  console.log('PASS original forest renders projectile illumination, removes it with the projectile, animates original heart ambient, and compiles actor shaders.');
}finally{await browser?.close();server.kill();}
