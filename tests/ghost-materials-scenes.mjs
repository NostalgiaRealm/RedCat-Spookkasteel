import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4221'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try{
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage({viewport:{width:960,height:720}}),errors=[],results=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.goto('http://127.0.0.1:4221/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  for(const fixture of [{level:2,name:'zombie6',variant:1},{level:2,name:'ghost2',variant:2},{level:3,name:'ghost01',variant:3}]){
    const result=await page.evaluate(async fixture=>{
      const app=window.__redcat;await app.startLevel(fixture.level);app.pause();document.getElementById('pause').hidden=true;
      const w=app.world,g=app.gameplay,h=g.scripts,THREE=await import('three');
      for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;
      const o=g.find(fixture.name)[0],actor=w.actorInstances.get(o.id),material=actor.userData.mesh.material[0],template=actor.userData.template;
      const all=g.objects.filter(o=>o.kind==='enemy'&&o.enemyType==='ghost').map(o=>{const a=w.actorInstances.get(o.id),m=a.userData.mesh.material[0];return {id:o.id,variant:o.variant,translucent:m.transparent,map:m.map?.image?.src,shared:m===a.userData.template.materials[0]};});
      const ordinary=await w.makeActor(o.actorFile),ordinaryMaterial=ordinary.userData.mesh.material[0];
      const zombie=g.find('ghost1')[0],zombieMaterial=zombie&&w.actorInstances.get(zombie.id)?.userData.mesh.material[0];
      const scene=new THREE.Scene();scene.background=new THREE.Color(0x294c86);scene.add(new THREE.AmbientLight(0xffffff,3));
      actor.position.set(0,0,0);actor.rotation.set(0,0,0);actor.visible=true;scene.add(actor);scene.updateMatrixWorld(true);
      const bounds=new THREE.Box3().setFromObject(actor),center=bounds.getCenter(new THREE.Vector3()),size=bounds.getSize(new THREE.Vector3()),span=Math.max(size.x,size.y)*1.35;
      const camera=new THREE.OrthographicCamera(-span*4/6,span*4/6,span/2,-span/2,.1,2000);camera.position.copy(center).add(new THREE.Vector3(0,0,250));camera.lookAt(center);camera.updateProjectionMatrix();
      const target=new THREE.WebGLRenderTarget(256,192),pixels=()=>{const p=new Uint8Array(256*192*4);w.renderer.setRenderTarget(target);w.renderer.render(scene,camera);w.renderer.readRenderTargetPixels(target,0,0,256,192,p);return p;};
      const translucent=pixels();material.transparent=false;material.needsUpdate=true;const opaque=pixels();actor.visible=false;const empty=pixels();actor.visible=true;material.transparent=true;material.needsUpdate=true;
      let bodyPixels=0,blendedPixels=0;
      for(let i=0;i<opaque.length;i+=4){const solid=Math.abs(opaque[i]-empty[i])+Math.abs(opaque[i+1]-empty[i+1])+Math.abs(opaque[i+2]-empty[i+2]);if(solid<45)continue;bodyPixels++;const blend=Math.abs(translucent[i]-empty[i])+Math.abs(translucent[i+1]-empty[i+1])+Math.abs(translucent[i+2]-empty[i+2]);if(blend>3&&blend<solid*.97)blendedPixels++;}
      w.renderer.setRenderTarget(null);w.renderer.render(scene,camera);target.dispose();
      // Capture before the application's next animation frame replaces this
      // isolated render with the paused level's ordinary camera view.
      const screenshot=w.renderer.domElement.toDataURL('image/png').split(',')[1];
      return {screenshot,fixture,id:o.id,enemyType:o.enemyType,variant:o.variant,material:{map:material.map.image.src,tint:material.color.toArray(),opacity:material.opacity,transparent:material.transparent,depthWrite:material.depthWrite,alphaTest:material.alphaTest},template:{map:template.materials[0].map.image.src,transparent:template.materials[0].transparent},ordinary:{shared:ordinaryMaterial===template.materials[0],transparent:ordinaryMaterial.transparent,map:ordinaryMaterial.map.image.src},zombie:zombieMaterial?{transparent:zombieMaterial.transparent,map:zombieMaterial.map.image.src}:null,all,bodyPixels,blendedPixels,bounds:{min:bounds.min.toArray(),max:bounds.max.toArray()}};
    },fixture);
    const {screenshot,...report}=result;
    results.push(report);await writeFile(`artifacts/ghost-transparency-${fixture.variant}.png`,Buffer.from(screenshot,'base64'));
  }
  await writeFile('artifacts/ghost-materials-scenes.json',JSON.stringify({results,errors},null,2)+'\n');
  for(const r of results){
    assert.equal(r.enemyType,'ghost');assert.equal(r.variant,r.fixture.variant);assert.ok(r.material.map.includes('/assets/ghosts/ghost.png'));
    assert.deepEqual(r.material.tint,r.variant===1?[0,1,0]:r.variant===2?[1,1,0]:[1,0,0]);assert.equal(r.material.transparent,true);assert.equal(r.material.depthWrite,false);
    assert.ok(r.all.every(o=>o.translucent&&!o.shared&&o.map.includes('/assets/ghosts/ghost.png')),'every ghost instance receives its own material');
    assert.equal(r.template.transparent,false);assert.equal(r.ordinary.transparent,false);assert.equal(r.ordinary.shared,true);
    if(r.zombie)assert.equal(r.zombie.transparent,false,'the zombie named ghost1 remains opaque');
    assert.ok(r.bodyPixels>1000,`${r.fixture.name}: original actor body rendered`);
    assert.ok(r.blendedPixels/r.bodyPixels>.8,`${r.fixture.name}: rendered background is visible through more than 80% of its body pixels (${r.blendedPixels}/${r.bodyPixels})`);
  }
  assert.deepEqual(errors,[]);
  console.log('PASS all three original ghost variants use their native bitmap/mask and tint; rendered body pixels blend with the background, while shared actor templates, props and the zombie named ghost1 remain opaque; no browser/HTTP errors.');
}finally{await browser?.close();server.kill();}
