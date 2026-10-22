import {_electron as electron} from 'playwright';
import {mkdir,readFile,writeFile} from 'node:fs/promises';
import path from 'node:path';
const root='temp_work/crate-performance-2026-10-18',out=path.resolve(root,'current-first-birth-breakdown');await mkdir(out,{recursive:true});
const seed=JSON.parse(await readFile(root+'/local-storage.json')),save=JSON.parse(await readFile(root+'/saved-scene.json'));
for(const object of save.game.objects)if(/^AdamAnyActor6[1-7]$/.test(object.id)){object.enabled=true;object.health=1;delete object.propDamage;}
let app;const report={errors:[]};
try{
  app=await electron.launch({args:['.','--ozone-platform=wayland',`--user-data-dir=${out}/profile`,'--mute-audio'],cwd:process.cwd(),env:{...process.env,TMPDIR:root+'/scratch',REDCAT_VSYNC:'0'}});
  const page=await app.firstWindow();page.on('pageerror',error=>report.errors.push(error.stack));await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(storage=>{localStorage.clear();for(const [key,value] of Object.entries(storage))localStorage.setItem(key,value);},seed.storage);
  await page.goto('redcat://game/index.html?skipIntro');await page.waitForFunction(()=>window.__redcat?.mode==='menu');
  await page.evaluate(async save=>{await window.__redcat.startLevel(3,save);window.__redcat.pause();},save);
  const cdp=await page.context().newCDPSession(page);await cdp.send('Profiler.enable');await cdp.send('Profiler.setSamplingInterval',{interval:100});await cdp.send('Profiler.start');
  report.frames=await page.evaluate(()=>{
    const a=window.__redcat,w=a.world,g=a.gameplay,gl=w.renderer.getContext(),frames=[];let frame=null;
    const wrap=(target,key,label)=>{const original=target[key];target[key]=function(...args){const start=performance.now();try{return original.apply(this,args);}finally{if(frame){const value=frame.calls[label]??={count:0,time:0,bytes:0};value.count++;value.time+=performance.now()-start;if(label==='gl.bufferData')value.bytes+=typeof args[1]==='number'?args[1]:args[1]?.byteLength||0;}}};};
    for(const name of ['createProgram','compileShader','linkProgram','bufferData','bufferSubData','texImage2D','texSubImage2D','drawElements','drawElementsInstanced','drawArraysInstanced','getProgramParameter','getUniformLocation','useProgram'])wrap(gl,name,'gl.'+name);
    for(const [target,name,label] of [[w,'syncActorLighting','lighting'],[w.effects,'update','effects'],[w.effects.destructibles,'update','destructibles'],[w.effects.destructibles.renderPool,'create','pool.create'],[w.effects.destructibles.renderPool,'acquire','pool.acquire'],[g,'update','game'],[g,'destroy','game.destroy'],[g,'emit','game.emit'],[g,'runEvent','game.runEvent'],[g.scripts,'enemyDefeated','music.defeated'],[g.scripts,'updateBossMusic','music.update'],[g.scripts,'dispatch','scripts.dispatch'],[a.audio,'play','audio.play'],[a.audio,'attachStereo','audio.stereo'],[a.audio,'applyGain','audio.gain'],[g,'updateProjectiles','game.projectiles'],[w,'syncActors','actors'],[w.collider,'trace','collider.trace'],[w.collider,'traceModelIndices','collider.candidates'],[w.actorFloorLighting,'sample','floor.sample'],[w.actorWorldLighting,'sample','Sun.sample'],[w.actorLightVisibility,'visible','Sun.visible'],[w.actorLightVisibility,'blocked','Sun.blocked']])wrap(target,name,label);
    for(const o of g.objects)if(/^AdamAnyActor6[1-7]$/.test(o.id))for(const key of ['effectPosition','effectBounds','effectScale'])wrap(o,key,'box.'+key);
    for(let index=0;index<240;index++) {
      frame={index,particlesBefore:w.effects.destructibles.particles.length,programsBefore:w.renderer.info.programs.length,calls:{}};
      const start=performance.now();w.update(.005,{attack:true});frame.update=performance.now()-start;
      const renderStart=performance.now();w.render();frame.render=performance.now()-renderStart;frame.particles=w.effects.destructibles.particles.length;frame.programs=w.renderer.info.programs.length;
      frames.push(frame);
    }
    return frames;
  });
  await writeFile(out+'/cpu-profile.json',JSON.stringify((await cdp.send('Profiler.stop')).profile));
  console.log(JSON.stringify(report.frames.filter(frame=>frame.particles>frame.particlesBefore||frame.programs>frame.programsBefore),null,2));
}finally{await writeFile(out+'/report.json',JSON.stringify(report,null,2)+'\n');await app?.close();}
