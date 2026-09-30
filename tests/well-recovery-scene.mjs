// Regression from the real suspended player in the castle well, captured from
// the desktop autosave on 2026-09-27. No private save or campaign state required.
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import assert from 'node:assert/strict';

process.env.TMPDIR='current_work';
const output=resolve('current_work',`well-recovery-${new Date().toISOString().replace(/[:.]/g,'-')}`);
await mkdir(output,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4305'},stdio:['ignore','pipe','inherit']});
await new Promise((done,fail)=>{server.stdout.once('data',done);server.once('error',fail);});
let browser;
try {
  browser=await chromium.launchPersistentContext(resolve('current_work/well-recovery-test-profile'),{
    executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage(),errors=[];page.on('pageerror',e=>errors.push(e.stack));
  await page.addInitScript(()=>{
    localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false}));
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  });
  await page.goto('http://127.0.0.1:4305/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const report=await page.evaluate(async()=>{
    const app=window.__redcat;
    // Start through the developer entry point, independently of the user's
    // live game, saves and localStorage.
    // The regular loader creates all actor/brush colliders used by the game.
    if(!await app.startLevel(1))throw new Error('Castle failed to load');app.pause();
    const w=app.world,p=w.player;
    for(const motion of app.gameplay.scripts.players.values())motion.stop();
    app.gameplay.scripts.cutscene=false;app.gameplay.scripts.camera=null;
    w.syncModels();w.syncActors(0);
    const original=[-254.20535006076983,19.208704997415577,164.09120801031264];
    const motion={velocityY:0,launchVelocityXZ:[156.79015915514412,1.7566992072019878],grounded:false,
      jumpAge:91.25860000002149,superJumpUsed:false,jumpSerial:3,jumpKind:'normal'};
    const yaw=-8.195185307179601,pitch=.43599999999999967;
    const oldTrace=w.collider.trace.bind(w.collider);let traces=0;
    w.collider.trace=(...args)=>{traces++;return oldTrace(...args);};
    const trace=(a,b)=>w.collider.trace(a,b,p.mins,p.maxs,w.physicalModels);
    const runs=[];
    for(const input of [{},{forward:1},{forward:-1},{right:1},{right:-1},{jump:true}]){
      p.position=[...original];p.restoreMotion(motion);p.previousJump=false;p.noClip=false;
      const initial=trace(original,original),down=trace(original,[original[0],original[1]-1,original[2]]);
      let steps=0,maxTraces=0;
      for(;steps<160&&!p.movementRecovery.recoveries;steps++){
        traces=0;p.update(.025,input,yaw,pitch);maxTraces=Math.max(maxTraces,traces);
      }
      const recovered=[...p.position],clear=!trace(recovered,recovered).startSolid;
      const settled={grounded:p.grounded,velocityY:p.velocityY,launchVelocityXZ:[...p.launchVelocityXZ]};
      // Walk away from the well after recovery. This checks usable control,
      // not merely that the recovery counter changed.
      for(let i=0;i<20;i++)p.update(.025,{right:-1},0);
      runs.push({input,initial,down,steps,maxTraces,recoveries:p.movementRecovery.recoveries,
        recovered,clear,settled,walked:Math.hypot(...p.position.map((v,i)=>v-recovered[i])),final:[...p.position]});
    }
    return {runs};
  });
  report.errors=errors;await writeFile(resolve(output,'report.json'),JSON.stringify(report,null,2));
  assert.deepEqual(errors,[]);
  for(const run of report.runs){
    assert.equal(run.initial.startSolid,false,'the real wedge is a contact, not an embedded body');
    assert.equal(run.down.fraction,0,'falling is blocked at the captured position');
    assert.ok(run.down.normal[1]<.65,'the contact cannot become walkable ground');
    assert.equal(run.recoveries,1);assert.ok(run.steps<=60,'recover within 1.5 seconds');
    assert.equal(run.clear,true);assert.equal(run.settled.grounded,true);
    assert.equal(run.settled.velocityY,0);assert.deepEqual(run.settled.launchVelocityXZ,[0,0]);
    assert.ok(run.walked>50,'ordinary walking works after recovery');
    assert.ok(run.maxTraces<=25,'bounded collision work in a player update');
  }
  console.log(JSON.stringify({output,runs:report.runs.map(({input,steps,recovered,walked,maxTraces})=>({input,steps,recovered,walked,maxTraces}))},null,2));
}finally {await browser?.close();server.kill();}
