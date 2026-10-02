// Water can also be fully opaque: the graveyard's moving-platform moat uses
// Air_Wtr00 on its damage trigger. Ordinary opaque editor helpers stay hidden.
export function visibleLiquidGroup(group, textures, damagingTrigger=false) {
  return group.alpha > 0 && (group.alpha < 1 || group.alpha === 1 && damagingTrigger) && /^Air_Wtr/i.test(textures?.[group.texture]?.name || '');
}

export function visibleLiquidGroups(level) {
  const names=new Map((level.entities||[]).filter(e=>e.classname==='%Model%').map(e=>[e['%name%'],Number(e.Model)]));
  const damaging=new Set((level.entities||[]).filter(e=>e.classname==='Trigger'&&Number(e.DamagePerSecond)>0).map(e=>names.get(e.Model)).filter(Number.isInteger));
  return new Set((level.groups||[]).filter(group=>visibleLiquidGroup(group,level.textures,damaging.has(group.model))));
}

// Three applies opacity before alphaTest. Keep palette cutouts while allowing
// the original 115/255 and 125/255 water opacity to survive the test.
export function surfaceAlphaTest(group, texture) {
  return texture?.colorKey ? .5 * group.alpha : 0;
}

export function liquidDamageRate(contents, settings) {
  const player = settings?.game?.Player || {};
  return ((contents & 0x20000) ? Number(player.OozeDamagePerSecond ?? 3) : 0)
    + ((contents & 0x40000) ? Number(player.DeathDamagePerSecond ?? 200) : 0);
}
