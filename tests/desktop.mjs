import {execFileSync} from 'node:child_process';
import { _electron as electron } from 'playwright';import assert from 'node:assert/strict';import {mkdtemp,rm} from 'node:fs/promises';import os from 'node:os';import path from 'node:path';
import {verifyForestAudio} from './audio-scenes.mjs';
import {verifyGameplayAudio} from './gameplay-audio-scenes.mjs';
import {verifyEnemyScenes} from './enemy-scenes.mjs';
import {verifyBossScenes} from './boss-scenes.mjs';
import {verifyEnvironmentScenes} from './environment-scenes.mjs';
import {verifyBossPhaseScenes} from './boss-phase-scenes.mjs';
import {verifyGraveyardScenes} from './graveyard-scenes.mjs';
import {verifyBatScenes} from './bat-scenes.mjs';
import {verifyEffectScenes} from './effects-scenes.mjs';
import {verifyCheatScenes} from './cheat-scenes.mjs';
import {verifyDoorScenes} from './door-scenes.mjs';
import {verifyActorPlacementScenes} from './actor-placement-scenes.mjs';
import {verifyPortalBeamScenes} from './portal-beam-scenes.mjs';
const profile=await mkdtemp(path.join(os.tmpdir(),'redcat-desktop-test-'));
let app;
try {
 app=await electron.launch({executablePath:process.env.REDCAT_EXECUTABLE,args:[...(process.env.REDCAT_EXECUTABLE?[]:['.']),...(process.platform==='linux'&&!process.env.REDCAT_LAUNCHER?['--ozone-platform=x11']:[]),`--user-data-dir=${profile}`],cwd:process.cwd(),timeout:30000});
 const page=await app.firstWindow();const errors=[];page.on('pageerror',e=>{errors.push(e.message);console.log('PAGE',e.stack);});page.on('console',e=>{if(e.type()==='error')console.log('CONSOLE',e.text());});
 await page.waitForFunction(()=>window.__redcat,{timeout:30000});
 if(await page.locator('#intro').isVisible()){await page.waitForFunction(()=>document.getElementById('intro-video').readyState>=2);assert.ok(await page.locator('#intro-video').evaluate(v=>v.duration>70));await page.locator('#skip-intro').click();}
 await verifyForestAudio(page);
 await verifyGameplayAudio(page);
 await verifyEnemyScenes(page);
 await verifyBossScenes(page);
 await verifyEnvironmentScenes(page);
 await verifyBossPhaseScenes(page);
 await verifyGraveyardScenes(page);
 await verifyBatScenes(page);
 await verifyEffectScenes(page);
 await verifyCheatScenes(page);
 await verifyDoorScenes(page);
 await verifyActorPlacementScenes(page);
 await verifyPortalBeamScenes(page);
 await page.evaluate(()=>window.__redcat.startLevel(0));
 console.log(await page.evaluate(()=>({mode:window.__redcat.mode,error:document.getElementById('fatal-message').textContent})));assert.equal(await page.evaluate(()=>window.__redcat.mode),'playing');
 await page.evaluate(()=>window.__redcat.pause());await page.locator('#pause-settings').click();
 await page.locator('#resolution').selectOption('1920x1080');await page.locator('#fullscreen').check();await page.locator('#apply-settings').click();await page.locator('#settings').waitFor({state:'hidden'});await page.locator('#settings').waitFor({state:'hidden'});
 await page.waitForTimeout(400);
 const fullscreen=await app.evaluate(({BrowserWindow})=>BrowserWindow.getAllWindows()[0].isFullScreen());assert.equal(fullscreen,true);
 assert.deepEqual(await page.locator('#game').evaluate(c=>[c.width,c.height]),[1920,1080]);
 await page.locator('#pause-settings').click();await page.locator('#fullscreen').uncheck();await page.locator('#resolution').selectOption('1280x720');await page.locator('#apply-settings').click();await page.locator('#settings').waitFor({state:'hidden'});await page.locator('#settings').waitFor({state:'hidden'});
 await page.waitForTimeout(200);assert.equal(await app.evaluate(({BrowserWindow})=>BrowserWindow.getAllWindows()[0].isFullScreen()),false);
 assert.deepEqual(await app.evaluate(({BrowserWindow})=>BrowserWindow.getAllWindows()[0].getContentSize()),[1280,720]);await page.locator('#resume').click();await page.waitForTimeout(300);
 await page.screenshot({path:'artifacts/desktop-linux.png'});
 if(process.platform==='linux'){
  const native=await app.evaluate(({BrowserWindow,app})=>({id:BrowserWindow.getAllWindows()[0].getNativeWindowHandle().readUInt32LE(),features:app.getGPUFeatureStatus()}));
  assert.ok(native.id>1,'The X11 presenter must have an actual X11 window, not a Wayland surface ID');
  assert.equal(native.features.gpu_compositing,'enabled','Desktop GPU compositing must work, not only WebGL readback');
  const file=path.resolve('artifacts/desktop-linux-native.png');
  execFileSync('import',['-silent','-window',String(native.id),file],{timeout:8000});
  const pixels=await app.evaluate(({nativeImage},file)=>{
    const image=nativeImage.createFromPath(file),size=image.getSize(),data=image.toBitmap(),colors=new Set();
    for(let y=Math.floor(size.height*.2);y<size.height*.8;y+=8)for(let x=Math.floor(size.width*.2);x<size.width*.8;x+=8)colors.add(data.readUInt32LE((y*size.width+x)*4));
    return {size,colors:colors.size};
  },file);
  assert.ok(pixels.colors>128,`Native window appears blank (${pixels.colors} colors)`);
  console.log('PASS actual native window pixels and hardware desktop compositing.',pixels);
 }
 assert.deepEqual(errors,[]);console.log('PASS native Linux launch, custom asset protocol, original forest, sandboxed preload, fullscreen and windowed resolution switching.');
}finally {await app?.close();await rm(profile,{recursive:true,force:true});}
