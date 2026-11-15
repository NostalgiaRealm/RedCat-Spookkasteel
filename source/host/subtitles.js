// The readable subtitle box of the JavaScript port, as a setting (off = the original's drawing).
//
//   What the original does (read, addresses are RcHcGame.dat's; docs/research/cutscenes.md)
//   - A line of a scene is said with the script call CutSceneSay(id) 0x56A2B0 -> 0x481DD0: the text
//     of that id is looked up (0x5ACAF0, section "CUT Scene"), the voice of the same name is started,
//     and the text is kept in the cutscene object (CRcCutScene, player+0x258): a string at +0x18
//     (characters at +0x1C, length at +0x20).
//   - The object's draw, 0x481670 (vtable 0x64E374 slot 2, called every frame with the HUD), draws
//     the two bars and then, while the state (+0xA8) is 2: empties the text when its voice is over
//     (0x48180E), and draws it when three things hold (0x481893): the byte +0xB4, the text object
//     at +0xB8, and a length that is not 0. The line is drawn as plain letters over the picture,
//     with nothing behind them ([CUT Scene] of Game.ini: Verdana 23, 500 wide, from line 300).
//
//   What this module does, through a host hook on that draw ('cutdraw', tools/recomp/build.py)
//   - Setting off: the original body and nothing else.
//   - Setting on: the original body runs as it is, so the game's memory is the original's (the text
//     drawing makes and keeps things of its own: with the letters' branch switched off, as this
//     module did until 2026-11-14, heap and pages differed from the first line on). What is left
//     out is in the render driver: the polygons the body hands it after the two bars. The bars
//     are the two calls of 0x5614E0 at the top of the body, one RenderMiscTexturePoly each; every
//     later one of the call is a letter (run: 2 without a line, 17 to 196 with one). The line the
//     original drew is handed to the platform (host.subtitles.onText), which shows it in a box of
//     its own (source/web/game.js, #subtitle). Which line, when it appears and when it goes are
//     the original's: the text is read after the original has run.
// Picture only: this module writes nothing into game memory, and nothing here is part of a save
// state (the line is read again at the next frame). tools/fixes-check.mjs ('subtitle') demands the
// same memory with the box on and off.
const BARS = 2;
export function installSubtitles(m, host) {
  const { u8, u32, i32 } = m;
  const api = host.subtitles = {
    box: !!(host.options && host.options.subtitleBox),
    text: '',              // the line that is shown now
    onText: null,          // (text) => void, '' when the line goes
    drawn: false,
    inside: false,         // the cutscene's draw is running with the box on
    /** Asked by the render driver for every RenderMiscTexturePoly inside that draw: true for a letter. */
    hide() { return ++polys > BARS; },
    stats: { calls: 0, hidden: 0 },
    /** Switches the box while the game runs (the page's setting). */
    set(on) { api.box = !!on; if (!api.box) say(''); },
    /** Once per presented frame: a line stays only while the game keeps drawing it. */
    frame() { if (api.text && !api.drawn) say(''); api.drawn = false; },
  };
  let polys = 0;
  const say = (text) => { if (text === api.text) return; api.text = text; if (api.onText) api.onText(text); };
  const h = m.meta.hooks && m.meta.hooks.cutdraw;
  if (!h) { host.log('subtitles: no hook on the cutscene draw in this build, the original draws its lines'); api.missing = true; return; }
  const bodyIndex = m.meta.eh.guardBodies[String(h.addr)], body = (esp, eax, ecx, edx) => m.callBody(bodyIndex, esp, eax, ecx, edx);      // no result array per call
  // Windows-1252, the game's code page: the bytes 0x80..0x9F that are not Latin-1
  const CP1252 = '€\u0081‚ƒ„…†‡ˆ‰Š‹Œ\u008DŽ\u008F\u0090‘’“”•–—˜™š›œ\u009DžŸ';
  const read = (p, n) => { let s = ''; for (let k = 0; k < n && k < 1024; k++) { const c = u8[p + k]; s += c >= 0x80 && c <= 0x9F ? CP1252[c - 0x80] : String.fromCharCode(c); } return s; };
  // thiscall(this, one argument), ret 4
  m.bindRaw('hook!cutdraw', h.pop, (esp, ecx, edx, eax) => {
    if (!api.box || api.unsure) return body(esp, eax, ecx, edx);
    const c = ecx >>> 0;
    api.stats.calls++;
    polys = 0; api.inside = true;
    let r;
    try { r = body(esp, eax, ecx, edx); } finally { api.inside = false; }
    const n = u32[(c + 0x20) >> 2], p = u32[(c + 0x1C) >> 2];
    const shown = i32[(c + 0xA8) >> 2] === 2 && u8[c + 0xB4] !== 0 && u32[(c + 0xB8) >> 2] !== 0 && n !== 0 && p !== 0 && !(host.skip && host.skip.active);
    // a call without a line that hands the driver more than the bars: not the body this was written for; the original draws from then on
    if (!shown && polys > BARS && !(host.skip && host.skip.active)) { api.unsure = true; host.log('subtitles: the cutscene draw is not as expected, the original draws its lines'); }
    if (shown) { api.stats.hidden++; api.drawn = true; }
    say(shown ? read(p, n) : '');
    return r;
  });
  m.bound.add('hook!cutdraw');
}
