// FlashEffect (CRcFlashEffect, 0x464e10..0x4654f0) draws a one-second
// kaboom2 ray burst at its origin, facing the viewer: five short static rays
// at 0.65 of the base scale and five long rays whose spin accelerates at
// 12 rad/s². The rays grow and shrink with min(t, 1 - t), and only their
// outer vertices fade.
// Every Enable restarts the burst, and the entity disables itself at the end.
// The port previously whitened the whole screen with a CSS overlay instead.
export const FLASH_TEXTURE='kaboom2.bmp|kaboom2_a.bmp';
export const FLASH_SECONDS=1;
const SCALE=50,SHORT=.65,SPIN_ACCELERATION=12,RAYS=5;
// Each ray is one textured triangle from the template at 0x64d810, scaled by
// the ray size: two outer vertices and the tip at the flash origin (the
// fourth template vertex is never drawn). UVs use Genesis's top-left origin.
export const FLASH_TRIANGLE=Object.freeze([[-.5,2.5],[.5,1.5],[0,0]]);
export const FLASH_UVS=Object.freeze([[1,1],[0,1],[0,0]]);
// Vertex colours: outer (245,245,255) with the +0x6a4 alpha, which falls by
// 160 per second from 180 after the first frame; the blue tip (10,5,255) at 180.
const outerAlpha=t=>t>0?Math.max(0,180-160*t):0;

/**
 * Rays of a flash that started `age` seconds ago, or [] once it ended. Each
 * ray has its size, its rotation in the camera-facing plane, and the RGBA
 * (0..1) of its outer vertices and of its tip.
 */
export function flashRays(age) {
  if(!(age>=0&&age<FLASH_SECONDS))return [];
  const t=age/FLASH_SECONDS,envelope=Math.min(t,1-t),spin=.5*SPIN_ACCELERATION*age*age,rays=[];
  const outer=[245/255,245/255,1,outerAlpha(t)/255],tip=[10/255,5/255,1,180/255];
  for(let i=0;i<RAYS;i++) {
    const angle=i*2*Math.PI/RAYS;
    rays.push({size:SCALE*SHORT*envelope,rotation:angle,outer,tip});
    rays.push({size:SCALE*envelope,rotation:angle+Math.PI/RAYS+spin,outer,tip});
  }
  return rays;
}
