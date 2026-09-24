import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4232'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});let browser;
try {
 browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
 page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
 await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:2})));
 await page.goto('http://127.0.0.1:4232/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 const result=await page.evaluate(async()=>{
  const app=window.__redcat;await app.startLevel(2);app.pause();document.getElementById('pause').hidden=true;
  const setup=()=>{
   const w=app.world,g=app.gameplay,h=g.scripts;for(const p of h.players.values())p.stop();h.cutscene=false;h.enemiesFrozen=false;h.camera=null;
   const frogs=g.objects.filter(o=>o.enemyType==='frog');for(const o of g.objects)if(o.kind==='enemy'&&!frogs.includes(o))o.enabled=false;
   w.player.noClip=true;w.player.position=[5000,1000,5000];return {w,g,h,frogs};
  };
  let {w,g,h,frogs}=setup();const progress=frogs.map(o=>({id:o.id,start:[...o.position],distance:0,stall:0,maxStall:0,visited:new Set()}));
  for(let frame=0;frame<1600;frame++){
   const before=frogs.map(o=>[...o.position]);w.update(.025,{forward:0,right:0,turn:0,jump:false,attack:false,use:false});
   frogs.forEach((o,i)=>{const p=progress[i],d=Math.hypot(o.position[0]-before[i][0],o.position[2]-before[i][2]);p.distance+=d;p.stall=d<.01?p.stall+.025:0;p.maxStall=Math.max(p.maxStall,p.stall);p.visited.add(o.patrol.current);});
  }
  const originalPatrol=progress.map((p,i)=>({...p,visited:[...p.visited],end:[...frogs[i].position],alerted:!!frogs[i].alerted,animation:frogs[i].animationState}));
  const stuck=frogs[2];stuck.position=[2672.05,528.05,-291.9690936605];stuck.grounded=true;stuck.animationState='idle';
  Object.assign(stuck.patrol,{current:'GrobberPathPoint265',target:'GrobberPathPoint124',previous:'GrobberPathPoint266',leftStart:true});app.saveGame(true);
  await app.loadSave();app.pause();document.getElementById('pause').hidden=true;({w,g,h,frogs}=setup());
  const recovered=frogs[2],visited=new Set(),loaded=[...recovered.position];
  for(let frame=0;frame<320;frame++){w.update(.025,{forward:0,right:0,turn:0,jump:false,attack:false,use:false});visited.add(recovered.patrol.current);}
  const restoredPatrol={loaded,end:[...recovered.position],visited:[...visited],alerted:!!recovered.alerted,animation:recovered.animationState};
  w.camera.position.set(2670,690,-30);w.camera.lookAt(recovered.position[0],recovered.position[1]+18,recovered.position[2]);w.render();
  return {originalPatrol,restoredPatrol,scriptError:h.vm.lastError};
 });
 for(const f of result.originalPatrol){assert.ok(f.distance>2800,JSON.stringify(f));assert.ok(f.maxStall<1,JSON.stringify(f));assert.ok(f.visited.length>3);assert.equal(f.alerted,false);}
 assert.ok(result.restoredPatrol.visited.includes('GrobberPathPoint124'));assert.equal(result.restoredPatrol.alerted,false);assert.equal(result.scriptError,null);assert.deepEqual(errors,[]);
 await mkdir('artifacts',{recursive:true});await page.screenshot({path:'artifacts/graveyard-frog-patrol.png'});await writeFile('artifacts/graveyard-frog-patrol-scenes.json',JSON.stringify({result,errors},null,2)+'\n');
 console.log('PASS all three graveyard frogs patrol for 40 seconds with player far away; formerly stuck saved frog resumes through original point 124.');
} finally {await browser?.close();server.kill();}
