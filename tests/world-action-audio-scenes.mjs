import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4211'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage(),errors=[];
  await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4})));
  page.on('pageerror',error=>errors.push(error.stack));page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
  await page.goto('http://127.0.0.1:4211/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(1);app.pause();app.audio.reset();
    const game=app.gameplay,host=game.scripts;for(const p of host.players.values())p.stop();host.cutscene=false;
    const original=app.audio.play.bind(app.audio);window.__actionSamples=[];
    app.audio.play=options=>{
      const record=original(options);
      if(/^(switchpushbutton|opendoorsecret|magiev1)\.wav$/i.test(record?.name||'')){
        const sample={name:record.name,ended:false};window.__actionSamples.push(sample);
        record.element.addEventListener('ended',()=>Object.assign(sample,{ended:true,time:record.element.currentTime,duration:record.element.duration}));
      }
      return record;
    };
    const button=game.objects.find(o=>o.kind==='button'&&o.entity.ButtonType==='1');button.enabled=true;button.switchedOn=false;button.switchCount=0;
    game.switchButton(button,true);
    const door=game.find('secretdoor04')[0];door.open=false;door.locked=false;game.command(door,'open');
    app.audio.resume();
  });
  await page.waitForFunction(()=>window.__actionSamples.length===2&&window.__actionSamples.every(s=>s.ended),null,{timeout:12000});
  const samples=await page.evaluate(()=>window.__actionSamples);
  assert.deepEqual(samples.map(s=>s.name),['switchpushbutton.wav','opendoorsecret.wav']);
  for(const sample of samples)assert.ok(Math.abs(sample.time-sample.duration)<.02);
  await page.evaluate(()=>{
    const app=window.__redcat,game=app.gameplay,door=game.find('secretdoor03')[0];door.open=false;door.locked=false;game.command(door,'open');
  });
  await page.waitForFunction(()=>window.__actionSamples.length===3&&window.__actionSamples[2].ended,null,{timeout:12000});
  const fairy=await page.evaluate(async()=>{
    const app=window.__redcat;app.audio.reset();
    const fairy=app.gameplay.objects.find(o=>o.kind==='fairy');app.world.player.position=[...fairy.position];
    app.audio.setPlayerListener(app.world.player.position);
    const sound=app.audio.play({sound:'idlefee1.wav',loop:true,spatial:true,position:fairy.position});
    await new Promise((resolve,reject)=>{sound.element.addEventListener('playing',resolve,{once:true});sound.element.addEventListener('error',reject,{once:true});});
    app.audio.update(0,fairy.position);const before=sound.element.volume;
    app.audio.update(0,[999999,999999,999999]);const after=sound.element.volume;
    return {before,after,ready:sound.element.readyState};
  });
  assert.equal(fairy.after,fairy.before);assert.ok(fairy.before>0);assert.ok(fairy.ready>=2);
  await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(4);app.pause();app.audio.reset();app.audio.resume();window.__actionSamples=[];
    const game=app.gameplay,host=game.scripts;for(const p of host.players.values())p.stop();host.cutscene=false;host.playerVisible=true;
    game.trigger(game.find('telepoort01_trigger')[0]);
    for(let i=0;i<282;i++)host.update(.025);
  });
  await page.waitForFunction(()=>window.__actionSamples.length===1&&window.__actionSamples[0].ended,null,{timeout:8000});
  assert.equal(await page.evaluate(()=>window.__redcat.gameplay.scripts.playerVisible),false);
  await page.evaluate(()=>{for(let i=0;i<442;i++)window.__redcat.gameplay.scripts.update(.025);});
  await page.waitForFunction(()=>window.__actionSamples.length===2&&window.__actionSamples[1].ended,null,{timeout:8000});
  const portals=await page.evaluate(()=>({samples:window.__actionSamples,visible:window.__redcat.gameplay.scripts.playerVisible}));
  assert.equal(portals.visible,true);assert.ok(portals.samples.every(s=>s.name==='magiev1.wav'&&Math.abs(s.time-s.duration)<.02));
  assert.deepEqual(errors,[]);
  console.log('PASS browser native floor-button/secret-door WAVs, repeated shared door cue, fairy camera independence, and complete portal departure/arrival WAVs.');
} finally {await browser?.close();server.kill();}
