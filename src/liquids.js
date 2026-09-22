// Authored translucent water faces may belong to non-solid damage triggers.
// Opaque editor brushes (including invisible kill volumes) are not water art.
export function visibleLiquidGroup(group, textures) {
  return group.alpha > 0 && group.alpha < 1 && /^Air_Wtr/i.test(textures?.[group.texture]?.name || '');
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
