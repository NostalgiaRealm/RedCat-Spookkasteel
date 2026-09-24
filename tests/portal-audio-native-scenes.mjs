import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import assert from 'node:assert/strict';

const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4293'},stdio:['ignore','pipe','inherit']});
await new Promise((resolve,reject)=>{server.stdout.once('data',resolve);server.once('error',reject);});
let browser;
try {
  browser=await chromium.launch({executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
  const page=await browser.newPage(),errors=[];page.on('pageerror',e=>errors.push(e.stack));
  await page.goto('http://127.0.0.1:4293/?skipIntro');await page.waitForFunction(()=>window.__redcat);
  await page.locator('#open-help').click();await page.locator('#close-help').click();
  const result=await page.evaluate(async()=>{
    const {GameAudio}=await import('./src/audio.js');
    const wait=ms=>new Promise(resolve=>setTimeout(resolve,ms));
    const rms=a=>{const data=new Float32Array(a.fftSize);a.getFloatTimeDomainData(data);return Math.sqrt(data.reduce((s,v)=>s+v*v,0)/data.length);};
    const spectrum=a=>{const data=new Float32Array(a.frequencyBinCount);a.getFloatFrequencyData(data);let best=1;for(let i=2;i<data.length;i++)if(data[i]>data[best])best=i;return best*a.context.sampleRate/a.fftSize;};
    const audio=new GameAudio({master:1});
    const actual=audio.play({sound:'LV2snd7.wav',nativeFrequency:true,playbackRate:.075,volume:1.9,loop:true,spatial:true,position:[100,0,0]});
    const original=audio.context.createAnalyser();original.fftSize=8192;actual.stereo.right.connect(original);
    await wait(550);const originalRms=rms(original),originalRate=actual.element.playbackRate;
    audio.pause();const pausedAt=actual.element.currentTime;await wait(130);const pausedEnd=actual.element.currentTime;
    audio.resume();await wait(160);const resumedAt=actual.element.currentTime;
    audio.reset();await audio.context.close();
    const rate=16000,frames=rate,bytes=new ArrayBuffer(44+frames*2),view=new DataView(bytes);
    const chars=(offset,text)=>[...text].forEach((c,i)=>view.setUint8(offset+i,c.charCodeAt(0)));
    chars(0,'RIFF');view.setUint32(4,36+frames*2,true);chars(8,'WAVE');chars(12,'fmt ');view.setUint32(16,16,true);
    view.setUint16(20,1,true);view.setUint16(22,1,true);view.setUint32(24,rate,true);view.setUint32(28,rate*2,true);view.setUint16(32,2,true);view.setUint16(34,16,true);chars(36,'data');view.setUint32(40,frames*2,true);
    for(let i=0;i<frames;i++)view.setInt16(44+i*2,Math.sin(i*2*Math.PI*4000/rate)*12000,true);
    const url=URL.createObjectURL(new Blob([bytes],{type:'audio/wav'}));
    const tone=new GameAudio({master:1,fetchAudio:async()=>({ok:true,arrayBuffer:async()=>bytes.slice(0)})});
    const record=tone.play({sound:'probe.wav',nativeFrequency:true,playbackRate:.075,loop:true,spatial:true,position:[100,0,0]});
    const analysers=['left','right'].map(side=>{const a=tone.context.createAnalyser();a.fftSize=8192;record.stereo[side].connect(a);return a;});
    await wait(350);const right=analysers.map(rms),frequency=spectrum(analysers[1]),toneState={context:tone.context.state,playing:!!record.element.source,buffer:record.element.buffer?.duration,snapshot:tone.snapshot()};
    tone.listenerQuaternion=[0,1,0,0];tone.update(.2);await wait(250);const left=analysers.map(rms);
    // Verify the need for the buffer path in the same browser, using an
    // ordinary element at exactly the native rate (outside GameAudio's clamp).
    const media=new Audio(url);media.loop=true;media.preservesPitch=false;media.playbackRate=.075;
    const mediaSource=tone.context.createMediaElementSource(media),mediaProbe=tone.context.createAnalyser();mediaProbe.fftSize=8192;
    mediaSource.connect(mediaProbe);mediaProbe.connect(tone.context.destination);await media.play();await wait(350);
    const mediaRms=rms(mediaProbe),mediaFrequency=spectrum(mediaProbe),mediaRate=media.playbackRate;media.pause();mediaSource.disconnect();mediaProbe.disconnect();
    tone.reset();await tone.context.close();URL.revokeObjectURL(url);
    return {originalRms,originalRate,pausedAt,pausedEnd,resumedAt,right,left,frequency,mediaRms,mediaFrequency,mediaRate,toneState};
  });
  await mkdir('artifacts',{recursive:true});await writeFile('artifacts/portal-audio-native-scenes.json',JSON.stringify(result,null,2)+'\n');
  assert.ok(result.originalRms>.001,'original portal WAV is audible at .075x');assert.equal(result.originalRate,.075);
  assert.equal(result.pausedAt,result.pausedEnd);assert.ok(result.resumedAt>result.pausedEnd);
  assert.ok(result.right[1]>.1,'slow buffered mono effect remains audible');assert.ok(Math.abs(result.frequency-300)<10,'4000 Hz shifts to 300 Hz at .075x');
  assert.ok(Math.abs(result.right[0]/result.right[1]-10**(-.5))<.025,'native stereo attenuation applies to decoded effects');
  assert.ok(Math.abs(result.left[1]/result.left[0]-10**(-.5))<.025,'camera rotation reverses buffered stereo');
  assert.deepEqual(errors,[]);
  console.log('PASS original .075x portal waveform, pitch, stereo rotation and sample-position pause/resume.',JSON.stringify(result));
} finally {await browser?.close();server.kill();}
