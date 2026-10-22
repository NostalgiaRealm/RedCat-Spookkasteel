import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';
const out=path.resolve('temp_work/effects-save-2026-10-15/browser-'+Date.now());await mkdir(out,{recursive:true});await mkdir(path.resolve('temp_work/t'),{recursive:true});
const env={...process.env,TMPDIR:'temp_work/t'},server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'4417'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let context;
try{
 context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,env,viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required',`--crash-dumps-dir=${out}`]});
 const page=await context.newPage(),errors=[];page.on('pageerror',e=>errors.push(e.stack));page.on('console',m=>{if(m.type()==='error'&&/shader|webgl|gl_invalid|program/i.test(m.text()))errors.push(m.text());});
 await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4})));
 await page.goto('http://127.0.0.1:4417/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 const results=[];
 for(const level of [0,1]){
  const result=await page.evaluate(async level=>{
   const app=window.__redcat;await app.startLevel(level);app.pause();let w=app.world,g=app.gameplay;
   for(const player of g.scripts.players.values())player.stop();g.scripts.cutscene=false;g.scripts.camera=null;
   const flame=level===1?w.effects.torches.records.find(r=>r.emitter.id.startsWith('torch-flame:')):null;
   if(flame){w.player.position=flame.object.position.map((v,i)=>v+(i===2?80:0));g.playerPosition=[...w.player.position];w.camera.position.fromArray(w.player.position);}
   let knightId=null,knightDiagnostic=null;
   if(level===1){const knight=g.objects.find(o=>o.kind==='enemy'&&o.actorFile==='knight');knightId=knight.id;knightDiagnostic={id:knightId,health:knight.health,enabled:knight.enabled,visible:knight.visible,actor:!!w.actorInstances.get(knightId),parts:w.knightParts?.map(Boolean)};g.destroy(knight);w.syncActors(0);knightDiagnostic.after={health:knight.health,animation:knight.animationState,deathStartedAt:knight.deathStartedAt,parts:w.enemyDebris.get(knightId)?.parts.length};}
   for(let i=0;i<80;i++){g.time+=1/60;w.updateEnemyDebris(1/60);w.effects.update(1/60);}
   const before=g.snapshot();if(!app.saveGame(true))throw new Error('Save failed');
   const saved=JSON.stringify(before.spoutEffects),knight=before.objects.find(o=>o.id===knightId)?.knightDebrisState;
   await app.loadSave();app.pause();w=app.world;g=app.gameplay;
   const after=g.snapshot(),sameSpouts=JSON.stringify(after.spoutEffects)===saved,sameKnight=JSON.stringify(after.objects.find(o=>o.id===knightId)?.knightDebrisState)===JSON.stringify(knight);
   const entryDiffs=before.spoutEffects.entries.filter(entry=>JSON.stringify(entry)!==JSON.stringify(after.spoutEffects.entries.find(s=>s.id===entry.id))).map(entry=>({id:entry.id,before:entry,after:after.spoutEffects.entries.find(s=>s.id===entry.id)}));
   const particles=after.spoutEffects.entries.reduce((sum,e)=>sum+e.state.pool.filter(p=>p[0]).length,0);
   const synthetic=after.spoutEffects.entries.filter(e=>e.id.startsWith('torch-flame:')).map(e=>({id:e.id,live:e.state.pool.filter(p=>p[0]).length}));
   const object=knightId?g.objects.find(o=>o.id===knightId):null,record=object?w.enemyDebris.get(knightId):null;
   const fragmentDraws=record?.parts.every(part=>part.actor.position.toArray().every((v,i)=>v===part.particle.position[i]))??true;
   w.effects.update(0);w.updateEnemyDebris(0);w.render();
   return {level,knightDiagnostic,sameSpouts,sameKnight,entryDiffs,particles,synthetic,fragments:knight?.particles.length||0,fragmentDraws,bytes:saved.length,glError:w.renderer.getContext().getError()};
  },level);results.push(result);
 }
 await writeFile(path.join(out,'report.json'),JSON.stringify({results,errors},null,2)+'\n');
 for(const r of results){assert.ok(r.sameSpouts,`level ${r.level} emitter mismatch`);assert.ok(r.sameKnight);assert.ok(r.particles>0);assert.ok(r.fragmentDraws);assert.equal(r.glError,0);}
 assert.ok(results[1].synthetic.some(e=>e.live>0));assert.equal(results[1].fragments,9);assert.deepEqual(errors,[]);
 console.log('PASS main-menu save/load preserves Forest smoke, Castle flame and nine knight fragment integrators.');console.log(out);
}finally{await context?.close();server.kill();}
