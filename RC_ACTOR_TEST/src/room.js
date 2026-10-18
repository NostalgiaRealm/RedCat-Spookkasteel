import * as THREE from 'three';
import {CastleWorld} from './native/world.js';
import {BspCollider,PlayerController} from './native/collision.js';
import {ActorWorldLighting} from './native/actor-world-lighting.js';
import {PlayerShadow,PLAYER_SHADOW_TEXTURE} from './native/player-shadow.js';

export const MODEL_PAIRS=Object.freeze([
  ['knight2','Alternatieve ridder 2','knight','Wachter'],
  ['knight3','Alternatieve ridder 3','knight','Wachter'],
  ['k_active','Ridder in vaste pose','knight','Wachter'],
  ['spider','Oud spinnenmodel','spiderg','Groene spin'],
  ['bat','Vleermuis in vaste pose','batg','Groene vleermuis'],
  ['batfly','Vliegende vleermuis','batg','Groene vleermuis'],
  ['maxtest1','Max-testmodel','maxj','Max als nar'],
  ['fep_test5','Vroege vleesetende plant','plant','Vleesetende plant'],
  ['brutus','Alternatieve Brutus','brutusm','Brutus (Het Bos)'],
  ['redcat2','Alternatieve RedCat','redcat','RedCat'],
  ['whizztest8','Whizz-testmodel','wkkooi','WhizzKitty in haar kooi'],
  ['tstwitch','Heks-testmodel','witch','Heks'],
  ['mxmach','Ongebruikte geschutmachine','max-turret','Max met geschut'],
]);
// Preserve 1–13 as the original exhibit shortcuts. Their campaign counterparts
// are additional selectable exhibits, physically to the right of each original.
export const EXHIBITS=Object.freeze(['unused','used'].flatMap(role=>MODEL_PAIRS.map(([unused,label,used,usedLabel],i)=>({
  id:role==='unused'?unused:`${unused}--used`,actor:role==='unused'?unused:used,
  label:role==='unused'?label:usedLabel,role,pairIndex:i,
  position:[(i%4-1.5)*450+(role==='unused'?-100:100),0,-Math.floor(i/4)*500-100],
  pairPosition:[(i%4-1.5)*450,0,-Math.floor(i/4)*500-100],
}))));
// The room is new test geometry. Each box is also a native-style convex BSP
// solid, so the unchanged port controller can walk, jump and collide normally.
const BOXES=[
  {min:[-1000,-40,-1820],max:[1000,0,400]},
  {min:[-1020,0,-1840],max:[-1000,160,420]},
  {min:[1000,0,-1840],max:[1020,160,420]},
  {min:[-1000,0,-1840],max:[1000,160,-1820]},
  {min:[-1000,0,400],max:[1000,160,420]},
];
export function createRoomLevel(){
  const collision={planes:[],nodes:[],leaves:[],leafSides:[],models:[]};
  for(const {min,max} of BOXES){
    const firstSide=collision.leafSides.length;
    for(let axis=0;axis<3;axis++)for(const sign of [1,-1]){
      const plane=[0,0,0,sign===1?max[axis]:-min[axis]];plane[axis]=sign;
      collision.leafSides.push([collision.planes.length,0]);collision.planes.push(plane);
    }
    collision.leaves.push({contents:1,firstSide,numSides:6,min,max});
    collision.models.push({root:-collision.leaves.length,min,max});
  }
  return {id:'actor-test',spawn:{position:[0,1,150],orientation:0},
    bounds:{min:[-1020,-40,-1840],max:[1020,400,420]},mesh:{},groups:[],textures:[],collision,
    entities:[{classname:'Sun','%name%':'room-light',Origin:'-200 900 400',Color:'255 245 230',Light:'100',FallOffType:'0'}]};
}

export class ActorTestWorld extends CastleWorld {
  async loadRoom(){
    this.id='actor-test';this.level=createRoomLevel();
    this.scene.background=new THREE.Color('#203443');
    this.physicalModels=BOXES.map((_,i)=>i);
    this.collider=new BspCollider(this.level.collision);
    this.player=new PlayerController(this.collider,this.level.spawn.position,this.physicalModels);
    // All five room meshes are tiny and always resident. No campaign chunks,
    // scripts, saves, menu, or level assets are read by this test.
    this.geometryStream={readyForView:true,update(){},boundsVisible(){return true;},dispose(){}};
    this.actorWorldLighting=new ActorWorldLighting(this.level.entities);
    // A neutral, constant floor fill for this synthetic display room.
    this.actorFloorLighting={beginFrame(){},sample(){return [.38,.38,.38];}};
    this.actorLightVisibility={beginFrame(){},visible:(a,b)=>this.collider.trace(a,b,[0,0,0],[0,0,0],this.physicalModels,null).fraction===1};
    this.actorManifest=await fetch('assets/actors/manifest.json').then(r=>r.json());
    for(const [i,{min,max}] of BOXES.entries()){
      const mesh=new THREE.Mesh(this.track(new THREE.BoxGeometry(...max.map((v,j)=>v-min[j]))),
        this.track(new THREE.MeshLambertMaterial({color:i?'#657882':'#546663'})));
      mesh.position.fromArray(min.map((v,j)=>(v+max[j])/2));this.scene.add(mesh);this.modelMeshes.set(i,[mesh]);
    }
    const grid=new THREE.GridHelper(2000,50,0x8b9d96,0x637770);grid.position.y=.1;
    // Clip the visual grid to the floor rather than drawing through its border.
    grid.scale.z=2220/2000;grid.position.z=-710;this.scene.add(grid);this.track(grid.geometry);this.track(grid.material);
    this.redcat=await this.makeActor('redcat.act');
    if(!this.redcat)throw new Error('Het originele RedCat-model ontbreekt.');
    this.scene.add(this.redcat);this.redcat.userData.animator.transitionDuration=.25;
    const shadow=await this.texture(PLAYER_SHADOW_TEXTURE);shadow.wrapS=shadow.wrapT=THREE.ClampToEdgeWrapping;
    this.playerShadow=new PlayerShadow(this,shadow);
    const projectiles=await fetch('assets/projectiles/manifest.json').then(r=>r.json());
    const style=projectiles.shot;
    this.projectileStyles=new Map([['shot',{...style,textures:await Promise.all(style.frames.map(file=>this.texture('assets/projectiles/'+file)))}]]);
    this.yaw=0;this.pitch=.16;this.updateCamera(1,true);
    return this;
  }
  async makeDisplay(info){
    const pieces=info.actor==='max-turret'?['turbot','turtop','brcrate','maxd']:[info.actor];
    const parts=[];
    for(const name of pieces){
      const root=await this.makeActor(name,{entity:{classname:'AdamAnyActor'},...(pieces.length>1?{scale:1.4}:{})});
      if(!root)throw new Error(`Model ontbreekt: ${name}`);
      const mesh=root.userData.mesh;
      // Original test witch lacks an INI; orient her for inspection. Turret
      // parts use the same explicit Z-up correction as the campaign assembly.
      if(['tstwitch','turbot','turtop'].includes(name))mesh.rotation.set(-Math.PI/2,0,0);
      if(pieces.length>1&&name==='brcrate')mesh.scale.set(.84,.84,2.38);
      if(pieces.length>1&&name==='maxd')root.position.y=40;
      parts.push({name,root,data:root.userData.template.data,animator:root.userData.animator});
    }
    const actor=parts.length===1?parts[0].root:new THREE.Group();
    if(parts.length>1)for(const part of parts)actor.add(part.root);
    const clips=parts.flatMap((p,i)=>p.data.animations.map(c=>({
      name:parts.length===1?c.name:`${p.name} / ${c.name}`,motion:c.name,part:i,duration:c.duration,
    })));
    // Preview real native clips. The live turret is shown in its raised/open
    // presentation pose; these controls do not run boss AI or spawn shots.
    for(const p of parts){
      const preferred=p.name==='turtop'?'litopen':p.name==='batg'?'idle2':'idle';
      const initial=p.data.animations.find(c=>c.name.toLowerCase()===preferred)||p.data.animations.find(c=>!['death','start'].includes(c.name.toLowerCase()))||p.data.animations[0];
      if(initial){
        p.animator.play(initial.name,p.name!=='turtop',true);
        if(p.name==='turtop'){p.animator.time=initial.duration;p.animator.update(0);}
      }
    }
    actor.updateWorldMatrix(true,true);
    const bounds=new THREE.Box3().setFromObject(actor);
    actor.position.set(info.position[0],-bounds.min.y+.1+(['bat','batfly','batg'].includes(info.actor)?65:0),info.position[2]);
    this.scene.add(actor);this.actorInstances.set(info.id,actor);
    const initialPart=parts.find(p=>p.name==='turtop')||parts[0];
    const initialClip=clips.find(c=>parts[c.part]===initialPart&&c.motion===initialPart.animator?.name);
    return {...info,root:actor,parts,clips,clip:initialClip?.name||null,loop:initialPart.animator?.loop??true,playing:true,height:bounds.max.y-bounds.min.y,top:bounds.max.y+actor.position.y};
  }
  async loadExhibits(){
    this.exhibits=[];this.animationsPaused=false;
    for(const info of EXHIBITS){
      const exhibit=await this.makeDisplay(info);this.exhibits.push(exhibit);
      const canvas=document.createElement('canvas');canvas.width=640;canvas.height=144;
      const ctx=canvas.getContext('2d');ctx.fillStyle='#16262de8';ctx.fillRect(0,0,640,144);
      ctx.textAlign='center';ctx.fillStyle=info.role==='unused'?'#ffe0a0':'#a4efbf';ctx.font='bold 25px sans-serif';
      ctx.fillText(`${info.pairIndex+1} · ${info.role==='unused'?'ONGEBRUIKT':'IN HET SPEL'}`,320,30);
      ctx.fillStyle='#ffffff';ctx.font='25px sans-serif';ctx.fillText(info.actor==='max-turret'?'turbot + turtop + brcrate + maxd':`${info.actor}.act`,320,65);
      ctx.font='21px sans-serif';ctx.fillText(info.label,320,97);
      ctx.fillStyle='#d0dccd';ctx.font='18px sans-serif';ctx.fillText(exhibit.clips.length?`${exhibit.clips.length} originele animatie(s)`:'Geen animaties in bestand',320,128);
      const texture=this.track(new THREE.CanvasTexture(canvas));
      const label=new THREE.Sprite(this.track(new THREE.SpriteMaterial({map:texture,depthWrite:false})));
      label.scale.set(160,36,1);label.position.set(info.position[0],exhibit.top+26,info.position[2]);
      this.scene.add(label);exhibit.labelSprite=label;
      const ring=new THREE.Mesh(this.track(new THREE.RingGeometry(48,50,40)),this.track(new THREE.MeshBasicMaterial({color:0x718e96,side:THREE.DoubleSide})));
      ring.rotation.x=-Math.PI/2;ring.position.set(info.position[0],.15,info.position[2]);this.scene.add(ring);exhibit.ring=ring;
    }
  }
  selectExhibit(index,visit=false){
    this.selectedIndex=(index+this.exhibits.length)%this.exhibits.length;
    this.exhibits.forEach((e,i)=>e.ring.material.color.setHex(i===this.selectedIndex?0xffd17d:0x718e96));
    const e=this.exhibits[this.selectedIndex];
    if(visit){
      this.player.position=[e.pairPosition[0],.05,e.pairPosition[2]+170];this.player.resetVelocity();
      this.player.lastSafe=[...this.player.position];this.player.movementRecovery.reset();
      this.yaw=0;this.pitch=.10;this.syncPlayer(0,{});this.updateCamera(1,true);
    }
    return e;
  }
  playClip(name,loop=true){
    const e=this.exhibits[this.selectedIndex],clip=e.clips.find(c=>c.name===name);
    if(!clip)return false;
    const animator=e.parts[clip.part].animator;
    e.clip=name;e.loop=loop;e.playing=true;animator.play(clip.motion,loop,true);return true;
  }
  syncActors(dt){
    super.syncActors(dt);
    for(const e of this.exhibits||[]){
      e.labelSprite.visible=e.labelSprite.position.distanceToSquared(this.camera.position)>90**2;
      if(!this.animationsPaused&&e.playing)for(const part of e.parts)part.animator?.update(dt);
    }
  }
}
