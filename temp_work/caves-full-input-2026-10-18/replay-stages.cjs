// Observed normal-input stages, loaded by eval in an existing driver after controls-latest.cjs.
// No fixture setup or game-state writes. Call individual stages and inspect each result.
// Combining these stages into a single uninterrupted campaign is a separate validation.
globalThis.waitObserved = async (predicate, timeout = 20000) => {
  for (let ms = 0; ms < timeout; ms += 50) {
    if (await page.evaluate(predicate)) return ms;
    await page.waitForTimeout(50);
  }
  throw new Error('Observed timing condition was not reached');
};
globalThis.holdInput = async (key, ms) => {
  await page.keyboard.down(key); await page.waitForTimeout(ms); await page.keyboard.up(key);
};
globalThis.walkJump = async (target, double = false) => {
  await page.keyboard.down('ShiftLeft');
  try { return await jump(target, {double}); }
  finally { await page.keyboard.up('ShiftLeft'); }
};
globalThis.requireContact = async name => {
  const result = await page.evaluate(name => {
    const r = __redcat.gameplay.find(name)[0];
    return {name, model: r.modelIndex, contacts: [...__redcat.world.player.contacts], p: [...__redcat.world.player.position]};
  }, name);
  if (!result.contacts.includes(result.model)) throw new Error('Missed platform: ' + JSON.stringify(result));
  return result;
};
globalThis.waitWaterfallOff = async name => {
  let seenOn = false;
  for (let i = 0; i < 90; i++) {
    const enabled = await page.evaluate(n => __redcat.gameplay.find(n)[0].enabled, name);
    if (enabled) seenOn = true;
    else if (seenOn) return;
    await page.waitForTimeout(100);
  }
  throw new Error('No fresh waterfall off edge: ' + name);
};
globalThis.waterfallForward = [
  ['w_power01',[-1300,2770],[-1300,2910]],
  ['w_power02',[-1300,2950],[-1300,3100]],
  ['w_power03',[-1345,3080],[-1490,3080]],
  ['w_power04',[-1510,3080],[-1650,3080]],
  ['w_power05',[-1695,3080],[-1840,3080]],
  ['w_power06',[-1845,3045],[-1845,2900]],
  ['w_power07',[-1845,2865],[-1845,2720]],
];
globalThis.waterfallReturn = [
  ['w_power07',[-1845,2750],[-1845,2895]],
  ['w_power06',[-1845,2960],[-1845,3090]],
  ['w_power05',[-1805,3080],[-1660,3080]],
  ['w_power04',[-1620,3080],[-1490,3080]],
  ['w_power03',[-1445,3080],[-1310,3080]],
  ['w_power02',[-1300,3050],[-1300,2920]],
  ['w_power01',[-1300,2865],[-1300,2735]],
];
globalThis.crossWaterfalls = async (steps = waterfallForward) => {
  const results = [];
  for (const [name,start,goal] of steps) {
    await move(start); await face(goal); await waitWaterfallOff(name);
    results.push({name, state: await jump(goal)});
  }
  return results;
};
globalThis.airObservedStages = {
  async rock01To02() {
    await move([1228,3280]);
    await waitObserved(() => {
      const g = __redcat.gameplay, a=g.scripts.modelTransforms.get(g.find('air_rock01')[0].modelIndex).translation;
      const b=g.scripts.modelTransforms.get(g.find('air_rock02')[0].modelIndex).translation;
      return a[1]-16>-55 && b[0]>-22 && Math.abs(b[2])<30;
    },40000);
    await jump([1217,3480],{double:true}); return requireContact('air_rock02');
  },
  async rock02To03() {
    await waitObserved(() => {
      const g=__redcat.gameplay,p=__redcat.world.player.position,t=g.scripts.modelTransforms.get(g.find('air_rock03')[0].modelIndex).translation;
      return p[0]<860 && p[2]>3360 && p[2]<3460 && t[1]-18<20;
    });
    await walkJump([930,3460],true); return requireContact('air_rock03');
  },
  async rock03To04() {
    await move([930,3430]); await face([893,3515]);
    await waitObserved(() => {
      const g=__redcat.gameplay,a=g.scripts.modelTransforms.get(g.find('air_rock03')[0].modelIndex).translation,b=g.scripts.modelTransforms.get(g.find('air_rock04')[0].modelIndex).translation;
      return a[1]-18>130 && b[2]<-250;
    });
    await walkJump([893,3515]); await page.waitForTimeout(400); return requireContact('air_rock04');
  },
  async rock04To05() {
    await waitObserved(() => {
      const g=__redcat.gameplay,a=g.scripts.modelTransforms.get(g.find('air_rock04')[0].modelIndex).translation,b=g.scripts.modelTransforms.get(g.find('air_rock05')[0].modelIndex).translation;
      return a[2]>-1 && b[0]<10;
    });
    await page.waitForTimeout(70); await walkJump([945,3770],true);
    await page.waitForTimeout(300); return requireContact('air_rock05');
  },
  async secretFrom05() {
    // Start at the just-boarded western endpoint of05, as observed in runtime-attempt6.
    await jump([1040,3870]); await page.waitForTimeout(300); await requireContact('air_rock06');
    await waitObserved(() => {
      const g=__redcat.gameplay,a=g.scripts.modelTransforms.get(g.find('air_rock06')[0].modelIndex).translation,b=g.scripts.modelTransforms.get(g.find('air_rock07')[0].modelIndex).translation;
      return a[0]>110 && 400+b[1]<150;
    });
    await page.waitForTimeout(80); await jump([1219,3901]); await page.waitForTimeout(300); await requireContact('air_rock07');
    await waitObserved(() => __redcat.world.player.position[1]>385);
    await walkJump([1340,3940]); await page.waitForTimeout(350);
    for (const p of [[1328,3946],[1406,3917],[1404,3815],[1330,3793]]) await move(p);
    return observe();
  },
  async upper08To09() {
    // Start upper western bridge; switch winds off later from upper07.
    await move([1630,3590]);
    await waitObserved(() => {
      const g=__redcat.gameplay,t=g.scripts.modelTransforms.get(g.find('air_rock08')[0].modelIndex).translation;
      return t[0]<8 && t[2]>-80 && t[2]<-30;
    });
    await walkJump([1730,3575]); await page.waitForTimeout(200); await requireContact('air_rock08');
    await jump([1880,3675]); await page.waitForTimeout(300); return requireContact('air_rock09');
  },
  async rock09ToUpperButton() {
    await waitObserved(() => { const p=__redcat.world.player.position; return p[2]>3750&&p[0]>1910; });
    await jump([2030,3875]); await page.waitForTimeout(350);
    await move([2044,3928]); await move([2050,4025]); await face([2096,4025]); await holdInput('KeyW',280);
    return observe();
  },
  async upperButtonToNorthExit() {
    await move([1960,3910]);
    await waitObserved(() => {const g=__redcat.gameplay,p=g.scripts.modelTransforms.get(g.find('air_rock09')[0].modelIndex);return p.origin[0]+p.translation[0]>1895&&p.origin[2]+p.translation[2]>3840;});
    await walkJump([1840,3890]); await page.waitForTimeout(250); await requireContact('air_rock09');
    await waitObserved(() => {const g=__redcat.gameplay,p=g.scripts.modelTransforms.get(g.find('air_rock09')[0].modelIndex).translation;return p[0]>15&&p[0]<35&&p[2]<10;});
    await jump([1720,3530]); await page.waitForTimeout(200); await requireContact('air_rock08');
    await waitObserved(() => {const p=__redcat.world.player.position;return p[2]<3475&&p[2]>3430&&p[0]>1870;});
    await jump([2030,3370]); await page.waitForTimeout(300); await move([2036,3290]);
    await face([2036,3200]); await holdInput('KeyE',100); await holdInput('KeyW',1000); return observe();
  },
};
