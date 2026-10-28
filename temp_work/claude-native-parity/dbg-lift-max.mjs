// Largest per-frame camera movement relative to RedCat while backing into a wall and leaving (debug).
import {BspCollider} from '../../source/collision.js';
import {NativeFollowCamera,CAMERA_HULL_HALF_SIZE} from '../../source/native-camera.js';
import {CameraWallLift} from '../../source/third-person-camera.js';
const min=[-500,-100,220],max=[500,500,400],planes=[],leafSides=[];
for(let axis=0;axis<3;axis++)for(const sign of [1,-1]){const n=[0,0,0];n[axis]=sign;leafSides.push([planes.length,0]);planes.push([...n,sign>0?max[axis]:-min[axis]]);}
const world=new BspCollider({planes,nodes:[],leaves:[{contents:1,firstSide:0,numSides:6,min,max}],leafSides,models:[{root:-1,min,max}]});
const tr=size=>(a,b)=>world.trace(a,b,[-size,-size,-size],[size,size,size],[0],null);
for(const withLift of [false,true]){
  const camera=new NativeFollowCamera(),lift=new CameraWallLift(),dt=1/60;
  const path=[...Array.from({length:150},(_,i)=>i*1.4),...Array.from({length:60},()=>209),...Array.from({length:150},(_,i)=>209-i*1.4)];
  let prev=null,prevz=null,mh=0,mz=0,rev=0;
  path.forEach(z=>{
    const backing=prevz!==null&&prevz<z;prevz=z;
    const view=camera.update(dt,{feet:[0,0,z],eye:[0,54.08,z],height:57.92,heading:0,hasInput:backing,backpedal:backing,ray:tr(0),sweep:tr(CAMERA_HULL_HALF_SIZE)});
    const p=withLift?lift.update(dt,{anchor:[0,43,z],desired:view.desired,position:view.position,playerPosition:[0,0,z],trace:tr(4)}).position:view.position;
    const h=p[1],dz=p[2]-z;if(prev){const d=h-prev.h;if(Math.abs(d)>.05){if(prev.d&&Math.sign(d)!==Math.sign(prev.d)){rev++;if(withLift)console.log("reversal z",z.toFixed(1),"h",h.toFixed(2),"d",d.toFixed(2));}prev.d=d;}}if(prev){mh=Math.max(mh,Math.abs(h-prev.h));mz=Math.max(mz,Math.abs(dz-prev.dz));}prev={h,dz,d:prev?.d};
  });
  console.log(withLift?'with lift':'native only','max dh/frame',mh.toFixed(2),'max d(dz)/frame',mz.toFixed(2),'height direction reversals',rev);
}
