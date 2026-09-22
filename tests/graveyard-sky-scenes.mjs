import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

// The original graveyard has a sky roof at Y176 below another section at
// Y528/664. Omitting that SKY face shows the higher section when looking up.
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4211'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',error=>errors.push(error.stack));
  page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
  await page.goto('http://127.0.0.1:4211/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(2);app.pause();
    document.getElementById('pause').hidden=true;document.getElementById('subtitle').hidden=true;
    document.body.classList.remove('in-cutscene');
    for(const player of app.gameplay.scripts.players.values())player.stop();
    app.gameplay.scripts.camera=null;app.gameplay.scripts.cutscene=false;
    const world=app.world;world.redcat.visible=false;
    world.camera.position.set(1562.5387369791667,116,-1890.79052734375);
    world.camera.lookAt(1562.5387369791667,180,-2190.79052734375);
    for(const mesh of world.skyBoundaryMeshes)mesh.visible=false;
    world.render();
  });
  await page.screenshot({path:'artifacts/graveyard-sky-boundary-before.png'});
  const result=await page.evaluate(async()=>{
    const world=window.__redcat.world,THREE=await import('three'),masks=world.skyBoundaryMeshes;
    const groups=world.level.groups.filter(group=>group.flags&4);
    const materials=masks.map(mesh=>({colorWrite:mesh.material.colorWrite,depthWrite:mesh.material.depthWrite,renderOrder:mesh.renderOrder}));
    const ranges=masks.map(mesh=>({...mesh.geometry.drawRange,model:mesh.userData.model}));
    const ctx=world.renderer.getContext(),width=ctx.drawingBufferWidth,height=ctx.drawingBufferHeight;
    const pixels=()=>{world.render();const bytes=new Uint8Array(width*height*4);ctx.readPixels(0,0,width,height,ctx.RGBA,ctx.UNSIGNED_BYTE,bytes);return bytes;};
    const before=pixels();
    for(const mesh of masks)mesh.visible=true;
    const after=pixels();
    const visibility=world.scene.children.map(child=>[child,child.visible]);
    for(const [child]of visibility)child.visible=false;
    const background=pixels();
    for(const [child,visible]of visibility)child.visible=visible;
    world.scene.updateMatrixWorld(true);world.camera.updateMatrixWorld(true);
    const opaque=[...world.modelMeshes.values()].flat().filter(mesh=>!masks.includes(mesh)&&mesh.visible&&mesh.material.opacity===1);
    const ray=new THREE.Raycaster(),samples=[];
    const pixel=(bytes,x,y)=>Array.from(bytes.slice((y*width+x)*4,(y*width+x)*4+3));
    const difference=(a,b)=>Math.max(...a.map((v,i)=>Math.abs(v-b[i])));
    let skyRestored=0,foregroundRetained=0;
    for(let sy=1;sy<10;sy++)for(let sx=1;sx<18;sx++) {
      const x=Math.floor(width*sx/18),y=Math.floor(height*sy/10);
      ray.setFromCamera(new THREE.Vector2(2*(x+.5)/width-1,2*(y+.5)/height-1),world.camera);
      const sky=ray.intersectObjects(masks,false)[0],surface=ray.intersectObjects(opaque,false)[0];
      if(!sky||!surface)continue;
      const old=pixel(before,x,y),fixed=pixel(after,x,y),back=pixel(background,x,y);
      if(surface.distance>sky.distance+1&&difference(old,back)>20&&difference(fixed,back)<3){skyRestored++;samples.push({type:'sky',x,y,sky:sky.point.toArray(),surface:surface.point.toArray(),before:old,after:fixed});}
      if(surface.distance<sky.distance-1&&difference(old,back)>20&&difference(old,fixed)<3){foregroundRetained++;samples.push({type:'foreground',x,y,sky:sky.point.toArray(),surface:surface.point.toArray(),before:old,after:fixed});}
    }
    // An independent vertical ray documents the exact original surfaces.
    ray.set(world.camera.position,new THREE.Vector3(0,1,0));
    const vertical={sky:ray.intersectObjects(masks,false)[0]?.point.toArray(),surface:ray.intersectObjects(opaque,false)[0]?.point.toArray()};
    world.render();
    return {level:world.id,sourceSha256:world.level.source.sha256,camera:world.camera.position.toArray(),groupCount:groups.length,vertices:groups.reduce((sum,group)=>sum+group.count,0),authoredRanges:groups.map(group=>({start:group.start,count:group.count,model:group.model})),ranges,materials,vertical,skyRestored,foregroundRetained,samples};
  });
  await page.screenshot({path:'artifacts/graveyard-sky-boundary-after.png'});
  await writeFile('artifacts/graveyard-sky-scenes.json',JSON.stringify(result,null,2)+'\n');
  assert.equal(result.level,'lvl02a');assert.equal(result.groupCount,10);assert.equal(result.vertices,5793);
  assert.deepEqual(result.ranges,result.authoredRanges,'Every mask uses the original imported SKY triangle span');
  assert.ok(result.materials.every(material=>!material.colorWrite&&material.depthWrite&&material.renderOrder===-100));
  assert.ok(Math.abs(result.vertical.sky[1]-176)<.001);assert.ok(Math.abs(result.vertical.surface[1]-528)<.001);
  assert.ok(result.skyRestored>=3,`Expected original sky instead of higher map geometry; got ${result.skyRestored} samples`);
  assert.ok(result.foregroundRetained>=3,`Expected foreground preserved; got ${result.foregroundRetained} samples`);
  assert.deepEqual(errors,[]);
  console.log(`PASS graveyard's 10 original SKY groups / 5793 vertices: ${result.skyRestored} sky samples restored, ${result.foregroundRetained} foreground samples unchanged; no browser or HTTP errors.`);
} finally {await browser?.close();server.kill();}
