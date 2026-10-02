import assert from 'node:assert/strict';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import {chromium} from 'playwright';

// Real movement/collision in two affected entrances. Only scripted camera
// interruptions and player death are suppressed to keep the route repeatable.
process.env.TMPDIR='current_work';
const output=resolve(`current_work/circling-hitch-2026-10-01/verification-${Date.now()}`);
await mkdir(output,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4320'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;const report={levels:[],errors:[]};
try {
  browser=await chromium.launchPersistentContext(resolve(output,'profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl'],viewport:{width:960,height:540}});
  for(const index of [2,1]) {
    const page=await browser.newPage();
    page.on('pageerror',e=>report.errors.push(String(e)));
    await page.addInitScript(()=>{
      localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
      localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,volume:0,touchControls:'on'}));
      const raf=requestAnimationFrame.bind(window);
      window.requestAnimationFrame=fn=>raf(now=>{
        const m=window.circleMeasurement;
        if(!m||fn.name!=='frame'){fn(now);return;}
        const start=performance.now();m.rendered=false;fn(now);
        m.frames.push({elapsed:now-m.begin,cpu:performance.now()-start,interval:now-m.last,rendered:m.rendered});m.last=now;
      });
    });
    await page.goto('http://127.0.0.1:4320/?skipIntro');await page.waitForFunction(()=>window.__redcat);
    await page.evaluate(async index=>{
      const a=window.__redcat;await a.startLevel(index);a.pause();
      const w=a.world,g=a.gameplay,h=g.scripts;
      for(const player of h.players.values())player.stop();
      h.cutscene=false;h.camera=null;h.pendingCutsceneStop=null;h.enemiesFrozen=false;
      for(const object of g.objects)if(['trigger','fairy'].includes(object.kind))object.enabled=false;
      g.damage=()=>{};
      w.updateCamera(1,true);await w.geometryStream.settle();w.updateRenderResidency();w.effects.update(0);w.render();
      const update=w.update,render=w.renderer.render,activate=w.geometryStream.activate;
      w.update=function(dt,input){return update.call(this,dt,{...input,forward:.35,turn:.75});};
      w.renderer.render=function(...args){if(window.circleMeasurement)window.circleMeasurement.rendered=true;return render.apply(this,args);};
      w.geometryStream.activate=function(...args){if(window.circleMeasurement)window.circleMeasurement.activations.push(performance.now()-window.circleMeasurement.begin);return activate.apply(this,args);};
      const now=performance.now();window.circleMeasurement={begin:now,last:now,frames:[],activations:[],position:[...w.player.position]};a.resume();
    },index);
    await page.waitForTimeout(16500);
    const result=await page.evaluate(()=>{
      const a=window.__redcat,m=window.circleMeasurement;window.circleMeasurement=null;a.pause();
      const steady=m.frames.filter(frame=>frame.elapsed>=5500),sorted=steady.map(frame=>frame.cpu).sort((a,b)=>a-b);
      return {...m,level:a.world.id,positionAfter:[...a.world.player.position],steadyFrames:steady.length,steadyMissingFrames:steady.filter(frame=>!frame.rendered).length,
        steadyActivations:m.activations.filter(time=>time>=5500).length,cpuP95:sorted[Math.floor(sorted.length*.95)],stream:{...a.world.geometryStream.stats},gpu:{...a.world.renderer.info.memory}};
    });
    report.levels.push(result);
    assert.ok(result.steadyFrames>100,'the real game loop must run');
    assert.ok(Math.hypot(...result.positionAfter.map((n,i)=>n-result.position[i]))>10,'the player must actually move');
    assert.equal(result.steadyMissingFrames,0,`${result.level}: circling must not hold displayed frames after the first lap`);
    assert.ok(result.steadyActivations<=3,`${result.level}: camera turns must reuse scenery buffers`);
    assert.ok(result.stream.residentVertices<result.stream.totalVertices*.8,'streaming still avoids keeping the whole level resident');
    await page.screenshot({path:resolve(output,`${result.level}.png`)});
    console.log(JSON.stringify({level:result.level,steadyFrames:result.steadyFrames,missing:result.steadyMissingFrames,activations:result.steadyActivations,cpuP95:result.cpuP95,stream:result.stream}));
    await page.close();
  }
  assert.deepEqual(report.errors,[]);
} finally {
  await writeFile(resolve(output,'report.json'),JSON.stringify(report,null,2)+'\n');
  await browser?.close();server.kill();console.log(output);
}
