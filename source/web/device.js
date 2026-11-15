// Whether this is a phone or a tablet in a browser. The rule is the JavaScript port's (its
// touch-controls.js, isMobileWeb), so that the same devices get what that port gave them: touch
// controls by themselves (touch.js), and the phone profile of the picture (game.js, settings.js):
// a pixel budget for the automatic resolution, anti-aliasing off to begin with, at most 60 frames
// per second, a lower render scale when drawing cannot keep up.
export function isPhone({ navigator: device = globalThis.navigator, matchMedia = globalThis.matchMedia ? globalThis.matchMedia.bind(globalThis) : null } = {}) {
  const ua = (device && device.userAgent) || '';
  if (/Electron\//i.test(ua)) return false;
  if (device && device.userAgentData && device.userAgentData.mobile === true) return true;
  if (/Android|iPhone|iPad|iPod|IEMobile|Opera Mini|Mobile/i.test(ua)) return true;
  const touches = Number((device && device.maxTouchPoints) || 0);
  // an iPad says it is a Mac
  if (touches > 1 && (/Macintosh/i.test(ua) || (device && device.platform === 'MacIntel'))) return true;
  try {
    return touches > 0 && !!matchMedia && matchMedia('(pointer: coarse)').matches && matchMedia('(hover: none)').matches;
  } catch (e) {
    return false;
  }
}
export const phone = isPhone();
