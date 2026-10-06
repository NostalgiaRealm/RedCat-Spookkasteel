import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

const work='current_work/skybox-dimensions-2026-10-05',out=path.resolve(`${work}/scenes-${Date.now()}`),temp=`${work}/t`;
await mkdir(out,{recursive:true});await mkdir(temp,{recursive:true});
const env={...process.env,TMPDIR:temp},port=process.env.SKY_PORT||'4393';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:port},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let context;
try{
 context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,env,
  viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required',`--crash-dumps-dir=${out}`]});
 const page=await context.newPage(),errors=[];
 page.on('pageerror',e=>errors.push(e.stack));page.on('console',m=>{if(m.type()==='error'&&/shader|webgl|gl_invalid|program/i.test(m.text()))errors.push(m.text());});
 page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
 await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4})));
 await page.goto(`http://127.0.0.1:${port}/?skipIntro`);await page.waitForFunction(()=>window.__redcat);
 const skies=await page.evaluate(async()=>{
  const THREE=await import('three'),{normalizeSkyboxFaces}=await import('/src/skybox.js');
  const renderer=new THREE.WebGLRenderer({preserveDrawingBuffer:true});renderer.setSize(256,256);renderer.setPixelRatio(1);
  const scene=new THREE.Scene(),camera=new THREE.PerspectiveCamera(90,1,.1,100),reports=[];
  const target=new THREE.WebGLRenderTarget(256,256);target.texture.colorSpace=THREE.SRGBColorSpace;
  const directions=[['right',[1,0,0]],['left',[-1,0,0]],['up',[0,1,0]],['down',[0,-1,0]],['front',[0,0,1]],['back',[0,0,-1]]];
  const load=src=>new Promise((resolve,reject)=>{const image=new Image();image.onload=()=>resolve(image);image.onerror=()=>reject(new Error(src));image.src=src;});
  // Independent OpenGL cube lookup: Three's ordinary background cube flips X.
  const cubeLookup=direction=>{
   const [x,y,z]=[-direction.x,direction.y,direction.z],ax=Math.abs(x),ay=Math.abs(y),az=Math.abs(z);
   let face,s,t;if(ax>=ay&&ax>=az){face=x>=0?0:1;s=x>=0?-z/ax:z/ax;t=-y/ax;}
   else if(ay>=az){face=y>=0?2:3;s=x/ay;t=y>=0?z/ay:-z/ay;}
   else {face=z>=0?4:5;s=z>=0?x/az:-x/az;t=-y/az;}
   return {face,u:(s+1)/2,v:(t+1)/2};
  };
  for(const id of ['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']){
   const level=await(await fetch(`/data/levels/${id}/level.json`)).json(),indices=level.sky?.textures||[];
   if(!indices.some(i=>i>=0)){reports.push({id,noAuthoredSky:true,indices});continue;}
   const imageMap=new Map(await Promise.all([...new Set(indices.filter(i=>i>=0))].map(async index=>[index,await load(`/data/levels/${id}/${level.textures[index].file}`)])));
   const fallback=indices.find(i=>i>=0),originals=indices.map(i=>imageMap.get(i<0?fallback:i)),faces=normalizeSkyboxFaces(originals,renderer.capabilities.maxCubemapSize),size=faces[0].width;
   // Render the original artwork independently into the expected common frame;
   // the cube lookup below checks both face assignment and orientation.
   const reference=originals.map(image=>{const c=document.createElement('canvas');c.width=c.height=size;const ctx=c.getContext('2d',{willReadFrequently:true});ctx.drawImage(image,0,0,size,size);return ctx.getImageData(0,0,size,size).data;});
   const cube=new THREE.CubeTexture(faces);cube.colorSpace=THREE.SRGBColorSpace;cube.needsUpdate=true;scene.background=cube;
   const views=[];
   for(const [name,direction]of directions){
    camera.position.set(0,0,0);camera.up.set(0,Math.abs(direction[1])?0:1,Math.abs(direction[1])?-1:0);camera.lookAt(...direction);camera.updateMatrixWorld(true);
    renderer.setRenderTarget(target);renderer.render(scene,camera);const pixels=new Uint8Array(256*256*4);renderer.readRenderTargetPixels(target,0,0,256,256,pixels);
    const glError=renderer.getContext().getError();let maxError=0,nonBlack=0,expectedNonBlack=0;const sampledFaces=new Set();
    for(let y=8;y<256;y+=16)for(let x=8;x<256;x+=16){
     const ray=new THREE.Vector3((x+.5)/128-1,(y+.5)/128-1,1).unproject(camera).normalize(),sample=cubeLookup(ray);sampledFaces.add(sample.face);
     const sx=Math.max(0,Math.min(size-1,Math.floor(sample.u*size))),sy=Math.max(0,Math.min(size-1,Math.floor(sample.v*size))),expected=reference[sample.face];
     for(let c=0;c<3;c++){const actual=pixels[(y*256+x)*4+c],value=expected[(sy*size+sx)*4+c];maxError=Math.max(maxError,Math.abs(actual-value));if(actual>0)nonBlack++;if(value>0)expectedNonBlack++;}
    }
    renderer.setRenderTarget(null);renderer.render(scene,camera);const image=renderer.domElement.toDataURL('image/png').split(',')[1];
    views.push({name,glError,faces:[...sampledFaces],maxError,nonBlack,expectedNonBlack,image});
   }
   reports.push({id,indices,originalSizes:originals.map(image=>[image.width,image.height]),normalizedSizes:faces.map(image=>[image.width,image.height]),size,views});cube.dispose();
  }
  target.dispose();renderer.dispose();return reports;
 });
 for(const sky of skies)for(const view of sky.views||[]){await writeFile(path.join(out,`${sky.id}-${view.name}.png`),Buffer.from(view.image,'base64'));delete view.image;}
 const tower=await page.evaluate(async()=>{
  const app=window.__redcat;await app.startLevel(4);app.pause();document.getElementById('pause').hidden=true;
  const w=app.world,g=app.gameplay;for(const p of g.scripts.players.values())p.stop();g.scripts.cutscene=false;g.scripts.camera=null;
  const background=w.scene.background,views=[];
  for(const eye of [[0,2440,370],[330,2430,54],[0,2480,-240]]){
   w.camera.position.fromArray(eye);w.camera.lookAt(0,2384,54);w.updateRenderResidency();await w.geometryStream.settle();w.effects.update(0);w.render();
   views.push({eye,glError:w.renderer.getContext().getError(),calls:w.renderer.info.render.calls});
  }
  const image=w.renderer.domElement.toDataURL('image/png').split(',')[1];
  return {isCube:background.isCubeTexture,sizes:background.images.map(image=>[image.width,image.height]),views,image};
 });
 await writeFile(path.join(out,'tower-room.png'),Buffer.from(tower.image,'base64'));delete tower.image;
 await writeFile(path.join(out,'report.json'),JSON.stringify({skies,tower,errors},null,2)+'\n');
 assert.equal(skies.length,5);assert.ok(skies.find(s=>s.id==='lvl03a').noAuthoredSky);
 for(const sky of skies.filter(s=>!s.noAuthoredSky)){
  assert.equal(sky.views.length,6);assert.ok(sky.normalizedSizes.every(([w,h])=>w===sky.size&&h===sky.size));
  for(const view of sky.views){assert.equal(view.glError,0,`${sky.id} ${view.name}`);assert.equal(view.faces.length,1);assert.ok(view.maxError<=2,`${sky.id} ${view.name} orientation/artwork pixel error ${view.maxError}`);if(view.expectedNonBlack)assert.ok(view.nonBlack>0);}
 }
 assert.ok(tower.isCube);assert.ok(tower.sizes.every(([w,h])=>w===256&&h===256));for(const view of tower.views)assert.equal(view.glError,0);assert.deepEqual(errors,[]);
 console.log('PASS all five authored sky configurations: all 24 sky directions preserve original artwork/face orientation, mixed dimensions upload without GL errors, Caves retains no sky, and real Tower room draws with its original cubemap.');console.log(out);
}finally{await context?.close();server.kill();}
