import {chromium} from 'playwright';import {spawn} from 'node:child_process';import {mkdir,readFile,writeFile} from 'node:fs/promises';
const root='temp_work/cpu-browser-followup-2026-10-18';await mkdir(root+'/scratch',{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'0'},stdio:['ignore','pipe','inherit']});let browser;const reports=[];
try{
 const url=await new Promise(resolve=>server.stdout.once('data',d=>resolve(String(d).trim().split(' ').at(-1))));
 browser=await chromium.launch({executablePath:'/usr/bin/google-chrome',headless:true,env:{...process.env,TMPDIR:root+'/scratch'},args:['--use-angle=gl']});
 for(const before of [true,false]){
  const context=await browser.newContext({viewport:{width:640,height:360}}),page=await context.newPage();
  if(before)await context.route('**/src/world-effects.js',async route=>route.fulfill({status:200,contentType:'text/javascript',body:(await readFile(root+'/before/src/world-effects.js','utf8')).replace('class BillboardBatch {','export class BillboardBatch {')}));
  await page.goto(url+'/?skipIntro');
  const result=await page.evaluate(async before=>{
   const THREE=await import('three'),{BeamBatch,BillboardBatch}=await import('./src/world-effects.js');
   // WorldEffects loads the same billboard batches used by actual flames.
   const renderer=new THREE.WebGLRenderer(),scene=new THREE.Scene(),camera=new THREE.PerspectiveCamera(60,1,.1,100);renderer.setSize(128,128);camera.position.z=10;
   const map=new THREE.DataTexture(new Uint8Array([255,255,255,255]),1,1);map.needsUpdate=true;
   const world={scene,track:r=>r,texture:async()=>map,level:{mesh:{}},modelMeshes:new Map(),actorInstances:new Map(),renderer,camera};
   const sprite=new BillboardBatch(world,map),beam=new BeamBatch(world,map);
   const gl=renderer.getContext(),original=gl.bufferSubData;let bytes=0,calls=0;
   gl.bufferSubData=function(target,offset,data,start=0,length){bytes+=(length===undefined?data.length-start:length)*data.BYTES_PER_ELEMENT;calls++;return original.apply(this,arguments);};
   for(let frame=0;frame<61;frame++){
    sprite.count=beam.count=0;sprite.add([0,0,0],1,1,[1,1,1],1);beam.addDisc([0,0,0],1,[1,1,1],1);sprite.flush();beam.flush();renderer.render(scene,camera);
    if(frame===0)bytes=calls=0;
   }
   return {before,frames:60,uploadBytes:bytes,uploadCalls:calls};
  },before);
  reports.push(result);await context.close();
 }
 await writeFile(root+'/upload-check.json',JSON.stringify(reports,null,2)+'\n');console.log(reports);
}finally{await browser?.close();server.kill();}
