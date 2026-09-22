import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4214'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',error=>errors.push(error.stack));
  page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
  await page.goto('http://127.0.0.1:4214/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(async()=>{const app=window.__redcat;await app.startLevel(1);app.pause();document.getElementById('pause').hidden=true;});
  const result=await page.evaluate(async()=>{
    const {targetAimPoint}=await import('/src/targeting.js');
    const app=window.__redcat,w=app.world,g=app.gameplay,h=g.scripts;
    // Run the original level initializer (including the basic shot unlock),
    // then isolate one authored castle knight from unrelated encounters.
    for(let i=0;i<40&&!h.cutscene;i++)h.update(.05);
    if(h.cutscene)h.skipCutscene();
    for(const player of h.players.values())player.stop();
    h.cutscene=false;h.camera=null;h.enemiesFrozen=false;
    const knight=g.find('StandingEnemy7')[0];
    for(const object of g.objects)if(object.kind==='trigger'||object.kind==='enemy'&&object!==knight)object.enabled=false;
    w.syncModels();w.syncActors(0);
    const input={attack:false,forward:0,right:0};
    for(let i=0;i<60;i++)w.update(1/60,input);
    // Find dry, unobstructed original floor 270 units from this knight. Its
    // native sense/visual range remains 100; the player targeting range is 480.
    let playerPosition;
    const candidates=[];
    for(let angle=0;angle<Math.PI*2;angle+=Math.PI/8){
      const p=[knight.position[0]+Math.sin(angle)*270,knight.position[1],knight.position[2]+Math.cos(angle)*270];
      const ground=w.collider.trace([p[0],p[1]+64,p[2]],[p[0],p[1]-128,p[2]],w.player.mins,w.player.maxs,w.physicalModels);
      if(ground.startSolid||ground.fraction===1||ground.normal[1]<.65)continue;
      const position=ground.end.map((v,i)=>v+(i===1?.05:0));
      if(Math.abs(position[1]-knight.position[1])>40)continue;
      const contents=w.collider.contents(position,w.player.mins,w.player.maxs,w.physicalModels);
      const line=w.collider.trace(position.map((v,i)=>v+(i===1?45:0)),targetAimPoint(knight),[0,0,0],[0,0,0],w.physicalModels,'blocksLOS');
      candidates.push({position,contents,fraction:line.fraction});
      if(contents!==0||line.fraction<1&&line.actorId!==knight.id)continue;
      playerPosition=position;break;
    }
    if(!playerPosition)throw new Error(`No clear dry castle floor for ranged knight attack: ${JSON.stringify({knight:knight.position,candidates})}`);
    w.player.position=[...playerPosition];w.player.lastSafe=[...playerPosition];w.player.velocityY=0;
    w.yaw=Math.atan2(playerPosition[0]-knight.position[0],playerPosition[2]-knight.position[2]);w.pitch=.16;
    w.targeting.clear();w.syncPlayer(0,input);
    const events=[],oldEvent=g.onEvent;
    g.onEvent=event=>{events.push({time:g.time,...event});oldEvent(event);};
    const state=()=>({time:g.time,knightPosition:[...knight.position],playerPosition:[...w.player.position],distance:Math.hypot(...knight.position.map((v,i)=>v-w.player.position[i])),health:knight.health,playerHealth:g.state.health,alerted:!!knight.alerted,selected:w.targeting.target?.id,locked:w.targeting.locked,mode:h.musicState?.mode,sound:h.musicState?.sound,audio:app.audio.snapshot().find(r=>r.key==='music'),lastAttackedAt:knight.lastAttackedAt??null,projectiles:g.projectiles.filter(p=>p.owner==='player').length,attacks:events.filter(e=>e.type==='attack').length,impacts:events.filter(e=>e.type==='playerProjectileImpact').length});
    for(let i=0;i<60;i++)w.update(1/60,input);
    const lookOnly=state();
    w.update(1/60,{...input,attack:true});
    // ScriptHost updates before gameplay in a frame. Allow the following
    // frame to consume the accepted attack, still before hand release/impact.
    w.update(1/60,{...input,attack:true});
    const acceptedAttack=state();
    const firing=[];
    for(let i=0;i<600&&knight.health>0;i++){
      w.update(1/60,{...input,attack:true});
      if(i%30===0)firing.push(state());
    }
    w.update(1/60,input);w.render();
    const afterDeath=state();
    return {knight:knight.id,stats:{health:knight.maxHealth,visualRange:knight.stats.VisualRange,senseRange:knight.stats.SenseRange,memory:knight.stats.TimeToRememberVisual},skill:g.state.skill,lookOnly,acceptedAttack,firing,afterDeath,events:events.filter(e=>['scriptMusic','attack','playerProjectileImpact','enemyHurt','enemyKilled'].includes(e.type)),error:h.vm.lastError};
  });
  await page.screenshot({path:'artifacts/knight-attack-music.png'});
  await page.waitForFunction(()=>window.__redcat.audio.snapshot().filter(r=>r.key==='music').every(r=>r.readyState>=2));
  result.finalMusic=await page.evaluate(()=>window.__redcat.audio.snapshot().find(r=>r.key==='music'));
  await writeFile('artifacts/knight-attack-music-scenes.json',JSON.stringify({result,errors},null,2)+'\n');
  assert.equal(result.stats.visualRange,100);assert.equal(result.stats.senseRange,100);
  assert.ok(result.skill&1);
  assert.equal(result.lookOnly.selected,result.knight);assert.equal(result.lookOnly.locked,false);
  assert.equal(result.lookOnly.alerted,false);assert.equal(result.lookOnly.mode,'ambient');
  assert.ok(result.lookOnly.distance>200&&result.lookOnly.distance<480);
  assert.equal(result.acceptedAttack.selected,result.knight);assert.equal(result.acceptedAttack.locked,true);
  assert.equal(result.acceptedAttack.health,result.stats.health);assert.equal(result.acceptedAttack.alerted,false);
  assert.equal(result.acceptedAttack.attacks,0);assert.equal(result.acceptedAttack.impacts,0);assert.equal(result.acceptedAttack.projectiles,0);
  assert.equal(result.acceptedAttack.mode,'action');assert.equal(result.acceptedAttack.sound,'Endbosses.wav');
  assert.equal(result.acceptedAttack.audio.sound,'endbosses.wav');assert.ok(Number.isFinite(result.acceptedAttack.lastAttackedAt));
  assert.ok(result.firing.filter(s=>s.health>0).every(s=>s.mode==='action'),'Music stays active while RedCat fires from beyond knight perception');
  assert.ok(result.firing.some(s=>s.impacts>0&&s.health>0&&s.alerted),'Real pellet hits engage the knight');
  assert.equal(result.afterDeath.health,0);assert.equal(result.afterDeath.mode,'ambient');
  assert.equal(result.afterDeath.sound,result.lookOnly.sound);assert.equal(result.finalMusic.sound,result.lookOnly.audio.sound);
  assert.equal(result.afterDeath.playerHealth,result.lookOnly.playerHealth);
  assert.ok(Math.hypot(...result.afterDeath.playerPosition.map((v,i)=>v-result.lookOnly.playerPosition[i]))<.1);
  const impacts=result.events.filter(e=>e.type==='playerProjectileImpact'&&e.target===result.knight);
  assert.equal(impacts.length,result.stats.health,'The original basic pellets defeat the real knight');
  const shot=result.events.find(e=>e.type==='attack');
  assert.ok(Math.hypot(shot.origin[0]-result.lookOnly.playerPosition[0],shot.origin[2]-result.lookOnly.playerPosition[2])>10,'Pellets release from the animated hand');
  assert.equal(result.error,null);assert.deepEqual(errors,[]);
  console.log('PASS real castle knight: look-only keeps ambient; locked attack starts Endbosses.wav before hand release or impact at 270 units, uninterrupted during five native pellet hits, and ambient returns on death; native perception unchanged, no browser/HTTP errors.');
} finally {await browser?.close();server.kill();}
