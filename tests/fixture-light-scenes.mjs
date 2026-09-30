import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import assert from 'node:assert/strict';

process.env.TMPDIR='current_work';
const output=resolve(`current_work/fixture-lights-2026-09-30/render-${Date.now()}`);
await mkdir(output,{recursive:true});
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4308'},stdio:['ignore','pipe','inherit']});
await new Promise((done,fail)=>{server.stdout.once('data',done);server.once('error',fail);});
let browser;
try {
 browser=await chromium.launchPersistentContext(resolve(output,'browser-profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl'],viewport:{width:1280,height:720}});
 const page=await browser.newPage(),errors=[];
 page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
 await page.addInitScript(()=>{
  localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
  localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,volume:0,camera:'third'}));
 });
 await page.goto('http://127.0.0.1:4308/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 const report=await page.evaluate(async()=>{
  const app=window.__redcat,THREE=await import('three'),images={},cases=[];
  for(const [level,name,label]of [[1,'knopbridge_rood','castle-button'],[1,'kndlrbndn01','castle-candle'],[2,'kandelaar1_cr','graveyard-candle']]){
   await app.startLevel(level);app.pause();
   const w=app.world,g=app.gameplay,h=g.scripts;
   for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;
   const state=[...w.effects.entries.values()].find(s=>s.object.entity.DaviName===name);
   state.object.enabled=true;state.object.visible=true;
   const origin=w.effects.position(state.object);
   const offsets=[[0,15,-150],[0,15,150],[150,15,0],[-150,15,0]];
   const eye=offsets.map(d=>d.map((v,i)=>v+origin[i])).find(p=>w.collider.trace(p,origin,[0,0,0],[0,0,0],w.physicalModels,null).fraction>=1);
   if(!eye)throw new Error(`No unobstructed camera for ${name}`);
   w.camera.position.fromArray(eye);w.camera.lookAt(origin[0],origin[1]-12,origin[2]);w.camera.updateMatrixWorld();
   for(let i=0;i<40;i++)w.effects.update(.1);
   if(!(state.radius>0))throw new Error(`Corona did not activate for ${name}`);
   const batch=w.effects.coronaBatch,tint=state.object.entity.Color.split(/\s+/).map(v=>Number(v)/255);
   const renderer=w.renderer,rt=new THREE.WebGLRenderTarget(640,360);rt.texture.colorSpace=THREE.SRGBColorSpace;
   const pixels=()=>{
    renderer.setRenderTarget(rt);renderer.render(w.scene,w.camera);const p=new Uint8Array(640*360*4);
    renderer.readRenderTargetPixels(rt,0,0,640,360,p);renderer.setRenderTarget(null);return p;
   };
   // Isolate the selected halo, preserving its real scenery and material.
   batch.count=0;batch.flush();const empty=pixels(),counts=[];
   for(const [suffix,size]of [['before',state.radius*2],['after',state.radius*16]]){
    batch.count=0;batch.add(origin,size,size,tint,1);batch.flush();const p=pixels();let lit=0;
    for(let i=0;i<p.length;i+=4)if(Math.abs(p[i]-empty[i])+Math.abs(p[i+1]-empty[i+1])+Math.abs(p[i+2]-empty[i+2])>12)lit++;
    counts.push(lit);w.render();images[label+'-'+suffix]=renderer.domElement.toDataURL('image/png');
   }
   rt.dispose();w.effects.update(0);
   const index=Array.from({length:batch.count},(_,i)=>i).find(i=>batch.positions.getX(i)===origin[0]&&batch.positions.getY(i)===origin[1]&&batch.positions.getZ(i)===origin[2]);
   cases.push({label,level,name,origin,eye,radius:state.radius,productionWidth:batch.sizes.getX(index),beforePixels:counts[0],afterPixels:counts[1]});
  }
  return {cases,images};
 });
 for(const [name,url]of Object.entries(report.images))await writeFile(resolve(output,name+'.png'),Buffer.from(url.split(',')[1],'base64'));
 delete report.images;await writeFile(resolve(output,'report.json'),JSON.stringify({...report,errors},null,2));
 assert.deepEqual(errors,[]);
 for(const c of report.cases){
  assert.ok(Math.abs(c.productionWidth-c.radius*16)<.0001,JSON.stringify(c));
  assert.ok(c.afterPixels>c.beforePixels*8&&c.afterPixels>30,JSON.stringify(c));
 }
 console.log(JSON.stringify({output,...report},null,2));
}finally{await browser?.close();server.kill();}
