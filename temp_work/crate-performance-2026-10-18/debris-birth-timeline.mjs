import {_electron as electron} from 'playwright';
import {mkdir,readFile,writeFile} from 'node:fs/promises';
import path from 'node:path';
const root='temp_work/crate-performance-2026-10-18',out=path.resolve(root,'debris-birth-timeline');await mkdir(out,{recursive:true});
const seed=JSON.parse(await readFile(root+'/local-storage.json')),save=JSON.parse(await readFile(root+'/saved-scene.json'));
for(const object of save.game.objects)if(/^AdamAnyActor6[1-7]$/.test(object.id)){object.enabled=true;object.health=1;delete object.propDamage;}
let app;const report={errors:[]};
try{
  app=await electron.launch({args:['.','--ozone-platform=wayland',`--user-data-dir=${out}/profile`,'--mute-audio'],cwd:process.cwd(),env:{...process.env,TMPDIR:root+'/scratch',REDCAT_VSYNC:'0'}});
  const page=await app.firstWindow();page.on('pageerror',error=>report.errors.push(error.stack));await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(storage=>{localStorage.clear();for(const [key,value] of Object.entries(storage))localStorage.setItem(key,value);},seed.storage);
  await page.goto('redcat://game/index.html?skipIntro');await page.waitForFunction(()=>window.__redcat?.mode==='menu');
  await page.evaluate(async save=>{await window.__redcat.startLevel(3,save);},save);await page.waitForTimeout(2000);
  const cdp=await page.context().newCDPSession(page);
  await cdp.send('Profiler.enable');await cdp.send('Profiler.setSamplingInterval',{interval:250});await cdp.send('Profiler.start');
  await cdp.send('Tracing.start',{transferMode:'ReturnAsStream',categories:'v8,v8.execute,devtools.timeline,blink.user_timing,disabled-by-default-v8.gc,disabled-by-default-v8.compile,disabled-by-default-devtools.timeline.stack'});
  await page.evaluate(()=>{
    const a=window.__redcat,w=a.world,g=a.gameplay;let row=null,sequence=0;window.timelineRows=[];
    const mark=(name,key,side)=>performance.mark(`rc.${name}.${key}.${side}`);
    const update=w.update;w.update=function(...args){const id=sequence++;row={id,time:performance.now(),gameTime:g.time,partsBefore:w.effects.destructibles.particles.length,functions:{}};window.timelineRows.push(row);mark('update',id,'start');
      try{return update.apply(this,args);}finally{mark('update',id,'end');row.update=performance.now()-row.time;row.parts=w.effects.destructibles.particles.length;row.poolOwned=w.effects.destructibles.renderPool.ownedTotal;}};
    const wrap=(target,key,name)=>{const original=target[key];target[key]=function(...args){if(!row)return original.apply(this,args);const id=row.id,start=performance.now();mark(name,id,'start');try{return original.apply(this,args);}finally{mark(name,id,'end');row.functions[name]=(row.functions[name]||0)+performance.now()-start;}};};
    for(const [target,key,name] of [[g,'update','game'],[w,'syncActorLighting','lighting'],[w.effects,'update','effects'],[w.effects.destructibles,'update','destructibles'],[w.effects.destructibles.renderPool,'create','poolCreate'],[w,'render','render']])wrap(target,key,name);
    performance.mark('rc.trace.ready');
  });
  await page.waitForTimeout(500);await page.evaluate(()=>performance.mark('rc.shooting.start'));await page.keyboard.down('Control');await page.waitForTimeout(6500);await page.keyboard.up('Control');
  report.rows=await page.evaluate(()=>{performance.mark('rc.shooting.end');return window.timelineRows;});
  const traceDone=new Promise(resolve=>cdp.once('Tracing.tracingComplete',resolve));await cdp.send('Tracing.end');const complete=await traceDone;const chunks=[];
  while(true){const result=await cdp.send('IO.read',{handle:complete.stream});chunks.push(result.base64Encoded?Buffer.from(result.data,'base64').toString():result.data);if(result.eof)break;}await cdp.send('IO.close',{handle:complete.stream});
  await writeFile(out+'/trace.json',chunks.join(''));
  const {profile}=await cdp.send('Profiler.stop');await writeFile(out+'/cpu-profile.json',JSON.stringify(profile));
  report.summary={frames:report.rows.length,birth:report.rows.find(row=>row.parts>row.partsBefore),slow:report.rows.filter(row=>row.update>5).sort((a,b)=>b.update-a.update).slice(0,30)};
  console.log(JSON.stringify(report.summary,null,2));
}finally{await writeFile(out+'/report.json',JSON.stringify(report,null,2)+'\n');await app?.close();}
