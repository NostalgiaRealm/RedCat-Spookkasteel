import * as THREE from 'three';
import {CastleWorld} from './native/world.js';
import {BspCollider,PlayerController} from './native/collision.js';
import {ActorWorldLighting} from './native/actor-world-lighting.js';
import {PlayerShadow,PLAYER_SHADOW_TEXTURE} from './native/player-shadow.js';

// Three paired stations: the unused coin and the released money-bag actor
// share the same native ItemCoin Type, money increment and score.
export const PICKUPS=Object.freeze([
  {id:'wood',label:'Houten munt',actor:'icoins',type:1,money:1,score:5,sound:'icoins.wav',position:[-315,80,-155]},
  {id:'bag-small',label:'Kleine geldzak',actor:'imoneys',type:1,money:1,score:5,sound:'icoins.wav',position:[-205,80,-155]},
  {id:'silver',label:'Zilveren munt',actor:'icoinm',type:2,money:5,score:25,sound:'icoinm.wav',position:[-55,80,-155]},
  {id:'bag-medium',label:'Middelgrote geldzak',actor:'imoneym',type:2,money:5,score:25,sound:'icoinm.wav',position:[55,80,-155]},
  {id:'gold',label:'Gouden munt',actor:'icoinl',type:3,money:10,score:50,sound:'icoinl.wav',position:[205,80,-155]},
  {id:'bag-large',label:'Grote geldzak',actor:'imoneyl',type:3,money:10,score:50,sound:'icoinl.wav',position:[315,80,-155]},
]);
export const TOTAL_SCORE=PICKUPS.reduce((total,item)=>total+item.score,0);
// The room is new test geometry. Each box is also a native-style convex BSP
// solid, so the unchanged port controller can walk, jump and collide normally.
const BOXES=[
  {min:[-450,-40,-450],max:[450,0,400]},
  {min:[-470,0,-470],max:[-450,140,420]},
  {min:[450,0,-470],max:[470,140,420]},
  {min:[-450,0,-470],max:[450,140,-450]},
  {min:[-450,0,400],max:[450,140,420]},
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
  return {id:'coin-test',spawn:{position:[0,1,190],orientation:0},
    bounds:{min:[-470,-40,-470],max:[470,400,420]},mesh:{},groups:[],textures:[],collision,
    entities:[...PICKUPS.map(c=>({classname:'ItemCoin','%name%':c.id,Origin:c.position.join(' '),Type:String(c.type),IsInitiallyEnabled:'1'})),
      {classname:'Sun','%name%':'room-light',Origin:'-200 900 400',Color:'255 245 230',Light:'130',FallOffType:'0'}]};
}

export class CoinTestWorld extends CastleWorld {
  async loadRoom(){
    this.id='coin-test';this.level=createRoomLevel();
    this.scene.background=new THREE.Color('#203443');
    this.physicalModels=BOXES.map((_,i)=>i);
    this.collider=new BspCollider(this.level.collision);
    this.player=new PlayerController(this.collider,this.level.spawn.position,this.physicalModels);
    // All five room meshes are tiny and always resident. No campaign chunks,
    // scripts, saves, menu, or level assets are read by this test.
    this.geometryStream={readyForView:true,update(){},boundsVisible(){return true;},dispose(){}};
    this.actorWorldLighting=new ActorWorldLighting(this.level.entities);
    this.actorLightVisibility={beginFrame(){},visible:(a,b)=>this.collider.trace(a,b,[0,0,0],[0,0,0],this.physicalModels,null).fraction===1};
    this.actorManifest=await fetch('assets/actors/manifest.json').then(r=>r.json());
    for(const [i,{min,max}] of BOXES.entries()){
      const mesh=new THREE.Mesh(this.track(new THREE.BoxGeometry(...max.map((v,j)=>v-min[j]))),
        this.track(new THREE.MeshLambertMaterial({color:i?'#657882':'#546663'})));
      mesh.position.fromArray(min.map((v,j)=>(v+max[j])/2));this.scene.add(mesh);this.modelMeshes.set(i,[mesh]);
    }
    const grid=new THREE.GridHelper(900,30,0x8b9d96,0x637770);grid.position.y=.1;
    // Clip the visual grid to the floor rather than drawing through its border.
    grid.scale.z=850/900;grid.position.z=-25;this.scene.add(grid);this.track(grid.geometry);this.track(grid.material);
    // Colored floor bays keep each amount's coin and bag visibly paired.
    for(const [x,color] of [[-260,0x947354],[0,0x849ea8],[260,0xb59540]]){
      const bay=new THREE.Mesh(this.track(new THREE.PlaneGeometry(230,105)),
        this.track(new THREE.MeshBasicMaterial({color,transparent:true,opacity:.35,depthWrite:false})));
      bay.rotation.x=-Math.PI/2;bay.position.set(x,.2,-155);this.scene.add(bay);
    }
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
  addPickupLabels(){
    this.pickupLabels=new Map();
    for(const item of PICKUPS){
      const canvas=document.createElement('canvas');canvas.width=512;canvas.height=144;
      const ctx=canvas.getContext('2d');ctx.fillStyle='#16262df5';ctx.fillRect(0,0,512,144);
      ctx.textAlign='center';ctx.fillStyle='#ffffff';ctx.font='bold 44px sans-serif';
      ctx.fillText(item.label,256,43);
      ctx.fillStyle='#ffe2a0';ctx.font='38px sans-serif';ctx.fillText(`${item.money} geld · ${item.score} punten`,256,88);
      ctx.fillStyle='#d0dccd';ctx.font='28px sans-serif';ctx.fillText(item.sound,256,128);
      const texture=this.track(new THREE.CanvasTexture(canvas));
      const label=new THREE.Sprite(this.track(new THREE.SpriteMaterial({map:texture,depthWrite:false,toneMapped:false})));
      label.scale.set(102,28.6875,1);label.position.set(item.position[0],89,item.position[2]);
      this.scene.add(label);this.pickupLabels.set(item.id,label);
    }
  }
  syncActors(dt){
    super.syncActors(dt);
    for(const [id,label] of this.pickupLabels||[])label.visible=!this.gameplay.objects.find(o=>o.id===id).collected;
  }
}
