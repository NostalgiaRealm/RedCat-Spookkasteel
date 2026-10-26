// Managed actor collision records are updated synchronously by the world,
// before player/projectile queries. This grid only selects candidates: the
// original ordered bounds/state/SAT checks still decide every contact.
export class ActorCollisionIndex {
  constructor(actors,{cellSize=256,maxActorCells=64,maxQueryCells=256,cacheSize=128}={}) {
    this.actors=actors;this.cellSize=cellSize;this.maxActorCells=maxActorCells;this.maxQueryCells=maxQueryCells;this.cacheSize=cacheSize;
    this.entries=new Map();this.cells=new Map();this.wide=new Set();this.cache=new Map();this.indexedLength=-1;this.serial=0;
    this.stats={queries:0,fallbackQueries:0,candidates:0,cacheHits:0};
    Object.defineProperty(actors,'queryBounds',{configurable:true,value:(min,max)=>this.query(min,max)});
    this.synchronize();
  }
  range(record) {
    const min=record.broadphaseMin||record.min,max=record.broadphaseMax||record.max,s=this.cellSize;
    return [Math.floor(min[0]/s),Math.floor(min[1]/s),Math.floor(min[2]/s),Math.floor(max[0]/s),Math.floor(max[1]/s),Math.floor(max[2]/s)];
  }
  cellCount(range) {return (range[3]-range[0]+1)*(range[4]-range[1]+1)*(range[5]-range[2]+1);}
  synchronize() {
    if(this.indexedLength===this.actors.length)return;
    this.entries.clear();this.cells.clear();this.wide.clear();this.cache.clear();
    for(let i=0;i<this.actors.length;i++)this.update(this.actors[i],i);
    this.indexedLength=this.actors.length;
  }
  add(record) {
    this.synchronize();
    if(!this.entries.has(record)){this.actors.push(record);this.update(record,this.actors.length-1);this.indexedLength=this.actors.length;}
    else this.update(record);
  }
  update(record,order=null) {
    const range=this.range(record),old=this.entries.get(record);
    if(old&&range.every((value,i)=>value===old.range[i]))return;
    if(old) {
      for(const key of old.keys){const cell=this.cells.get(key);cell.delete(old);if(!cell.size)this.cells.delete(key);}
      this.wide.delete(old);
    }
    const entry=old||{record,order:order??this.actors.indexOf(record),seen:0};entry.range=range;entry.keys=[];
    const count=this.cellCount(range);
    if(!Number.isFinite(count)||count<=0||count>this.maxActorCells||!range.every(Number.isSafeInteger))this.wide.add(entry);
    else for(let x=range[0];x<=range[3];x++)for(let y=range[1];y<=range[4];y++)for(let z=range[2];z<=range[5];z++) {
      const key=`${x},${y},${z}`;let cell=this.cells.get(key);if(!cell){cell=new Set();this.cells.set(key,cell);}cell.add(entry);entry.keys.push(key);
    }
    this.entries.set(record,entry);this.cache.clear();
  }
  query(min,max) {
    this.synchronize();this.stats.queries++;
    const range=this.range({min,max}),count=this.cellCount(range);
    // Long sight rays and invalid/unbounded bounds keep the complete original
    // order. A spatial query must never become an unbounded grid traversal.
    if(!Number.isFinite(count)||count<=0||count>this.maxQueryCells||!range.every(Number.isSafeInteger)){this.stats.fallbackQueries++;this.stats.candidates+=this.actors.length;return this.actors;}
    const key=range.join(','),cached=this.cache.get(key);
    if(cached){this.stats.cacheHits++;this.stats.candidates+=cached.length;return cached;}
    const found=[],serial=++this.serial;
    const add=entry=>{if(entry.seen!==serial){entry.seen=serial;found.push(entry);}};
    for(const entry of this.wide)add(entry);
    for(let x=range[0];x<=range[3];x++)for(let y=range[1];y<=range[4];y++)for(let z=range[2];z<=range[5];z++)for(const entry of this.cells.get(`${x},${y},${z}`)||[])add(entry);
    found.sort((a,b)=>a.order-b.order);const candidates=found.map(entry=>entry.record);
    if(this.cache.size>=this.cacheSize)this.cache.delete(this.cache.keys().next().value);
    this.cache.set(key,candidates);this.stats.candidates+=candidates.length;return candidates;
  }
}
