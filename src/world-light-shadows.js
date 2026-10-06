import {actorFloorShadowPoint,traceActorFloorBsp} from './actor-floor-lighting.js';
import {worldLightFrame,worldLightLuxelStrength} from './world-lighting.js';

/** Reproduce import_levels.py's atlas packing, including its duplicated edge
 * samples. Face IDs and texture frames are preserved in actor-floor metadata. */
export function worldLightmapPlacements(metadata,width) {
  let x=4,y=0,rowHeight=4;
  const placements=[];
  metadata.faces.forEach((face,index)=>{
    const w=face[16],h=face[17];
    if(face[18]<0||w<=0||h<=0||face[19]&(2|32|32768))return;
    if(x+w+2>width){x=0;y+=rowHeight;rowHeight=0;}
    placements.push({index,x:x+1,y:y+1,width:w,height:h,face});
    x+=w+2;rowHeight=Math.max(rowHeight,h+2);
  });
  return placements;
}

/** Native CombineDLightWithRGBMapWithShadow (0x5d31f0) traces each affected
 * luxel through world BSP root 0, contents 0x43. Actors and moving brushes do
 * not occlude this path. Rays use the raw authored face endpoint, one unit
 * above its plane, and the world light position, even on model receivers.
 *
 * One byte per atlas texel holds eight independent obstruction bits. Stable
 * light identities retain their bit when the renderer reorders its slots.
 * Cache the maximum pulse radius: changing colour/radius/camera/brush poses
 * then costs no traces, uploads, geometry changes or extra render passes. */
export class WorldLightShadows {
  constructor(collision,metadata,width,height) {
    this.collision=collision;this.width=width;this.height=height;
    this.data=new Uint8Array(width*height);this.sources=new Map();
    this.stats={traces:0,builds:0,blocked:0};
    this.placements=worldLightmapPlacements(metadata,width);
    for(const tile of this.placements) {
      if(tile.x+tile.width>=width||tile.y+tile.height>=height)throw new Error('World shadow atlas differs from imported lightmap');
      const f=tile.face,plane=collision.planes[f[20]],sign=f[21]?-1:1;
      tile.frame=worldLightFrame(f.slice(6,9),f.slice(9,12),f.slice(14,16),plane.slice(0,3).map(v=>v*sign),plane[3]*sign);
    }
  }
  bit(light) {return light?.castShadow?(this.sources.get(light.shadowKey)?.bit||0):0;}
  update(lights) {
    const shadowed=lights.filter(light=>light.castShadow&&light.radius>0);
    const wanted=new Set(shadowed.map(light=>light.shadowKey));
    let changed=false;
    for(const light of shadowed) {
      const key=light.shadowKey;
      if(key===undefined)throw new Error('Shadow-casting world light needs a stable identity');
      const radius=Math.max(light.radius,light.shadowRadius||0);
      let source=this.sources.get(key);
      if(source&&radius<=source.radius&&light.position.every((v,i)=>v===source.position[i]))continue;
      if(!source) {
        if(this.sources.size===8) {
          // Only eight lights can be rendered together. Reuse an absent
          // source's bit if future levels contain more authored shadow lamps.
          const spare=[...this.sources].find(([id])=>!wanted.has(id));
          if(!spare)throw new Error('More than eight simultaneous world shadow lights');
          source={bit:spare[1].bit};this.sources.delete(spare[0]);
        } else {
          let bit=1;const used=[...this.sources.values()].map(value=>value.bit);
          while(used.includes(bit))bit*=2;
          source={bit};
        }
        this.sources.set(key,source);
      }
      source.position=[...light.position];source.radius=radius;
      this.rebuild(source);changed=true;
    }
    return changed;
  }
  rebuild(source) {
    const bit=source.bit,keep=255^bit;
    for(let i=0;i<this.data.length;i++)this.data[i]&=keep;
    this.stats.builds++;
    for(const tile of this.placements) {
      const frame=tile.frame,p=source.position;
      if(source.radius<=Math.abs(p[0]*frame.normal[0]+p[1]*frame.normal[1]+p[2]*frame.normal[2]-frame.distance))continue;
      const {width,height,x,y}=tile;
      for(let row=0;row<height;row++)for(let col=0;col<width;col++) {
        if(!worldLightLuxelStrength(source,frame,[col,row]))continue;
        const endpoint=actorFloorShadowPoint(tile.face,this.collision.planes[tile.face[20]],[col,row]);
        if(!endpoint)continue;
        this.stats.traces++;
        if(traceActorFloorBsp(this.collision,p,endpoint,0)) {
          this.data[(y+row)*this.width+x+col]|=bit;this.stats.blocked++;
        }
      }
      // Match the baked atlas's nearest-edge gutters exactly; filtering is
      // performed after each of the four independently shadowed samples.
      for(let row=-1;row<=height;row++)for(let col=-1;col<=width;col++) {
        if(row>=0&&row<height&&col>=0&&col<width)continue;
        const from=(y+Math.max(0,Math.min(height-1,row)))*this.width+x+Math.max(0,Math.min(width-1,col));
        this.data[(y+row)*this.width+x+col]|=this.data[from]&bit;
      }
    }
  }
}
