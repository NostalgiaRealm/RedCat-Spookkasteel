import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {writeFile, mkdir} from 'node:fs/promises';
import {pathToFileURL} from 'node:url';
import assert from 'node:assert/strict';

export async function verifyForestAudio(page) {
  await page.evaluate(async()=>{
    const app=window.__redcat; await app.startLevel(0); app.pause();
    for(let i=0;i<65;i++)app.world.update(.05,{forward:0,right:0});
    app.audio.update(0,app.world.camera.position.toArray());
  });
  await page.waitForFunction(()=>window.__redcat.audio.snapshot().every(r=>r.readyState>=2));
  const before=await page.evaluate(()=>window.__redcat.audio.snapshot());
  const ufo=before.find(r=>r.sound==='lv1snd1.wav'),voice=before.find(r=>r.channel==='voices');
  assert.ok(ufo); assert.equal(ufo.authoredGain,.25); assert.ok(ufo.volume<=.061);
  assert.equal(voice.sound,'rcgen44.wav'); assert.equal(voice.volume,.6);
  const forest=before.filter(r=>r.sound.startsWith('forest'));
  assert.equal(forest.length,16); assert.ok(forest.every(r=>r.volume<.16)); assert.ok(forest.some(r=>r.volume<.04));
  assert.ok(before.every(r=>r.paused),'All sound must pause, including dialogue emitted while paused');
  await page.locator('#pause-settings').click();
  await page.locator('#volume').fill('0.3'); await page.locator('#apply-settings').click();
  await page.locator('#settings').waitFor({state:'hidden'});
  const quieter=await page.evaluate(()=>window.__redcat.audio.snapshot());
  for(const old of before) {
    const current=quieter.find(r=>r.key===old.key);
    assert.ok(Math.abs(current.volume-old.volume/2)<1e-10,`${old.sound} responds to master volume`);
  }
  const beforeSave=await page.evaluate(()=>{
    const app=window.__redcat;
    app.gameplay.scripts.callMethod(app.gameplay.scripts.resolveObject('UFO_sound'),'MultiplyVolume',[.5]);
    app.gameplay.scripts.callMethod(app.gameplay.scripts.resolveObject('muziek'),'PlaySpecial',[]);
    app.gameplay.scripts.callMethod(app.gameplay.scripts.resolveObject('muziek'),'MultiplyVolume',[.5]);
    app.saveGame(true); return app.audio.snapshot();
  });
  await page.evaluate(async()=>{const app=window.__redcat;await app.loadSave();app.pause();});
  await page.waitForFunction(()=>window.__redcat.audio.snapshot().every(r=>r.readyState>=2));
  const restored=await page.evaluate(()=>window.__redcat.audio.snapshot());
  assert.equal(restored.filter(r=>r.spatial).length,17,'All enabled ambient loops return after loading');
  assert.equal(restored.find(r=>r.channel==='music').sound,'endbosses.wav','Script-selected boss music survives loading');
  for(const old of beforeSave) {
    // Patrol can emit a footstep before the introductory timeline freezes AI.
    // Save restoration resumes loops/current dialogue, not completed actions.
    if(!old.loop&&old.channel!=='voices')continue;
    const current=restored.find(r=>r.key===old.key); assert.ok(current,`${old.sound} restored`);
    assert.ok(Math.abs(current.volume-old.volume)<1e-10,`${old.sound} retains its saved mix`);
  }
  const distance=await page.evaluate(()=>{
    const audio=window.__redcat.audio,ufo=audio.snapshot().find(r=>r.sound==='lv1snd1.wav');
    audio.update(0,ufo.position);const near=audio.snapshot();
    audio.update(0,[200000,200000,200000]);const far=audio.snapshot();
    audio.update(0,window.__redcat.world.camera.position.toArray());
    return {near,far};
  });
  assert.ok(distance.far.find(r=>r.sound==='lv1snd1.wav').volume<distance.near.find(r=>r.sound==='lv1snd1.wav').volume/1000);
  assert.equal(distance.near.find(r=>r.channel==='voices').volume,distance.far.find(r=>r.channel==='voices').volume);
  await page.locator('#resume').click();
  await page.waitForFunction(()=>window.__redcat.audio.snapshot().find(r=>r.sound==='lv1snd1.wav')?.currentTime>.1);
  const playing=await page.evaluate(()=>window.__redcat.audio.snapshot());
  assert.ok(playing.filter(r=>r.loop).every(r=>!r.paused));
  await page.evaluate(()=>window.__redcat.pause());
  await page.locator('#return-menu').click();
  assert.equal(await page.evaluate(()=>window.__redcat.audio.snapshot().length),0,'Returning to menu stops every source');
  await page.locator('#open-settings').click(); await page.locator('#volume').fill('0.6');
  await page.locator('#apply-settings').click(); await page.locator('#settings').waitFor({state:'hidden'});
  await mkdir('artifacts',{recursive:true});
  await writeFile('artifacts/audio-forest.json',JSON.stringify({before,quieter,restored,playing},null,2)+'\n');
  console.log('PASS decoded forest/UFO/dialogue playback, original gains, camera distance, master volume, pause/resume and save/load.');
}

if(import.meta.url===pathToFileURL(process.argv[1]).href) {
  const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4176'},stdio:['ignore','pipe','inherit']});
  await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
  let browser;
  try {
    browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
    const page=await browser.newPage(),errors=[],badRequests=[];
    page.on('pageerror',error=>errors.push(error.stack)); page.on('response',r=>{if(r.status()>=400)badRequests.push(r.url());});
    await page.goto('http://127.0.0.1:4176/?skipIntro');await page.waitForFunction(()=>window.__redcat);
    await verifyForestAudio(page);
    assert.deepEqual(errors,[]); assert.deepEqual(badRequests,[]);
  }finally{await browser?.close();server.kill();}
}
