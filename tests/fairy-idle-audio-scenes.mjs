// Check actual original PCM through the spatial mixer across repeated seams.
// Isolated browser storage and all retained artifacts stay under temp_work.
import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import assert from 'node:assert/strict';

const out=path.resolve(`temp_work/fairy-idle-audio-${Date.now()}`);
await mkdir(out,{recursive:true});await mkdir('temp_work/fairy-audio-tmp',{recursive:true});
await writeFile(out+'/harness.html','<!doctype html><base href="/"><title>Fairy idle audio check</title>');
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'0'},stdio:['ignore','pipe','inherit']});
let browser;
try {
  const url=await new Promise((resolve,reject)=>{server.stdout.once('data',data=>resolve(String(data).trim().split(' ').at(-1)));server.once('error',reject);});
  browser=await chromium.launchPersistentContext(out+'/profile',{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,
    env:{...process.env,TMPDIR:'temp_work/fairy-audio-tmp'}});
  const page=await browser.newPage(),errors=[];page.on('pageerror',error=>errors.push(error.stack));
  await page.goto(url+'/'+path.relative(process.cwd(),out)+'/harness.html');
  const results=await page.evaluate(async()=>{
    const {GameAudio,nativeGainToAmplitude}=await import('/source/audio.js');const results=[];
    for(const rate of [44100,48000]){
      const frames=Math.floor(89836*rate/44100),offline=new OfflineAudioContext(2,frames*4+256,rate),sources=[];
      const context={state:'running',get currentTime(){return offline.currentTime;},destination:offline.destination,
        createGain:()=>offline.createGain(),createChannelSplitter:n=>offline.createChannelSplitter(n),createChannelMerger:n=>offline.createChannelMerger(n),
        decodeAudioData:bytes=>offline.decodeAudioData(bytes),createBufferSource:()=>{const source=offline.createBufferSource();sources.push(source);return source;}};
      const audio=new GameAudio({master:1,createContext:()=>context});audio.setLevel('lvl01a');audio.setPlayerListener([0,0,0]);
      const r=audio.play({sound:'IdleFee1.wav',loop:true,spatial:true,position:[0,0,0]});await r.element.play();
      if(!r.element.nativeBuffered)throw new Error('Fairy still uses HTML media');
      let ends=0;const ended=sources[0].onended;sources[0].onended=()=>{ends++;ended?.();};
      const decoded=r.element.buffer,rendered=await offline.startRendering(),expected=decoded.getChannelData(0),gain=nativeGainToAmplitude(.4);
      let mismatches=0,maxError=0;
      for(let ch=0;ch<2;ch++){
        const actual=rendered.getChannelData(ch);
        for(let i=0;i<actual.length;i++){
          const error=Math.abs(actual[i]-expected[i%expected.length]*gain);maxError=Math.max(maxError,error);if(error>1e-6)mismatches++;
        }
      }
      results.push({rate,frames:decoded.length,renderedFrames:rendered.length,gain:r.element.volume,sources:sources.length,ends,maxError,mismatches});audio.reset();
    }
    return results;
  });
  await writeFile(out+'/report.json',JSON.stringify({results,errors},null,2)+'\n');
  for(const r of results){assert.equal(r.frames,Math.floor(89836*r.rate/44100));assert.equal(r.sources,1);assert.equal(r.ends,0);assert.equal(r.mismatches,0);}
  assert.deepEqual(errors,[]);console.log('PASS original fairy PCM at 44.1/48 kHz: four seamless wraps, both stereo channels, native idle gain, one continuous source.');console.log(out);
}finally{await browser?.close();server.kill();}
