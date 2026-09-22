// Small collision helpers shared by enemy movement and projectile simulation.
// Coordinates use the original world's Y-up units, like PlayerController.
export function resolveZombieSpawn(object,trace) {
  if(object.enemyType!=='zombie'||!object.enabled||!trace||object.patrol?.leftStart)return;
  const origin=String(object.entity.Origin||'').trim().split(/\s+/).map(Number);
  const start=object.position,limit=16;
  if(origin.length!==3||!origin.every(Number.isFinite)||Math.hypot(...start.map((v,i)=>v-origin[i]))>limit)return;
  const mins=object.collisionMins||[-12,0,-12],maxs=object.collisionMaxs||[12,45,12];
  let position=[...start];
  // The portable square hull overlaps the first grave's end and sloped floor
  // by a few units. Resolve only a shallow overlap at the authored spawn;
  // do not change the original route or let zombies pass through grave walls.
  for(let i=0;i<12;i++) {
    const hit=trace(position,position,mins,maxs);
    if(!hit.startSolid){object.position=position;return;}
    const exit=hit.penetrations?.filter(p=>p.normal&&p.distance>0).sort((a,b)=>a.distance-b.distance)[0];
    if(!exit)return;
    position=position.map((v,i)=>v+exit.normal[i]*exit.distance);
    if(Math.hypot(...position.map((v,i)=>v-start[i]))>limit||Math.hypot(...position.map((v,i)=>v-origin[i]))>limit)return;
  }
}

export function sweepPlayer(start,end,player,radius=0) {
  const mins=[player[0]-11-radius,player[1]-radius,player[2]-11-radius];
  const maxs=[player[0]+11+radius,player[1]+56+radius,player[2]+11+radius];
  let enter=0,leave=1;
  for(let i=0;i<3;i++) {
    const delta=end[i]-start[i];
    if(Math.abs(delta)<1e-8){if(start[i]<mins[i]||start[i]>maxs[i])return null;continue;}
    let a=(mins[i]-start[i])/delta,b=(maxs[i]-start[i])/delta;
    if(a>b)[a,b]=[b,a];enter=Math.max(enter,a);leave=Math.min(leave,b);
    if(enter>leave)return null;
  }
  return enter>=0&&enter<=1?enter:null;
}

export function moveEnemy(object,delta,dt,trace) {
  const start=[...object.position];
  if(!trace){object.position=start.map((v,i)=>v+delta[i]);return;}
  const mins=object.collisionMins||[-12,0,-12],maxs=object.collisionMaxs||[12,45,12];
  const end=start.map((v,i)=>v+delta[i]);
  const hit=trace(start,end,mins,maxs);
  let position=hit.end;
  if(object.flying&&hit.fraction<1&&!hit.startSolid&&hit.normal) {
    // Continue the tangential part of the flight instead of discarding the
    // whole step at a fence or wall. Grounded enemies retain their step logic.
    const remaining=delta.map(v=>v*(1-hit.fraction));
    const inward=remaining.reduce((sum,v,i)=>sum+v*hit.normal[i],0);
    if(inward<0){
      const slide=remaining.map((v,i)=>v-hit.normal[i]*inward);
      position=trace(position,position.map((v,i)=>v+slide[i]),mins,maxs).end;
    }
  }
  if(!object.flying&&object.grounded&&hit.fraction<1&&Math.hypot(delta[0],delta[2])>0) {
    const up=trace(start,[start[0],start[1]+16,start[2]],mins,maxs);
    if(up.fraction===1) {
      const over=trace(up.end,up.end.map((v,i)=>v+delta[i]),mins,maxs);
      const down=trace(over.end,[over.end[0],over.end[1]-18,over.end[2]],mins,maxs);
      const progress=p=>(p[0]-start[0])**2+(p[2]-start[2])**2;
      if(down.fraction<1&&down.normal[1]>.65&&progress(down.end)>progress(position))position=down.end;
    }
  }
  if(!object.flying) {
    object.velocityY=Math.max(-(Number(object.stats.FallSpeed)||160),(object.velocityY||0)-800*dt);
    const fall=trace(position,[position[0],position[1]+object.velocityY*dt,position[2]],mins,maxs);
    position=fall.end;object.grounded=fall.fraction<1&&fall.normal[1]>.65&&object.velocityY<=0;
    if(fall.fraction<1)object.velocityY=0;
  }
  object.position=position;
}
