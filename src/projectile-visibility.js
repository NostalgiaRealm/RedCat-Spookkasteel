// Readability adjustment requested for the portable renderer. Native billboard
// dimensions remain bitmap pixels * INI Size. Only small distant visuals grow:
// at most 2.5x, toward 24 px (shots) / 6 px (ribbons) on a 1080-high viewport.
// Using viewport fractions avoids resolution/DPI-dependent changes in gameplay.
export const PROJECTILE_VISIBILITY = Object.freeze({projectile:24/1080,trail:6/1080,maxScale:2.5});

export function projectileVisibilityScale(nativeSize,viewDepth,projectionY,kind='projectile') {
  if(!(nativeSize>0)||!(viewDepth>0)||!(projectionY>0))return 1;
  const fraction=nativeSize*projectionY/(2*viewDepth);
  return Math.min(PROJECTILE_VISIBILITY.maxScale,Math.max(1,(PROJECTILE_VISIBILITY[kind]||PROJECTILE_VISIBILITY.projectile)/fraction));
}
