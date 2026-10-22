import {_electron as electron} from 'playwright';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

const root='temp_work/fps-uncap-2026-10-18',backend=process.argv[2]||'wayland',sync=process.argv[3]==='sync',label=backend+'-'+(sync?'sync':'uncapped')+(process.argv[4]?'-'+process.argv[4]:''),out=path.resolve(root,label);
await mkdir(out,{recursive:true});await mkdir(root+'/scratch',{recursive:true});let app;
const report={backend,sync,errors:[],consoleErrors:[]};
try {
  app=await electron.launch({args:['.',`--ozone-platform=${backend}`,`--user-data-dir=${out}/profile`,'--mute-audio'],cwd:process.cwd(),env:{...process.env,TMPDIR:root+'/scratch',REDCAT_VSYNC:sync?'1':'0'},timeout:30000});
  report.desktop=await app.evaluate(({app,screen})=>({limitDisabled:app.commandLine.hasSwitch('disable-frame-rate-limit'),angle:app.commandLine.getSwitchValue('use-angle'),displayHz:screen.getPrimaryDisplay().displayFrequency,gpu:app.getGPUFeatureStatus(),versions:process.versions}));
  await app.context().addInitScript(()=>{
    localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,touchControls:'on',resolution:'800x600',showFps:true}));
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  });
  const page=await app.firstWindow();page.on('pageerror',error=>report.errors.push(error.stack));page.on('console',event=>{if(event.type()==='error')report.consoleErrors.push(event.text());});
  await page.waitForFunction(()=>window.__redcat);
  await page.goto('redcat://game/index.html?skipIntro');await page.waitForFunction(()=>window.__redcat&&window.__redcat.mode==='menu');
  report.menu=await page.evaluate(()=>new Promise(resolve=>{
    const started=performance.now(),times=[];let previous=started;
    const step=now=>{times.push(now-previous);previous=now;if(now-started<1500)requestAnimationFrame(step);else resolve({frames:times.length,seconds:(now-started)/1000,fps:times.length/((now-started)/1000)});};requestAnimationFrame(step);
  }));
  await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(0);
    const w=app.world,g=app.gameplay,h=g.scripts;for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.pendingCutsceneStop=null;h.enemiesFrozen=false;
    for(const object of g.objects)if(['trigger','fairy'].includes(object.kind))object.enabled=false;
    g.damage=()=>{};w.updateCamera(1,true);app.audio.pause();
    window.countFrames=async milliseconds=>{
      let frames=0,draws=0,dtTotal=0,zeroDelta=0,maxDelta=0;const update=w.update,render=w.render;
      w.update=function(dt,...args){frames++;dtTotal+=dt;zeroDelta+=Number(dt===0);maxDelta=Math.max(maxDelta,dt);return update.call(this,dt,...args);};
      w.render=function(...args){draws++;return render.apply(this,args);};
      const started=performance.now(),gameTime=g.time;
      await new Promise(resolve=>setTimeout(resolve,milliseconds));const seconds=(performance.now()-started)/1000;
      w.update=update;w.render=render;
      return {frames,draws,seconds,fps:draws/seconds,simulationSeconds:g.time-gameTime,dtTotal,zeroDelta,maxDelta,position:[...w.player.position],glError:w.renderer.getContext().getError(),fpsLabel:document.getElementById('fps-counter').textContent};
    };
  });
  await page.waitForTimeout(1000);report.game=await page.evaluate(()=>window.countFrames(3000));
  await page.screenshot({path:out+'/forest.png'});
  await page.evaluate(()=>window.__redcat.pause());report.paused=await page.evaluate(()=>window.countFrames(500));
  await page.evaluate(()=>window.__redcat.resume());report.resumed=await page.evaluate(()=>window.countFrames(500));
  assert.equal(report.desktop.limitDisabled,!sync);assert.equal(report.game.glError,0);assert.equal(report.game.zeroDelta,0);
  assert.ok(Math.abs(report.game.simulationSeconds-report.game.seconds)<.12,'simulation follows elapsed time');
  assert.ok(report.paused.draws<=2,'paused world remains cached');assert.equal(report.paused.frames,0);assert.ok(report.resumed.draws>0);
  assert.deepEqual(report.errors,[]);console.log(JSON.stringify(report,null,2));
}finally{await writeFile(out+'/report.json',JSON.stringify(report,null,2)+'\n');await app?.close();}
