// What each shader feature costs on Het Kerkhof: same stops, injected variants.
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4537'},stdio:['ignore','pipe','inherit']});
await new Promise(r=>server.stdout.once('data',r));
const browser=await chromium.launch({executablePath:process.env.CHROME_PATH,headless:true,args:['--enable-unsafe-swiftshader','--autoplay-policy=no-user-gesture-required']});
const variants=(process.argv[2]||'base,aniso1,aniso2,oetf,plainlight,nosky').split(',');
for(const variant of variants){
  const context=await browser.newContext({viewport:{width:800,height:360},deviceScaleFactor:2,isMobile:true,hasTouch:true});
  const page=await context.newPage();let source='';
  await page.addInitScript(variant=>{localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false}));
    const P=WebGL2RenderingContext.prototype,gp=P.getParameter,ss=P.shaderSource;
    if(variant.startsWith('aniso'))P.getParameter=function(n){return n===0x84FF?+variant.slice(5):gp.call(this,n);};
    P.shaderSource=function(s,t){
      if(variant==='oetf')t=t.replace(/vec4\( mix\( pow\( value\.rgb, vec3\( 0\.41666 \) \) \* 1\.055 - vec3\( 0\.055 \), value\.rgb \* 12\.92, vec3\( lessThanEqual\( value\.rgb, vec3\( 0\.0031308 \) \) \) \), value\.a \)/,'vec4(max(0.585122381*sqrt(value.rgb)+0.783140355*sqrt(sqrt(value.rgb))-0.368262736*sqrt(sqrt(sqrt(value.rgb))),vec3(0.)),value.a)');
      if(variant==='plainlight')t=t.replace('vec4 lightMapTexel = vec4(nativeLitLightmap(lightMap,vLightMapUv),1.);','vec4 lightMapTexel = texture2D(lightMap,vLightMapUv);');
      return ss.call(this,s,t);};
  },variant);
  await page.goto('http://127.0.0.1:4537/?skipIntro');await page.waitForFunction(()=>window.__redcat?.originalMenu);
  await page.evaluate(()=>window.__redcat.startLevel(2));await page.waitForFunction(()=>window.__redcat.mode==='playing',null,{timeout:120000});
  const out=await page.evaluate(async variant=>{
    const a=window.__redcat,w=a.world,g=a.gameplay,h=g.scripts;a.renderQuality.updateSettings=()=>false;for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=true;for(const o of g.objects)if(o.kind==='trigger')o.enabled=false;
    const e=g.objects.filter(o=>o.kind==='enemy'&&o.enabled),stops=[[...w.player.position],...e.filter((_,i)=>i%Math.max(1,Math.floor(e.length/9))===0).map(o=>[...o.position])].slice(0,10);
    if(variant==='nosky')w.scene.background=new (w.scene.background.constructor===Object?Object:w.camera.constructor===Object?Object:Object)()&&null;
    const gl=w.renderer.getContext(),px=new Uint8Array(4),res=[];
    for(const i of [0,4,5,6,8]){const q=stops[i];w.player.position=[...q];w.player.lastSafe=[...q];w.player.resetVelocity();w.yaw=i*.7;w.followCamera.cut=true;
      await new Promise(r=>setTimeout(r,1800));
      a.pause();await new Promise(requestAnimationFrame);const t=[];for(let k=0;k<7;k++){await new Promise(requestAnimationFrame);const s=performance.now();w.render();gl.readPixels(0,0,1,1,gl.RGBA,gl.UNSIGNED_BYTE,px);t.push(performance.now()-s);}a.resume();t.sort((x,y)=>x-y);res.push(Math.round(t[3]));}
    return res;
  },variant);
  console.log(variant,JSON.stringify(out),'mean',Math.round(out.reduce((x,y)=>x+y,0)/out.length));
  await context.close();
}
await browser.close();server.kill();
