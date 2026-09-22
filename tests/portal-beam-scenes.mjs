import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {pathToFileURL} from 'node:url';
import assert from 'node:assert/strict';

export async function verifyPortalBeamScenes(page) {
  await mkdir('artifacts',{recursive:true});
  await page.evaluate(async()=>{
    const THREE=await import('three');
    window.__portalFixture={
      async start(index) {
        const app=window.__redcat;await app.startLevel(index);app.pause();document.getElementById('pause').hidden=true;
        const world=app.world,game=app.gameplay,host=game.scripts;
        for(const player of host.players.values())player.stop();host.cutscene=false;host.camera=null;
        for(const object of game.objects)if(['enemy','trigger','pickup'].includes(object.kind))object.enabled=false;
        world.updateCamera=()=>{};return {world,game,host};
      },
      pixels(meshes) {
        const world=window.__redcat.world,renderer=world.renderer,target=new THREE.WebGLRenderTarget(320,180),before=new Uint8Array(320*180*4),after=new Uint8Array(before.length);
        const previous=renderer.getRenderTarget(),visible=meshes.map(mesh=>mesh.visible);
        renderer.setRenderTarget(target);renderer.render(world.scene,world.camera);renderer.readRenderTargetPixels(target,0,0,320,180,before);
        meshes.forEach(mesh=>mesh.visible=false);renderer.render(world.scene,world.camera);renderer.readRenderTargetPixels(target,0,0,320,180,after);
        meshes.forEach((mesh,i)=>mesh.visible=visible[i]);renderer.setRenderTarget(previous);target.dispose();world.render();
        let count=0;for(let i=0;i<before.length;i+=4)if(Math.abs(before[i]-after[i])+Math.abs(before[i+1]-after[i+1])+Math.abs(before[i+2]-after[i+2])>3)count++;
        return count;
      },
    };
  });
  const portal=await page.evaluate(async()=>{
    const fixture=window.__portalFixture,{world,game,host}=await fixture.start(4),object=game.find('telepfx01')[0],state=world.effects.entries.get(object.id),effects=world.effects;
    world.player.position=[365,-3351,600];world.player.velocityY=0;world.player.grounded=true;world.player.update=()=>{};
    world.camera.position.set(185,-3225,435);world.camera.lookAt(365,-3310,600);
    effects.update(.1);const spark=effects.batches.get('spark8.bmp|spark8_a.bmp'),restPixels=fixture.pixels([spark.mesh]);
    const before=state.teleporterGeometry.sparks.map(s=>s.position);
    game.command(game.find('telepoort01')[0],'enable');for(let i=0;i<36;i++)world.update(.025,{forward:0,right:0});
    const meshes=[spark.mesh,...effects.beamBatches.values()].map(value=>value.mesh||value);
    const pixels=fixture.pixels(meshes);
    return {restPixels,pixels,age:object.teleportEffectAge,serial:object.teleportEffectSerial,cutscene:host.cutscene,rays:state.teleporterGeometry.rays.length,
      sparks:state.teleporterGeometry.sparks.length,moved:JSON.stringify(before)!==JSON.stringify(state.teleporterGeometry.sparks.map(s=>s.position)),
      floor:state.teleporterBounds.floorY,ceiling:state.teleporterBounds.ceilingY,origin:object.position,textures:[...effects.beamBatches.keys()],error:host.vm.lastError};
  });
  assert.ok(portal.restPixels>10,JSON.stringify(portal));assert.ok(portal.pixels>20);assert.ok(portal.age>.5&&portal.age<1);
  assert.equal(portal.serial,1);assert.equal(portal.cutscene,true);assert.equal(portal.rays,5);assert.equal(portal.moved,true);assert.equal(portal.error,null);
  assert.ok(portal.floor<portal.origin[1]&&portal.ceiling>portal.origin[1]);
  await page.screenshot({path:'artifacts/tower-teleport-original-effects.png'});
  const restored=await page.evaluate(async()=>{
    const app=window.__redcat,age=app.gameplay.find('telepfx01')[0].teleportEffectAge;app.saveGame(true);await app.loadSave();app.pause();
    const object=app.gameplay.find('telepfx01')[0],state=app.world.effects.entries.get(object.id);
    return {before:age,after:object.teleportEffectAge,rays:state.teleporterGeometry.rays.length};
  });
  assert.ok(Math.abs(restored.after-restored.before)<.2);assert.equal(restored.rays,5);
  const beam=await page.evaluate(async()=>{
    const fixture=window.__portalFixture,{world,game,host}=await fixture.start(3);host.update=()=>{};
    world.player.position=[0,.05,704];world.player.velocityY=0;world.player.grounded=true;world.player.update=()=>{};
    game.state.health=game.state.maxHealth=20;game.hitCooldown=5;
    world.camera.position.set(0,45,760);world.camera.lookAt(0,24,704);world.effects.update(0);
    const beamBatch=world.effects.beamBatches.get('beam.bmp|beam_a.bmp'),pixels=fixture.pixels([beamBatch.mesh]);
    world.update(.025,{forward:0,right:0});const first=game.state.health;
    world.update(.025,{forward:0,right:0});const delayed=game.state.health;
    world.render();return {pixels,damage:20-first,delayedDamage:first-delayed};
  });
  assert.ok(beam.pixels>20,JSON.stringify(beam));assert.equal(beam.damage,10);assert.equal(beam.delayedDamage,0);
  await page.screenshot({path:'artifacts/caves-boss-gate-beams-active.png'});
  Object.assign(beam,await page.evaluate(()=>{
    const world=window.__redcat.world,game=world.gameplay,host=game.scripts;
    const states=[];
    for(const [method,label]of [['cam01_MotionCommand','beam02'],['cam02_MotionCommand','beam03'],['cam03_MotionCommand','beam04'],['cam04_MotionCommand','beam01']]){
      host.vm.call(method,[label,0]);states.push(game.find('endboss_beams').filter(o=>o.enabled).length);
    }
    for(let i=0;i<50;i++)world.update(.025,{forward:0,right:0});
    world.render();return {after:game.state.health,states,error:host.vm.lastError};
  }));
  assert.equal(beam.after,10);
  assert.deepEqual(beam.states,[3,2,1,0]);assert.equal(beam.error,null);
  await page.screenshot({path:'artifacts/caves-boss-gate-beams-cleared.png'});
  await writeFile('artifacts/portal-beam-scenes.json',JSON.stringify({portal,restored,beam},null,2)+'\n');
  console.log('PASS original tower portal timeline, animated sprite pixels and save restoration; Caves beam damage, trigger delay and four original puzzle callbacks.');
}

if(import.meta.url===pathToFileURL(process.argv[1]).href) {
  const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4193'},stdio:['ignore','pipe','inherit']});
  await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});let browser;
  try {
    browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
    const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
    page.on('pageerror',e=>errors.push(e.stack));page.on('console',m=>{if(m.type()==='error')errors.push(m.text());});page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
    await page.goto('http://127.0.0.1:4193/?skipIntro');await page.waitForFunction(()=>window.__redcat);await verifyPortalBeamScenes(page);assert.deepEqual(errors,[]);
  }finally{await browser?.close();server.kill();}
}
