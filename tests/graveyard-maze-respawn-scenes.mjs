import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,readFile,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

// Run against a copy of the reported adventure, never the active Electron
// profile. The original snapshot remains available for regression diagnosis.
assert.ok(process.argv[2],'Pass the copied stranded-entrance adventure JSON');
const save=JSON.parse(await readFile(process.argv[2],'utf8'));
const out=path.resolve(`current_work/graveyard-maze-respawn-2026-10-05/scenes-${Date.now()}`);
await mkdir(out,{recursive:true});
const env={...process.env,TMPDIR:'current_work'};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'4372'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let context;
try{
  context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,env,
    viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await context.newPage(),errors=[];
  page.on('pageerror',error=>errors.push(error.stack));
  page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.addInitScript(saved=>{
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
    localStorage.setItem('redcat.save.v1',JSON.stringify(saved));
  },save);
  await page.goto('http://127.0.0.1:4372/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  assert.equal(await page.evaluate(()=>window.__redcat.loadSave()),true);
  const result=await page.evaluate(async saved=>{
    const {repairGraveyardMazeSave}=await import('./src/graveyard-maze.js');
    const app=window.__redcat;app.pause();document.getElementById('pause').hidden=true;
    const w=app.world,g=app.gameplay,h=g.scripts;
    const maze=()=>({first:g.find('heg1_trigger_mc')[0].triggerCount,close:g.find('heg2_closetrigger_mc')[0].triggerCount,
      third:h.players.get(g.find('heg3_mc')[0].id).time,door:g.find('heg2_mc')[0].open});
    const autoRepaired=maze();
    const sync=()=>{w.syncModels();w.syncModelStates();w.syncActors(0);w.syncPlayer(0,{});w.updateCamera(1,true);w.updateRenderResidency();w.effects.update(0);};
    const capture=()=>{w.render();return w.renderer.domElement.toDataURL('image/png').split(',')[1];};
    const restoreBaseline=()=>{
      // Gameplay.restore applies raw saved state. Load-time repair lives in
      // ScriptHost.initialize, so this recreates the pre-fix state faithfully.
      g.restore(saved.game);g.playerPosition=[...saved.position];w.player.position=[...saved.position];w.player.resetVelocity();
      w.yaw=saved.yaw;w.pitch=saved.pitch;sync();
    };
    const passage=(a,b)=>{
      const hit=w.collider.trace(a,b,[-11,0,-11],[11,56,11],w.physicalModels);
      return {fraction:hit.fraction,startSolid:!!hit.startSolid};
    };
    const hedge1=()=>passage([-888,512.05,-980],[-888,512.05,-850]);
    const hedge2=()=>passage([-980,512.05,-692],[-1100,512.05,-692]);
    restoreBaseline();await w.geometryStream.settle();const before=capture(),blocked={maze:maze(),hedge1:hedge1(),hedge2:hedge2()};
    const repaired=repairGraveyardMazeSave(g);sync();
    const reset={maze:maze(),hedge1:hedge1(),hedge2:hedge2()};
    const neutral={forward:0,right:0,turn:0,jump:false,attack:false,use:false};
    // Physical contact with the entrance brush now runs the original Davi
    // commands, raising hedge one and opening the other route for RedCat.
    for(let i=0;i<90;i++)w.update(1/60,neutral);
    sync();await w.geometryStream.settle();const after=capture();
    const reentered={maze:maze(),hedge1:hedge1(),hedge2:hedge2(),health:g.state.health};
    // Also reproduce death in the original progressed state and exercise the
    // real app respawn event, which moves RedCat to the authored save pillar.
    restoreBaseline();w.player.noClip=false;g.hitCooldown=0;g.damage(g.state.health,'maze-regression');
    let frames=0;while(g.playerReaction?.phase==='death'&&frames++<600)w.update(1/60,neutral);
    sync();
    const respawn={maze:maze(),position:[...w.player.position],checkpoint:[...g.checkpoint.position],phase:g.playerReaction?.phase,
      lives:g.state.lives,health:g.state.health,hedge1:hedge1(),score:g.state.score,potions:g.state.potions,kills:g.state.kills,vmError:h.vm.lastError};
    app.saveGame(true);await app.loadSave();app.pause();
    const restored=app.gameplay;
    return {autoRepaired,blocked,repaired,reset,reentered,respawn,restored:{first:restored.find('heg1_trigger_mc')[0].triggerCount,
      close:restored.find('heg2_closetrigger_mc')[0].triggerCount,third:restored.scripts.players.get(restored.find('heg3_mc')[0].id).time},before,after};
  },save);
  for(const key of ['before','after']){await writeFile(path.join(out,`${key}.png`),Buffer.from(result[key],'base64'));delete result[key];}
  await writeFile(path.join(out,'report.json'),JSON.stringify({result,errors},null,2)+'\n');
  assert.equal(result.autoRepaired.close,0);assert.equal(result.autoRepaired.third,0);
  assert.equal(result.blocked.maze.first,1);assert.ok(result.blocked.hedge1.fraction<1);assert.ok(result.blocked.hedge2.fraction<1);
  assert.equal(result.repaired,true);assert.equal(result.reset.maze.first,0);assert.equal(result.reset.hedge1.fraction,1);
  assert.equal(result.reentered.maze.first,1);assert.equal(result.reentered.maze.door,true);assert.equal(result.reentered.hedge2.fraction,1);
  assert.equal(result.respawn.maze.first,0);assert.equal(result.respawn.maze.close,0);assert.equal(result.respawn.maze.third,0);
  assert.equal(result.respawn.phase,'respawn');assert.equal(result.respawn.lives,save.game.state.lives-1);assert.equal(result.respawn.health,save.game.state.maxHealth);
  assert.deepEqual(result.respawn.position,result.respawn.checkpoint.map((v,i)=>v+(i===1?1:0)));
  for(const key of ['score','potions','kills'])assert.equal(result.respawn[key],save.game.state[key]);
  assert.equal(result.respawn.vmError,null);assert.equal(result.respawn.hedge1.fraction,1);
  assert.deepEqual(result.restored,{first:0,close:0,third:0});assert.deepEqual(errors,[]);
  console.log('PASS copied maze save: blocked passages reproduced, load repair, physical re-entry, native death/respawn, progress preservation and save reload.');
  console.log(out);
}finally{await context?.close();server.kill();}
