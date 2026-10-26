import {_electron as electron} from 'playwright';
import assert from 'node:assert/strict';
import {readFile,mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
const root=process.cwd(),out=path.join(root,'temp_work/js-bundling-2026-10-26/electron-final');
await mkdir(out,{recursive:true});
const savedBytes=await readFile('temp_work/web-cache-2026-10-20/run-1792491346214/seed-save.json','utf8');
const saved=JSON.parse(savedBytes),errors=[];let app,page;
try{
 app=await electron.launch({cwd:root,args:['.','--ozone-platform=x11','--use-angle=swiftshader','--enable-unsafe-swiftshader',`--user-data-dir=${out}/profile`],env:{...process.env,TMPDIR:path.relative(root,out)},timeout:60000});
 page=await app.firstWindow();page.on('pageerror',e=>errors.push(e.message));
 await page.waitForFunction(()=>window.__redcat,null,{polling:100,timeout:60000});
 await page.evaluate(savedBytes=>{localStorage.clear();localStorage.setItem('redcat.save.v1',savedBytes);localStorage.setItem('redcat.settings.v1',JSON.stringify({autoIntro:false,fullscreen:false,masterVolume:0}));},savedBytes);
 await page.addInitScript(()=>{window.requestAnimationFrame=()=>1;window.cancelAnimationFrame=()=>{};Element.prototype.requestPointerLock=()=>Promise.resolve();});
 await page.reload();await page.waitForFunction(()=>window.__redcat,null,{polling:100,timeout:60000});
 assert.equal(await page.evaluate(()=>location.origin),'redcat://game');
 assert.equal(await page.evaluate(()=>localStorage.getItem('redcat.save.v1')),savedBytes);
 assert.equal(await page.evaluate(()=>__redcat.originalMenu.getState().hasSave),true);
 await page.evaluate(()=>{document.getElementById('native-next').click();document.getElementById('native-start').click();});
 await page.waitForFunction(()=>__redcat.mode==='playing',null,{polling:100,timeout:120000});
 const restored=await page.evaluate(()=>({level:__redcat.world.id,position:[...__redcat.world.player.position],health:__redcat.gameplay.state.health,score:__redcat.gameplay.state.score,save:localStorage.getItem('redcat.save.v1'),entry:document.querySelector('script[type=module][src]').src,scriptError:__redcat.gameplay.scripts.vm.lastError}));
 assert.equal(restored.level,saved.level);assert.deepEqual(restored.position,saved.position);assert.equal(restored.health,saved.game.state.health);assert.equal(restored.score,saved.game.state.score);assert.equal(restored.save,savedBytes);assert.match(restored.entry,/src\/game\.bundle\.js\?v=/);assert.equal(restored.scriptError,null);
 const render=await page.evaluate(()=>{__redcat.world.render();__redcat.pause();return {mode:__redcat.mode,canvas:[document.getElementById('game').width,document.getElementById('game').height]};});
 assert.equal(render.mode,'paused');assert.deepEqual(errors,[]);
 delete restored.save;await writeFile(path.join(out,'report.json'),JSON.stringify({passed:true,scope:'Isolated Electron source app on Xvfb; retained legacy save, normal menu Continue, same custom origin, rendered level and pause autosave.',restored,render,errors},null,2));
 console.log('PASS Electron bundled source, original custom origin, legacy save unchanged and normal Continue/render/autosave.');
}catch(error){await writeFile(path.join(out,'report.json'),JSON.stringify({passed:false,error:error.stack,errors,state:await page?.evaluate(()=>({mode:window.__redcat?.mode,fatal:document.getElementById('fatal-message')?.textContent,menu:window.__redcat?.originalMenu?.page})).catch(()=>null)},null,2));throw error;}
finally{await app?.close();}
