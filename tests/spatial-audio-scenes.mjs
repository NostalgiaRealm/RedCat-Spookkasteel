import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4286'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage(),errors=[];page.on('pageerror',e=>errors.push(e.stack));
  await page.addInitScript(()=>localStorage.setItem('redcat.progress.v1',JSON.stringify({version:1,highestUnlocked:4})));
  await page.goto('http://127.0.0.1:4286/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  // A real gesture grants audio; this test does not bypass browser autoplay.
  await page.locator('#open-help').click();await page.locator('#close-help').click();
  const result=await page.evaluate(async()=>{
    const {GameAudio}=await import('./src/audio.js');
    // Steady mono WAV measures actual split/upmix/centibel channel output,
    // rather than checking only the metadata values assigned to nodes.
    const rate=16000,frames=rate*3,bytes=new ArrayBuffer(44+frames*2),view=new DataView(bytes);
    const chars=(offset,text)=>[...text].forEach((c,i)=>view.setUint8(offset+i,c.charCodeAt(0)));
    chars(0,'RIFF');view.setUint32(4,36+frames*2,true);chars(8,'WAVE');chars(12,'fmt ');view.setUint32(16,16,true);
    view.setUint16(20,1,true);view.setUint16(22,1,true);view.setUint32(24,rate,true);view.setUint32(28,rate*2,true);view.setUint16(32,2,true);view.setUint16(34,16,true);chars(36,'data');view.setUint32(40,frames*2,true);
    for(let i=0;i<frames;i++)view.setInt16(44+i*2,Math.sin(i*2*Math.PI*500/rate)*12000,true);
    const url=URL.createObjectURL(new Blob([bytes],{type:'audio/wav'}));
    const audio=new GameAudio({createAudio:()=>new Audio(url),master:1});
    const record=audio.play({sound:'test.wav',spatial:true,position:[100,0,0],loop:true});
    const analysers=['left','right'].map(side=>{const a=audio.context.createAnalyser();a.fftSize=2048;record.stereo[side].connect(a);return a;});
    const wait=ms=>new Promise(resolve=>setTimeout(resolve,ms));
    const rms=a=>{const data=new Float32Array(a.fftSize);a.getFloatTimeDomainData(data);return Math.sqrt(data.reduce((s,v)=>s+v*v,0)/data.length);};
    await wait(220);const right=analysers.map(rms);
    audio.listenerQuaternion=[0,1,0,0];audio.update(.2);await wait(180);const left=analysers.map(rms);
    audio.pause();await wait(100);const pausedAt=record.element.currentTime;await wait(150);const pausedEnd=record.element.currentTime;
    audio.resume();await wait(130);const resumedAt=record.element.currentTime;
    audio.reset();await audio.context.close();URL.revokeObjectURL(url);
    const app=window.__redcat;await app.startLevel(1);app.pause();
    app.audio.update(.2,app.world.camera.position.toArray());
    const castle=app.audio.snapshot();
    return {right,left,pausedAt,pausedEnd,resumedAt,castle};
  });
  assert.ok(result.right[1]>.01,'mono input reaches right channel');
  assert.ok(Math.abs(result.right[0]/result.right[1]-10**(-.5))<.02,'right source has native -10 dB opposite channel');
  assert.ok(Math.abs(result.left[1]/result.left[0]-10**(-.5))<.02,'turning camera reverses measured stereo');
  assert.equal(result.pausedAt,result.pausedEnd);assert.ok(result.resumedAt>result.pausedEnd);
  assert.ok(result.castle.some(r=>r.stereoConnected));assert.ok(result.castle.some(r=>r.spatial&&!r.audible));
  assert.ok(result.castle.filter(r=>r.channel==='music').every(r=>!r.stereoConnected&&r.pan===0));
  assert.ok(result.castle.every(r=>r.paused));assert.deepEqual(errors,[]);
  await mkdir('artifacts',{recursive:true});await writeFile('artifacts/spatial-audio-scenes.json',JSON.stringify(result,null,2)+'\n');
  console.log('PASS measured native stereo output, camera rotation, media pause/resume and actual castle PVS mixing.');
} finally {await browser?.close();server.kill();}
