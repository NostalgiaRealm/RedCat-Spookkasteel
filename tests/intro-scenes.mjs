import assert from 'node:assert/strict';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import {chromium} from 'playwright';

// Real media playback with a fresh profile and audible autoplay blocked.
// Do not use the permissive autoplay switch used by some other scene tests.
process.env.TMPDIR='current_work';
const output=resolve(`current_work/intro-autoplay-2026-10-02/browser-${Date.now()}`);
await mkdir(output,{recursive:true});
const report={checks:[],errors:[],samples:[]},port=Number(process.env.INTRO_TEST_PORT||4326);
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:String(port)},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);server.once('exit',code=>reject(new Error(`Server exited: ${code}`)));});
let context;
const check=name=>{report.checks.push(name);console.log(`PASS ${name}`);};
const state=page=>page.evaluate(()=>{
  const v=document.getElementById('intro-video'),b=document.getElementById('intro-play');
  return {mode:window.__redcat.mode,time:v.currentTime,duration:v.duration,paused:v.paused,muted:v.muted,
    volume:v.volume,src:v.getAttribute('src'),action:b.textContent,actionHidden:b.hidden,attempts:window.introAttempts};
});
const advancing=page=>page.waitForFunction(()=>{
  const v=document.getElementById('intro-video');return window.__redcat?.mode==='intro'&&!v.paused&&v.currentTime>.25;
},null,{timeout:15000});
try {
  for(const mobile of [false,true]) {
    const label=mobile?'mobile':'desktop';
    context=await chromium.launchPersistentContext(resolve(output,`${label}-profile`),{
      executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,
      args:['--use-angle=gl','--autoplay-policy=document-user-activation-required',
        '--disable-features=PreloadMediaEngagementData,MediaEngagementBypassAutoplayPolicies'],
      viewport:mobile?{width:320,height:568}:{width:1280,height:720},isMobile:mobile,hasTouch:mobile,
    });
    const page=await context.newPage();page.on('pageerror',e=>report.errors.push(String(e)));
    await page.addInitScript(()=>{
      const play=HTMLMediaElement.prototype.play;window.introAttempts=[];
      HTMLMediaElement.prototype.play=function(){
        const attempt={muted:this.muted};window.introAttempts.push(attempt);
        const pending=play.call(this);pending.then(()=>attempt.result='playing',e=>attempt.result=e.name);return pending;
      };
    });
    await page.goto(`http://127.0.0.1:${port}/`);await advancing(page);
    const initial=await state(page);report.samples.push({label,...initial});
    assert.equal(initial.muted,true);assert.equal(initial.action,'Geluid inschakelen');assert.equal(initial.actionHidden,false);
    assert.equal(initial.attempts[0].result,'NotAllowedError');assert.equal(initial.attempts[1].result,'playing');
    assert.equal(await page.locator('#fatal').isVisible(),false);
    const rectangles=await Promise.all(['#intro-play','#skip-intro'].map(id=>page.locator(id).boundingBox()));
    const viewport=page.viewportSize();
    for(const r of rectangles)assert.ok(r&&r.x>=0&&r.y>=0&&r.x+r.width<=viewport.width&&r.y+r.height<=viewport.height);
    const [a,b]=rectangles;assert.ok(a.x+a.width<=b.x||b.x+b.width<=a.x||a.y+a.height<=b.y||b.y+b.height<=a.y,'intro controls must not overlap');
    await page.screenshot({path:resolve(output,`${label}-autoplay.png`)});
    check(`${label}: intro actually advances without interaction under blocked audible autoplay; controls fit`);
    if(mobile)await page.locator('#intro-play').tap();else await page.locator('#intro-play').click();
    await page.waitForFunction(()=>{const v=document.getElementById('intro-video');return !v.muted&&!v.paused&&document.getElementById('intro-play').hidden;});
    const audible=await state(page);assert.ok(audible.time>=initial.time);assert.equal(audible.volume,.6);
    check(`${label}: click/tap enables sound without rewinding or changing volume`);
    await page.locator('#skip-intro').click();
    const skipped=await state(page);assert.equal(skipped.mode,'menu');assert.equal(skipped.src,null);assert.equal(skipped.paused,true);assert.equal(skipped.actionHidden,true);
    await page.locator('#play-intro').click();await advancing(page);
    const replay=await state(page);assert.equal(replay.muted,false);assert.equal(replay.actionHidden,true);
    check(`${label}: skip cleans playback and manual replay starts with sound`);
    // The local fixture server sends complete files, not byte ranges. Play to
    // the real ended event rather than depending on a seek into an unread tail.
    await page.evaluate(()=>document.getElementById('intro-video').playbackRate=16);
    await page.waitForFunction(()=>window.__redcat.mode==='menu',null,{timeout:15000});
    assert.equal((await state(page)).src,null);check(`${label}: natural end returns to the menu`);
    if(!mobile) {
      await page.goto(`http://127.0.0.1:${port}/?skipIntro`);await page.waitForFunction(()=>window.__redcat);
      assert.equal((await state(page)).mode,'menu');assert.equal((await state(page)).src,null);
      await page.evaluate(()=>localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false})));
      await page.goto(`http://127.0.0.1:${port}/`);await page.waitForFunction(()=>window.__redcat);
      assert.equal((await state(page)).mode,'menu');assert.equal((await state(page)).src,null);
      check('saved intro opt-out and skipIntro query still bypass automatic playback');
      await page.evaluate(()=>localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:true,volume:0})));
      await page.reload();await advancing(page);assert.equal((await state(page)).volume,0);assert.equal((await state(page)).actionHidden,true);
      check('saved zero volume is respected without an unwanted sound prompt');
      await page.addInitScript(()=>{
        const canPlayType=HTMLMediaElement.prototype.canPlayType;
        HTMLMediaElement.prototype.canPlayType=function(type){return type.includes('webm')?'':canPlayType.call(this,type);};
      });
      await page.reload();await advancing(page);assert.ok((await state(page)).src.endsWith('intronl.mp4'));
      check('browser without WebM support plays the imported MP4 intro');
    }
    await context.close();context=null;
  }
  assert.deepEqual(report.errors,[]);
} finally {
  await writeFile(resolve(output,'report.json'),JSON.stringify(report,null,2));
  await context?.close();server.kill();console.log(output);
}
