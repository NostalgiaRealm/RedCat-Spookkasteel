// CAdamTriggerModel adds AddPlayerSpeed on entry (0x4d3b98) and removes
// the same vector on leave (0x4d40e8). These are velocities in metres/sec,
// not per-frame impulses: one metre is 32 Genesis world units.
export function triggerVelocity(game,position) {
  const result=[0,0,0];
  for(const object of game.triggers) {
    if(!object.enabled||!object.visible||object.health<=0)continue;
    const values=String(object.entity.AddPlayerSpeed||'').trim().split(/\s+/).map(Number);
    if(values.length!==3||!values.every(Number.isFinite)||!values.some(Boolean)||!game.contains(object,position))continue;
    values.forEach((value,index)=>result[index]+=value*32);
  }
  return result;
}

export function buttonTouched(game,object,position,contacts=[]) {
  // A solid button stops the swept player hull just outside its brush. A
  // contents-only test consequently misses floor tiles and wall pushbuttons.
  return [...contacts].includes(object.modelIndex)||game.contains(object,position,.1);
}

export function discoverSecret(game,object) {
  if(Number(object.entity.IsSecret)!==1||object.secretFound)return false;
  object.secretFound=true;
  game.state.secrets++;
  game.emit('scriptSound',{sound:'SecretFound.wav'});
  game.emit('secret',{id:object.id,position:[...game.objectPosition(object)]});
  return true;
}
