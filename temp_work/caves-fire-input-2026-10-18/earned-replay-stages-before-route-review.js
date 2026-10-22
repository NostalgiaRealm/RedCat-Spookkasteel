// Test driver only: normal inputs, read-only phase/position observation.
// Load common Graveyard input helpers and replay-helpers.js first. These
// functions send no input until explicitly called; they never assign game state.
window.__fireCheck=(label)=>{
  const s=__status();if(s.noClip||s.state.health<=0||s.mode!=='playing'||s.scene)
    throw Error(label+': stopped '+JSON.stringify(s));return s;
};
window.__firePhaseWait=async(mi,phase)=>{
  for(let i=0;i<600;i++){const t=__stonePhase(mi);if(t>=phase&&t<phase+.08)return i;await __frames(1);__fireCheck('waiting for stone');}
  throw Error('Stone phase unavailable: '+mi);
};
window.__fireOutwardStones=async()=>{
  const log=[];await __moveTo([1450,0],{tolerance:3});await __firePhaseWait(45,6.5);
  for(const [mi,target,superJump]of [[45,[1508,124],false],[47,[1634,185],false],
    [81,[1475,333],true],[79,[1570,534],true],[82,[1630,663],false],
    [83,[1759,670],false],[84,[1835,750],false],[null,[1980,750],false]]){
    log.push(await __stoneJump(mi,target,{superJump}));__fireCheck('outward stone '+mi);
    await __moveTo(target,{tolerance:4});__fireCheck('stone recenter '+mi);
  }return log;
};
window.__fireRingFirst=async()=>{
  await __batch([[2050,805],[2100,728],[2150,728]],{tolerance:4});
  await __frames(2,['KeyE']);await __batch([[2273,727],[2337,728],[2443,728]],{tolerance:4});
  await __frames(540);__fireCheck('ring entry');await __armWait(.34);
  const first=await __stoneJump(null,[2625,729],{superJump:true});__fireCheck('ring board');
  for(let i=0;i<500&&__redcat.world.player.position[2]>625;i++)await __frames(1);
  const corner=await __stoneJump(null,[2505,490],{superJump:true});__fireCheck('NW corner');
  await __batch([[2505,460],[2505,435]],{tolerance:3});await __frames(120);
  return {first,corner,s:__fireCheck('button01')};
};
window.__fireRingCorners=async()=>{
  const log=[];
  for(const stage of [
    {takeoff:[[2540,480],[2580,480]],boardAngle:-.4,board:[2670,605],ride:-2.28,land:[3050,495],button:[[3080,480],[3080,435]]},
    {takeoff:[[3050,480],[3015,480]],boardAngle:-1.95,board:[2915,610],ride:2.35,land:[3050,980],button:[[3080,980],[3080,1020]]},
    {takeoff:[[3050,980],[3015,980]],boardAngle:2.75,board:[2915,850],ride:.85,land:[2535,980],button:[[2505,980],[2505,1020]]}
  ]){
    await __batch(stage.takeoff,{tolerance:3});__fireCheck('corner takeoff');await __armWait(stage.boardAngle);
    log.push(await __stoneJump(null,stage.board,{superJump:true}));__fireCheck('arm board');
    await __armWait(stage.ride);log.push(await __stoneJump(null,stage.land,{superJump:true}));__fireCheck('corner land');
    await __batch(stage.button,{tolerance:3});await __frames(120);__fireCheck('corner button');
  }return log;
};
window.__fireRingExit=async()=>{
  await __batch([[2540,980],[2580,980]],{tolerance:3});await __armWait(1.2);
  const a=await __stoneJump(null,[2670,850],{superJump:true});__fireCheck('SW board');
  await __armWait(-1.57);const b=await __stoneJump(null,[2745,405],{superJump:true});__fireCheck('north bridge');
  await __batch([[2792,360],[2792,250],[2792,150],[2791,78]],{tolerance:4});
  return {a,b,s:__fireCheck('north exit')};
};
window.__fireSecret=async()=>{
  await __batch([[2791,12],[2685,12]],{tolerance:3});await __frames(120);
  await __walkHeight([2499,42],{step:12,tolerance:4,attack:false});
  await __batch([[2496,-73],[2606,-69],[2614,158],[2488,157],[2499,42]],{tolerance:4});
  return __fireCheck('secret');
};
window.__fireReturnRing=async()=>{
  await __batch([[2792,250],[2792,405]],{tolerance:3});await __armWait(-1.15);
  const a=await __stoneJump(null,[2792,570],{superJump:true});__fireCheck('north board');
  await __moveTo([2796,729],{tolerance:4});await __armWait(.32);
  await __moveTo([2630,729],{tolerance:4});await __armWait(0);
  const b=await __stoneJump(null,[2440,775],{superJump:true});__fireCheck('entry return');
  await __batch([[2330,728],[2100,728],[1980,750]],{tolerance:4});return {a,b,s:__fireCheck('lava return bank')};
};
window.__fireReturnStones=async()=>{
  const log=[];await __firePhaseWait(84,6);
  for(const [mi,target,superJump,center]of [[84,[1835,750],true,false],[82,[1630,663],true,false],
    [79,[1570,534],false,false],[81,[1475,333],true,true],[47,[1634,185],true,true],
    [45,[1508,124],false,true],[null,[1450,0],false,false]]){
    log.push(await __stoneJump(mi,target,{superJump}));__fireCheck('return stone '+mi);
    if(center)await __moveTo(target,{tolerance:4});
  }return log;
};
