// Camera cost probe (28 October 2026): collision traces per frame for the
// native follow camera and the wall lift, while RedCat walks in the open,
// backs into a wall, waits there, and walks away. Writes the per-frame poses so
// an optimized build can be compared with this one.
// Usage: node probe-camera-traces.mjs <out.json> [project-root]
import {writeFileSync} from 'node:fs';
import {pathToFileURL} from 'node:url';
import path from 'node:path';
const root=path.resolve(process.argv[3]||'.');
const load=m=>import(pathToFileURL(path.join(root,'source',m)).href);
const {BspCollider}=await load('collision.js');
const {NativeFollowCamera,CAMERA_HULL_HALF_SIZE}=await load('native-camera.js');
const {CameraWallLift}=await load('third-person-camera.js');
const scenarios={rear:[[[-500,-100,220],[500,500,400]]],
  corner:[[[-500,-100,220],[500,500,400]],[[30,-100,-500],[200,500,500]]],
  lowCeiling:[[[-500,-100,220],[500,500,400]],[[-500,75,-500],[500,200,500]]]};
const report={};
for(const [name,wall] of Object.entries(scenarios)){
  const planes=[],leaves=[],leafSides=[],models=[];
  for(const [min,max] of wall){const firstSide=leafSides.length;
    for(let axis=0;axis<3;axis++)for(const sign of [1,-1]){const n=[0,0,0];n[axis]=sign;leafSides.push([planes.length,0]);planes.push([...n,sign>0?max[axis]:-min[axis]]);}
    models.push({root:-leaves.length-1,min,max});leaves.push({contents:1,firstSide,numSides:6,min,max});}
  const world=new BspCollider({planes,nodes:[],leaves,leafSides,models}),ids=models.map((_,i)=>i);
  let count={native:0,lift:0};
  const counted=(size,key)=>(a,b)=>{count[key]++;return world.trace(a,b,[-size,-size,-size],[size,size,size],ids,null);};
  const camera=new NativeFollowCamera(),lift=new CameraWallLift(),dt=1/60;
  const phases=[['open',Array.from({length:60},(_,i)=>-200+i*.5)],['backing',Array.from({length:150},(_,i)=>i*1.4)],
    ['atWall',Array.from({length:120},()=>209)],['leaving',Array.from({length:150},(_,i)=>209-i*1.4)]];
  let previous=null;const stats={},poses=[];
  for(const [phase,path] of phases){
    const frames=[];
    for(const z of path){
      count={native:0,lift:0};
      const feet=[0,0,z],eye=[0,54.08,z],chest=[0,43,z],backing=previous!==null&&previous<z;
      const view=camera.update(dt,{feet,eye,height:57.92,heading:0,hasInput:backing,backpedal:backing,ray:counted(0,'native'),sweep:counted(CAMERA_HULL_HALF_SIZE,'native')});
      const pose=lift.update(dt,{anchor:chest,desired:view.desired,position:view.position,playerPosition:feet,trace:counted(4,'lift')});
      frames.push({...count});poses.push([...pose.position.map(v=>+v.toFixed(4)),+pose.lift.toFixed(4),pose.hidePlayer?1:0]);
      previous=z;
    }
    const sum=k=>frames.reduce((s,f)=>s+f[k],0);
    stats[phase]={frames:frames.length,nativeAvg:+(sum('native')/frames.length).toFixed(2),nativeMax:Math.max(...frames.map(f=>f.native)),
      liftAvg:+(sum('lift')/frames.length).toFixed(2),liftMax:Math.max(...frames.map(f=>f.lift))};
  }
  report[name]={stats,poses};
  console.log(name,JSON.stringify(stats));
}
writeFileSync(process.argv[2],JSON.stringify(report));
