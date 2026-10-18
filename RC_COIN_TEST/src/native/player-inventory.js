// CRcItemPotion calls 0x439e60: the native counter is capped at 100 there.
// Player.LimitMaxPotions=20 is loaded into a separate field, not this limit.
// See docs/inventory-limits-native.md for the executable evidence.
export function playerInventoryLimits(settings) {
  const config=settings?.game?.Player||{};
  const limit=(key,fallback)=>Number.isFinite(config[key])&&config[key]>=0?Math.floor(config[key]):fallback;
  return {potions:100,mirrors:limit('LimitMaxParts',5),score:limit('LimitMaxScore',999999)};
}
