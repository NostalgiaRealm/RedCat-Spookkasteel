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

// Contact comes from BSP contents, not water artwork or solid collision.
// Cache the few relevant models once; footfalls must not scan the whole map.
export function liquidContactModels(collision) {
  if(!collision?.models||!collision.nodes||!collision.leaves)return [];
  const result=[];
  for(let index=0;index<collision.models.length;index++) {
    const pending=[collision.models[index].root],seen=new Set();
    while(pending.length) {
      const id=pending.pop();if(seen.has(id))continue;seen.add(id);
      if(id<0) {
        if(collision.leaves[-id-1]?.contents&0x70000){result.push(index);break;}
      } else {
        const node=collision.nodes[id];if(node)pending.push(node[0],node[1]);
      }
    }
  }
  return result;
}

// Three applies opacity before alphaTest. Keep palette cutouts while allowing
// the original 115/255 and 125/255 water opacity to survive the test.
export function surfaceAlphaTest(group, texture, levelId) {
  // Graveyard faces 920/921 are solid 8-unit wall strips beside the stairs,
  // but reuse the keyed gate bitmap. Seal these strips, not the actual gates.
  // Do not require TEXINFO_TRANS globally: the forest's Lfgrn foliage relies
  // on bitmap-level color keying even on faces without that flag.
  if(levelId==='lvl02a'&&group.model===0&&group.flags===0&&texture?.name==='hek_door')return 0;
  return texture?.colorKey ? .5 * group.alpha : 0;
}

export function liquidDamageRate(contents, settings) {
  const player = settings?.game?.Player || {};
  return ((contents & 0x20000) ? Number(player.OozeDamagePerSecond ?? 3) : 0)
    + ((contents & 0x40000) ? Number(player.DeathDamagePerSecond ?? 200) : 0);
}
