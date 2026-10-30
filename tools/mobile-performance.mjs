#!/usr/bin/env node
// Repeatable browser benchmark of Het Kerkhof on an emulated phone. The real
// frame loop runs with a fixed 1/60 s update and a scripted walk past the
// level's enemies. Reports main-thread time per frame, frame rate, GPU drain,
// draw calls, uploads, allocation and loading. A software GPU makes the GPU
// numbers a relative measure of fill work between builds, not a phone's FPS.
//
//   node tools/mobile-performance.mjs --out report.json [--profile landscape]
//     [--level 2] [--throttle 4] [--frames 600] [--url http://127.0.0.1:4531/]
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {readFileSync} from 'node:fs';
import {writeFile} from 'node:fs/promises';
import {SourceMap} from 'node:module';

const option=(name,fallback)=>{const index=process.argv.indexOf('--'+name);return index<0?fallback:process.argv[index+1];};
const profiles={
  landscape:{viewport:{width:852,height:393},deviceScaleFactor:3,isMobile:true,hasTouch:true,throttle:4},
  budget:{viewport:{width:800,height:360},deviceScaleFactor:2,isMobile:true,hasTouch:true,throttle:6},
};
const name=option('profile','landscape'),{throttle:profileThrottle,...device}=profiles[name];
const throttle=Number(option('throttle',profileThrottle)),frames=Number(option('frames','600')),level=Number(option('level','2'));
const port=4531;
let url=option('url',''),server=null;
if(!url){
  server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:String(port)},stdio:['ignore','pipe','inherit']});
  await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
  url=`http://127.0.0.1:${port}/`;
}
const statistics=values=>{
  const sorted=[...values].sort((a,b)=>a-b),count=sorted.length,round=value=>Math.round(value*100)/100;
  return {count,mean:round(sorted.reduce((sum,value)=>sum+value,0)/Math.max(1,count)),p50:round(sorted[Math.floor(count*.5)]??0),p95:round(sorted[Math.floor(count*.95)]??0),max:round(sorted.at(-1)??0)};
};
const browser=await chromium.launch({executablePath:process.env.CHROME_PATH||undefined,headless:true,
  args:['--autoplay-policy=no-user-gesture-required','--enable-unsafe-swiftshader','--enable-precise-memory-info']});

async function open(){
  const context=await browser.newContext(device),page=await context.newPage(),errors=[];
  page.on('pageerror',error=>errors.push(error.message));
  await page.addInitScript(()=>{
    performance.setResourceTimingBufferSize(20000);
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
    if(!localStorage.getItem('redcat.settings.v1'))localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false}));
    // Time every animation-frame callback of the game's own loop.
    const nativeRaf=window.requestAnimationFrame.bind(window),perf=window.__perf={callback:[],stamps:[],record:false,updated:false};
    window.requestAnimationFrame=callback=>nativeRaf(now=>{
      perf.updated=false;const start=performance.now();callback(now);
      if(perf.record&&perf.updated){perf.callback.push(performance.now()-start);perf.stamps.push(start);}
    });
    const counts=window.__gl={bytes:0,calls:0,enabled:false},prototype=WebGL2RenderingContext.prototype;
    for(const method of ['bufferSubData','bufferData','texSubImage2D','texImage2D','drawElements','drawArrays','drawElementsInstanced']){
      const original=prototype[method];
      prototype[method]=function(...args){
        if(counts.enabled){counts.calls++;if(method.startsWith('buffer')){const data=args.find(arg=>ArrayBuffer.isView(arg));if(data)counts.bytes+=data.byteLength;}}
        return original.apply(this,args);
      };
    }
  });
  const started=Date.now();
  await page.goto(url+'?skipIntro');
  await page.waitForFunction(()=>window.__redcat?.mode==='menu'||window.__redcat?.originalMenu,null,{timeout:120000});
  await page.evaluate(level=>window.__redcat.startLevel(level),level);
  await page.waitForFunction(()=>window.__redcat.mode==='playing',null,{timeout:300000});
  const loadMs=Date.now()-started;
  // Scripted walk: no cutscenes or level triggers, no damage, a fixed update
  // step, and a teleport past a fixed list of enemies every 90 updates.
  await page.evaluate(()=>{
    const app=window.__redcat,world=app.world,game=app.gameplay,host=game.scripts,perf=window.__perf;
    // Automatic quality reacts to the slow software GPU; hold it still so
    // builds are compared at their own starting resolution.
    app.renderQuality.updateSettings=()=>false;
    for(const player of host.players.values())player.stop();host.cutscene=false;host.camera=null;
    for(const object of game.objects)if(object.kind==='trigger')object.enabled=false;
    const enemies=game.objects.filter(object=>object.kind==='enemy'&&object.enabled);
    const stops=[[...world.player.position],...enemies.filter((_,index)=>index%Math.max(1,Math.floor(enemies.length/9))===0).map(object=>[...object.position])].slice(0,10);
    const update=world.update.bind(world);let count=0,stop=0;
    perf.stops=stops.length;perf.enemies=enemies.length;
    const render=world.render.bind(world);perf.sections={update:[],render:[]};
    world.render=renderScene=>{const start=performance.now();render(renderScene);if(perf.record)perf.sections.render.push(performance.now()-start);};
    world.update=(_dt,input)=>{const updateStart=performance.now();try{
      perf.updated=true;game.state.health=Math.max(game.state.health,5);
      if(count++%90===0){const position=stops[stop++%stops.length];world.player.position=[...position];world.player.lastSafe=[...position];world.player.resetVelocity();world.followCamera.cut=true;}
      return update(1/60,{...input,forward:1,sprint:true});
      }finally{if(perf.record)perf.sections.update.push(performance.now()-updateStart);}
    };
  });
  return {context,page,errors,loadMs};
}
const waitFrames=(page,count)=>page.waitForFunction(count=>window.__perf.callback.length>=count,count,{timeout:900000,polling:500});
const startRecording=page=>page.evaluate(()=>{const perf=window.__perf;perf.callback=[];perf.stamps=[];perf.sections.update=[];perf.sections.render=[];perf.record=true;});

// Main-thread pass, with throttling, plus a CPU and allocation profile.
const {context,page,errors,loadMs}=await open();
const load=await page.evaluate(()=>{const entries=performance.getEntriesByType('resource');return {requests:entries.length,megabytes:Math.round(entries.reduce((sum,entry)=>sum+(entry.decodedBodySize||0),0)/1048576*10)/10};});
const client=await context.newCDPSession(page);
await startRecording(page);await waitFrames(page,120);
await client.send('Emulation.setCPUThrottlingRate',{rate:throttle});
await page.evaluate(()=>{window.__gl.enabled=true;window.__gl.bytes=0;window.__gl.calls=0;});
await startRecording(page);await waitFrames(page,frames);
const measured=await page.evaluate(()=>{
  const perf=window.__perf,app=window.__redcat,info=app.world.renderer.info,gl=app.world.renderer.getContext(),count=perf.callback.length,counts=window.__gl;
  perf.record=false;
  const gaps=perf.stamps.slice(1).map((value,index)=>value-perf.stamps[index]);
  return {callback:perf.callback,gaps,sections:perf.sections,fps:(count-1)/((perf.stamps[count-1]-perf.stamps[0])/1000),canvas:[gl.drawingBufferWidth,gl.drawingBufferHeight],
    samples:app.settings.msaa,bufferKiBPerFrame:Math.round(counts.bytes/count/1024*10)/10,glDrawsAndUploadsPerFrame:Math.round(counts.calls/count),
    draws:info.render.calls,triangles:info.render.triangles,programs:info.programs?.length,stops:perf.stops,enemies:perf.enemies};
});
await client.send('Profiler.enable');await client.send('Profiler.setSamplingInterval',{interval:500});await client.send('Profiler.start');
await client.send('HeapProfiler.enable');await client.send('HeapProfiler.startSampling',{samplingInterval:8192,includeObjectsCollectedByMajorGC:true,includeObjectsCollectedByMinorGC:true});
await startRecording(page);await waitFrames(page,Math.min(frames,300));
const profileFrames=await page.evaluate(()=>{window.__perf.record=false;return window.__perf.callback.length;});
const {profile}=await client.send('Profiler.stop'),{profile:heap}=await client.send('HeapProfiler.stopSampling');
await client.send('Emulation.setCPUThrottlingRate',{rate:1});
const self=new Map(),nodes=new Map(profile.nodes.map(node=>[node.id,node]));
const sourceMap=new SourceMap(JSON.parse(readFileSync('src/game.bundle.js.map','utf8')));
const label=frame=>{
  const entry=frame.url.includes('game.bundle.js')?sourceMap.findEntry(frame.lineNumber,frame.columnNumber):null;
  if(!entry?.originalSource)return `${frame.functionName||'(anonymous)'} ${frame.url.split('/').pop().split('?')[0]}`;
  return `${entry.name||frame.functionName||'(anonymous)'} ${entry.originalSource.split('/').slice(-2).join('/')}:${entry.originalLine+1}`;
};
profile.samples.forEach((id,index)=>{const key=label(nodes.get(id).callFrame);self.set(key,(self.get(key)??0)+(profile.timeDeltas[index]||0));});
const totals={};profile.samples.forEach((id,index)=>{const key=nodes.get(id).callFrame.functionName;const group=['(idle)','(program)','(garbage collector)'].includes(key)?key:'script';totals[group]=(totals[group]??0)+(profile.timeDeltas[index]||0);});
const totalTime=Object.values(totals).reduce((a,b)=>a+b,0),threadPercent=Object.fromEntries(Object.entries(totals).map(([key,us])=>[key,Math.round(us/totalTime*1000)/10]));
const skip=/^\((idle|program)\)/,busy=[...self].filter(([key])=>!skip.test(key)).reduce((sum,[,us])=>sum+us,0);
const topSelf=[...self].filter(([key])=>!skip.test(key)).sort((a,b)=>b[1]-a[1]).slice(0,40).map(([key,us])=>({name:key,percent:Math.round(us/busy*1000)/10}));
// Inclusive time: each function counted once per stack.
const selfTime=new Map();profile.samples.forEach((id,index)=>selfTime.set(id,(selfTime.get(id)??0)+(profile.timeDeltas[index]||0)));
const inclusive=new Map();
const climb=(id,active)=>{const node=nodes.get(id),key=label(node.callFrame);let total=selfTime.get(id)??0;const fresh=!active.has(key);if(fresh)active.add(key);for(const child of node.children??[])total+=climb(child,active);if(fresh){active.delete(key);inclusive.set(key,(inclusive.get(key)??0)+total);}return total;};
climb(profile.nodes[0].id,new Set());
const topInclusive=[...inclusive].filter(([key])=>!/^\((root|idle|program)\)/.test(key)).sort((a,b)=>b[1]-a[1]).slice(0,45).map(([key,us])=>({name:key,msPerFrame:Math.round(us/1000/profileFrames*100)/100}));
const allocated=new Map();
const walk=(node,caller='')=>{const own=node.callFrame.url?label(node.callFrame):'',key=own||`${node.callFrame.functionName} <- ${caller}`;allocated.set(key,(allocated.get(key)??0)+node.selfSize);node.children?.forEach(child=>walk(child,own||caller));};walk(heap.head);
const totalAllocated=[...allocated.values()].reduce((a,b)=>a+b,0);
const topAllocators=[...allocated].sort((a,b)=>b[1]-a[1]).slice(0,20).map(([key,bytes])=>({name:key,kibPerFrame:Math.round(bytes/1024/profileFrames*10)/10}));
await context.close();

// GPU pass, without throttling: finish the (software) GPU work of each frame.
const gpu=await open();
const drain=await gpu.page.evaluate(async()=>{
  const world=window.__redcat.world,gl=world.renderer.getContext(),pixel=new Uint8Array(4),render=world.render.bind(world),times=[];
  let renderedAt=0;
  world.render=renderScene=>{const start=performance.now();render(renderScene);gl.readPixels(0,0,1,1,gl.RGBA,gl.UNSIGNED_BYTE,pixel);renderedAt=performance.now()-start;times.push(renderedAt);};
  await new Promise(resolve=>{const check=()=>times.length>=150?resolve():setTimeout(check,100);check();});
  world.render=render;
  return times.slice(30);
});
await gpu.context.close();

await browser.close();server?.kill();
const {callback,gaps,sections,...rest}=measured;
const report={profile:name,throttle,level,loadMs,load,errors:[...errors,...gpu.errors],frameMs:statistics(callback),intervalMs:statistics(gaps),timeInLongFrames:{over50:Math.round(gaps.filter(g=>g>50).reduce((a,b)=>a+b,0)/gaps.reduce((a,b)=>a+b,0)*100),over100:Math.round(gaps.filter(g=>g>100).reduce((a,b)=>a+b,0)/gaps.reduce((a,b)=>a+b,0)*100),count100:gaps.filter(g=>g>100).length},updateMs:statistics(sections.update),renderMs:statistics(sections.render),...rest,
  fps:Math.round(rest.fps*10)/10,threadPercent,gpuDrainMs:statistics(drain),allocationKiBPerFrame:Math.round(totalAllocated/1024/profileFrames*10)/10,topSelf,topInclusive,topAllocators};
const out=option('out','');
if(out)await writeFile(out,JSON.stringify(report,null,1));
const {topSelf:_a,topAllocators:_b,topInclusive:_c,...summary}=report;
console.log(JSON.stringify(summary));
