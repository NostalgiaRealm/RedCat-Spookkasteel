// Three.js asks every auto-updated scene node to compose its local matrix on
// each traversal. Most imported world/prop transforms are unchanged. Keep the
// normal update/parent-dirty rules, but avoid composing identical TRS values.
const cached=new WeakSet();
export function cacheLocalMatrix(object) {
  if(cached.has(object))return;
  cached.add(object);
  const update=object.updateMatrix,trs=new Float64Array(10),matrix=new Float64Array(16);
  let valid=false;
  object.updateMatrix=function() {
    const p=this.position,q=this.quaternion,s=this.scale,e=this.matrix.elements;
    if(valid&&p.x===trs[0]&&p.y===trs[1]&&p.z===trs[2]&&q.x===trs[3]&&q.y===trs[4]&&q.z===trs[5]&&q.w===trs[6]&&s.x===trs[7]&&s.y===trs[8]&&s.z===trs[9]) {
      let same=true;for(let i=0;i<16;i++)if(e[i]!==matrix[i]){same=false;break;}
      if(same)return;
    }
    update.call(this);
    trs.set([p.x,p.y,p.z,q.x,q.y,q.z,q.w,s.x,s.y,s.z]);matrix.set(e);valid=true;
  };
}
