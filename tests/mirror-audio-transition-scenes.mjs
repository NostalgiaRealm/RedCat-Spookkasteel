import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4208'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try{
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  // Keep headless pointer-lock completion from synthesizing a pause during
  // this test's immediate scripted pickup. The game's touch setting is public.
  await page.addInitScript(()=>localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,touchControls:'on'})));
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.goto('http://127.0.0.1:4208/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(async()=>{
    const a=window.__redcat;await a.startLevel(0);a.pause();a.audio.reset();
    const g=a.gameplay,h=g.scripts;for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;
    for(const o of g.objects)if(['enemy','fairy','trigger'].includes(o.kind)&&o.entity.DaviName!=='endleveltrigger')o.enabled=false;
    document.body.classList.remove('in-cutscene');a.resume();
    const mirror=g.objects.find(o=>o.subtype==='mirror');g.pickup(mirror);
    const r=[...a.audio.sounds].find(r=>r.group==='pickup'&&r.name==='imirror.wav');
    window.__mirrorRecord=r;window.__mirrorResult={completed:g.completed,initialLevel:a.world.id,initialPending:a.audio.pickupsPending,ended:false};
    r.element.addEventListener('ended',()=>Object.assign(window.__mirrorResult,{ended:true,endTime:r.element.currentTime,duration:r.element.duration,levelAtEnd:a.world.id}));
  });
  await page.waitForFunction(()=>window.__mirrorRecord.element.currentTime>.3);
  const paused=await page.evaluate(()=>{const a=window.__redcat;a.pause();return window.__mirrorRecord.element.currentTime;});
  await page.waitForTimeout(1100);
  const duringPause=await page.evaluate(()=>({time:window.__mirrorRecord.element.currentTime,level:window.__redcat.world.id,pending:window.__redcat.audio.pickupsPending}));
  assert.ok(Math.abs(paused-duringPause.time)<.01);assert.equal(duringPause.level,'lvl00a');assert.equal(duringPause.pending,true);
  await page.evaluate(()=>window.__redcat.resume());
  assert.equal(await page.evaluate(()=>window.__redcat.world.id),'lvl00a','resume must wait for the remaining mirror audio');
  await page.waitForFunction(()=>window.__redcat.mode==='debriefing',null,{timeout:20000});
  await page.waitForTimeout(1100);
  const summary=await page.evaluate(()=>({level:window.__redcat.world.id,score:window.__redcat.gameplay.state.score,summary:window.__redcat.gameplay.debriefing,save:JSON.parse(localStorage.getItem('redcat.save.v1')),touchHidden:document.getElementById('game-menu').hidden}));
  assert.equal(summary.level,'lvl00a');assert.equal(summary.touchHidden,true);assert.ok(summary.summary);
  assert.deepEqual(summary.summary.rows.map(r=>r.total),[15,19,4,0]);
  assert.equal(summary.save.game.debriefing.newScore,summary.score);
  await mkdir('artifacts',{recursive:true});
  await page.screenshot({path:'artifacts/debriefing-desktop.png'});
  await page.setViewportSize({width:390,height:844});
  await page.screenshot({path:'artifacts/debriefing-mobile.png'});
  const layout=await page.locator('.debriefing-frame').boundingBox();
  assert.ok(layout.width<=390);assert.ok(layout.y>=0&&layout.y+layout.height<=844);
  // An app/browser restart at this screen must not skip it or award twice.
  await page.evaluate(()=>window.__redcat.loadSave());
  assert.equal(await page.evaluate(()=>window.__redcat.mode),'debriefing');
  assert.equal(await page.evaluate(()=>window.__redcat.gameplay.state.score),summary.score);
  await page.waitForTimeout(1100);
  await page.getByRole('button',{name:'KLIK/TIK hier om verder te gaan'}).click();
  await page.waitForFunction(()=>window.__redcat.mode==='playing'&&window.__redcat.world.id==='lvl01a',null,{timeout:20000});
  const result=await page.evaluate(()=>({...window.__mirrorResult,finalLevel:window.__redcat.world.id}));
  assert.equal(result.completed,true);assert.equal(result.initialPending,true);assert.equal(result.ended,true);
  assert.equal(result.levelAtEnd,'lvl00a');assert.ok(Math.abs(result.endTime-result.duration)<.01);assert.ok(result.duration>3);
  assert.equal(result.finalLevel,'lvl01a');assert.deepEqual(errors,[]);
  await writeFile('artifacts/mirror-audio-transition-scenes.json',JSON.stringify({result,paused,duringPause,summary,layout},null,2)+'\n');
  console.log('PASS forest mirror WAV and pause, original scoreboard at desktop/mobile sizes, save/reload without double bonus, touch continue to castle.');
}finally{await browser?.close();server.kill();}
