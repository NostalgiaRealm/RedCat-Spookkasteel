import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

// The two original wall buttons in the castle library, using normal movement
// and the original BSP collision/motion/scripts. No synthetic touch events.
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4215'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  await mkdir('artifacts',{recursive:true});
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',error=>errors.push(error.stack));
  page.on('response',response=>{if(response.status()>=400)errors.push(`${response.status()} ${response.url()}`);});
  await page.goto('http://127.0.0.1:4215/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const results=[];
  for(const name of ['knopdisc01','knopdisc02']) {
    await page.evaluate(async()=>{const app=window.__redcat;await app.startLevel(1);app.pause();document.getElementById('pause').hidden=true;});
    const result=await page.evaluate(name=>{
      const app=window.__redcat,w=app.world,g=app.gameplay,h=g.scripts;
      for(let i=0;i<40&&!h.cutscene;i++)h.update(.05);
      if(h.cutscene)h.skipCutscene();
      for(const player of h.players.values())player.stop();
      h.cutscene=false;h.camera=null;h.enemiesFrozen=true;
      for(const object of g.objects)if(object.kind==='trigger')object.enabled=false;
      const button=g.find(name)[0],door=g.find('disc')[0],motion=h.players.get(door.id);
      const input={forward:0,right:0,use:false,attack:false};
      w.syncModels();w.syncActors(0);
      // The bookcase is a scripted DoorModel with no authored player trigger.
      // E from less than the old fallback's 105-unit radius must not bypass
      // the two physical wall buttons.
      w.player.position=[-984,-23.9,-1170];w.player.lastSafe=[...w.player.position];w.player.velocityY=0;w.player.grounded=true;
      w.yaw=0;w.pitch=.12;
      const useDistance=Math.hypot(...door.position.map((v,i)=>v-w.player.position[i]));
      const useSolid=w.collider.trace(w.player.position,w.player.position,w.player.mins,w.player.maxs,w.physicalModels).startSolid;
      w.update(1/60,{...input,use:true});w.update(1/60,input);
      const directUse={position:[...w.player.position],distance:useDistance,solid:useSolid,open:door.open,time:motion.time};
      const horizontal=name==='knopdisc01'?[-839,-1195]:[-1050,-1443];
      const ground=w.collider.trace([horizontal[0],40,horizontal[1]],[horizontal[0],-150,horizontal[1]],w.player.mins,w.player.maxs,w.physicalModels);
      w.player.position=ground.end.map((v,i)=>v+(i===1?.05:0));
      w.player.lastSafe=[...w.player.position];w.player.velocityY=0;w.player.grounded=true;
      w.yaw=name==='knopdisc01'?0:Math.PI/2;w.pitch=.12;
      const events=[],oldEvent=g.onEvent;g.onEvent=event=>{if(['door','button'].includes(event.type))events.push({at:g.time,...event});oldEvent(event);};
      const state=()=>({at:g.time,position:[...w.player.position],contacts:[...(w.player.contacts||[])],buttonInside:!!button.inside,switchCount:button.switchCount,on:button.switchedOn,doorOpen:door.open,closeAt:door.closeAt,motionTime:motion.time,moving:motion.playing,rotation:h.modelTransforms.get(door.modelIndex)?.rotation,solid:w.collider.trace(w.player.position,w.player.position,w.player.mins,w.player.maxs,w.physicalModels).startSolid});
      const before=state(),approach=[];
      for(let i=0;i<60;i++){w.update(1/60,{...input,forward:1});approach.push(state());if(button.switchCount)break;}
      const touched=state(),timeline=[];
      // Step away from the button's moving press/release brush, as a player
      // would before passing through the revolving bookcase.
      for(let i=0;i<10;i++)w.update(1/30,{...input,forward:-1});
      for(let i=0;i<14*30;i++){w.update(1/30,input);if(i%3===0)timeline.push(state());}
      const closed=state(),repeatCount=button.switchCount;
      for(let i=0;i<60;i++){w.update(1/60,{...input,forward:1});if(button.switchCount>repeatCount)break;}
      const repeated=state(),repeatTimeline=[];
      for(let i=0;i<10;i++)w.update(1/30,{...input,forward:-1});
      for(let i=0;i<6*30;i++){w.update(1/30,input);if(i%3===0)repeatTimeline.push(state());}
      w.syncPlayer(0,input);w.updateCamera(1,true);w.render();
      return {name,button:button.id,model:button.modelIndex,touch:button.entity.TouchToSwitch,shoot:button.entity.ShootToSwitch,doorTouch:door.entity.TouchToOpen,directUse,ground:{startSolid:ground.startSolid,fraction:ground.fraction,end:ground.end},before,touched,approach,timeline,closed,repeated,repeatTimeline,events,error:h.vm.lastError};
    },name);
    results.push(result);
    await page.screenshot({path:`artifacts/bookcase-touch-${name}.png`});
  }
  await writeFile('artifacts/bookcase-touch-scenes.json',JSON.stringify({results,errors},null,2)+'\n');
  if(process.env.BOOKCASE_DIAGNOSE==='1') {
    for(const r of results)console.log(JSON.stringify({name:r.name,directUse:r.directUse,ground:r.ground,before:r.before,touched:r.touched,events:r.events,maxTime:Math.max(...r.timeline.map(s=>s.motionTime)),closed:r.closed,repeated:r.repeated,last:r.repeatTimeline.at(-1),error:r.error}));
  } else {
    for(const r of results){
      assert.equal(r.touch,'1');assert.equal(r.shoot,'0');assert.equal(r.doorTouch,'0');
      assert.ok(r.directUse.distance<105);assert.equal(r.directUse.solid,false);
      assert.equal(r.directUse.open,false,`${r.name}: E on the bookcase cannot bypass the wall buttons`);assert.equal(r.directUse.time,0);
      assert.equal(r.ground.startSolid,false);assert.equal(r.before.solid,false);
      assert.ok(r.touched.contacts.includes(r.model),`${r.name}: real swept player hull touches original button`);
      assert.ok(r.touched.switchCount>0,`${r.name}: walking into the button switches it without E`);
      assert.ok(r.timeline.some(s=>s.motionTime>=4.99),`${r.name}: authored bookcase motion completes its full flip`);
      const openEndpoint=r.timeline.find(s=>s.motionTime===5&&!s.moving);
      assert.ok(openEndpoint,`${r.name}: original open endpoint is reached`);
      const angle=2*Math.acos(Math.min(1,Math.abs(openEndpoint.rotation[3])))*180/Math.PI;
      assert.ok(angle>178&&angle<179,`${r.name}: original approximately 180-degree bookcase endpoint (${angle})`);
      assert.ok(r.timeline.filter(s=>s.motionTime===5&&!s.moving).length>=19,`${r.name}: two-second wait starts after reaching the open endpoint`);
      assert.equal(r.closed.motionTime,0);assert.equal(r.closed.doorOpen,false);assert.equal(r.closed.moving,false);
      assert.ok(r.repeated.buttonInside,`${r.name}: walking back reaches the original button hull again`);assert.ok(r.repeated.switchCount>r.closed.switchCount);
      assert.ok(r.repeatTimeline.some(s=>s.motionTime===5),`${r.name}: another physical touch works after automatic return`);
      assert.ok([...r.approach,...r.timeline,...r.repeatTimeline].every(s=>!s.solid),`${r.name}: RedCat never becomes embedded in moving button/bookcase brushes`);
      assert.equal(r.error,null);
    }
    assert.deepEqual(errors,[]);
    console.log('PASS both library wall buttons respond to real player contact without E, complete the original 178-degree flip, wait two seconds, return, and work again; E on bookcases cannot bypass buttons; no embedded player, browser or HTTP errors.');
  }
}finally{await browser?.close();server.kill();}
