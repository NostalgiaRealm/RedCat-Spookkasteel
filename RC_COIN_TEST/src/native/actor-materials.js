export function actorOverrideKey(entity) {
  if(entity?.AlternativeBitmap!=='1')return null;
  return `${entity.AltBitmapFileName}|${entity.AltBitmapAlphaFileName}`.toLowerCase();
}

// AdamAnyActor's alternative bitmap pair replaces the placeholder embedded
// ACT material. The alpha bitmap carries fractional coverage, not a colour key.
export function actorOverrideColor(entity) {
  return String(entity.AlternativeColour||'255 255 255').trim().split(/\s+/).map(v=>Math.max(0,Math.min(1,Number(v)/255)));
}
