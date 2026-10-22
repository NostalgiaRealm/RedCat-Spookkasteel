import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile,readFile} from 'node:fs/promises';
import {createHash} from 'node:crypto';
import path from 'node:path';
import assert from 'node:assert/strict';

const base=path.resolve('temp_work/room-hitches-2026-10-19');
const output=path.join(base,`shader-scenes-${Date.now()}`);
process.env.TMPDIR='temp_work/room-hitches-2026-10-19/scratch';
await mkdir(output,{recursive:true});await mkdir(process.env.TMPDIR,{recursive:true});
const report={output,errors:[],warnings:[],views:[],method:'Focused all-five-level source/browser shader and readiness smoke check. Isolated retained headless Chrome profile. Start views plus one Tower boss-room view; no campaign traversal or package build.'};
report.sourceHashes={};
for(const name of ['world.js','world-streaming.js','room-visibility.js','actor-render-residency.js','actor-texture-stream.js','streaming-work.js','streaming-gpu-preparation.js','main.js'])report.sourceHashes['src/'+name]=createHash('sha256').update(await readFile('src/'+name)).digest('hex');
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'0'},stdio:['ignore','pipe','inherit']});
let browser;
try {
 const url=await new Promise((resolve,reject)=>{server.stdout.once('data',d=>resolve(String(d).trim().split(' ').at(-1)));server.once('error',reject);});
 browser=await chromium.launchPersistentContext(output+'/profile',{executablePath:'/usr/bin/google-chrome',headless:true,viewport:{width:960,height:540},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
 const page=await browser.newPage();page.on('pageerror',e=>report.errors.push(e.stack));
 page.on('console',message=>{if(message.type()==='error')report.errors.push(message.text());else if(message.type()==='warning')report.warnings.push(message.text());});
 page.on('response',response=>{if(response.status()>=400)report.errors.push(`${response.status()} ${response.url()}`);});
 await page.addInitScript(()=>{
  localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,touchControls:'on',resolution:'960x540'}));
  localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  window.manualFrames=true;const raf=requestAnimationFrame;window.requestAnimationFrame=fn=>raf(time=>{if(window.manualFrames&&fn.name==='frame')return;fn(time);});
 });
 await page.goto(url+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 for(const index of [0,1,2,3,4]) {
  const result=await page.evaluate(async index=>{
   const app=window.__redcat,t=performance.now(),ok=await app.startLevel(index);if(!ok)throw Error('Level '+index+' load failed');app.pause();
   const w=app.world,g=app.gameplay,s=w.geometryStream;
   const settle=async()=>{await s.settle();w.updateRenderResidency();await w.actorResidency.settle();w.updateActorTextureResidency();await w.actorTextures.settle();w.updateRenderResidency();w.effects?.update(0);w.render();};
   const capture=name=>{
    const gl=w.renderer.getContext(),errors=[];for(let i=0;i<16;i++){const error=gl.getError();if(!error)break;errors.push(error);}
    const debug=gl.getExtension('WEBGL_debug_renderer_info');
    return {id:w.id,name,loadMs:performance.now()-t,ready:{world:s.readyForView,actors:w.actorResidency.readyForView,textures:w.actorTextures.readyForView},world:{...s.stats},actors:{...w.actorResidency.stats},room:{...s.rooms.stats},queue:{...w.streamingWork.stats},programs:w.renderer.info.programs?.length,gpu:{...w.renderer.info.memory},renderer:debug?gl.getParameter(debug.UNMASKED_RENDERER_WEBGL):gl.getParameter(gl.RENDERER),glErrors:errors,scriptError:g.scripts.vm.lastError,image:w.renderer.domElement.toDataURL()};
   };
   await settle();const results=[capture('start')];
   if(index===4) {
    const boss=g.objects.find(o=>o.kind==='enemy'&&o.enemyType==='witch')||g.objects.find(o=>o.kind==='enemy'&&o.boss);
    if(!boss)throw Error('No Tower boss actor');
    w.player.position=[...boss.position];w.player.noClip=false;w.camera.position.fromArray(boss.position.map((v,i)=>v+[0,120,450][i]));w.camera.lookAt(...boss.position);w.syncPlayer(0,{});
    g.scripts.camera={mode:2};const state=JSON.stringify(g.snapshot());await settle();const view=capture('tower-boss-room');view.gameStatePreserved=state===JSON.stringify(g.snapshot());results.push(view);
   }
   return results;
  },index);
  for(const view of result){await writeFile(path.join(output,`${view.id}-${view.name}.png`),Buffer.from(view.image.split(',')[1],'base64'));delete view.image;report.views.push(view);console.log(JSON.stringify(view));}
 }
 assert.equal(report.views.length,6);
 assert.deepEqual(report.errors,[]);
 const shaderWarnings=report.warnings.filter(text=>/WebGLProgram|shader|GL_INVALID|WebGL.*(?:warning|error)/i.test(text));assert.deepEqual(shaderWarnings,[]);
 for(const view of report.views){assert.deepEqual(view.glErrors,[]);assert.equal(view.scriptError,null);assert.ok(Object.values(view.ready).every(Boolean));assert.ok(view.programs>0);assert.ok(view.world.residentVertices>0);}
 const tower=report.views.find(view=>view.name==='tower-boss-room');assert.equal(tower.room.area,1);assert.equal(tower.gameStatePreserved,true);
 report.passed=true;console.log(`All five shader/readiness scenes passed: ${output}`);
}finally{await writeFile(path.join(output,'report.json'),JSON.stringify(report,null,2)+'\n');await browser?.close();server.kill();}
