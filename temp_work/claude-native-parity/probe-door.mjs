// Reproduces the castle half of tests/door-activation-scenes.mjs and prints its state.
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4398'},stdio:['ignore','pipe','inherit']});
await new Promise(r=>server.stdout.once('data',r));
const browser=await chromium.launch({executablePath:process.env.CHROME_PATH,headless:true,args:['--use-angle=gl']});
try{
  const page=await browser.newPage();
  await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4})));
  await page.goto('http://127.0.0.1:4398/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  console.log(JSON.stringify(await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(1);app.pause();
    const w=app.world,g=app.gameplay,h=g.scripts;
    for(const m of h.players.values())m.stop();for(const o of g.objects)if(o.kind==='trigger'||o.kind==='enemy')o.enabled=false;
    h.cutscene=false;h.camera=null;h.enemiesFrozen=true;
    const place=(p,yaw)=>{w.player.position=p;w.player.resetVelocity();w.player.grounded=true;w.yaw=yaw;};
    const step=(frames,input={})=>{for(let i=0;i<frames;i++)w.update(.025,{forward:0,right:0,...input});};
    const right=g.find('doorhallway04_02')[0];
    place([360,-24.05,118],-Math.PI/2);step(15,{forward:1,use:true});
    const blocked={position:[...w.player.position],open:right.open};
    place([460,-24.05,118],Math.PI/2);step(5,{forward:1});
    const returning={position:[...w.player.position],open:right.open,locked:h.controlLocked,camera:h.camera};
    step(85);const stairs=['vlakvoortrap','trap01','schuinvlaktrap'].map(n=>g.find(n)[0].open);
    const secret=g.find('doorhallway05_01')[0];place([2080,-24.05,-820],Math.PI);step(20,{forward:1});
    const cam=h.camera,camObj=cam&&g.objects.find(o=>o.id===cam.id);const passage={cam:cam&&{...cam,points:cam.points?.length},entity:camObj?.entity,position:[...w.player.position],open:secret.open,locked:h.controlLocked,camera:h.camera?.mode,cutscene:h.cutscene,fade:h.cutsceneFadeUntil,time:h.time};
    return {blocked,returning,stairs,passage};
  }),null,1));
}finally{await browser.close();server.kill();}
