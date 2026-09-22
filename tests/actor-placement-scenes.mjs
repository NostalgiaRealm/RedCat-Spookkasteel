import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {pathToFileURL} from 'node:url';
import assert from 'node:assert/strict';

export async function verifyActorPlacementScenes(page) {
  await mkdir('artifacts',{recursive:true});const results=[];
  for(const level of [1,3]) {
    const result=await page.evaluate(async level=>{
      const app=window.__redcat;await app.startLevel(level);app.pause();document.getElementById('pause').hidden=true;
      const world=app.world,game=app.gameplay,host=game.scripts,THREE=await import('three');
      for(const player of host.players.values())player.stop();host.cutscene=false;host.camera=null;
      for(const object of game.objects)if(object.kind==='trigger'||object.kind==='enemy')object.enabled=false;
      const balls=game.objects.filter(object=>object.kind==='actor'&&/^(ac_kogel0[12]|rots0[1-8])$/.test(object.entity.DaviName));
      const fixtures=balls.map(object=>({object,actor:world.actorInstances.get(object.id),controller:game.modelObjects.get(object.modelIndex).find(o=>o.kind==='controller')}));
      for(const fixture of fixtures) {
        const {object,controller}=fixture,player=host.players.get(controller.id);
        game.command(controller,'enable');player.stop();player.seek((Number(controller.entity.InitialPosition||0)+1.5)%player.motion.endTime);host.applyMotion(controller,player);object.actorAge=1.5;
      }
      world.syncModels();world.syncActors(0);
      const poses=fixtures.map(({object,actor})=>({id:object.id,name:object.entity.DaviName,anchor:[...object.position],position:actor.position.toArray(),expected:game.objectPosition(object),
        visible:actor.visible,model:object.modelIndex,spin:actor.userData.template.data.settings.rotationDegreesPerSecond,quaternion:actor.quaternion.toArray()}));
      if(level===1){world.camera.position.set(1570,90,520);world.camera.lookAt(1570,10,220);}
      else {world.camera.position.set(-1255,155,-480);world.camera.lookAt(-1255,75,-820);}
      const renderer=world.renderer,target=new THREE.WebGLRenderTarget(640,360),original=renderer.getRenderTarget();
      const before=new Uint8Array(640*360*4),after=new Uint8Array(before.length);
      renderer.setRenderTarget(target);renderer.render(world.scene,world.camera);renderer.readRenderTargetPixels(target,0,0,640,360,before);
      for(const {actor} of fixtures)actor.visible=false;
      renderer.render(world.scene,world.camera);renderer.readRenderTargetPixels(target,0,0,640,360,after);
      for(const {actor} of fixtures)actor.visible=true;
      renderer.setRenderTarget(original);target.dispose();let pixels=0;
      for(let i=0;i<before.length;i+=4)if(Math.abs(before[i]-after[i])+Math.abs(before[i+1]-after[i+1])+Math.abs(before[i+2]-after[i+2])>3)pixels++;
      world.render();window.__actorPlacementFixture={fixtures};return {level,poses,pixels,error:host.vm.lastError};
    },level);
    assert.equal(result.poses.length,level===1?2:8,JSON.stringify(result));
    for(const pose of result.poses){assert.equal(pose.visible,true);assert.deepEqual(pose.position,pose.expected);assert.deepEqual(pose.spin,level===1?[-360,0,0]:[360,0,0]);}
    assert.ok(result.poses.filter(p=>Math.hypot(...p.position.map((v,i)=>v-p.anchor[i]))>100).length>=(level===1?2:4));
    assert.ok(result.pixels>60,`Rolling balls were not rendered: ${JSON.stringify(result)}`);assert.equal(result.error,null);
    await page.screenshot({path:`artifacts/${level===1?'castle':'caves'}-rolling-balls.png`});
    const changed=await page.evaluate(()=>{
      const world=window.__redcat.world,{fixtures}=window.__actorPlacementFixture;
      world.syncActors(.25);
      const quaternions=fixtures.map(({actor})=>actor.quaternion.toArray());
      const pausedVisible=fixtures.map(({controller,actor})=>{world.gameplay.command(controller,'disable');world.syncActors(0);return actor.visible;});
      const hiddenVisible=fixtures.map(({controller,actor})=>{world.gameplay.command(controller,'hide');world.syncActors(0);return actor.visible;});
      return {quaternions,pausedVisible,hiddenVisible};
    });
    changed.quaternions.forEach((q,i)=>assert.ok(Math.abs(q.reduce((sum,v,j)=>sum+v*result.poses[i].quaternion[j],0))<.8,'Ball did not turn by a quarter revolution'));
    assert.ok(changed.pausedVisible.every(Boolean));assert.ok(changed.hiddenVisible.every(v=>v===false));
    results.push({...result,changed});
  }
  await writeFile('artifacts/actor-placement-scenes.json',JSON.stringify(results,null,2)+'\n');
  console.log('PASS castle and cave rolling-ball render pixels, original moving brush attachments, signed spin and controller visibility.');
}

if(import.meta.url===pathToFileURL(process.argv[1]).href) {
  const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4191'},stdio:['ignore','pipe','inherit']});
  await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});let browser;
  try {
    browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
    const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
    page.on('pageerror',error=>errors.push(error.stack));page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
    await page.goto('http://127.0.0.1:4191/?skipIntro');await page.waitForFunction(()=>window.__redcat);
    await verifyActorPlacementScenes(page);assert.deepEqual(errors,[]);
  }finally{await browser?.close();server.kill();}
}
