import * as THREE from 'three';
import {CoinTestWorld,PICKUPS,TOTAL_SCORE} from './room.js';
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
let world,gameplay,ready=false,paused=true,mouseAttack=false,resetting=false,cameraMode='third';
audio.pause();

function status(){
  const count=gameplay.objects.filter(o=>o.kind==='pickup'&&o.collected).length;
  $('status').textContent=count===PICKUPS.length?`Alles verzameld: ${TOTAL_SCORE} punten. Druk R om opnieuw te testen.`:`${count}/${PICKUPS.length} verzameld · Raak de munten en geldzakjes aan.`;
}
function handleEvent(event){
  gameplayAudio.handle(event,gameplay);
  if(event.type==='pickup'){
    const item=PICKUPS.find(c=>c.id===event.id);
    events.push({id:event.id,score:event.score,money:item.money,sound:item.sound,time:gameplay.time});status();
  }
}
function resize(){
  renderer.setSize(innerWidth,innerHeight,false);
  if(world){world.camera.aspect=innerWidth/innerHeight;world.camera.updateProjectionMatrix();}
}
function pause(){
  if(!ready)return;
  paused=true;keys.clear();mouseAttack=false;audio.pause();document.exitPointerLock?.();
  $('overlay').hidden=false;$('resume').textContent='Verder testen';
  $('overlay-message').textContent='Gepauzeerd. Je kunt alle munten en geldzakjes opnieuw plaatsen met R of Opnieuw.';
}
function resume(){
  if(!ready||resetting)return;
  paused=false;audio.resume();$('overlay').hidden=true;keys.clear();
  // Pointer lock can be refused in a browser. Arrow keys still turn the view.
  canvas.requestPointerLock?.()?.catch(()=>{});
}
async function reset(){
  if(!ready||resetting)return;
  resetting=true;keys.clear();mouseAttack=false;events.length=0;
  // Stop only this lab's sounds; no localStorage or campaign save APIs exist.
  for(const record of [...audio.sounds])audio.release(record);
  world.dispose();await load();resetting=false;
}
async function load(){
  world=new CoinTestWorld(renderer,{fov:70,camera:cameraMode,sensitivity:1});
  await world.loadRoom();
  gameplay=new Gameplay(world.level,{deferInit:true,onEvent:handleEvent});
  // A test-only model reassignment: native ItemCoin Type still determines
  // the original reward, effect and S/M/L sound. Never modify shared modules.
  for(const item of PICKUPS.filter(item=>item.actor.startsWith('icoin')))gameplay.objects.find(o=>o.id===item.id).actorFile=item.actor;
  gameplay.state.skill=1; // Ordinary shooting; no power shot or SuperSkippie.
  await world.attachGameplay(gameplay);world.addPickupLabels();
  world.update(0,{});world.updateCamera(1,true);resize();status();
}
function input(){
  return {forward:Number(keys.has('KeyW')||keys.has('ArrowUp'))-Number(keys.has('KeyS')||keys.has('ArrowDown')),
    right:Number(keys.has('KeyD'))-Number(keys.has('KeyA')),
    turn:Number(keys.has('ArrowLeft'))-Number(keys.has('ArrowRight')),
    jump:keys.has('Space'),walk:keys.has('ShiftLeft')||keys.has('ShiftRight'),
    attack:mouseAttack||keys.has('ControlLeft')||keys.has('ControlRight'),use:false};
}
function toggleCamera(){
  if(!ready||paused||resetting||!canTogglePlayerCamera(world))return;
  cameraMode=cameraMode==='third'?'first':'third';
  world.settings.camera=cameraMode;
  world.syncPlayer(0,input());world.updateCamera(1,true);
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
canvas.addEventListener('mousedown',event=>{if(event.button!==0||!ready||paused)return;if(document.pointerLockElement===canvas)mouseAttack=true;else resume();});
addEventListener('mouseup',()=>{mouseAttack=false;});
addEventListener('mousemove',event=>{if(!paused&&document.pointerLockElement===canvas)world.look(event.movementX,event.movementY);});
addEventListener('keydown',event=>{
  if(['Space','ArrowUp','ArrowDown','ArrowLeft','ArrowRight','ControlLeft','ControlRight'].includes(event.code))event.preventDefault();
  if(event.code==='Escape'){event.preventDefault();if(!paused)pause();return;}
  if(event.code==='KeyR'&&!event.repeat){reset().catch(fail);return;}
  if(paused){if(event.code==='Enter'&&!event.repeat)resume();return;}
  if(event.code==='KeyV'){if(!event.repeat)toggleCamera();return;}
  keys.add(event.code);
});
addEventListener('keyup',event=>keys.delete(event.code));
addEventListener('blur',pause);
document.addEventListener('visibilitychange',()=>{if(document.hidden)pause();});
document.addEventListener('pointerlockchange',()=>{if(!document.pointerLockElement&&!paused)pause();});
addEventListener('resize',resize);

try{
  await Promise.all([load(),hud.ready]);ready=true;
  $('resume').disabled=false;$('reset').disabled=false;
  $('overlay-message').textContent=`Vergelijk drie munten met de originele geldzakjes ernaast. Verzamel alle ${PICKUPS.length} voor ${TOTAL_SCORE} punten.`;
  // Local-only diagnostics for this isolated scene. They never touch saves.
  window.__coinTest={get world(){return world;},get gameplay(){return gameplay;},hud,audio,events,reset,pause,
    snapshot:()=>({paused,position:[...world.player.position],score:gameplay.state.score,
      pickups:PICKUPS.map(item=>({id:item.id,type:item.type,money:item.money,score:item.score,sound:item.sound,actor:gameplay.objects.find(o=>o.id===item.id).actorFile,collected:gameplay.objects.find(o=>o.id===item.id).collected}))})};
  requestAnimationFrame(frame);
}catch(error){fail(error);}
