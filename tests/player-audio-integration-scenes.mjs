import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4207'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try{
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage({viewport:{width:1024,height:768}}),errors=[],results={};
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.goto('http://127.0.0.1:4207/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(async()=>{await window.__redcat.startLevel(0);window.__redcat.pause();});
  await page.locator('#pause-settings').click();await page.locator('#open-cheats').click();await page.locator('#cheat-noclip').check();
  results.immunity=await page.evaluate(()=>{
    const app=window.__redcat,g=app.gameplay,before={health:g.state.health,lives:g.state.lives};
    g.hitCooldown=0;g.damage(100,'enemy');g.damage(100,'lava',{continuous:true});g.scripts.callNative('KillPlayer');
    return {before,after:{health:g.state.health,lives:g.state.lives},noClip:app.world.player.noClip};
  });
  assert.equal(results.immunity.noClip,true);assert.deepEqual(results.immunity.after,results.immunity.before);
  // Grant through the actual host event path, then reload the browser and replay
  // the forest to cover main's persistent campaign mask and controller hookup.
  await page.evaluate(()=>{const a=window.__redcat;a.gameplay.scripts.callNative('RcEnableSkill',[3]);a.gameplay.scripts.callNative('RcEnableSkill',[2]);});
  await page.reload();await page.waitForFunction(()=>window.__redcat);
  results.replay=await page.evaluate(async()=>{
    const a=window.__redcat;await a.startLevel(0);a.pause();
    a.world.update(0,{});a.gameplay.damage(100);
    return {skill:a.gameplay.state.skill,controllerSkill:a.world.player.skill,health:a.gameplay.state.health,noClip:a.world.player.noClip,earned:JSON.parse(localStorage.getItem('redcat.progress.v1')).earnedSkills};
  });
  assert.equal(results.replay.skill&12,12);assert.equal(results.replay.controllerSkill&12,12);assert.equal(results.replay.earned&12,12);assert.equal(results.replay.health,10);assert.equal(results.replay.noClip,true);
  await page.evaluate(()=>{
    const a=window.__redcat,g=a.gameplay,h=g.scripts;a.audio.reset();
    for(const p of h.players.values())p.stop();
    for(const o of g.objects)if(['enemy','trigger','fairy'].includes(o.kind))o.enabled=false;
    window.__voiceResults=[];
    const original=a.audio.play.bind(a.audio);
    a.audio.play=options=>{const r=original(options);if(options.channel==='voices'){
      window.__voiceResults.push({sound:r.name,start:performance.now(),ended:false});const result=window.__voiceResults.at(-1);
      r.element.addEventListener('ended',()=>Object.assign(result,{ended:true,time:r.element.currentTime,duration:r.element.duration,end:performance.now()}));
    }return r;};
    a.resume();h.callNative('StartCutScene');h.say('flgen4');h.say('flgen5');h.callNative('StopCutScene');
    // Expired script subtitles must neither clear the spoken subtitle nor stop audio.
    g.emit('dialogue',{text:''});
  });
  await page.waitForFunction(()=>window.__redcat.audio.keyed.get('voice')?.element.currentTime>.3);
  results.paused=await page.evaluate(()=>{
    const a=window.__redcat;a.audio.play({sound:'rcshoot4.wav',key:'pause-one-shot'});a.pause();
    return {time:a.audio.keyed.get('voice').element.currentTime,subtitle:document.getElementById('subtitle').textContent,hidden:document.getElementById('subtitle').hidden,cutscene:a.gameplay.scripts.cutscene,allPaused:[...a.audio.sounds].every(r=>r.element.paused)};
  });
  await page.waitForTimeout(350);
  const pausedTime=await page.evaluate(()=>window.__redcat.audio.keyed.get('voice').element.currentTime);
  assert.ok(Math.abs(pausedTime-results.paused.time)<.01);assert.equal(results.paused.allPaused,true);assert.equal(results.paused.hidden,false);assert.equal(results.paused.cutscene,true);
  await page.evaluate(()=>window.__redcat.resume());
  await page.waitForFunction(()=>window.__voiceResults.length===2&&window.__voiceResults.every(r=>r.ended)&&!window.__redcat.gameplay.scripts.cutscene,{},{timeout:12000});
  results.voices=await page.evaluate(()=>window.__voiceResults);
  for(const line of results.voices)assert.ok(Math.abs(line.time-line.duration)<.03,JSON.stringify(line));
  assert.ok(results.voices[1].start>=results.voices[0].end-2,'second WAV begins only when first ends');
  // Skip explicitly cancels both the active line and buffered subsequent line.
  await page.evaluate(()=>{const a=window.__redcat,h=a.gameplay.scripts;h.callNative('StartCutScene');h.say('flgen4');h.say('flgen5');h.callNative('StopCutScene');});
  await page.keyboard.down('KeyE');await page.waitForFunction(()=>!window.__redcat.gameplay.scripts.cutscene,{},{timeout:5000});await page.keyboard.up('KeyE');
  results.skipped=await page.evaluate(()=>({pending:window.__redcat.audio.dialoguePending,voice:window.__redcat.audio.keyed.has('voice'),subtitle:document.getElementById('subtitle').hidden}));
  assert.deepEqual(results.skipped,{pending:false,voice:false,subtitle:true});assert.deepEqual(errors,[]);
  await mkdir('artifacts',{recursive:true});await writeFile('artifacts/player-audio-integration-scenes.json',JSON.stringify(results,null,2)+'\n');
  console.log('PASS browser no-clip immunity, persistent earned abilities, complete sequential WAV playback, pause/resume and explicit skip.');
}finally{await browser?.close();server.kill();}
