import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {readFile,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
process.env.TMPDIR='current_work';
const root=resolve('current_work/well-live-2026-09-27');
const save=JSON.parse(await readFile(resolve(root,'live-autosave.json'),'utf8'));
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4304'},stdio:['ignore','pipe','inherit']});
await new Promise((r,j)=>{server.stdout.once('data',r);server.once('error',j);});
let browser;
try {
  browser=await chromium.launchPersistentContext(resolve(root,'browser-profile'),{executablePath:'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage();
  await page.addInitScript(s=>{localStorage.setItem('redcat.save.v1',JSON.stringify(s));localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false}));},save);
  await page.goto('http://127.0.0.1:4304/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const report=await page.evaluate(async save=>{
    const app=window.__redcat;await app.loadSave();app.pause();
    const w=app.world,p=w.player;
    w.syncModels();w.syncActors(0);
    const trace=(a,b,lo=p.mins,hi=p.maxs)=>w.collider.trace(a,b,lo,hi,w.physicalModels);
    const state=()=>({position:[...p.position],grounded:p.grounded,velocityY:p.velocityY,launchVelocityXZ:[...p.launchVelocityXZ],recovery:structuredClone(p.movementRecovery)});
    const restore=()=>{p.position=[...save.position];p.lastSafe=[...save.lastSafe];p.restoreMotion(save.playerMotion);};
    restore();
    const initial={...state(),overlap:trace(p.position,p.position),down:trace(p.position,[p.position[0],p.position[1]-1,p.position[2]]),directions:Array.from({length:8},(_,i)=>trace(p.position,[p.position[0]+Math.cos(i*Math.PI/4)*8,p.position[1],p.position[2]+Math.sin(i*Math.PI/4)*8]))};
    const runs=[];
    for(const input of [{},{forward:1},{forward:-1},{right:1},{right:-1},{jump:true}]){
      restore();const samples=[];
      for(let i=0;i<360;i++){
        p.update(.025,input,save.yaw,save.pitch);
        if(i%40===0||p.recoveredThisStep)samples.push({i,...state()});
        if(p.recoveredThisStep)break;
      }
      runs.push({input,final:state(),samples});
    }
    restore();const candidates=[];
    for(const r of [8,16,24,32,48,64])for(const lift of [0,8,16,32,56]){
      const candidate=[p.position[0]-r,p.position[1]+lift,p.position[2]],down=trace(candidate,[candidate[0],candidate[1]-100,candidate[2]]);
      const centre=q=>q.map((v,i)=>v+(p.mins[i]+p.maxs[i])/2);
      candidates.push({r,lift,down,exit:trace(candidate,candidate),forward:trace(p.position,candidate),reverse:trace(candidate,p.position),centre:trace(centre(p.position),centre(candidate),[0,0,0],[0,0,0]),safe:p.movementRecovery.safeAt(down.end,{mins:p.mins,maxs:p.maxs,trace}),result:p.movementRecovery.candidate(candidate,p.position,initial.overlap,{mins:p.mins,maxs:p.maxs,trace})});
    }
    const escapes=[];
    for(const radius of [4,8,16,24,32,48,64])for(const lift of [-64,-48,-32,-16,-8,-4,0,4,8,16,32,48,64,80])for(let i=0;i<16;i++){
      const a=i*Math.PI/8,c=[p.position[0]+Math.cos(a)*radius,p.position[1]+lift,p.position[2]+Math.sin(a)*radius];
      const hit=trace(p.position,c);if(hit.fraction===1&&!hit.startSolid){
        const down=trace(c,[c[0],c[1]-96,c[2]]);escapes.push({radius,lift,i,c,down,safe:p.movementRecovery.safeAt(down.end,{mins:p.mins,maxs:p.maxs,trace})});
      }
    }
    const vertical=[-64,-16,-4,4,16,64].map(y=>({y,hit:trace(p.position,[p.position[0],p.position[1]+y,p.position[2]])}));
    return {initial,runs,candidates,escapes,vertical};
  },save);
  const suffix=process.argv[2]||'initial';await writeFile(resolve(root,`reproduction-${suffix}.json`),JSON.stringify(report,null,2));
  console.log(JSON.stringify({initial:report.initial,runs:report.runs.map(({input,final})=>({input,final}))},null,2));
}finally {await browser?.close();server.kill();}
