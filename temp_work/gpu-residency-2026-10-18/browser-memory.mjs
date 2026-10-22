import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,readFile,writeFile,access} from 'node:fs/promises';
import path from 'node:path';

const root='temp_work/gpu-residency-2026-10-18',label=process.argv[2]||'after',before=process.argv[3]==='before',fixtureOnly=process.argv.includes('--fixture-only'),out=path.resolve(root,label);
await mkdir(out,{recursive:true});await mkdir(root+'/scratch',{recursive:true});process.env.TMPDIR=root+'/scratch';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'0'},stdio:['ignore','pipe','inherit']});let context;
const report={label,before,fixture:[],levels:[],errors:[],glErrors:[]};
try {
  const url=await new Promise(resolve=>server.stdout.once('data',data=>resolve(String(data).trim().split(' ').at(-1))));
  context=await chromium.launchPersistentContext(out+'/profile',{executablePath:'/usr/bin/google-chrome',headless:true,viewport:{width:960,height:540},env:{...process.env,TMPDIR:root+'/scratch'},args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required','--mute-audio']});
  if(before)await context.route('**/src/**',async route=>{
    const pathname=new URL(route.request().url()).pathname;if(!pathname.endsWith('.js'))return route.continue();
    const file=path.resolve(root+'/before',pathname.slice(1));
    try{await access(file);await route.fulfill({status:200,contentType:'text/javascript',body:await readFile(file)});}catch{await route.continue();}
  });
  await context.addInitScript(()=>{
    let seed=12345;Math.random=()=>{seed=(Math.imul(seed,1664525)+1013904223)>>>0;return seed/4294967296;};
    localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,touchControls:'on',resolution:'960x540'}));
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
    const raf=requestAnimationFrame;window.requestAnimationFrame=fn=>raf(t=>{if(window.manualFrames&&fn.name==='frame')return;fn(t);});
    const getContext=HTMLCanvasElement.prototype.getContext;
    HTMLCanvasElement.prototype.getContext=function(...args){
      const gl=getContext.apply(this,args);if(!gl||!args[0].startsWith('webgl')||gl.__bufferLedger)return gl;
      const sizes=new Map(),bound=new Map(),stats={created:0,deleted:0,liveBytes:0,peakBytes:0,uploadBytes:0,drawInstances:[]};
      // The browser frees every GL buffer on context loss without calling
      // deleteBuffer. Forget that old context's allocations in the ledger.
      this.addEventListener('webglcontextlost',()=>{sizes.clear();bound.clear();stats.liveBytes=0;});
      const bind=gl.bindBuffer.bind(gl),data=gl.bufferData.bind(gl),sub=gl.bufferSubData.bind(gl),remove=gl.deleteBuffer.bind(gl),create=gl.createBuffer.bind(gl);
      gl.createBuffer=()=>{stats.created++;return create();};
      gl.bindBuffer=(target,buffer)=>{bound.set(target,buffer);return bind(target,buffer);};
      gl.bufferData=(target,value,usage,...rest)=>{
        const result=data(target,value,usage,...rest),buffer=bound.get(target),bytes=typeof value==='number'?value:(rest[1]??value.length??0)*(value.BYTES_PER_ELEMENT||1);
        stats.liveBytes-=sizes.get(buffer)||0;sizes.set(buffer,bytes);stats.liveBytes+=bytes;stats.peakBytes=Math.max(stats.peakBytes,stats.liveBytes);stats.uploadBytes+=bytes;return result;
      };
      gl.bufferSubData=(target,offset,value,...rest)=>{stats.uploadBytes+=(rest[1]??value.length??0)*(value.BYTES_PER_ELEMENT||1);return sub(target,offset,value,...rest);};
      gl.deleteBuffer=buffer=>{if(sizes.has(buffer)){stats.liveBytes-=sizes.get(buffer);sizes.delete(buffer);stats.deleted++;}return remove(buffer);};
      const draw=gl.drawElementsInstanced?.bind(gl);if(draw)gl.drawElementsInstanced=(mode,count,type,offset,instances)=>{stats.drawInstances.push(instances);return draw(mode,count,type,offset,instances);};
      gl.__bufferLedger=()=>({...stats,liveBuffers:sizes.size,drawInstances:stats.drawInstances.slice(-10)});return gl;
    };
  });
  // Isolated actual-WebGL busy/idle/busy fixture. The main menu owns no world.
  {
    const page=await context.newPage();page.on('pageerror',error=>report.errors.push(error.stack));await page.goto(url+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
    await page.evaluate(async()=>{
      window.manualFrames=true;const THREE=await import('three'),{BillboardBatch,BeamBatch}=await import('/src/world-effects.js');
      const renderer=new THREE.WebGLRenderer({antialias:false,preserveDrawingBuffer:true});renderer.setSize(512,384);renderer.setClearColor(0x122233);renderer.domElement.id='fixture-canvas';document.body.appendChild(renderer.domElement);
      const scene=new THREE.Scene(),camera=new THREE.OrthographicCamera(-128,128,96,-96,1,1000);camera.position.z=100;camera.lookAt(0,0,0);
      const resources=new Set(),world={scene,track:r=>{resources.add(r);return r;}},map=new THREE.DataTexture(new Uint8Array([255,100,30,200,255,220,60,255,20,40,255,0,150,50,255,90]),2,2);map.needsUpdate=true;
      const billboards=new BillboardBatch(world,map),beams=new BeamBatch(world,map),gl=renderer.getContext();
      window.fixture={renderer,scene,camera,resources,billboards,beams,map,gl,THREE};
      window.fixtureFrame=({particles,lines,time})=>{
        billboards.count=beams.count=0;
        for(let i=0;i<particles;i++)billboards.add([i%29*8-115,Math.floor(i/29)%23*8-88,0],7,9,[1,.8,.6],.45,i*.02,[1.1,.9],i%2);
        for(let i=0;i<lines;i++)beams.addPoints(Array.from({length:6},(_,j)=>new THREE.Vector3(-120+i%31*8+(j%2)*7,-80+Math.floor(i/31)*7+(j>1?6:0),-1)),[.8,.4,1],.6,.2,.8,null,Array.from({length:6},(_,j)=>[j/6,.5,1-j/6]));
        billboards.flush(time);beams.flush(time);renderer.render(scene,camera);
        const error=gl.getError();return {particles,lines,time,memory:gl.__bufferLedger(),geometries:renderer.info.memory.geometries,drawInstances:renderer.info.render.triangles,billboardCapacity:billboards.bufferCapacity??billboards.capacity,beamCapacity:beams.bufferCapacity??beams.capacity,resources:resources.size,error,png:renderer.domElement.toDataURL('image/png')};
      };
    });
    const stages=[{particles:1,lines:1,time:0},{particles:20,lines:12,time:.2},{particles:8192,lines:512,time:.4},{particles:3,lines:2,time:.6},{particles:0,lines:0,time:10.5},{particles:0,lines:0,time:10.7},{particles:0,lines:0,time:12},{particles:1200,lines:40,time:12.1}];
    for(let i=0;i<stages.length;i++){
      const result=await page.evaluate(stage=>window.fixtureFrame(stage),stages[i]);await writeFile(out+`/fixture-${i}.png`,Buffer.from(result.png.split(',')[1],'base64'));delete result.png;report.fixture.push(result);
    }
    // A real context recreation must be able to upload the retained CPU data.
    await page.evaluate(async()=>{const f=window.fixture;f.renderer.forceContextLoss();await new Promise(r=>setTimeout(r,30));f.renderer.forceContextRestore();await new Promise(r=>setTimeout(r,100));});
    const restored=await page.evaluate(()=>window.fixtureFrame({particles:1200,lines:40,time:12.2}));await writeFile(out+'/fixture-restored.png',Buffer.from(restored.png.split(',')[1],'base64'));delete restored.png;report.fixture.push({restored:true,...restored});await page.close();
  }
  for(const index of fixtureOnly?[]:[0,1,2,3,4]){
    const page=await context.newPage();page.on('pageerror',error=>report.errors.push(error.stack));await page.goto(url+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
    const row=await page.evaluate(async index=>{
      const a=window.__redcat;await a.startLevel(index);a.pause();window.manualFrames=true;a.audio.pause();
      const w=a.world,g=a.gameplay,h=g.scripts;for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;h.pendingCutsceneStop=null;h.enemiesFrozen=false;
      for(const o of g.objects)if(['trigger','fairy'].includes(o.kind))o.enabled=false;g.damage=()=>{};
      w.updateCamera(1,true);await w.geometryStream.settle();
      const memory=()=>({buffers:w.renderer.getContext().__bufferLedger(),renderer:{...w.renderer.info.memory},stream:{...w.geometryStream.stats},actors:{...w.actorResidency.stats},effects:[...w.effects.batches.values(),...w.effects.beamBatches.values(),w.effects.coronaBatch].filter(Boolean).map(b=>({count:b.count,capacity:b.bufferCapacity??b.capacity,cpuBytes:Object.values(b.mesh.geometry.attributes).reduce((sum,attribute)=>sum+attribute.array.byteLength,0)}))});
      for(let i=0;i<180;i++){w.update(1/60,{forward:.25,turn:.55});w.render();if(i%8===0)await new Promise(r=>setTimeout(r,0));}
      await w.geometryStream.settle();w.effects.update(0);w.render();
      const visible=memory(),snapshot=g.snapshot(),png=w.renderer.domElement.toDataURL('image/png');
      const eye=w.camera.position.clone(),rotation=w.camera.quaternion.clone();w.camera.position.set(1000000,1000000,1000000);w.camera.lookAt(1000000,1000000,1000001);
      w.updateRenderResidency();w.effects.update(0);const now=performance.now()/1000;
      for(const batch of [...w.effects.batches.values(),...w.effects.beamBatches.values(),w.effects.coronaBatch].filter(Boolean))batch.flush(now+11);
      w.geometryStream.update(now+20);w.actorResidency.update(w.actorRoots,w.camera,now+20);await w.geometryStream.settle();w.render();const idle=memory();
      w.camera.position.copy(eye);w.camera.quaternion.copy(rotation);w.updateRenderResidency();await w.geometryStream.settle();w.effects.update(0);w.render();
      return {index,visible,idle,returned:memory(),snapshot,png,returnPng:w.renderer.domElement.toDataURL('image/png'),glError:w.renderer.getContext().getError(),scriptError:h.vm.lastError};
    },index);
    for(const key of ['png','returnPng']){await writeFile(out+`/level-${index}-${key}.png`,Buffer.from(row[key].split(',')[1],'base64'));delete row[key];}
    await writeFile(out+`/level-${index}-state.json`,JSON.stringify(row.snapshot,null,2)+'\n');delete row.snapshot;
    report.levels.push(row);console.log(JSON.stringify({index,visible:row.visible.buffers.liveBytes,idle:row.idle.buffers.liveBytes,returned:row.returned.buffers.liveBytes,error:row.glError}));await page.close();
  }
}finally{await writeFile(out+'/report.json',JSON.stringify(report,null,2)+'\n');await context?.close();server.kill();}
