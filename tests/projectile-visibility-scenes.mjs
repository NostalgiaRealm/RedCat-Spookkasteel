import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

// Focused source-only check: actual Brutus projectiles in the two original
// arenas, plus their rendered footprint. Does not run the old boss campaign.
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4281'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage({viewport:{width:1440,height:900}}),errors=[];
  await page.addInitScript(()=>{
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
    localStorage.setItem('redcat.settings.v1',JSON.stringify({touchControls:'on',camera:'third',resolution:'auto',autoIntro:false}));
  });
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.goto('http://127.0.0.1:4281/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const reports=[];
  for(const [level,enemyType,label] of [[0,'brutusm','forest-mushroom'],[2,'brutusb','graveyard-bone']]) {
    if(process.argv[2]&&label!==process.argv[2])continue;
    const result=await page.evaluate(async({level,enemyType,label})=>{
      const app=window.__redcat;await app.startLevel(level);app.pause();
      const w=app.world,g=app.gameplay,h=g.scripts;
      for(const p of h.players.values())p.stop();h.cutscene=false;h.enemiesFrozen=false;h.camera=null;
      const boss=g.objects.find(o=>o.enemyType===enemyType);boss.enabled=true;if(boss.boss)boss.boss.hidden=false;
      const side=level===2?-1:1;
      w.player.position=[boss.position[0]+140,boss.position[1]+1,boss.position[2]+450*side];w.player.grounded=true;w.player.velocityY=0;w.yaw=level===2?Math.PI:0;w.pitch=.03;
      boss.yaw=w.yaw;w.syncActors(0);w.syncPlayer(0,{});w.updateCamera(1,true);
      g.projectiles=[];g.hazards.clear();g.enemyProjectile(boss,w.player.position);
      const shot=g.projectiles[0];
      // Use the actual imported environment for collision, excluding the caster.
      const collisions=[];
      const trace=(a,b,r,p)=>{const hit=w.collider.trace(a,b,[-r,-r,-r],[r,r,r],w.physicalModels,{mask:'canBeShot',ignoreId:p.sourceId});if(hit.fraction<1)collisions.push(hit);return hit;};
      for(let i=0;i<24;i++){g.hazards.advance(1/60);g.updateProjectiles(1/60,w.player.position,trace);}
      w.syncProjectiles();w.syncHazards();w.effects.update(0);w.render();
      const mesh=w.projectileMeshes.get(shot.id);if(!mesh)return {label,error:'shot collided before capture',collisions,screenshot:w.renderer.domElement.toDataURL('image/png').split(',')[1]};
      const depth=-mesh.position.clone().applyMatrix4(w.camera.matrixWorldInverse).z,style=mesh.userData.style;
      const nativeWidth=style.width*shot.spriteScale/style.nativeScale;
      const projection=w.camera.projectionMatrix.elements[5];
      const report={label,kind:shot.kind,age:shot.age,position:shot.position,depth,nativeWidth,width:mesh.scale.x,
        height:mesh.scale.y,frame:mesh.material.map.image.src,screenPixelsAt1080:mesh.scale.x*projection*1080/(2*depth),
        damage:shot.damage,radius:shot.radius,segments:g.hazards.segments.length,
        trailOpacity:g.hazards.segments.map(s=>w.hazardMeshes.get(s.id)?.material.opacity),
        screenshot:w.renderer.domElement.toDataURL('image/png').split(',')[1]};
      // Drawing twice is presentation-only, including after a camera switch.
      const before=JSON.stringify(g.snapshot());w.syncProjectiles();w.syncHazards();
      report.redrawPreservesSimulation=before===JSON.stringify(g.snapshot());
      const previous=mesh.material.map;g.scripts.enemiesFrozen=true;
      g.updateProjectiles(2,w.player.position,trace);w.syncProjectiles();report.freezeKeepsFrame=mesh.material.map===previous;
      g.scripts.enemiesFrozen=false;
      const saved=g.snapshot();g.restore(saved);w.syncProjectiles();w.syncHazards();
      report.restoreKeepsFrame=w.projectileMeshes.get(shot.id).material.map===previous;
      g.updateProjectiles(.05,w.player.position,(a,b)=>({fraction:0,end:a}));w.syncProjectiles();w.syncHazards();
      report.impactRetiresVisuals=g.projectiles.length===0&&g.hazards.segments.length===0&&w.projectileMeshes.size===0&&w.hazardMeshes.size===0;
      return report;
    },{level,enemyType,label});
    await writeFile(`artifacts/projectile-${label}.png`,Buffer.from(result.screenshot,'base64'));delete result.screenshot;
    assert.ok(!result.error,JSON.stringify(result));
    assert.ok(result.width>=result.nativeWidth-1e-8&&result.width<=result.nativeWidth*2.5+1e-8,JSON.stringify(result));
    assert.ok(result.screenPixelsAt1080>=24-1e-5||result.width===result.nativeWidth*2.5);
    assert.ok(result.redrawPreservesSimulation&&result.freezeKeepsFrame&&result.restoreKeepsFrame&&result.impactRetiresVisuals);
    assert.equal(result.kind,level===0?'mushRoom':'bone');
    if(level===0){assert.ok(result.segments>0);assert.ok(Math.max(...result.trailOpacity)>.49);}
    else assert.equal(result.segments,0);
    reports.push(result);
  }
  assert.deepEqual(errors,[]);
  await writeFile('artifacts/projectile-visibility-scenes.json',JSON.stringify({reports,errors},null,2)+'\n');
  console.log('PASS original forest/graveyard Brutus sprites, readable footprint, ribbon rendering/impact cleanup, pause and save restoration; no browser errors.');
} finally {await browser?.close();server.kill();}
