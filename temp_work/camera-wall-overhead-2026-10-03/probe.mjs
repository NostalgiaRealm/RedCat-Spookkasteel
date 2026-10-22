import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
const root=process.cwd(),out=path.join(root,'current_work/camera-wall-overhead-2026-10-03');
await mkdir(out,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4336',TMPDIR:'current_work'},stdio:['ignore','pipe','inherit']});
await new Promise((res,rej)=>{server.stdout.once('data',res);server.once('error',rej);});
let browser;
try {
 browser=await chromium.launchPersistentContext(path.join(out,'probe-browser-profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required'],env:{...process.env,TMPDIR:'current_work'}});
 const page=await browser.newPage();page.on('pageerror',e=>console.error(e));
 await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:1})));
 await page.goto('http://127.0.0.1:4336/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(()=>window.__redcat.startLevel(1));
 const report=await page.evaluate(async()=>{
  const app=window.__redcat,w=app.world,g=app.gameplay,h=g.scripts;app.pause();document.getElementById('pause').hidden=true;
  for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=true;
  for(const o of g.objects)if(o.kind==='enemy'||o.kind==='trigger')o.enabled=false;
  w.targeting.clear();w.settings.camera='third';w.player.noClip=false;w.yaw=0;w.pitch=0;
  w.player.position=[-416,-45.95,2911.95];w.player.resetVelocity();w.player.grounded=true;w.player.movementRecovery.reset();
  w.syncModels();w.syncActors(0);w.syncPlayer(0,{});w.redcat.updateWorldMatrix(true,true);
  const {Box3,Vector3}=await import('three');
  const box=new Box3().setFromObject(w.redcat);
  const candidates=[];
  for(const e of w.level.entities.filter(e=>/^(PlayerStart|DeathMatchStart|SavePoint|GrobberPathPoint)$/.test(e.classname))){let a=e.Origin.split(/\s+/).map(Number);const floor=w.collider.trace(a,[a[0],a[1]-180,a[2]],w.player.mins,w.player.maxs,w.physicalModels);if(floor.startSolid||floor.fraction===1)continue;a=floor.end;
   for(let i=0;i<16;i++){const yaw=i*Math.PI/8,back=[Math.sin(yaw),0,Math.cos(yaw)],wall=w.collider.trace(a,a.map((v,j)=>v+back[j]*500),w.player.mins,w.player.maxs,w.physicalModels);if(wall.fraction===1||wall.startSolid)continue;const p=wall.end;const standing=w.collider.trace(p,p,w.player.mins,w.player.maxs,w.physicalModels),ground=w.collider.trace(p,[p[0],p[1]-5,p[2]],w.player.mins,w.player.maxs,w.physicalModels);if(standing.startSolid||ground.fraction===1||ground.normal[1]<.65)continue;const chest=[p[0],p[1]+43,p[2]],desired=chest.map((v,j)=>v+back[j]*145+(j===1?13:0)),cam=w.collider.trace(chest,desired,[-4,-4,-4],[4,4,4],w.physicalModels),up=w.collider.trace(chest,[chest[0],chest[1]+150,chest[2]],[-4,-4,-4],[4,4,4],w.physicalModels);if(cam.fraction<.3)candidates.push({source:e['%name%'],a,p,yaw,cam:cam.end,camFraction:cam.fraction,upFraction:up.fraction});}}
  const anchor=[-416,-2.95,2911.95],desired=[-416,10.05,3056.95],trace=(a,b)=>w.collider.trace(a,b,[-4,-4,-4],[4,4,4],w.physicalModels);
  const legacy=trace(anchor,desired),up=trace(anchor,[-416,147.05,2911.95]);
  w.camera.position.fromArray(legacy.end);w.camera.lookAt(new Vector3(...anchor).add(new Vector3(0,0,-80)));await w.geometryStream.settle();w.render();window.__image=w.renderer.domElement.toDataURL('image/png').split(',')[1];
  return {candidates,player:w.player.position,legacy,up,box:{min:box.min.toArray(),max:box.max.toArray()},physicalModels:w.physicalModels.length,free:trace(legacy.end,legacy.end),standing:w.collider.trace(w.player.position,w.player.position,w.player.mins,w.player.maxs,w.physicalModels)};
 });
 console.log(JSON.stringify(report,null,2));await writeFile(path.join(out,'probe.json'),JSON.stringify(report,null,2)+'\n');await writeFile(path.join(out,'castle-wall-before.png'),Buffer.from(await page.evaluate(()=>window.__image),'base64'));
}finally{await browser?.close();server.kill();}
