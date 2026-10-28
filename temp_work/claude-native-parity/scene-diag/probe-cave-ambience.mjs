import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

import {sceneOutput} from '../../../tests/support/scene-output.mjs';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4438'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage(),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:3})));
  await page.goto('http://127.0.0.1:4438/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const sources=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(3);app.pause();
    return app.world.level.entities.filter(e=>e.classname==='EffectSound'&&e.Replay==='1'&&e.Use3DSound==='1').map(e=>e.DaviName).map(name=>{
      const o=app.gameplay.find(name)[0];app.gameplay.command(o,'enable');return {name,id:o.id,position:[...o.position]};
    });
  });
  await page.waitForFunction(ids=>ids.every(id=>window.__redcat.audio.snapshot().some(r=>r.sourceId===id&&r.readyState>=2)),sources.map(o=>o.id));
  const reports=await page.evaluate(sources=>{
    const app=window.__redcat;
    // Samples step straight along +X, through cave rock and into other rooms.
    // Isolate the distance falloff from the later occlusion/visibility hearing
    // (it has its own scenes) by detaching the audio environment meanwhile.
    const environment=app.audio.environment;app.audio.environment=null;
    try{return sources.map(source=>{
      const samples=[0,5,15,25,30,100].map(metres=>{
        app.world.camera.position.fromArray(source.position.map((v,i)=>v+(i===0?metres*32:0)));
        app.audio.update(0,app.world.camera.position.toArray());
        const r=app.audio.snapshot().find(r=>r.sourceId===source.id);
        return {metres,volume:+r.volume.toFixed(4),distanceGain:+r.distanceGain.toFixed(4),blocked:r.blocked,audible:r.audible,obstruction:r.obstruction};
      });return {...source,samples};
    });}finally{app.audio.environment=environment;}
  },sources);
  throw new Error('DBG '+JSON.stringify(reports.map(r=>[r.name,r.samples.map(s=>[s.metres,s.volume,s.distanceGain,s.audible,s.blocked])])));
  for(const report of reports){
    assert.ok(report.samples[0].volume>0,`${report.name} audible nearby`);
    assert.equal(report.samples[1].volume,report.samples[0].volume);
    assert.ok(report.samples[2].volume>0&&report.samples[2].volume<report.samples[1].volume);
    assert.ok(report.samples[3].volume>0&&report.samples[3].volume<.02);
    assert.equal(report.samples[4].volume,0);assert.equal(report.samples[5].volume,0);
    assert.ok(report.samples.every(s=>s.readyState>=2&&s.loop));
  }
  await page.evaluate(()=>{const a=window.__redcat;a.audio.update(0,a.gameplay.find('waterfall')[0].position);a.audio.resume();});
  await page.waitForFunction(()=>window.__redcat.audio.snapshot().find(r=>r.sourceId==='EffectSound1')?.currentTime>.1);
  await page.evaluate(()=>window.__redcat.audio.pause());
  assert.deepEqual(errors,[]);
  await mkdir(sceneOutput('artifacts'),{recursive:true});await writeFile(sceneOutput('artifacts/cave-ambience-range-scenes.json'),JSON.stringify({reports,errors},null,2)+'\n');
  console.log('PASS: all original repeating cave ambience sources decode, play nearby, fade with camera distance and are silent at 30m; no browser/HTTP errors.');
} finally {await browser?.close();server.kill();}
