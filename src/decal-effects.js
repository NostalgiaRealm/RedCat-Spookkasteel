import * as THREE from 'three';

const number=(e,key,fallback=0)=>Number.isFinite(Number(e[key]))&&e[key]!==''?Number(e[key]):fallback;
const vector=value=>String(value||'0 0 0').trim().split(/\s+/).map(Number);
const unit=v=>{const length=Math.hypot(...v);return length>0?v.map(x=>x/length):null;};
const cross=(a,b)=>[a[1]*b[2]-a[2]*b[1],a[2]*b[0]-a[0]*b[2],a[0]*b[1]-a[1]*b[0]];
export const decalTextureKey=e=>`${e.BitmapFileName}|${e.BitmapAlphaFileName}`.toLowerCase();

/** CAdamDecal 0x572100: explicit normal, floor, ceiling, or nearest of eight
 * horizontal 3200-unit rays. A decal is a surface-aligned quad, not a sprite. */
export function placeDecal(entity,trace,normalTarget=null){
  const origin=vector(entity.Origin),placement=number(entity,'OriginPlacement',1);
  if(placement===0){const normal=normalTarget&&unit(normalTarget.map((v,i)=>v-origin[i]));return normal?{position:origin,normal}:null;}
  const directions=placement===1?[[0,-1,0]]:placement===2?[[0,1,0]]:placement===3?
    Array.from({length:8},(_,i)=>[Math.sin(i*Math.PI/4),0,Math.cos(i*Math.PI/4)]):[];
  let nearest=null;
  for(const direction of directions){
    const hit=trace(origin,origin.map((v,i)=>v+direction[i]*3200));
    if(!hit||hit.fraction>=1||hit.startSolid)continue;
    if(!nearest||hit.fraction<nearest.fraction)nearest=hit;
  }
  if(!nearest)return null;
  const normal=unit(nearest.normal);if(!normal)return null;
  return {position:nearest.end.map((v,i)=>v+normal[i]*number(entity,'OriginDistanceFromFace',.5)),normal};
}

/** Native basis/UV layout at 0x5718d0/0x5719d0. Rotation uses clock-face
 * units (0x572c7d): 12 is a full turn, not twelve degrees. */
export function decalGeometry(entity,placement){
  const {normal,position}=placement;
  let reference=[0,normal[1]<0?-1:1,0];
  if(normal.every((v,i)=>Math.abs(v-reference[i])<=.1))reference=[0,0,normal[2]<0?-1:1];
  const right=unit(cross(normal,reference)),up=right&&unit(cross(normal,right));if(!right||!up)return null;
  const rotation=number(entity,'Rotation')*Math.PI/6,c=Math.cos(rotation),s=Math.sin(rotation);
  const width=number(entity,'SizeWidth',32),height=number(entity,'SizeHeight',32);
  const positions=[[1,1],[1,-1],[-1,-1],[-1,1]].map(([x,z])=>{
    const a=(x*c+z*s)*width/2,b=(-x*s+z*c)*height/2;
    return position.map((v,i)=>v+right[i]*a+up[i]*b);
  });
  // Native V grows downwards. WorldEffects textures use Three's flipY=true.
  return {positions,uv:[[0,0],[0,1],[1,1],[1,0]],indices:[0,2,1,0,3,2]};
}

export class DecalEffects {
  constructor(world,gameplay,textures){
    this.entries=new Map();
    // Trace rendered BSP faces rather than player hulls: this includes water
    // surfaces for the original lily pads and has no collision skin offset.
    const surfaces=[...world.modelMeshes.values()].flat().filter(m=>m.visible&&m.material.colorWrite!==false);
    for(const mesh of surfaces)mesh.updateWorldMatrix(true,false);
    const ray=new THREE.Raycaster(),normalMatrix=new THREE.Matrix3();
    const trace=(start,end)=>{
      const a=new THREE.Vector3(...start),direction=new THREE.Vector3(...end).sub(a),length=direction.length();direction.normalize();
      ray.set(a,direction);ray.far=length;
      const hit=ray.intersectObjects(surfaces,false)[0];if(!hit)return null;
      const normal=hit.face.normal.clone().applyNormalMatrix(normalMatrix.getNormalMatrix(hit.object.matrixWorld));
      if(normal.dot(direction)>0)normal.negate();
      return {end:hit.point.toArray(),normal:normal.toArray(),fraction:hit.distance/length};
    };
    for(const object of gameplay.objects){
      const e=object.entity;if(e.classname!=='EffectDecalEntity')continue;
      const map=textures.get(decalTextureKey(e));if(!map)continue;
      const placement=placeDecal(e,trace,gameplay.find(e.OriginNormal)[0]?.position);
      const data=placement&&decalGeometry(e,placement);if(!data)continue;
      const geometry=world.track(new THREE.BufferGeometry());
      geometry.setAttribute('position',new THREE.Float32BufferAttribute(data.positions.flat(),3));
      geometry.setAttribute('uv',new THREE.Float32BufferAttribute(data.uv.flat(),2));geometry.setIndex(data.indices);
      const tint=vector(e.OverallColor||'255 255 255').map(v=>Math.max(0,Math.min(1,v/255)));
      const material=world.track(new THREE.MeshBasicMaterial({map,color:new THREE.Color().setRGB(...tint,THREE.SRGBColorSpace),transparent:true,depthWrite:false,opacity:Math.max(0,Math.min(1,number(e,'OverallAlpha',255)/255))}));
      const mesh=new THREE.Mesh(geometry,material);mesh.renderOrder=1;mesh.userData.decalId=object.id;
      world.scene.add(mesh);this.entries.set(object.id,{object,mesh,placement});
    }
    this.update();
  }
  update(){for(const {object,mesh}of this.entries.values())mesh.visible=object.enabled!==false&&object.visible!==false;}
  dispose(){for(const {mesh}of this.entries.values())mesh.removeFromParent();this.entries.clear();}
}
