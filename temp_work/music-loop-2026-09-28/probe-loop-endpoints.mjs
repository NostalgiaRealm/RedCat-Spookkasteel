import {chromium} from 'playwright';
import {spawn} from 'node:child_process';
import {writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
process.env.TMPDIR='current_work';
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4307'},stdio:['ignore','pipe','inherit']});
await new Promise(r=>server.stdout.once('data',r));let browser;
try{
 browser=await chromium.launchPersistentContext(resolve('current_work/music-loop-endpoints-profile'),{executablePath:'/usr/bin/google-chrome',headless:true});
 const page=await browser.newPage();await page.goto('http://127.0.0.1:4307/?skipIntro');
 const report=await page.evaluate(async()=>{
  const results=[];
  for(const name of ['level 5 - the castletowerr.wav','endbosses.wav','spookkort3.wav'])for(const rate of [22050,44100,48000]){
   const bytes=await(await fetch('assets/audio/'+encodeURIComponent(name))).arrayBuffer();
   const decoder=new OfflineAudioContext(2,1,rate),buffer=await decoder.decodeAudioData(bytes);
   for(const variant of ['implicit','duration','below','above']){
    const context=new OfflineAudioContext(2,buffer.length*2+256,rate),source=context.createBufferSource();source.buffer=buffer;source.loop=true;
    if(variant==='duration')source.loopEnd=buffer.duration;
    if(variant==='below')source.loopEnd=buffer.duration-Number.EPSILON*buffer.duration;
    if(variant==='above')source.loopEnd=buffer.duration+Number.EPSILON*buffer.duration;
    source.connect(context.destination);source.start();const output=await context.startRendering();let max=0,count=0;const first=[];
    for(let c=0;c<2;c++){
     const a=output.getChannelData(c),b=buffer.getChannelData(c);
     for(let i=0;i<a.length;i++)if(Math.abs(a[i]-b[i%b.length])>1e-6){max=Math.max(max,Math.abs(a[i]-b[i%b.length]));count++;if(first.length<3)first.push({i,c,value:a[i],expected:b[i%b.length]});}
    }
    results.push({name,rate,variant,length:buffer.length,duration:buffer.duration,end:source.loopEnd,max,count,first});
   }
  }
  return results;
 });
 await writeFile('current_work/music-loop-2026-09-28/endpoint-probe.json',JSON.stringify(report,null,2));console.log(JSON.stringify(report));
}finally{await browser?.close();server.kill();}
