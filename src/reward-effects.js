// Original CRcPickUpEffect (0x469fb0/0x46a010) and CRcSmokeEffect
// (0x46efa0/0x46f000) share the five hand-drawn score billboards.
export const SCORE_VALUES=Object.freeze([5,15,25,50,75]);
export const SCORE_TEXTURES=Object.freeze(SCORE_VALUES.map((_,i)=>`score${i}.bmp|score${i}_a.bmp`));
export const PICKUP_TEXTURE='kaboom2.bmp|kaboom2_a.bmp';
const vector=value=>Array.isArray(value)&&value.length===3&&value.every(Number.isFinite);
const duration=effect=>effect.kind==='pickup'?1:1.5;
const MAX_REWARDS=128;

export function createRewardEffect(kind,score,position,birth) {
  if(!['pickup','enemy'].includes(kind)||!vector(position)||!Number.isFinite(birth)||!Number.isFinite(score))return null;
  if(kind==='enemy'&&!SCORE_VALUES.includes(score))return null;
  return {kind,score,position:[...position],birth};
}

export function retainRewardEffects(effects,time) {
  return effects.filter(effect=>time>=effect.birth&&time-effect.birth<duration(effect)).slice(-MAX_REWARDS);
}

export function restoreRewardEffects(saved,time) {
  const effects=(Array.isArray(saved)?saved:[]).slice(-MAX_REWARDS)
    .map(effect=>effect&&createRewardEffect(effect.kind,effect.score,effect.position,effect.birth)).filter(Boolean);
  return retainRewardEffects(effects,time);
}

export function rewardScoreQuad(effect,time,camera) {
  const index=SCORE_VALUES.indexOf(effect.score),age=time-effect.birth,life=duration(effect);
  if(index<0||age<0||age>=life)return null;
  const factor=.1+.9*age/life,radius=20*factor,origin=effect.position;
  // Remain upright, facing the camera horizontally, even during an overhead
  // cutscene. Keep a finite orientation when looking exactly down the axis.
  const dx=camera[0]-origin[0],dz=camera[2]-origin[2],length=Math.hypot(dx,dz);
  const right=length>1e-8?[dz/length*radius,0,-dx/length*radius]:[radius,0,0];
  const point=(side,up)=>origin.map((v,i)=>v+side*right[i]+(i===0?side*.5:i===1?75*factor+up*(radius+.5):0));
  return {texture:SCORE_TEXTURES[index],points:[point(-1,-1),point(1,-1),point(-1,1),point(1,-1),point(1,1),point(-1,1)],opacity:1-factor};
}

// CRcPickUpEffect: five mode-2 particles, one second, orbit radius 30 -> 0,
// 12.5 rad/s, textured with kaboom2. Its colour controller changes one
// channel at a time between 20 and 255 (0x469330), at 700 units/second.
export function pickupColor(age) {
  const phase=((age*700/235)%6+6)%6,step=Math.floor(phase),amount=235*(phase-step);
  const starts=[[20,255,20],[255,255,20],[255,20,20],[255,20,255],[20,20,255],[20,255,255]];
  const result=[...starts[step]];result[[0,1,2,0,1,2][step]]+=[1,-1,1,-1,1,-1][step]*amount;
  return result.map(value=>value/255);
}

export function pickupTrailQuads(effect,time) {
  const age=time-effect.birth;
  if(effect.kind!=='pickup'||age<0||age>=1)return [];
  const radius=30*(1-age),origin=effect.position,color=pickupColor(age);
  const opacity=age<=.1?1:1-.9*(age-.1)/1.1;
  return Array.from({length:5},(_,i)=>{
    const angle=i*Math.PI*2/5+12.5*age,c=Math.cos(angle),s=Math.sin(angle);
    const end=[origin[0]+radius*c,origin[1]-.1,origin[2]-radius*s],tangent=[-s,0,-c];
    const point=(center,side,width)=>center.map((v,axis)=>v+side*width*tangent[axis]);
    const a=point(end,-1,10),b=point(end,1,10),tip=point(origin,1,2.5);
    // 0x4692e5 submits THREE vertices, although it prepares four. Keep the
    // second batched triangle degenerate rather than drawing the unused half.
    // Genesis V grows down the bitmap; imported Three textures grow upward.
    return {texture:PICKUP_TEXTURE,points:[a,b,tip,tip,tip,tip],uvs:[[0,0],[1,0],[1,1],[1,1],[1,1],[1,1]],color,opacity};
  });
}
