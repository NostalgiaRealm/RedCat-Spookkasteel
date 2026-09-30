import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import assert from 'node:assert/strict';

process.env.TMPDIR='current_work';
const work=resolve('current_work');await mkdir(work,{recursive:true});
const output=resolve(work,`movement-recovery-scenes-${new Date().toISOString().replace(/[:.]/g,'-')}`);await mkdir(output);
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4303'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  browser=await chromium.launchPersistentContext(resolve(work,'movement-recovery-browser-profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl'],viewport:{width:1280,height:720}});
  const page=await browser.newPage(),errors=[];page.on('pageerror',e=>errors.push(e.stack));
  await page.addInitScript(()=>localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false})));
  await page.goto('http://127.0.0.1:4303/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(()=>document.getElementById('cheat-unlock-levels').click());
  const result=await page.evaluate(async()=>{
    const app=window.__redcat,{moveEnemy}=await import('./src/enemies.js'),idle={forward:0,right:0,jump:false};
    const prepare=async index=>{
      if(!await app.startLevel(index))throw new Error('Level load failed');app.pause();
      const w=app.world,h=app.gameplay.scripts;for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;
      w.syncModels();w.syncActors(0);return w;
    };
    const w=await prepare(1),p=w.player,marker=app.gameplay.find('put01')[0].position;
    const trace=(a,b,lo=p.mins,hi=p.maxs)=>w.collider.trace(a,b,lo,hi,w.physicalModels);
    let fixture=null;
    // Seed a shallow collision overlap at a real contact around the castle
    // well. This tests recovery in that geometry without claiming the exact
    // intermittent jump sequence from the user's report has been reproduced.
    for(const radius of [64,96,128,160])for(let i=0;i<16&&!fixture;i++){
      const angle=i*Math.PI/8,high=[marker[0]+Math.cos(angle)*radius,marker[1]+120,marker[2]+Math.sin(angle)*radius];
      const floor=trace(high,[high[0],marker[1]-180,high[2]]);
      if(floor.startSolid||floor.fraction>=1||floor.normal[1]<.65)continue;
      const contact=trace(floor.end,[marker[0],floor.end[1],marker[2]]);
      if(contact.startSolid||contact.fraction>=1||Math.abs(contact.normal[1])>.3)continue;
      const inside=contact.end.map((v,k)=>v-contact.normal[k]*.6);
      if(!trace(inside,inside).startSolid)continue;
      const outer=contact.end.map((v,k)=>v+contact.normal[k]*4);
      if(trace(outer,outer).startSolid)continue;
      fixture={inside,outer,normal:contact.normal};
    }
    if(!fixture)throw new Error('Could not locate a well-area contact fixture');
    p.position=[...fixture.inside];p.grounded=true;p.noClip=false;p.resetVelocity();p.movementRecovery.reset();
    const oldTrace=w.collider.trace.bind(w.collider);let traces=0,maxTraces=0;
    w.collider.trace=(...args)=>{traces++;return oldTrace(...args);};
    let frames=0;
    for(;frames<240&&!p.movementRecovery.recoveries;frames++){
      traces=0;p.update(.025,{...idle,forward:1},Math.atan2(fixture.normal[0],fixture.normal[2]));maxTraces=Math.max(maxTraces,traces);
    }
    const castle={marker,fixture,frames,position:[...p.position],recoveries:p.movementRecovery.recoveries,clear:!trace(p.position,p.position).startSolid,
      distance:Math.hypot(...p.position.map((v,i)=>v-fixture.inside[i])),maxTraces,health:app.gameplay.state.health};
    if(!castle.recoveries)castle.probes=[4,8,16,24,32].map(radius=>{
      const pos=fixture.inside.map((v,i)=>v+fixture.normal[i]*radius),floor=trace(pos,[pos[0],pos[1]-80,pos[2]]);
      const options={mins:p.mins,maxs:p.maxs,trace,grounded:true};
      return {radius,pos,floor,safe:p.movementRecovery.safeAt(floor.end,options),
        candidate:p.movementRecovery.candidate(pos,p.position,trace(p.position,p.position),options)};
    });
    w.syncPlayer(0,idle);w.effects.update(0);w.camera.position.set(p.position[0]+100,p.position[1]+95,p.position[2]+120);w.camera.lookAt(...p.position.map((v,i)=>v+(i===1?25:0)));w.render();
    const screenshot=w.renderer.domElement.toDataURL('image/png');
    const graveyard=await prepare(2),g=app.gameplay,frog=g.objects.find(o=>o.enemyType==='frog'&&o.entity.DaviName==='frog03');
    Object.assign(frog,{position:[2671.55,528.05,-291.969],grounded:true,enabled:true,visible:true,animationState:'walk',velocityY:0});
    frog.movementRecovery?.reset();
    const patrol=JSON.stringify(frog.patrol),frogsweep=(a,b,lo,hi,owner)=>graveyard.collider.trace(a,b,lo,hi,graveyard.physicalModels,{mask:'blocksPlayer',ignoreId:owner?.id});
    const embedded=frogsweep(frog.position,frog.position,frog.collisionMins,frog.collisionMaxs,frog).startSolid;
    let frogFrames=0;
    for(;frogFrames<240&&!frog.movementRecovery?.recoveries;frogFrames++)moveEnemy(frog,[-1,0,1],.025,frogsweep);
    const frogResult={embedded,frames:frogFrames,position:[...frog.position],recoveries:frog.movementRecovery?.recoveries||0,
      clear:!frogsweep(frog.position,frog.position,frog.collisionMins,frog.collisionMaxs,frog).startSolid,patrolPreserved:JSON.stringify(frog.patrol)===patrol};
    return {castle,frog:frogResult,screenshot};
  });
  const {screenshot,...report}=result;
  await writeFile(resolve(output,'castle-well-recovered.png'),Buffer.from(screenshot.split(',')[1],'base64'));
  await writeFile(resolve(output,'report.json'),JSON.stringify({...report,errors},null,2)+'\n');
  assert.deepEqual(errors,[]);assert.equal(report.castle.recoveries,1);assert.ok(report.castle.clear);assert.ok(report.castle.distance<48);assert.ok(report.castle.maxTraces<25);
  assert.ok(report.frog.embedded);assert.equal(report.frog.recoveries,1);assert.ok(report.frog.clear);assert.ok(report.frog.patrolPreserved);
  console.log('PASS live castle well contact and graveyard frog recovery; current collision clear, bounded nudge, patrol retained.',report,output);
}finally{await browser?.close();server.kill();}
