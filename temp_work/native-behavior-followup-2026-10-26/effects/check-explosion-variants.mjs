import {chromium} from 'playwright';
import http from 'node:http';
import {readFile,mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';
import {fileURLToPath} from 'node:url';

// A source-only isolated GPU scene. No user saves, original installation,
// campaign scripts or application audio are opened or modified.
const root=process.cwd(),work=path.dirname(fileURLToPath(import.meta.url));
await mkdir(path.join(root,'temp_work/t'),{recursive:true});process.env.TMPDIR='temp_work/t';
const server=http.createServer(async(req,res)=>{
  try {
    const url=new URL(req.url,'http://localhost');
    if(url.pathname==='/'){res.setHeader('Content-Type','text/html');res.end('<script type="importmap">{"imports":{"three":"/node_modules/three/build/three.module.js"}}</script>');return;}
    const file=path.resolve(root,'.'+decodeURIComponent(url.pathname));if(!file.startsWith(root+path.sep))throw Error('Outside project');
    res.setHeader('Content-Type',file.endsWith('.png')?'image/png':file.endsWith('.json')?'application/json':'text/javascript');res.end(await readFile(file));
  }catch{res.statusCode=404;res.end();}
});
await new Promise(resolve=>server.listen(0,'127.0.0.1',resolve));
let browser;const errors=[];
try {
  browser=await chromium.launch({executablePath:'/usr/bin/google-chrome',headless:true,env:{...process.env,TMPDIR:'temp_work/t'},args:['--use-angle=gl']});
  const page=await browser.newPage();page.on('pageerror',error=>errors.push(error.stack));
  page.on('console',message=>{if(message.type()==='error'&&/shader|webgl|gl_invalid|program/i.test(message.text()))errors.push(message.text());});
  await page.goto(`http://127.0.0.1:${server.address().port}/`);
  const result=await page.evaluate(async()=>{
    const THREE=await import('three'),{BillboardBatch,BeamBatch}=await import('/src/world-effects.js');
    const {DestructibleEffects}=await import('/src/destructible-effects.js');
    const {explosionTextureFilter,GREEN_EXPLOSION_TEXTURES,GREEN_EXPLOSION_WAVE_TEXTURE}=await import('/src/explosion-variants.js');
    const {ELECTRIC_PATH_TEXTURES,ELECTRIC_SPARK_TEXTURE}=await import('/src/electric-explosion-native.js');
    const manifest=await(await fetch('/assets/effects/manifest.json')).json();
    const renderer=new THREE.WebGLRenderer({antialias:false}),target=new THREE.WebGLRenderTarget(256,256);
    const camera=new THREE.OrthographicCamera(-220,220,220,-220,.1,2000);camera.position.set(0,100,500);camera.lookAt(0,100,0);camera.updateMatrixWorld(true);
    const scene=new THREE.Scene();scene.background=new THREE.Color(0);
    const resources=[],world={scene,camera,settings:{effectsQuality:3},physicalModels:[0],collider:{trace:()=>({fraction:1})},track:r=>(resources.push(r),r)};
    const effect={id:'gpu-variants',sourceId:'unused-actor',birth:0,position:[0,2,0],settings:{explosion:{NrExplosions:1,SizePercentage:25,Green:true,Electric:true}}};
    const game={time:0,explosions:[effect]},batches=new Map(),beams=new Map(),maps=[],needed=explosionTextureFilter(game),loader=new THREE.TextureLoader();
    for(const key of [...GREEN_EXPLOSION_TEXTURES,GREEN_EXPLOSION_WAVE_TEXTURE,...ELECTRIC_PATH_TEXTURES,ELECTRIC_SPARK_TEXTURE]) {
      if(!needed(key))throw Error('Variant texture was incorrectly filtered: '+key);
      const map=await loader.loadAsync('/assets/effects/'+manifest.textures[key].file);maps.push(map);map.flipY=key!==ELECTRIC_SPARK_TEXTURE;
      if(key===ELECTRIC_SPARK_TEXTURE)beams.set(key,new BeamBatch(world,map,4096));else batches.set(key,new BillboardBatch(world,map));
    }
    const effects=new DestructibleEffects(world,game),cases=[];renderer.setRenderTarget(target);
    const draw=(name,tick,hideFlash=false)=>{
      for(const batch of [...batches.values(),...beams.values()])batch.count=0;
      game.time=tick/60;effects.update(1/60,batches,beams);
      for(const [key,batch]of [...batches,...beams]){batch.flush(game.time);if(hideFlash&&GREEN_EXPLOSION_TEXTURES.includes(key))batch.mesh.visible=false;}
      if(hideFlash&&effects.greenWaves)effects.greenWaves.mesh.visible=false;
      renderer.render(scene,camera);const pixels=new Uint8Array(256*256*4);renderer.readRenderTargetPixels(target,0,0,256,256,pixels);
      let colored=0,partial=0,green=0,gold=0;for(let i=0;i<pixels.length;i+=4){const [r,g,b]=pixels.slice(i,i+3);if(r+g+b>5)colored++;if(r+g+b>5&&Math.max(r,g,b)<250)partial++;if(g>r+20&&g>b+20)green++;if(r>80&&g>60&&b<g*.95)gold++;}
      cases.push({name,age:game.time,colored,partial,green,gold,spriteCount:[...batches.values()].reduce((n,b)=>n+b.count,0),sparkCount:beams.get(ELECTRIC_SPARK_TEXTURE).count,glError:renderer.getContext().getError()});
    };
    draw('green initial',0);
    for(let tick=1;tick<18;tick++){game.time=tick/60;effects.update(1/60,new Map(),new Map());}
    draw('green wave and sparks',18);
    camera.left=-70;camera.right=70;camera.top=70;camera.bottom=-70;camera.position.set(0,45,300);camera.lookAt(0,45,0);camera.updateProjectionMatrix();camera.updateMatrixWorld(true);
    draw('isolated gold sparks',19,true);
    for(let tick=20;tick<=180;tick++){game.time=tick/60;effects.update(1/60,new Map(),new Map());}
    draw('retired',181,true);
    const debug=renderer.getContext().getExtension('WEBGL_debug_renderer_info'),gpu=debug?renderer.getContext().getParameter(debug.UNMASKED_RENDERER_WEBGL):null;
    effects.dispose();for(const batch of [...batches.values(),...beams.values()])batch.mesh.removeFromParent();for(const r of resources)r.dispose();for(const map of maps)map.dispose();target.dispose();renderer.dispose();
    return {cases,gpu,remainingSceneChildren:scene.children.length};
  });
  await writeFile(path.join(work,'explosion-variants-gpu-report.json'),JSON.stringify({...result,errors},null,2)+'\n');
  assert.deepEqual(errors,[]);assert.equal(result.remainingSceneChildren,0);
  assert.ok(result.cases[0].green>50);assert.ok(result.cases[1].green>50);assert.ok(result.cases[2].gold>0);assert.ok(result.cases[2].sparkCount>0);
  assert.equal(result.cases[3].colored,0);for(const item of result.cases)assert.equal(item.glError,0);
  console.log('PASS: original green frames/ring and gold sparks draw, alpha blends and retire on hardware WebGL; no GL errors or leftover scene objects.');
}finally{await browser?.close();await new Promise(resolve=>server.close(resolve));}
