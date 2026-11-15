// Asks the browser not to clear this site's storage when space runs short: the save states, the
// players and what the JavaScript port left here. A browser may refuse; nothing depends on the answer.
//
// Chromium and WebKit decide by themselves, at once and without showing anything. Firefox asks the
// visitor, and a request made while the page enters full screen is cancelled, while one made in
// full screen makes Firefox leave it. So this is never called from the start of a game (game.js
// begin): the menu calls it at a calm moment (a player made or chosen, the Hoofdmenu of a visitor
// who comes back), it does nothing in full screen, and a browser that showed its question once is
// not asked again on later visits (the mark `rcspook-recomp.persistAsked`; a visitor who closed the
// question without answering would otherwise get it at every visit). A browser that answers at
// once gets no mark and is simply asked again next visit, as before.
// A question that Firefox cancelled itself because a game was started over it (full screen entered
// while it was open: the answer is "no" with the permission still at 'prompt') was not answered by
// the visitor. The mark then becomes `cancelled:<n>` and the next visit's menu asks once more, at
// most CANCELS times: somebody who starts a game within seconds at every visit is not asked forever.
import { store } from './persist.js';

const KEY = 'rcspook-recomp.persistAsked';
const PROMPT_MS = 500;          // no answer after this long: the browser is asking the visitor
const CANCEL_MS = 1000;         // full screen within this long of a "no": the browser cancelled its question
const CANCELS = 2;
let tried = false;              // once per visit

const cancels = (mark) => { const m = /^cancelled:(\d+)$/.exec(mark || ''); return m ? Number(m[1]) : -1; };

export async function keepStorage() {
  const s = navigator.storage;
  if (tried || !s || !s.persist || !s.persisted || document.fullscreenElement) return;
  tried = true;
  try {
    if (await s.persisted()) return;
    const state = () => (navigator.permissions && navigator.permissions.query ? navigator.permissions.query({ name: 'persistent-storage' }).then((q) => q.state, () => null) : Promise.resolve(null));
    if (await state() === 'denied') return;
    const before = store.get(KEY), n = cancels(before);
    if (before && (n < 0 || n >= CANCELS)) return;
    if (document.fullscreenElement) { tried = false; return; }          // (entered while the questions above were out: another time)
    let settled = false, marked = false;
    const mark = setTimeout(() => { if (!settled) { marked = true; store.set(KEY, String(Date.now())); } }, PROMPT_MS);
    s.persist().catch(() => false).then(async (kept) => {
      settled = true; clearTimeout(mark);
      if (kept || !marked || await state() !== 'prompt') return;
      // "no" to a question that was open, and nothing decided: cancelled when full screen is there now or comes at once
      const cancelled = () => { document.removeEventListener('fullscreenchange', seen); clearTimeout(wait); store.set(KEY, `cancelled:${Math.max(n, 0) + 1}`); };
      const seen = () => { if (document.fullscreenElement) cancelled(); };
      const wait = setTimeout(() => document.removeEventListener('fullscreenchange', seen), CANCEL_MS);
      if (document.fullscreenElement) cancelled(); else document.addEventListener('fullscreenchange', seen);
    });
  } catch (e) { /* not known: nothing depends on it */ }
}
