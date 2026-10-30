// Chrome trace of Het Kerkhof at the budget profile: what the renderer main thread does per frame.
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4536'},stdio:['ignore','pipe','inherit']});
await new Promise(r=>server.stdout.once('data',r));
const browser=await chromium.launch({executablePath:process.env.CHROME_PATH,headless:true,args:['--enable-unsafe-swiftshader','--autoplay-policy=no-user-gesture-required']});
const context=await browser.newContext({viewport:{width:800,height:360},deviceScaleFactor:2,isMobile:true,hasTouch:true});
const page=await context.newPage();
await page.addInitScript(()=>{localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false}));});
await page.goto('http://127.0.0.1:4536/?skipIntro');await page.waitForFunction(()=>window.__redcat?.originalMenu);
await page.evaluate(()=>window.__redcat.startLevel(2));await page.waitForFunction(()=>window.__redcat.mode==='playing',null,{timeout:120000});
await page.evaluate(()=>{const a=window.__redcat,w=a.world,g=a.gameplay,h=g.scripts;a.renderQuality.updateSettings=()=>false;for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;for(const o of g.objects)if(o.kind==='trigger')o.enabled=false;const u=w.update.bind(w);w.update=(d,i)=>{g.state.health=Math.max(g.state.health,5);window.__updates=(window.__updates||0)+1;return u(1/60,{...i,forward:1});};});
await page.waitForTimeout(4000);
const client=await context.newCDPSession(page);
await client.send('Emulation.setCPUThrottlingRate',{rate:6});
const events=[];client.on('Tracing.dataCollected',e=>events.push(...e.value));
await client.send('Tracing.start',{transferMode:'ReportEvents',traceConfig:{includedCategories:['devtools.timeline','disabled-by-default-devtools.timeline','toplevel','gpu','cc','blink','v8']}});
const u0=await page.evaluate(()=>window.__updates);
await page.waitForTimeout(8000);
const u1=await page.evaluate(()=>window.__updates);
const done=new Promise(r=>client.once('Tracing.tracingComplete',r));await client.send('Tracing.end');await done;
const names=new Map();for(const e of events)if(e.ph==='M'&&e.name==='thread_name')names.set(e.pid+':'+e.tid,e.args.name);
const main=[...names].filter(([,n])=>n==='CrRendererMain').map(([k])=>k);
const frames=u1-u0;console.log('updates',frames,'fps',frames/8);
for(const threadName of ['CrRendererMain','VizCompositorThread','Compositor','CrGpuMain']){
  const keys=[...names].filter(([,n])=>n===threadName).map(([k])=>k);
  const totals=new Map();
  for(const e of events)if(e.ph==='X'&&e.dur&&keys.includes(e.pid+':'+e.tid))totals.set(e.name,(totals.get(e.name)||0)+e.dur);
  console.log('--',threadName,'(ms per frame)');
  for(const [n,d] of [...totals].sort((a,b)=>b[1]-a[1]).slice(0,22))console.log((d/1000/frames).toFixed(2),n);
}
await browser.close();server.kill();
