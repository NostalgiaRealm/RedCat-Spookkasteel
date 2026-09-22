import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {pathToFileURL} from 'node:url';
import assert from 'node:assert/strict';

export async function verifyEffectScenes(page) {
  await mkdir('artifacts',{recursive:true});
  await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(2);app.pause();document.getElementById('pause').hidden=true;
    const world=app.world,game=app.gameplay,host=game.scripts,THREE=await import('three');
    for(const player of host.players.values())player.stop();host.cutscene=false;host.camera=null;
    for(const object of game.objects)if(object.kind==='enemy'||object.kind==='trigger')object.enabled=false;
    world.updateCamera=()=>{};
    window.__effectsFixture={
      pixels(change,restore) {
        const current=window.__redcat.world,renderer=current.renderer,target=new THREE.WebGLRenderTarget(320,180);
        const original=renderer.getRenderTarget(),before=new Uint8Array(320*180*4),after=new Uint8Array(before.length);
        renderer.setRenderTarget(target);renderer.render(current.scene,current.camera);renderer.readRenderTargetPixels(target,0,0,320,180,before);
        change();renderer.render(current.scene,current.camera);renderer.readRenderTargetPixels(target,0,0,320,180,after);restore();
        renderer.setRenderTarget(original);target.dispose();current.render();let count=0;
        for(let i=0;i<before.length;i+=4)if(Math.abs(before[i]-after[i])+Math.abs(before[i+1]-after[i+1])+Math.abs(before[i+2]-after[i+2])>3)count++;
        return count;
      },
    };
  });
  const flames=await page.evaluate(()=>{
    const world=window.__redcat.world,effects=world.effects;
    for(let i=0;i<60;i++)world.update(.025,{forward:0,right:0});
    world.camera.position.set(1504,105,2040);world.camera.lookAt(1504,94,2184);effects.update(0);
    const state=effects.entries.get('EffectSpoutEntity1'),batch=effects.batches.get('flame03.bmp|a_flame.bmp');
    const pixels=window.__effectsFixture.pixels(()=>batch.mesh.visible=false,()=>batch.mesh.visible=true);
    const before=[...batch.positions.array.slice(0,batch.count*3)];world.update(.1,{forward:0,right:0});
    const movedCoordinates=before.filter((value,index)=>Math.abs(value-batch.positions.array[index])>.001).length;
    return {emitters:[...effects.entries.values()].filter(e=>e.object.entity.classname==='EffectSpoutEntity').length,
      count:batch.count,localParticles:state.particles.length,pixels,age:state.age,movedCoordinates,originalTexture:batch.mesh.material.uniforms.map.value.image.src};
  });
  assert.equal(flames.emitters,29);assert.ok(flames.count>29);assert.ok(flames.localParticles>0);assert.ok(flames.pixels>10,JSON.stringify(flames));
  assert.match(flames.originalTexture,/assets\/effects\//);assert.ok(flames.movedCoordinates>29);
  await page.screenshot({path:'artifacts/graveyard-original-flame.png'});
  const lighting=await page.evaluate(()=>{
    const world=window.__redcat.world,game=world.gameplay,effects=world.effects,light=game.find('seclight1')[0];
    world.camera.position.set(-3060,650,-2350);world.camera.lookAt(-3192,610,-2488);game.command(light,'enable');effects.update(0);
    const pixels=window.__effectsFixture.pixels(()=>{game.command(light,'disable');effects.update(0);},()=>{game.command(light,'enable');effects.update(0);});
    return {pixels,active:effects.entries.get(light.id).active,lights:effects.lights.length,patchedMaterials:effects.patchedMaterials.length};
  });
  assert.ok(lighting.pixels>100,JSON.stringify(lighting));assert.equal(lighting.active,true);assert.ok(lighting.lights>0);assert.ok(lighting.patchedMaterials>0);
  await page.screenshot({path:'artifacts/graveyard-dynamic-light.png'});
  const activation=await page.evaluate(()=>{
    const world=window.__redcat.world,game=world.gameplay,effects=world.effects,trigger=game.find('savepoint_1_tr')[0],beacon=game.find('savepoint1_fx')[0];
    const before=beacon.enabled;trigger.enabled=true;world.player.position=[1359.5,-63.95,-162];world.player.velocityY=0;world.player.grounded=true;
    world.update(.025,{forward:0,right:0});
    const state=effects.entries.get(beacon.id);window.__effectsFixture.beaconId=beacon.id;
    return {before,enabled:beacon.enabled,active:state.active,age:state.age,count:effects.beams.length,triggerCount:trigger.triggerCount,checkpoint:[...game.checkpoint.position]};
  });
  assert.equal(activation.before,false);assert.equal(activation.enabled,true);assert.equal(activation.active,true);assert.equal(activation.triggerCount,1);assert.equal(activation.count,0);
  const stages=await page.evaluate(()=>{
    const world=window.__redcat.world,effects=world.effects,state=effects.entries.get(window.__effectsFixture.beaconId),frames=[];
    world.camera.position.set(1300,90,-20);world.camera.lookAt(1406,20,-166);
    const to=age=>{while(state.age<age-1e-8)world.update(Math.min(.025,age-state.age),{forward:0,right:0});frames.push({age:state.age,count:effects.beams.length});};
    to(.8);to(4.05);to(4.7);effects.update(0);world.render();
    const batch=effects.beamBatches.get('energybeam.bmp|energybeam_a.bmp');
    const pixels=window.__effectsFixture.pixels(()=>batch.mesh.visible=false,()=>batch.mesh.visible=true);
    const vertical=effects.beams.find(ray=>ray.start[0]===ray.end[0]&&ray.start[2]===ray.end[2]&&ray.end[1]>ray.start[1]+1);
    return {frames,pixels,vertical,age:state.age};
  });
  assert.deepEqual(stages.frames.map(frame=>frame.count),[1,6,7]);assert.ok(stages.pixels>10,JSON.stringify(stages));assert.ok(stages.vertical);
  await page.screenshot({path:'artifacts/graveyard-save-beacon.png'});
  const restored=await page.evaluate(async()=>{
    const app=window.__redcat,id=window.__effectsFixture.beaconId;
    const age=app.world.effects.entries.get(id).age;app.saveGame(true);await app.loadSave();app.pause();
    const entry=app.world.effects.entries.get(id);return {age,beforeReload:age,afterReload:entry.age,enabled:entry.object.enabled,rays:app.world.effects.beams.length};
  });
  assert.ok(Math.abs(restored.afterReload-restored.beforeReload)<.2);assert.equal(restored.enabled,true);assert.equal(restored.rays,7);
  await writeFile('artifacts/effects-scenes.json',JSON.stringify({flames,lighting,activation,stages,restored},null,2)+'\n');
  console.log('PASS original graveyard flame pixels, authored dynamic light contribution, checkpoint-triggered six-spoke/upward beacon and save restoration.');
}

if(import.meta.url===pathToFileURL(process.argv[1]).href) {
  const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4187'},stdio:['ignore','pipe','inherit']});
  await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});let browser;
  try {
    browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
    const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
    page.on('pageerror',error=>errors.push(error.stack));page.on('console',message=>{if(message.type()==='error')errors.push(message.text());});
    page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
    await page.goto('http://127.0.0.1:4187/?skipIntro');await page.waitForFunction(()=>window.__redcat);
    await verifyEffectScenes(page);assert.deepEqual(errors,[]);
  }finally{await browser?.close();server.kill();}
}
