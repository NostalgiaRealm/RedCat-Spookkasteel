import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4224'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try{
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  // Fixture progression allows checking the other level that authors decals;
  // it does not change the game's chapter-unlock rules or user storage.
  await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:2})));
  await page.goto('http://127.0.0.1:4224/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const report=[];
  for(const index of [0,2]){
    const result=await page.evaluate(async index=>{
      const THREE=await import('three'),app=window.__redcat;await app.startLevel(index);app.pause();document.getElementById('pause').hidden=true;
      const w=app.world,g=app.gameplay,h=g.scripts;if(w.id!==`lvl0${index}a`)throw new Error('Requested decal fixture level was not loaded');for(const p of h.players.values())p.stop();h.cutscene=false;h.camera=null;
      document.body.classList.remove('in-cutscene');document.getElementById('subtitle').hidden=true;
      const decals=w.effects.decals,expected=g.objects.filter(o=>o.entity.classname==='EffectDecalEntity');
      const entries=[...decals.entries].map(([id,e])=>({id,name:e.object.entity.DaviName,bitmap:e.object.entity.BitmapFileName,origin:e.object.position,placement:e.placement,visible:e.mesh.visible}));
      const screenshots={},visiblePixels={};
      const targets=index===0?[g.find('ufohole')[0],expected[1]]:expected;
      for(const object of targets){
        const entry=decals.entries.get(object.id);if(!entry)continue;
        const p=entry.placement.position,n=entry.placement.normal;
        if(object.entity.DaviName==='ufohole'){w.camera.position.set(-1440,30,2630);w.camera.lookAt(-1230,-145,2250);}
        else {w.camera.position.fromArray(p.map((v,i)=>v+n[i]*110+(i===2?35:0)));w.camera.lookAt(...p);}
        const target=new THREE.WebGLRenderTarget(320,180),before=new Uint8Array(320*180*4),after=new Uint8Array(before.length),prior=w.renderer.getRenderTarget();
        w.renderer.setRenderTarget(target);w.renderer.render(w.scene,w.camera);w.renderer.readRenderTargetPixels(target,0,0,320,180,before);
        entry.mesh.visible=false;w.renderer.render(w.scene,w.camera);w.renderer.readRenderTargetPixels(target,0,0,320,180,after);
        entry.mesh.visible=true;w.renderer.setRenderTarget(prior);target.dispose();
        let changed=0;for(let i=0;i<before.length;i+=4)if(Math.abs(before[i]-after[i])+Math.abs(before[i+1]-after[i+1])+Math.abs(before[i+2]-after[i+2])>3)changed++;
        visiblePixels[object.id]=changed;w.render();screenshots[object.entity.DaviName||object.id]=w.renderer.domElement.toDataURL('image/png').split(',')[1];
      }
      const object=g.find('ufohole')[0];let toggles=null;
      if(object){g.command(object,'disable');decals.update();const disabled=!decals.entries.get(object.id).mesh.visible;g.command(object,'enable');decals.update();toggles={disabled,enabled:decals.entries.get(object.id).mesh.visible};}
      return {index,expected:expected.length,entries,visiblePixels,toggles,screenshots};
    },index);
    const {screenshots,...data}=result;report.push(data);
    for(const [name,png] of Object.entries(screenshots))await writeFile(`artifacts/decal-${index}-${name}.png`,Buffer.from(png,'base64'));
    assert.equal(data.entries.length,data.expected,'all original decal placements found');
    assert.ok(Object.values(data.visiblePixels).every(n=>n>10),`decal artwork must reach the rendered image: ${JSON.stringify(data.visiblePixels)}`);
    if(index===0){assert.equal(data.expected,14);assert.deepEqual(data.toggles,{disabled:true,enabled:true});assert.ok(Math.abs(data.entries.find(e=>e.name==='ufohole').placement.position[1]+159.5)<1e-4);}
    else assert.equal(data.expected,5);
  }
  await writeFile('artifacts/decal-effects-scenes.json',JSON.stringify({report,errors},null,2)+'\n');
  assert.deepEqual(errors,[]);console.log('PASS: original UFO impact patch, forest lily pads and graveyard decal faces placed and visibly rendered; script enable/disable works; no browser/HTTP errors.');
}finally{await browser?.close();server.kill();}
