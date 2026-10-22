import {_electron as electron} from 'playwright';
import {readFile,writeFile,mkdir} from 'node:fs/promises';
import path from 'node:path';
const root='temp_work/crate-performance-2026-10-18',label=process.argv[2]||'baseline',out=path.resolve(root,label);
await mkdir(out,{recursive:true});let app;
const seed=JSON.parse(await readFile(root+'/local-storage.json')),save=JSON.parse(await readFile(root+'/saved-scene.json'));
const baselineSource=process.argv.includes('snapshot'),clean=process.argv.includes('clean');
// The user's latest save is immediately after this scripted stack collapsed.
// Reset only those seven crates in this isolated benchmark fixture.
for(const object of save.game.objects)if(/^AdamAnyActor6[1-7]$/.test(object.id)){object.enabled=true;object.health=1;delete object.propDamage;}
const report={label,errors:[],consoleErrors:[]};
try{
 app=await electron.launch({args:['.','--ozone-platform=wayland',`--user-data-dir=${out}/profile`,'--mute-audio'],cwd:process.cwd(),env:{...process.env,TMPDIR:root+'/scratch',REDCAT_VSYNC:'0'},timeout:30000});
 report.desktop=await app.evaluate(async({app,screen})=>({display:screen.getPrimaryDisplay(),gpu:await app.getGPUInfo('basic'),uncapped:app.commandLine.hasSwitch('disable-frame-rate-limit')}));
 const page=await app.firstWindow();page.on('pageerror',e=>report.errors.push(e.stack));page.on('console',e=>{if(e.type()==='error')report.consoleErrors.push(e.text());});await page.waitForFunction(()=>window.__redcat);
 if(baselineSource){const html=await readFile('index.html','utf8');await writeFile(root+'/before-entry.html',html.replace('<head>','<head><base href="redcat://game/">').replace('src="src/main.js"','src="temp_work/crate-performance-2026-10-18/before/src/main.js"'));}
 await page.evaluate(storage=>{localStorage.clear();for(const [k,v]of Object.entries(storage))localStorage.setItem(k,v);},seed.storage);
 await page.goto(baselineSource?'redcat://game/'+root+'/before-entry.html?skipIntro':'redcat://game/index.html?skipIntro');await page.waitForFunction(()=>window.__redcat&&window.__redcat.mode==='menu');
 await page.evaluate(async save=>{await window.__redcat.startLevel(3,save);},save);await page.waitForFunction(()=>window.__redcat.mode==='playing');await page.waitForTimeout(2000);
 report.source={snapshot:baselineSource,url:page.url()};
 report.scene=await page.evaluate(()=>{const a=window.__redcat,w=a.world,g=a.gameplay,gl=w.renderer.getContext(),pool=w.effects.destructibles.renderPool;return{pool:{owned:pool?.ownedTotal,free:[...pool?.free||[]].map(([p,entries])=>[p.userData.template.data.source,entries.length])},settings:a.settings,viewport:[innerWidth,innerHeight],buffer:[gl.drawingBufferWidth,gl.drawingBufferHeight],samples:gl.getParameter(gl.SAMPLES),camera:w.camera.position.toArray(),player:w.player.position,position:g.playerPosition,objects:g.objects.filter(o=>/^AdamAnyActor6[1-7]$/.test(o.id)).map(o=>({id:o.id,enabled:o.enabled,visible:o.visible,health:o.health,position:g.objectPosition(o)})),effects:Object.keys(w.effects)};});
 await page.screenshot({path:out+'/before.png'});
 const cdp=await page.context().newCDPSession(page);if(!clean){await cdp.send('Profiler.enable');await cdp.send('Profiler.setSamplingInterval',{interval:500});await cdp.send('Profiler.start');}
 await page.evaluate(options=>{
  const a=window.__redcat,w=a.world,g=a.gameplay;window.samples=[];window.phase='idle';let row;
  if(options.plain){let previous=performance.now();const sample=()=>{const t=performance.now();window.samples.push({t,interval:t-previous,phase:window.phase,particles:w.effects.destructibles.particles.length,explosions:g.explosions.length,draws:w.renderer.info.render.calls});previous=t;requestAnimationFrame(sample);};requestAnimationFrame(sample);return;}
  const wrap=(object,key,label)=>{const f=object[key];object[key]=function(...args){const t=performance.now();try{return f.apply(this,args);}finally{if(row)row[label]=(row[label]||0)+performance.now()-t;}};};
  const update=w.update;w.update=function(...args){const t=performance.now();row={t,phase:window.phase};window.samples.push(row);const r=update.apply(this,args);row.update=performance.now()-t;row.particles=w.effects.destructibles.particles.length;row.explosions=g.explosions.length;row.cells=g.explosionDamage?.length;return r;};
  if(!options.lightweight){wrap(w,'render','render');wrap(g,'update','game');wrap(w.effects,'update','effects');wrap(w.effects.destructibles,'update','debris');wrap(w,'syncActorLighting','lighting');}
  const render=w.render;w.render=function(...args){const result=render.apply(this,args);if(row){row.draws=w.renderer.info.render.calls;row.triangles=w.renderer.info.render.triangles;}return result;};
  if(options.traceGl){const gl=w.renderer.getContext();for(const key of ['compileShader','linkProgram','getUniformLocation','getProgramParameter','bufferData','texImage2D','texSubImage2D']){const fn=gl[key];gl[key]=function(...args){const t=performance.now();try{return fn.apply(this,args);}finally{if(row){row['gl_'+key]=(row['gl_'+key]||0)+performance.now()-t;row['n_'+key]=(row['n_'+key]||0)+1;}}};}}
 },{traceGl:process.argv.includes('tracegl'),lightweight:process.argv.includes('lightweight'),plain:process.argv.includes('plain')});
 await page.waitForTimeout(Number(process.env.REDCAT_BENCH_IDLE_MS)||3000);await page.evaluate(()=>{window.phase='shoot';});await page.keyboard.down('Control');await page.waitForTimeout(10000);await page.keyboard.up('Control');await page.evaluate(()=>{window.phase='tail';});await page.screenshot({path:out+'/after.png'});await page.waitForTimeout(4000);
 if(!clean){const {profile}=await cdp.send('Profiler.stop');await writeFile(out+'/cpu-profile.json',JSON.stringify(profile));}
 report.samples=await page.evaluate(()=>window.samples);report.final=await page.evaluate(()=>{const a=window.__redcat,w=a.world,g=a.gameplay;return{mode:a.mode,glError:w.renderer.getContext().getError(),settings:a.settings,objects:g.objects.filter(o=>/^AdamAnyActor6[1-7]$/.test(o.id)).map(o=>({id:o.id,enabled:o.enabled,visible:o.visible,health:o.health,propDamage:o.propDamage})),particleCount:w.effects.destructibles.particles.length};});
 const stats=values=>{values=values.sort((a,b)=>a-b);return{n:values.length,avg:values.reduce((a,b)=>a+b,0)/values.length,p50:values[Math.floor(values.length*.5)],p95:values[Math.floor(values.length*.95)],p99:values[Math.floor(values.length*.99)],max:values.at(-1)};};
 report.samples.forEach((s,i)=>{if(i&&s.interval===undefined)s.interval=s.t-report.samples[i-1].t;});
 report.summary={};for(const phase of ['idle','shoot','tail','fragments']){const rows=report.samples.filter(s=>phase==='fragments'?s.particles>0:s.phase===phase),times=rows.map(s=>s.interval).filter(v=>v!==undefined);report.summary[phase]={fps:1000/(times.reduce((a,b)=>a+b,0)/times.length),interval:stats(times)};for(const key of ['update','render','game','effects','debris','lighting','draws','particles'])report.summary[phase][key]=stats(rows.map(s=>s[key]||0));}
 report.rolling={};for(const period of [250,1000]){const points=[];for(let i=0,j=0;i<report.samples.length;i++){const row=report.samples[i];while(j<i&&row.t-report.samples[j].t>period)j++;if(row.particles&&row.t-report.samples[0].t>=period)points.push(1000*(i-j+1)/period);}report.rolling[period]=stats(points);}
 console.log(JSON.stringify({scene:report.scene,final:report.final,summary:report.summary,errors:report.errors,consoleErrors:report.consoleErrors},null,2));
}finally{await writeFile(out+'/report.json',JSON.stringify(report,null,2)+'\n');await app?.close();}
