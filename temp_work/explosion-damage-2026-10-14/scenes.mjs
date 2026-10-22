import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

const out=path.resolve(`temp_work/explosion-damage-2026-10-14/scenes-${Date.now()}`);
await mkdir(out,{recursive:true});
// Relative TMPDIR keeps Chromium's Unix socket path below sun_path's limit.
const env={...process.env,TMPDIR:'temp_work'};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:'0'},stdio:['ignore','pipe','inherit']});
const base=await new Promise((resolve,reject)=>{server.stdout.once('data',s=>resolve(s.toString().match(/http:\/\/127.0.0.1:\d+/)[0]));server.once('error',reject);});
let context;
const report={out,errors:[]};
try {
  context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,env,
    viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required',`--crash-dumps-dir=${out}`]});
  const page=await context.newPage();
  page.on('pageerror',e=>report.errors.push(e.stack));
  page.on('console',m=>{if(m.type()==='error')report.errors.push(m.text());});
  page.on('response',r=>{if(r.status()>=400)report.errors.push(`${r.status()} ${r.url()}`);});
  await page.addInitScript(()=>{
    localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,volume:0,resolution:'native',autoIntro:false}));
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  });
  await page.goto(base+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  report.setup=await page.evaluate(async()=>{
    const app=window.__redcat;
    if(!await app.startLevel(2))throw new Error('Graveyard could not start');
    app.pause();document.getElementById('pause').hidden=true;
    const w=app.world,g=app.gameplay,h=g.scripts;
    for(const motion of h.players.values())motion.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=true;
    g.hazards.clear();g.projectiles=[];g.gargoyleBlasts=[];
    for(const o of g.objects)if(['enemy','trigger','fairy','pickup'].includes(o.kind))o.enabled=false;
    const crate=g.find('AdamAnyActor72')[0],gate=g.find('hekacteur')[0];
    const enemies=g.objects.filter(o=>o.kind==='enemy'&&!o.boss);
    const near=enemies.find(o=>o.enemyType==='skeleton')||enemies.find(o=>o.enemyType==='frog')||enemies[0];
    const far=enemies.find(o=>o!==near&&o.enemyType===near.enemyType)||enemies.find(o=>o!==near);
    if(!crate||!gate||!near||!far)throw new Error('Authored fixture objects unavailable');
    for(const enemy of [near,far]){enemy.enabled=true;enemy.visible=true;enemy.health=100;enemy.animationState='idle';enemy.ambush=null;}
    g.state.maxHealth=20;g.state.health=20;g.playerReaction=null;g.hitCooldown=0;g.time=100;
    w.player.noClip=false;w.player.update=()=>{};w.updateCamera=()=>{};
    const input={forward:0,right:0,turn:0,jump:false,attack:false,use:false};
    w.syncActors(0);
    const initial=g.snapshot();
    const los=(a,b)=>w.collider.trace(a,b,[0,0,0],[0,0,0],w.physicalModels,null).fraction===1;
    const health=()=>({player:g.state.health,near:near.health,far:far.health,crate:crate.health,gate:gate.health});
    window.__explosionDamageFixture={app,w,g,h,crate,gate,near,far,input,initial,los,health};
    return {crate:{id:crate.id,name:crate.name,position:crate.position,settings:crate.actorSettings},gate:{id:gate.id,health:gate.health},near:{id:near.id,type:near.enemyType},far:{id:far.id,type:far.enemyType},initialHealth:health()};
  });
  report.results=await page.evaluate(async()=>{
    const f=window.__explosionDamageFixture,{w,g,h,crate,gate,near,far,input,initial,los,health}=f;
    const results={};
    const reset=()=>{
      g.restore(structuredClone(initial));g.explosions=[];g.explosionDamage=[];g.projectiles=[];g.hazards.clear();
      h.cutscene=false;h.camera=null;h.enemiesFrozen=true;w.player.noClip=false;
      for(const actor of w.actorInstances.values())delete actor.userData.explosionBounds;
      w.syncActors(0);w.syncModelStates();
    };
    const tick=(seconds,timings)=>{for(let elapsed=0;elapsed<seconds-1e-9;elapsed+=.025){const start=performance.now();w.update(Math.min(.025,seconds-elapsed),input);timings?.push(performance.now()-start);}};
    const detonate=()=>{
      // This is the real projectile-hit callback, including brcrate_hek's
      // compiled command which destroys the gate as well as the crate.
      g.playerProjectileHit(crate,{damage:1,type:0});w.syncActors(0);w.syncModelStates();
      const cell=g.explosionDamage.find(cell=>cell.sourceId===crate.id);
      if(!cell)throw new Error('Authored crate did not create a hurt cell');
      return cell;
    };
    const playerOffset=Number(g.settings.game.Player.EyeHeight)*32;
    const place=(cell)=>{
      const candidates=[];
      for(let i=0;i<24;i++){
        const angle=i*Math.PI/12,point=[cell.position[0]+Math.cos(angle)*105,cell.position[1]+45,cell.position[2]+Math.sin(angle)*105];
        candidates.push({point,visible:los(cell.position,point)});
      }
      const selected=candidates.find(candidate=>candidate.visible);
      if(!selected)throw new Error('No unobstructed near player point around authored crate');
      const point=selected.point;
      w.player.position=[point[0],point[1]-playerOffset,point[2]];
      near.position=[point[0],cell.position[1]+10,point[2]];
      far.position=[point[0]+600,cell.position[1]+10,point[2]];
      near.enabled=true;far.enabled=true;near.visible=true;far.visible=true;near.ambush=null;far.ambush=null;
      w.syncActors(0);
      for(const enemy of [near,far])delete w.actorInstances.get(enemy.id).userData.explosionBounds;
      return {point,feet:[...w.player.position],distance:Math.hypot(...point.map((v,i)=>v-cell.position[i])),playerOffset,candidates,nearBounds:near.explosionBounds(),nearActive:near.explosionActive(),farBounds:far.explosionBounds()};
    };
    reset();
    const before=health(),cell=detonate(),positions=place(cell);
    const unrelated=g.objects.filter(o=>o!==crate&&o!==gate&&o!==near&&o!==far&&!(o.kind==='actor'&&o.actorSettings?.destroyable)).map(o=>[o.id,o.health]);
    const otherDestroyables=g.objects.filter(o=>o!==crate&&o!==gate&&o.kind==='actor'&&o.actorSettings?.destroyable).map(o=>({id:o.id,before:o.health,position:[...o.position]}));
    const activeAtStart=g.explosionDamage.map(c=>structuredClone(c));
    const expectedPlayerDamage=activeAtStart.reduce((sum,c)=>sum+(los(c.position,positions.point)?Math.max(0,1-Math.hypot(...positions.point.map((v,i)=>v-c.position[i]))/c.radius)*c.rate*.4:0),0);
    const activeTickMs=[],expiredTickMs=[];
    tick(.15,activeTickMs);
    w.camera.position.set(cell.position[0]+230,cell.position[1]+170,cell.position[2]+260);w.camera.lookAt(...cell.position);
    w.updateRenderResidency();await w.geometryStream.settle();w.effects.update(0);w.render();
    const batches=[...w.effects.batches].filter(([key])=>key.startsWith('explosie')||key.startsWith('smoke_'));
    const sprites=batches.map(([key,batch])=>({key,count:batch.count}));
    const gl=w.renderer.getContext(),width=gl.drawingBufferWidth,height=gl.drawingBufferHeight;
    const pixels=new Uint8Array(width*height*4),hidden=new Uint8Array(pixels.length);
    gl.readPixels(0,0,width,height,gl.RGBA,gl.UNSIGNED_BYTE,pixels);
    const png=w.renderer.domElement.toDataURL('image/png').split(',')[1];
    const visibility=batches.map(([,batch])=>batch.mesh.visible);for(const [,batch]of batches)batch.mesh.visible=false;
    w.render();gl.readPixels(0,0,width,height,gl.RGBA,gl.UNSIGNED_BYTE,hidden);
    batches.forEach(([,batch],i)=>batch.mesh.visible=visibility[i]);w.render();
    let changedPixels=0;for(let i=0;i<pixels.length;i+=4)if(Math.abs(pixels[i]-hidden[i])+Math.abs(pixels[i+1]-hidden[i+1])+Math.abs(pixels[i+2]-hidden[i+2])>5)changedPixels++;
    const at15=health();tick(.05,activeTickMs);const midpoint=health(),midSave=structuredClone(g.snapshot());tick(.2,activeTickMs);const full=health();tick(.3,expiredTickMs);const afterExpiry=health();
    const changedUnrelated=unrelated.filter(([id,hp])=>g.objects.find(o=>o.id===id).health!==hp);
    const gateRoot=w.actorInstances.get(gate.id),gateCollider=w.collider.actors.find(actor=>actor.id===gate.id);
    results.near={before,at15,midpoint,full,afterExpiry,positions,activeAtStart,expiredCells:g.explosionDamage.length,
      expectedPlayerDamage,changedUnrelated,otherDestroyables:otherDestroyables.map(o=>({...o,after:g.objects.find(item=>item.id===o.id).health})),
      tickPerformance:{activeMs:activeTickMs,expiredMs:expiredTickMs,objects:g.objects.length,eligible:g.objects.filter(o=>o.health>0&&o.enabled!==false&&o.visible!==false&&(o.kind==='enemy'||o.kind==='actor'&&o.actorSettings?.destroyable)).length},
      gate:{health:gate.health,visible:gateRoot.visible,blocks:gateCollider.active()},
      visual:{changedPixels,sprites,png},scriptError:h.vm.lastError};
    g.restore(midSave);h.cutscene=false;h.enemiesFrozen=true;w.syncActors(0);
    const restoredMid=health(),restoredCells=structuredClone(g.explosionDamage);tick(.2);const restoredEnd=health();tick(.3);
    results.restore={midpoint,restoredMid,restoredEnd,afterExpiry:health(),restoredCells,expiredCells:g.explosionDamage.length};

    reset();const noClipCell=detonate();place(noClipCell);w.player.noClip=true;const noClipBefore=health();tick(.4);
    results.noClip={before:noClipBefore,after:health()};

    reset();const farCell=detonate();place(farCell);
    w.player.position=[farCell.position[0]+500,farCell.position[1]+45-playerOffset,farCell.position[2]];
    const outsideBefore=health();tick(.4);results.outside={before:outsideBefore,after:health(),point:w.player.position.map((v,i)=>v+(i===1?playerOffset:0))};

    reset();const blockedCell=detonate();place(blockedCell);
    const blocked=[];
    for(const y of [0,30,60,-30])for(let i=0;i<48;i++){
      const angle=i*Math.PI/24,point=[blockedCell.position[0]+Math.cos(angle)*130,blockedCell.position[1]+y,blockedCell.position[2]+Math.sin(angle)*130];
      if(!los(blockedCell.position,point))blocked.push(point);
    }
    if(blocked.length){
      const point=blocked[0];w.player.position=[point[0],point[1]-playerOffset,point[2]];
      const blockedBefore=health();tick(.4);results.blocked={before:blockedBefore,after:health(),point,distance:Math.hypot(...point.map((v,i)=>v-blockedCell.position[i])),candidateCount:blocked.length};
    } else results.blocked={skipped:'No occluded point within the native radius around this authored crate'};
    results.scriptError=h.vm.lastError;
    // Save through the application's normal profile API as well. This browser
    // owns a new profile directory and never touches the user's live save.
    reset();const reloadCell=detonate();place(reloadCell);tick(.2);
    results.reloadSaved={health:health(),time:g.time,cells:structuredClone(g.explosionDamage),position:[...w.player.position]};
    if(!f.app.saveGame(true))throw new Error('Isolated application save failed');
    return results;
  });
  report.results.reload=await page.evaluate(async()=>{
    const app=window.__redcat;
    if(!await app.loadSave())throw new Error('Isolated application load failed');
    app.pause();document.getElementById('pause').hidden=true;
    const g=app.gameplay,w=app.world,h=g.scripts;
    for(const motion of h.players.values())motion.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=true;
    w.player.update=()=>{};w.updateCamera=()=>{};
    const near=g.find('MovingEnemy29')[0],far=g.find('MovingEnemy30')[0],crate=g.find('AdamAnyActor72')[0],gate=g.find('hekacteur')[0];
    const health=()=>({player:g.state.health,near:near.health,far:far.health,crate:crate.health,gate:gate.health});
    const initial={health:health(),time:g.time,cells:structuredClone(g.explosionDamage),position:[...w.player.position]};
    w.effects.update(0);
    const visuals={effects:(g.explosions||[]).map(effect=>({sourceId:effect.sourceId,birth:effect.birth})),blastCohorts:w.effects.destructibles.blasts.length,
      sprites:[...w.effects.batches].filter(([key])=>key.startsWith('explosie')||key.startsWith('smoke_')).map(([key,batch])=>({key,count:batch.count}))};
    const input={forward:0,right:0,turn:0,jump:false,attack:false,use:false};
    for(let i=0;i<8;i++)w.update(.025,input);const end=health();
    for(let i=0;i<12;i++)w.update(.025,input);
    return {initial,visuals,end,afterExpiry:health(),expiredCells:g.explosionDamage.length,scriptError:h.vm.lastError};
  });
  await writeFile(path.join(out,'crate-explosion.png'),Buffer.from(report.results.near.visual.png,'base64'));
  delete report.results.near.visual.png;
  await writeFile(path.join(out,'report.json'),JSON.stringify(report,null,2)+'\n');
  const {near,restore,noClip,outside,blocked,reload,reloadSaved}=report.results;
  assert.equal(report.setup.crate.settings.explosion.SizePercentage,25);
  assert.equal(report.setup.crate.settings.explosion.DamagePercentage,25);
  assert.equal(near.activeAtStart.find(cell=>cell.sourceId===report.setup.crate.id).radius,175);
  assert.ok(near.full.player<near.before.player,'near RedCat loses health');
  assert.ok(near.full.near<near.before.near,'near enemy loses health');
  assert.equal(near.full.far,near.before.far,'outside enemy remains untouched');
  assert.ok(Math.abs(near.before.player-near.full.player-near.expectedPlayerDamage)<1e-8,'native .4-second damage integral reaches RedCat');
  assert.deepEqual(near.full,near.afterExpiry,'the finite hurt cell cannot continue damaging after expiry');
  assert.deepEqual(near.changedUnrelated,[],'unrelated objects remain untouched');
  assert.deepEqual(near.gate,{health:0,visible:false,blocks:false},'authored crate gate command stays intact');
  assert.ok(near.visual.changedPixels>0,'actual explosion artwork draws pixels');
  assert.equal(near.expiredCells,0);
  assert.deepEqual(restore.restoredMid,restore.midpoint,'mid-blast save restores the same health');
  assert.ok(Math.abs(restore.restoredEnd.player-near.full.player)<1e-8,'restore applies only the remaining hurt-cell lifetime');
  assert.deepEqual(restore.restoredEnd,restore.afterExpiry);assert.equal(restore.expiredCells,0);
  assert.deepEqual(reload.initial,reloadSaved,'application load restores the same mid-blast damage state');
  assert.ok(Math.abs(reload.end.player-near.full.player)<1e-8,'fresh world resumes only the remaining hurt-cell lifetime');
  assert.deepEqual(reload.end,reload.afterExpiry);assert.equal(reload.expiredCells,0);assert.equal(reload.scriptError,null);
  assert.equal(reload.visuals.effects.length,2,'both live authored explosions resume their presentation after load');
  assert.ok(reload.visuals.effects.every(effect=>effect.birth===100),'loaded visual age retains the original explosion birth');
  assert.ok(reload.visuals.blastCohorts>0&&reload.visuals.sprites.some(sprite=>sprite.count>0),'fresh world renders the resumed active blast');
  assert.equal(noClip.after.player,noClip.before.player,'noClip protects RedCat');
  assert.ok(noClip.after.near<noClip.before.near,'noClip does not prevent enemy damage');
  assert.equal(outside.after.player,outside.before.player,'outside RedCat remains untouched');
  if(!blocked.skipped){assert.ok(blocked.distance<175);assert.equal(blocked.after.player,blocked.before.player,'real world collision occludes hurt-cell damage');}
  assert.equal(report.results.scriptError,null);assert.deepEqual(report.errors,[]);
  console.log(`PASS authored crate: near RedCat/enemy damage, falloff/radius, real world LOS, noClip, gate script, visible artwork and mid-blast restoration. ${out}`);
} catch(error) {
  report.failure=error.stack;await writeFile(path.join(out,'report.json'),JSON.stringify(report,null,2)+'\n');throw error;
} finally {await context?.close();server.kill();}
