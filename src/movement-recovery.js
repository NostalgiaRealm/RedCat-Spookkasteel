// A portable safety net for wedged collision hulls, not an alternate pathfinder.
// Only committed, revalidated clear positions are retained. Search is spread
// across frames so a group of trapped enemies cannot cause a large trace spike.
const distance=(a,b)=>Math.hypot(...a.map((v,i)=>v-b[i]));
const offset=(p,x,y,z)=>[p[0]+x,p[1]+y,p[2]+z];
const clear=hit=>!hit.startSolid&&hit.fraction>=1;
const directions=Array.from({length:8},(_,i)=>[Math.cos(i*Math.PI/4),Math.sin(i*Math.PI/4)]);

export class MovementRecovery {
  constructor(){this.reset();}
  reset() {
    this.history=[];this.lastPosition=null;this.anchor=null;this.blocked=0;this.embeddedTime=0;
    this.sampleAge=0;this.cooldown=0;this.search=null;this.recoveries=0;
  }
  // Extra horizontal clearance avoids immediately dropping back into the same
  // crack. Ground support includes a centre-foot probe, not just a hull corner
  // touching the lip of a ledge. Flyers need no floor, but need vertical space.
  safeAt(position,{mins,maxs,trace,flying,safe}) {
    const low=mins.map((v,i)=>v-(i===1?(flying?3:0):3));
    const high=maxs.map(v=>v+3);
    if(!clear(trace(position,position,low,high)))return false;
    if(!flying) {
      const foot=offset(position,0,mins[1]+.5,0);
      const floor=trace(foot,offset(foot,0,-4,0),[0,0,0],[0,0,0]);
      if(floor.startSolid||floor.fraction>=1||floor.normal[1]<.65)return false;
    }
    return !safe||safe(position)!==false;
  }
  candidate(candidate,origin,overlap,options) {
    const {mins,maxs,trace,flying}=options;
    const hanging=!flying&&options.grounded===false;
    let position=[...candidate];
    if(!flying) {
      // A suspended body can be caught between sloped faces well above its
      // support (the castle well is 51 units above the courtyard). Settle only
      // onto verified ground within one body height plus a small step below
      // the original position; ordinary grounded recovery keeps its step limit.
      const floorY=hanging?origin[1]-64:position[1]-18;
      if(position[1]<floorY)return null;
      const down=trace(position,[position[0],floorY,position[2]],mins,maxs);
      if(down.startSolid||down.fraction>=1||down.normal[1]<.65)return null;
      position=down.end;
    }
    if(distance(origin,position)<.5||!this.safeAt(position,options))return null;
    if(!overlap.startSolid) {
      if(!clear(trace(origin,position,mins,maxs))) {
        // A diagonal escape from a slope/overhang may need to clear that edge
        // before falling vertically. Checking only origin -> settled position
        // would reject this fully collision-free two-part route.
        if(clear(trace(origin,candidate,mins,maxs))&&clear(trace(candidate,position,mins,maxs)))
          return {position:[...position],grounded:!flying,reason:'blocked'};
        // A small upward nudge may clear a wedged step, but each leg still
        // sweeps the complete body. Never blink across a closed doorway.
        const raised=offset(origin,0,16,0),across=[position[0],raised[1],position[2]];
        if(position[1]>raised[1]||!clear(trace(origin,raised,mins,maxs))||
          !clear(trace(raised,across,mins,maxs))||!clear(trace(across,position,mins,maxs)))return null;
      }
    } else {
      // A starting overlap cannot pass a normal sweep. Check in reverse: all
      // but the shallow tail at the trapped body must be unobstructed. The
      // centre ray also rejects crossing unrelated walls. This permits leaving
      // a shallow overlap, not passing through a solid or a newly closed gate.
      // Leave a ledge sideways before settling onto its lower surrounding
      // floor. A direct diagonal backtrace into the well's base can intersect
      // much more solid than the original shallow overlap actually requires.
      const exit=[...candidate];
      if(!clear(trace(exit,exit,mins,maxs))||!clear(trace(exit,position,mins,maxs)))return null;
      const reverse=trace(exit,origin,mins,maxs),length=distance(origin,exit);
      const depth=Math.max(0,...(overlap.penetrations||[]).map(p=>p.distance||0));
      const tail=overlap.penetrations?.length?Math.min(16,Math.max(4,depth+1)):12;
      if(reverse.startSolid||(1-reverse.fraction)*length>tail+.1)return null;
      const centre=p=>p.map((v,i)=>v+(mins[i]+maxs[i])/2);
      if(trace(centre(origin),centre(exit),[0,0,0],[0,0,0]).fraction<1)return null;
    }
    return {position:[...position],grounded:!flying,reason:overlap.startSolid?'overlap':'blocked'};
  }
  update(options) {
    const {before,position,intended,mins,maxs,trace,grounded=false,flying=false,embedded=false,autonomous=false}=options;
    const dt=Math.max(0,Math.min(.1,options.dt));if(!dt)return null;
    if(this.lastPosition&&distance(before,this.lastPosition)>32)this.reset();
    this.lastPosition=[...position];this.sampleAge+=dt;this.cooldown=Math.max(0,this.cooldown-dt);
    if(!this.anchor||distance(position,this.anchor)>2) {
      this.anchor=[...position];this.blocked=0;this.search=null;
    }
    const attempting=Math.hypot(...intended)>.01;
    this.blocked=attempting?this.blocked+dt:0;
    this.embeddedTime=embedded?this.embeddedTime+dt:0;
    if(!attempting&&!embedded)this.search=null;
    // History sampling costs at most two hull/foot traces twice per second,
    // and only after sufficient travel. It never overwrites the last safe spot
    // merely because a failed downward trace called an embedded body grounded.
    if(this.sampleAge>=.5&&!embedded&&(grounded||flying)&&
      (!this.history.length||distance(position,this.history.at(-1))>=8)) {
      this.sampleAge=0;
      if(this.safeAt(position,options)){this.history.push([...position]);if(this.history.length>12)this.history.shift();}
    }
    if(this.cooldown||(!this.search&&this.blocked<(autonomous?1.2:.8)&&this.embeddedTime<.2))return null;
    const overlap=trace(position,position,mins,maxs);
    if(!this.search) {
      // A player deliberately pushing a wall/door still has an escape route.
      // Recovery is reserved for a real wedge; autonomous actors additionally
      // need help when their steering repeatedly asks for the blocked edge.
      const contacts=[];
      if(!autonomous&&!overlap.startSolid) {
        let canLeave=false;
        for(const [x,z] of directions) {
          const hit=trace(position,offset(position,x*8,0,z*8),mins,maxs);
          if(clear(hit)){canLeave=true;if(grounded)break;}
          else if(hit.normal&&!contacts.some(n=>distance(n,hit.normal)<.01))contacts.push(hit.normal);
        }
        if(grounded&&canLeave){this.cooldown=.5;return null;}
      }
      const candidates=[];
      for(const p of (overlap.penetrations||[]).slice().sort((a,b)=>a.distance-b.distance))
        if(p.normal&&p.distance<=16)candidates.push(position.map((v,i)=>v+p.normal[i]*(p.distance+3.1)));
      // Prefer the direction we actually arrived from, then small radial
      // offsets. The larger fallback points retain their real visited height.
      const previous=this.history.at(-1),angle=previous?Math.atan2(previous[2]-position[2],previous[0]-position[0]):Math.atan2(-intended[2],-intended[0]);
      const hanging=!flying&&!grounded;
      // Opposing slopes may block every horizontal/vertical axis separately
      // while allowing a combined downward/outward move. Try their shared
      // outward direction first, then the bounded general search below.
      if(hanging&&contacts.length>1) {
        const away=[0,1,2].map(i=>contacts.reduce((sum,n)=>sum+n[i],0)),length=Math.hypot(...away);
        if(length>.01)for(const radius of [8,16,24,32,48])candidates.push(position.map((v,i)=>v+away[i]/length*radius));
      }
      for(const lift of (flying?[0,12,-12]:hanging?[0,-16,-32,-48,8,16]:[0,8,16]))for(const radius of (hanging?[4,8,16,24,32,48]:[4,8,16,24,32]))for(let i=0;i<8;i++) {
        const a=angle+i*Math.PI/4;candidates.push(offset(position,Math.cos(a)*radius,lift,Math.sin(a)*radius));
      }
      for(const p of this.history.slice().reverse())if(distance(p,position)<=192)candidates.push([...p]);
      this.search={candidates,index:0};
    }
    // One candidate per frame bounds expensive searches. If normal movement
    // resumes, the anchor test above cancels this work without moving anyone.
    const candidate=this.search.candidates[this.search.index++];
    if(!candidate){this.search=null;this.cooldown=1;return null;}
    const result=this.candidate(candidate,position,overlap,options);
    if(!result)return null;
    this.search=null;this.blocked=this.embeddedTime=0;this.cooldown=1;
    this.anchor=this.lastPosition=[...result.position];this.recoveries++;
    return result;
  }
}
