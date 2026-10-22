// Observe switch count and use ordinary movement keys to enter/leave touch area once.
window.__tapButton=async(name)=>{
 const g=__redcat.gameplay,b=g.find(name)[0],p=b.position;
 await __moveTo([p[0]+130,p[2]],{attack:false,limit:300,tolerance:5});
 __press([]);for(let i=0;i<90;i++){__stepFrame(1/60);if(i%10===0)await new Promise(r=>setTimeout(r,0));}
 const initial=b.switchCount;
 for(let i=0;i<180&&b.switchCount===initial&&g.state.health>0;i++){
  const w=__redcat.world,a=w.player.position,desired=Math.atan2(p[0]-a[0],p[2]-a[2])+Math.PI;
  const delta=Math.atan2(Math.sin(desired-w.yaw),Math.cos(desired-w.yaw));w.look(-delta/.002/w.settings.sensitivity,0);
  __press(['KeyW']);__stepFrame(1/60);if(i%10===0)await new Promise(r=>setTimeout(r,0));
 }
 __press([]);await __moveTo([p[0]+130,p[2]],{attack:false,limit:300,tolerance:5});
 return {initial,count:b.switchCount,status:__status()};
};
