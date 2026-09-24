import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4295'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));
  page.on('console',m=>{if(m.type()==='error')errors.push(m.text());});
  page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4})));
  await page.goto('http://127.0.0.1:4295/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const gpu=process.argv.includes('--impacts-only')?[]:await page.evaluate(async()=>{
    const THREE=await import('three');
    const {patchWorldLightShader}=await import('/src/world-lighting-material.js');
    const {worldLightFrame,worldLightmapLuxel}=await import('/src/world-lighting.js');
    const renderer=new THREE.WebGLRenderer(),scene=new THREE.Scene(),camera=new THREE.OrthographicCamera(-16,16,16,-16,1,100);
    const target=new THREE.WebGLRenderTarget(32,32);renderer.setRenderTarget(target);
    const bytes=new Uint8Array(8*8*4);for(let i=0;i<bytes.length;i+=4)bytes.set([51,51,51,255],i);
    const atlas=new THREE.DataTexture(bytes,8,8);atlas.needsUpdate=true;atlas.magFilter=atlas.minFilter=THREE.LinearFilter;
    const geometry=new THREE.PlaneGeometry(32,32),position=geometry.attributes.position;
    const axes=worldLightFrame([1,0,.5],[0,1,0],[-16,-16],[0,0,1],0),uv=[],u=[],v=[],mins=[];
    for(let i=0;i<position.count;i++){
      uv.push((1.5+(position.getX(i)+16)/16)/8,(1.5+(position.getY(i)+16)/16)/8);
      u.push(...axes.u);v.push(...axes.v);mins.push(...axes.min);
    }
    geometry.setAttribute('uv1',new THREE.Float32BufferAttribute(uv,2));
    geometry.setAttribute('nativeLightU',new THREE.Float32BufferAttribute(u,3));
    geometry.setAttribute('nativeLightV',new THREE.Float32BufferAttribute(v,3));
    geometry.setAttribute('nativeLightMinUV',new THREE.Float32BufferAttribute(mins,2));atlas.channel=1;
    const uniforms={effectLightPosition:{value:Array.from({length:8},()=>new THREE.Vector3())},
      effectLightColor:{value:Array.from({length:8},()=>new THREE.Color(0))},effectLightRadius:{value:new Float32Array(8)},
      effectLightCount:{value:0},effectAtlasSize:{value:new THREE.Vector2(8,8)}};
    const material=new THREE.MeshBasicMaterial({lightMap:atlas,lightMapIntensity:Math.PI});
    material.onBeforeCompile=shader=>patchWorldLightShader(shader,uniforms);
    const mesh=new THREE.Mesh(geometry,material);scene.add(mesh);const reports=[];
    for(const [label,lights,moving]of[
      ['baked',[],false],
      ['oblique',[{position:[10.25,3.75,20.125],radius:100,color:[.4,.7,.2]}],false],
      ['moving-oblique',[{position:[10.25,3.75,20.125],radius:100,color:[.4,.7,.2]}],true],
      ['clipped-corners',[{position:[-.25,-4.75,1.125],radius:300,color:[1,.8,.6]},{position:[12,12,0],radius:40,color:[.1,.2,.5]}],false],
    ]) {
      mesh.rotation.set(0,moving?.37:0,0);mesh.position.set(moving?31:0,moving?12:0,moving?-9:0);mesh.updateMatrixWorld(true);
      camera.position.set(0,0,50).applyMatrix4(mesh.matrixWorld);camera.up.set(0,1,0).transformDirection(mesh.matrixWorld);camera.lookAt(mesh.position);camera.updateMatrixWorld(true);
      uniforms.effectLightCount.value=lights.length;
      for(let i=0;i<lights.length;i++){
        uniforms.effectLightPosition.value[i].fromArray(lights[i].position).applyMatrix4(mesh.matrixWorld);
        uniforms.effectLightColor.value[i].fromArray(lights[i].color);uniforms.effectLightRadius.value[i]=lights[i].radius;
      }
      renderer.render(scene,camera);const actual=new Uint8Array(32*32*4);renderer.readRenderTargetPixels(target,0,0,32,32,actual);
      let maximumError=0;
      for(let y=0;y<32;y++)for(let x=0;x<32;x++) {
        const luxel=[(x+.5)/16,(y+.5)/16],lo=luxel.map(Math.floor),t=luxel.map((n,i)=>n-lo[i]);
        const c=[[0,0],[1,0],[0,1],[1,1]].map(offset=>worldLightmapLuxel([.2,.2,.2],lights,axes,lo.map((n,i)=>n+offset[i])));
        for(let channel=0;channel<3;channel++){
          const mix=(a,b,f)=>a+(b-a)*f,expected=255*mix(mix(c[0][channel],c[1][channel],t[0]),mix(c[2][channel],c[3][channel],t[0]),t[1]);
          maximumError=Math.max(maximumError,Math.abs(actual[(y*32+x)*4+channel]-expected));
        }
      }
      reports.push({label,maximumError});
    }
    geometry.dispose();material.dispose();atlas.dispose();target.dispose();renderer.dispose();return reports;
  });
  for(const report of gpu)assert.ok(report.maximumError<1.1,JSON.stringify(report));
  const scene=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(2);app.pause();
    const world=app.world,game=app.gameplay;for(const p of game.scripts.players.values())p.stop();
    game.scripts.cutscene=false;game.scripts.camera=null;
    const {projectileImpactSprite,impactLight}=await import('/src/projectile-impacts.js');
    const origin=[...world.player.position];origin[1]+=100;
    game.projectileImpacts=['shot','powerShot','superShot'].map((kind,i)=>({id:'impact-'+i,kind,birth:game.time,position:[origin[0]+(i-1)*100,origin[1],origin[2]]}));
    world.camera.position.set(origin[0],origin[1]+30,origin[2]+330);world.camera.lookAt(...origin);
    const captures=[];let screenshot;
    for(const age of [.05,.35,.45,.6]) {
      for(const impact of game.projectileImpacts)impact.birth=game.time-age;
      world.effects.update(0);world.render();
      if(age===.35)screenshot=world.renderer.domElement.toDataURL('image/png').split(',')[1];
      captures.push({age,waveVertices:world.effects.destructibles.impactWaves?.mesh.geometry.drawRange.count||0,impacts:game.projectileImpacts.map(impact=>{
        const sprite=projectileImpactSprite(impact,game.time),batch=world.effects.batches.get(sprite.texture);
        return {kind:impact.kind,texture:sprite.texture,size:sprite.size,count:batch?.count,
          light:world.effects.lights.find(light=>light.position===impact.position),expectedLight:impactLight(impact,game.time)};
      })});
    }
    const patched=world.effects.patchedMaterials.length,uniformCount=world.effects.lightCount.value;
    const floorStart=[origin[0]+100,world.player.position[1]+20,origin[2]],floorEnd=[floorStart[0],floorStart[1]-120,floorStart[2]];
    const floor=world.collider.trace(floorStart,floorEnd,[0,0,0],[0,0,0],world.physicalModels,null);
    const impact=game.projectileImpacts[2];impact.position=floor.end.map((v,i)=>v+(i===1?2:0));impact.birth=game.time-.5;game.projectileImpacts=[impact];
    world.camera.position.set(impact.position[0]+20,impact.position[1]+15,impact.position[2]+35);world.camera.lookAt(...impact.position);
    world.effects.update(0);world.render();const wave=world.effects.destructibles.impactWaves.mesh;
    const waveScreenshot=world.renderer.domElement.toDataURL('image/png').split(',')[1];wave.visible=false;world.render();
    const waveChangesPixels=waveScreenshot!==world.renderer.domElement.toDataURL('image/png').split(',')[1];wave.visible=true;
    return {captures,patched,uniformCount,screenshot,waveScreenshot,waveChangesPixels,floorFraction:floor.fraction,floorWaveVertices:wave.geometry.drawRange.count};
  });
  assert.ok(scene.patched>0);assert.ok(scene.uniformCount>=3);
  for(const capture of scene.captures){
    assert.equal(capture.waveVertices,capture.age>=.4?6:0);
    for(const impact of capture.impacts){assert.ok(impact.count>0);assert.deepEqual(impact.light,impact.expectedLight);}
  }
  assert.ok(scene.floorFraction<1);assert.equal(scene.floorWaveVertices,12);assert.ok(scene.waveChangesPixels);
  assert.deepEqual(errors,[]);await mkdir('artifacts',{recursive:true});
  await writeFile('artifacts/native-impact-bursts.png',Buffer.from(scene.screenshot,'base64'));delete scene.screenshot;
  await writeFile('artifacts/native-charged-impact-wave.png',Buffer.from(scene.waveScreenshot,'base64'));delete scene.waveScreenshot;
  await writeFile(`artifacts/${gpu.length?'native-light-impact':'native-impact'}-scenes.json`,JSON.stringify({gpu,scene,errors},null,2)+'\n');
  console.log(`PASS ${gpu.length?'GPU lightmap pixels match native fixed-point reference (baked, oblique, moving and saturated); ':''}graveyard shaders, all three original player-impact sprite/light profiles and the charged impact wave/floor fold render without errors.`);
} finally {await browser?.close();server.kill();}
