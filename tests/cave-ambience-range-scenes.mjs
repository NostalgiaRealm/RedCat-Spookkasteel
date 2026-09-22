import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4225'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage(),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:3})));
  await page.goto('http://127.0.0.1:4225/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const sources=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(3);app.pause();
    return app.world.level.entities.filter(e=>e.classname==='EffectSound'&&e.Replay==='1'&&e.Use3DSound==='1').map(e=>e.DaviName).map(name=>{
      const o=app.gameplay.find(name)[0];app.gameplay.command(o,'enable');return {name,id:o.id,position:[...o.position]};
    });
  });
  await page.waitForFunction(ids=>ids.every(id=>window.__redcat.audio.snapshot().some(r=>r.sourceId===id&&r.readyState>=2)),sources.map(o=>o.id));
  const reports=await page.evaluate(sources=>{
    const app=window.__redcat;
    return sources.map(source=>{
      const samples=[0,5,15,25,30,100].map(metres=>{
        app.world.camera.position.fromArray(source.position.map((v,i)=>v+(i===0?metres*32:0)));
        app.audio.update(0,app.world.camera.position.toArray());
        const r=app.audio.snapshot().find(r=>r.sourceId===source.id);
        return {metres,volume:r.volume,distanceGain:r.distanceGain,readyState:r.readyState,loop:r.loop};
      });return {...source,samples};
    });
  },sources);
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
  await mkdir('artifacts',{recursive:true});await writeFile('artifacts/cave-ambience-range-scenes.json',JSON.stringify({reports,errors},null,2)+'\n');
  console.log('PASS: all original repeating cave ambience sources decode, play nearby, fade with camera distance and are silent at 30m; no browser/HTTP errors.');
} finally {await browser?.close();server.kill();}
