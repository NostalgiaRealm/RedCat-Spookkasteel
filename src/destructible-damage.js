// RcAnyActor::ReceiveDamage (0x49da40): DamageTaken += amount, destroy
// only when DamageTaken > DamageMax. Props retain a positive health limit
// until destruction because visibility/collision/targeting use health > 0.
// Keeping the separate accumulator preserves an intact prop at equality
// without an epsilon sentinel or changing enemy/player health semantics.
export function damageDestructible(game,object,amount) {
  if(object?.kind!=='actor'||!(object.health>0)||object.actorSettings?.destroyable===false||
    !Number.isFinite(amount)||!(amount>0))return false;
  const previous=Number.isFinite(object.propDamage)&&object.propDamage>=0?object.propDamage:0;
  object.propDamage=previous+amount;
  if(object.propDamage<=object.health)return false;
  game.destroy(object);
  return true;
}

// Older saves stored remaining prop health with no accumulator. Treat that
// remainder as the new limit and start at zero. A missing field must also
// clear damage when restoring an older snapshot into the same live world.
export function restorePropDamage(object,value) {
  if(object.kind==='actor'&&object.health>0&&Number.isFinite(value)&&value>=0&&value<=object.health)
    object.propDamage=value;
  else delete object.propDamage;
}
