import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {pathToFileURL} from 'node:url';
import assert from 'node:assert/strict';

export async function verifyGameplayAudio(page) {
  const player=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(1);app.pause();
    const game=app.gameplay,world=app.world,host=game.scripts;
    for(const motion of host.players.values())motion.stop();
    host.cutscene=false;host.enemiesFrozen=false;host.camera=null;game.state.skill=1;
    for(const object of game.objects)if(['enemy','trigger','pickup'].includes(object.kind))object.enabled=false;
    const input={forward:0,right:0,jump:false,attack:false,use:false};
    for(let i=0;i<20;i++)world.update(.02,input);
    const events=[],previous=game.onEvent;game.onEvent=event=>{events.push(event);previous(event);};
    app.audio.reset();app.audio.pause();
    const grounded=world.player.grounded;
    world.update(.02,{...input,jump:true,attack:true});
    for(let i=0;i<5;i++)world.update(.02,{...input,jump:true});
    game.hitCooldown=0;game.damage(1,'sound-regression');
    // Let the original shooting animation release its first pellet, then aim
    // the next real shot at the floor and wait for its physical impact.
    for(let i=0;i<60;i++)world.update(.02,input);
    world.pitch=Math.PI/2;world.update(.02,{...input,attack:true});
    for(let i=0;i<50;i++)world.update(.02,input);
    app.audio.update(0,world.camera.position.toArray());
    return {grounded,jumps:events.filter(e=>e.type==='jump').length,events,sounds:app.audio.snapshot()};
  });
  assert.equal(player.grounded,true);assert.equal(player.jumps,1,'Holding jump in air must not retrigger the cue');
  for(const sound of ['rcshoot1.wav','rcshoot4.wav','rcjump1.wav','rcgen1.wav']) {
    const record=player.sounds.find(r=>r.sound===sound);assert.ok(record,`${sound} emitted by actual gameplay`);
    assert.ok(record.volume>.5,`${sound} is no longer reduced by the old placeholder gain`);
  }
  assert.ok(player.events.some(e=>e.type==='attack'));
  assert.ok(player.events.some(e=>e.type==='playerProjectileImpact'));
  assert.ok(!player.sounds.some(r=>r.sound==='bullethitwall.wav'));
  await page.waitForFunction(()=>window.__redcat.audio.snapshot().every(r=>r.readyState>=2));
  const playerDecoded=await page.evaluate(()=>window.__redcat.audio.snapshot());
  await page.evaluate(()=>window.__redcat.audio.resume());
  await page.waitForFunction(()=>window.__redcat.audio.snapshot().some(r=>r.sound==='rcgen1.wav'&&!r.paused&&r.currentTime>.03));

  const enemies=[];
  for(const action of ['alert','attack','hurt','death']) {
    const cues=await page.evaluate(async action=>{
      const app=window.__redcat;app.audio.reset();app.audio.pause();
      const {Gameplay}=await import('./src/gameplay.js'),position=app.world.camera.position.toArray();
      const entities=[['spiderg','MovingEnemy',1,1],['spidery','MovingEnemy',1,2],['spiderr','MovingEnemy',1,3],
        ['knight','StandingEnemy',2,1],['guardian','MovingEnemy',10,1],['zombie','MovingEnemy',4,1]]
        .map(([name,classname,Type,SubType])=>({classname,Type,SubType,Origin:position.join(' '),'%name%':`sound-test-${name}`}));
      const game=new Gameplay({id:'lvl01a',entities,spawn:{position}},{deferInit:true,onEvent:e=>app.gameplay.onEvent(e)});
      for(const enemy of game.objects) {
        if(action==='hurt')game.hurtEnemy(enemy,.1);
        else if(action==='death')game.destroy(enemy);
        else game.enemyAction(enemy,action);
      }
      return app.audio.snapshot();
    },action);
    assert.equal(cues.length,6);
    const suffix={alert:3,attack:4,hurt:5,death:6}[action];
    assert.deepEqual(cues.map(c=>c.sound).sort(),['spiderl','spiderll','spiderlll','knight','wachter','zombie'].map(prefix=>`${prefix}${suffix}.wav`).sort());
    await page.waitForFunction(()=>window.__redcat.audio.snapshot().every(r=>r.readyState>=2));
    const decoded=await page.evaluate(()=>window.__redcat.audio.snapshot());
    assert.equal(decoded.length,6);assert.ok(decoded.every(r=>r.readyState>=2&&r.volume>.5));
    enemies.push({action,sounds:decoded});
  }
  await page.evaluate(()=>window.__redcat.audio.resume());
  await page.waitForFunction(()=>window.__redcat.audio.snapshot().some(r=>r.sound==='zombie6.wav'&&!r.paused&&r.currentTime>.03));
  await page.locator('#return-menu').click();
  await mkdir('artifacts',{recursive:true});await writeFile('artifacts/gameplay-audio.json',JSON.stringify({player,playerDecoded,enemies},null,2)+'\n');
  console.log('PASS actual jump/shot/impact/damage audio and decoded spider, knight, guardian and zombie cues.');
}

if(import.meta.url===pathToFileURL(process.argv[1]).href) {
  const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4177'},stdio:['ignore','pipe','inherit']});
  await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
  let browser;
  try {
    browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
    const page=await browser.newPage(),errors=[],bad=[];
    page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)bad.push(r.url());});
    await page.goto('http://127.0.0.1:4177/?skipIntro');await page.waitForFunction(()=>window.__redcat);
    await verifyGameplayAudio(page);assert.deepEqual(errors,[]);assert.deepEqual(bad,[]);
  }finally{await browser?.close();server.kill();}
}
