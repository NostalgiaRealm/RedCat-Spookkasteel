// FlashEffect entities draw a one-second kaboom2 ray burst at their origin,
// facing the viewer: five short static rays at 0.65 of the base scale and
// five long rays whose spin accelerates at 12 rad/s². The port previously
// whitened the whole screen with a CSS overlay instead.
export const FLASH_TEXTURE='kaboom2.bmp|kaboom2_a.bmp';
export const FLASH_SECONDS=1;
const SCALE=50,SHORT=.65,SPIN_ACCELERATION=12,RAYS=5;

/** Ray quads for a flash that started `age` seconds ago, or [] once it ended. */
export function flashRays(age) {
  if(!(age>=0&&age<FLASH_SECONDS))return [];
  // The native alpha falloff was not traced; fade linearly over the lifetime.
  const opacity=1-age/FLASH_SECONDS,spin=.5*SPIN_ACCELERATION*age*age,rays=[];
  for(let i=0;i<RAYS;i++) {
    const angle=i*2*Math.PI/RAYS;
    rays.push({size:SCALE*SHORT,rotation:angle,opacity});
    rays.push({size:SCALE,rotation:angle+Math.PI/RAYS+spin,opacity});
  }
  return rays;
}
