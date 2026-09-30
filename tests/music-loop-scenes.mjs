// Render complete original music files across two wrap boundaries. This checks
// actual PCM output, including the final sample, rather than just loop=true.
import {chromium,_electron as electron} from 'playwright';
import {spawn} from 'node:child_process';
import {mkdir,readFile,writeFile} from 'node:fs/promises';
import {resolve} from 'node:path';
import assert from 'node:assert/strict';

process.env.TMPDIR='current_work';
const output=resolve('current_work',`music-loop-render-${new Date().toISOString().replace(/[:.]/g,'-')}`);
await mkdir(output,{recursive:true});
const tracks=[];
const names=[];
for(let i=0;i<5;i++){
  const level=JSON.parse(await readFile(`data/levels/lvl0${i}a/level.json`,'utf8'));
  names.push(level.entities.find(e=>e.classname==='EffectMusic').MusicAmbient.toLowerCase());
}
names.push('endbosses.wav','spookkort3.wav');
for(const name of names){
  const wav=await readFile(`assets/audio/${name}`);let channels,rate,align,bytes;
  for(let p=12;p+8<=wav.length;){
    const tag=wav.toString('ascii',p,p+4),size=wav.readUInt32LE(p+4);
    if(tag==='fmt '){assert.equal(wav.readUInt16LE(p+8),1);channels=wav.readUInt16LE(p+10);rate=wav.readUInt32LE(p+12);align=wav.readUInt16LE(p+20);}
    if(tag==='data')bytes=size;
    p+=8+size+(size&1);
  }
  tracks.push({name,channels,rate,frames:bytes/align});
}
const server=spawn(process.execPath,['tools/serve.mjs'],{env:{...process.env,PORT:'4306'},stdio:['ignore','pipe','inherit']});
await new Promise((done,fail)=>{server.stdout.once('data',done);server.once('error',fail);});
let browser,desktop;
try {
  let page;
  if(process.argv.includes('--electron')) {
    desktop=await electron.launch({args:['.','--ozone-platform=x11',`--user-data-dir=${resolve('current_work/music-loop-electron-render-profile')}`],
      cwd:process.cwd(),env:{...process.env,TMPDIR:'current_work'}});
    page=await desktop.firstWindow();await page.waitForFunction(()=>window.__redcat);
  } else {
    browser=await chromium.launchPersistentContext(resolve('current_work/music-loop-render-profile'),{
      executablePath:process.env.CHROME_PATH||'/usr/bin/google-chrome',headless:true,args:['--use-angle=gl']});
    page=await browser.newPage();await page.goto('http://127.0.0.1:4306/?skipIntro');
  }
  const errors=[];page.on('pageerror',e=>errors.push(e.stack));
  const report=await page.evaluate(async tracks=>{
    const {GameAudio}=await import('./src/audio.js');const results=[];
    for(const track of tracks)for(const renderRate of [22050,44100,48000]){
      const outputFrames=Math.floor(track.frames*renderRate/track.rate);
      const offline=new OfflineAudioContext(track.channels,outputFrames*2+256,renderRate);
      const sources=[];
      // Offline contexts accept scheduled sources before rendering; expose
      // their graph through the mixer's ordinary AudioContext dependency.
      const context={state:'running',get currentTime(){return offline.currentTime;},destination:offline.destination,
        createGain:()=>offline.createGain(),decodeAudioData:bytes=>offline.decodeAudioData(bytes),
        createBufferSource:()=>{const s=offline.createBufferSource();sources.push(s);return s;}};
      const audio=new GameAudio({master:1,settings:{gains:{},spatial:{}},createContext:()=>context});
      const record=audio.playMusic({sound:track.name});await record.element.play();
      const decoded=record.element.buffer,source=record.element.source;
      if(!decoded||!source)throw new Error(`Music did not decode: ${track.name}`);
      let ends=0;const onended=source.onended;source.onended=()=>{ends++;onended?.();};
      const rendered=await offline.startRendering();let maxError=0,nonzero=0,mismatches=0;const firstMismatches=[];
      for(let channel=0;channel<track.channels;channel++){
        const expected=decoded.getChannelData(channel),actual=rendered.getChannelData(channel);
        for(let i=0;i<actual.length;i++){
          maxError=Math.max(maxError,Math.abs(actual[i]-expected[i%decoded.length]));
          if(Math.abs(actual[i]-expected[i%decoded.length])>1e-6){
            mismatches++;if(firstMismatches.length<8)firstMismatches.push({channel,i,actual:actual[i],nearby:Array.from({length:5},(_,j)=>expected[(i+j-2+decoded.length)%decoded.length])});
          }
          if(actual[i]!==0)nonzero++;
        }
      }
      results.push({...track,renderRate,decodedFrames:decoded.length,duration:decoded.duration,renderedFrames:rendered.length,
        loop:source.loop,loopStart:source.loopStart,loopEnd:source.loopEnd,sources:sources.length,ends,maxError,nonzero,mismatches,firstMismatches});
      audio.reset();
    }
    return {origin:location.origin,userAgent:navigator.userAgent,results};
  },tracks);
  report.errors=errors;await writeFile(resolve(output,'report.json'),JSON.stringify(report,null,2));
  assert.deepEqual(errors,[]);
  for(const result of report.results){
    assert.equal(result.decodedFrames,Math.floor(result.frames*result.renderRate/result.rate),`${result.name}: decode every PCM frame`);
    assert.equal(result.renderedFrames,result.decodedFrames*2+256);
    assert.equal(result.loop,true);assert.equal(result.loopStart,0);
    assert.ok(result.loopEnd<result.duration&&result.loopEnd>(result.decodedFrames-1)/result.renderRate,'include final frame without boundary rounding glitch');
    assert.equal(result.sources,1,'a single source repeats without media seeks/restarts');assert.equal(result.ends,0);
    assert.ok(result.nonzero>result.frames);assert.ok(result.maxError<1e-6,`${result.name}: uninterrupted sample sequence (${result.maxError})`);
  }
  console.log(JSON.stringify({output,...report},null,2));
}finally {await browser?.close();await desktop?.close();server.kill();}
