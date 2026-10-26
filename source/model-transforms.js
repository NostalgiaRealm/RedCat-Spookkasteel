// Scripted brush poses are snapshots. Keeping their numeric vectors immutable
// lets collision refit only changed brushes, instead of rechecking every pose
// for every sweep. Ordinary Map callers keep their mutable-pose behavior.
const FIELDS=['origin','translation','rotation'];
const immutablePose=value=>{
  if(!value||typeof value!=='object')return value;
  if(Object.isFrozen(value)&&FIELDS.every(field=>!value[field]||Object.isFrozen(value[field])))return value;
  const pose={...value};
  for(const field of FIELDS)if(value[field])pose[field]=Object.freeze(Array.from(value[field]));
  return Object.freeze(pose);
};
const samePose=(a,b)=>{
  if(a===b)return true;
  if(!a||!b)return false;
  for(const field of FIELDS) {
    const x=a[field],y=b[field];
    if(x===y)continue;
    if(!x||!y||x.length!==y.length)return false;
    for(let i=0;i<x.length;i++)if(x[i]!==y[i])return false;
  }
  return true;
};
export class ModelTransformMap extends Map {
  constructor(entries=[]) {
    super();this.listeners=new Set();
    for(const [index,pose] of entries)this.set(index,pose);
  }
  set(index,value) {
    const pose=immutablePose(value),had=this.has(index),previous=this.get(index);
    super.set(index,pose);
    if(!had||!samePose(previous,pose))for(const listener of this.listeners)listener(index);
    return this;
  }
  delete(index) {
    if(!super.delete(index))return false;
    for(const listener of this.listeners)listener(index);
    return true;
  }
  clear() {
    if(!this.size)return;
    const indices=[...this.keys()];super.clear();
    for(const index of indices)for(const listener of this.listeners)listener(index);
  }
  subscribe(listener) {
    this.listeners.add(listener);return ()=>this.listeners.delete(listener);
  }
}
