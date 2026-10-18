import * as THREE from 'three';
import {ActorTestWorld,EXHIBITS} from './room.js';
import {Gameplay} from './native/gameplay.js';
import {OriginalHud} from './native/hud.js';
import {GameAudio} from './native/audio.js';
import {GameplayAudio} from './native/gameplay-audio.js';
import {canTogglePlayerCamera} from './native/camera-control.js';

const $=id=>document.getElementById(id),canvas=$('scene');
const renderer=new THREE.WebGLRenderer({canvas,antialias:true});
renderer.outputColorSpace=THREE.SRGBColorSpace;
renderer.setPixelRatio(Math.min(devicePixelRatio||1,2));
const hud=new OriginalHud($('hud')),audio=new GameAudio({master:.6});
const gameplayAudio=new GameplayAudio(audio),keys=new Set(),events=[];
let world,gameplay,ready=false,paused=true,mouseAttack=false,resetting=false;
let cameraMode='third';
audio.pause();

function status(){
  const e=world.exhibits[world.selectedIndex],clip=e.clips.find(c=>c.name===e.clip);
  $('status').textContent=`${e.pairIndex+1}/13 · ${e.role==='unused'?'Ongebruikt':'In het spel'} · ${e.actor==='max-turret'?'Max met geschut':e.actor+'.act'} · ${clip?`${clip.name} (${clip.duration.toFixed(3)} s)`:'Vaste pose: geen ingebouwde animaties'}`;
  $('model').value=String(world.selectedIndex);
  $('clip').replaceChildren(...e.clips.map(c=>new Option(`${c.name} · ${c.duration.toFixed(3)} s`,c.name)));
  if(!e.clips.length)$('clip').add(new Option('Geen animaties',''));
  $('clip').value=e.clip||'';$('clip').disabled=!e.clips.length;
  $('play').disabled=!e.clips.length;$('loop').disabled=!e.clips.length;$('loop').checked=e.loop;
  $('freeze').textContent=world.animationsPaused?'Animaties hervatten (P)':'Animaties pauzeren (P)';
}
function select(index,visit=true){if(resetting||!ready)return;world.selectExhibit(index,visit);status();}
function nextClip(){
  if(resetting||!ready)return;
  const e=world.exhibits[world.selectedIndex];if(!e.clips.length)return;
  const index=(e.clips.findIndex(c=>c.name===e.clip)+1)%e.clips.length;
  world.playClip(e.clips[index].name,e.loop);status();
}
function freeze(){if(resetting||!ready)return;world.animationsPaused=!world.animationsPaused;status();}
function handleEvent(event){gameplayAudio.handle(event,gameplay);events.push(event);if(events.length>100)events.shift();}
function resize(){
  renderer.setSize(innerWidth,innerHeight,false);
  if(world){world.camera.aspect=innerWidth/innerHeight;world.camera.updateProjectionMatrix();}
}
function toggleCamera(){
  if(!ready||paused||resetting||!canTogglePlayerCamera(world))return;
  cameraMode=cameraMode==='third'?'first':'third';
  world.settings.camera=cameraMode;
  world.syncPlayer(0,input());world.updateCamera(1,true);
}
function pause(){
  if(!ready)return;
  paused=true;keys.clear();mouseAttack=false;audio.pause();document.exitPointerLock?.();
  $('overlay').hidden=false;$('resume').textContent='Verder testen';
  $('overlay-message').textContent='Gepauzeerd. Kies een model en een originele animatie. Verder testen keert terug naar RedCat.';
}
function resume(){
  if(!ready||resetting)return;
  document.activeElement?.blur();
  paused=false;audio.resume();$('overlay').hidden=true;keys.clear();
  // Pointer lock can be refused in a browser. Arrow keys still turn the view.
  canvas.requestPointerLock?.()?.catch(()=>{});
}
async function reset(){
  if(!ready||resetting)return;
  resetting=true;for(const control of document.querySelectorAll('button,select,input'))control.disabled=true;keys.clear();mouseAttack=false;events.length=0;
  // Stop only this lab's sounds; no localStorage or campaign save APIs exist.
  for(const record of [...audio.sounds])audio.release(record);
  try{world.dispose();await load();}
  catch(error){ready=false;throw error;}
  finally{
    resetting=false;
    if(ready){for(const control of document.querySelectorAll('button,select,input'))control.disabled=false;status();}
  }
}
async function load(){
  world=new ActorTestWorld(renderer,{fov:70,camera:cameraMode,sensitivity:1});
  await world.loadRoom();
  gameplay=new Gameplay(world.level,{deferInit:true,onEvent:handleEvent});
  gameplay.state.skill=1;
  await world.attachGameplay(gameplay);await world.loadExhibits();world.selectExhibit(0);
  world.update(0,{});world.updateCamera(1,true);resize();status();
}
function input(){
  return {forward:Number(keys.has('KeyW')||keys.has('ArrowUp'))-Number(keys.has('KeyS')||keys.has('ArrowDown')),
    right:Number(keys.has('KeyD'))-Number(keys.has('KeyA')),
    turn:Number(keys.has('ArrowLeft'))-Number(keys.has('ArrowRight')),
    jump:keys.has('Space'),walk:keys.has('ShiftLeft')||keys.has('ShiftRight'),
    attack:mouseAttack||keys.has('ControlLeft')||keys.has('ControlRight'),use:false};
}
function fail(error){
  console.error(error);paused=true;audio.pause();$('overlay').hidden=false;
  $('overlay-message').textContent=`Laden mislukt: ${error.message}`;$('resume').disabled=true;
}
let previous=performance.now();
function frame(now){
  const dt=Math.min(.05,Math.max(0,(now-previous)/1000));previous=now;
  try{
    if(ready&&!resetting){
      if(!paused){const controls=input();world.update(dt,controls);gameplayAudio.update(dt,world,gameplay,controls);audio.update(dt,world.camera.position.toArray());}
      world.render();hud.render(gameplay.state,0,null,innerWidth,innerHeight);
    }
  }catch(error){fail(error);return;}
  requestAnimationFrame(frame);
}
$('resume').addEventListener('click',resume);
$('reset').addEventListener('click',()=>reset().catch(fail));
$('inspect').addEventListener('click',pause);
$('model').replaceChildren(...EXHIBITS.map((e,i)=>new Option(`${e.pairIndex+1}. ${e.role==='unused'?'Ongebruikt':'In het spel'}: ${e.label} (${e.actor})`,String(i))));
$('model').addEventListener('change',()=>select(Number($('model').value)));
$('visit').addEventListener('click',()=>{select(Number($('model').value));resume();});
$('clip').addEventListener('change',()=>{world.playClip($('clip').value,$('loop').checked);status();});
$('play').addEventListener('click',()=>{world.playClip($('clip').value,$('loop').checked);world.animationsPaused=false;status();resume();});
$('loop').addEventListener('change',()=>{world.playClip($('clip').value,$('loop').checked);status();});
$('freeze').addEventListener('click',freeze);
canvas.addEventListener('mousedown',event=>{if(event.button!==0||!ready||paused)return;if(document.pointerLockElement===canvas)mouseAttack=true;else resume();});
addEventListener('mouseup',()=>{mouseAttack=false;});
addEventListener('mousemove',event=>{if(!paused&&document.pointerLockElement===canvas)world.look(event.movementX,event.movementY);});
addEventListener('keydown',event=>{
  if(resetting||!ready)return;
  if(event.code==='Escape'){event.preventDefault();if(!paused)pause();return;}
  if(event.target.matches('select,input,button'))return;
  if(['Space','ArrowUp','ArrowDown','ArrowLeft','ArrowRight','ControlLeft','ControlRight'].includes(event.code))event.preventDefault();
  if(event.code==='KeyR'&&!event.repeat){reset().catch(fail);return;}
  if(paused){if(event.code==='Enter'&&!event.repeat)resume();return;}
  if(event.code==='KeyV'){if(!event.repeat)toggleCamera();return;}
  if(!event.repeat){
    if(/^Digit[1-9]$/.test(event.code)){select(Number(event.code.slice(-1))-1);return;}
    if(event.code==='BracketLeft'){select(world.selectedIndex-1);return;}
    if(event.code==='BracketRight'){select(world.selectedIndex+1);return;}
    if(event.code==='KeyE'){nextClip();return;}
    if(event.code==='KeyP'){freeze();return;}
  }
  keys.add(event.code);
});
addEventListener('keyup',event=>keys.delete(event.code));
addEventListener('blur',pause);
document.addEventListener('visibilitychange',()=>{if(document.hidden)pause();});
document.addEventListener('pointerlockchange',()=>{if(!document.pointerLockElement&&!paused)pause();});
addEventListener('resize',resize);

for(const control of document.querySelectorAll('button,select,input'))control.disabled=true;
try{
  await Promise.all([load(),hud.ready]);ready=true;
  for(const control of document.querySelectorAll('button,select,input'))control.disabled=false;status();
  $('overlay-message').textContent='Vergelijk 13 ongebruikte modellen met hun tegenhangers uit het spel. Links staat het ongebruikte model, rechts het gebruikte model. Loop rond met RedCat of kies hieronder een model.';
  // Local-only diagnostics for this isolated scene. They never touch saves.
  window.__actorTest={get world(){return world;},get gameplay(){return gameplay;},hud,audio,events,reset,pause,select,nextClip,freeze,
    snapshot:()=>({paused,position:[...world.player.position],score:gameplay.state.score,
      actors:world.exhibits.map(e=>({id:e.id,actor:e.actor,role:e.role,pairIndex:e.pairIndex,parts:e.parts.map(p=>p.name),clip:e.clip,clips:e.clips,visible:e.root.visible,position:e.root.position.toArray()}))})};
  requestAnimationFrame(frame);
}catch(error){fail(error);}
