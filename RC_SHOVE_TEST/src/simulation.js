// Minimal laboratory collision/movement; deliberately separate from the port.
export const LIMIT = 440;
export const RADIUS = 13;
export const HEIGHT = 58;
export const SPEED = 145;

export function overlaps(a, b) {
  return a.min.every((v, i) => v < b.max[i] - .001 && a.max[i] > b.min[i] + .001);
}
export function playerBox(p) {
  return {min: [p.x-RADIUS,p.y+.05,p.z-RADIUS], max:[p.x+RADIUS,p.y+HEIGHT,p.z+RADIUS]};
}
export function boxAt(body) {
  return {min: body.center.map((v,i)=>v-body.half[i]), max: body.center.map((v,i)=>v+body.half[i])};
}
export function movePlayer(p, dx, dz, bodies, powerMove=false) {
  let pushed=false;
  // Short swept steps prevent tunneling even when a frame is delayed.
  const steps=Math.max(1,Math.ceil(Math.max(Math.abs(dx),Math.abs(dz))/3));
  for(let step=0;step<steps;step++) for(const [axis,delta] of [[0,dx/steps],[2,dz/steps]]) {
    if(!delta)continue;
    const key=axis===0?'x':'z', next={...p,[key]:p[key]+delta};
    if(Math.abs(next[key])+RADIUS>LIMIT)continue;
    const hits=bodies.filter(body=>overlaps(playerBox(next),boxAt(body)));
    if(!hits.length){p[key]=next[key];continue;}
    // Explicit laboratory experiment, not an implementation of native bit 16.
    // Move every solid leaf of the same crate atomically, preserving its gaps.
    const group=hits[0].model;
    if(!powerMove||p.y>2||!group?.pushable||hits.some(b=>b.model!==group))continue;
    const moving=bodies.filter(b=>b.model===group),fixed=bodies.filter(b=>b.model!==group);
    const candidates=moving.map(body=>{
      const center=[...body.center];center[axis]+=delta;return {...body,center};
    });
    if(candidates.some(body=>{
      const box=boxAt(body);
      return box.min[axis]<-LIMIT||box.max[axis]>LIMIT||fixed.some(other=>overlaps(box,boxAt(other)));
    }))continue;
    for(const body of moving)body.center[axis]+=delta;
    group.pushOffset[axis]+=delta;p[key]=next[key];pushed=true;
  }
  return pushed;
}

export function stepVertical(p,dt,bodies,jump) {
  if(jump && p.grounded){p.vy=220;p.grounded=false;}
  const previous=p.y;p.vy-=620*dt;p.y+=p.vy*dt;p.grounded=false;
  if(p.y<=0){p.y=0;p.vy=0;p.grounded=true;}
  for(const body of bodies){
    const b=boxAt(body),within=p.x+RADIUS>b.min[0]&&p.x-RADIUS<b.max[0]&&p.z+RADIUS>b.min[2]&&p.z-RADIUS<b.max[2];
    if(!within)continue;
    if(p.vy<=0 && previous>=b.max[1]-.01 && p.y<=b.max[1]){p.y=b.max[1];p.vy=0;p.grounded=true;}
    else if(p.vy>0 && previous+HEIGHT<=b.min[1] && p.y+HEIGHT>b.min[1]){p.y=b.min[1]-HEIGHT;p.vy=0;}
  }
}

export class NativePuzzle {
  constructor(models){this.models=models;this.reset();}
  reset(){this.time=0;this.active=false;this.completed=false;}
  trigger(){if(this.active)return false;this.active=true;return true;}
  update(dt){if(!this.active)return;this.time+=Math.max(0,dt);this.completed=this.time>=this.totalDuration;}
  get buttonDuration(){return this.models.find(m=>m.name==='knopstoragecrates01').motion.duration;}
  get totalDuration(){return this.buttonDuration+Math.max(...this.models.filter(m=>m.name.startsWith('crates')).map(m=>m.motion.duration));}
  offset(model){
    // These four authored paths have two translation keys with endpoint
    // tangents equal to their delta, making the native Hermite path linear.
    const delay=model.name.startsWith('crates')?this.buttonDuration:0;
    const t=this.active?Math.max(0,Math.min(1,(this.time-delay)/model.motion.duration)):0;
    const v=model.motion.paths[0].translation.values;
    return [0,1,2].map(i=>v[i]+(v[i+3]-v[i])*t);
  }
}
