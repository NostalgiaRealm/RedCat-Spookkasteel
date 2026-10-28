import {connect} from './cdp.mjs';import assert from 'node:assert/strict';import fs from 'node:fs/promises';
const c=await connect(),report={kind:'Current debug APK real Android WebView touch/media checks',checks:[],samples:{}};
const wait=async(e,ms=30000)=>{let end=Date.now()+ms;while(Date.now()<end){const v=await c.evaluate(e);if(v)return v;await new Promise(r=>setTimeout(r,100));}throw Error('Timeout '+e)};
const at=async s=>c.evaluate(`(()=>{const e=document.querySelector(${JSON.stringify(s)});e.scrollIntoView({block:'center'});const r=e.getBoundingClientRect();return {x:r.x+r.width/2,y:r.y+r.height/2,radiusX:2,radiusY:2,force:1,id:1}})()`);
const touch=(type,touchPoints)=>c.call('Input.dispatchTouchEvent',{type,touchPoints});
const tap=async s=>{await touch('touchStart',[await at(s)]);await touch('touchEnd',[])};
const pass=s=>{report.checks.push(s);console.log('PASS',s)};
try{
if(await c.evaluate(`window.__redcat.mode==='menu'`)){
for(let i=0;i<4&&await c.evaluate(`document.querySelector('#native-start').hidden`);i++){await tap('#native-next');await new Promise(r=>setTimeout(r,350));}
await tap('#native-start');await wait(`window.__redcat.mode==='playing'`,60000);pass('Continue restores existing Android save after app update');}
if(await c.evaluate(`!!window.__redcat.gameplay.scripts.cutscene`)){await touch('touchStart',[await at('#touch-skip')]);await new Promise(r=>setTimeout(r,2300));await touch('touchEnd',[]);}
await wait(`!window.__redcat.gameplay.scripts.cutscene && !window.__redcat.touchControls.context.cutscene`);pass('Touch hold skips authored cutscene');
const before=await c.evaluate(`({p:[...window.__redcat.world.player.position],yaw:window.__redcat.world.yaw})`);
const move=await at('#touch-move'), look=await at('#touch-look');look.id=2;
await touch('touchStart',[move]);await touch('touchStart',[move,look]);const moved={...move,y:move.y-45},looked={...look,x:look.x-45};await touch('touchMove',[moved,looked]);
await new Promise(r=>setTimeout(r,1000));const during=await c.evaluate(`({input:window.__redcat.readInput(),p:[...window.__redcat.world.player.position],yaw:window.__redcat.world.yaw})`);await touch('touchEnd',[]);
assert.ok(during.input.forward>0);assert.ok(Math.hypot(...before.p.map((v,i)=>v-during.p[i]))>1);assert.notEqual(before.yaw,during.yaw);report.samples.multitouch={before,during};pass('Two-finger movement and camera look operate simultaneously');
const attack=await at('#touch-attack');await touch('touchStart',[attack]);await new Promise(r=>setTimeout(r,350));assert.equal(await c.evaluate(`window.__redcat.readInput().attack`),true);await touch('touchEnd',[]);pass('Touch shooting reaches gameplay input');
const jump=await at('#touch-jump');await touch('touchStart',[jump]);assert.equal(await c.evaluate(`window.__redcat.readInput().jump`),true);await touch('touchEnd',[]);pass('Touch jump reaches gameplay input');
report.samples.media=await c.evaluate(`(async()=>{const r=await fetch('assets/media/intronl.webm',{headers:{Range:'bytes=0-31'}});const bytes=new Uint8Array(await r.arrayBuffer());const a=window.__redcat.audio;return {status:r.status,range:r.headers.get('content-range'),bytes:bytes.length,mime:r.headers.get('content-type'),context:a.context?.state,sounds:[...a.sounds].slice(0,6).map(s=>({src:s.element?.currentSrc,paused:s.element?.paused,time:s.element?.currentTime,error:s.element?.error?.message})),privacy:!document.querySelector('#android-privacy').hidden}})()`);
assert.equal(report.samples.media.status,206);assert.equal(report.samples.media.bytes,32);assert.equal(report.samples.media.context,'running');assert.equal(report.samples.media.privacy,true);pass('Offline WebView media range returns206; game audio runs and Android privacy is available');
}catch(e){report.failure=e.stack;console.error(e)}finally{report.exceptions=c.events.filter(e=>e.method==='Runtime.exceptionThrown');await fs.writeFile(new URL('./touch-and-media-final.json',import.meta.url),JSON.stringify(report,null,2));c.close()}
if(report.failure)process.exitCode=1;
