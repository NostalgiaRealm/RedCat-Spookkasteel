// Prepared from prior physical route evidence. Not yet replayed as one earned run.
// Load tower-ascent-2026-10-18/input-helpers.js first, with existing keys released.
// Definitions only: ordinary keyboard/camera entry points and read-only checks.
window.__finalCheck=(label,level,{scene=false}={})=>{
  const s=__status();
  if(s.noClip||s.state.health<=0||s.mode!=='playing'||(level&&s.level!==level)||(!scene&&s.scene)||s.error?.length||s.vm){
    __press([]);
    throw Error(label+': '+JSON.stringify(s));
  }
  return s;
};
window.__finalMove=async(p,{jump=false,tolerance=6,allowScene=false,...options}={})=>{
  const level=__finalCheck('before move').level;
  const result=await (jump?__moveToSuper:__moveTo)(p,{...options,jump,attack:false,tolerance});
  const s=__finalCheck('after move',level,{scene:allowScene});
  if(!s.scene&&Math.hypot(s.p[0]-p[0],s.p[2]-p[1])>Math.max(15,tolerance+5))
    throw Error('Inspect incomplete move '+JSON.stringify(result));
  return result;
};
window.__finalWalk=async(p,options={})=>{
  const level=__finalCheck('before floor route').level;
  const result=await __walkHeight(p,{step:16,stepHeight:18,maxDrop:24,tolerance:4,attack:false,...options});
  const s=__finalCheck('after floor route',level,{scene:!!options.allowScene});
  if(!s.scene&&(Math.hypot(s.p[0]-p[0],s.p[2]-p[1])>25||
    (options.targetY!==undefined&&Math.abs(s.p[1]-options.targetY)>20)))
    throw Error('Inspect incomplete floor route '+JSON.stringify({p,results:result.results?.slice(-2),searched:result.searched}));
  return result;
};
// Only after inspecting/saving at the specified safe takeoff. No scripted
// relocation: W and the already earned Space double-tap perform the crossing.
window.__finalGap=async(takeoff,landing,{minLandingY=-40}={})=>{
  const before=__finalCheck('gap takeoff','lvl03a');
  if(Math.hypot(before.p[0]-takeoff[0],before.p[2]-takeoff[1])>20||!__redcat.world.player.grounded)
    throw Error('Inspect takeoff before jumping '+JSON.stringify({takeoff,before}));
  const flight=await __finalMove(landing,{jump:true,tolerance:8});
  await __finalUntil(()=>__redcat.world.player.grounded,{frames:240,label:'gap landing'});
  const after=__finalCheck('landed','lvl03a');
  if(after.p[1]<minLandingY||Math.hypot(after.p[0]-landing[0],after.p[2]-landing[1])>30)
    throw Error('Inspect actual landing '+JSON.stringify({landing,after}));
  return {before,flight,after};
};
window.__finalUntil=async(predicate,{frames=2400,skip=false,label='condition'}={})=>{
  __press([]);
  try{
    for(let i=0;i<frames;i++){
      const s=__finalCheck(label,null,{scene:true});
      if(predicate(s))return s;
      __press(skip&&s.scene&&i%12<2?['KeyE']:[]);
      __stepFrame(1/60);if(i%10===0)await new Promise(r=>setTimeout(r,0));
    }
    throw Error('Timed out: '+label);
  }finally{__press([]);}
};
window.__finalCavesReady=()=>{
  const s=__finalCheck('Caves finale boundary','lvl03a');
  const count=__redcat.gameplay.find('unlock_max')[0]?.triggerCount;
  if(count!==4||s.state.potions<30||(s.state.skill&11)!==11||s.state.mirror!==3)
    throw Error('Finale prerequisites missing '+JSON.stringify({count,s}));
  return {count,s};
};
window.__finalFairy=async()=>{
  const before=__finalCavesReady();
  await __finalWalk([-538,-300]);
  await __finalMove([-538,-552],{allowScene:true});
  await __finalUntil(s=>!s.scene&&(s.state.skill&4)===4,{skip:true,label:'charged-shot fairy'});
  return {before,after:__finalCheck('fairy completed','lvl03a')};
};
// Approach gate only. Inspect and save before the lava jump; this is not a long
// automatic combat chain. Proven takeoff was approximately[-10,-1660].
window.__finalMaxApproach=async()=>{
  __finalCheck('Max approach','lvl03a');
  if((__redcat.gameplay.state.skill&4)!==4)throw Error('Charged shot missing');
  await __finalWalk([-100,-1200]);await __finalMove([-10,-1500],{allowScene:true});
  await __finalUntil(s=>!s.scene,{skip:true,label:'Max intro'});
  await __finalMove([-10,-1622],{allowScene:true});
  await __finalUntil(s=>!s.scene,{skip:true,label:'Max intro finish'});
  return __status();
};
window.__finalAim=(name)=>{
  const w=__redcat.world,g=__redcat.gameplay,o=g.find(name)[0];
  if(!o)throw Error('Missing target '+name);
  const p=g.objectPosition(o),a=w.player.position,d=Math.atan2(-(p[0]-a[0]),-(p[2]-a[2]));
  const delta=Math.atan2(Math.sin(d-w.yaw),Math.cos(d-w.yaw));
  w.look(-delta/.002/w.settings.sensitivity,(.16-w.pitch)/.002/w.settings.sensitivity);
  return o;
};
// One charged shot. Caller observes damage/health between shots. Witch release
// waits for its shoot phase; timing derives from successful retained encounter.
window.__finalCharge=async(name,{phase=null,frames=720}={})=>{
  const initial=__finalCheck('before charged shot'),g=__redcat.gameplay,log=[];
  let released=false;
  try{
    for(let i=0;i<frames;i++){
      const s=__finalCheck('charging',initial.level);
      const o=__finalAim(name);
      if(o.health<=0)return {initial,log,alreadyDefeated:true,s};
      if(!o.enabled)throw Error('Target is not active: '+name);
      const target=__redcat.world.targeting.target;
      const locked=target?.id===o.id;
      if((g.playerCharge?.age||0)>=1.5&&locked&&(!phase||o.boss?.phase===phase)){
        __press([]);released=true;break;
      }
      __press(['ControlLeft']);__stepFrame(1/60);
      if(i%30===0)log.push({i,hp:g.state.health,boss:o.health,phase:o.boss?.phase,locked,charge:g.playerCharge?.age});
      if(i%10===0)await new Promise(r=>setTimeout(r,0));
    }
    if(!released)throw Error('Charge/release condition unavailable '+name);
    for(let i=0;i<70;i++){
      __finalCheck('projectile flight',initial.level,{scene:true});
      __stepFrame(1/60);if(i%10===0)await new Promise(r=>setTimeout(r,0));
    }
    return {initial,log,released,boss:g.find(name)[0].health,s:__status()};
  }finally{__press([]);}
};
window.__finalTowerStairs=async()=>{
  __finalCheck('Tower start','lvl04a');const log=[];
  log.push(await __finalMove([-180,-342],{allowScene:true}));
  await __finalUntil(s=>!s.scene&&s.p[2]>-310,{skip:true,label:'Tower intro'});
  log.push(await __finalWalk([200,350],{step:24,tolerance:5}));
  // Stop here for explicit guard01/bat01 combat. The earlier fixture lost6HP.
  return {log,s:__status()};
};
window.__finalTowerClimb=async()=>{
  __finalCheck('Tower staircase','lvl04a');const log=[];
  for(const [p,y]of [[[-333,523],-3808],[[-553,-111],-3691],[[2,-516],-3576],[[547,-111],-3472]])
    log.push(await __finalWalk(p,{targetY:y}));
  log.push(await __finalWalk([367,600],{targetY:-3354,allowScene:true}));
  await __finalUntil(s=>!s.scene&&s.p[1]>2400,{skip:true,label:'upper Tower teleport'});
  log.push(await __finalMove([0,1008]));log.push(await __finalMove([0,931]));
  log.push(await __finalMove([80,800]));log.push(await __finalMove([0,590]));
  return {log,s:__status()};
};
window.__finalBonusA=async()=>{
  __finalCheck('bonus A start','lvl04a');const log=[];
  log.push(await __finalWalk([-392,1008],{allowScene:true}));
  await __finalUntil(s=>!s.scene&&s.p[1]<1800,{skip:true,label:'bonus A arrival'});
  for(const p of [[-202,1013],[-207,1095],[-205,1192],[-106,1196],[1,1196],[116,1198],
    [196,1198],[196,1097],[193,1007],[205,920],[194,807],[106,805],[-1,810],[-91,801],[-203,816],[-203,911]])
    log.push(await __finalMove(p,{tolerance:8}));
  log.push(await __finalWalk([0,1008],{allowScene:true}));
  await __finalUntil(s=>!s.scene&&s.p[1]>2400,{skip:true,label:'bonus A return'});
  return {log,s:__status()};
};
window.__finalBonusB=async()=>{
  __finalCheck('bonus B start','lvl04a');const log=[];
  log.push(await __finalWalk([392,1008],{allowScene:true}));
  await __finalUntil(s=>!s.scene&&s.p[1]<1800,{skip:true,label:'bonus B arrival'});
  for(const p of [[-192,3],[-203,90],[-205,180],[-101,184],[1,184],[102,191],[196,186],
    [200,91],[193,-5],[200,-101],[194,-205],[113,-204],[-1,-202],[-102,-204],[-203,-196],[-205,-113]])
    log.push(await __finalMove(p,{tolerance:8}));
  log.push(await __finalWalk([0,0],{allowScene:true}));
  await __finalUntil(s=>!s.scene&&s.p[1]>2400,{skip:true,label:'bonus B return'});
  log.push(await __finalWalk([80,800]));log.push(await __finalMove([0,590]));
  return {log,s:__status()};
};
window.__finalMirrors=async()=>{
  const s=__finalCheck('mirror circuit','lvl04a');
  if(s.state.mirror!==4)throw Error('Expected four carried mirrors');
  await __finalMove([0,520],{allowScene:true});
  await __wait(20);
  await __finalUntil(s=>!s.scene,{skip:true,label:'Witch-room intro'});
  // The fifth piece is an ordinary pickup at[-484,226], reached later in
  // this circuit. Waiting for it at the intro landing exposes RedCat to fire.
  const log=[];
  for(const p of [[344,528],[552,-120],[280,-410],[0,-520],[-400,-320],[-490,200],
    [-484,226],[-336,528],[-484,226],[-544,-120]]){
    log.push(await __finalMove(p,{allowScene:true,tolerance:12}));
    if(__redcat.gameplay.scripts.cutscene)break;
  }
  await __finalUntil(s=>!s.scene&&__redcat.gameplay.find('The_Witch')[0].enabled,{frames:6000,skip:true,label:'five mirror placements'});
  const count=__redcat.gameplay.find('witch_enable')[0].triggerCount;
  if(count!==5)throw Error('Mirror circuit incomplete '+count);
  return {log,count,s:__status()};
};
