// Counts per update on Het Kerkhof: collision traces by caller, room queries, matrix updates, DOM.
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4538'},stdio:['ignore','pipe','inherit']});
await new Promise(r=>server.stdout.once('data',r));
const browser=await chromium.launch({executablePath:process.env.CHROME_PATH,headless:true,args:['--enable-unsafe-swiftshader','--autoplay-policy=no-user-gesture-required']});
const context=await browser.newContext({viewport:{width:800,height:360},deviceScaleFactor:2,isMobile:true,hasTouch:true});
const page=await context.newPage();
await page.addInitScript(()=>{localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false}));});
await page.goto('http://127.0.0.1:4538/?skipIntro');await page.waitForFunction(()=>window.__redcat?.originalMenu);
await page.evaluate(()=>window.__redcat.startLevel(2));await page.waitForFunction(()=>window.__redcat.mode==='playing',null,{timeout:120000});
const out=await page.evaluate(async()=>{
  const a=window.__redcat,w=a.world,g=a.gameplay,h=g.scripts;a.renderQuality.updateSettings=()=>false;for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;for(const o of g.objects)if(o.kind==='trigger')o.enabled=false;
  const counts={},bump=k=>counts[k]=(counts[k]||0)+1;
  const trace=w.collider.trace.bind(w.collider);
  w.collider.trace=(...args)=>{const stack=new Error().stack.split('\n').slice(2,5).map(l=>l.trim().split(' ')[1]).join('<');bump('trace '+stack);return trace(...args);};
  const u=w.update.bind(w);let n=0;
  w.update=(d,i)=>{g.state.health=5;n++;return u(1/60,{...i,forward:1});};
  await new Promise(r=>setTimeout(r,6000));
  const sections={};
  const list=Object.entries(counts).sort((x,y)=>y[1]-x[1]).slice(0,16).map(([k,v])=>[+(v/n).toFixed(1),k]);
  return {updates:n,list,objects:g.objects.length,kinds:g.objects.reduce((m,o)=>(m[o.kind]=(m[o.kind]||0)+1,m),{}),actorRoots:w.actorRoots?.length,sceneChildren:w.scene.children.length,chunks:w.geometryStream?.chunks?.length};
});
console.log(JSON.stringify(out,null,0));
await browser.close();server.kill();
