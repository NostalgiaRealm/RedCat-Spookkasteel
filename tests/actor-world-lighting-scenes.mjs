import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4298'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[],reports=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('console',m=>{if(m.type()==='error'&&/shader|WebGLProgram|VALIDATE_STATUS/i.test(m.text()))errors.push(m.text());});
  await page.addInitScript(()=>{
    localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));
    localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false}));
  });
  await page.goto('http://127.0.0.1:4298/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const selected=process.argv.find(arg=>arg.startsWith('--level='));
  for(const index of selected?[Number(selected.split('=')[1])]:[0,1,2]) {
    const report=await page.evaluate(async index=>{
      const app=window.__redcat;const started=await app.startLevel(index);if(!started)throw new Error('Level load failed: '+document.body.innerText);app.pause();document.getElementById('pause').hidden=true;
      const w=app.world,g=app.gameplay;
      for(const motion of g.scripts.players.values())motion.stop();g.scripts.camera=null;g.scripts.cutscene=false;
      const enemy=g.objects.find(o=>o.kind==='enemy'&&o.enemyType===['frog','knight','zombie','skeleton','witch'][index]);
      if(!enemy)throw new Error('Missing enemy: '+JSON.stringify(g.objects.filter(o=>o.kind==='enemy').map(o=>o.enemyType)));
      enemy.enabled=true;enemy.visible=true;w.syncModels();w.syncActors(0);w.syncPlayer(0,{});w.syncActorLighting([]);
      const root=w.actorInstances.get(enemy.id),state=root.userData.mesh.userData.actorLighting;
      const settings=state.settings.lighting,position=root.position.toArray();
      const sample={position,ambient:state.uniforms.actorAmbient.value.toArray(),fill:state.uniforms.actorFillColor.value.toArray(),normal:state.uniforms.actorFillNormal.value.toArray(),settings};
      const red=w.redcat.userData.mesh.userData.actorLighting;
      const sunBefore=w.actorLightVisibility.stats.traces,floorBefore=w.actorFloorLighting.stats.queries;
      const cachedTimes=[];
      for(let frame=0;frame<40;frame++){const t=performance.now();w.syncActorLighting([]);cachedTimes.push(performance.now()-t);}
      const cache={sunTraces:w.actorLightVisibility.stats.traces-sunBefore,floorQueries:w.actorFloorLighting.stats.queries-floorBefore};
      // Original Sun dirty tracking follows actors. Rotating a distant model
      // must not cause a level-wide burst of Sun traces every frame.
      let brushCache=null;
      if(index===3){
        const model=w.physicalModels.find(i=>i>0),old=w.collider.modelTransforms.get(model),before=w.actorLightVisibility.stats.traces,times=[];
        for(let frame=0;frame<20;frame++){
          w.collider.modelTransforms.set(model,{origin:[0,0,0],translation:[0,0,0],rotation:[0,Math.sin(frame*.01),0,Math.cos(frame*.01)]});
          const t=performance.now();w.syncActorLighting([]);times.push(performance.now()-t);
        }
        if(old)w.collider.modelTransforms.set(model,old);else w.collider.modelTransforms.delete(model);
        brushCache={traces:w.actorLightVisibility.stats.traces-before,maxMilliseconds:Math.max(...times)};
      }
      const moveTimes=[];
      for(let frame=0;frame<80;frame++) {
        root.position.x+=.5;w.redcat.position.x+=.5;
        const t=performance.now();w.syncActorLighting([]);moveTimes.push(performance.now()-t);
      }
      // Changing the current skeletal pose must not change the cached AABB
      // used by AdamActor's Sun reference (the native bounds are setup data).
      const oldBounds=state.bounds.toArray?state.bounds.toArray():[...state.bounds.min.toArray(),...state.bounds.max.toArray()];
      const beforePose=w.actorLightVisibility.stats.traces;root.userData.animator?.update(.1);w.syncActorLighting([]);
      const poseTraces=w.actorLightVisibility.stats.traces-beforePose;
      const currentBounds=[...state.bounds.min.toArray(),...state.bounds.max.toArray()];
      root.position.fromArray(position);w.syncActorLighting([]);
      const target=[position[0],position[1]+40,position[2]];
      const views=[[0,0,170],[0,0,-170],[170,0,0],[-170,0,0],[120,70,120],[-120,70,-120]].map(offset=>{
        const end=target.map((value,i)=>value+offset[i]);
        const hit=w.collider.trace(target,end,[-2,-2,-2],[2,2,2],w.physicalModels,null);
        return {position:target.map((value,i)=>value+offset[i]*hit.fraction*.9),clear:hit.startSolid?0:hit.fraction};
      }).sort((a,b)=>b.clear-a.clear);
      w.camera.position.fromArray(views[0].position);w.camera.lookAt(...target);
      w.render();
      const timing=list=>{list.sort((a,b)=>a-b);return{median:list[Math.floor(list.length*.5)],p95:list[Math.floor(list.length*.95)],max:list.at(-1)};};
      return {level:w.id,suns:w.actorWorldLighting.suns.length,enemy:enemy.enemyType,sample,redcatAmbient:red.uniforms.actorAmbient.value.toArray(),cache,brushCache,poseTraces,oldBounds,currentBounds,
        cachedMilliseconds:timing(cachedTimes),movingMilliseconds:timing(moveTimes),floor:w.actorFloorLighting.stats,visibility:w.actorLightVisibility.stats};
    },index);
    assert.ok(report.sample.fill.some(v=>v>0),`No native Sun selected: ${JSON.stringify(report)}`);
    assert.ok(report.sample.ambient.every(v=>v>=0&&v<=.3));
    assert.deepEqual(report.redcatAmbient,[55/255,55/255,55/255]);
    assert.deepEqual(report.cache,{sunTraces:0,floorQueries:0});
    if(report.brushCache)assert.equal(report.brushCache.traces,0);
    assert.equal(report.poseTraces,0);assert.deepEqual(report.oldBounds,report.currentBounds);
    await page.screenshot({path:`artifacts/actor-lighting-${report.level}.png`});reports.push(report);
    console.log(JSON.stringify({level:report.level,cache:report.cache,cached:report.cachedMilliseconds,moving:report.movingMilliseconds}));
  }
  assert.deepEqual(errors,[]);
  await writeFile(`artifacts/actor-world-lighting-scenes${selected?'-'+selected.split('=')[1]:''}.json`,JSON.stringify({reports,errors},null,2)+'\n');
  console.log('PASS source actors use original Sun/floor lighting; stationary and pose-only updates reuse visibility and floor samples.');
}finally{await browser?.close();server.kill();}
