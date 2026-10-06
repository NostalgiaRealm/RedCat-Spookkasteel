import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

// Isolated renderer checks only: never open the desktop profile or its saves.
const work='current_work/world-light-shadows-2026-10-05';
const out=path.resolve(`${work}/scenes-${Date.now()}`),temp=`${work}/t`;
await mkdir(out,{recursive:true});await mkdir(temp,{recursive:true});
const env={...process.env,TMPDIR:temp},port=process.env.SHADOW_PORT||'4392';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...env,PORT:port},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let context;
try{
 context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,env,
  viewport:{width:1280,height:720},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required',`--crash-dumps-dir=${out}`]});
 const page=await context.newPage(),errors=[];
 page.on('pageerror',e=>errors.push(e.stack));
 page.on('console',m=>{if(m.type()==='error'&&/shader|webgl|gl_invalid|program/i.test(m.text()))errors.push(m.text());});
 page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
 await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4})));
 await page.goto(`http://127.0.0.1:${port}/?skipIntro`);await page.waitForFunction(()=>window.__redcat);
 const gpu=await page.evaluate(async()=>{
  const THREE=await import('three'),{patchWorldLightShader}=await import('/src/world-lighting-material.js');
  const {worldLightFrame,worldLightmapLuxel}=await import('/src/world-lighting.js');
  const renderer=new THREE.WebGLRenderer(),scene=new THREE.Scene(),camera=new THREE.OrthographicCamera(-32,32,32,-32,1,100);
  const target=new THREE.WebGLRenderTarget(64,64);renderer.setRenderTarget(target);camera.position.set(0,0,50);camera.lookAt(0,0,0);
  const bytes=new Uint8Array(8*8*4);for(let i=0;i<bytes.length;i+=4)bytes.set([51,51,51,255],i);
  const atlas=new THREE.DataTexture(bytes,8,8);atlas.needsUpdate=true;atlas.magFilter=atlas.minFilter=THREE.LinearFilter;atlas.channel=1;
  const blocked=new Uint8Array(8*8);for(let y=0;y<8;y++)for(let x=3;x<8;x++)blocked[y*8+x]=1;
  const mask=new THREE.DataTexture(blocked,8,8,THREE.RedFormat,THREE.UnsignedByteType);mask.needsUpdate=true;mask.magFilter=mask.minFilter=THREE.NearestFilter;
  const geometry=new THREE.PlaneGeometry(64,64),position=geometry.attributes.position,axes=worldLightFrame([1,0,0],[0,1,0],[-32,-32],[0,0,1],0),uv=[],u=[],v=[],mins=[];
  for(let i=0;i<position.count;i++){uv.push((1.5+(position.getX(i)+32)/16)/8,(1.5+(position.getY(i)+32)/16)/8);u.push(...axes.u);v.push(...axes.v);mins.push(...axes.min);}
  geometry.setAttribute('uv1',new THREE.Float32BufferAttribute(uv,2));geometry.setAttribute('nativeLightU',new THREE.Float32BufferAttribute(u,3));geometry.setAttribute('nativeLightV',new THREE.Float32BufferAttribute(v,3));geometry.setAttribute('nativeLightMinUV',new THREE.Float32BufferAttribute(mins,2));
  const lights=[{position:[0,0,20],radius:100,color:[195/255,0,0]},{position:[0,0,20],radius:100,color:[0,195/255,0]}];
  const uniforms={effectLightPosition:{value:Array.from({length:8},(_,i)=>new THREE.Vector3(...(lights[i]?.position||[0,0,0])))},
   effectLightColor:{value:Array.from({length:8},(_,i)=>new THREE.Color().fromArray(lights[i]?.color||[0,0,0]))},effectLightRadius:{value:new Float32Array([100,100,0,0,0,0,0,0])},
   effectLightCount:{value:2},effectAtlasSize:{value:new THREE.Vector2(8,8)},effectShadowAtlas:{value:mask},effectLightShadowBit:{value:new Float32Array([1,0,0,0,0,0,0,0])},effectShadowCount:{value:1}};
  const material=new THREE.MeshBasicMaterial({lightMap:atlas,lightMapIntensity:Math.PI});material.onBeforeCompile=shader=>patchWorldLightShader(shader,uniforms);
  const mesh=new THREE.Mesh(geometry,material);scene.add(mesh);const reports=[];
  for(const [label,shadows,order,radius]of[['masked',true,[0,1],100],['unshadowed',false,[0,1],100],['reordered',true,[1,0],100],['clamped-corners',true,[0,1],300]]){
   const activeLights=lights.map(light=>({...light,radius}));uniforms.effectLightRadius.value[0]=uniforms.effectLightRadius.value[1]=radius;
   uniforms.effectShadowCount.value=shadows?1:0;
   order.forEach((source,i)=>{uniforms.effectLightColor.value[i].fromArray(lights[source].color);uniforms.effectLightShadowBit.value[i]=source===0?1:0;});
   renderer.render(scene,camera);const pixels=new Uint8Array(64*64*4);renderer.readRenderTargetPixels(target,0,0,64,64,pixels);
   let maximumError=0;
   for(let y=0;y<64;y++)for(let x=0;x<64;x++){
    const luxel=[(x+.5)/16,(y+.5)/16],corner=luxel.map(Math.floor),t=luxel.map((n,i)=>n-corner[i]);
    const colors=[[0,0],[1,0],[0,1],[1,1]].map(offset=>{const p=corner.map((n,i)=>n+offset[i]),shadow=shadows&&blocked[(1+p[1])*8+1+p[0]]&1;return worldLightmapLuxel([.2,.2,.2],shadow?[activeLights[1]]:activeLights,axes,p);});
    for(let c=0;c<3;c++){const mix=(a,b,f)=>a+(b-a)*f,expected=255*mix(mix(colors[0][c],colors[1][c],t[0]),mix(colors[2][c],colors[3][c],t[0]),t[1]);maximumError=Math.max(maximumError,Math.abs(pixels[(y*64+x)*4+c]-expected));}
   }
   reports.push({label,maximumError,left:Array.from(pixels.slice((32*64+8)*4,(32*64+8)*4+3)),right:Array.from(pixels.slice((32*64+56)*4,(32*64+56)*4+3))});
  }
  const glError=renderer.getContext().getError();geometry.dispose();material.dispose();atlas.dispose();mask.dispose();target.dispose();renderer.dispose();return {reports,glError};
 });
 const tower=await page.evaluate(async traceGL=>{
  const THREE=await import('three'),app=window.__redcat;await app.startLevel(4);app.pause();document.getElementById('pause').hidden=true;
  const w=app.world,g=app.gameplay,fx=w.effects,glStages=[];const checkpoint=name=>{const errors=[];for(let i=0;i<16;i++){const e=w.renderer.getContext().getError();if(!e)break;errors.push(e);}glStages.push({name,errors});};checkpoint('level-startup');
  // Keep the original Tower sky active as well as the BSP receivers.
  for(const p of g.scripts.players.values())p.stop();g.scripts.cutscene=false;g.scripts.camera=null;
  const manager=fx.worldShadows;if(!manager)throw new Error('WorldEffects.worldShadows missing');
  const initial={...manager.stats},texture=fx.shadowTexture,atlasBytes=Array.from(manager.data),atlasVersion=texture.version;
  const checksum=()=>{let hash=2166136261;for(const value of manager.data)hash=Math.imul(hash^value,16777619);return hash>>>0;};
  const initialChecksum=checksum(),target=new THREE.WebGLRenderTarget(640,360);target.texture.colorSpace=THREE.SRGBColorSpace;
  const render=()=>{const bytes=new Uint8Array(640*360*4);w.renderer.setRenderTarget(target);w.renderer.render(w.scene,w.camera);w.renderer.readRenderTargetPixels(target,0,0,640,360,bytes);w.renderer.setRenderTarget(null);return bytes;};
  const glCalls=[];let restoreGL=()=>{};if(traceGL){const gl=w.renderer.getContext(),error=gl.getError.bind(gl),replaced=[];let proto=gl;const seen=new Set();while(proto){for(const key of Object.getOwnPropertyNames(proto)){if(seen.has(key))continue;seen.add(key);if(!/^(uniform|buffer|tex|draw|bind|vertex|enable|disable|framebuffer|renderbuffer|blit|readPixels|copy|pixelStore|viewport|scissor|useProgram)/.test(key)||typeof gl[key]!=='function')continue;const fn=gl[key];gl[key]=function(...args){const out=fn.apply(gl,args),e=error();if(e)glCalls.push({method:key,error:e,args:args.map(x=>typeof x==='number'||typeof x==='string'?x:x?.length!==undefined?{length:x.length,type:x.constructor.name}:String(x)),stack:new Error().stack});return out;};replaced.push([key,fn]);}proto=Object.getPrototypeOf(proto);}restoreGL=()=>{for(const [key,fn]of replaced)gl[key]=fn;};}
  const captures=[],views=[{eye:[0,2440,370],look:[0,2384,54]},{eye:[330,2430,54],look:[0,2384,54]},{eye:[-320,2430,54],look:[0,2384,54]},{eye:[0,2580,260],look:[0,2384,54]}];
  for(const [index,view]of views.entries()){
   w.camera.position.fromArray(view.eye);w.camera.lookAt(...view.look);w.updateRenderResidency();await w.geometryStream.settle();fx.update(index?.37:0);checkpoint('view-'+index+'-update');
   const hidden=[];w.scene.traverse(o=>{if(o.isMesh&&o.visible&&!o.userData.worldChunk){hidden.push(o);o.visible=false;}});
   checkpoint('before-render-'+index);const count=fx.lightUniforms.effectShadowCount.value,lit=render();fx.lightUniforms.effectShadowCount.value=0;const unshadowed=render();fx.lightUniforms.effectShadowCount.value=count;checkpoint('view-'+index+'-readback');
   let darker=0,brighter=0,maxDelta=0;for(let i=0;i<lit.length;i+=4){const d=unshadowed[i]+unshadowed[i+1]+unshadowed[i+2]-lit[i]-lit[i+1]-lit[i+2];if(d>3)darker++;if(d< -3)brighter++;maxDelta=Math.max(maxDelta,d);}
   for(const o of hidden)o.visible=true;w.render();const image=w.renderer.domElement.toDataURL('image/png').split(',')[1];checkpoint('view-'+index+'-screenshot');
   captures.push({index,darker,brighter,maxDelta,count,slots:Array.from(fx.lightUniforms.effectLightShadowBit.value),stats:{...manager.stats},resident:{...w.geometryStream.stats},image});
  }
  const beforePulse={...manager.stats};for(let i=0;i<120;i++){w.camera.position.x+=i%2?.25:-.25;fx.update(1/60);}
  const afterPulse={...manager.stats};checkpoint('pulse');
  // Unload remote chunks and revisit the lamp room without rebuilding masks.
  w.camera.position.copy(new THREE.Vector3(...w.level.spawn.position));w.camera.lookAt(0,2384,54);w.geometryStream.update(performance.now()/1000+30);await w.geometryStream.settle();
  const distant={...w.geometryStream.stats};w.camera.position.fromArray(views[0].eye);w.camera.lookAt(...views[0].look);w.updateRenderResidency();await w.geometryStream.settle();fx.update(0);w.render();
  const visible=[];w.scene.traverse(o=>{if(o.isMesh&&o.visible&&!o.userData.worldChunk){visible.push(o);o.visible=false;}});const revisitCount=fx.shadowCount.value,revisitLit=render();fx.shadowCount.value=0;const revisitUnshadowed=render();fx.shadowCount.value=revisitCount;let revisitDarker=0;for(let i=0;i<revisitLit.length;i+=4)if(revisitUnshadowed[i]+revisitUnshadowed[i+1]+revisitUnshadowed[i+2]-revisitLit[i]-revisitLit[i+1]-revisitLit[i+2]>3)revisitDarker++;for(const o of visible)o.visible=true;
  const final={...manager.stats},finalChecksum=checksum(),glError=w.renderer.getContext().getError();restoreGL();target.dispose();let disposed=0;texture.addEventListener('dispose',()=>disposed++);fx.dispose();
  return {disposed,revisitDarker,glCalls,glStages,initial,final,beforePulse,afterPulse,initialChecksum,finalChecksum,atlasVersion,finalAtlasVersion:texture.version,atlasUnchanged:atlasBytes.every((value,i)=>manager.data[i]===value),sameTexture:texture===fx.shadowTexture,distant,revisited:{...w.geometryStream.stats},captures,glError};
 },process.env.SHADOW_TRACE_GL==='1');
 for(const view of tower.captures){await writeFile(path.join(out,`tower-view-${view.index}.png`),Buffer.from(view.image,'base64'));delete view.image;}
 await writeFile(path.join(out,'report.json'),JSON.stringify({gpu,tower,errors},null,2)+'\n');
 for(const report of gpu.reports)assert.ok(report.maximumError<1.1,JSON.stringify(report));assert.equal(gpu.glError,0);
 assert.ok(tower.initial.traces>0);assert.ok(tower.initial.builds>=5);assert.ok(tower.initial.blocked>0);
 assert.ok(tower.captures.some(view=>view.darker>20),JSON.stringify(tower.captures));assert.equal(tower.captures.reduce((n,v)=>n+v.brighter,0),0);
 assert.equal(tower.afterPulse.traces,tower.beforePulse.traces);assert.equal(tower.final.traces,tower.initial.traces);assert.equal(tower.final.builds,tower.initial.builds);
 assert.ok(tower.distant.residentVertices<tower.revisited.residentVertices,'distant chunks really unloaded and reloaded');assert.ok(tower.revisitDarker>20,'reloaded surfaces retain masks');
 assert.deepEqual(tower.glCalls,[]);for(const stage of tower.glStages)assert.deepEqual(stage.errors,[],stage.name);
 assert.equal(tower.initialChecksum,tower.finalChecksum);assert.ok(tower.atlasUnchanged&&tower.sameTexture);assert.equal(tower.finalAtlasVersion,tower.atlasVersion);assert.equal(tower.glError,0);assert.equal(tower.disposed,1,'effects dispose their shadow atlas');assert.deepEqual(errors,[]);
 console.log('PASS original Tower shadow lamps darken blocked BSP surfaces; GPU four-luxel filtering and reordered light bits match reference, pulse/camera/streaming changes reuse shadow masks without traces or uploads.');console.log(out);
}finally{await context?.close();server.kill();}
