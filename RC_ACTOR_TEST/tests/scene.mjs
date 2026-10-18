import assert from 'node:assert/strict';
import {createServer} from 'node:http';
import {readFile,mkdir,writeFile} from 'node:fs/promises';
import {fileURLToPath} from 'node:url';
import path from 'node:path';
import {createRequire} from 'node:module';

const require=createRequire(import.meta.url);
const {configureEnvironment}=require('../electron/runtime.cjs');
const runtime=configureEnvironment();
const {chromium}=await import('playwright');
const root=fileURLToPath(new URL('../',import.meta.url));
const comparison=process.argv.includes('--comparison');
const evidence=path.resolve(root,comparison?'../temp_work/actor-comparison-2026-10-13/verification':'../temp_work/actor-test-2026-10-13/verification');
await mkdir(evidence,{recursive:true});
// Linux Unix sockets cannot use the project's full, long pathname. This
// process-relative alias still stores every file in the requested temp_work.
process.chdir(root);
await mkdir(path.resolve(root,'../temp_work/actor-browser'),{recursive:true});
const browserTemp=process.platform==='linux'?'/proc/self/cwd/../temp_work/actor-browser':runtime.tmp;
const mime={'.html':'text/html','.js':'text/javascript','.css':'text/css','.json':'application/json','.png':'image/png','.wav':'audio/wav'};
const server=createServer(async(req,res)=>{
  try{
    const url=new URL(req.url,'http://localhost');
    const file=path.resolve(root,'.'+decodeURIComponent(url.pathname==='/'?'/index.html':url.pathname));
    if(!file.startsWith(root)){res.writeHead(403).end();return;}
    const data=await readFile(file);res.writeHead(200,{'Content-Type':mime[path.extname(file)]||'application/octet-stream'});res.end(data);
  }catch{res.writeHead(404).end();}
});
await new Promise(resolve=>server.listen(0,'127.0.0.1',resolve));
let browser;
const errors=[],missing=[],consoleErrors=[];
try{
  browser=await chromium.launchPersistentContext(path.join(evidence,'browser-profile'),{
    executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,
    viewport:{width:1440,height:900},args:['--use-angle=gl'],
    env:{...process.env,TMPDIR:browserTemp,TMP:browserTemp,TEMP:browserTemp},
  });
  const page=await browser.newPage();
  page.on('pageerror',e=>errors.push(e.stack));
  page.on('console',m=>{if(m.type()==='error')consoleErrors.push(m.text());});
  page.on('response',r=>{if(r.status()>=400)missing.push(r.url());});
  await page.goto(`http://127.0.0.1:${server.address().port}/`);
  await page.waitForFunction(()=>window.__actorTest,{},{timeout:30000});
  if(comparison){
    await checkComparisons(page,evidence);
    assert.deepEqual(errors,[]);assert.deepEqual(missing,[]);assert.deepEqual(consoleErrors,[]);
    console.log('PASS thirteen comparison pairs, original assets, animations, selection, camera and renderer');
  }else if(!process.argv.includes('--ui-only')){
  const expected=['knight2','knight3','k_active','spider','bat','batfly','maxtest1','fep_test5','brutus','redcat2','whizztest8','tstwitch','mxmach'];
  assert.deepEqual(await page.evaluate(()=>window.__actorTest.snapshot().actors.slice(0,13).map(c=>c.actor)),expected);
  await page.locator('#resume').click();
  const before=await page.evaluate(()=>window.__actorTest.world.player.position.slice());
  await page.keyboard.down('KeyW');await page.waitForTimeout(300);await page.keyboard.up('KeyW');
  assert.ok(await page.evaluate(start=>window.__actorTest.world.player.position[2]<start[2]-10,before),'real input moves RedCat');
  await page.keyboard.down('Space');await page.waitForTimeout(150);await page.keyboard.up('Space');
  assert.ok(await page.evaluate(()=>window.__actorTest.world.player.position[1]>5),'original jump controller');
  await page.waitForTimeout(700);
  assert.ok(await page.evaluate(()=>window.__actorTest.world.player.grounded));
  await page.screenshot({path:path.join(evidence,'actor-room.png')});
  // Every imported motion must actually deform the original mesh with finite
  // coordinates, while static variants retain their original bind geometry.
  const clips=await page.evaluate(()=>{
    const t=window.__actorTest,rows=[];t.world.animationsPaused=true;
    for(const [i,e] of t.world.exhibits.slice(0,13).entries()){
      const mesh=e.root.userData.mesh,a=e.root.userData.animator;
      if(!e.clips.length){rows.push({actor:e.actor,static:!a});continue;}
      t.world.selectExhibit(i);
      for(const c of e.clips){
        t.world.playClip(c.name,false);a.time=0;a.update(0);
        const first=Array.from(mesh.geometry.attributes.position.array);
        a.time=c.duration*.47;a.update(0);
        const second=mesh.geometry.attributes.position.array;
        rows.push({actor:e.actor,clip:c.name,finite:second.every(Number.isFinite),changed:second.some((v,i)=>Math.abs(v-first[i])>.001)});
      }
    }
    return rows;
  });
  for(const clip of clips){if('static' in clip)assert.equal(clip.static,true);else{assert.equal(clip.finite,true);assert.equal(clip.changed,true,`${clip.actor}/${clip.clip} animates`);}}
  await page.evaluate(()=>{window.__actorTest.world.animationsPaused=false;window.__actorTest.select(5);});
  await page.waitForTimeout(250);
  const t0=await page.evaluate(()=>window.__actorTest.world.exhibits[5].root.userData.animator.time);
  await page.waitForTimeout(150);
  const t1=await page.evaluate(()=>window.__actorTest.world.exhibits[5].root.userData.animator.time);
  assert.notEqual(t0,t1,'embedded fly motion advances');
  await page.keyboard.press('KeyP');
  const frozen=await page.evaluate(()=>window.__actorTest.world.exhibits[5].root.userData.animator.time);
  await page.waitForTimeout(200);
  assert.equal(await page.evaluate(()=>window.__actorTest.world.exhibits[5].root.userData.animator.time),frozen);
  await page.keyboard.press('KeyP');
  await page.keyboard.press('BracketRight');assert.equal(await page.evaluate(()=>window.__actorTest.world.selectedIndex),6);
  await page.keyboard.press('Digit4');assert.equal(await page.evaluate(()=>window.__actorTest.world.selectedIndex),3);
  const clipBefore=await page.evaluate(()=>window.__actorTest.world.exhibits[3].clip);
  await page.keyboard.press('KeyE');assert.notEqual(await page.evaluate(()=>window.__actorTest.world.exhibits[3].clip),clipBefore);
  // Inspect every model from a walkable approach position, catch culling,
  // upside-down placement, texture requests and runtime errors along the way.
  for(let i=0;i<expected.length;i++){
    await page.evaluate(i=>window.__actorTest.select(i),i);await page.waitForTimeout(120);
    await page.screenshot({path:path.join(evidence,`${String(i+1).padStart(2,'0')}-${expected[i]}.png`)});
  }
  await page.keyboard.press('Escape');
  assert.equal(await page.evaluate(()=>window.__actorTest.snapshot().paused),true);
  assert.equal(await page.evaluate(()=>window.__actorTest.audio.paused),true);
  await page.locator('#model').selectOption('9');await page.locator('#clip').selectOption('shoot3');
  await page.locator('#loop').uncheck();await page.locator('#play').click();
  await page.waitForTimeout(1300);
  assert.equal(await page.evaluate(()=>window.__actorTest.world.exhibits[9].root.userData.animator.finished),true,'one-shot holds final pose');
  await page.keyboard.press('KeyR');
  await page.waitForFunction(()=>window.__actorTest.world.selectedIndex===0 && window.__actorTest.world.exhibits?.length===26);
  assert.equal(await page.evaluate(()=>window.__actorTest.gameplay.state.score),0);
  assert.equal(await page.evaluate(()=>localStorage.length),0,'no campaign settings/saves');
  assert.deepEqual(errors,[]);assert.deepEqual(missing,[]);assert.deepEqual(consoleErrors,[]);
  const report={passed:true,checks:['13 verified actor files','normal walking/jumping','all embedded motions deform meshes','static variants remain static','model and clip keys','animation pause','one-shot and looping playback','selector controls','reset','pause','no saved state or resource/render errors'],clips};
  await writeFile(path.join(evidence,'results.json'),JSON.stringify(report,null,2)+'\n');console.log(report);
  }else{
    await page.locator('#model').focus();await page.keyboard.press('ArrowDown');
    assert.equal(await page.locator('#model').inputValue(),'1','arrow key selects next model in menu');
    assert.equal(await page.locator('#loop').isDisabled(),true,'static poses have no loop control');
    await page.locator('#model').selectOption('5');
    await page.locator('#loop').focus();await page.keyboard.press('Space');
    assert.equal(await page.locator('#loop').isChecked(),false,'Space toggles checkbox');
    const resetGuard=await page.evaluate(async()=>{
      const t=window.__actorTest,pending=t.reset();
      const disabled=[...document.querySelectorAll('button,select,input')].every(e=>e.disabled);
      t.select(5);t.nextClip();t.freeze();
      dispatchEvent(new KeyboardEvent('keydown',{code:'Digit9',bubbles:true}));
      await pending;return {disabled,selected:t.world.selectedIndex,count:t.world.exhibits.length};
    });
    assert.deepEqual(resetGuard,{disabled:true,selected:0,count:26});
    assert.equal(await page.locator('#resume').isEnabled(),true);
    assert.deepEqual(errors,[]);assert.deepEqual(missing,[]);assert.deepEqual(consoleErrors,[]);
    await writeFile(path.join(evidence,'ui-results.json'),JSON.stringify({passed:true,checks:['keyboard form navigation','reset interaction guard'],resetGuard},null,2)+'\n');
    console.log('PASS keyboard menu controls and reset interaction guard');
  }
}catch(error){
  console.error({errors,missing,consoleErrors});
  if(browser){const page=browser.pages().at(-1);await page.screenshot({path:path.join(evidence,'failure.png')}).catch(()=>{});console.error(await page.locator('#overlay-message').textContent().catch(()=>''));}
  throw error;
}finally{await browser?.close();await new Promise(resolve=>server.close(resolve));}

async function checkComparisons(page,evidence){
  const expected=['knight','knight','knight','spiderg','batg','batg','maxj','plant','brutusm','redcat','wkkooi','witch','max-turret'];
  const state=await page.evaluate(async()=>{
    const t=window.__actorTest,{Box3}=await import('three');
    t.world.animationsPaused=true;
    return t.world.exhibits.map(e=>{
      e.root.updateWorldMatrix(true,true);
      const bounds=new Box3().setFromObject(e.root);
      return {id:e.id,actor:e.actor,role:e.role,pairIndex:e.pairIndex,position:e.root.position.toArray(),
        min:bounds.min.toArray(),max:bounds.max.toArray(),clip:e.clip,
        parts:e.parts.map(p=>({name:p.name,scale:p.root.userData.mesh.scale.toArray(),
          rotation:p.root.userData.mesh.rotation.toArray().slice(0,3),
          initialRotation:p.data.settings.initialRotationDegrees,
          nativeScale:p.data.settings.scale,clips:p.data.animations.map(c=>c.name),
          textures:p.root.userData.mesh.material.map(m=>({width:m.map?.image?.width||0,height:m.map?.image?.height||0})),
        })),
      };
    });
  });
  assert.equal(state.length,26);assert.equal(new Set(state.map(e=>e.id)).size,26);
  assert.deepEqual(state.slice(13).map(e=>e.actor),expected);
  for(let i=0;i<13;i++){
    const old=state[i],used=state[i+13];
    assert.equal(old.role,'unused');assert.equal(used.role,'used');assert.equal(used.pairIndex,i);
    assert.equal(old.position[2],used.position[2]);assert.equal(used.position[0]-old.position[0],200);
    assert.ok(old.max[0]<used.min[0],`${old.actor}/${used.actor} do not overlap`);
    assert.ok(Math.abs(used.min[1]-(used.actor==='batg'?65.1:.1))<.01,`${used.actor} grounded as a whole`);
    for(const part of used.parts){
      assert.ok(part.textures.every(t=>t.width>0&&t.height>0),`${part.name} original textures loaded`);
      if(used.actor!=='max-turret')assert.ok(part.scale.every(s=>s===part.nativeScale),`${part.name} native scale retained`);
    }
  }
  const machine=state.at(-1);
  assert.deepEqual(machine.parts.map(p=>p.name),['turbot','turtop','brcrate','maxd']);
  assert.deepEqual(machine.parts[2].scale,[.84,.84,2.38]);
  assert.equal(machine.clip,'turtop / litopen');
  for(const p of machine.parts)assert.ok(Math.abs(p.rotation[0]+Math.PI/2)<1e-6,`${p.name} upright`);
  // Drive each new animated body through real preview controls, retaining the
  // native sampler. At least one of its original motions must deform the mesh.
  const animationChecks=await page.evaluate(()=>{
    const w=window.__actorTest.world,results=[];
    for(let i=13;i<w.exhibits.length;i++){
      const e=w.exhibits[i];w.selectExhibit(i);
      for(let p=0;p<e.parts.length;p++){
        const part=e.parts[p];if(!part.animator)continue;
        let changes=0;
        for(const clip of e.clips.filter(c=>c.part===p)){
          w.playClip(clip.name,false);
          const a=part.animator,positions=part.root.userData.mesh.geometry.attributes.position.array;
          const start=Array.from(positions);a.time=clip.duration*.47;a.update(0);
          if(!positions.every(Number.isFinite))throw Error(`${part.name}/${clip.name} invalid coordinates`);
          if(positions.some((v,j)=>Math.abs(v-start[j])>.001))changes++;
        }
        results.push({name:part.name,changes});
      }
    }
    return results;
  });
  assert.ok(animationChecks.every(r=>r.changes>0));
  // Reload the gallery's default poses for visual review and exercise reset
  // with the added counterpart instances present.
  await page.evaluate(()=>window.__actorTest.reset());
  assert.equal(await page.locator('#model option').count(),26);
  await page.locator('#model').selectOption('20');
  assert.match(await page.locator('#status').textContent(),/In het spel.*plant/);
  await page.locator('#clip').selectOption('shoot1');
  await page.locator('#play').click();
  assert.equal(await page.evaluate(()=>window.__actorTest.world.exhibits[20].parts[0].animator.name),'shoot1');
  // Both models should fit the comparison view; retain a frame of every pair.
  for(let i=0;i<13;i++){
    await page.evaluate(i=>window.__actorTest.select(i),i);
    await page.waitForTimeout(120);
    await page.screenshot({path:path.join(evidence,`pair-${String(i+1).padStart(2,'0')}.png`)});
  }
  await page.keyboard.press('KeyV');
  assert.equal(await page.evaluate(()=>window.__actorTest.world.settings.camera),'first');
  await page.keyboard.press('KeyV');
  assert.equal(await page.evaluate(()=>window.__actorTest.world.settings.camera),'third');
  await writeFile(path.join(evidence,'results.json'),JSON.stringify({passed:true,state,animationChecks,
    checks:['13 unused/used adjacent pairs','original counterpart sizes and textures','whole turret grounded and upright','native animations deform correctly','used model and clip selection','reset with 26 exhibits','V camera toggle','13 pair screenshots']},null,2)+'\n');
}
