import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {readFile,writeFile,mkdir} from 'node:fs/promises';
import path from 'node:path';
const out=path.resolve('temp_work/water-contact-2026-10-11/baseline-'+Date.now());
await mkdir(out,{recursive:true});
const save=JSON.parse(await readFile('temp_work/water-contact-2026-10-11/live-autosave.json','utf8'));
const env={...process.env,TMPDIR:'temp_work'};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
let context;
try {
 context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,env,viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await context.newPage(),errors=[];page.on('pageerror',e=>errors.push(e.stack));
 await page.addInitScript(save=>{localStorage.setItem('redcat.save.v1',JSON.stringify(save));localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,volume:0,autoIntro:false}));},save);
 await page.goto(base+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(async()=>{await __redcat.loadSave();__redcat.pause();document.getElementById('pause').hidden=true;});
 await page.screenshot({path:path.join(out,'saved-moat.png')});
 const result=await page.evaluate(async()=>{
  const a=__redcat,w=a.world,g=a.gameplay,{GameplayAudio}=await import('./src/gameplay-audio.js');
  const result={savedPosition:[...w.player.position],liquidModels:[...g.liquidModels],disabled:[...g.liquidModels].filter(i=>w.collider.disabledModels.has(i))};
  for(const p of g.scripts.players.values())p.stop();g.scripts.cutscene=false;g.scripts.enemiesFrozen=true;g.scripts.camera=null;
  const input={forward:1},router=new GameplayAudio(a.audio);a.audio.reset();a.audio.pause();
  w.player.position=[-1810,-175.95,1190];w.player.grounded=true;w.player.noClip=false;w.player.resetVelocity();w.player.movementRecovery.reset();w.yaw=Math.PI;
  const sample=()=>({position:[...w.player.position],grounded:w.player.grounded,worldContents:w.collider.contents(w.player.position,[0,0,0],[0,1,0],[0,...g.liquidModels]),volumeContents:g.volumeCollider.contents(w.player.position,[0,0,0],[0,1,0],[0,...g.liquidModels])});
  result.before=sample();
  for(let i=0;i<48;i++){w.update(1/60,input);router.update(1/60,w,g,input);}
  result.after=sample();result.steps=a.audio.snapshot().filter(s=>/^rc[wl]/.test(s.sound));return result;
 });
 await writeFile(path.join(out,'report.json'),JSON.stringify({result,errors},null,2)+'\n');console.log(JSON.stringify({out,result,errors},null,2));
}finally{await context?.close();server.kill();}
