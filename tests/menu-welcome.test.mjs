import test from 'node:test';
import assert from 'node:assert/strict';
import {MenuAudio} from '../source/menu-audio.js';
const tick=()=>new Promise(r=>setImmediate(r));
function setup(blocked=false){
 const clips=[];const music={keyed:new Map(),playMusic(o){if(!o.stop)this.keyed.set('music',o);else this.keyed.clear();},resume(){},pause(){}};
 const menu=new MenuAudio({music,createAudio:url=>{const c={url,plays:0,load(){},pause(){},play(){this.plays++;return blocked?Promise.reject(Object.assign(new Error(),{name:'NotAllowedError'})):Promise.resolve();}};clips.push(c);return c;}});
 return {menu,clips,unlock:()=>blocked=false};
}
test('welcome is once per menu display, never looped or repeated by focus',async()=>{
 const {menu,clips}=setup();const first=menu.showMenu();assert.equal(clips[0].url,'assets/voices/rcmn9.wav');assert.ok(!clips[0].loop);
 clips[0].onended();await first;menu.resume();assert.equal(clips.length,1);assert.equal(clips[0].plays,1);
 const second=menu.showMenu();assert.equal(clips.length,2);clips[1].onended();await second;
});
test('browser-blocked welcome retries after gesture and cancels on leaving menu',async()=>{
 const {menu,clips,unlock}=setup(true);const first=menu.showMenu();await tick();assert.ok(menu.voice);
 unlock();menu.resume();assert.equal(clips[0].plays,2);clips[0].onended();assert.equal(await first,true);
 const second=menu.showMenu();menu.stop();assert.equal(await second,false);menu.resume();assert.equal(clips[1].plays,1);
});
