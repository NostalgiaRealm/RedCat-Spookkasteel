// Finds floor and ceiling at the camera-wall low-ceiling fixture for the native box.
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4397'},stdio:['ignore','pipe','inherit']});
await new Promise(r=>server.stdout.once('data',r));
const browser=await chromium.launch({executablePath:process.env.CHROME_PATH,headless:true,args:['--use-angle=gl']});
try{
  const page=await browser.newPage();
  await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4})));
  await page.goto('http://127.0.0.1:4397/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  console.log(JSON.stringify(await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(1);app.pause();const w=app.world;
    const out={};for(const [name,p] of [['low',[-832.95,-23.95,-1407]],['sloped',[-788.0869370602062,-23.95,-1315.05]]]){
      const pt=(a,b)=>w.collider.trace(a,b,[0,0,0],[0,0,0],w.physicalModels);
      const down=pt([p[0],p[1]+1,p[2]],[p[0],p[1]-200,p[2]]),up=pt(p,[p[0],p[1]+200,p[2]]);
      let best=null;for(let dx=-6;dx<=6;dx+=.5)for(let dz=-6;dz<=6;dz+=.5){const q=[p[0]+dx,p[1],p[2]+dz];
        if(!w.collider.trace(q,q,w.player.mins,w.player.maxs,w.physicalModels).startSolid){const d=Math.hypot(dx,dz);if(!best||d<best.d)best={d,q};}}
      out[name+'Fit']=best;
      out[name]={floor:down.end[1],ceiling:up.end[1],boxSolid:w.collider.trace(p,p,w.player.mins,w.player.maxs,w.physicalModels).startSolid,mins:w.player.mins,maxs:w.player.maxs};
    }return out;
  })));
}finally{await browser.close();server.kill();}
