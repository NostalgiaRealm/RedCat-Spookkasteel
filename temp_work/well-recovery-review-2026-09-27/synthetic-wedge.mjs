import {BspCollider,PlayerController} from '../../src/collision.js';
import {MovementRecovery} from '../../src/movement-recovery.js';
const origin=[0,51.15870499741558,0],mins=[-11,0,-11],maxs=[11,56,11];
const n1=[-0.967144787311554,0.12438593804836273,0.2217184603214264],n2=[0.5000004172325134,-0.7071067690849304,-0.49999961256980896];
const specs=[{min:[-500,-30,-500],max:[500,0,500]},
 {min:[8.0838,17.95,-16.8936],max:[28.4638,65.95,36.3433],normal:n1,gap:.00022920583433},
 {min:[-21.6818,102.5656,-3.9653],max:[57.0791,117.95,74.796],normal:n2,gap:.05}];
const data={planes:[],nodes:[],leaves:[],leafSides:[],models:[]};
for(const {min,max,normal,gap} of specs){
 const firstSide=data.leafSides.length;
 for(let axis=0;axis<3;axis++)for(const sign of [1,-1]){const n=[0,0,0];n[axis]=sign;data.leafSides.push([data.planes.length,0]);data.planes.push([...n,sign===1?max[axis]:-min[axis]]);}
 if(normal){const d=normal.reduce((s,v,i)=>s+v*origin[i],0)-gap+normal.reduce((s,v,i)=>s+v*(v>0?mins[i]:maxs[i]),0);data.leafSides.push([data.planes.length,0]);data.planes.push([...normal,d]);}
 data.leaves.push({contents:1,firstSide,numSides:normal?7:6,min,max});data.models.push({root:-data.leaves.length,min,max});
}
const collider=new BspCollider(data),models=[0,1,2],trace=(a,b,lo=mins,hi=maxs)=>collider.trace(a,b,lo,hi,models);
console.log('stationary',trace(origin,origin));console.log('down',trace(origin,[0,origin[1]-1,0]));
for(let i=0;i<8;i++){let a=i*Math.PI/4;console.log(i,trace(origin,[8*Math.cos(a),origin[1],8*Math.sin(a)]));}
for(const exit of [[-32,origin[1]-32,0],[-48,origin[1],0],[-48*Math.cos(Math.PI/8),origin[1],-48*Math.sin(Math.PI/8)]])console.log('exit',exit,trace(origin,exit),trace(exit,[exit[0],exit[1]-64,exit[2]]));
const p=new PlayerController(collider,origin,models);p.launchVelocityXZ=[156.790159155,1.756699207];
for(let i=0;i<360;i++)p.update(.025,{},0);
console.log('run',p.position,p.grounded,p.movementRecovery.recoveries,p.movementRecovery.search?.index);
