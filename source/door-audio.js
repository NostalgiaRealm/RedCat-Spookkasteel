// DoorType 4 selects native empty.wav. These authored names are actual door
// panels; the same entity class also controls lifts, crates, steps and bridges.
// User-requested audible fallback uses original door recordings only for panels.
const PANEL_NAMES={
  lvl01a:/^(?:(?:secret)?door|fence$)/i,
  lvl02a:/^(?:mazedeur1_dm$|kerk_[12]_(?:links|rechts)$|froggerdeur_(?:links|rechts)$)/i,
  lvl03a:/^door_(?:left|right)_(?:walab01|airlab01)$/i,
};
export function doorMovementSound(object,level) {
  if(!object?.entity||object.visible===false||object.collected)return null;
  // DoorModel also animates invisible area barriers and cinematic carriers.
  // Their logical open/close events still run, but have no door panel to hear.
  // Check authored surfaces, not enabled/locked state: scripts can open real
  // disabled doors, and a closed secret panel is still visible geometry.
  if(level?.groups&&Number.isInteger(object.modelIndex)&&!level.groups.some(group=>
    group.model===object.modelIndex&&group.count>0&&group.alpha>0&&!(group.flags&4)))return null;
  const type=Number(object.entity.DoorType);
  const native={1:'opendoornormal.wav',2:'opendoorkey.wav',3:'opendoorsecret.wav'}[type];
  if(native)return native;
  const name=object?.entity.DaviName||'';
  if(type!==4||!PANEL_NAMES[level?.id]?.test(name))return null;
  return /secret/i.test(name)||Number(object.entity.IsSecret)?'opendoorsecret.wav':'opendoornormal.wav';
}
