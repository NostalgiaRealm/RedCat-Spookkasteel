import {readFile,writeFile} from 'node:fs/promises';
import {BspCollider} from '../../src/collision.js';
const reports=[];
for(const [id,center,hull] of [['lvl01a',[-204,0,165],[[-11,0,-11],[11,56,11]]],['lvl02a',[2716,528,-396],[[-24,0,-24],[24,35,24]]]]){
 const data=JSON.parse(await readFile(new URL(`../../data/levels/${id}/level.json`,import.meta.url),'utf8'));
 const c=new BspCollider(data.collision),[mins,maxs]=hull,positionSamples=[];
 const trace=(a,b)=>c.trace(a,b,mins,maxs,[0]);
 for(let dx=-72;dx<=72;dx+=12)for(let dz=-72;dz<=72;dz+=12){
  const floor=trace([center[0]+dx,center[1]+128,center[2]+dz],[center[0]+dx,center[1]-128,center[2]+dz]);
  if(floor.startSolid||floor.fraction===1)continue;
  const p=floor.end,exits=[];
  for(const dir of [[1,0],[-1,0],[0,1],[0,-1]]){
   const hit=trace(p,[p[0]+dir[0]*12,p[1],p[2]+dir[1]*12]);
   exits.push(hit.fraction);
  }
  if(exits.every(n=>n<.2))positionSamples.push({position:p,normal:floor.normal,exits});
 }
 reports.push({id,center,hull,worldOnly:true,positionSamples});
}
await writeFile(new URL('./geometry-probe.json',import.meta.url),JSON.stringify(reports,null,2)+'\n');
console.log(JSON.stringify(reports,null,2));
