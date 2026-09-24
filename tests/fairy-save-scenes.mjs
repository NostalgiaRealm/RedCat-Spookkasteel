import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4294'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage({viewport:{width:1280,height:720}}),errors=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  await page.goto('http://127.0.0.1:4294/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const result=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(0);app.pause();
    for(const player of app.gameplay.scripts.players.values())player.stop();
    app.gameplay.scripts.cutscene=false;app.gameplay.scripts.camera=null;
    for(const o of app.gameplay.objects)if(o.kind==='fairy')o.enabled=false;
    const id=app.gameplay.find('fairy11')[0].id;
    const state=()=>app.world.effects.entries.get(id);
    const advance=seconds=>{while(seconds>1e-9){const dt=Math.min(.05,seconds);app.world.effects.updateFairy(state(),dt);seconds-=dt;}app.world.effects.update(0);};
    const capture=()=>({state:state().fairy.snapshot(),geometry:state().fairy.geometry()});
    state().object.enabled=true;advance(3.107);
    const active=capture();app.saveGame(true);const bytes=JSON.stringify(JSON.parse(localStorage.getItem('redcat.save.v1')).game.objects.find(o=>o.id===id).fairyState).length;
    await app.loadSave();app.pause();const activeRestored=capture();
    const events=[],emit=app.gameplay.emit.bind(app.gameplay);
    app.gameplay.emit=(type,value)=>{if(type==='scriptSound'&&value.id?.startsWith(`fairy:${id}:`))events.push(value);emit(type,value);};
    advance(.107);const resumedSounds=events.filter(e=>!e.stop).map(e=>e.sound);
    state().object.enabled=false;advance(.25);const departure=capture();app.saveGame(true);
    await app.loadSave();app.pause();const departureRestored=capture();
    const before=state().fairy.snapshot();app.world.effects.update(0);const after=state().fairy.snapshot();
    const centre=state().fairy.lastCentre;app.world.camera.position.set(centre[0]+70,centre[1]+50,centre[2]+160);app.world.camera.lookAt(...centre);
    app.world.render();document.getElementById('pause').hidden=true;
    return {bytes,active,activeRestored,resumedSounds,departure,departureRestored,before,after};
  });
  assert.deepEqual(result.activeRestored,result.active);assert.deepEqual(result.departureRestored,result.departure);
  assert.deepEqual(result.before,result.after);assert.deepEqual(result.resumedSounds,['idlefee1.wav']);
  assert.equal(result.departureRestored.state.active,false);assert.ok(result.departureRestored.geometry.sprites.length>0);
  assert.ok(result.bytes<80000);assert.deepEqual(errors,[]);
  await mkdir('artifacts',{recursive:true});await writeFile('artifacts/fairy-save-scenes.json',JSON.stringify({bytes:result.bytes,
    activeSprites:result.active.geometry.sprites.length,departureSprites:result.departure.geometry.sprites.length,resumedSounds:result.resumedSounds,errors},null,2)+'\n');
  await page.screenshot({path:'artifacts/fairy-restored-departure.png'});
  console.log('PASS actual menu save/load retains every active and departing fairy particle, trail, oscillator and RNG state; render-only updates stay read-only; idle resumes once.');
} finally {await browser?.close();server.kill();}
