import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import {fileURLToPath} from 'node:url';
import path from 'node:path';
import assert from 'node:assert/strict';

const work=path.dirname(fileURLToPath(import.meta.url));
const root=path.resolve(work,'../..');
const stamp=new Date().toISOString().replace(/[:.]/g,'-');
const out=path.join(work,`browser-${stamp}`),tmp=path.join(out,'temporary');
await mkdir(tmp,{recursive:true});
// /proc is only a short alias to this retained directory: Chromium's Unix
// singleton socket name cannot exceed 108 bytes, unlike our project path.
process.chdir(tmp);const temporaryAlias=`/proc/${process.pid}/cwd`;
Object.assign(process.env,{TMPDIR:temporaryAlias,TMP:temporaryAlias,TEMP:temporaryAlias});
const env={...process.env};
const server=spawn(process.execPath,['tools/serve.mjs'],{cwd:root,env:{...env,PORT:'4297'},stdio:['ignore','pipe','pipe']});
let serverLog='',context;
server.stdout.on('data',chunk=>serverLog+=chunk);server.stderr.on('data',chunk=>serverLog+=chunk);
try{
  await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);server.once('exit',code=>reject(new Error(`server exit ${code}`)));});
  context=await chromium.launchPersistentContext(path.join(out,'profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,env,args:['--use-angle=gl'],viewport:{width:1280,height:720},downloadsPath:path.join(out,'downloads')});
  const page=await context.newPage(),errors=[],consoleWarnings=[];
  page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(`${r.status()} ${r.url()}`);});
  page.on('console',m=>{if(['error','warning'].includes(m.type()))consoleWarnings.push(m.text());});
  await page.goto('http://127.0.0.1:4297/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  const active=await page.evaluate(async()=>{
    const app=window.__redcat;await app.startLevel(0);app.pause();
    for(const p of app.gameplay.scripts.players.values())p.stop();
    app.gameplay.scripts.cutscene=false;app.gameplay.scripts.camera=null;
    for(const o of app.gameplay.objects)if(o.kind==='fairy')o.enabled=false;
    const id=app.gameplay.find('fairy11')[0].id;
    window.ribbonProbe={id,state:()=>app.world.effects.entries.get(id),advance(seconds){while(seconds>1e-9){const dt=Math.min(.05,seconds);app.world.effects.updateFairy(this.state(),dt);seconds-=dt;}app.world.effects.update(0);},capture(){return {state:this.state().fairy.snapshot(),geometry:this.state().fairy.geometry()};},render(){const c=this.state().fairy.lastCentre;app.world.camera.position.set(c[0]+70,c[1]+50,c[2]+160);app.world.camera.lookAt(...c);app.world.effects.update(0);app.world.render();document.getElementById('pause').hidden=true;}};
    const p=window.ribbonProbe;p.state().object.enabled=true;p.advance(3.107);p.render();
    const capture=p.capture(),beam=app.world.effects.beamBatches.get('ptrail.bmp|ptrail_a.bmp');
    const beamEvidence={count:beam?.count,texture:beam?.mesh.material.map?.image?.src,vertexColor:beam?.mesh.material.vertexColors,transparent:beam?.mesh.material.transparent,depthWrite:beam?.mesh.material.depthWrite,drawRange:beam?.mesh.geometry.drawRange.count,
      alpha:beam?Array.from({length:beam.count*6},(_,i)=>beam.colors.getW(i)):[],positions:beam?Array.from(beam.positions.array.slice(0,beam.count*18)):[],uvs:beam?Array.from(beam.uvs.array.slice(0,beam.count*12)):[]};
    app.saveGame(true);await app.loadSave();app.pause();
    const restored=p.capture();p.render();
    return {capture,restored,beamEvidence};
  });
  await page.screenshot({path:path.join(out,'fairy-active-restored.png')});
  assert.deepEqual(active.restored,active.capture);
  const rays=active.capture.geometry.rays,beam=active.beamEvidence;
  assert.ok(rays.length>50);assert.equal(beam.count,rays.length);assert.equal(beam.drawRange,rays.length*6);
  assert.match(beam.texture,/ptrail-ptrail_a\.png$/);assert.equal(beam.vertexColor,true);assert.equal(beam.transparent,true);assert.equal(beam.depthWrite,false);
  for(let i=0;i<rays.length;i++){
    assert.deepEqual(beam.uvs.slice(i*12,i*12+12),[0,1,0,0,1,1,0,0,1,0,1,1]);
    assert.equal(rays[i].width,1.92);assert.ok(rays[i].opacity<=100/255+1e-9);assert.ok(rays[i].opacity>0);
    for(let v=0;v<6;v++)assert.ok(Math.abs(beam.alpha[i*6+v]-rays[i].opacity)<1e-7);
    const a=beam.positions.slice(i*18,i*18+3),b=beam.positions.slice(i*18+3,i*18+6);
    assert.ok(Math.abs(Math.hypot(...a.map((n,axis)=>n-b[axis]))-1.92)<.003);
  }
  assert.ok(Math.min(...rays.map(r=>r.opacity))<.03);
  const departure=await page.evaluate(async()=>{
    const app=window.__redcat,p=window.ribbonProbe,events=[],emit=app.gameplay.emit.bind(app.gameplay);
    app.gameplay.emit=(type,value)=>{if(type==='scriptSound'&&value.id?.startsWith(`fairy:${p.id}:`))events.push(value);emit(type,value);};
    p.advance(.107);const resumedSounds=events.filter(e=>!e.stop).map(e=>e.sound);
    p.state().object.enabled=false;p.advance(.25);const capture=p.capture();app.saveGame(true);await app.loadSave();app.pause();
    const restored=p.capture(),before=p.state().fairy.snapshot();app.world.effects.update(0);const after=p.state().fairy.snapshot();p.render();
    return {capture,restored,before,after,resumedSounds};
  });
  await page.screenshot({path:path.join(out,'fairy-departure-restored.png')});
  assert.deepEqual(departure.restored,departure.capture);assert.deepEqual(departure.before,departure.after);assert.deepEqual(departure.resumedSounds,['idlefee1.wav']);
  assert.equal(departure.capture.state.active,false);assert.equal(departure.capture.geometry.rays.length,0);assert.ok(departure.capture.geometry.sprites.length>0);
  assert.deepEqual(errors,[]);
  const result={pass:true,active,departure,errors,consoleWarnings};await writeFile(path.join(out,'result.json'),JSON.stringify(result,null,2)+'\n');
  console.log(JSON.stringify({pass:true,out,activeRibbons:rays.length,alphaRange:[Math.min(...rays.map(r=>r.opacity)),Math.max(...rays.map(r=>r.opacity))],departureSprites:departure.capture.geometry.sprites.length,errors,consoleWarnings},null,2));
}finally{await context?.close();server.kill();await writeFile(path.join(out,'server.log'),serverLog);}
