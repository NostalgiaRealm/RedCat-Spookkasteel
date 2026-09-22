import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4224'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try{
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.goto('http://127.0.0.1:4224/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const result=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(3);app.pause();
    const initial=app.world,game=app.gameplay;
    const floor=initial.collider.trace([-1264,180,20],[-1264,-80,20],initial.player.mins,initial.player.maxs,initial.physicalModels);
    const start=[-1264,floor.end[1],20],save={version:1,level:'lvl03a',position:start,lastSafe:start,noClip:false,yaw:0,pitch:.1,game:game.snapshot()};
    // This reproduces a save made before any rock was enabled by the old
    // source, which did not serialize whether its motion had been started.
    for(const motion of save.game.scripts.motions)delete motion.started;
    await app.startLevel(3,save);app.pause();document.getElementById('pause').hidden=true;
    const w=app.world,g=app.gameplay,h=g.scripts,stones=g.find('rolling_stones');
    h.cutscene=false;h.camera=null;h.enemiesFrozen=true;
    for(const p of h.players.values())if(!stones.includes(p.object))p.stop();
    for(const o of g.objects)if(o.kind==='enemy'||o.entity.classname==='CameraTrigger')o.enabled=false;
    w.player.position=[...start];w.player.grounded=true;w.player.resetVelocity();w.yaw=0;
    const state=()=>stones.map(o=>{const p=h.players.get(o.id);return {name:o.entity.DaviName,enabled:o.enabled,time:p.time,loop:p.loop,playing:p.playing,finished:p.finished};});
    const before=state(),samples=[],screenshots={};
    const capture=name=>{
      w.syncActors(0);w.syncPlayer(0,{forward:0,right:0});
      // Keep the corridor in view even if the original moving solids have
      // pushed RedCat back down its slope during the longer loop check.
      w.camera.position.set(-1264,100,-390);w.camera.lookAt(-1264,120,-1194);w.render();
      screenshots[name]=w.renderer.domElement.toDataURL('image/png').split(',')[1];
    };
    // The real E interaction opens the original earth-lab door; its authored
    // BeforeOpen command starts the rocks. No direct Enable or motion edits.
    w.update(1/60,{forward:0,right:0,use:true});
    const door=g.find('door_left_to_earthlab')[0],activated=state();
    for(let frame=0;frame<60*23;frame++){
      w.update(1/60,{forward:w.player.position[2]>-550?1:0,right:0,use:false});
      if(frame%60===0)samples.push({time:frame/60,player:[...w.player.position],stones:state()});
      if(frame===60*8)capture('after-first-lap');
      if(frame===60*22)capture('after-three-laps');
    }
    return {start,doorOpened:door.open||activated.every(o=>o.enabled),before,activated,after:state(),player:[...w.player.position],samples,screenshots};
  });
  const {screenshots,...report}=result;
  for(const [name,data] of Object.entries(screenshots))await writeFile(`artifacts/rolling-stones-${name}.png`,Buffer.from(data,'base64'));
  await writeFile('artifacts/rolling-stones-scenes.json',JSON.stringify({report,errors},null,2)+'\n');
  assert.ok(report.before.every(o=>!o.enabled&&!o.playing),'restored rocks wait for authored activation');
  assert.ok(report.doorOpened,'the actual E interaction opens the corridor door');
  assert.ok(report.activated.every(o=>o.enabled&&o.loop&&o.playing),'door command initializes all eight repeating tracks');
  assert.ok(report.samples.some(s=>s.player[2]<-500),'RedCat physically walks into the pictured corridor');
  for(const sample of report.samples)assert.ok(sample.stones.every(o=>o.enabled&&o.loop&&o.playing&&!o.finished),`no false completion at ${sample.time}s`);
  for(let i=0;i<8;i++){
    const times=report.samples.map(s=>s.stones[i].time),wraps=times.slice(1).filter((t,j)=>t<times[j]).length;
    assert.ok(wraps>=3,`${report.after[i].name} must complete at least three actual laps, got ${wraps}`);
  }
  assert.ok(report.after.every(o=>o.enabled&&o.loop&&o.playing&&!o.finished));
  assert.deepEqual(errors,[]);
  console.log('PASS: restored pre-activation save, physical E door interaction and corridor walk, all eight original stones remain active through three laps; no browser/HTTP errors.');
}finally{await browser?.close();server.kill();}
