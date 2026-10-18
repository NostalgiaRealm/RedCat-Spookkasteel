import {Vector3} from 'three';

const FLAME='flame03.bmp|a_flame.bmp';
const capVertices=[51,52,53],capCache=new WeakMap();
const distance2=(a,b)=>a.reduce((sum,value,i)=>sum+(value-b[i])**2,0);

// htorch.act's three wick-cap vertices all belong to BONE03. Cache their
// bone-local centre once; reading its current matrix then costs O(1) per hand.
function capDefinition(data) {
  let cap=capCache.get(data);if(cap)return cap;
  const average=values=>[0,1,2].map(axis=>capVertices.reduce((sum,index)=>sum+values[index*3+axis],0)/3);
  cap={bone:data.bones.findIndex(bone=>bone.name==='BONE03'),local:average(data.localPositions),rest:average(data.positions)};
  capCache.set(data,cap);return cap;
}

export function handTorchTip(actor,rest=false,out=new Vector3()) {
  const mesh=actor.userData.mesh,cap=capDefinition(actor.userData.template.data);
  const matrix=!rest&&actor.userData.animator?.transforms[cap.bone];
  if(matrix){
    const [x,y,z]=cap.local;
    out.set(matrix[0]*x+matrix[1]*y+matrix[2]*z+matrix[9],
      matrix[3]*x+matrix[4]*y+matrix[5]*z+matrix[10],matrix[6]*x+matrix[7]*y+matrix[8]*z+matrix[11]);
  }else out.fromArray(cap.rest);
  mesh.updateWorldMatrix(true,false);return out.applyMatrix4(mesh.matrixWorld);
}

// Same original artwork/alpha and emitter settings as the lit graveyard hands.
const handFlame={classname:'EffectSpoutEntity',BitmapFileName:'flame03.bmp',BitmapAlphaFileName:'a_flame.bmp',
  DelaySecondsMin:'.1',DelaySecondsMax:'.3',LifeSecondsMin:'.5',LifeSecondsMax:'2',SpeedMin:'4',SpeedMax:'8',
  AlphaPercentageStart:'100',AlphaPercentageEnd:'25',SizePercentageStart:'25',SizePercentageEnd:'100',
  Scale:'1',StartRadius:'1.5',Gravity:'.5',AngleMin:'0',AngleMax:'20',ColourFrom:'255 255 255',ColourTo:'255 255 255',
  ColourCycling:'0',LifeTimeSecs:'0',IsInitiallyEnabled:'1'};

/** Intentional enhancement: light all moving hands, including native unlit ones. */
export class TorchFlames {
  constructor(world,gameplay) {
    this.world=world;this.gameplay=gameplay;this.records=[];this.bindings=new Map();this.synthetic=[];this.lights=[];this.tip=new Vector3();
    const flames=gameplay.objects.filter(o=>o.entity.classname==='EffectSpoutEntity'&&
      `${o.entity.BitmapFileName}|${o.entity.BitmapAlphaFileName}`.toLowerCase()===FLAME);
    for(const object of gameplay.objects){
      if(object.entity.ActorFileName?.toLowerCase()!=='htorch.act')continue;
      const actor=world.actorInstances?.get(object.id);if(!actor)continue;
      // Use the fixed bind pose for association, so loading at another point
      // in the animation cannot change which authored flame belongs to a hand.
      const reference=handTorchTip(actor,true,this.tip).toArray();
      const flame=flames.filter(o=>!this.bindings.has(o.id)&&distance2(o.position,reference)<=32**2)
        .sort((a,b)=>distance2(a.position,reference)-distance2(b.position,reference))[0];
      const emitter=flame||{id:`torch-flame:${object.id}`,entity:{...handFlame},position:[...reference],enabled:true,visible:true};
      const record={object,actor,emitter,position:[...reference],active:false,
        light:{id:`torch-light:${object.id}`,position:[...reference],color:[.75,.4,.1],radius:150,castShadow:false}};
      this.records.push(record);this.bindings.set(emitter.id,record);if(!flame)this.synthetic.push(emitter);
    }
    // All 95 stationary torch/trchstl fixtures already have authored flames.
    // Their placement and emission, including the Caves entrance, stay intact.
  }
  update(eye) {
    this.lights.length=0;
    for(const record of this.records){
      const {object,actor,emitter}=record;
      record.active=object.enabled!==false&&object.visible!==false&&object.health>0&&!object.collected&&actor.visible!==false&&
        actor.position.distanceToSquared(this.world.camera.position)<1800**2;
      if(!record.active)continue;
      handTorchTip(actor,false,this.tip).toArray(record.position);
      // Fire grows upwards from the wick; a small lift keeps the seed sprite
      // centred just above the solid torch tip rather than inside its cap.
      record.position[1]+=3;
      record.light.position[0]=record.position[0];record.light.position[1]=record.position[1];record.light.position[2]=record.position[2];
      if(emitter.enabled!==false&&emitter.visible!==false&&distance2(record.position,eye)<(1800+record.light.radius)**2)this.lights.push(record.light);
    }
  }
  position(object){return this.bindings.get(object.id)?.position;}
  enabled(object){return this.bindings.get(object.id)?.active??true;}
  direction(object){return this.bindings.has(object.id)?[0,1,0]:null;}
}
