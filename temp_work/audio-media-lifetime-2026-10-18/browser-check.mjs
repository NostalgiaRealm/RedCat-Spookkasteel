import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

const out=path.resolve('temp_work/audio-media-lifetime-2026-10-18');
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'0'},stdio:['ignore','pipe','inherit']});
let context;
const errors=[],consoleMessages=[],mediaEvents=[],badRequests=[];
try {
  const url=await new Promise((resolve,reject)=>{server.stdout.once('data',data=>resolve(String(data).trim().split(' ').at(-1)));server.once('error',reject);});
  context=await chromium.launchPersistentContext(out+'/profile',{executablePath:'/usr/bin/google-chrome',headless:true,args:['--autoplay-policy=no-user-gesture-required']});
  const page=await context.newPage();
  page.on('pageerror',e=>errors.push(e.stack));page.on('console',m=>consoleMessages.push({type:m.type(),text:m.text()}));
  page.on('response',response=>{if(response.status()>=400)badRequests.push({status:response.status(),url:response.url()});});
  const cdp=await context.newCDPSession(page);await cdp.send('Media.enable');
  cdp.on('Media.playerEventsAdded',entry=>mediaEvents.push(entry));
  await page.goto(url+'/temp_work/audio-media-lifetime-2026-10-18/harness.html');
  const result=await page.evaluate(async()=>{
    const {GameAudio}=await import('/src/audio.js');
    const elements=[],events=[];
    const wait=ms=>new Promise(resolve=>setTimeout(resolve,ms));
    const until=async(fn,label)=>{const deadline=performance.now()+10000;while(!fn()){if(performance.now()>deadline)throw new Error('Timed out: '+label);await wait(10);}};
    const audio=new GameAudio({master:0,createAudio:url=>{
      const element=new Audio(url),id=elements.length;elements.push(element);
      element.removes=0;element.loads=0;
      const remove=element.removeAttribute,load=element.load;
      element.removeAttribute=function(name){if(name==='src')this.removes++;return remove.call(this,name);};
      element.load=function(){this.loads++;return load.call(this);};
      for(const type of ['loadedmetadata','playing','ended','emptied','error'])element.addEventListener(type,()=>events.push({id,type,error:element.error?.message||null}));
      return element;
    }});
    let completed;
    const natural=audio.play({sound:'rcshoot1.wav',onEnded:reason=>completed=reason});
    await until(()=>completed,'natural media completion');
    const naturalResult={reason:completed,src:natural.element.getAttribute('src'),loads:natural.element.loads,removes:natural.element.removes};

    const loop=audio.play({sound:'lv1snd1.wav',key:'active',loop:true,spatial:true,position:[0,0,0]});
    await until(()=>loop.element.currentTime>.05,'active loop playback');
    audio.pause();const pausedAt=loop.element.currentTime;await wait(80);
    const pauseResult={pausedAt,afterWait:loop.element.currentTime,src:loop.element.getAttribute('src'),loads:loop.element.loads};
    audio.resume();await until(()=>loop.element.currentTime>pausedAt+.03,'resume loop');

    for(let i=0;i<64;i++){
      audio.play({sound:'rcshoot1.wav',key:'churn',spatial:i%2===0,position:[0,0,0]});
      await wait(0);
    }
    const activeSurvived={src:loop.element.getAttribute('src'),loads:loop.element.loads,paused:loop.element.paused};
    audio.reset();
    await until(()=>elements.every(e=>e.networkState===HTMLMediaElement.NETWORK_EMPTY&&e.readyState===HTMLMediaElement.HAVE_NOTHING),'all retained media empty');
    // All elements remain strongly referenced: cleanup does not depend on GC.
    const released=elements.map((e,id)=>({id,src:e.getAttribute('src'),currentSrc:e.currentSrc,paused:e.paused,ready:e.readyState,network:e.networkState,loads:e.loads,removes:e.removes}));

    const video=document.createElement('video');video.preload='auto';video.muted=true;document.body.append(video);video.src='/assets/media/outronl.webm';
    await video.play();await until(()=>video.currentTime>.1,'outro playback after releases');
    const videoResult={duration:video.duration,currentTime:video.currentTime,paused:video.paused,error:video.error?.message||null};
    video.pause();video.removeAttribute('src');video.load();await audio.context?.close();
    return {natural:naturalResult,pause:pauseResult,activeSurvived,released,video:videoResult,events,sounds:audio.sounds.size,keyed:audio.keyed.size,storageKeys:Object.keys(localStorage)};
  });
  await writeFile(out+'/browser-report.json',JSON.stringify({browser:context.browser()?.version(),result,errors,consoleMessages,badRequests,mediaEvents},null,2)+'\n');
  assert.equal(result.natural.reason,'ended');assert.equal(result.natural.src,null);
  assert.equal(result.pause.loads,0);assert.equal(result.pause.pausedAt,result.pause.afterWait);assert.ok(result.pause.src);
  assert.equal(result.activeSurvived.loads,0);assert.equal(result.activeSurvived.paused,false);
  // Chromium retains currentSrc as historical URL after unloading; src and the
  // empty network/ready states are the lifecycle postconditions.
  assert.equal(result.released.length,66);assert.ok(result.released.every(e=>e.src===null&&e.paused&&e.ready===0&&e.network===0&&e.loads===1&&e.removes===1));
  assert.equal(result.sounds,0);assert.equal(result.keyed,0);assert.deepEqual(result.storageKeys,[]);
  assert.equal(result.video.error,null);assert.equal(result.video.paused,false);assert.ok(result.video.duration>55);
  assert.deepEqual(errors,[]);assert.deepEqual(badRequests,[]);assert.ok(!consoleMessages.some(m=>/TooManyWebMediaPlayers|error creating media player/.test(m.text)));
  console.log('PASS: 66 strongly retained native audio elements unloaded, pause/resume preserved, unrelated active loop retained, unchanged outro starts. No game state or save storage loaded.');
} finally {await context?.close();server.kill();}
