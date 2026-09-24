// RcMovingEnemy/RcStandingShooter muzzle selectors from RcHcGame.dat.
// See docs/enemy-projectile-origins-native.md for native addresses and the
// scale-vector offset used in addition to each animated bone's translation.
const MUZZLES=Object.freeze({
  spider:['BIP01 HEAD'],gargoyle:['BIP01 HEAD'],
  bat:['BIP01 R HAND'],ghost:['GHOST COM BIP01 R HAND'],
  frog:['FROG COM BIP01 PONYTAIL1'],plant:['FEP BIP01 PONYTAIL22'],
  skeleton:['SKELET BIP01 L FINGER1'],
  brutusm:['BRUTUS BIP01 R FINGER01'],brutusb:['BRUTUS BIP01 R FINGER01'],
  maxj:['MAX BIP01 R FINGER01'],witch:['WITCHBIP01 R FINGER0'],
  // Dungeon Max emits from both barrels of the machine, in this order.
  maxd:['BONE07','BONE13']
});
const boneIndices=new WeakMap();
const vector=point=>Array.isArray(point)&&point.length===3&&point.every(Number.isFinite);

export function enemyMuzzleBones(enemyType) {return [...(MUZZLES[enemyType]||[])];}

/** Read the current rendered pose; callers synchronize it to release time. */
export function posedEnemyProjectileOrigins(object,actor,machine=null) {
  const source=object.enemyType==='maxd'?machine?.top:actor;
  const animator=source?.userData?.animator,mesh=source?.userData?.mesh;
  if(!animator||!mesh)return [];
  let indices=boneIndices.get(animator.data);
  if(!indices){indices=new Map(animator.data.bones.map((bone,index)=>[bone.name.toUpperCase(),index]));boneIndices.set(animator.data,indices);}
  mesh.updateWorldMatrix(true,false);
  const world=mesh.matrixWorld.elements,result=[];
  for(const name of MUZZLES[object.enemyType]||[]) {
    const bone=animator.transforms[indices.get(name)];if(!bone)continue;
    // Native GetGunPosition transforms the actor's scale vector through its
    // already-scaled Genesis bone matrix. Imported bones are unscaled, so
    // [1,1,1] here and the mesh scale below give that same attachment offset.
    const x=bone[9]+bone[0]+bone[1]+bone[2];
    const y=bone[10]+bone[3]+bone[4]+bone[5];
    const z=bone[11]+bone[6]+bone[7]+bone[8];
    const point=[world[0]*x+world[4]*y+world[8]*z+world[12],
      world[1]*x+world[5]*y+world[9]*z+world[13],
      world[2]*x+world[6]*y+world[10]*z+world[14]];
    if(vector(point))result.push(point);
  }
  return result;
}

/** Source-only/headless simulations retain their existing missing-asset fallback. */
export function enemyProjectileOrigins(object) {
  const points=object.projectileOrigins?.();
  const valid=Array.isArray(points)?points.filter(vector).map(point=>[...point]):[];
  return valid.length?valid:[[object.position[0],object.position[1]+25,object.position[2]]];
}
