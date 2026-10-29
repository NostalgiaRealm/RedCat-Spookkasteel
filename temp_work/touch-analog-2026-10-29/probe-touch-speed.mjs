// Probe (29 October 2026): walk RedCat in the Forest with a real touch drag on
// the on-screen stick, lightly and fully, with and without Lopen, and report
// the ground speed. Isolated Playwright profile; nothing is saved.
import {chromium, devices} from 'playwright';
import {spawn} from 'node:child_process';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4531'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const context=await browser.newContext({...devices['Pixel 7'],viewport:{width:844,height:390},deviceScaleFactor:1});
  await context.addInitScript(()=>{localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,touchControls:'on'}));});
  const page=await context.newPage(),client=await context.newCDPSession(page);
  await page.goto('http://127.0.0.1:4531/?skipIntro');await page.waitForFunction(()=>window.__redcat?.touchControls);
  await page.evaluate(async()=>{const a=window.__redcat;await a.startLevel(0);});
  await page.waitForFunction(()=>window.__redcat.mode==='playing'||window.__redcat.mode==='paused');
  await page.evaluate(()=>{const a=window.__redcat,g=a.gameplay,h=g.scripts;
    for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=true;
    for(const o of g.objects)if(['enemy','trigger'].includes(o.kind))o.enabled=false;if(a.mode!=='playing')a.resume();});
  await page.evaluate(()=>{const a=window.__redcat,t=a.touchControls;window.__home={position:[...a.world.player.position],yaw:a.world.yaw};window.__calls=[];
    for(const name of ['activate','reset','press','cancel','release']){const original=t[name].bind(t);t[name]=(...args)=>{window.__calls.push(name+(args[1]?':'+args[1]:'')+(args[0]?.type?':'+args[0].type:''));return original(...args);};}});
  const box=await page.locator('#touch-move').boundingBox(),cx=box.x+box.width/2,cy=box.y+box.height/2,radius=box.width/2;
  const touch=(type,points)=>client.send('Input.dispatchTouchEvent',{type,touchPoints:points.map(p=>({id:1,...p,radiusX:5,radiusY:5,force:1}))});
  const measure=async(push)=>{
    const start=await page.evaluate(()=>{const w=window.__redcat.world;w.player.position=[...window.__home.position];w.player.lastSafe=[...window.__home.position];w.player.resetVelocity();w.yaw=window.__home.yaw;w.followCamera.cut=true;return [...w.player.position];});
    await touch('touchStart',[{x:cx,y:cy}]);await touch('touchMove',[{x:cx,y:cy-push*radius}]);
    const input=await page.evaluate(()=>window.__redcat.readInput().stick);
    await page.waitForTimeout(1500);
    const end=await page.evaluate(()=>[...window.__redcat.world.player.position]);
    await touch('touchEnd',[{x:cx,y:cy-push*radius}]);await page.waitForTimeout(400);
    return {push,stick:input,distance:+Math.hypot(end[0]-start[0],end[2]-start[2]).toFixed(1)};
  };
  const results={light:await measure(.3),full:await measure(1)};
  const state=()=>page.evaluate(()=>{const b=document.getElementById('touch-walk').getBoundingClientRect(),hit=document.elementFromPoint(b.x+b.width/2,b.y+b.height/2);
    return {mode:window.__redcat.mode,walkInput:window.__redcat.touchControls.readInput().walk,hidden:document.getElementById('touch-walk').hidden,box:[b.x,b.y,b.width,b.height].map(Math.round),hit:hit?.id||hit?.className};});
  results.beforeTap=await state();
  await page.locator('#touch-walk').tap();
  results.afterTap=await state();results.calls=await page.evaluate(()=>window.__calls.slice(-8));
  results.walk=await page.evaluate(()=>window.__redcat.readInput().walk);
  results.lightLopen=await measure(.3);results.fullLopen=await measure(1);
  console.log(JSON.stringify(results));
} finally {await browser?.close();server.kill();}
