import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4199'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});let browser;
try {
  browser=await chromium.launch({executablePath:'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.goto('http://127.0.0.1:4199/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const fairyId=await page.evaluate(async()=>{
    const a=window.__redcat;await a.startLevel(0);a.pause();document.getElementById('pause').hidden=true;
    const w=a.world,g=a.gameplay,h=g.scripts,e=w.effects;
    for(let i=0;i<20&&!h.cutscene;i++)h.update(.05);
    const old=e.collectCutsceneFairies();h.skipCutscene({onStep:()=>e.collectCutsceneFairies(old)});e.finishSkippedFairies(old);
    window.fairyAudio=[];const play=a.audio.play.bind(a.audio);
    a.audio.play=options=>{if(options.sourceId?.startsWith('fairy:'))window.fairyAudio.push({sound:options.sound,loop:options.loop,id:options.sourceId});return play(options);};
    for(const object of g.objects)if(object.kind==='enemy'||object.kind==='trigger')object.enabled=false;
    const trigger=g.find('csmc01_tr')[0];trigger.enabled=true;g.trigger(trigger);
    for(let i=0;i<30&&!h.cutscene;i++)h.update(.05);
    document.getElementById('pause').hidden=false;return g.find('fairy11')[0].id;
  });
  await page.locator('#resume').click();
  await page.waitForFunction(id=>window.__redcat.world.effects.entries.get(id).fairy?.age>=3,fairyId);
  const before=await page.evaluate(id=>{
    const a=window.__redcat,s=a.world.effects.entries.get(id);
    return {active:s.fairy.active,sprites:s.fairyGeometry.sprites.length,plays:window.fairyAudio.filter(e=>e.id.startsWith(`fairy:${id}:`))};
  },fairyId);
  assert.equal(before.active,true);assert.ok(before.sprites>9);assert.deepEqual(before.plays.map(e=>[e.sound,e.loop]),[['gri5fx11.wav',false],['idlefee1.wav',true]]);
  await page.keyboard.down('KeyE');await page.waitForFunction(()=>!window.__redcat.gameplay.scripts.cutscene,{},{timeout:15000});await page.keyboard.up('KeyE');
  const after=await page.evaluate(id=>{
    const a=window.__redcat,s=a.world.effects.entries.get(id);a.pause();document.getElementById('pause').hidden=true;a.world.render();
    return {enabled:s.object.enabled,active:s.fairy.active,sprites:s.fairyGeometry.sprites.length,rays:s.fairyGeometry.rays.length,light:s.fairyGeometry.light,
      audio:a.audio.snapshot().filter(e=>e.sourceId?.startsWith(`fairy:${id}:`)),plays:window.fairyAudio.filter(e=>e.id.startsWith(`fairy:${id}:`)),futureEnabled:a.gameplay.find('fairy2')[0].enabled,scriptError:a.gameplay.scripts.vm.lastError};
  },fairyId);
  assert.equal(after.enabled,false);assert.equal(after.active,false);assert.equal(after.sprites,0);assert.equal(after.rays,0);assert.equal(after.light,null);assert.deepEqual(after.audio,[]);
  assert.equal(after.plays.length,2);assert.equal(after.futureEnabled,false);assert.equal(after.scriptError,null);assert.deepEqual(errors,[]);
  await page.screenshot({path:'artifacts/fairy-after-cutscene-skip.png'});
  await writeFile('artifacts/fairy-skip-audio-scenes.json',JSON.stringify({before,after,errors},null,2)+'\n');
  console.log('PASS fairy appearance cue once, silent particle pulses, real 2-second E skip clears fairy visuals/audio, future encounter preserved.');
} finally {await browser?.close();server.kill();}
