import {Box3,Euler,Matrix4,Vector3} from 'three';
import {GAMEPLAY_SETTINGS} from './gameplay-settings.js';

// AdamItem::Setup (0x4e1335) calls AdamActor's downward box sweep
// (0x49d020), then the item update adds Settings/items.ini ItemYOffset.
export const PICKUP_FLOOR_DEPTH=100*32;
export const PICKUP_HEIGHT=GAMEPLAY_SETTINGS.items.General.ItemYOffset;

export function pickupBounds(data,entity={}) {
  const settings=data.settings||{},basis=new Matrix4().makeRotationFromEuler(
    new Euler(...(settings.initialRotationDegrees||[-90,0,0]).map(v=>v*Math.PI/180)));
  const scale=Number(entity.Scale)>0?Number(entity.Scale):settings.scale??1;
  basis.scale(new Vector3(scale,scale,scale));
  const rotation=new Matrix4().makeRotationFromEuler(new Euler(
    ...['X','Y','Z'].map(axis=>Number(entity['Rotate'+axis]||0)*Math.PI/180),'ZYX'));
  const box=new Box3(new Vector3(...data.bounds.min),new Vector3(...data.bounds.max))
    .applyMatrix4(rotation.multiply(basis));
  return {min:box.min.toArray(),max:box.max.toArray()};
}

export function pickupPlacement(origin,bounds,trace) {
  const start=[origin[0],origin[1]+1,origin[2]],end=[origin[0],origin[1]-PICKUP_FLOOR_DEPTH,origin[2]];
  const hit=trace(start,end,bounds.min,bounds.max);
  // A failed/embedded sweep retains the authored anchor, including the
  // deliberately buried forest mirror. Never send it to the trace endpoint.
  const supported=!hit.startSolid&&hit.fraction<1;
  const floorY=supported?hit.end[1]:origin[1];
  return {offsetY:floorY-origin[1]+PICKUP_HEIGHT,supported,floorY,
    startSolid:hit.startSolid,modelIndex:hit.modelIndex,actorId:hit.actorId};
}

export function pickupPosition(object) {
  if(object.kind!=='pickup'||object.pickupPlacement===undefined)return object.position;
  // Keep the old save format's authored anchors. This derived offset is
  // recomputed against the initial world, never the restored platform pose.
  // Repeated loads and model transforms therefore cannot accumulate a drop.
  const p=object.position;
  return [p[0],p[1]+object.pickupPlacement.offsetY,p[2]];
}
