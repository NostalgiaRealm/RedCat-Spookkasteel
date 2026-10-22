import {MovementRecovery} from '../../../src/movement-recovery.js';
import {BspCollider} from '../../../src/collision.js';
function boxes(specs){
  const data={planes:[],nodes:[],leaves:[],leafSides:[],models:[]};
  for(const [min,max] of specs){
    const firstSide=data.leafSides.length;
    for(let axis=0;axis<3;axis++)for(const sign of [1,-1]){
      const normal=[0,0,0];normal[axis]=sign;
      data.leafSides.push([data.planes.length,0]);data.planes.push([...normal,sign===1?max[axis]:-min[axis]]);
    }
    data.leaves.push({contents:1,firstSide,numSides:6,min,max});
    data.models.push({root:-data.leaves.length,min,max});
  }
  const collider=new BspCollider(data),models=data.models.map((_,i)=>i);
  return (a,b,mins,maxs)=>collider.trace(a,b,mins,maxs,models);
}
const trace=boxes([
  [[-500,-62,-500],[500,-32,500]],
  [[-500,-32,-500],[34,0,500]],
  [[-200,0,-200],[-12,100,200]],
  [[58,-32,-200],[200,100,200]],
  [[-200,-32,-200],[200,100,-12]],
  [[-200,-32,12],[34,100,200]],
  [[-200,64,-200],[200,100,200]],
  [[34,40,12],[58,100,200]]
]);
const mins=[-11,0,-11],maxs=[11,56,11],position=[0,.05,0],previous=[0,100.05,0];
const options={dt:.05,before:[...position],position:[...position],intended:[1,0,0],mins,maxs,grounded:true,trace};
const r=new MovementRecovery();r.history.push(previous);
const walkingRoute=[position,[46,.05,0],[46,-31.95,0],[46,-31.95,64]];
const edges=walkingRoute.slice(1).map((to,i)=>({from:walkingRoute[i],to,hit:trace(walkingRoute[i],to,mins,maxs)}));
let result=null,ticks=0;for(;ticks<1500&&!result;ticks++)result=r.update(options);
console.log(JSON.stringify({safeOrigin:r.safeAt(position,options),safeHistory:r.safeAt(previous,options),edges:edges.map(e=>({...e,hit:{fraction:e.hit.fraction,startSolid:e.hit.startSolid,end:e.hit.end}})),result,ticks},null,2));
