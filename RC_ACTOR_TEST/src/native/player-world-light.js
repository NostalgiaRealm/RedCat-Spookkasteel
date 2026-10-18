import {Vector3} from 'three';

// CRcPlayer creates "rc glow" at 0x431dc0: radius 120, RGB 200/200/200.
// Its update at 0x4336bb follows the cached actor-box centre plus 20 on Y.
export class PlayerWorldLight {
  constructor(world) {
    this.world=world;this.mesh=null;this.offset=new Vector3();
    this.light={id:'rc glow',position:[0,0,0],color:[200/255,200/255,200/255],radius:120,castShadow:false};
  }
  update() {
    const {world}=this,position=world.player?.position,mesh=world.redcat?.userData.mesh;
    if(!mesh||!position?.every(Number.isFinite))return null;
    if(this.mesh!==mesh) {
      // Native actor boxes are cached at setup. Idle/jump poses must not bob
      // the light; retain the imported model basis and scale in this offset.
      if(!mesh.geometry.boundingBox)mesh.geometry.computeBoundingBox();
      const bounds=mesh.userData.actorLighting?.bounds||mesh.geometry.boundingBox;
      mesh.updateMatrix();bounds.getCenter(this.offset).applyMatrix4(mesh.matrix);
      this.offset.y+=20;this.mesh=mesh;
    }
    this.light.position[0]=position[0]+this.offset.x;
    this.light.position[1]=position[1]+this.offset.y;
    this.light.position[2]=position[2]+this.offset.z;
    // This owned light stays enabled in native, independently of camera or
    // actor visibility (including first person and scripted disappearance).
    return this.light;
  }
}
