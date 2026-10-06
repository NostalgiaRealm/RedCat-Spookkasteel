import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4194'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});let browser;
try {
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',error=>errors.push(error.stack));page.on('response',r=>{if(r.status()>=400&&!r.url().endsWith('/favicon.ico'))errors.push(`${r.status()} ${r.url()}`);});
  await page.goto('http://127.0.0.1:4194/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(()=>{
    window.__interactions={async start(index){const app=window.__redcat;await app.startLevel(index);app.pause();document.getElementById('pause').hidden=true;const game=app.gameplay,world=app.world;
      game.scripts.update=()=>{};game.scripts.cutscene=false;game.scripts.camera=null;game.scripts.enemiesFrozen=true;
      for(const object of game.objects)if(['enemy','trigger','pickup','door','button'].includes(object.kind))object.enabled=false;
      this.events=[];const emit=game.onEvent;game.onEvent=e=>{this.events.push(e);emit(e);};return {game,world};}};
  });
  const graveyard=await page.evaluate(async()=>{
    const {game,world}=await window.__interactions.start(2),tile=game.find('puzbut1_mc')[0],piece=game.find('puzstuk1_mc')[0],bounds=world.level.collision.models[tile.modelIndex];
    tile.enabled=true;piece.enabled=false;world.player.position=[(bounds.min[0]+bounds.max[0])/2,bounds.max[1]+.05,(bounds.min[2]+bounds.max[2])/2];world.player.grounded=true;world.player.velocityY=0;
    world.update(.025,{forward:0,right:0});
    const motion=game.scripts.players.get(tile.id);motion.update(.5);game.scripts.applyMotion(tile,motion);
    const tileResult={switchCount:tile.switchCount,pieceEnabled:piece.enabled,contacts:[...world.player.contacts]};
    const crate=game.objects.find(o=>o.actorFile?.toLowerCase()==='brcrate.act');
    if(!crate)throw new Error('Original graveyard explosive crate missing');
    const center=crate.effectPosition(),before=crate.health;game.playerProjectileHit(crate,{damage:1,type:0});world.syncActors(0);world.effects.update(.025);
    world.camera.position.set(center[0]+80,center[1]+65,center[2]+145);world.camera.lookAt(...center);world.render();
    const frame1=[...world.effects.batches].filter(([key])=>key.startsWith('explosie01.')).map(([key,b])=>({key,count:b.count,visible:b.mesh.visible}));
    game.time+=.2;world.effects.update(.2);const frame3=world.effects.batches.get('explosie03.bmp|explosie03_a.bmp').count;world.render();
    const THREE=await import('three'),renderer=world.renderer,target=new THREE.WebGLRenderTarget(320,180),a=new Uint8Array(320*180*4),b=new Uint8Array(a.length),previous=renderer.getRenderTarget();
    renderer.setRenderTarget(target);renderer.render(world.scene,world.camera);renderer.readRenderTargetPixels(target,0,0,320,180,a);
    const meshes=[...world.effects.batches].filter(([key])=>key.startsWith('explosie')||key.startsWith('smoke_05')).map(([,batch])=>batch.mesh);
    for(const p of world.effects.destructibles.particles)meshes.push(p.mesh);
    const visible=meshes.map(m=>m.visible);meshes.forEach(m=>m.visible=false);renderer.render(world.scene,world.camera);renderer.readRenderTargetPixels(target,0,0,320,180,b);meshes.forEach((m,i)=>m.visible=visible[i]);renderer.setRenderTarget(previous);target.dispose();world.render();
    let pixels=0;for(let i=0;i<a.length;i+=4)if(Math.abs(a[i]-b[i])+Math.abs(a[i+1]-b[i+1])+Math.abs(a[i+2]-b[i+2])>3)pixels++;
    return {tileResult,crate:crate.id,before,after:crate.health,frame1,frame3,particles:world.effects.destructibles.particles.length,pixels,sounds:window.__interactions.events.filter(e=>e.sound==='expl6.wav').length,explosions:game.explosions.length};
  });
  assert.equal(graveyard.tileResult.pieceEnabled,true);assert.equal(graveyard.tileResult.switchCount,2);assert.equal(graveyard.before,1);assert.equal(graveyard.after,0);assert.ok(graveyard.particles>=10);assert.equal(graveyard.frame3,1);assert.ok(graveyard.pixels>25,JSON.stringify(graveyard));assert.equal(graveyard.sounds,graveyard.explosions);
  await mkdir('artifacts',{recursive:true});await page.screenshot({path:'artifacts/graveyard-original-crate-explosion.png'});
  const caves=await page.evaluate(async()=>{
    const {game,world}=await window.__interactions.start(3),wind=game.find('wind01')[0];wind.enabled=true;
    const bounds=world.level.collision.models[wind.modelIndex],candidates=[];
    for(let x=bounds.min[0]+20;x<bounds.max[0]-20;x+=24)for(let z=bounds.min[2]+20;z<bounds.max[2]-20;z+=24)for(let y of [bounds.min[1]+1,0,32,48])candidates.push([x,y,z]);
    const start=candidates.find(p=>game.contains(wind,p)&&!world.collider.trace(p,p,world.player.mins,world.player.maxs,world.physicalModels).startSolid&&world.collider.trace(p,[p[0]-30,p[1],p[2]],world.player.mins,world.player.maxs,world.physicalModels).fraction===1);
    if(!start)throw new Error('No original fan test position');world.player.position=[...start];world.player.grounded=false;world.player.velocityY=0;
    for(let i=0;i<4;i++)world.update(.025,{forward:0,right:0});const moved=[...world.player.position];
    game.command(wind,'disable');world.update(.025,{forward:0,right:0});const stopped=[...world.player.position];
    const spring=game.find('jump01')[0];spring.enabled=true;world.player.position=[...spring.position];world.player.grounded=true;world.player.velocityY=0;
    world.update(.025,{forward:0,right:0});const springAfter={position:[...world.player.position],velocityY:world.player.velocityY,velocity:world.player.environmentVelocity};
    const secret=game.find('secret_trigger01')[0];secret.enabled=true;game.update(.025,secret.position);game.update(.025,[0,10000,0]);game.update(.025,secret.position);
    return {start,moved,stopped,springStart:spring.position,springAfter,secrets:game.state.secrets,sounds:window.__interactions.events.filter(e=>e.sound==='SecretFound.wav').length};
  });
  assert.ok(caves.moved[0]<caves.start[0]-10,JSON.stringify(caves));assert.ok(Math.abs(caves.stopped[0]-caves.moved[0])<.01);assert.ok(caves.springAfter.velocityY>300,JSON.stringify(caves));assert.ok(caves.springAfter.position[1]>caves.springStart[1]);assert.equal(caves.secrets,1);assert.equal(caves.sounds,1);
  assert.deepEqual(errors,[]);await writeFile('artifacts/environment-interaction-scenes.json',JSON.stringify({graveyard,caves},null,2)+'\n');
  console.log('PASS original graveyard floor tile contact, crate animation/debris pixels, cave fan collision/disable, spring launch and secret sound.');
}finally{await browser?.close();server.kill();}
