// Follow a currently moving platform using ordinary camera/keyboard input.
window.__moveOnRaft=async(model,z,frames=600)=>{
 const w=__redcat.world,g=__redcat.gameplay,b=w.level.collision.models[model],trail=[];
 for(let i=0;i<frames&&g.state.health>0;i++){
  let t=g.scripts.modelTransforms.get(model)?.translation||[0,0,0],target=[(b.min[0]+b.max[0])/2+t[0],z],p=w.player.position,dx=target[0]-p[0],dz=target[1]-p[2];
  if(Math.hypot(dx,dz)<8&&w.player.grounded)break;
  const desired=Math.atan2(-dx,-dz),delta=Math.atan2(Math.sin(desired-w.yaw),Math.cos(desired-w.yaw));w.look(-delta/.002/w.settings.sensitivity,0);
  __press(['KeyW']);__stepFrame(1/60);if(i%30===0)trail.push({p:p.slice(),target,h:g.state.health,contacts:[...w.player.contacts]});if(i%10===0)await new Promise(r=>setTimeout(r,0));
 }
 __press([]);return{status:__status(),trail};
};
