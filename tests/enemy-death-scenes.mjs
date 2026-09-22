import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4257'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage({viewport:{width:1100,height:700}}),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.goto('http://127.0.0.1:4257/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const result=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(2);app.pause();document.getElementById('pause').hidden=true;
    const w=app.world,g=app.gameplay,h=g.scripts,THREE=await import('three'),{DEATH_SMOKE_TEXTURE}=await import('./src/enemy-death-effects.js');
    for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=false;
    const names=['zombie1','zombie6','spider1'],objects=names.map(n=>g.find(n)[0]),actors=objects.map(o=>w.actorInstances.get(o.id));
    const livingGhost=g.find('mazeghost1')[0],livingGhostMaterial=w.actorInstances.get(livingGhost.id).userData.mesh.material[0],livingBefore={opacity:livingGhostMaterial.opacity,map:livingGhostMaterial.map.uuid};
    const templates=actors.map(a=>a.userData.template.materials.map(m=>({opacity:m.opacity,transparent:m.transparent})));
    const scene=new THREE.Scene();scene.background=new THREE.Color(0x294c86);scene.add(new THREE.AmbientLight(0xffffff,2));
    objects.forEach((o,i)=>{o.position=[(i-1)*140,0,0];o.enabled=true;o.visible=true;o.yaw=0;scene.add(actors[i]);});
    const smoke=w.effects.batches.get(DEATH_SMOKE_TEXTURE);scene.add(smoke.mesh);
    const camera=new THREE.PerspectiveCamera(42,1100/700,.1,2000);camera.position.set(0,100,520);camera.lookAt(0,40,0);camera.updateProjectionMatrix();
    const reports=[],screenshots=[];
    function capture(label,age){
      w.effects.update(0);const count=smoke.count,buffers=[...smoke.positions.array.slice(0,count*3),...smoke.colors.array.slice(0,count*4)];
      w.effects.update(0);const stable=buffers.every((v,i)=>v===[...smoke.positions.array.slice(0,count*3),...smoke.colors.array.slice(0,count*4)][i]);
      w.renderer.setRenderTarget(null);w.renderer.render(scene,camera);screenshots.push({label,png:w.renderer.domElement.toDataURL('image/png').split(',')[1]});
      const target=new THREE.WebGLRenderTarget(220,140);target.texture.colorSpace=THREE.SRGBColorSpace;const pixels=new Uint8Array(220*140*4);w.renderer.setRenderTarget(target);w.renderer.render(scene,camera);w.renderer.readRenderTargetPixels(target,0,0,220,140,pixels);w.renderer.setRenderTarget(null);target.dispose();
      let purple=0;for(let i=0;i<pixels.length;i+=4)if(pixels[i]>100&&pixels[i+2]>110&&pixels[i]>pixels[i+1]*1.4&&pixels[i+2]>pixels[i+1]*1.4)purple++;
      reports.push({label,age,count,stable,purple,objects:objects.map((o,i)=>({name:names[i],type:o.enemyType,health:o.health,visible:actors[i].visible,opacity:actors[i].userData.mesh.material[0].opacity,animationUntil:o.animationUntil,corpseUntil:o.corpseUntil,deathStartedAt:o.deathStartedAt,map:actors[i].userData.mesh.material[0].map?.image?.src,anchors:o.deathSmokeAnchors?.length}))});
    }
    g.time=100;w.syncActors(0);capture('alive',-1);
    objects.forEach(o=>g.hurtEnemy(o,o.health));w.syncActors(0);capture('defeated',0);
    const duration=g.enemyDuration(objects[0],'death'),mid=duration+2.5;
    for(let age=.05;age<mid;age+=.05){g.time=100+age;w.syncActors(.05);}
    g.time=100+mid;w.syncActors(.05);capture('fading',mid);const saved=g.snapshot(),anchors=structuredClone(objects.map(o=>o.deathSmokeAnchors));
    g.time=112;w.syncActors(0);capture('gone',12);
    g.restore(saved);w.syncActors(0);capture('restored',mid);
    const restoredAnchors=objects.every((o,i)=>JSON.stringify(o.deathSmokeAnchors)===JSON.stringify(anchors[i]));
    const templatesUnchanged=actors.every((a,i)=>JSON.stringify(a.userData.template.materials.map(m=>({opacity:m.opacity,transparent:m.transparent})))===JSON.stringify(templates[i]));
    return {reports,screenshots,restoredAnchors,templatesUnchanged,livingBefore,livingAfter:{opacity:livingGhostMaterial.opacity,map:livingGhostMaterial.map.uuid}};
  });
  for(const shot of result.screenshots)await writeFile(`artifacts/enemy-death-${shot.label}.png`,Buffer.from(shot.png,'base64'));
  delete result.screenshots;await writeFile('artifacts/enemy-death-scenes.json',JSON.stringify({result,errors},null,2)+'\n');
  const by=Object.fromEntries(result.reports.map(r=>[r.label,r]));
  assert.equal(by.alive.count,0);assert.equal(by.defeated.count,45);assert.equal(by.fading.count,45);assert.ok(by.fading.purple>100,'native purple smoke is rendered');
  assert.ok(Math.abs(by.fading.objects[0].opacity-.5)<1e-6,'body is half transparent halfway through native fade');
  assert.ok(by.fading.objects[1].map.includes('/assets/ghosts/ghost.png'),'ghost keeps its native alpha texture during fade');
  assert.ok(by.gone.objects.every(o=>!o.visible));assert.equal(by.gone.count,0);
  assert.deepEqual(by.restored.objects,by.fading.objects);assert.ok(result.restoredAnchors);assert.ok(result.templatesUnchanged);assert.deepEqual(result.livingBefore,result.livingAfter);assert.ok(result.reports.every(r=>r.stable));assert.deepEqual(errors,[]);
  console.log('PASS original zombie, ghost and spider die, fade, emit native purple smoke, disappear and resume mid-fade from save; redraws/shared materials remain stable; no browser errors.');
} finally {await browser?.close();server.kill();}
