import * as THREE from 'three';

export const PLAYER_SHADOW_TEXTURE='assets/effects/rcsdw-rcsdw_a.png';
export const PLAYER_SHADOW_HALF_SIZE=25;
export const PLAYER_SHADOW_OFFSET=1.3;
const ZERO=[0,0,0];
const unit=v=>{const length=Math.hypot(...v);return length>1e-8?v.map(x=>x/length):null;};
const cross=(a,b)=>[a[1]*b[2]-a[2]*b[1],a[2]*b[0]-a[0]*b[2],a[0]*b[1]-a[1]*b[0]];

// CRcShadow 0x46d680 traces down from ten units above RedCat. It keeps
// its authored size and alpha while jumping; it is not a light shadow map.
export function playerShadowVertices(position,trace) {
  const start=[position[0],position[1]+10,position[2]],end=[position[0],position[1]-10000,position[2]];
  const hit=trace(start,end);
  if(!hit||hit.fraction>=1||hit.startSolid)return null;
  const normal=unit(hit.normal);if(!normal||normal[1]<=0)return null;
  let reference=[0,normal[1]<0?-1:1,0];
  if(normal.every((v,i)=>Math.abs(v-reference[i])<=.1))reference=[0,0,normal[2]<0?-1:1];
  const right=unit(cross(normal,reference));
  const up=cross(normal,right),centre=hit.end.map((v,i)=>v+normal[i]*PLAYER_SHADOW_OFFSET);
  // Native textured-poly corner templates add these half-unit offsets to
  // the plane basis, rather than scaling the texture with jump height.
  return [[-1,1],[1,1],[1,-1],[-1,-1]].map(([x,y])=>centre.map((v,i)=>
    v+(right[i]*x+up[i]*y)*PLAYER_SHADOW_HALF_SIZE+(i===0?x*.5:i===1?y*.5:0)));
}

export class PlayerShadow {
  constructor(world,map) {
    this.world=world;
    const geometry=world.track(new THREE.BufferGeometry());
    this.positions=new THREE.BufferAttribute(new Float32Array(12),3).setUsage(THREE.DynamicDrawUsage);
    geometry.setAttribute('position',this.positions);
    geometry.setAttribute('uv',new THREE.Float32BufferAttribute([0,1,1,1,1,0,0,0],2));
    geometry.setIndex([0,2,1,0,3,2]);
    // The imported mask peaks at 73/255. Applying that alpha again would
    // make the original already-soft shadow almost invisible.
    const material=world.track(new THREE.MeshBasicMaterial({map,transparent:true,depthWrite:false,side:THREE.DoubleSide}));
    this.mesh=new THREE.Mesh(geometry,material);this.mesh.name='RedCat ground shadow';
    this.mesh.frustumCulled=false;this.mesh.renderOrder=1;this.mesh.visible=false;
    world.scene.add(this.mesh);
  }
  update() {
    const world=this.world;
    this.mesh.visible=false;
    if(!world.player||!world.redcat?.visible||world.gameplay?.scripts?.playerVisible===false)return;
    const vertices=playerShadowVertices(world.player.position,(start,end)=>
      world.collider.trace(start,end,ZERO,ZERO,world.physicalModels,'blocksPlayer',3));
    if(!vertices)return;
    for(let i=0;i<4;i++)this.positions.setXYZ(i,...vertices[i]);
    this.positions.needsUpdate=true;this.mesh.visible=true;
  }
  dispose(){this.mesh.removeFromParent();}
}
