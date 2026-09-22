import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';
const fairyOnly=process.argv.includes('--fairy-only');
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4198'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});let browser;
try {
  browser=await chromium.launch({executablePath:'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.goto('http://127.0.0.1:4198/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const pause=level=>page.evaluate(async level=>{const a=window.__redcat;await a.startLevel(level);a.pause();document.getElementById('pause').hidden=true;for(const p of a.gameplay.scripts.players.values())p.stop();a.gameplay.scripts.camera=null;a.gameplay.scripts.cutscene=false;},level);
  const webs=[];
  if(!fairyOnly){
  await pause(2);
  for(let index=0;index<2;index++) {
    webs.push(await page.evaluate(async index=>{
      const {world:w}=window.__redcat,THREE=await import('three');
      const actors=[...w.actorInstances.values()].filter(a=>/spiderweb/i.test(a.userData.entity?.ActorFileName||a.userData.object?.entity.ActorFileName||a.userData.template?.data.name||''));
      const entities=w.level.entities.filter(e=>/spiderweb/i.test(e.ActorFileName||''));
      const actor=w.actorInstances.get(entities[index]['%name%']);actor.visible=true;
      w.scene.updateMatrixWorld(true);const box=new THREE.Box3().setFromObject(actor),center=box.getCenter(new THREE.Vector3());
      w.player.position=center.toArray();w.redcat.visible=false;
      const eye=center.clone().add(new THREE.Vector3(index?0:140,15,index?140:0));
      w.camera.position.copy(eye);w.camera.lookAt(center);w.render();
      const materials=actor.userData.mesh.material;
      return {id:entities[index]['%name%'],bounds:[box.min.toArray(),box.max.toArray()],maps:materials.map(m=>m.map?.image?.src),transparent:materials.every(m=>m.transparent),range:[...w.modelMeshes.values()].flat().reduce((a,mesh)=>a+mesh.geometry.drawRange.count,0)};
    },index));
    assert.equal(webs[index].transparent,true);assert.ok(webs[index].maps.every(src=>src.includes('128white-web_a2.png')));assert.ok(webs[index].range>0);
    await page.screenshot({path:`artifacts/cobweb-original-alpha-${index+1}.png`});
  }
  }
  await pause(0);
  const fairy=await page.evaluate(()=>{
    const {world:w,gameplay:g}=window.__redcat,host=g.scripts;
    for(const o of g.objects)if(['enemy','trigger'].includes(o.kind)||o.entity.classname==='Fairy')o.enabled=false;
    const fn=host.vm.program.functions.find(f=>f.name==='CSL001_MotionCommand');
    for(const label of ['rcshow','startcutscene','startcamera','startfairy'])host.vm.invoke(fn,[label,0]);
    const o=g.find('fairy11')[0];w.player.grounded=true;w.syncPlayer(0,{});w.updateCamera(1,true);w.syncActors(0);
    for(let i=0;i<16;i++)w.effects.update(.25);w.render();
    const s=w.effects.entries.get(o.id);return {id:o.id,position:s.fairyGeometry.light.position,sprites:s.fairyGeometry.sprites.length,rays:s.fairyGeometry.rays.length,range:[...w.modelMeshes.values()].flat().reduce((a,mesh)=>a+mesh.geometry.drawRange.count,0)};
  });
  assert.ok(fairy.sprites>9&&fairy.sprites<=59);assert.ok(fairy.rays>0&&fairy.range>0);await page.screenshot({path:'artifacts/fleurifee-native-orbits-halo.png'});
  const departure=await page.evaluate(id=>{
    const w=window.__redcat.world,o=w.gameplay.objects.find(o=>o.id===id);o.enabled=false;w.effects.update(.2);w.render();
    const state=w.effects.entries.get(id);return {sprites:state.fairyGeometry.sprites.length,light:state.fairyGeometry.light,rays:state.fairyGeometry.rays.length};
  },fairy.id);
  assert.ok(departure.sprites>20&&departure.sprites<=50);assert.equal(departure.light,null);await page.screenshot({path:'artifacts/fleurifee-native-departure.png'});
  assert.deepEqual(errors,[]);await writeFile(fairyOnly?'artifacts/native-fairy-scenes.json':'artifacts/native-visual-scenes.json',JSON.stringify({webs,fairy,departure},null,2)+'\n');
  console.log(fairyOnly?'PASS original fairy appearance, orbital layers and separate departure; no HTTP or browser errors.':'PASS both authored web alpha overrides, fairy halo/orbits and separate departure, no HTTP or browser errors.');
} finally {await browser?.close();server.kill();}
