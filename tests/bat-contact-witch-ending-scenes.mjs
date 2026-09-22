import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4197'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});let browser;
try{
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];page.on('pageerror',e=>errors.push(e.stack));
  page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.goto('http://127.0.0.1:4197/?skipIntro');await page.waitForFunction(()=>window.__redcat);await mkdir('artifacts',{recursive:true});
  const bats=await page.evaluate(async()=>{
    const {batOverlapsPlayer}=await import('/src/enemy-flight.js'),app=window.__redcat;await app.startLevel(1);if(!app.gameplay)throw Error(document.body.innerText);app.pause();document.getElementById('pause').hidden=true;
    const world=app.world,game=app.gameplay,host=game.scripts;
    for(const p of host.players.values())p.stop();host.cutscene=false;host.camera=null;host.enemiesFrozen=false;host.update=()=>{};
    for(const o of game.objects)if(o.kind==='enemy'||o.kind==='trigger')o.enabled=false;
    const pair=[game.find('Bat01')[0],game.find('BAT02')[0]],first=pair[0],origin=[...first.position],candidates=[];
    for(let radius of [100,140,180])for(let angle=0;angle<Math.PI*2;angle+=Math.PI/16){
      const p=[origin[0]+Math.sin(angle)*radius,origin[1]+50,origin[2]+Math.cos(angle)*radius];
      const floor=world.collider.trace(p,[p[0],origin[1]-240,p[2]],world.player.mins,world.player.maxs,world.physicalModels);
      if(floor.startSolid||floor.fraction===1)continue;
      const path=world.collider.trace(origin,floor.end,first.collisionMins,first.collisionMaxs,world.physicalModels);
      if(!path.startSolid&&path.fraction>.98)candidates.push(floor.end);
    }
    if(!candidates.length)throw Error('No body-clear castle approach');
    const player=[...candidates[0]],hits=[],positions=[],overlaps=[];
    for(const b of pair){b.enabled=true;b.yaw=Math.atan2(player[0]-b.position[0],player[2]-b.position[2]);}
    game.onEvent=e=>{if(e.type==='enemyAttack'&&e.contact)hits.push({id:e.id,time:game.time});};
    const trace=(a,b,mins,maxs)=>world.collider.trace(a,b,mins,maxs,world.physicalModels,null);
    const sight=(a,b)=>world.collider.trace(a,b,[0,0,0],[0,0,0],world.physicalModels,'blocksLOS').fraction>.98;
    for(let i=0;i<220;i++){
      if(i>=160){const end=[player[0]+Math.cos(i*.15)*3,player[1],player[2]+Math.sin(i*.15)*3];const movement=trace(player,end,world.player.mins,world.player.maxs);player.splice(0,3,...movement.end);}
      game.time+=.05;game.hitCooldown=Math.max(0,game.hitCooldown-.05);
      for(const b of pair){game.updateEnemy(b,.05,player,sight,trace);if(batOverlapsPlayer(b,player))overlaps.push({time:game.time,id:b.id});}
      if(i%10===0)positions.push(pair.map(b=>[...b.position]));
    }
    // Recover the exact persisted overlapping pose from the report against
    // real room geometry, not only an empty-space collision stub.
    first.position=[player[0],player[1]+10,player[2]];game.time+=.05;game.updateEnemy(first,.05,player,sight,trace);
    const recovered=!batOverlapsPlayer(first,player);
    world.player.position=player;world.syncActors(.05);world.redcat.position.fromArray(player);
    const focus=[player[0],player[1]+25,player[2]],eyes=[];
    for(let angle=0;angle<Math.PI*2;angle+=Math.PI/8){const eye=[player[0]+Math.sin(angle)*120,player[1]+50,player[2]+Math.cos(angle)*120];if(sight(focus,eye))eyes.push(eye);}
    if(!eyes.length)throw Error('No clear castle inspection camera');world.camera.position.set(...eyes[0]);world.camera.lookAt(...focus);world.render();
    return {origin,player,hits,positions,overlaps,recovered,health:game.state.health,phases:pair.map(b=>b.batContact)};
  });
  assert.deepEqual(bats.overlaps,[]);assert.equal(bats.recovered,true);assert.ok(bats.hits.length>0);assert.ok(bats.health>0);
  for(const id of new Set(bats.hits.map(h=>h.id))){const times=bats.hits.filter(h=>h.id===id).map(h=>h.time);for(let i=1;i<times.length;i++)assert.ok(times[i]-times[i-1]>=3-1e-6);}
  await page.screenshot({path:'artifacts/castle-bat-contact-escape.png'});
  const ending=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(4);app.pause();document.getElementById('pause').hidden=true;
    const world=app.world,game=app.gameplay,host=game.scripts;for(const p of host.players.values())p.stop();host.cutscene=false;host.camera=null;host.enemiesFrozen=false;
    // The original arena entrance hides the later transformation doubles.
    const door=game.find('door_witch01')[0];game.command(door,'unlock');game.command(door,'open');
    game.command(game.find('trigger_witchmodel')[0],'enable');for(let i=0;i<450;i++)host.update(.1);
    const witch=game.find('The_Witch')[0],body=world.actorInstances.get(witch.id);witch.position=[0,2497,200];witch.health=3;world.syncActors(0);const wasVisible=body.visible;
    game.hurtEnemy(witch,1);const records=[];
    for(let i=0;i<130;i++){
      host.update(.1);game.update(.1,game.playerPosition);world.syncActors(.1);
      if(i%10===0)records.push({time:i*.1,body:body.visible,double:world.actorInstances.get(game.find('witch_model02')[0].id).visible,later:['witch_model03','witch_model04'].map(name=>world.actorInstances.get(game.find(name)[0].id).visible)});
    }
    const double=world.actorInstances.get(game.find('witch_model02')[0].id);
    world.redcat.visible=false;world.camera.position.set(500,2700,500);world.camera.lookAt(0,2480,20);world.render();
    return {wasVisible,records,doublePosition:double.position.toArray(),error:host.vm.lastError,subtitle:host.subtitle?.text};
  });
  assert.equal(ending.wasVisible,true);assert.ok(ending.records.every(r=>!r.body&&r.double&&r.later.every(v=>!v)));assert.equal(ending.error,null);assert.deepEqual(errors,[]);
  await page.screenshot({path:'artifacts/witch-ending-single-actor.png'});
  await writeFile('artifacts/bat-contact-witch-ending-scenes.json',JSON.stringify({bats,ending},null,2)+'\n');
  console.log('PASS actual castle bat/player collision, stationary and moving player contact escape, overlap-save recovery; Witch ending retires combat actor during original cutscene.');
}finally{await browser?.close();server.kill();}
