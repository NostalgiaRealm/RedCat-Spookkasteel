import {chromium} from 'playwright';import {spawn} from 'node:child_process';import {writeFile} from 'node:fs/promises';import path from 'node:path';
const out=path.resolve('temp_work/fairy-idle-regression-2026-10-18');const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'0'},stdio:['ignore','pipe','inherit']});let context;
try{
 const url=await new Promise(resolve=>server.stdout.once('data',d=>resolve(String(d).trim().split(' ').at(-1))));
 context=await chromium.launchPersistentContext(out+'/loop-profile',{executablePath:'/usr/bin/google-chrome',headless:true,env:{...process.env,TMPDIR:'temp_work/fairy-idle-regression-2026-10-18/scratch'},args:['--autoplay-policy=no-user-gesture-required']});const page=await context.newPage();
 await page.goto(url+'/temp_work/audio-media-lifetime-2026-10-18/harness.html');
 const results=await page.evaluate(async()=>{
  const {GameAudio}=await import('/src/audio.js');const results=[];
  await Promise.all([false,true].map(async buffered=>{
   const ctx=new AudioContext({sampleRate:44100});await ctx.resume();const chunks=[];
   const blob=new Blob([`class Capture extends AudioWorkletProcessor{process(inputs,outputs){const a=inputs[0]?.[0];if(a)this.port.postMessage(a.slice());return true;}}registerProcessor('capture',Capture);`],{type:'text/javascript'});
   const blobUrl=URL.createObjectURL(blob);await ctx.audioWorklet.addModule(blobUrl);URL.revokeObjectURL(blobUrl);
   const recorder=new AudioWorkletNode(ctx,'capture');recorder.port.onmessage=e=>chunks.push(e.data);recorder.connect(ctx.destination);
   const a=new GameAudio({master:1,settings:{gains:{},spatial:{}},createContext:()=>ctx});
   const r=a.play({sound:'idlefee1.wav',loop:true,group:buffered?'pickup':null,startTime:.755573});
   if(buffered)r.element.output.connect(recorder);else ctx.createMediaElementSource(r.element).connect(recorder);
   await new Promise(resolve=>setTimeout(resolve,10500));a.pause();await new Promise(resolve=>setTimeout(resolve,50));
   const data=new Float32Array(chunks.reduce((n,c)=>n+c.length,0));let p=0;for(const c of chunks){data.set(c,p);p+=c.length;}
   const u=new Uint8Array(data.buffer);let text='';for(let i=0;i<u.length;i+=32768)text+=String.fromCharCode(...u.subarray(i,i+32768));
   results.push({buffered,sampleRate:ctx.sampleRate,duration:r.element.duration,frames:data.length,pcm:btoa(text)});a.reset();await ctx.close();
  }));return results;
 });
 for(const r of results){await writeFile(out+`/idle-${r.buffered?'buffered':'html'}.f32`,Buffer.from(r.pcm,'base64'));delete r.pcm;}
 await writeFile(out+'/loop-capture.json',JSON.stringify(results,null,2));console.log(results);
}finally{await context?.close();server.kill();}
