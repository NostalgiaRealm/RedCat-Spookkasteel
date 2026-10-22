import {chromium} from 'playwright';import {spawn} from 'node:child_process';import {mkdir,readFile,writeFile,access} from 'node:fs/promises';import path from 'node:path';
const root='temp_work/cpu-deeper-2026-10-18';await mkdir(root+'/scratch',{recursive:true});const report={phases:[],errors:[]};let browser;
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'0'},stdio:['ignore','pipe','inherit']});
try{
 const url=await new Promise(resolve=>server.stdout.once('data',d=>resolve(String(d).trim().split(' ').at(-1))));
 browser=await chromium.launch({executablePath:'/usr/bin/google-chrome',headless:true,env:{...process.env,TMPDIR:root+'/scratch'},args:['--use-angle=gl','--mute-audio','--autoplay-policy=no-user-gesture-required']});
 const context=await browser.newContext({viewport:{width:960,height:540}});
 await context.route('**/src/**',async route=>{const pathname=new URL(route.request().url()).pathname;if(!pathname.endsWith('.js'))return route.continue();const file=path.resolve(root+'/before',pathname.slice(1));try{await access(file);await route.fulfill({status:200,contentType:'text/javascript',body:await readFile(file)});}catch{await route.continue();}});
 const page=await context.newPage();page.on('pageerror',e=>report.errors.push(e.stack));
 await page.addInitScript(()=>{localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:.6,touchControls:'on',resolution:'960x540'}));localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));});
 await page.goto(url+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);await page.evaluate(()=>window.__redcat.startLevel(3));
 report.gpu=await page.evaluate(()=>{const a=window.__redcat,h=a.gameplay.scripts;for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.pendingCutsceneStop=null;h.enemiesFrozen=false;for(const o of a.gameplay.objects)if(['trigger','fairy'].includes(o.kind))o.enabled=false;a.gameplay.damage=()=>{};a.audio.stopDialogue();const gl=a.world.renderer.getContext(),debug=gl.getExtension('WEBGL_debug_renderer_info');return {renderer:debug&&gl.getParameter(debug.UNMASKED_RENDERER_WEBGL),sounds:a.audio.snapshot().map(s=>({sound:s.sound,spatial:s.spatial,loop:s.loop,volume:s.volume,paused:s.paused,buffered:a.audio.keyed.get(s.key)?.element.nativeBuffered||false}))};});
 const system=await browser.newBrowserCDPSession(),cdp=await context.newCDPSession(page);await cdp.send('Performance.enable');
 await page.waitForTimeout(2000);
 for(const audio of [true,false]){
  if(!audio)await page.evaluate(()=>window.__redcat.audio.pause());
  const begin=await system.send('SystemInfo.getProcessInfo'),start=await cdp.send('Performance.getMetrics'),t=performance.now();
  await page.waitForTimeout(8000);
  const end=await system.send('SystemInfo.getProcessInfo'),stop=await cdp.send('Performance.getMetrics'),seconds=(performance.now()-t)/1000;
  report.phases.push({audio,seconds,processes:end.processInfo.map(p=>({...p,cpuSeconds:p.cpuTime-(begin.processInfo.find(b=>b.id===p.id)?.cpuTime??p.cpuTime)})),metrics:stop.metrics.filter(m=>['TaskDuration','ScriptDuration','LayoutDuration','RecalcStyleDuration'].includes(m.name)).map(m=>({name:m.name,seconds:m.value-(start.metrics.find(v=>v.name===m.name)?.value??m.value)}))});
 }
 console.log(JSON.stringify(report,null,2));
}finally{await writeFile(root+'/live-process-profile.json',JSON.stringify(report,null,2)+'\n');await browser?.close();server.kill();}
