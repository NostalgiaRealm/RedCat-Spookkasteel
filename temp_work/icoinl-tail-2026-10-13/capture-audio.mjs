import {createServer} from 'node:http';
import {readFile,mkdir,writeFile} from 'node:fs/promises';
import path from 'node:path';
import {chromium} from 'playwright';
const root=path.resolve('.'),dir=path.join(root,'temp_work/icoinl-tail-2026-10-13');
const processor=`class Capture extends AudioWorkletProcessor {process(inputs,outputs){const a=inputs[0]?.[0];if(a){outputs[0][0].set(a);this.port.postMessage({start:currentFrame,data:a});}return true;}}registerProcessor('capture',Capture);`;
const server=createServer(async(req,res)=>{try{
 if(req.url==='/'){res.setHeader('Content-Type','text/html');res.end('<button id="start">Start</button>');return;}
 if(req.url==='/capture.js'){res.setHeader('Content-Type','text/javascript');res.end(processor);return;}
 const file=path.resolve(root,'.'+decodeURIComponent(new URL(req.url,'http://localhost').pathname));
 if(!file.startsWith(root+path.sep)||file.includes('RCSPOOK_WEBSITE'))throw Error('path');
 res.setHeader('Content-Type',file.endsWith('.js')?'text/javascript':file.endsWith('.wav')?'audio/wav':'application/octet-stream');res.end(await readFile(file));
}catch{res.writeHead(404).end();}});
await new Promise(r=>server.listen(0,'127.0.0.1',r));
let browser;
try{
 browser=await chromium.launchPersistentContext(path.join(dir,'browser-profile'),{executablePath:'/usr/bin/google-chrome',headless:true,args:['--autoplay-policy=no-user-gesture-required'],env:{...process.env,TMPDIR:'/proc/self/cwd/temp_work/icoinl-tail-2026-10-13/browser-tmp',TMP:'/proc/self/cwd/temp_work/icoinl-tail-2026-10-13/browser-tmp',TEMP:'/proc/self/cwd/temp_work/icoinl-tail-2026-10-13/browser-tmp'}});
 const page=await browser.newPage(),errors=[];page.on('pageerror',e=>errors.push(e.stack));
 await page.goto(`http://127.0.0.1:${server.address().port}/`);await page.click('#start');
 const result=await page.evaluate(async()=>{
  const {GameAudio}=await import('/src/audio.js');
  const ctx=new AudioContext({sampleRate:44100});await ctx.audioWorklet.addModule('/capture.js');await ctx.resume();
  const wait=ms=>new Promise(r=>setTimeout(r,ms)),results=[];
  const buffer=await ctx.decodeAudioData(await (await fetch('/assets/audio/icoinl.wav')).arrayBuffer());
  for(const mode of ['media-keep','game-media','buffer']){
   const chunks=[],node=new AudioWorkletNode(ctx,'capture');node.port.onmessage=e=>chunks.push(e.data);node.connect(ctx.destination);
   let media,source,record,audio,ended;
   if(mode==='buffer') {source=ctx.createBufferSource();source.buffer=buffer;source.connect(node);source.onended=()=>{ended=ctx.currentTime;};source.start();}
   else {
    if(mode==='game-media'){
     audio=new GameAudio({master:1,settings:{gains:{},spatial:{},levels:{}},createContext:()=>ctx});audio.pause();
     record=audio.play({sound:'icoinl.wav',group:'pickup'});media=record.element;
    }else media=new Audio('/assets/audio/icoinl.wav');
    source=ctx.createMediaElementSource(media);source.connect(node);
    media.addEventListener('ended',()=>{ended={clock:ctx.currentTime,time:media.currentTime,duration:media.duration,paused:media.paused};});
    if(audio)audio.resume();else await media.play();
   }
   const started=ctx.currentTime;await wait(950);
   results.push({mode,sampleRate:ctx.sampleRate,started,ended,chunks:chunks.map(c=>({start:c.start,data:Array.from(c.data)}))});
   audio?.reset();media?.pause();source.disconnect();node.disconnect();
  }
  await ctx.close();return {duration:buffer.duration,length:buffer.length,reference:Array.from(buffer.getChannelData(0)),results};
 });
 await writeFile(path.join(dir,'captured-audio.json'),JSON.stringify({...result,errors}));
 console.log(JSON.stringify({duration:result.duration,length:result.length,errors,runs:result.results.map(r=>({mode:r.mode,ended:r.ended,frames:r.chunks.length*128}))},null,2));
}finally{await browser?.close();await new Promise(r=>server.close(r));}
