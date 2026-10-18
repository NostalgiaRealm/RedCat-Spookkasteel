import {BspVisibility, doorPortalOpen} from './bsp-visibility.js';

const dot=(a,b)=>a.reduce((sum,v,i)=>sum+v*b[i],0);

// geSound3D_GetConfig (0x5c7cbf) uses sin(azimuth)*.1. The DirectSound
// driver multiplies by 10000 centibels. Keep one channel unchanged and
// attenuate the opposite channel: equal-power Web Audio pan is not equivalent.
export function nativeStereoGains(listener,source,quaternion=[0,0,0,1]) {
  const [x,y,z,w]=quaternion;
  const right=[1-2*(y*y+z*z),2*(x*y+w*z),2*(x*z-w*y)];
  const forward=[-2*(x*z+w*y),-2*(y*z-w*x),-(1-2*(x*x+y*y))];
  const delta=source.map((v,i)=>v-listener[i]),side=dot(delta,right),ahead=dot(delta,forward);
  const horizontal=Math.hypot(side,ahead),pan=horizontal>1e-7?.1*side/horizontal:0;
  // DirectSound truncates the float parameter to an integer centibel.
  const centibels=Math.trunc(pan*10000),quiet=10**(-Math.abs(centibels)/2000);
  return {pan,left:centibels>0?quiet:1,right:centibels<0?quiet:1};
}

/** Audio visibility is independent of render culling. Native sound checks
 * the source/camera leaves' PVS and connected areas, then traces BSP models
 * with contents mask 0x43; other actors do not obstruct the sound. */
export class BspAudioEnvironment {
  constructor(world,metadata,pvs) {
    this.world=world;this.visibility=new BspVisibility(world.level.collision,metadata,pvs);
    this.areaKey=null;this.areaCache=new Map();
    this.doors=new Map((world.gameplay?.objects||[]).filter(o=>o.kind==='door').map(o=>[o.modelIndex,o]));
  }
  refreshPortals() {
    const {world}=this,game=world.gameplay;
    const open=this.visibility.metadata.areaPortals.map(([model])=>{
      const door=this.doors.get(model);
      const motion=game?.scripts?.players?.get(door?.id);
      const surfaces=world.modelMeshes?.get(model)||[];
      const visible=surfaces.some(mesh=>mesh.material?.opacity!==0);
      return doorPortalOpen(door,motion,visible);
    });
    const key=open.map(Boolean).map(Number).join('');
    if(this.areaKey!==key){this.areaKey=key;this.open=open;this.areaCache.clear();}
  }
  connected(area,target) {
    if(!this.areaCache.has(area)) {
      const {areas,areaPortals}=this.visibility.metadata,connected=new Set(),pending=[area];
      while(pending.length) {
        const current=pending.pop();if(connected.has(current))continue;connected.add(current);
        const [count,first]=areas[current]||[0,0];
        for(let i=first;i<first+count;i++)if(this.open[i])pending.push(areaPortals[i][1]);
      }
      this.areaCache.set(area,connected);
    }
    return this.areaCache.get(area).has(target);
  }
  query(listener,source,{visibility=true}={}) {
    const {world}=this,{metadata,pvs}=this.visibility;
    const from=this.visibility.findLeaf(listener),to=this.visibility.findLeaf(source);
    if(visibility&&from>=0&&to>=0) {
      const [a,area]=metadata.leaves[from],[b,target]=metadata.leaves[to];
      // Original -1 clusters are solid cells, not audible rooms. A missing
      // PVS row (-1 offset), on the other hand, is explicitly unfiltered.
      if(a<0||b<0)return {audible:false,blocked:false,distanceScale:1};
      const offset=metadata.clusters[a];
      if(offset>=0&&(!(pvs[offset+(b>>3)]&(1<<(b&7)))||!this.connected(area,target)))
        return {audible:false,blocked:false,distanceScale:1};
    }
    // Outside-map free cameras retain distance/pan instead of muting every
    // source. This also avoids an audio discontinuity with the no-clip cheat.
    const hit=world.collider.trace(listener,source,[0,0,0],[0,0,0],world.physicalModels,null);
    const blocked=hit.fraction<.99999;
    return {audible:true,blocked,distanceScale:blocked?1.5:1};
  }
}

// Convert the obstruction's effective distance without changing either the
// authored origin (for stereo pan) or the established distance curve.
export const obstructedSource=(listener,source,scale)=>source.map((v,i)=>listener[i]+(v-listener[i])*scale);

export function createStereoRoute(context,element) {
  const source=context.createMediaElementSource(element),upmix=context.createGain();
  upmix.channelCount=2;upmix.channelCountMode='explicit';upmix.channelInterpretation='speakers';
  const splitter=context.createChannelSplitter(2),left=context.createGain(),right=context.createGain(),merger=context.createChannelMerger(2);
  source.connect(upmix);upmix.connect(splitter);splitter.connect(left,0);splitter.connect(right,1);
  left.connect(merger,0,0);right.connect(merger,0,1);merger.connect(context.destination);
  return {source,upmix,splitter,left,right,merger,
    apply(gains){left.gain.value=gains.left;right.gain.value=gains.right;},
    disconnect(){for(const node of [source,upmix,splitter,left,right,merger])node.disconnect();}};
}
