import assert from 'node:assert/strict';
import {spawn} from 'node:child_process';
import {writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import {chromium} from 'playwright';
const output='temp_work/msaa-settings-2026-10-20';
const report={checks:[],errors:[],badResponses:[]};
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4389',TMPDIR:'temp_work'},stdio:['ignore','pipe','pipe']});
let log='',context;
server.stdout.on('data',d=>log+=d);server.stderr.on('data',d=>log+=d);
await new Promise((resolve,reject)=>{server.stdout.on('data',d=>{if(String(d).includes('RedCat:'))resolve();});server.once('error',reject);server.once('exit',c=>reject(new Error(`server exited ${c}`)));});
try {
  context=await chromium.launchPersistentContext(resolve(output,'profile'),{executablePath:'/usr/bin/google-chrome',headless:true,env:{...process.env,TMPDIR:'temp_work'},args:['--use-angle=swiftshader','--enable-unsafe-swiftshader','--autoplay-policy=no-user-gesture-required'],viewport:{width:800,height:600},deviceScaleFactor:1});
  await context.addInitScript(()=>{
    if(!localStorage.getItem('msaa-test-initialized')){
      localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,msaa:4}));
      localStorage.setItem('msaa-test-initialized','true');
    }
  });
  const page=await context.newPage();
  page.on('pageerror',e=>report.errors.push(String(e)));
  page.on('console',message=>{if(message.type()==='error')report.errors.push(message.text());});
  page.on('response',r=>{if(r.status()>=400)report.badResponses.push(r.url());});
  await page.goto('http://127.0.0.1:4389/?skipIntro');await page.waitForFunction(()=>window.__redcat?.originalMenu);
  report.render=await page.evaluate(async()=>{
    const THREE=await import('three');const {MsaaRenderer}=await import('/src/msaa-renderer.js');
    const renderer=new THREE.WebGLRenderer({antialias:false,preserveDrawingBuffer:true});renderer.setSize(80,80);renderer.outputColorSpace=THREE.SRGBColorSpace;
    const msaa=new MsaaRenderer(renderer,0),scene=new THREE.Scene(),camera=new THREE.OrthographicCamera(-1,1,1,-1,0,2);
    scene.background=new THREE.Color(0,0,0);
    const geometry=new THREE.BufferGeometry();geometry.setAttribute('position',new THREE.Float32BufferAttribute([-.9,-.8,-1,.9,-.8,-1,-.37,.91,-1],3));
    const material=new THREE.MeshBasicMaterial({color:0xffffff});scene.add(new THREE.Mesh(geometry,material));
    const gl=renderer.getContext();
    function pixels(){const data=new Uint8Array(80*80*4);gl.readPixels(0,0,80,80,gl.RGBA,gl.UNSIGNED_BYTE,data);return data;}
    function edges(data){let count=0;for(let i=0;i<data.length;i+=4)if(data[i]>0&&data[i]<255)count++;return count;}
    msaa.render(scene,camera);const baseline=pixels();const result={supported:msaa.supported,offEdges:edges(baseline),samples:[]};
    for(const samples of msaa.supported.filter(Boolean)){
      msaa.setSamples(samples);msaa.render(scene,camera);const data=pixels();
      const props=renderer.properties.get(msaa.target);gl.bindRenderbuffer(gl.RENDERBUFFER,props.__webglColorRenderbuffer[0]);
      const actual=gl.getRenderbufferParameter(gl.RENDERBUFFER,gl.RENDERBUFFER_SAMPLES);gl.bindRenderbuffer(gl.RENDERBUFFER,null);
      const sample={requested:samples,actual,edges:edges(data),black:Array.from(data.slice(0,4)),error:gl.getError()};
      material.color.setRGB(.006,.045,.24);msaa.setSamples(0);msaa.render(scene,camera);const flat=pixels();
      msaa.setSamples(samples);msaa.render(scene,camera);const smooth=pixels();const center=(40*80+40)*4;
      sample.opaqueOff=Array.from(flat.slice(center,center+4));sample.opaqueMsaa=Array.from(smooth.slice(center,center+4));
      material.color.setRGB(1,1,1);
      msaa.setSize(120,60);renderer.setSize(120,60);msaa.render(scene,camera);sample.resize=[msaa.target.width,msaa.target.height];
      renderer.setSize(80,80);msaa.setSize(80,80);
      result.samples.push(sample);
    }
    for(let i=0;i<12;i++){msaa.setSamples(msaa.supported.at(-1));msaa.render(scene,camera);msaa.setSamples(0);msaa.render(scene,camera);}
    result.offReleased=msaa.target===null;result.texturesAfterOff=renderer.info.memory.textures;result.error=gl.getError();
    msaa.dispose();geometry.dispose();material.dispose();renderer.dispose();return result;
  });
  assert.equal(report.render.offEdges,0);
  for(const sample of report.render.samples){assert.equal(sample.actual,sample.requested);assert.ok(sample.edges>0);assert.deepEqual(sample.black,[0,0,0,255]);assert.equal(sample.error,0);assert.deepEqual(sample.resize,[120,60]);sample.opaqueOff.forEach((v,i)=>assert.ok(Math.abs(v-sample.opaqueMsaa[i])<=1));}
  assert.equal(report.render.offReleased,true);assert.equal(report.render.texturesAfterOff,0);assert.equal(report.render.error,0);
  report.checks.push('WebGL actual samples, smoothed edges, black/color preservation, resize and repeated disposal verified');
  await page.evaluate(()=>{__redcat.menuAudio.say=()=>Promise.resolve(true);});
  await page.locator('#open-settings').click();await page.locator('#open-advanced-settings').click();
  assert.deepEqual(await page.locator('#msaa option').evaluateAll(els=>els.map(el=>Number(el.value))),[0,2,4,8]);
  const supported=await page.locator('#msaa option:enabled').evaluateAll(els=>els.map(el=>Number(el.value)));
  assert.deepEqual(supported,report.render.supported);
  await page.locator('#msaa').selectOption('0');await page.locator('#apply-settings').click();
  assert.equal(await page.evaluate(()=>__redcat.settings.msaa),0);
  await page.reload();await page.waitForFunction(()=>window.__redcat?.originalMenu);
  assert.equal(await page.evaluate(()=>__redcat.settings.msaa),0);
  await page.evaluate(()=>{__redcat.menuAudio.say=()=>Promise.resolve(true);});
  await page.locator('#open-settings').click();await page.locator('#open-advanced-settings').click();
  const enabled=String(supported.at(-1));await page.locator('#msaa').selectOption(enabled);await page.locator('#close-settings').click();assert.equal(await page.evaluate(()=>__redcat.settings.msaa),0);
  await page.locator('#open-settings').click();await page.locator('#open-advanced-settings').click();await page.locator('#msaa').selectOption(enabled);await page.locator('#apply-settings').click();
  assert.equal(await page.evaluate(()=>__redcat.settings.msaa),Number(enabled));
  report.checks.push('Dropdown exposes Off/2x/4x/8x, disables unsupported counts; OK persists across reload, Annuleren leaves settings unchanged');
  await page.evaluate(async()=>{await __redcat.startLevel(0);__redcat.pause();});
  assert.equal(await page.evaluate(()=>__redcat.mode),'paused');
  await page.waitForFunction(()=>__redcat.world.renderer.info.render.triangles>1000);
  report.game=await page.evaluate(()=>({error:__redcat.world.renderer.getContext().getError(),triangles:__redcat.world.renderer.info.render.triangles,msaa:__redcat.settings.msaa,targetReturned:__redcat.world.renderer.getRenderTarget()===null}));
  assert.equal(report.game.error,0);assert.equal(report.game.targetReturned,true);
  await page.screenshot({path:`${output}/world-msaa.png`});
  await page.locator('#pause-settings').click();await page.locator('#open-advanced-settings').click();await page.locator('#msaa').selectOption('0');await page.locator('#apply-settings').click();
  await page.waitForFunction(()=>__redcat.world.renderer.getContext().getError()===0);
  await page.locator('#pause-settings').click();await page.locator('#open-advanced-settings').click();await page.locator('#msaa').selectOption(enabled);await page.locator('#apply-settings').click();
  await page.waitForFunction(()=>__redcat.world.renderer.info.render.triangles>1000);
  report.checks.push('Level 1 loads and renders with MSAA; switching Off/on while paused restores framebuffer and redraws without WebGL errors');
  await page.locator('#pause-settings').click();await page.locator('#open-advanced-settings').click();await page.locator('#msaa').scrollIntoViewIfNeeded();await page.screenshot({path:`${output}/desktop-setting.png`});
  await page.setViewportSize({width:390,height:844});await page.locator('#msaa').scrollIntoViewIfNeeded();await page.screenshot({path:`${output}/mobile-setting.png`});
  const box=await page.locator('#msaa').boundingBox();assert.ok(box.x>=0&&box.x+box.width<=390);
  assert.deepEqual(report.errors,[]);assert.deepEqual(report.badResponses,[]);report.passed=true;
}catch(error){report.failure=String(error.stack||error);throw error;}
finally{await writeFile(`${output}/report.json`,JSON.stringify(report,null,2)+'\n');await writeFile(`${output}/server.log`,log);await context?.close();server.kill();console.log(JSON.stringify(report,null,2));}
