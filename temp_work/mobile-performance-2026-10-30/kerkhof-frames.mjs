// Renders fixed Het Kerkhof views (no cutscene, frozen enemies) on a phone profile and
// saves canvas PNGs, for pixel comparison between builds. Usage: kerkhof-frames.mjs <dir> [projectile]
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdirSync,writeFileSync} from 'node:fs';
const dir=process.argv[2];mkdirSync(dir,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4535'},stdio:['ignore','pipe','inherit']});
await new Promise(r=>server.stdout.once('data',r));
const browser=await chromium.launch({executablePath:process.env.CHROME_PATH,headless:true,args:['--enable-unsafe-swiftshader','--autoplay-policy=no-user-gesture-required']});
const context=await browser.newContext({viewport:{width:800,height:360},deviceScaleFactor:2,isMobile:true,hasTouch:true});
const page=await context.newPage(),errors=[];page.on('pageerror',e=>errors.push(e.message));page.on('console',m=>{if(m.type()==='error')errors.push(m.text());});
await page.addInitScript(()=>{let seed=12345;Math.random=()=>{seed=seed+0x6D2B79F5|0;let t=Math.imul(seed^seed>>>15,1|seed);t=t+Math.imul(t^t>>>7,61|t)^t;return ((t^t>>>14)>>>0)/4294967296;};localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false}));});
await page.goto('http://127.0.0.1:4535/?skipIntro');await page.waitForFunction(()=>window.__redcat?.originalMenu);
await page.evaluate(()=>window.__redcat.startLevel(2));await page.waitForFunction(()=>window.__redcat.mode==='playing',null,{timeout:120000});
const stopsCount=await page.evaluate(()=>{const a=window.__redcat,w=a.world,g=a.gameplay,h=g.scripts;a.renderQuality.updateSettings=()=>false;for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=true;for(const o of g.objects)if(o.kind==='trigger')o.enabled=false;
  const e=g.objects.filter(o=>o.kind==='enemy'&&o.enabled);window.__stops=[[...w.player.position],...e.filter((_,i)=>i%Math.max(1,Math.floor(e.length/9))===0).map(o=>[...o.position])].slice(0,10);
  const update=w.update.bind(w);window.__left=0;window.__total=0;w.update=(_d,i)=>{g.state.health=5;const r=update(1/60,{...i,forward:0,right:0,turn:0});window.__total++;if(--window.__left===0)a.pause();return r;};a.pause();return window.__stops.length;});
// A fixed number of fixed updates per stop gives the same simulation in every build.
for(let i=0;i<stopsCount;i++){
  await page.evaluate(i=>{const a=window.__redcat,w=a.world,q=window.__stops[i];w.player.position=[...q];w.player.lastSafe=[...q];w.player.resetVelocity();w.yaw=i*.7;w.followCamera.cut=true;window.__left=60;a.resume();},i);
  await page.waitForFunction(()=>window.__left<=0&&window.__redcat.mode==='paused',null,{timeout:60000});
  await page.waitForTimeout(1200);
  const data=await page.evaluate(async()=>{const w=window.__redcat.world;await new Promise(requestAnimationFrame);w.render();return w.renderer.domElement.toDataURL('image/png');});
  writeFileSync(`${dir}/stop-${i}.png`,Buffer.from(data.split(',')[1],'base64'));
}
console.log('frames',stopsCount,'errors',JSON.stringify(errors));
await browser.close();server.kill();
