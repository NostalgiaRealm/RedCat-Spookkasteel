import {FrontSide} from 'three';

// Native RcTouchGhost/RcShootGhost initialization replaces material zero with
// transghost.bmp/transghost_A.bmp and its variant colour. Names are unreliable:
// the graveyard's "ghost1" is a zombie.
export const isGhostEnemy = object => object?.kind === 'enemy' && object.enemyType === 'ghost';

export function ghostMaterials(materials, map, variant, track = material => material) {
  return materials.map((original, index) => {
    if(index !== 0)return original;
    // Animated instances otherwise share the template's material. Keep props,
    // other ghosts and any instance-specific fades independent of this one.
    const material = track(original.clone());
    material.map = map;
    material.color.setRGB(...(variant === 2 ? [1,1,0] : variant === 3 ? [1,0,0] : [0,1,0]));
    material.transparent = true;
    material.depthWrite = false;
    material.alphaTest = .01;
    // A closed ghost's back surface must not be blended over its front surface.
    material.side = FrontSide;
    return material;
  });
}
