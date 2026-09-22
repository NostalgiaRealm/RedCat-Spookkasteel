import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

await mkdir('artifacts',{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4196'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});let browser;
try {
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.goto('http://127.0.0.1:4196/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const fairy=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(0);app.pause();document.getElementById('pause').hidden=true;
    const world=app.world,game=app.gameplay,host=game.scripts,THREE=await import('three');
    for(const p of host.players.values())p.stop();host.cutscene=false;host.camera=null;
    for(const o of game.objects)if(['enemy','trigger','fairy'].includes(o.kind))o.enabled=false;
    const fn=host.vm.program.functions.find(f=>f.name==='CSL001_MotionCommand');
    for(const label of ['rcshow','startcutscene','startcamera','startfairy'])host.vm.invoke(fn,[label,0]);
    world.player.grounded=true;world.syncPlayer(0,{});world.updateCamera(1,true);world.syncActors(0);
    const object=game.find('fairy11')[0];for(let i=0;i<8;i++)world.effects.update(.2);
    const effects=world.effects,state=effects.entries.get(object.id),position=[...world.player.position],yaw=world.yaw;
    const renderer=world.renderer,target=new THREE.WebGLRenderTarget(640,360),original=renderer.getRenderTarget();
    const before=new Uint8Array(640*360*4),after=new Uint8Array(before.length);
    renderer.setRenderTarget(target);renderer.render(world.scene,world.camera);renderer.readRenderTargetPixels(target,0,0,640,360,before);
    object.visible=false;effects.update(0);renderer.render(world.scene,world.camera);renderer.readRenderTargetPixels(target,0,0,640,360,after);
    object.visible=true;state.age=1.6;effects.update(0);renderer.setRenderTarget(original);target.dispose();world.render();
    let pixels=0;for(let i=0;i<before.length;i+=4)if(Math.abs(before[i]-after[i])+Math.abs(before[i+1]-after[i+1])+Math.abs(before[i+2]-after[i+2])>3)pixels++;
    const delta=object.position.map((v,i)=>v-position[i]),front=[-Math.sin(yaw),0,-Math.cos(yaw)];
    return {pixels,yaw,position,sprites:state.fairyGeometry.sprites.length,rays:state.fairyGeometry.rays.length,
      facing:(front[0]*delta[0]+front[2]*delta[2])/Math.hypot(delta[0],delta[2]),error:host.vm.lastError};
  });
  assert.ok(fairy.pixels>100,JSON.stringify(fairy));assert.equal(fairy.sprites,9);assert.ok(fairy.facing>.99);assert.equal(fairy.error,null);
  await page.screenshot({path:'artifacts/fleurifee-original-effects-facing.png'});
  await page.evaluate(()=>{
    const {world,gameplay:game}=window.__redcat,host=game.scripts;
    host.vm.invoke(host.vm.program.functions.find(f=>f.name==='CSL001_MotionCommand'),['startcamera1',0]);world.updateCamera(1,true);world.render();
  });
  await page.screenshot({path:'artifacts/fleurifee-redcat-closeup-facing.png'});
  const ufo=await page.evaluate(()=>{
    const world=window.__redcat.world,game=world.gameplay,host=game.scripts;host.cutscene=false;host.camera=null;
    const object=game.objects.find(o=>/ufo\.act/i.test(o.entity.ActorFileName||'')),actor=world.actorInstances.get(object.id);
    world.camera.position.set(-1170,-65,2460);world.camera.lookAt(-1202,-120,2224);world.redcat.visible=false;world.render();
    return {position:actor.position.toArray(),quaternion:actor.quaternion.toArray(),entity:object.entity,visible:actor.visible};
  });
  assert.equal(ufo.visible,true);await page.screenshot({path:'artifacts/ufo-native-world-rotation.png'});
  const jump=await page.evaluate(()=>{
    const world=window.__redcat.world;world.player.position=[-1872,-120,3480];world.player.grounded=false;world.player.velocityY=200;
    world.redcat.userData.motionState={};world.syncPlayer(.1,{});const ascent=world.redcat.userData.animator.name;
    world.player.velocityY=-100;world.syncPlayer(.3,{});const animator=world.redcat.userData.animator;
    return {ascent,descent:animator.name,time:animator.time,speed:animator.timeScale,loop:animator.loop};
  });
  assert.equal(jump.ascent,'jump1');assert.equal(jump.descent,'jump1');assert.equal(jump.speed,1.4);assert.equal(jump.loop,false);assert.ok(jump.time>.5);
  const facing=[];
  for(const [level,type] of [[0,'brutusm'],[1,'knight']]) {
    const pose=await page.evaluate(async({level,type})=>{
      const app=window.__redcat;if(level!==0)await app.startLevel(level);app.pause();document.getElementById('pause').hidden=true;
      const world=app.world,game=app.gameplay,host=game.scripts,THREE=await import('three');
      for(const p of host.players.values())p.stop();host.cutscene=false;host.camera=null;host.enemiesFrozen=false;
      for(const o of game.objects)if(o.kind==='enemy'||o.kind==='trigger')o.enabled=false;
      const enemy=game.objects.find(o=>o.enemyType===type),actor=world.actorInstances.get(enemy.id);enemy.enabled=true;enemy.alerted=true;
      // Keep the enemy in its attack clip to cover the old early-return bug.
      enemy.animationState='attack';enemy.animationUntil=game.time+20;enemy.pendingAttack=null;enemy.stats.SenseRange=1000;
      const player=[enemy.position[0],enemy.position[1],enemy.position[2]+80];world.player.position=player;world.player.grounded=true;world.yaw=0;
      for(let i=0;i<40;i++)game.updateEnemy(enemy,.05,player,()=>true);
      world.syncActors(0);world.syncPlayer(0,{});world.camera.position.set(player[0]+50,player[1]+65,player[2]+75);world.camera.lookAt(enemy.position[0],enemy.position[1]+42,enemy.position[2]);world.render();
      if(type==='knight') {
        const eye=[enemy.position[0],enemy.position[1]+40,enemy.position[2]],desired=[enemy.position[0],enemy.position[1]+45,enemy.position[2]+75];
        const trace=world.collider.trace(eye,desired,[-2,-2,-2],[2,2,2],world.physicalModels,null);
        world.camera.position.fromArray(trace.end);world.camera.lookAt(...eye);world.redcat.visible=false;world.render();
      }
      actor.updateMatrixWorld(true);const mesh=actor.userData.mesh,animator=actor.userData.animator;
      const bone=suffix=>{const index=animator.data.bones.findIndex(b=>b.name.endsWith(suffix)),m=animator.transforms[index];return mesh.localToWorld(new THREE.Vector3(m[9],m[10],m[11]));};
      const front=bone('L TOE0').sub(bone('L FOOT'));front.y=0;front.normalize();
      const aim=new THREE.Vector3(...player).sub(actor.position);aim.y=0;aim.normalize();
      return {type,yaw:enemy.yaw,front:front.toArray(),aim:aim.toArray(),alignment:front.dot(aim),state:enemy.animationState,visible:actor.visible};
    },{level,type});
    assert.equal(pose.visible,true);assert.ok(pose.alignment>.8,JSON.stringify(pose));facing.push(pose);
    await page.screenshot({path:`artifacts/${type}-facing-redcat.png`});
  }
  assert.deepEqual(errors,[]);await writeFile('artifacts/presentation-scenes.json',JSON.stringify({fairy,ufo,jump,facing},null,2)+'\n');
  console.log('PASS original fairy dialogue facing, rendered original effect layers and trails, native UFO orientation, continuous normal-jump descent.');
} finally {await browser?.close();server.kill();}
