import assert from 'node:assert/strict';
import {mkdir,writeFile} from 'node:fs/promises';
import {spawn,execFileSync} from 'node:child_process';
import path from 'node:path';
import {fileURLToPath} from 'node:url';
import {_electron as electron,chromium,devices} from 'playwright';

const root=fileURLToPath(new URL('../../',import.meta.url));
const output=path.join(root,`temp_work/release-housekeeping-2026-10-15/platform-${Date.now()}`);
await mkdir(output,{recursive:true});await mkdir(path.join(root,'temp_work/t'),{recursive:true});
const env={...process.env,TMPDIR:'temp_work/t'};
const report={checks:[],errors:[],method:'Current source only, isolated profiles, synthetic CDP touch and real Linux XWayland window. No release packages or hardware controllers/mobile devices tested.'};
const check=name=>{report.checks.push(name);console.log('PASS',name);};
let app,context,server;
const waitPlaying=page=>page.waitForFunction(()=>window.__redcat.mode==='playing',null,{timeout:90000});
const appReady=page=>page.waitForFunction(()=>window.__redcat,null,{timeout:60000});
try{
  if(process.env.SOURCE_PLATFORM!=='touch'){
  app=await electron.launch({executablePath:path.join(root,'node_modules/electron/dist/electron'),args:['.','--ozone-platform=x11',`--user-data-dir=${path.join(output,'electron-profile')}`],cwd:root,env,timeout:60000});
  const page=await app.firstWindow();page.on('pageerror',error=>report.errors.push(String(error.stack||error)));
  await appReady(page);
  report.native=await app.evaluate(({app,BrowserWindow,screen})=>({profile:app.getPath('userData'),features:app.getGPUFeatureStatus(),display:screen.getPrimaryDisplay(),windowId:BrowserWindow.getAllWindows()[0].getNativeWindowHandle().readUInt32LE()}));
  assert.equal(report.native.profile,path.join(output,'electron-profile'));
  if(await page.locator('#intro').isVisible()){
    await page.waitForFunction(()=>document.getElementById('intro-video').currentTime>.3,null,{timeout:15000});
    const before=await page.locator('#intro-video').evaluate(video=>({time:video.currentTime,duration:video.duration,paused:video.paused}));
    await page.waitForTimeout(500);assert.ok(await page.locator('#intro-video').evaluate(video=>video.currentTime)>before.time);
    report.video=before;await page.locator('#skip-intro').click();check('native intro video decodes and plays');
  }
  await page.locator('#open-about').click();assert.match(await page.locator('#about').textContent(),/0\.9\.9/);await page.locator('#close-about').click();
  await page.locator('#start').click();await waitPlaying(page);
  await page.waitForFunction(()=>window.__redcat.gameplay.scripts.cutscene,null,{timeout:15000});await page.keyboard.down('KeyE');await page.waitForFunction(()=>!window.__redcat.gameplay.scripts.cutscene,null,{timeout:15000});await page.keyboard.up('KeyE');
  await page.keyboard.down('KeyW');await page.waitForTimeout(800);await page.keyboard.up('KeyW');
  await page.keyboard.press('Escape');await page.waitForFunction(()=>window.__redcat.mode==='paused');
  await page.locator('#pause-settings').click();await page.locator('#resolution').selectOption('1280x720');await page.locator('#fullscreen').uncheck();await page.locator('#apply-settings').click();
  await page.waitForFunction(()=>document.getElementById('settings').hidden);await page.waitForTimeout(500);
  assert.equal(await app.evaluate(({BrowserWindow})=>BrowserWindow.getAllWindows()[0].isFullScreen()),false);
  assert.deepEqual(await page.locator('#game').evaluate(canvas=>[canvas.width,canvas.height]),[1280,720]);
  await page.locator('#pause-settings').click();await page.locator('#fullscreen').check();await page.locator('#apply-settings').click();await page.waitForFunction(()=>document.getElementById('settings').hidden);await page.waitForTimeout(500);
  assert.equal(await app.evaluate(({BrowserWindow})=>BrowserWindow.getAllWindows()[0].isFullScreen()),true);
  assert.deepEqual(await page.locator('#game').evaluate(canvas=>[canvas.width,canvas.height]),[1280,720]);
  await page.locator('#resume').click();await page.waitForTimeout(300);
  const nativeFile=path.join(output,'native-window.png');
  execFileSync('import',['-silent','-window',String(report.native.windowId),nativeFile],{timeout:12000});
  report.nativePixels=await app.evaluate(({nativeImage},file)=>{const image=nativeImage.createFromPath(file),size=image.getSize(),data=image.toBitmap(),colors=new Set();for(let y=Math.floor(size.height*.2);y<size.height*.8;y+=8)for(let x=Math.floor(size.width*.2);x<size.width*.8;x+=8)colors.add(data.readUInt32LE((y*size.width+x)*4));return {...size,colors:colors.size};},nativeFile);
  assert.ok(report.nativePixels.colors>128);assert.equal(report.native.features.gpu_compositing,'enabled');
  check('native Linux XWayland presentation, isolated profile and window/fullscreen render dimensions');
  await page.keyboard.press('Escape');await page.waitForFunction(()=>window.__redcat.mode==='paused');await page.locator('#save').click();await page.locator('#return-menu').click();
  const first=await page.evaluate(()=>{const p=window.__redcat.profiles;return {id:p.activeId,save:localStorage.getItem(p.key('redcat.save.v1'))};});assert.ok(first.save);
  await page.locator('#open-players').click();await page.locator('#player-add').click();await page.locator('#player-name').waitFor({state:'visible'});await page.locator('#player-name').fill('SourceCheck');await page.locator('#player-name-save').click();await page.locator('#player-select').click();await page.waitForFunction(()=>!document.getElementById('player-list').open);
  assert.equal(await page.evaluate(()=>window.__redcat.profiles.active.name),'SourceCheck');assert.equal(await page.evaluate(()=>localStorage.getItem(window.__redcat.profiles.key('redcat.save.v1'))),null);
  await page.locator('#start').click();await waitPlaying(page);await page.waitForFunction(()=>window.__redcat.gameplay.scripts.cutscene,null,{timeout:15000});await page.keyboard.down('KeyE');await page.waitForFunction(()=>!window.__redcat.gameplay.scripts.cutscene,null,{timeout:15000});await page.keyboard.up('KeyE');
  await page.keyboard.press('Escape');await page.waitForFunction(()=>window.__redcat.mode==='paused');await page.locator('#save').click();await page.locator('#return-menu').click();
  const second=await page.evaluate(()=>{const p=window.__redcat.profiles;return {id:p.activeId,save:localStorage.getItem(p.key('redcat.save.v1'))};});assert.ok(second.save);assert.notEqual(first.id,second.id);
  await page.locator('#open-players').click();await page.locator(`[data-player-id="${first.id}"]`).click();await page.locator('#player-select').click();await page.waitForFunction(()=>!document.getElementById('player-list').open);
  const core=raw=>{const s=JSON.parse(raw);return{level:s.level,position:s.position,state:s.game.state};};
  assert.deepEqual(core(await page.evaluate(id=>localStorage.getItem(window.__redcat.profiles.key('redcat.save.v1',id)),first.id)),core(first.save));
  assert.deepEqual(core(await page.evaluate(id=>localStorage.getItem(window.__redcat.profiles.key('redcat.save.v1',id)),second.id)),core(second.save));
  await page.locator('#continue').click();await waitPlaying(page);assert.equal(await page.evaluate(()=>window.__redcat.profiles.activeId),first.id);
  report.profiles={first:first.id,second:second.id,separateSaves:true};check('two players create and load independent real source saves through menu controls');
  await page.screenshot({path:path.join(output,'desktop-source.png')});await app.close();app=null;
  }

  server=spawn(process.execPath,['tools/serve.mjs'],{cwd:root,env:{...env,PORT:'4353'},stdio:['ignore','pipe','inherit']});
  await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
  context=await chromium.launchPersistentContext(path.join(output,'touch-profile'),{executablePath:'/usr/bin/google-chrome',headless:true,env,args:['--use-angle=gl','--autoplay-policy=no-user-gesture-required'],...devices['Pixel 7'],viewport:{width:844,height:390},deviceScaleFactor:1});
  const mobile=context.pages()[0];mobile.on('pageerror',error=>report.errors.push(String(error.stack||error)));
  await mobile.goto('http://127.0.0.1:4353/?skipIntro');await appReady(mobile);assert.equal(await mobile.evaluate(()=>window.__redcat.touchEnabled),true);
  await mobile.locator('#start').tap();await waitPlaying(mobile);
  const cdp=await context.newCDPSession(mobile),point=async selector=>{const b=await mobile.locator(selector).boundingBox();assert.ok(b);return{x:Math.round(b.x+b.width/2),y:Math.round(b.y+b.height/2)};};
  const send=(type,points=[])=>cdp.send('Input.dispatchTouchEvent',{type,touchPoints:points.map((p,i)=>({id:i+1,radiusX:5,radiusY:5,force:1,...p}))});
  await mobile.waitForFunction(()=>window.__redcat.gameplay.scripts.cutscene,null,{timeout:15000});await send('touchStart',[await point('#touch-skip')]);await mobile.waitForFunction(()=>!window.__redcat.gameplay.scripts.cutscene,null,{timeout:15000});await send('touchEnd');await mobile.waitForFunction(()=>!window.__redcat.gameplay.scripts.camera,null,{timeout:15000});
  assert.equal((await mobile.locator('#touch-attack').textContent()).toUpperCase(),'SCHIETEN');assert.equal(await mobile.locator('#touch-use,#touch-options,#touch-tools').count(),0);
  const pad=await point('#touch-move');await send('touchStart',[pad]);await send('touchMove',[{x:pad.x+22,y:pad.y-30}]);
  const move=await mobile.evaluate(()=>window.__redcat.readInput());assert.ok(move.forward>.2&&move.right>.2);await send('touchEnd');
  const before=await mobile.evaluate(()=>window.__redcat.world.yaw);await send('touchStart',[{x:600,y:155}]);await send('touchMove',[{x:690,y:155}]);await mobile.waitForTimeout(100);await send('touchEnd');assert.ok(Math.abs(await mobile.evaluate(()=>window.__redcat.world.yaw)-before)>.1);
  await send('touchStart',[await point('#touch-jump'),await point('#touch-attack')]);const simultaneous=await mobile.evaluate(()=>window.__redcat.readInput());assert.equal(simultaneous.jump,true);assert.equal(simultaneous.attack,true);await send('touchEnd');
  const camera=await mobile.evaluate(()=>window.__redcat.settings.camera);await mobile.locator('#touch-camera').tap();assert.notEqual(await mobile.evaluate(()=>window.__redcat.settings.camera),camera);
  check('mobile detection, real CDP multi-touch movement/look/jump/fire, two-second skip and camera toggle');
  await mobile.locator('#game-menu').tap();await mobile.waitForFunction(()=>window.__redcat.mode==='paused');await mobile.locator('#pause-settings').tap();await mobile.locator('#touch-controls-setting').selectOption('off');await mobile.locator('#apply-settings').tap();await mobile.locator('#resume').tap();assert.equal(await mobile.evaluate(()=>window.__redcat.touchEnabled),false);
  await mobile.reload();await appReady(mobile);assert.equal(await mobile.evaluate(()=>window.__redcat.touchEnabled),false);check('mobile Off override survives reload');
  await mobile.screenshot({path:path.join(output,'mobile-source.png')});assert.deepEqual(report.errors,[]);
}catch(error){report.failure=String(error.stack||error);throw error;}
finally{await writeFile(path.join(output,'report.json'),JSON.stringify(report,null,2)+'\n');await app?.close();await context?.close();server?.kill();console.log(output);}
