// Shared by tools/torches-check.mjs and tools/gpu-memory-check.mjs (--torch): puts RedCat at a place with hand torches in a
// browser. The game thread's script (source/web/worker.js) is changed on its way to the browser so that, once the player has
// the controls and the follow camera, the host switches collision off (the original's own no-clip byte), calls the game's
// SetPosition 0x4DBE20 and turns the view; the same calls as the scenario `torch` of tools/fixes-plugin.mjs. Nothing of the
// port's files is changed. 150 passes later the game thread logs "torch-place done {hands, bound, lights, polys}".

// where RedCat is put (game units), the turn of the view in radians, and how long the world's opening may take
export const PLACES = {
  castle: { world: 2, at: [-81, 281, -2960], turn: -0.5236, wait: 150000, what: 'Castle, between Handtorch01 and Handtorch02' },
  yard: { world: 3, at: [1616, 65, 3410], turn: 0, wait: 90000, what: 'Graveyard, before the entrance hands (AdamAnyActor132 and 133)' },
};
export const placer = (p) => `
  { const H = game.host, M = H.m, AT = ${JSON.stringify(p.at)}, TURN = ${p.turn}; let held = 0, placed = 0;
    H.mainLoop.beforePass.push((esp) => {
      if (placed < 0) return;
      const k = H.fixes.chain();
      if (!k || !k.player || k.state !== 3) return;
      if (!placed) {
        const dop = M.u32[(k.player + 0x250) >> 2], mode = dop ? M.i32[(dop + 0x450) >> 2] : 0;
        held = M.u8[k.player + 0x104] && M.i32[(k.player + 0x300) >> 2] === 0 && (mode === 5 || mode === 6) ? held + 1 : 0;
        if (held < 120) return;
        M.u8[k.engine + 0x48] = 0;
        H.fixes.scratch(esp, (mem) => { for (let j = 0; j < 3; j++) M.f32[(mem >> 2) + j] = AT[j]; M.call(0x4DBE20, [mem], k.player); });
        for (let j = 0; j < 3; j++) M.f32[(k.player + 0x1A4 + j * 4) >> 2] = AT[j];
        if (TURN) H.look.turn(TURN, 0);
        placed = 1; return;
      }
      if (++placed === 150) { const t = H.torches ? H.torches.stats : {}; log('torch-place done ' + JSON.stringify({ hands: t.hands, bound: t.bound, lights: t.lightsNow, polys: t.polysNow })); placed = -1; }
    }); }
`;
export const MARK = 'fixes = game.host.fixes || null;';

/** Routes the game thread's script of a Playwright context (or page) through the placer. Returns a function: was the script changed? */
export async function routeTorchPlace(ctx, place) {
  let patched = false;
  await ctx.route('**/web/worker.js', async (route) => {
    const r = await route.fetch(); let body = await r.text();
    if (body.includes(MARK)) { body = body.replace(MARK, MARK + placer(place)); patched = true; }
    await route.fulfill({ response: r, body });
  });
  return () => patched;
}
