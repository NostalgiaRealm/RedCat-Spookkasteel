import assert from 'node:assert/strict';
import {createServer} from 'node:http';
import {readFile,mkdir,writeFile} from 'node:fs/promises';
import {fileURLToPath} from 'node:url';
import path from 'node:path';
import {createHash} from 'node:crypto';

const root=fileURLToPath(new URL('../',import.meta.url));
const comparisonOnly=process.argv.includes('--comparison');
const scratch=path.resolve(root,'../temp_work/coin-bag-comparison-2026-10-13');
const evidence=path.join(scratch,'verification');
await mkdir(evidence,{recursive:true});
// Every browser cache/profile/temp file belongs to this focused comparison.
// A process-relative alias keeps Linux Unix socket names below their limit.
process.chdir(scratch);
const runtime={};
for(const name of ['browser-tmp','cache','config','data','logs']){
  runtime[name]=path.join(scratch,name);await mkdir(runtime[name],{recursive:true});
}
const browserTemp=process.platform==='linux'?'/proc/self/cwd/browser-tmp':runtime['browser-tmp'];
Object.assign(process.env,{TMPDIR:browserTemp,TMP:browserTemp,TEMP:browserTemp,
  XDG_CACHE_HOME:runtime.cache,XDG_CONFIG_HOME:runtime.config,XDG_DATA_HOME:runtime.data});
const {chromium}=await import('playwright');
const expected=[
  {id:'wood',actor:'icoins',money:1,score:5,sound:'icoins.wav'},
  {id:'bag-small',actor:'imoneys',money:1,score:5,sound:'icoins.wav'},
  {id:'silver',actor:'icoinm',money:5,score:25,sound:'icoinm.wav'},
  {id:'bag-medium',actor:'imoneym',money:5,score:25,sound:'icoinm.wav'},
  {id:'gold',actor:'icoinl',money:10,score:50,sound:'icoinl.wav'},
  {id:'bag-large',actor:'imoneyl',money:10,score:50,sound:'icoinl.wav'},
];
// Verify the copied models/textures and actor settings independently of the UI.
const manifest=JSON.parse(await readFile(path.join(root,'assets/actors/manifest.json')));
const snapshot=JSON.parse(await readFile(path.join(root,'source-snapshot.json')));
const sourceManifest=JSON.parse(await readFile(path.join(root,'../assets/actors/manifest.json')));
for(const {actor} of expected){
  assert.deepEqual(manifest.actors[actor],sourceManifest.actors[actor]);
  const modelPath='assets/actors/'+manifest.actors[actor].file;
  const model=JSON.parse(await readFile(path.join(root,modelPath)));
  for(const relative of [modelPath,...model.materials.filter(m=>m.texture).map(m=>'assets/actors/'+m.texture)]){
    const bytes=await readFile(path.join(root,relative));
    assert.equal(createHash('sha256').update(bytes).digest('hex'),snapshot.sha256[relative],relative);
    assert.deepEqual(bytes,await readFile(path.join(root,'..',relative)),relative);
  }
}
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
  await page.waitForFunction(()=>window.__coinTest,{},{timeout:30000});
  assert.deepEqual(await page.evaluate(()=>window.__coinTest.snapshot().pickups.map(c=>c.actor)),expected.map(c=>c.actor));
  assert.equal(await page.evaluate(()=>window.__coinTest.world.pickupLabels.size),6);
  await page.locator('#resume').click();
  await page.waitForTimeout(300);
  if(!comparisonOnly){
    const before=await page.evaluate(()=>window.__coinTest.world.player.position.slice());
    await page.keyboard.down('KeyW');await page.waitForTimeout(300);await page.keyboard.up('KeyW');
    assert.ok(await page.evaluate(start=>window.__coinTest.world.player.position[2]<start[2]-10,before),'real input moves RedCat');
    await page.keyboard.down('Space');await page.waitForTimeout(150);await page.keyboard.up('Space');
    assert.ok(await page.evaluate(()=>window.__coinTest.world.player.position[1]>5),'original jump controller');
    await page.waitForTimeout(700);
    assert.ok(await page.evaluate(()=>window.__coinTest.world.player.grounded));
  }
  await page.screenshot({path:path.join(evidence,'coin-and-bag-room.png')});
  // Approach each actual actor through the same controller/update path.
  // Setting a nearby starting position avoids a long manual lap of the room.
  let cumulative=0,moneyTotal=0;const pickups=[];
  for(const {id,actor,money,score,sound} of expected){
    await page.evaluate(id=>{
      const {world,gameplay}=window.__coinTest,obj=gameplay.objects.find(o=>o.id===id);
      world.player.position=[obj.position[0],.05,obj.position[2]+75];world.player.resetVelocity();world.yaw=0;world.pitch=.16;world.updateCamera(1,true);
    },id);
    await page.keyboard.down('KeyW');
    await page.waitForFunction(id=>window.__coinTest.gameplay.objects.find(o=>o.id===id).collected,id);
    await page.keyboard.up('KeyW');cumulative+=score;moneyTotal+=money;
    const state=await page.evaluate(()=>{
      const t=window.__coinTest;return {score:t.gameplay.state.score,money:t.gameplay.state.coins,event:t.events.at(-1),sounds:[...t.audio.sounds].filter(s=>s.group==='pickup').map(s=>s.name),
        effect:t.gameplay.rewardEffects.at(-1),batchCount:[...t.world.effects.beamBatches.values()].reduce((n,b)=>n+b.count,0)};
    });
    assert.equal(state.score,cumulative);assert.equal(state.money,moneyTotal);
    assert.equal(state.event.id,id);assert.equal(state.event.score,score);assert.equal(state.event.sound,sound);
    assert.ok(state.sounds.includes(sound));assert.equal(state.effect.score,score);assert.ok(state.batchCount>=6,'five spokes and score quad');
    pickups.push({id,actor,money,score,sound,cumulativeScore:state.score,cumulativeMoney:state.money});
    if(id==='bag-large')await page.screenshot({path:path.join(evidence,'large-bag-pickup.png')});
    await page.waitForTimeout(150);
  }
  assert.equal(await page.evaluate(()=>window.__coinTest.gameplay.state.score),160);
  assert.ok((await page.locator('#status').textContent()).includes('160 punten'));
  await page.keyboard.press('KeyV');
  assert.equal(await page.evaluate(()=>window.__coinTest.world.settings.camera),'first');
  await page.keyboard.press('KeyR');await page.waitForFunction(()=>window.__coinTest.gameplay.state.score===0&&window.__coinTest.world.pickupLabels?.size===6);
  assert.ok(await page.evaluate(()=>window.__coinTest.snapshot().pickups.every(c=>!c.collected)));
  assert.equal(await page.evaluate(()=>window.__coinTest.world.settings.camera),'first','camera mode survives reset');
  await page.keyboard.press('KeyV');
  assert.equal(await page.evaluate(()=>window.__coinTest.world.settings.camera),'third');
  assert.equal(await page.evaluate(()=>window.__coinTest.world.pickupLabels.size),6);
  assert.equal(await page.evaluate(()=>window.__coinTest.gameplay.state.coins),0);
  assert.ok((await page.locator('#status').textContent()).includes('0/6'));
  await page.keyboard.press('Escape');assert.equal(await page.evaluate(()=>window.__coinTest.snapshot().paused),true);
  assert.equal(await page.evaluate(()=>window.__coinTest.audio.paused),true);
  // Media decoding verifies the copied sound files are playable, not just named correctly.
  const audioDurations=await page.evaluate(async()=>{
    const ctx=new AudioContext(),out={};
    for(const file of ['icoins.wav','icoinm.wav','icoinl.wav']){
      const buffer=await ctx.decodeAudioData(await (await fetch('assets/audio/'+file)).arrayBuffer());out[file]=buffer.duration;
    }
    await ctx.close();return out;
  });
  assert.ok(Object.values(audioDurations).every(n=>n>0));
  assert.deepEqual(errors,[]);assert.deepEqual(missing,[]);assert.deepEqual(consoleErrors,[]);
  const report={passed:true,mode:comparisonOnly?'comparison':'scene',checks:['six original actor models and textures','paired room labels',...(!comparisonOnly?['keyboard walking','jump and landing']:[]),'six contact pickups and exact money/score','matching pickup audio','five-spoke and score effects','V camera toggle and retained mode after R reset','reset restores six pickups and labels','pause','no missing resources or renderer errors'],pickups,totalScore:cumulative,totalMoney:moneyTotal,audioDurations};
  await writeFile(path.join(evidence,'results.json'),JSON.stringify(report,null,2)+'\n');console.log(report);
}catch(error){
  console.error({errors,missing,consoleErrors});
  if(browser){const page=browser.pages().at(-1);await page.screenshot({path:path.join(evidence,'failure.png')}).catch(()=>{});console.error(await page.locator('#overlay-message').textContent().catch(()=>''));}
  throw error;
}finally{await browser?.close();await new Promise(resolve=>server.close(resolve));}
