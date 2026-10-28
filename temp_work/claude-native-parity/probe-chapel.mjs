// Reproduces the chapel part of tests/door-activation-scenes.mjs and prints its state.
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
    const app=window.__redcat;await app.startLevel(2);app.pause();
    const w=app.world,g=app.gameplay,h=g.scripts;
    for(const m of h.players.values())m.stop();for(const o of g.objects)if(o.kind==='trigger'||o.kind==='enemy')o.enabled=false;
    h.cutscene=false;h.camera=null;h.enemiesFrozen=true;
    const place=(p,yaw)=>{w.player.position=p;w.player.resetVelocity();w.player.grounded=true;w.yaw=yaw;};
    const step=(frames,input={})=>{for(let i=0;i<frames;i++)w.update(.025,{forward:0,right:0,...input});};
    const button=g.find('hek2_button_mc')[0],lift=g.find('kerklift_mc')[0];
    place([948,536.05,-1077],-Math.PI/2);const trace=[];for(let i=0;i<20;i++){step(1,{forward:1});trace.push([...w.player.position.map(v=>+v.toFixed(2)),button.switchedOn,button.pendingButtonSwitch,h.controlLocked]);}
    const s1=button.switchedOn;place([300,536.05,0],0);step(310);
    const raised={open:lift.open,time:h.players.get(lift.id).time};
    for(let i=0;i<400&&h.controlLocked;i++)step(1);
    place([0,528.05,-90],0);step(30,{forward:1});
    const p=w.player.position,hit=w.collider.trace(p,[p[0],p[1],p[2]-20],w.player.mins,w.player.maxs,w.physicalModels);
    const blocker=g.objects.filter(o=>o.modelIndex===hit.modelIndex).map(o=>({id:o.id,name:o.entity.DaviName,kind:o.kind,open:o.open}));
    const cam9=h.camera&&{...h.camera,points:undefined};const after=[];
    for(let i=0;i<600;i++){step(1,i>=220&&i<240?{forward:1}:{});if(i%60===0)after.push({t:+h.time.toFixed(2),locked:h.controlLocked,cam:h.camera?.id,lift:+h.players.get(lift.id).time.toFixed(3),playing:h.players.get(lift.id).playing,y:+w.player.position[1].toFixed(2),z:+w.player.position[2].toFixed(2)});}
    return {cam9,after,hit:{fraction:hit.fraction,model:hit.modelIndex,normal:hit.normal,end:hit.end,startSolid:hit.startSolid},blocker,liftModel:lift.modelIndex,s1,trace:trace.filter((_,i)=>i%4===0||i===19),raised,entered:{open:lift.open,pos:w.player.position,locked:h.controlLocked,cam:h.camera?.id}};
}),null,1));
}finally{await browser.close();server.kill();}
