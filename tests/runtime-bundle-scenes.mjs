// Focused bundling regression: real same-origin browser cache + storage upgrade.
// Derive an unbundled entry from the current data-source/import map. Historical
// loaders used the old src/ layout and remain retained evidence only.
// Profiles are isolated; retained saves are read-only. No campaign-completion claim.
import assert from 'node:assert/strict';
import {createHash} from 'node:crypto';
import {createReadStream} from 'node:fs';
import {mkdir, readFile, stat, writeFile} from 'node:fs/promises';
import http from 'node:http';
import path from 'node:path';
import {fileURLToPath} from 'node:url';
import {chromium, devices} from 'playwright';
import {Gameplay} from '../source/gameplay.js';
import {validAdventureSave} from '../source/campaign-progress.js';

import {sceneOutput,sceneTemp} from './support/scene-output.mjs';
const root=path.resolve(path.dirname(fileURLToPath(import.meta.url)),'..');
const work=path.join(root,sceneOutput('temp_work/js-bundling-2026-10-26'));
const out=path.join(work,`browser-${Date.now()}`),prefix='/redcatspookkasteel/';
await mkdir(path.join(out,'tmp'),{recursive:true});
process.chdir(root);process.env.TMPDIR=sceneTemp();
const hash=value=>createHash('sha256').update(value).digest('hex');
function unbundledEntry(html) {
  const tag=html.match(/<script\b[^>]*\bdata-source=["'][^"']+["'][^>]*>/i)?.[0];
  assert.ok(tag,'Current HTML needs a module entry with data-source.');
  assert.match(tag,/\btype=["']module["']/i);
  const source=tag.match(/\bdata-source=["']([^"']+)["']/i)?.[1];
  const current=tag.match(/\ssrc=["']([^"']+)["']/i)?.[1];
  assert.ok(source&&current,'Module entry needs both src and data-source.');
  const mapText=html.match(/<script\b[^>]*\bid=["']game-importmap["'][^>]*>([\s\S]*?)<\/script>/i)?.[1];
  assert.ok(mapText,'Current HTML needs the retained source import map.');
  const mapping=JSON.parse(mapText).imports?.[source];
  const revision=new URL(current,'http://fixture.invalid/').searchParams.get('v');
  assert.ok(revision,'Bundled module must use a cache revision.');
  const entry=mapping||`${source}${source.includes('?')?'&':'?'}v=${encodeURIComponent(revision)}`;
  assert.equal(new URL(entry,'http://fixture.invalid/').searchParams.get('v'),revision,'Unbundled entry and import map must retain the current revision.');
  return html.replace(tag,tag.replace(/(\ssrc=)(["'])[^"']+\2/i,(_match,prefix,quote)=>`${prefix}${quote}${entry}${quote}`));
}
const after=await readFile(path.join(root,'index.html'));
const before=Buffer.from(unbundledEntry(after.toString()));
const baseline={source:'Derived unbundled entry using current source/ layout and revisioned import map',path:null};
baseline.sha256=hash(before);
assert.match(after.toString(),/src=["']\.\/src\/game\.bundle\.js\?v=/);
assert.doesNotMatch(before.toString(),/src=["']\.\/src\/game\.bundle\.js\?v=/);
let fixturePath=process.env.REDCAT_TEST_SAVE||path.join(root,'temp_work/web-cache-2026-10-20/run-1792491346214/seed-save.json');
let fixtureBytes,save;
try{fixtureBytes=await readFile(fixturePath);save=JSON.parse(fixtureBytes);}catch(error){if(process.env.REDCAT_TEST_SAVE)throw error;}
if(!validAdventureSave(save)){
  fixturePath=null;const level=JSON.parse(await readFile(path.join(root,'data/levels/lvl00a/level.json')));
  save={version:1,level:level.id,position:[...level.spawn.position],lastSafe:[...level.spawn.position],yaw:0,pitch:0,noClip:false,game:new Gameplay(level,{deferInit:true}).snapshot(),savedAt:'2026-01-01T00:00:00.000Z'};
  fixtureBytes=Buffer.from(JSON.stringify(save));
}
assert.ok(validAdventureSave(save));
const report={out,baseline,scope:'Isolated same-origin unbundled-to-bundled browser upgrade; frozen simulation for exact save checks; real render/input smoke; no full campaign playthrough.',fixture:{path:fixturePath,sha256:hash(fixtureBytes),level:save.level},checks:[],errors:[]};
const requests=[];let loader='unbundled',phase='setup',server,browser,context,page;
const mime={'.html':'text/html; charset=utf-8','.js':'text/javascript','.mjs':'text/javascript','.json':'application/json','.css':'text/css','.png':'image/png','.jpg':'image/jpeg','.webm':'video/webm','.wav':'audio/wav','.svg':'image/svg+xml','.ico':'image/x-icon'};
const check=(label)=>{report.checks.push(label);console.log(`PASS ${label}`);};
function watch(target){target.on('pageerror',error=>report.errors.push({phase,error:String(error)}));target.on('response',response=>{if(response.status()>=400)report.errors.push({phase,status:response.status(),url:response.url()});});}
async function init(target,{seed=false,mobile=false}={}){
  await target.addInitScript(({save,seed,mobile})=>{
    if(seed&&!localStorage.getItem('bundle-fixture-seeded')){
      localStorage.setItem('redcat.save.v1',save);
      localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,autoIntro:false,touchControls:'auto',masterVolume:0,musicVolume:0,voiceVolume:0}));
      // Unlocks are fixture setup only; each level still executes its real load.
      localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4,earnedSkills:0,playedLevels:['lvl00a','lvl01a','lvl02a','lvl03a','lvl04a']}));
      localStorage.setItem('bundle-fixture-seeded','true');
    }
    if(mobile&&!localStorage.getItem('bundle-mobile-seeded')){
      localStorage.setItem('redcat.settings.v1',JSON.stringify({fullscreen:false,autoIntro:false,touchControls:'auto',masterVolume:0,musicVolume:0,voiceVolume:0}));
      localStorage.setItem('bundle-mobile-seeded','true');
    }
    // Hold ordinary gameplay ticks until exact restoration comparisons finish.
    // Loading still performs the real streaming/texture/program settle work.
    const raf=window.requestAnimationFrame.bind(window),pending=new Map();let serial=0;
    window.__runFrames=false;
    window.requestAnimationFrame=callback=>{const id=++serial;if(window.__runFrames)raf(callback);else pending.set(id,callback);return id;};
    window.cancelAnimationFrame=id=>pending.delete(id);
    window.__releaseFrames=()=>{window.__runFrames=true;for(const callback of pending.values())raf(callback);pending.clear();};
    Element.prototype.requestPointerLock=()=>Promise.resolve();
  },{save:fixtureBytes.toString(),seed,mobile});
}
async function ready(target){await target.waitForFunction(()=>window.__redcat,null,{polling:100,timeout:60000});await target.evaluate(()=>__redcat.recovery.ready);}
async function metrics(target){return target.evaluate(()=>{const resources=performance.getEntriesByType('resource').filter(entry=>/\.m?js$/.test(new URL(entry.name).pathname));return {startupMs:performance.now(),jsRequests:resources.length,jsDecodedBytes:resources.reduce((sum,e)=>sum+e.decodedBodySize,0),jsTransferredBytes:resources.reduce((sum,e)=>sum+e.transferSize,0),js:resources.map(e=>({url:e.name,transferSize:e.transferSize,decodedBodySize:e.decodedBodySize,duration:e.duration})),loader:document.querySelector('script[type="module"][src]').src};});}
async function normalContinue(target){
  await target.evaluate(()=>document.getElementById('native-next').click());
  await target.waitForFunction(()=>__redcat.originalMenu.page==='startinfo',null,{polling:100});
  await target.evaluate(()=>document.getElementById('native-start').click());
  await target.waitForFunction(()=>['playing','error'].includes(__redcat.mode),null,{polling:100,timeout:120000});
  const value=await target.evaluate(()=>({mode:__redcat.mode,level:__redcat.world?.id,position:__redcat.world?.player.position,score:__redcat.gameplay?.state.score,potions:__redcat.gameplay?.state.potions,health:__redcat.gameplay?.state.health,scriptError:__redcat.gameplay?.scripts.vm.lastError,fatal:document.getElementById('fatal-message').textContent}));
  assert.equal(value.mode,'playing',JSON.stringify(value));assert.equal(value.scriptError,null);return value;
}
async function menu(target){await target.evaluate(()=>{__redcat.pause();document.getElementById('return-menu').click();});await target.waitForFunction(()=>__redcat.mode==='menu',null,{polling:100});await target.evaluate(()=>__redcat.recovery.flush());}
async function state(target){return target.evaluate(()=>({active:__redcat.profiles.activeId,players:__redcat.profiles.list(),save:localStorage.getItem(__redcat.profiles.key('redcat.save.v1')),legacy:localStorage.getItem('redcat.save.v1'),history:__redcat.recovery.state,db:__redcat.recovery.storage.name,choices:__redcat.recovery.choices().map(c=>({minutes:c.minutes,score:c.save?.game.state.score,age:c.ageSeconds})),revision:localStorage.getItem(__redcat.profiles.key('redcat.adventure-revision.v1'))}));}
try{
  server=http.createServer(async(req,res)=>{
    const url=new URL(req.url,'http://localhost'),record={phase,path:url.pathname+url.search};requests.push(record);
    const send=(status,headers={},body='')=>{record.status=status;res.writeHead(status,headers);res.end(req.method==='HEAD'?undefined:body);};
    try{
      if(!['GET','HEAD'].includes(req.method)||!url.pathname.startsWith(prefix)){send(404);return;}
      const relative=decodeURIComponent(url.pathname.slice(prefix.length))||'index.html';
      if(!/^(index\.html|src\/|source\/|assets\/|data\/|node_modules\/three\/)/.test(relative)||relative.split('/').some(p=>p.startsWith('.'))){send(404);return;}
      if(relative==='index.html'){const bytes=loader==='bundled'?after:before;send(200,{'Content-Type':mime['.html'],'Cache-Control':'no-store','Content-Length':bytes.length},bytes);return;}
      const filename=path.resolve(root,relative);if(!filename.startsWith(root+path.sep)){send(404);return;}
      const info=await stat(filename);if(!info.isFile()){send(404);return;}
      const headers={'Content-Type':mime[path.extname(filename)]||'application/octet-stream','Cache-Control':/\.(?:m?js|css)$/.test(filename)?'public, max-age=31536000, immutable':'no-cache','Accept-Ranges':'bytes'};
      let start=0,end=info.size-1,status=200;
      if(req.headers.range){const match=/^bytes=(\d*)-(\d*)$/.exec(req.headers.range);if(!match){send(416);return;}start=Number(match[1]||0);if(match[2])end=Math.min(end,Number(match[2]));if(start>end){send(416);return;}status=206;headers['Content-Range']=`bytes ${start}-${end}/${info.size}`;}
      record.status=status;res.writeHead(status,{...headers,'Content-Length':end-start+1});if(req.method==='HEAD'){res.end();return;}
      const stream=createReadStream(filename,{start,end});stream.on('error',()=>res.destroy());res.on('close',()=>stream.destroy());stream.pipe(res);
    }catch(error){if(res.headersSent)res.destroy();else send(404);if(error.code!=='ENOENT')record.error=String(error);}
  });
  await new Promise(resolve=>server.listen(0,'127.0.0.1',resolve));
  const base=`http://127.0.0.1:${server.address().port}${prefix}`;report.base=base;
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,env:{...process.env},args:[`--use-angle=${process.env.REDCAT_TEST_ANGLE||'swiftshader'}`,'--enable-unsafe-swiftshader','--autoplay-policy=no-user-gesture-required']});
  context=await browser.newContext({viewport:{width:1280,height:720}});await init(context,{seed:true});page=await context.newPage();watch(page);
  phase='unbundled-cold';await page.goto(base+'?skipIntro');await ready(page);report.unbundledCold=await metrics(page);
  assert.ok(report.unbundledCold.jsRequests>50);assert.equal((await state(page)).save,fixtureBytes.toString());
  report.baselineContinue=await normalContinue(page);assert.equal(report.baselineContinue.level,save.level);assert.deepEqual(report.baselineContinue.position,save.position);
  await page.evaluate(()=>__redcat.pause());
  report.baselineSeed=await page.evaluate(async()=>{
    const app=__redcat;await app.recovery.flush();const button=app.gameplay.objects.find(o=>o.kind==='button');
    for(let minute=1;minute<=12;minute++){
      app.recovery.advance(60);app.gameplay.state.score=minute*100;app.gameplay.state.potions=minute;
      button.switchCount=minute;button.switchedOn=minute%2===0;app.gameplay.variables.set('bundle-regression-minute',minute);
      app.saveGame(true);await app.recovery.flush();
    }
    const second=app.profiles.create('Tweede');const secondary=JSON.parse(localStorage.getItem('redcat.save.v1'));secondary.game.state.score=9876;
    localStorage.setItem(app.profiles.key('redcat.save.v1',second.id),JSON.stringify(secondary));
    localStorage.setItem(app.profiles.key('redcat.progress.v1',second.id),localStorage.getItem('redcat.progress.v1'));
    return {buttonId:button.id,second};
  });
  await menu(page);report.beforeUpgrade=await state(page);
  assert.deepEqual(report.beforeUpgrade.choices.map(c=>c.score),[1000,700,200]);
  check('Unbundled loader restores historical save and writes real profile-specific localStorage / IndexedDB recovery snapshots.');
  phase='unbundled-warm';await page.reload();await ready(page);report.unbundledWarm=await metrics(page);
  const afterWarm=await state(page);
  assert.deepEqual(afterWarm.choices,report.beforeUpgrade.choices);assert.deepEqual(afterWarm.players,report.beforeUpgrade.players);
  assert.deepEqual(afterWarm.history,report.beforeUpgrade.history);
  // The ordinary beforeunload handler saves the outgoing live world once more.
  // Establish the upgrade boundary after that normal save and a menu-only load.
  report.beforeUpgrade=afterWarm;

  loader='bundled';phase='bundled-cold-upgrade';await page.reload();await ready(page);report.bundledCold=await metrics(page);
  assert.equal(report.bundledCold.jsRequests,1);assert.deepEqual(await state(page),report.beforeUpgrade);
  report.upgradeContinue=await normalContinue(page);assert.equal(report.upgradeContinue.score,1200);assert.equal(report.upgradeContinue.potions,12);
  assert.equal((await state(page)).save,report.beforeUpgrade.save,'Continue does not rewrite previous save before ordinary autosave');
  assert.deepEqual(await page.evaluate(id=>{const b=__redcat.gameplay.objects.find(o=>o.id===id);return {count:b.switchCount,on:b.switchedOn,variable:__redcat.gameplay.variables.get('bundle-regression-minute')};},report.baselineSeed.buttonId),{count:12,on:true,variable:12});
  await page.evaluate(()=>{__redcat.pause();document.getElementById('pause').hidden=true;__redcat.world.render();});
  await page.screenshot({path:path.join(out,'bundled-restored.png')});
  await menu(page);phase='bundled-warm';await page.reload();await ready(page);report.bundledWarm=await metrics(page);
  assert.equal(report.bundledWarm.jsRequests,1);assert.equal((await state(page)).active,'legacy');
  check('Same-origin bundle upgrade preserves exact save bytes, player metadata, puzzle variables and 2/5/10-minute recovery history without import.');

  phase='recovery';await page.evaluate(()=>document.getElementById('open-recovery').click());
  await page.waitForFunction(()=>document.querySelector('[data-recovery-minutes="5"]')?.disabled===false,null,{polling:100});
  await page.evaluate(()=>document.querySelector('[data-recovery-minutes="5"]').click());
  await page.waitForFunction(()=>['playing','error'].includes(__redcat.mode),null,{polling:100,timeout:120000});
  assert.equal(await page.evaluate(()=>__redcat.gameplay.state.score),700);assert.equal(await page.evaluate(()=>__redcat.gameplay.variables.get('bundle-regression-minute')),7);
  await menu(page);
  phase='profile';await page.evaluate(async id=>{await __redcat.playerMenu.selectPlayer(id);},report.baselineSeed.second.id);
  await page.reload();await ready(page);assert.equal((await state(page)).active,report.baselineSeed.second.id);
  report.secondaryContinue=await normalContinue(page);assert.equal(report.secondaryContinue.score,9876);
  await menu(page);const secondary=await state(page);assert.equal(JSON.parse(secondary.legacy).game.state.score,700);assert.equal(JSON.parse(secondary.save).game.state.score,9876);assert.notEqual(secondary.db,report.beforeUpgrade.db);
  check('Recovery UI loads a pre-upgrade checkpoint; second player remains independent and active selection survives reload.');

  report.levels=[];phase='level-smoke';
  for(let index=0;index<5;index++){
    const result=await page.evaluate(async index=>{
      const a=__redcat,start=performance.now(),ok=await a.startLevel(index);a.pause();a.world?.render();
      return {index,ok,loadMs:performance.now()-start,mode:a.mode,id:a.world?.id,actors:a.world?.actorInstances.size,models:a.world?.modelMeshes.size,redcat:!!a.world?.redcat,scriptError:a.gameplay?.scripts.vm.lastError,drawCalls:a.world?.renderer.info.render.calls,fatal:document.getElementById('fatal-message').textContent};
    },index);
    assert.equal(result.ok,true,JSON.stringify(result));assert.equal(result.id,`lvl0${index}a`);assert.equal(result.scriptError,null);assert.ok(result.actors>0&&result.models>0&&result.redcat);report.levels.push(result);
  }
  check('All five actual levels load scripts, streamed geometry, original actors and render with the bundled runtime.');

  phase='desktop-input';await page.evaluate(async()=>{
    const a=__redcat;await a.startLevel(0);for(const player of a.gameplay.scripts.players.values())player.stop();
    a.gameplay.scripts.cutscene=false;a.gameplay.scripts.camera=null;a.gameplay.scripts.enemiesFrozen=false;a.gameplay.scripts.weaponsEnabled=true;a.gameplay.state.skill|=1;
    window.__bundleEvents=[];const original=a.gameplay.onEvent;a.gameplay.onEvent=event=>{if(['attack','jump'].includes(event.type))__bundleEvents.push(event.type);original(event);};
    __releaseFrames();
  });
  const position=await page.evaluate(()=>[...__redcat.world.player.position]);
  await page.keyboard.down('KeyW');await page.waitForTimeout(450);await page.keyboard.up('KeyW');
  await page.keyboard.down('ControlLeft');await page.waitForTimeout(600);await page.keyboard.up('ControlLeft');
  await page.keyboard.press('Space');await page.waitForTimeout(250);
  report.desktopInput=await page.evaluate(()=>({position:__redcat.world.player.position,events:__bundleEvents,mode:__redcat.mode,drawCalls:__redcat.world.renderer.info.render.calls}));
  assert.notDeepEqual(report.desktopInput.position,position);assert.ok(report.desktopInput.events.includes('attack'));assert.equal(report.desktopInput.mode,'playing');assert.ok(report.desktopInput.drawCalls>0);
  await page.evaluate(()=>__redcat.pause());check('Bundled desktop gameplay processes real keyboard movement/shooting and active WebGL frames.');

  phase='mobile-input';const mobile=await browser.newContext({...devices['Pixel 7'],viewport:{width:844,height:390}});await init(mobile,{mobile:true});const phone=await mobile.newPage();watch(phone);
  await phone.goto(base+'?skipIntro');await ready(phone);assert.equal(await phone.evaluate(()=>__redcat.touchEnabled),true);
  await phone.evaluate(async()=>{const a=__redcat;await a.startLevel(0);for(const p of a.gameplay.scripts.players.values())p.stop();a.gameplay.scripts.cutscene=false;a.gameplay.scripts.camera=null;a.gameplay.scripts.enemiesFrozen=false;a.gameplay.scripts.weaponsEnabled=true;a.gameplay.state.skill|=1;__releaseFrames();});
  await phone.waitForFunction(()=>!document.getElementById('touch-controls').hidden,null,{polling:100});
  const client=await mobile.newCDPSession(phone),move=await phone.locator('#touch-move').boundingBox(),look=await phone.locator('#touch-look').boundingBox();
  const p1={id:1,x:move.x+move.width/2,y:move.y+move.height/2},p2={id:2,x:look.x+look.width/2,y:look.y+look.height/2};
  const original=await phone.evaluate(()=>({position:[...__redcat.world.player.position],yaw:__redcat.world.yaw}));
  await client.send('Input.dispatchTouchEvent',{type:'touchStart',touchPoints:[p1,p2]});
  await client.send('Input.dispatchTouchEvent',{type:'touchMove',touchPoints:[{...p1,y:p1.y-50},{...p2,x:p2.x+65}]});
  await phone.waitForTimeout(400);
  report.touch=await phone.evaluate(()=>({input:__redcat.readInput(),position:[...__redcat.world.player.position],yaw:__redcat.world.yaw,mode:__redcat.mode}));
  await client.send('Input.dispatchTouchEvent',{type:'touchEnd',touchPoints:[]});
  assert.notEqual(report.touch.input.forward,0);assert.notDeepEqual(report.touch.position,original.position);assert.notEqual(report.touch.yaw,original.yaw);
  for(const action of ['attack','jump']){
    const r=await phone.locator(`#touch-${action}`).boundingBox();await client.send('Input.dispatchTouchEvent',{type:'touchStart',touchPoints:[{id:3,x:r.x+r.width/2,y:r.y+r.height/2}]});
    assert.equal(await phone.evaluate(action=>__redcat.readInput()[action],action),true);await phone.waitForTimeout(100);await client.send('Input.dispatchTouchEvent',{type:'touchEnd',touchPoints:[]});
  }
  await phone.screenshot({path:path.join(out,'bundled-touch.png')});await mobile.close();
  check('Mobile auto-detection, simultaneous touch movement/look and shooting/jump overlay input work through the bundled loader.');
  assert.deepEqual(report.errors,[]);
  assert.ok(requests.every(r=>r.path.startsWith(prefix)),'all runtime network requests remain under deployment subpath');
  report.benchmark={coldRequestReduction:report.unbundledCold.jsRequests-report.bundledCold.jsRequests,decodedReductionPercent:100*(1-report.bundledCold.jsDecodedBytes/report.unbundledCold.jsDecodedBytes),note:'One cold and one warm local-loopback measurement per loader. Timings are observations, not a statistically controlled network benchmark or gameplay FPS claim.'};
  report.passed=true;
}catch(error){report.failure=error.stack;throw error;}
finally{
  await browser?.close();if(server){server.closeAllConnections();await new Promise(resolve=>server.close(resolve));}
  if(fixturePath){report.fixture.unchanged=hash(await readFile(fixturePath))===report.fixture.sha256;}
  if(report.beforeUpgrade){
    const old=report.beforeUpgrade;report.beforeUpgrade={...old,save:{sha256:hash(old.save),bytes:Buffer.byteLength(old.save)},legacy:{sha256:hash(old.legacy),bytes:Buffer.byteLength(old.legacy)},history:{clock:old.history.clock,anchor:old.history.anchor,checkpoints:old.history.checkpoints.map(c=>({at:c.at,sha256:hash(JSON.stringify(c.save)),score:c.save.game.state.score}))}};
  }
  await writeFile(path.join(out,'report.json'),JSON.stringify(report,null,2)+'\n');
  await writeFile(path.join(out,'requests.json'),JSON.stringify(requests,null,2)+'\n');
}
console.log(`PASS focused bundle/save/input validation. Evidence: ${out}`);
