import test from 'node:test';
import assert from 'node:assert/strict';
import {MenuAudio,LEVEL_MENU_VOICES} from '../src/menu-audio.js';
function setup(){
 const clips=[],calls=[];
 const music={keyed:new Map(),playMusic(options){calls.push(options);if(options.stop)this.keyed.clear();else this.keyed.set('music',options);},pause(){},resume(){},setMaster(){}};
 const menu=new MenuAudio({music,createAudio:url=>{const clip={url,plays:0,load(){},play(){this.plays++;return Promise.resolve();},pause(){}};clips.push(clip);return clip;}});
 return {menu,clips,calls};
}
const tick=()=>new Promise(resolve=>setImmediate(resolve));
test('each level plays its requested two clips only after the preceding clip ends',async()=>{
 for(let i=0;i<5;i++){
  const {menu,clips}=setup(),done=menu.selectLevel(i);
  assert.deepEqual(clips.map(c=>c.url),LEVEL_MENU_VOICES[i].map(f=>`assets/voices/${f}`));
  assert.equal(clips[0].plays,1);assert.equal(clips[1].plays,0);
  clips[0].onended();await tick();assert.equal(clips[1].plays,1);
  clips[1].onended();assert.equal(await done,true);
 }
});
test('rapid selection cancels old announcement and prevents stale second clip',async()=>{
 const {menu,clips}=setup();const first=menu.selectLevel(0);const second=menu.selectLevel(4);
 assert.equal(await first,false);assert.equal(clips[1].plays,0);assert.equal(clips[2].plays,1);
 menu.stop();assert.equal(await second,false);assert.equal(clips[3].plays,0);
});
test('menu music is requested once, stops on departure, and can restart',()=>{
 const {menu,calls}=setup();menu.startMusic();menu.startMusic();assert.equal(calls.length,1);assert.equal(calls[0].sound,'menumuz.wav');
 menu.stop();assert.equal(calls[1].stop,true);menu.startMusic();assert.equal(calls[2].sound,'menumuz.wav');
});
test('failed playback resolves level-start cue instead of blocking loading',async()=>{
 const {menu}=setup();menu.createAudio=()=>({load(){},pause(){},play(){return Promise.reject(Object.assign(new Error(),{name:'NotAllowedError'}));}});
 assert.equal(await menu.say(['rcmn32.wav']),false);
});
test('pause/resume and volume changes retain the active announcement',async()=>{
 const {menu,clips}=setup();const done=menu.say(['mn_red24.wav']);menu.pause();menu.setVolume(.2);
 assert.equal(clips[0].volume,.2);assert.ok(menu.voice);menu.resume();assert.equal(clips[0].plays,2);
 clips[0].onended();assert.equal(await done,true);
});
