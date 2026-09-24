import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {pathToFileURL} from 'node:url';
import assert from 'node:assert/strict';

export async function verifyEnvironmentScenes(page) {
  await mkdir('artifacts',{recursive:true});
  await page.evaluate(async()=>{
    const THREE=await import('three'),{BspCollider}=await import('./src/collision.js');
    window.__environmentFixture={
      async start(index) {
        const app=window.__redcat;await app.startLevel(index);app.pause();document.getElementById('pause').hidden=true;
        const game=app.gameplay,host=game.scripts;
        for(const player of host.players.values())player.stop();
        host.update=()=>{};host.cutscene=false;host.camera=null;host.enemiesFrozen=false;
        for(const object of game.objects)if(['enemy','trigger','pickup'].includes(object.kind))object.enabled=false;
        game.hitCooldown=0;game.state.health=10;game.state.maxHealth=10;
        this.contentsCollider=new BspCollider(app.world.level.collision);
      },
      // Compare actual rendered fragments. Mesh existence alone did not catch
      // the old sub-0.5 opacity/alpha-test regression.
      pixels(meshes) {
        const world=window.__redcat.world,renderer=world.renderer;
        const target=new THREE.WebGLRenderTarget(320,180),before=new Uint8Array(320*180*4),after=new Uint8Array(before.length);
        const previous=renderer.getRenderTarget(),visibility=meshes.map(mesh=>mesh.visible);
        renderer.setRenderTarget(target);renderer.render(world.scene,world.camera);renderer.readRenderTargetPixels(target,0,0,320,180,before);
        meshes.forEach(mesh=>mesh.visible=false);
        renderer.render(world.scene,world.camera);renderer.readRenderTargetPixels(target,0,0,320,180,after);
        meshes.forEach((mesh,index)=>mesh.visible=visibility[index]);renderer.setRenderTarget(previous);target.dispose();
        let changed=0;
        for(let i=0;i<before.length;i+=4)if(Math.abs(before[i]-after[i])+Math.abs(before[i+1]-after[i+1])+Math.abs(before[i+2]-after[i+2])>3)changed++;
        world.render();return changed;
      },
      place(position) {
        const world=window.__redcat.world;
        world.player.position=[...position];world.player.velocityY=0;world.player.grounded=false;
        world.syncPlayer(0,{});
      },
    };
    await window.__environmentFixture.start(0);
  });
  const forest=[];
  for(const model of [56,57]) {
    const result=await page.evaluate(model=>{
      const app=window.__redcat,world=app.world,game=app.gameplay,fixture=window.__environmentFixture;
      const geometry=world.level.collision.models[model],center=geometry.min.map((v,i)=>(v+geometry.max[i])/2);
      const meshes=world.modelMeshes.get(model)||[];
      const water=game.objects.find(object=>object.modelIndex===model&&object.kind==='trigger');water.enabled=true;
      // Find an unblocked player-sized portion of each original water cell.
      const candidates=[];
      for(let x=geometry.min[0]+16;x<geometry.max[0]-16;x+=16)for(let z=geometry.min[2]+16;z<geometry.max[2]-16;z+=16)candidates.push([x,geometry.max[1]-5,z]);
      candidates.sort((a,b)=>Math.hypot(a[0]-center[0],a[2]-center[2])-Math.hypot(b[0]-center[0],b[2]-center[2]));
      const position=candidates.find(p=>(fixture.contentsCollider.contents(p,world.player.mins,world.player.maxs,[model])&0x10000)&&!world.collider.trace(p,p,world.player.mins,world.player.maxs,world.physicalModels).startSolid);
      if(!position)throw new Error('No clear original water cell for model '+model);
      fixture.place(position);game.state.health=10;game.hitCooldown=2;
      for(let i=0;i<20;i++)world.update(.025,{forward:0,right:0});
      const health=game.state.health,feet=[...world.player.position];
      world.camera.position.set(center[0]+125,geometry.max[1]+125,center[2]+165);world.camera.lookAt(center[0],geometry.max[1],center[2]);
      const pixels=fixture.pixels(meshes),visible=meshes.every(mesh=>mesh.visible);
      const materials=meshes.map(mesh=>({opacity:mesh.material.opacity,alphaTest:mesh.material.alphaTest,depthWrite:mesh.material.depthWrite}));
      const previousHealth=game.state.health;fixture.place([position[0],geometry.max[1]+12,position[2]]);
      world.update(.025,{forward:0,right:0});const aboveDamage=previousHealth-game.state.health;
      water.enabled=false;
      fixture.place(feet);world.camera.position.set(center[0]+125,geometry.max[1]+125,center[2]+165);world.camera.lookAt(center[0],geometry.max[1],center[2]);world.render();
      return {model,meshCount:meshes.length,visible,pixels,materials,solid:world.physicalModels.includes(model),damage:10-health,feet,aboveDamage};
    },model);
    assert.ok(result.meshCount>0);assert.equal(result.visible,true);assert.equal(result.solid,false);
    assert.ok(result.pixels>50,`Water ${model} contributes only ${result.pixels} visible pixels`);
    assert.ok(Math.abs(result.damage-.5)<1e-8);assert.equal(result.aboveDamage,0);
    for(const material of result.materials){assert.equal(material.opacity,125/255);assert.ok(material.alphaTest<material.opacity);assert.equal(material.depthWrite,false);}
    await page.screenshot({path:`artifacts/forest-water-${model}.png`});forest.push(result);
  }
  const castle=await page.evaluate(async()=>{
    const fixture=window.__environmentFixture;await fixture.start(1);
    const app=window.__redcat,world=app.world,game=app.gameplay;
    fixture.place([-84,-130,1450]);game.hitCooldown=2;
    for(let i=0;i<20;i++)world.update(.025,{forward:0,right:0});
    const damage=10-game.state.health,feet=[...world.player.position],contents=world.collider.contents(feet,world.player.mins,world.player.maxs,[0]);
    const texture=world.level.textures.find(texture=>texture.name==='Air_Wtr000');
    const meshes=(world.modelMeshes.get(0)||[]).filter(mesh=>mesh.material.map?.image?.src.endsWith(texture.file));
    world.camera.position.set(-260,-20,1650);world.camera.lookAt(-84,-120,1450);
    const pixels=fixture.pixels(meshes);
    // Put the original drawbridge in its authored lowered pose; contact with
    // the solid deck must not inherit water contents from below it.
    game.scripts.modelTransforms.set(46,{origin:[0,0,0],translation:[0,0,0],rotation:[0,0,0,1]});world.syncModels();
    fixture.place([-84,-31.95,1370]);const health=game.state.health;
    for(let i=0;i<20;i++)world.update(.025,{forward:0,right:0});
    const bridge={damage:health-game.state.health,grounded:world.player.grounded,feet:[...world.player.position],contents:world.collider.contents(world.player.position,world.player.mins,world.player.maxs,[0])};
    world.camera.position.set(-260,-20,1650);world.camera.lookAt(-84,-120,1450);world.render();
    return {damage,feet,contents,meshCount:meshes.length,pixels,bridge};
  });
  assert.ok(castle.meshCount>0);assert.ok(castle.pixels>50);assert.ok(castle.contents&0x20000);
  assert.ok(Math.abs(castle.damage-1.5)<1e-8);assert.equal(castle.bridge.damage,0);assert.equal(castle.bridge.grounded,true);assert.equal(castle.bridge.contents&0x60000,0);
  await page.screenshot({path:'artifacts/castle-moat-water.png'});
  const mushroom=await page.evaluate(async()=>{
    const fixture=window.__environmentFixture;await fixture.start(0);
    const world=window.__redcat.world,game=window.__redcat.gameplay,boss=game.find('brutus')[0];
    fixture.place([boss.position[0]+150,boss.position[1],boss.position[2]+80]);
    game.enemyProjectile(boss,[boss.position[0],boss.position[1],boss.position[2]+260]);
    for(let i=0;i<12;i++)world.update(.025,{forward:0,right:0});
    const segments=game.hazards.segments,first=segments[0],last=segments.at(-1);
    if(!first||!last)throw new Error('Brutus projectile produced no ribbon');
    const focus=last.from.map((v,i)=>(v+first.to[i])/2);
    world.camera.position.set(focus[0]+95,focus[1]+55,focus[2]+100);world.camera.lookAt(...focus);world.syncHazards();
    const meshes=[...world.hazardMeshes.values()],pixels=fixture.pixels(meshes);
    const coordinates=meshes[0].geometry.attributes.position.array;
    const width=Math.hypot(coordinates[3]-coordinates[0],coordinates[4]-coordinates[1],coordinates[5]-coordinates[2]);
    const beforeFreeze=JSON.stringify(game.hazards.snapshot());game.scripts.enemiesFrozen=true;
    for(let i=0;i<4;i++)world.update(.05,{forward:0,right:0});
    const frozen=JSON.stringify(game.hazards.snapshot())===beforeFreeze;game.scripts.enemiesFrozen=false;
    const save=JSON.parse(JSON.stringify(game.snapshot())),expected=JSON.stringify(game.hazards.snapshot());
    game.hazards.clear();game.restore(save);world.syncHazards();const restored=expected===JSON.stringify(game.hazards.snapshot());
    // Cross an older harmless ribbon while its owning projectile continues
    // flying. Native impact/expiry destroys the complete ribbon.
    game.state.health=10;game.hitCooldown=0;
    const contact=game.hazards.segments[0].from;fixture.place([contact[0],contact[1]-25,contact[2]]);
    world.update(.025,{forward:0,right:0});const damage=10-game.state.health;
    world.update(.025,{forward:0,right:0});const overlappingDamage=10-game.state.health;
    // Keep the diagnostic view on the surviving ribbon after measuring damage.
    fixture.place([boss.position[0]+150,boss.position[1],boss.position[2]+80]);
    world.camera.position.set(focus[0]+100,focus[1]+20,focus[2]);world.camera.lookAt(...focus);world.syncHazards();world.render();
    return {segments:segments.length,meshes:meshes.length,pixels,width,physicsWidth:segments[0].width,frozen,restored,damage,overlappingDamage,texture:meshes[0].material.map.image.src};
  });
  assert.ok(mushroom.segments>2);assert.equal(mushroom.meshes,mushroom.segments);assert.ok(mushroom.pixels>5);
  assert.equal(mushroom.physicsWidth,6.4);assert.ok(mushroom.width>=6.4-.001);assert.equal(mushroom.frozen,true);assert.equal(mushroom.restored,true);
  assert.equal(mushroom.damage,0);assert.equal(mushroom.overlappingDamage,0);assert.match(mushroom.texture,/mushroom-trail\.png$/);
  await page.screenshot({path:'artifacts/brutus-mushroom-trail.png'});
  const cleared=await page.evaluate(()=>{
    const world=window.__redcat.world,game=world.gameplay;game.respawn();world.syncHazards();
    return {segments:game.hazards.segments.length,meshes:world.hazardMeshes.size};
  });
  assert.deepEqual(cleared,{segments:0,meshes:0});
  await writeFile('artifacts/environment-scenes.json',JSON.stringify({forest,castle,mushroom,cleared},null,2)+'\n');
  console.log('PASS original forest/castle water pixels, continuous liquid damage and safe bridge, original mushroom ribbon, contact/freeze/save/respawn.');
}

if(import.meta.url===pathToFileURL(process.argv[1]).href) {
  const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4182'},stdio:['ignore','pipe','inherit']});
  await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
  let browser;
  try {
    browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
    const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
    page.on('pageerror',error=>errors.push(error.stack));page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
    await page.goto('http://127.0.0.1:4182/?skipIntro');await page.waitForFunction(()=>window.__redcat);
    await verifyEnvironmentScenes(page);assert.deepEqual(errors,[]);
  }finally{await browser?.close();server.kill();}
}
