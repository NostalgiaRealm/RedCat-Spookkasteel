import {BufferAttribute,BufferGeometry} from 'three';

function immutableAttribute(source) {
  // Only the CPU array is shared. Three disposes attributes per geometry,
  // without cross-geometry GPU ownership: each pose needs its own handle.
  const attribute=new BufferAttribute(source.array,source.itemSize,source.normalized);
  attribute.name=source.name;attribute.setUsage(source.usage);attribute.gpuType=source.gpuType;
  return attribute;
}

// Posing changes positions, normals and bounds, never imported UVs/indices.
// Avoid making then discarding deep copies of those immutable arrays at load.
// Unfamiliar/morph geometry keeps Three's ordinary independent clone contract.
export function cloneActorPoseGeometry(source) {
  if(source.type!=='BufferGeometry'||Object.keys(source.morphAttributes).length||source.indirect)return source.clone();
  const geometry=new BufferGeometry(),data={};geometry.name=source.name;
  if(source.index)geometry.setIndex(immutableAttribute(source.index));
  for(const [name,attribute]of Object.entries(source.attributes)) {
    geometry.setAttribute(name,name==='uv'&&!attribute.isInterleavedBufferAttribute?
      immutableAttribute(attribute):attribute.clone(data));
  }
  for(const group of source.groups)geometry.addGroup(group.start,group.count,group.materialIndex);
  geometry.boundingBox=source.boundingBox?.clone()??null;
  geometry.boundingSphere=source.boundingSphere?.clone()??null;
  geometry.setDrawRange(source.drawRange.start,source.drawRange.count);
  geometry.morphTargetsRelative=source.morphTargetsRelative;geometry.userData=source.userData;
  return geometry;
}
