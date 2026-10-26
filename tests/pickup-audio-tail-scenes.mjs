import assert from 'node:assert/strict';
import {createServer} from 'node:http';
import {readFile,mkdir,writeFile} from 'node:fs/promises';
import {createHash} from 'node:crypto';
import path from 'node:path';
import {fileURLToPath} from 'node:url';
import {chromium,_electron} from 'playwright';

const root=fileURLToPath(new URL('../',import.meta.url));
const evidence=path.join(root,'temp_work/icoinl-tail-2026-10-13');
const electron=process.argv.includes('--electron');
process.chdir(root);await mkdir(path.join(evidence,'browser-tmp'),{recursive:true});
const tmp='/proc/self/cwd/temp_work/icoinl-tail-2026-10-13/browser-tmp';
const env={...process.env,TMPDIR:tmp,TMP:tmp,TEMP:tmp};
const worklet=`class Capture extends AudioWorkletProcessor {process(inputs,outputs){const a=inputs[0]?.[0];if(a){outputs[0][0].set(a);this.port.postMessage(a);}return true;}}registerProcessor('capture',Capture);`;
const server=createServer(async(req,res)=>{try{
  const url=new URL(req.url,'http://localhost');
  if(url.pathname==='/'){res.setHeader('Content-Type','text/html');res.end('<button id="start">Test pickup audio</button>');return;}
  if(url.pathname==='/capture.js'){res.setHeader('Content-Type','text/javascript');res.end(worklet);return;}
  if(!/^\/(source\/[^/]+\.js|assets\/audio\/icoin[sml]\.wav)$/.test(url.pathname))throw Error('Only audio test resources allowed');
  res.setHeader('Content-Type',url.pathname.endsWith('.js')?'text/javascript':'audio/wav');res.end(await readFile(path.join(root,url.pathname)));
}catch{res.writeHead(404).end();}});
await new Promise(r=>server.listen(0,'127.0.0.1',r));
let browser,app;
try{
  const url=`http://127.0.0.1:${server.address().port}/`;
  let page;
  if(electron){
    const fixture=path.join(evidence,'electron-tail-probe.cjs');
    await writeFile(fixture,`const {app,BrowserWindow}=require('electron');\napp.setPath('userData',${JSON.stringify(path.join(evidence,'electron-profile'))});\napp.setPath('temp',${JSON.stringify(path.join(evidence,'browser-tmp'))});\napp.commandLine.appendSwitch('autoplay-policy','no-user-gesture-required');\napp.whenReady().then(()=>{const w=new BrowserWindow({width:640,height:360});w.loadURL(${JSON.stringify(url)});});\n`);
    app=await _electron.launch({args:[fixture,'--ozone-platform=wayland'],env});page=await app.firstWindow();
  }else{
    browser=await chromium.launchPersistentContext(path.join(evidence,'verification-profile'),{executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--autoplay-policy=no-user-gesture-required'],env});page=await browser.newPage();await page.goto(url);
  }
  const errors=[];page.on('pageerror',e=>errors.push(e.stack));page.on('response',r=>{if(r.status()>=400)errors.push(r.url());});await page.click('#start');
  const results=await page.evaluate(async()=>{
    const {GameAudio}=await import('/source/audio.js'),{GameplayAudio}=await import('/source/gameplay-audio.js');
    const context=new AudioContext({sampleRate:44100});await context.audioWorklet.addModule('/capture.js');await context.resume();
    const audio=new GameAudio({master:1,createContext:()=>context}),router=new GameplayAudio(audio),results=[];
    const wait=ms=>new Promise(r=>setTimeout(r,ms));
    try{
      for(let type=1;type<=3;type++){
        audio.pause();
        router.handle({type:'pickup',id:'bag',sound:'ICoinM.wav'},{objects:[{id:'bag',subtype:'coin',entity:{Type:String(type)}}]});
        const record=[...audio.sounds][0],element=record.element;
        if(!element.nativeBuffered)throw Error('Pickup still uses media playback');
        const reference=await context.decodeAudioData(await(await fetch('/assets/audio/'+record.name)).arrayBuffer());
        const chunks=[],capture=new AudioWorkletNode(context,'capture');capture.port.onmessage=e=>chunks.push(e.data);capture.connect(context.destination);
        element.output.disconnect();element.output.connect(capture);
        let ended;
        await new Promise((resolve,reject)=>{
          const timer=setTimeout(()=>reject(Error('Pickup completion timeout')),3000),complete=element.onended,fail=element.onerror;
          element.onended=()=>{ended={time:element.currentTime,duration:element.duration};complete();clearTimeout(timer);resolve();};
          element.onerror=()=>{fail();clearTimeout(timer);reject(Error('Pickup decode failed'));};audio.resume();
        });
        await wait(60);capture.disconnect();
        const actual=new Float32Array(chunks.reduce((n,c)=>n+c.length,0));let cursor=0;for(const chunk of chunks){actual.set(chunk,cursor);cursor+=chunk.length;}
        const ref=reference.getChannelData(0),gain=element.volume,firstRef=ref.findIndex(v=>Math.abs(v*gain)>1e-6),firstActual=actual.findIndex(v=>Math.abs(v)>1e-6),offset=firstActual-firstRef;
        let maxError=0,tailError=0,tailEnergy=0;
        for(let i=0;i<ref.length;i++){
          const diff=Math.abs((actual[offset+i]??0)-ref[i]*gain);maxError=Math.max(maxError,diff);
          if(i>=ref.length-100){tailError=Math.max(tailError,diff);tailEnergy+=(actual[offset+i]??0)**2;}
        }
        results.push({sound:record.name,sampleRate:context.sampleRate,samples:ref.length,ended,offset,gain,maxError,tailError,tailRms:Math.sqrt(tailEnergy/100),pending:audio.pickupsPending});
      }
      return results;
    }finally{audio.reset();await context.close();}
  });
  for(const row of results){
    assert.equal(row.ended.time,row.ended.duration);assert.equal(row.pending,false);assert.ok(row.gain>0);
    assert.ok(row.maxError<1e-6,`${row.sound}: full waveform mismatch ${row.maxError}`);
    assert.ok(row.tailError<1e-6,`${row.sound}: final 100 samples clipped`);assert.ok(row.tailRms>0);
  }
  assert.equal(results[2].samples,4089*4);assert.deepEqual(errors,[]);
  const hashes={};for(const row of results)hashes[row.sound]=createHash('sha256').update(await readFile(path.join(root,'assets/audio',row.sound))).digest('hex');
  await writeFile(path.join(evidence,`verified-${electron?'electron-wayland':'browser'}.json`),JSON.stringify({passed:true,results,errors,hashes},null,2)+'\n');
  console.log(`PASS ${electron?'Electron Wayland':'browser'}: actual pickup router and full rendered S/M/L waveforms match original decoded PCM, including final 100 samples.`,results);
}finally{await app?.close();await browser?.close();await new Promise(r=>server.close(r));}
