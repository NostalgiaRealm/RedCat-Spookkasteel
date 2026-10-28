import {connect} from './cdp.mjs';
import assert from 'node:assert/strict';
import fs from 'node:fs/promises';
import {execFileSync} from 'node:child_process';
const out=new URL('./',import.meta.url);
const adb=(...args)=>execFileSync(`${process.env.HOME}/Android/Sdk/platform-tools/adb`,['-s','emulator-5580',...args],{encoding:'utf8'}).trim();
const c=await connect(),report={kind:'Android 16 API36 x86_64 debug APK on isolated emulator',webview:adb('shell','dumpsys','webviewupdate'),checks:[],samples:{}};
const wait=async(expression,ms=45000)=>{const end=Date.now()+ms;while(Date.now()<end){const value=await c.evaluate(expression);if(value)return value;await new Promise(r=>setTimeout(r,150));}throw new Error(`Timed out: ${expression}`);};
const tap=async(selector)=>{const r=await c.evaluate(`(()=>{const e=document.querySelector(${JSON.stringify(selector)});if(!e)throw new Error('Missing element');e.scrollIntoView({block:'center'});const r=e.getBoundingClientRect();return {x:r.x+r.width/2,y:r.y+r.height/2};})()`);await c.call('Input.dispatchTouchEvent',{type:'touchStart',touchPoints:[{...r,radiusX:2,radiusY:2,force:1,id:1}]});await c.call('Input.dispatchTouchEvent',{type:'touchEnd',touchPoints:[]});};
const pass=name=>{report.checks.push(name);console.log('PASS',name);};
try{
 await wait(`window.__redcat && window.__redcat.mode==='menu'`);
 report.samples.offline=adb('shell','settings','get','global','wifi_on');assert.equal(report.samples.offline,'0');
 report.samples.app=await c.evaluate(`({origin:location.origin,bridge:!!window.RedCatAndroid,mode:window.__redcat.mode,touch:window.__redcat.touchEnabled})`);
 assert.equal(report.samples.app.bridge,true);assert.equal(report.samples.app.touch,true);pass('Offline local origin and native touch bridge');
 for(let n=0;n<4 && await c.evaluate(`document.querySelector('#native-start').hidden`);n++){await tap('#native-next');await new Promise(r=>setTimeout(r,500));}
 await wait(`!document.querySelector('#native-start').hidden`);
 await tap('#native-start');await wait(`window.__redcat.mode==='playing' && window.__redcat.world.geometryStream.readyForView`,90000);
 report.samples.level=await c.evaluate(`({mode:window.__redcat.mode,level:window.__redcat.levelIndex,position:[...window.__redcat.world.player.position],canvas:{w:document.getElementById('game').width,h:document.getElementById('game').height},audio:window.__redcat.audio.context?.state})`);
 pass('Original menu starts Level 1 offline with WebGL and streamed assets');
 adb('shell','input','keyevent','KEYCODE_HOME');
 await wait(`window.__redcat.mode==='paused' && window.__redcat.audio.paused`);
 const hidden=await c.evaluate(`({time:window.__redcat.gameplay.scripts.time,mode:window.__redcat.mode,audio:window.__redcat.audio.context?.state})`);
 await new Promise(r=>setTimeout(r,500));assert.equal(await c.evaluate(`window.__redcat.gameplay.scripts.time`),hidden.time);
 adb('shell','am','start','-n','com.nostalgiarealm.redcatspookkasteel.debug/com.nostalgiarealm.redcatspookkasteel.MainActivity');
 await new Promise(r=>setTimeout(r,500));assert.equal(await c.evaluate(`window.__redcat.mode`),'paused');
 report.samples.lifecycle=hidden;pass('Home freezes simulation/audio; foreground stays paused');
 await tap('#resume');await wait(`window.__redcat.mode==='playing' && !window.__redcat.audio.paused`);
 adb('shell','input','keyevent','KEYCODE_BACK');await wait(`window.__redcat.mode==='paused'`);pass('Native Android Back opens pause menu');
 await tap('#save');await wait(`!!localStorage.getItem('redcat.save.v1')`);
 report.samples.save=await c.evaluate(`({bytes:localStorage.getItem('redcat.save.v1').length,players:window.__redcat.profiles?.list?.()?.length})`);
 pass('Android local save written through pause menu');
 await tap('#return-menu');await wait(`window.__redcat.mode==='menu'`);
 adb('shell','settings','put','system','accelerometer_rotation','0');adb('shell','settings','put','system','user_rotation','1');
 await wait(`innerWidth>innerHeight`);report.samples.landscape=await c.evaluate(`({w:innerWidth,h:innerHeight,mode:window.__redcat.mode})`);pass('Rotation retains running app/menu');
 await tap('#open-players');await wait(`!!document.querySelector('dialog[open]')`);
 report.samples.players=await c.evaluate(`document.body.innerText.slice(-4000)`);
}catch(e){report.failure=e.stack;console.error(e);}finally{report.events=c.events.filter(e=>e.method==='Runtime.exceptionThrown');await fs.writeFile(new URL('debug-runtime-smoke.json',out),JSON.stringify(report,null,2));c.close();}
if(report.failure)process.exitCode=1;
