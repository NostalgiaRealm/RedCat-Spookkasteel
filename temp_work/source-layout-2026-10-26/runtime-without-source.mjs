import assert from 'node:assert/strict';
import {once} from 'node:events';
import path from 'node:path';
import {mkdir,readFile,writeFile} from 'node:fs/promises';
import {chromium} from 'playwright';
import {createGameServer} from '../../tools/serve.mjs';
const out=path.resolve('temp_work/source-layout-2026-10-26/browser-'+Date.now());await mkdir(out,{recursive:true});
process.env.TMPDIR=path.relative(process.cwd(),out);
const bytes=await readFile('temp_work/web-cache-2026-10-20/run-1792491346214/seed-save.json','utf8'),save=JSON.parse(bytes);
const report={scope:'Prepared runtime with source/ entirely absent. Isolated browser, historical save continuity and all-five-level load/render/audio smoke. Not a campaign or performance benchmark.',out,errors:[],levels:[]};
const server=await createGameServer({projectDir:path.resolve('temp_work/source-layout-2026-10-26/android-staging/www')});server.listen(0,'127.0.0.1');await once(server,'listening');
let browser;
try {
 browser=await chromium.launch({executablePath:'/usr/bin/google-chrome',headless:true,args:['--use-angle=swiftshader','--enable-unsafe-swiftshader','--autoplay-policy=no-user-gesture-required'],env:{...process.env}});
 const page=await browser.newPage({viewport:{width:1280,height:720}});const requests=[];page.on('request',r=>requests.push(new URL(r.url()).pathname));page.on('pageerror',e=>report.errors.push(e.message));
 await page.addInitScript(bytes=>{
  if(!localStorage.getItem('redcat.save.v1')){localStorage.setItem('redcat.save.v1',bytes);localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4}));localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,volume:0,touchControls:'off'}));}
  const raf=requestAnimationFrame.bind(window),pending=[];window.__testRunning=false;
  window.requestAnimationFrame=fn=>{if(window.__testRunning)return raf(fn);pending.push(fn);return pending.length;};
  window.cancelAnimationFrame=()=>{};window.__releaseFrames=()=>{window.__testRunning=true;for(const fn of pending.splice(0))raf(fn);};
  Element.prototype.requestPointerLock=()=>Promise.resolve();
 },bytes);
 const origin=`http://127.0.0.1:${server.address().port}`;report.sourceUrlStatus=(await fetch(origin+'/source/main.js')).status;assert.equal(report.sourceUrlStatus,404);await page.goto(origin+'/');
 await page.waitForFunction(()=>window.__redcat,null,{polling:100,timeout:60000});
 await page.evaluate(()=>__redcat.recovery.ready);
 await page.locator('#native-next').click();await page.waitForFunction(()=>__redcat.originalMenu.page==='startinfo',null,{polling:100});await page.locator('#native-start').click();
 await page.waitForFunction(()=>['playing','error'].includes(__redcat.mode),null,{polling:100,timeout:120000});
 const loaded=await page.evaluate(()=>({mode:__redcat.mode,level:__redcat.world?.id,position:__redcat.world?.player.position,score:__redcat.gameplay?.state.score,health:__redcat.gameplay?.state.health,save:localStorage.getItem('redcat.save.v1'),fatal:document.getElementById('fatal-message').textContent}));
 assert.equal(loaded.mode,'playing',loaded.fatal);assert.equal(loaded.level,save.level);assert.deepEqual(loaded.position,save.position);assert.equal(loaded.score,save.game.state.score);assert.equal(loaded.health,save.game.state.health);assert.equal(loaded.save,bytes);delete loaded.save;report.save=loaded;
 for(let index=0;index<5;index++){
  const value=await page.evaluate(async index=>{const a=__redcat;if(index>0&&await a.startLevel(index)!==true)throw new Error('Requested chapter did not start: '+index);a.world.render();a.audio.update(.016,a.world.camera.position.toArray());return {index,id:a.world.id,mode:a.mode,actors:a.world.actorInstances.size,models:a.world.modelMeshes.size,scriptError:a.gameplay.scripts.vm.lastError,drawCalls:a.world.renderer.info.render.calls};},index);
  assert.equal(value.id,`lvl0${index}a`);assert.equal(value.mode,'playing');assert.equal(value.scriptError,null);assert.ok(value.drawCalls>0);report.levels.push(value);
 }
 await page.evaluate(()=>__releaseFrames());await page.waitForTimeout(350);await page.evaluate(()=>__redcat.pause());
 report.moduleRequests=requests.filter(p=>/\.m?js$/.test(p));assert.deepEqual([...new Set(report.moduleRequests)],['/src/game.bundle.js']);assert.equal(requests.some(p=>p.startsWith('/source/')),false);report.sourceRequested=false;assert.deepEqual(report.errors,[]);assert.equal(await page.evaluate(()=>__redcat.mode),'paused');report.passed=true;
} catch(error) {report.passed=false;report.error=error.stack;throw error;}
finally {await writeFile(path.join(out,'report.json'),JSON.stringify(report,null,2)+'\n');console.log(JSON.stringify({out,passed:report.passed,errors:report.errors}));await browser?.close();server.closeAllConnections();await new Promise(resolve=>server.close(resolve));}
