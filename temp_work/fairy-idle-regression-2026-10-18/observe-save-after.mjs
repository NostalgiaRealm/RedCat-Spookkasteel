import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {readFile,writeFile} from 'node:fs/promises';
import path from 'node:path';
const out=path.resolve('temp_work/fairy-idle-regression-2026-10-18');
const storage=JSON.parse(await readFile(out+'/saved-storage.json','utf8'));
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'0'},stdio:['ignore','pipe','inherit']});
let context;
try{
 const url=await new Promise(resolve=>server.stdout.once('data',d=>resolve(String(d).trim().split(' ').at(-1))));
 context=await chromium.launchPersistentContext(out+'/browser-profile',{headless:true,executablePath:'/usr/bin/google-chrome',viewport:{width:960,height:540},env:{...process.env,TMPDIR:'temp_work/fairy-idle-regression-2026-10-18/scratch'},args:['--autoplay-policy=no-user-gesture-required','--use-angle=gl']});
 const page=await context.newPage(),errors=[],messages=[];
 page.on('pageerror',e=>errors.push(e.stack));page.on('console',m=>messages.push({type:m.type(),text:m.text()}));
 await page.addInitScript(storage=>{for(const [k,v]of Object.entries(storage))localStorage.setItem(k,v);const s=JSON.parse(localStorage.getItem('redcat.settings.v1')||'{}');s.fullscreen=false;s.resolution='960x540';s.autoIntro=false;localStorage.setItem('redcat.settings.v1',JSON.stringify(s));},storage);
 await page.goto(url+'/?skipIntro');await page.waitForFunction(()=>window.__redcat);
 await page.evaluate(async()=>{
  const a=window.__redcat;window.observedAudio=[];
  const play=a.audio.play.bind(a.audio);a.audio.play=o=>{window.observedAudio.push({t:performance.now(),...o,position:typeof o.position==='function'?'function':o.position});return play(o);};
  await a.loadSave();
 });
 const samples=[];
 for(let n=0;n<8;n++){
  await page.waitForTimeout(2500);
  samples.push(await page.evaluate(()=>({at:performance.now(),mode:__redcat.mode,cutscene:__redcat.gameplay.scripts.cutscene,
    fairies:[...__redcat.world.effects.entries.values()].filter(s=>s.fairy).map(s=>({id:s.object.id,enabled:s.object.enabled,active:s.active,age:s.age,phase:s.fairy.phase,stop:s.fairy.stopRequested})),
    audio:__redcat.audio.snapshot(),voices:[...__redcat.audio.sounds].map(r=>({name:r.name,key:r.key,currentTime:r.element.currentTime,duration:r.element.duration,paused:r.element.paused,volume:r.element.volume,loop:r.element.loop,buffered:r.element.nativeBuffered===true,ready:r.element.readyState,wait:r.wait,error:r.element.error}))})));
 }
 await page.screenshot({path:out+'/after-fairy-session.png'});
 const events=await page.evaluate(()=>{__redcat.pause();return window.observedAudio;});
 await writeFile(out+'/after-save-observation.json',JSON.stringify({samples,events,errors,messages},null,2)+'\n');
 console.log(JSON.stringify({errors,events:events.filter(e=>/fairy|fee|gri|magie/i.test(e.key+' '+e.sound)),samples:samples.map(s=>({cutscene:s.cutscene,fairies:s.fairies,voices:s.voices.filter(v=>v.volume>.005)}))},null,2));
}finally{await context?.close();server.kill();}
