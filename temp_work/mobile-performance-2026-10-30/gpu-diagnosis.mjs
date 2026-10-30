// Per-stop GPU and draw diagnosis of Het Kerkhof at the budget phone profile.
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4534'},stdio:['ignore','pipe','inherit']});
await new Promise(r=>server.stdout.once('data',r));
const browser=await chromium.launch({executablePath:process.env.CHROME_PATH,headless:true,args:['--enable-unsafe-swiftshader','--autoplay-policy=no-user-gesture-required']});
const context=await browser.newContext({viewport:{width:800,height:360},deviceScaleFactor:2,isMobile:true,hasTouch:true});
const page=await context.newPage();
await page.addInitScript(()=>{localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false}));});
await page.goto('http://127.0.0.1:4534/?skipIntro');await page.waitForFunction(()=>window.__redcat?.originalMenu);
await page.evaluate(()=>window.__redcat.startLevel(2));await page.waitForFunction(()=>window.__redcat.mode==='playing',null,{timeout:120000});
const out=await page.evaluate(async()=>{
  const app=window.__redcat,world=app.world,game=app.gameplay,host=game.scripts;
  app.renderQuality.updateSettings=()=>false;
  for(const p of host.players.values())p.stop();host.cutscene=false;host.camera=null;
  for(const o of game.objects)if(o.kind==='trigger')o.enabled=false;
  const enemies=game.objects.filter(o=>o.kind==='enemy'&&o.enabled);
  const stops=[[...world.player.position],...enemies.filter((_,i)=>i%Math.max(1,Math.floor(enemies.length/9))===0).map(o=>[...o.position])].slice(0,10);
  const gl=world.renderer.getContext(),px=new Uint8Array(4),render=world.render.bind(world),update=world.update.bind(world);
  let times=[],stop=0,count=0,info=null;
  const programs=world.renderer.info.programs.map(p=>({name:p.name,type:p.type,uses:p.usedTimes}));
  world.update=(_d,input)=>{game.state.health=Math.max(game.state.health,5);if(count++%40===0&&stop<stops.length){const q=stops[stop];world.player.position=[...q];world.player.lastSafe=[...q];world.player.resetVelocity();world.followCamera.cut=true;}return update(1/60,{...input,forward:0});};
  const rows=[];
  world.render=fn=>{const s=performance.now();render(fn);gl.readPixels(0,0,1,1,gl.RGBA,gl.UNSIGNED_BYTE,px);times.push(performance.now()-s);
    if(count%40===39&&times.length>=5){times.sort((a,b)=>a-b);const list={};world.scene.traverse(o=>{if(o.isMesh&&o.visible&&o.layers.mask){const m=o.material;const k=(Array.isArray(m)?m[0]:m)?.type+(((Array.isArray(m)?m[0]:m)?.transparent)?'-T':'');list[k]=(list[k]||0)+1;}});
      rows.push({stop,ms:Math.round(times[times.length>>1]),calls:world.renderer.info.render.calls,tris:world.renderer.info.render.triangles,lights:world.effects?.lights?.length,kinds:list});times=[];stop++;count=stop*40;}};
  await new Promise(r=>{const c=()=>stop>=stops.length?r():setTimeout(c,100);c();});
  world.render=render;
  return {rows,programs,canvas:[gl.drawingBufferWidth,gl.drawingBufferHeight]};
});
for(const r of out.rows)console.log(JSON.stringify(r));console.log(JSON.stringify(out.canvas));for(const p of out.programs)console.log(p.name,p.type,p.uses);
// fill test: same view at different scales
for(const scale of [100,75,50,25]){const ms=await page.evaluate(async scale=>{const app=window.__redcat,world=app.world,gl=world.renderer.getContext(),px=new Uint8Array(4);app.settings.renderScale=scale;app.resize();const t=[];for(let i=0;i<12;i++){await new Promise(requestAnimationFrame);const s=performance.now();world.render(app.world.renderer.render.bind(world.renderer));gl.readPixels(0,0,1,1,gl.RGBA,gl.UNSIGNED_BYTE,px);t.push(performance.now()-s);}t.sort((a,b)=>a-b);return t[6];},scale);console.log('scale',scale,Math.round(ms));}
await browser.close();server.kill();
