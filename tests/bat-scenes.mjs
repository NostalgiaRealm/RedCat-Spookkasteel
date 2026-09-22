import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {pathToFileURL} from 'node:url';
import assert from 'node:assert/strict';

export async function verifyBatScenes(page) {
  await mkdir('artifacts',{recursive:true});
  const results=[];
  for(const id of ['MovingEnemy16','MovingEnemy18']) {
    const result=await page.evaluate(async id=>{
      const app=window.__redcat;await app.startLevel(1);app.pause();document.getElementById('pause').hidden=true;
      const world=app.world,game=app.gameplay,host=game.scripts,bat=game.objects.find(object=>object.id===id);
      for(const player of host.players.values())player.stop();host.update=()=>{};host.cutscene=false;host.camera=null;host.enemiesFrozen=false;
      for(const object of game.objects)if(object.kind==='enemy'||object.kind==='trigger')object.enabled=false;
      bat.enabled=true;
      // BAT03 starts in a narrow original chamber: verify its timed shot from
      // a reachable floor within shooting range, without moving its spawn.
      const start=[...bat.position],radii=bat.variant===1?[180]:[150,120,90,60],candidates=[],rejected={floor:0,sight:0,path:0},paths=[];
      for(const radius of radii)for(const height of [50,0,-30])for(let angle=0;angle<Math.PI*2;angle+=Math.PI/16) {
        const p=[start[0]+Math.sin(angle)*radius,start[1]+height,start[2]+Math.cos(angle)*radius];
        const floor=world.collider.trace(p,[p[0],start[1]-240,p[2]],world.player.mins,world.player.maxs,world.physicalModels);
        if(floor.startSolid||floor.fraction===1){rejected.floor++;continue;}
        const sight=world.collider.trace([start[0],start[1]+25,start[2]],[floor.end[0],floor.end[1]+28,floor.end[2]],[0,0,0],[0,0,0],world.physicalModels,'blocksLOS');
        const path=world.collider.trace(start,floor.end,bat.collisionMins,bat.collisionMaxs,world.physicalModels);
        if(sight.fraction>.98&&!path.startSolid&&(bat.variant===2||path.fraction>.98))candidates.push(floor.end);
        else {if(sight.fraction<=.98)rejected.sight++;if(path.startSolid||path.fraction<=.98){rejected.path++;if(paths.length<5)paths.push({end:floor.end,path,sight:sight.fraction});}}
      }
      if(!candidates.length)throw new Error('No original castle floor approach for '+id+': '+JSON.stringify({start,mins:bat.collisionMins,maxs:bat.collisionMaxs,rejected,paths}));
      const target=candidates[0];world.player.position=[...target];world.player.grounded=true;world.player.velocityY=0;
      bat.yaw=Math.atan2(target[0]-start[0],target[2]-start[2]);game.state.health=20;game.state.maxHealth=20;game.hitCooldown=0;
      const actor=world.actorInstances.get(id),events=[],previous=game.onEvent;
      game.onEvent=event=>{events.push({...event,time:game.time,batPosition:[...bat.position],player:[...world.player.position]});previous(event);};
      const originalVertices=[...actor.userData.mesh.geometry.attributes.position.array],states=new Set(),positions=[];
      let minimumDistance=Infinity,firstAttackTime=null;
      for(let tick=0;tick<160;tick++) {
        world.update(.025,{forward:0,right:0});states.add(actor.userData.animator.name);
        const distance=Math.hypot(...bat.position.map((v,i)=>v-world.player.position[i]));minimumDistance=Math.min(minimumDistance,distance);
        if(tick%20===0)positions.push([...bat.position]);
        if(bat.animationState==='attack'&&firstAttackTime===null)firstAttackTime=game.time;
        if(bat.variant===2&&events.some(event=>event.type==='enemyProjectile'))break;
      }
      const changed=actor.userData.mesh.geometry.attributes.position.array.filter((value,index)=>Math.abs(value-originalVertices[index])>.05).length;
      const focus=bat.position.map((v,i)=>v+(i===1?20:0));
      // View along the collision/LOS-checked approach, not through chamber walls.
      const eye=bat.variant===1?[start[0],start[1]+20,start[2]]:[target[0],target[1]+28,target[2]];
      // The inspection camera occupies RedCat's contact/view position.
      world.redcat.visible=false;
      world.camera.position.set(...eye);world.camera.lookAt(...focus);world.render();
      return {id,variant:bat.variant,start,target,position:[...bat.position],states:[...states],positions,minimumDistance,changed,firstAttackTime,
        damage:events.filter(event=>event.type==='damage'),projectiles:events.filter(event=>event.type==='enemyProjectile'),attackDuration:bat.animationDurations.attack,drawFraction:bat.stats.DrawMotionPart};
    },id);
    assert.ok(result.changed>30);
    if(result.variant===1) {
      assert.ok(result.positions.some(position=>Math.hypot(...position.map((value,index)=>value-result.start[index]))>40));
      assert.ok(result.states.includes('walkfw'));assert.ok(!result.states.includes('shoot1'));assert.ok(result.minimumDistance<35);
      assert.ok(result.states.includes('idle2'));assert.ok(!result.states.includes('idle1'),'contact must preserve the native airborne idle');
      assert.ok(result.damage.length>0);assert.equal(result.projectiles.length,0);
      for(let index=1;index<result.damage.length;index++)assert.ok(result.damage[index].time-result.damage[index-1].time>=1-1e-8);
      for(const hit of result.damage)assert.ok(Math.hypot(hit.batPosition[0]-hit.player[0],hit.batPosition[2]-hit.player[2])<45);
    } else {
      assert.ok(result.states.includes('shoot1'));assert.equal(result.projectiles[0].kind,'enemyShot');
      const delay=result.projectiles[0].time-result.firstAttackTime;
      assert.ok(Math.abs(delay-result.attackDuration*result.drawFraction)<.03);
    }
    await page.screenshot({path:`artifacts/castle-bat-${result.variant}.png`});results.push(result);
  }
  await writeFile('artifacts/bat-scenes.json',JSON.stringify(results,null,2)+'\n');
  console.log('PASS original castle green bat reaches contact with flight animation; yellow bat releases its timed original shot from its authored chamber.');
}

if(import.meta.url===pathToFileURL(process.argv[1]).href) {
  const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4186'},stdio:['ignore','pipe','inherit']});
  await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});let browser;
  try {
    browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
    const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
    page.on('pageerror',error=>errors.push(error.stack));page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
    await page.goto('http://127.0.0.1:4186/?skipIntro');await page.waitForFunction(()=>window.__redcat);
    await verifyBatScenes(page);assert.deepEqual(errors,[]);
  }finally{await browser?.close();server.kill();}
}
