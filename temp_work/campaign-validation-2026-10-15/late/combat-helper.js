window.__fight=async(range=650)=>{
 let initial=__redcat.gameplay.state.kills;
 for(let i=0;i<1200;i++){
  const w=__redcat.world,g=__redcat.gameplay,p=w.player.position;
  if(g.state.health<=0)break;
  let foes=g.objects.filter(o=>o.kind==='enemy'&&o.enabled&&o.visible&&o.health>0&&!['dormant','buried'].includes(o.ambush?.phase)&&Math.hypot(...o.position.map((v,j)=>v-p[j]))<range).sort((a,b)=>Math.hypot(...a.position.map((v,j)=>v-p[j]))-Math.hypot(...b.position.map((v,j)=>v-p[j])));
  if(!foes.length)break;
  let o=foes[0],dx=o.position[0]-p[0],dz=o.position[2]-p[2],d=Math.hypot(dx,dz),desired=Math.atan2(-dx,-dz),delta=Math.atan2(Math.sin(desired-w.yaw),Math.cos(desired-w.yaw));
  w.look(-delta/.002/w.settings.sensitivity,0);
  __press(d<130?['ControlLeft','KeyS']:['ControlLeft']);__stepFrame(1/60);
  if(i%10===0)await new Promise(r=>setTimeout(r,0));
 }
 __press([]);return{kills:__redcat.gameplay.state.kills-initial,status:__status()};
};
