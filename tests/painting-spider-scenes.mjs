import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

// The imported painting tiles, compiled Davi callbacks, BSP floor/roof and
// spider actors. Player movement is real; no puzzle globals or callbacks are
// injected, and E is never used.
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4217'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',error=>errors.push(error.stack));
  page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
  await page.goto('http://127.0.0.1:4217/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const initial=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(2);app.pause();document.getElementById('pause').hidden=true;
    const w=app.world,g=app.gameplay,h=g.scripts,input={forward:0,right:0,use:false,attack:false};
    for(const player of h.players.values())player.stop();h.cutscene=false;h.camera=null;h.enemiesFrozen=false;
    // Isolate this encounter without changing its five tiles, motion scripts,
    // mausoleum camera/explosion, or the three scripted spiders.
    for(const o of g.objects)if(o.kind==='enemy'&&!['mspina','mspinb','mspinc'].includes(o.entity.DaviName)||o.kind==='trigger'&&o.entity.DaviName!=='mausocam')o.enabled=false;
    const spiders=['mspina','mspinb','mspinc'].map(name=>g.find(name)[0]);
    const buttons=[1,2,3,4,5].map(i=>g.find(`puzbut${i}_mc`)[0]),strips=[1,2,3,4,5].map(i=>g.find(`puzstuk${i}_mc`)[0]);
    const gate=g.find('mausodeur_mc')[0],sequence=g.find('mausomodel_mc')[0],pieces=[g.find('mausodeur_dum1')[0],g.find('mausodeur_dum2')[0]];
    const events=[],oldEvent=g.onEvent;g.onEvent=event=>{if(['visibility','enable','destroy','explosion','scriptSound','cutscene'].includes(event.type))events.push({at:g.time,...event});oldEvent(event);};
    const spiderState=o=>{const actor=w.actorInstances.get(o.id),web=w.spiderWebs.get(o.id);return {id:o.id,name:o.entity.DaviName,enabled:o.enabled,phase:o.ambush?.phase,position:[...o.position],lower:o.ambush?.lower,upper:o.ambush?.upper,anchor:o.ambush?.anchor,visible:actor?.visible,actor:actor?.position.toArray(),animation:o.animationState,motion:actor?.userData.stateAnimator?.animator.name,webVisible:web?.visible||false,web:web?[...web.geometry.attributes.position.array]:null,health:o.health};};
    const state=()=>({at:g.time,position:[...w.player.position],contacts:[...(w.player.contacts||[])],globals:Object.values(h.vm.snapshot().globals).map(v=>v.value),buttons:buttons.map(o=>({name:o.entity.DaviName,count:o.switchCount,inside:o.inside,on:o.switchedOn})),strips:strips.map(o=>({name:o.entity.DaviName,time:h.players.get(o.id).time,enabled:o.enabled})),gate:g.modelState(gate.modelIndex),sequence:{enabled:sequence.enabled,time:h.players.get(sequence.id).time},pieces:pieces.map(o=>({id:o.id,visible:w.actorInstances.get(o.id)?.visible,health:o.health,explosion:!!g.explosions?.some(e=>e.sourceId===o.id)})),fragments:w.effects?.destructibles?.particles.length||0,cutscene:h.cutscene,spiders:spiders.map(spiderState)});
    const place=(x,z,yaw)=>{
      const floor=w.collider.trace([x,-170,z],[x,-300,z],w.player.mins,w.player.maxs,w.physicalModels);
      if(floor.startSolid||floor.fraction===1)throw new Error(`No clear floor at ${x},${z}: ${JSON.stringify(floor)}`);
      w.player.position=floor.end.map((v,i)=>v+(i===1?.05:0));w.player.lastSafe=[...w.player.position];w.player.velocityY=0;w.player.grounded=true;w.yaw=yaw;w.pitch=.12;
      return {startSolid:floor.startSolid,end:floor.end};
    };
    const photograph=(eye,focus)=>{w.syncActors(0);w.syncPlayer(0,input);w.camera.position.fromArray(eye);w.camera.lookAt(...focus);w.render();};
    const effects=[];
    const step=(frames,move=0)=>{for(let i=0;i<frames;i++){w.update(1/60,{...input,forward:move});if(w.effects?.destructibles?.particles.length&&g.explosions?.some(e=>pieces.some(o=>o.id===e.sourceId)))effects.push(state());}};
    place(1100,-2024,Math.PI/2);w.syncModels();w.syncActors(0);photograph([1160,-130,-2128],[872,-152,-2128]);
    window.__painting={w,g,h,input,spiders,buttons,strips,gate,sequence,pieces,events,effects,state,place,photograph,step};
    return state();
  });
  await page.screenshot({path:'artifacts/painting-spiders-initial.png'});
  const puzzle=await page.evaluate(()=>{
    const f=window.__painting,{w,g,h,buttons,state,place,step}=f,presses=[];
    for(const [index,count] of [[0,3],[1,1],[3,3],[4,2]]){
      const button=buttons[index],center=w.collider.data.models[button.modelIndex],x=(center.min[0]+center.max[0])/2,z=(center.min[2]+center.max[2])/2;
      for(let press=0;press<count;press++){
        place(x+65,z,Math.PI/2);step(1);const before=state(),old=button.switchCount;
        for(let i=0;i<75&&button.switchCount===old;i++)step(1,1);
        const touched=state();step(14,-1);step(160);
        presses.push({index:index+1,before,touched,after:state(),model:button.modelIndex});
      }
    }
    const timeline=[];for(let i=0;i<7*60;i++){step(1);if(i%3===0)timeline.push(state());}
    return {presses,timeline,final:state(),events:f.events,effects:f.effects,error:h.vm.lastError};
  });
  await page.evaluate(()=>window.__painting.photograph([1819,-152,-2029],[1802,-152,-2590]));
  await page.screenshot({path:'artifacts/painting-spiders-gate-open.png'});
  const descent=await page.evaluate(()=>{
    const f=window.__painting,{w,g,h,state,place,step}=f;
    place(1130,-2134,-Math.PI/2);step(1);const before=state(),timeline=[];
    for(let i=0;i<120;i++){step(1,1);timeline.push(state());if(f.spiders[0].ambush.phase==='descending'&&f.spiders[0].position[1]<f.spiders[0].ambush.upper[1]-20)break;}
    const spider=f.spiders[0],[x,y,z]=spider.position;f.photograph([x-140,-165,z+110],[x,y+12,z]);
    f.approach={before,timeline};return state();
  });
  await page.screenshot({path:'artifacts/painting-spiders-descending.png'});
  const approach=await page.evaluate(()=>{
    const f=window.__painting,{h,state,step}=f,{before,timeline}=f.approach;
    for(let i=0;i<6*60;i++){step(1,i<160?1:0);if(i%3===0)timeline.push(state());}
    f.photograph([1150,-150,-2200],[1520,-162,-2133]);
    return {before,timeline,final:state(),events:f.events,error:h.vm.lastError};
  });
  await page.screenshot({path:'artifacts/painting-spiders-approached.png'});
  await writeFile('artifacts/painting-spider-scenes.json',JSON.stringify({initial,puzzle,descent,approach,errors},null,2)+'\n');
  if(process.env.PAINTING_DIAGNOSE==='1'){
    console.log(JSON.stringify({initial,puzzle:{presses:puzzle.presses.map(p=>({i:p.index,before:p.before.globals,touched:p.touched.buttons,position:p.touched.position,contacts:p.touched.contacts,after:p.after.globals,strips:p.after.strips,spiders:p.after.spiders})),final:puzzle.final,error:puzzle.error},approach:{before:approach.before,final:approach.final,phases:approach.timeline.map(s=>s.spiders.map(o=>o.phase)).filter((s,i,a)=>!i||JSON.stringify(s)!==JSON.stringify(a[i-1])),error:approach.error},errors}));
  }else{
    assert.equal(initial.gate.visible,true);assert.ok(initial.spiders.every(o=>!o.enabled&&o.phase==='dormant'));
    for(const p of puzzle.presses){assert.ok(p.touched.contacts.includes(p.model),`tile ${p.index}: real hull contact`);assert.equal(p.touched.buttons[p.index-1].count,p.before.buttons[p.index-1].count+1,`tile ${p.index}: walking activates without E`);}
    assert.deepEqual(puzzle.final.globals,[1,1,1,1,1]);assert.equal(puzzle.final.gate.visible,false);
    assert.ok(puzzle.final.pieces.every(o=>!o.visible&&o.health===0));
    assert.ok(puzzle.effects.some(s=>s.fragments>0&&s.pieces.some(o=>o.explosion)),'the original exploding entrance emits fragments');
    assert.ok(puzzle.final.spiders.every(o=>o.enabled&&o.phase==='dormant'),'enabled spiders wait above the passage until approach');
    for(const spider of initial.spiders){
      const states=approach.timeline.map(s=>s.spiders.find(o=>o.id===spider.id)),descending=states.filter(o=>o.phase==='descending');
      assert.ok(descending.length>2,`${spider.name}: sustained ceiling descent`);
      assert.ok(descending.every(o=>o.visible&&o.webVisible&&o.web[1]>o.web[4]),`${spider.name}: actor and hanging web render during descent`);
      assert.ok(descending[0].position[1]>descending.at(-1).position[1],`${spider.name}: descending toward original floor`);
      assert.ok(states.some(o=>o.phase==='awake'&&!o.webVisible),`${spider.name}: lands and releases the web`);
    }
    assert.equal(puzzle.error,null);assert.equal(approach.error,null);assert.deepEqual(errors,[]);
    console.log('PASS original painting foot tiles solve the puzzle without E, the mausoleum entrance explodes, and all three original spiders descend on rendered webs when RedCat approaches, then land and release their threads; no script/browser/HTTP errors.');
  }
}finally{await browser?.close();server.kill();}
