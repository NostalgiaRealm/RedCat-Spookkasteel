// Sensitivity check for the sloped-brush test: with the floor limit moved to
// 0.6 the 0.65 ramp must count as floor, proving the test exercises the limit.
import {BspCollider,PlayerController} from './collision-floor06.js';
import * as real from '../../source/collision.js';
const ramp=(Collider,normalY)=>{const a=Math.acos(normalY),data={planes:[],nodes:[],leaves:[],leafSides:[],models:[]};
  const min=[-200,-200*Math.tan(a)-30,-200],max=[200,200*Math.tan(a),200];
  for(const plane of [[-Math.sin(a),Math.cos(a),0,0],[0,-1,0,-min[1]],[1,0,0,max[0]],[-1,0,0,-min[0]],[0,0,1,max[2]],[0,0,-1,-min[2]],[0,1,0,max[1]]]){data.leafSides.push([data.planes.length,0]);data.planes.push(plane);}
  data.leaves.push({contents:1,firstSide:0,numSides:7,min,max});data.models.push({root:-1,min,max});return new Collider(data);};
for(const [name,mod] of [['limit 0.6',{BspCollider,PlayerController}],['limit 0.7',real]])for(const n of [.75,.65]){
  const p=new mod.PlayerController(ramp(mod.BspCollider,n),[0,60,0],[0]);let landed=false;
  for(let i=0;i<40;i++){p.update(.05,{forward:0,right:0},0);landed||=p.grounded;}
  console.log(name,n,{landed,pos:p.position.map(v=>+v.toFixed(2))});}
