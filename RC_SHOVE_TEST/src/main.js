import * as THREE from 'three';
import {loadActor} from './actor-loader.js';
import {NativePuzzle, movePlayer, stepVertical, boxAt, playerBox, overlaps, SPEED} from './simulation.js';

const canvas=document.querySelector('#scene'), status=document.querySelector('#status');
const keys=new Set();
let ready=false, jumpRequested=false, yaw=0, pitch=.38, mode='power';
const player={x:0,y:0,z:-230,vy:0,grounded:true};
const scene=new THREE.Scene();scene.background=new THREE.Color('#253843');
scene.fog=new THREE.Fog('#253843',900,1800);
const camera=new THREE.PerspectiveCamera(57,1,.5,2200);
const renderer=new THREE.WebGLRenderer({canvas,antialias:true});
renderer.setPixelRatio(Math.min(window.devicePixelRatio,1.5));
renderer.outputColorSpace=THREE.SRGBColorSpace;
scene.add(new THREE.HemisphereLight(0xe7f2ff,0x52604c,2.1));
const sunlight=new THREE.DirectionalLight(0xffe3b8,2);sunlight.position.set(-150,350,-200);scene.add(sunlight);
const floor=new THREE.Mesh(new THREE.PlaneGeometry(900,900),new THREE.MeshLambertMaterial({color:0x506267}));
floor.rotation.x=-Math.PI/2;scene.add(floor);
const grid=new THREE.GridHelper(880,22,0x95a4a3,0x687c80);grid.position.y=.1;scene.add(grid);
const border=new THREE.LineSegments(new THREE.EdgesGeometry(new THREE.BoxGeometry(880,1,880)),new THREE.LineBasicMaterial({color:0xaab9b9}));scene.add(border);
const pedestal=new THREE.Mesh(new THREE.BoxGeometry(80,90,16),new THREE.MeshLambertMaterial({color:0x8b969b}));
pedestal.position.set(-290,45,-77);scene.add(pedestal);
const stopper=new THREE.Mesh(new THREE.BoxGeometry(200,65,20),new THREE.MeshLambertMaterial({color:0x9aa3a7}));
stopper.position.set(0,32.5,240);scene.add(stopper);
const goal=new THREE.Mesh(new THREE.PlaneGeometry(120,120),new THREE.MeshBasicMaterial({color:0x499477,transparent:true,opacity:.55}));
goal.rotation.x=-Math.PI/2;goal.position.set(0,.3,170);scene.add(goal);

function label(text,position,color='#f6d084'){
  const c=document.createElement('canvas');c.width=512;c.height=96;
  const x=c.getContext('2d');x.fillStyle='#14232be6';x.beginPath();x.roundRect(0,0,512,96,12);x.fill();
  x.font='500 30px sans-serif';x.textAlign='center';x.textBaseline='middle';x.fillStyle=color;x.fillText(text,256,48);
  const sprite=new THREE.Sprite(new THREE.SpriteMaterial({map:new THREE.CanvasTexture(c),depthTest:true}));
  sprite.position.fromArray(position);sprite.scale.set(170,32,1);scene.add(sprite);return sprite;
}

let puzzle,redcat,models=[],button,elapsed=0,previous=performance.now(),accumulator=0;
const bodyFor=model=>{
  const {min,max}=model.bounds;
  return {center:[0,1,2].map(i=>model.group.position.getComponent(i)+(min[i]+max[i])/2),half:[0,1,2].map(i=>(max[i]-min[i])/2),model};
};
const bodiesFor=model=>model.colliders.map(b=>({
  center:[0,1,2].map(i=>model.group.position.getComponent(i)+(b.localMin[i]+b.localMax[i])/2),
  half:[0,1,2].map(i=>(b.localMax[i]-b.localMin[i])/2),model,
}));
const pedestalBody={center:[-290,45,-77],half:[40,45,8]};
const stopperBody={center:[0,32.5,240],half:[100,32.5,10]};

function reset(){
  if(!ready)return;
  puzzle.reset();Object.assign(player,{x:0,y:0,z:mode==='power'?-130:-230,vy:0,grounded:true});
  yaw=0;pitch=.38;keys.clear();jumpRequested=false;elapsed=0;
  for(const model of models){
    model.pushOffset=[0,0,0];model.pushable=mode==='power'&&model.name==='crates03';
    model.base=model.pushable?[0,-model.bounds.min[1],20]:[...model.nativeBase];
    model.group.visible=model.label.visible=mode==='native'||model.pushable;
    model.group.position.fromArray(model.base);model.label.position.set(model.base[0],model.bounds.max[1]+model.base[1]+25,model.base[2]);
    // The native path duration is irrelevant while manually pushing.
    if(model.pushable)model.label.visible=false;
  }
  pedestal.visible=mode==='native';goal.visible=stopper.visible=mode==='power';goal.material.color.setHex(0x499477);
  document.querySelector('#description').textContent=mode==='native'
    ?'De oorspronkelijke groene kratten en aanraakknop uit Het Kasteel, los van het spel.'
    :'Duw zelf een oorspronkelijke krat door de testkamer. Deze power-move is een experiment; de originele actie is niet teruggevonden.';
  document.querySelector('#objective').textContent=mode==='native'
    ?'Loop tegen de rode knop rechts. Zodra hij is ingedrukt, verschuiven de drie krattenstapels.'
    :'Houd Q vast terwijl je tegen de krat loopt. Duw hem naar het groene vak. De grijze wand houdt hem tegen.';
  redcat.root.rotation.y=0;
  status.textContent=mode==='native'?'Loop tegen een krat: hij blijft staan. Loop daarna tegen de rode knop rechts.':'Power-move proef: houd Q + W vast om de krat vooruit te duwen.';
  syncVisuals(0);
}

async function init(){
  const response=await fetch('assets/native-crate-puzzle.json');
  if(!response.ok)throw new Error('De originele kratten ontbreken.');
  const data=await response.json(),maps=new Map(),loader=new THREE.TextureLoader();
  const colliderResponse=await fetch('assets/native-crate-collision-boxes.json');
  if(!colliderResponse.ok)throw new Error('De oorspronkelijke botsingsvormen ontbreken.');
  const collision=await colliderResponse.json();
  await Promise.all(data.textures.map(async info=>{
    const map=await loader.loadAsync('assets/'+info.file);map.flipY=false;map.wrapS=map.wrapT=THREE.RepeatWrapping;
    map.colorSpace=THREE.SRGBColorSpace;map.magFilter=THREE.NearestFilter;maps.set(info.id,map);
  }));
  for(const [index,model] of data.models.entries()){
    const group=new THREE.Group();group.name=model.name;
    for(const part of model.meshes){
      const geometry=new THREE.BufferGeometry();
      geometry.setAttribute('position',new THREE.Float32BufferAttribute(part.positions,3));
      geometry.setAttribute('normal',new THREE.Float32BufferAttribute(part.normals,3));
      geometry.setAttribute('uv',new THREE.Float32BufferAttribute(part.uvs,2));
      // Neutral lab lighting; no castle lightmap/world needs to be loaded.
      group.add(new THREE.Mesh(geometry,new THREE.MeshLambertMaterial({map:maps.get(part.texture),side:THREE.DoubleSide})));
    }
    const bounds={min:model.worldBounds.min.map((v,i)=>v-model.origin[i]),max:model.worldBounds.max.map((v,i)=>v-model.origin[i])};
    const isButton=model.name==='knopstoragecrates01';
    const base=isButton?[-290,32,-90]:[130-index*130,-bounds.min[1],30];
    group.position.fromArray(base);scene.add(group);
    const title=isButton?'AANRAAKKNOP':`${model.name} · ${model.motion.duration} s`;
    const entry={...model,group,bounds,base,nativeBase:[...base],pushOffset:[0,0,0],colliders:collision.models.find(m=>m.name===model.name).solidLeafBoxes,
      label:label(title,[base[0],base[1]+bounds.max[1]+25,base[2]])};
    models.push(entry);if(isButton)button=entry;
  }
  puzzle=new NativePuzzle(data.models);redcat=await loadActor();scene.add(redcat.root);
  // The character's idle feet extend a fraction below its exported origin.
  redcat.root.position.y=-redcat.bounds.min.y;
  ready=true;reset();
  // Local diagnostics for this disposable test scene only; no save-game API.
  window.__shoveTest={player,models,puzzle,reset,step,renderer,scene,camera,
    setMode:value=>{mode=value;document.querySelector('#mode').value=value;reset();},
    snapshot:()=>({mode,player:{...player},active:puzzle.active,time:puzzle.time,completed:puzzle.completed,
      models:models.map(m=>({name:m.name,position:m.group.position.toArray(),base:m.base}))})};
}

function syncVisuals(dt){
  redcat.root.position.set(player.x,player.y-redcat.bounds.min.y,player.z);
  redcat.animator.update(dt);
  const target=new THREE.Vector3(player.x,player.y+55,player.z);
  const distance=340;
  camera.position.set(target.x-Math.sin(yaw)*Math.cos(pitch)*distance,target.y+Math.sin(pitch)*distance,target.z-Math.cos(yaw)*Math.cos(pitch)*distance);
  camera.lookAt(target);
}

function step(dt,input){
  if(!ready)return;
  elapsed+=dt;
  if(mode==='native')puzzle.update(dt);
  for(const model of models){
    const offset=mode==='native'?puzzle.offset(model):model.pushOffset;model.group.position.fromArray(model.base.map((v,i)=>v+offset[i]));
    model.label.position.set(model.group.position.x,model.group.position.y+model.bounds.max[1]+25,model.group.position.z);
  }
  const bodies=models.filter(m=>m.group.visible).flatMap(bodiesFor);bodies.push(mode==='native'?pedestalBody:stopperBody);
  // A moving solid pushes a bystander out of its travel direction; it never
  // leaves RedCat embedded in a crate. This lab has no damage or save state.
  if(mode==='native'&&puzzle.active)for(const body of bodies.filter(b=>b.model?.name.startsWith('crates')))if(overlaps(playerBox(player),boxAt(body)))player.z=boxAt(body).max[2]+13.1;
  let forward=input?.forward??(Number(keys.has('KeyW')||keys.has('ArrowUp'))-Number(keys.has('KeyS')||keys.has('ArrowDown')));
  let right=input?.right??(Number(keys.has('KeyD')||keys.has('ArrowRight'))-Number(keys.has('KeyA')||keys.has('ArrowLeft')));
  const size=Math.hypot(forward,right);if(size>1){forward/=size;right/=size;}
  const powerMove=mode==='power'&&(input?.powerMove??keys.has('KeyQ'));
  const speed=powerMove?SPEED*.45:SPEED;
  const dx=(Math.sin(yaw)*forward-Math.cos(yaw)*right)*speed*dt;
  const dz=(Math.cos(yaw)*forward+Math.sin(yaw)*right)*speed*dt;
  const pushed=movePlayer(player,dx,dz,bodies,powerMove);
  if(mode==='power')for(const model of models)model.group.position.fromArray(model.base.map((v,i)=>v+model.pushOffset[i]));
  stepVertical(player,dt,bodies,input?.jump??jumpRequested);jumpRequested=false;
  if(dx||dz)redcat.root.rotation.y=Math.atan2(dx,dz);
  redcat.animator.play(!player.grounded?'jump1':size?'walkfw':'idle');
  redcat.animator.timeScale=player.grounded?(powerMove ? .55 : 1):1.4;
  const b=boxAt(bodyFor(button));
  const touching=player.x>=b.min[0]-14&&player.x<=b.max[0]+14&&player.z>=b.min[2]-14&&player.z<=b.max[2]+14&&player.y+58>b.min[1]&&player.y<b.max[1];
  if(mode==='native'){
    if(touching&&puzzle.trigger())status.textContent='Knop ingedrukt — de originele AfterSwitchOn-opdracht verplaatst de kratten.';
    if(puzzle.completed)status.textContent='Kratten verplaatst. Ze blijven op hun eindpositie staan. R = opnieuw.';
  }else{
    const crate=models.find(m=>m.pushable),b=boxAt(bodyFor(crate));
    const success=b.min[0]>=-60&&b.max[0]<=60&&b.min[2]>=110&&b.max[2]<=230;
    goal.material.color.setHex(success?0x9bea69:0x499477);
    status.textContent=success?'Krat in het vak! Blijf duwen om de wand te testen, of druk R voor opnieuw.'
      :pushed?'Power-move proef: je verplaatst nu de krat. Laat Q los om te stoppen.'
      :powerMove?'Power-move klaar — loop tegen de krat om hem te duwen.'
      :'Power-move proef: houd Q + W vast om de krat vooruit te duwen.';
  }
  syncVisuals(dt);
}

function animate(now){
  requestAnimationFrame(animate);
  const delta=Math.min(.1,(now-previous)/1000);previous=now;
  if(ready&&!document.hidden&&!window.__shoveTest?.paused){accumulator+=delta;while(accumulator>=1/120){step(1/120);accumulator-=1/120;}}
  renderer.render(scene,camera);
}
function resize(){renderer.setSize(innerWidth,innerHeight,false);camera.aspect=innerWidth/innerHeight;camera.updateProjectionMatrix();}
window.addEventListener('resize',resize);resize();
window.addEventListener('keydown',event=>{
  if(event.target.closest('button,summary,select'))return;
  if(['Space','ArrowUp','ArrowDown','ArrowLeft','ArrowRight'].includes(event.code))event.preventDefault();
  if(event.code==='KeyR'&&!event.repeat)reset();
  if(event.code==='Space'&&!event.repeat)jumpRequested=true;
  keys.add(event.code);
});
window.addEventListener('keyup',event=>keys.delete(event.code));
window.addEventListener('blur',()=>{keys.clear();jumpRequested=false;});
document.addEventListener('visibilitychange',()=>{keys.clear();accumulator=0;previous=performance.now();});
document.querySelector('#reset').addEventListener('click',event=>{reset();event.currentTarget.blur();});
document.querySelector('#mode').addEventListener('change',event=>{mode=event.target.value;reset();event.currentTarget.blur();});
canvas.addEventListener('click',()=>{if(ready)canvas.requestPointerLock()?.catch(()=>{status.textContent='Muisvergrendeling niet beschikbaar. Gebruik slepen om rond te kijken.';});});
canvas.addEventListener('contextmenu',event=>event.preventDefault());
document.addEventListener('mousemove',event=>{
  if(document.pointerLockElement!==canvas&&!(event.buttons===2&&event.target===canvas))return;
  yaw-=event.movementX*.003;pitch=Math.max(.16,Math.min(1.1,pitch+event.movementY*.003));
});
init().catch(error=>{status.textContent='Laden mislukt: '+error.message;console.error(error);});
requestAnimationFrame(animate);
